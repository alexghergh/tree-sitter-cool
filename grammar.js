const PREC = {
    ASSIGN: 1,          // <-
    NOT: 2,             // not - boolean complent
    REL: 3,             // <  <=  =
    ADD: 4,             // +  -
    MULT: 5,            // *  /
    ISVOID: 6,          // isvoid
    TILDE: 7,           // ~ - integer complement
    DISPTCH: 8,         // @
    OBJ_ACCS: 9,        // .
};

module.exports = grammar({
    name: 'cool',

    extras: $ => [
        /\s/,
        $.line_comment,
        $.block_comment
    ],

    word: $ => $.identifier,

    conflicts: $ => [
        [$.dispatch_expression, $.let_expression]
    ],

    rules: {
        // a cool source file contains one or more classes
        source_file: $ => repeat1($.class_definition),

        // class definition
        class_definition: $ => seq(
            'class',
            field('class_type', $._type_specifier), // class name
            optional( // inheritance
                seq(
                    'inherits',
                    field('inherit_type', $._type_specifier)
                ),
            ),
            '{',
            repeat(field('class_feature', $._feature)), // the body contains 'features' (see the manual)
            '}',
            ';'
        ),

        _feature: $ => choice( // a class feature may be:
            $.method_definition, // - a method
            $.attribute_definition // - an attribute
        ),

        method_definition: $ => seq(
            field('name', $._method_identifier),
            field('param_list', $.parameter_list),
            ':',
            field('return_type', $._type_specifier), // return type
            '{',
            field('body', $._expression),
            '}',
            ';'
        ),

        parameter_list: $ => seq(
            '(',
            commaSep($.parameter),
            ')'
        ),

        parameter: $ => seq(
            field('name', $._parameter_identifier),
            ':',
            field('type', $._type_specifier)
        ),

        attribute_definition: $ => seq(
            field('name', $._attribute_identifier),
            ':',
            field('type', $._type_specifier),
            optional(
                seq(
                    '<-',
                    field('value', $._expression)
                )
            ),
            ';'
        ),

        // expressions
        _expression: $ => choice(
            $.assignment_expression,
            $.dispatch_expression,
            $.method_call_expression,
            $.if_expression,
            $.while_expression,
            $.expr_block_expression,
            $.let_expression,
            $.case_expression,
            $.newtype_expression,
            $.isvoid_expression,
            $.binary_expression,
            //$.relation_expression, <- mixed with binary
            $.integer_complement,
            $.boolean_complement,
            $.parentheses_expression,
            $._identifier_expression,
            $.integer_literal,
            $.string_literal,
            $.self,
            $.true,
            $.false,
        ),

        assignment_expression: $ => prec.right(PREC.ASSIGN, seq(
            field('lhs', $._variable_identifier),
            '<-',
            field('rhs', $._expression)
        )),

        dispatch_expression: $ => seq(
            field('dispatch_expr', $._expression),
            optional(
                seq(
                    '@',
                    field('type', $._type_specifier)
                )
            ),
            '.',
            field('method_id', $._method_identifier),
            field('args_list', $.arguments_list)
        ),

        method_call_expression: $ => seq(
            field('method_id', $._method_identifier),
            field('args_list', $.arguments_list)
        ),

        arguments_list: $ => seq(
            '(',
            commaSep(field('arg', $._expression)),
            ')'
        ),

        if_expression: $ => seq(
            'if',
            field('cond', $._expression),
            'then',
            field('then', $._expression),
            'else',
            field('else', $._expression),
            'fi'
        ),

        while_expression: $ => seq(
            'while',
            field('cond', $._expression),
            'loop',
            field('body', $._expression),
            'pool'
        ),

        expr_block_expression: $ => seq(
            '{',
            field('expr', repeat1(seq(
                $._expression,
                ';'
            ))),
            '}'
        ),

        let_expression: $ => seq(
            'let',
            field('initialization', $.variable_definition_list),
            'in',
            field('body', $._expression)
        ),

        variable_definition_list: $ => commaSep1(
            field('var_def', $.let_variable_definition)
        ),

        let_variable_definition: $ => seq(
            field('id', $._variable_identifier),
            ':',
            field('type', $._type_specifier),
            optional(seq(
                '<-',
                field('value', $._expression)
            )),
        ),

        case_expression: $ => seq(
            'case',
            field('cond', $._expression),
            'of',
            field('branch_list', $.case_branch_list),
            'esac'
        ),

        case_branch_list: $ => repeat1(
            field('branch', $.case_branch)
        ),

        case_branch: $ => seq(
            field('id', $._variable_identifier),
            ':',
            field('type', $._type_specifier),
            '=>',
            field('expr', $._expression),
            ';'
        ),

        newtype_expression: $ => seq(
            'new',
            field('type', $._type_specifier)
        ),

        isvoid_expression: $ => prec.left(PREC.ISVOID, seq(
            'isvoid',
            field('expr', $._expression)
        )),

        binary_expression: $ => {

            const table = [
                ['+', PREC.ADD],
                ['-', PREC.ADD],
                ['*', PREC.MULT],
                ['/', PREC.MULT],
                ['<', PREC.REL],
                ['<=', PREC.REL],
                ['=', PREC.REL],
            ];

            return choice(...table.map(([operator, precedence]) => {
                return prec.left(precedence, seq(
                    field('lhs', $._expression),
                    operator,
                    field('rhs', $._expression)
                ))
            }));
        },

        integer_complement: $ => prec.left(PREC.TILDE, seq(
            '~',
            field('expr', $._expression) // must be integer
        )),

        boolean_complement: $ => prec.left(PREC.NOT, seq(
            'not',
            field('expr', $._expression) // must be boolean
        )),

        parentheses_expression: $ => seq(
            '(',
            field('expr', $._expression),
            ')'
        ),

        _identifier_expression: $ => $._variable_identifier,

        integer_literal: $ => /\d+/,

        string_literal: $ => seq(
            '"',
            repeat(choice(
                $._escape_sequence,
                /[^\\"]+/
            )),
            '"'
        ),

        _escape_sequence: $ => token(prec(1, seq(
            '\\',
            choice(
                /\n/,
                /./,
            )
        ))),

        self: $ => 'self',

        true: $ => 'true',

        false: $ => 'false',

        // language types
        _type_specifier: $ => choice(
            $.builtin_type,
            $.type_identifier,
        ),

        builtin_type: $ => token(choice(
            'Object',
            'IO',
            'Int',
            'String',
            'Bool',
            'SELF_TYPE'
        )),

        // identifiers
        identifier: $ => /[a-zA-Z_][a-zA-Z_0-9]*/,

        type_identifier: $ => /[A-Z][a-zA-Z_0-9]*/,

        feature_identifier: $ => /[a-z][a-zA-Z_0-9]*/,

        _attribute_identifier: $ => alias($.feature_identifier, $.attribute_identifier),
        _method_identifier: $ => alias($.feature_identifier, $.method_identifier),
        _parameter_identifier: $ => alias($.feature_identifier, $.parameter_identifier),
        _variable_identifier: $ => alias($.feature_identifier, $.variable_identifier),

        // comments
        line_comment: $ => token(seq(
            '--',
            /[^\n]*/
        )),

        block_comment: $ => seq(
            '(*',
            repeat(choice(
                /./
            )),
            '*)'
        ),
    }
});

function commaSep(rule) {
    return optional(commaSep1(rule))
}

function commaSep1(rule) {
    return seq(rule, repeat(seq(',', rule)))
}
