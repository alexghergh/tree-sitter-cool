#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 158
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 96
#define ALIAS_COUNT 3
#define TOKEN_COUNT 52
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 24
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 36

enum {
  sym_identifier = 1,
  anon_sym_class = 2,
  anon_sym_inherits = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_SEMI = 6,
  anon_sym_COLON = 7,
  anon_sym_LPAREN = 8,
  anon_sym_COMMA = 9,
  anon_sym_RPAREN = 10,
  anon_sym_LT_DASH = 11,
  anon_sym_AT = 12,
  anon_sym_DOT = 13,
  anon_sym_if = 14,
  anon_sym_then = 15,
  anon_sym_else = 16,
  anon_sym_fi = 17,
  anon_sym_while = 18,
  anon_sym_loop = 19,
  anon_sym_pool = 20,
  anon_sym_let = 21,
  anon_sym_in = 22,
  anon_sym_case = 23,
  anon_sym_of = 24,
  anon_sym_esac = 25,
  anon_sym_EQ_GT = 26,
  anon_sym_new = 27,
  anon_sym_isvoid = 28,
  anon_sym_PLUS = 29,
  anon_sym_DASH = 30,
  anon_sym_STAR = 31,
  anon_sym_SLASH = 32,
  anon_sym_LT = 33,
  anon_sym_LT_EQ = 34,
  anon_sym_EQ = 35,
  anon_sym_TILDE = 36,
  anon_sym_not = 37,
  sym_integer_literal = 38,
  anon_sym_DQUOTE = 39,
  aux_sym_string_literal_token1 = 40,
  sym__escape_sequence = 41,
  sym_self = 42,
  sym_true = 43,
  sym_false = 44,
  sym_builtin_type = 45,
  sym_type_identifier = 46,
  sym_feature_identifier = 47,
  sym_line_comment = 48,
  anon_sym_LPAREN_STAR = 49,
  aux_sym_block_comment_token1 = 50,
  anon_sym_STAR_RPAREN = 51,
  sym_source_file = 52,
  sym_class_definition = 53,
  sym__feature = 54,
  sym_method_definition = 55,
  sym_parameter_list = 56,
  sym_parameter = 57,
  sym_attribute_definition = 58,
  sym__expression = 59,
  sym_assignment_expression = 60,
  sym_dispatch_expression = 61,
  sym_method_call_expression = 62,
  sym_arguments_list = 63,
  sym_if_expression = 64,
  sym_while_expression = 65,
  sym_expr_block_expression = 66,
  sym_let_expression = 67,
  sym_variable_definition_list = 68,
  sym_let_variable_definition = 69,
  sym_case_expression = 70,
  sym_case_branch_list = 71,
  sym_case_branch = 72,
  sym_newtype_expression = 73,
  sym_isvoid_expression = 74,
  sym_binary_expression = 75,
  sym_integer_complement = 76,
  sym_boolean_complement = 77,
  sym_parentheses_expression = 78,
  sym__identifier_expression = 79,
  sym_string_literal = 80,
  sym__type_specifier = 81,
  sym__attribute_identifier = 82,
  sym__method_identifier = 83,
  sym__parameter_identifier = 84,
  sym__variable_identifier = 85,
  sym_block_comment = 86,
  aux_sym_source_file_repeat1 = 87,
  aux_sym_class_definition_repeat1 = 88,
  aux_sym_parameter_list_repeat1 = 89,
  aux_sym_arguments_list_repeat1 = 90,
  aux_sym_expr_block_expression_repeat1 = 91,
  aux_sym_variable_definition_list_repeat1 = 92,
  aux_sym_case_branch_list_repeat1 = 93,
  aux_sym_string_literal_repeat1 = 94,
  aux_sym_block_comment_repeat1 = 95,
  alias_sym_method_identifier = 96,
  alias_sym_parameter_identifier = 97,
  alias_sym_variable_identifier = 98,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_class] = "class",
  [anon_sym_inherits] = "inherits",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_AT] = "@",
  [anon_sym_DOT] = ".",
  [anon_sym_if] = "if",
  [anon_sym_then] = "then",
  [anon_sym_else] = "else",
  [anon_sym_fi] = "fi",
  [anon_sym_while] = "while",
  [anon_sym_loop] = "loop",
  [anon_sym_pool] = "pool",
  [anon_sym_let] = "let",
  [anon_sym_in] = "in",
  [anon_sym_case] = "case",
  [anon_sym_of] = "of",
  [anon_sym_esac] = "esac",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_new] = "new",
  [anon_sym_isvoid] = "isvoid",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ] = "=",
  [anon_sym_TILDE] = "~",
  [anon_sym_not] = "not",
  [sym_integer_literal] = "integer_literal",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [sym__escape_sequence] = "_escape_sequence",
  [sym_self] = "self",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_builtin_type] = "builtin_type",
  [sym_type_identifier] = "type_identifier",
  [sym_feature_identifier] = "attribute_identifier",
  [sym_line_comment] = "line_comment",
  [anon_sym_LPAREN_STAR] = "(*",
  [aux_sym_block_comment_token1] = "block_comment_token1",
  [anon_sym_STAR_RPAREN] = "*)",
  [sym_source_file] = "source_file",
  [sym_class_definition] = "class_definition",
  [sym__feature] = "_feature",
  [sym_method_definition] = "method_definition",
  [sym_parameter_list] = "parameter_list",
  [sym_parameter] = "parameter",
  [sym_attribute_definition] = "attribute_definition",
  [sym__expression] = "_expression",
  [sym_assignment_expression] = "assignment_expression",
  [sym_dispatch_expression] = "dispatch_expression",
  [sym_method_call_expression] = "method_call_expression",
  [sym_arguments_list] = "arguments_list",
  [sym_if_expression] = "if_expression",
  [sym_while_expression] = "while_expression",
  [sym_expr_block_expression] = "expr_block_expression",
  [sym_let_expression] = "let_expression",
  [sym_variable_definition_list] = "variable_definition_list",
  [sym_let_variable_definition] = "let_variable_definition",
  [sym_case_expression] = "case_expression",
  [sym_case_branch_list] = "case_branch_list",
  [sym_case_branch] = "case_branch",
  [sym_newtype_expression] = "newtype_expression",
  [sym_isvoid_expression] = "isvoid_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_integer_complement] = "integer_complement",
  [sym_boolean_complement] = "boolean_complement",
  [sym_parentheses_expression] = "parentheses_expression",
  [sym__identifier_expression] = "_identifier_expression",
  [sym_string_literal] = "string_literal",
  [sym__type_specifier] = "_type_specifier",
  [sym__attribute_identifier] = "_attribute_identifier",
  [sym__method_identifier] = "_method_identifier",
  [sym__parameter_identifier] = "_parameter_identifier",
  [sym__variable_identifier] = "_variable_identifier",
  [sym_block_comment] = "block_comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_class_definition_repeat1] = "class_definition_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_arguments_list_repeat1] = "arguments_list_repeat1",
  [aux_sym_expr_block_expression_repeat1] = "expr_block_expression_repeat1",
  [aux_sym_variable_definition_list_repeat1] = "variable_definition_list_repeat1",
  [aux_sym_case_branch_list_repeat1] = "case_branch_list_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_block_comment_repeat1] = "block_comment_repeat1",
  [alias_sym_method_identifier] = "method_identifier",
  [alias_sym_parameter_identifier] = "parameter_identifier",
  [alias_sym_variable_identifier] = "variable_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_inherits] = anon_sym_inherits,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_fi] = anon_sym_fi,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_loop] = anon_sym_loop,
  [anon_sym_pool] = anon_sym_pool,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_of] = anon_sym_of,
  [anon_sym_esac] = anon_sym_esac,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_new] = anon_sym_new,
  [anon_sym_isvoid] = anon_sym_isvoid,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_not] = anon_sym_not,
  [sym_integer_literal] = sym_integer_literal,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [sym__escape_sequence] = sym__escape_sequence,
  [sym_self] = sym_self,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_builtin_type] = sym_builtin_type,
  [sym_type_identifier] = sym_type_identifier,
  [sym_feature_identifier] = sym_feature_identifier,
  [sym_line_comment] = sym_line_comment,
  [anon_sym_LPAREN_STAR] = anon_sym_LPAREN_STAR,
  [aux_sym_block_comment_token1] = aux_sym_block_comment_token1,
  [anon_sym_STAR_RPAREN] = anon_sym_STAR_RPAREN,
  [sym_source_file] = sym_source_file,
  [sym_class_definition] = sym_class_definition,
  [sym__feature] = sym__feature,
  [sym_method_definition] = sym_method_definition,
  [sym_parameter_list] = sym_parameter_list,
  [sym_parameter] = sym_parameter,
  [sym_attribute_definition] = sym_attribute_definition,
  [sym__expression] = sym__expression,
  [sym_assignment_expression] = sym_assignment_expression,
  [sym_dispatch_expression] = sym_dispatch_expression,
  [sym_method_call_expression] = sym_method_call_expression,
  [sym_arguments_list] = sym_arguments_list,
  [sym_if_expression] = sym_if_expression,
  [sym_while_expression] = sym_while_expression,
  [sym_expr_block_expression] = sym_expr_block_expression,
  [sym_let_expression] = sym_let_expression,
  [sym_variable_definition_list] = sym_variable_definition_list,
  [sym_let_variable_definition] = sym_let_variable_definition,
  [sym_case_expression] = sym_case_expression,
  [sym_case_branch_list] = sym_case_branch_list,
  [sym_case_branch] = sym_case_branch,
  [sym_newtype_expression] = sym_newtype_expression,
  [sym_isvoid_expression] = sym_isvoid_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_integer_complement] = sym_integer_complement,
  [sym_boolean_complement] = sym_boolean_complement,
  [sym_parentheses_expression] = sym_parentheses_expression,
  [sym__identifier_expression] = sym__identifier_expression,
  [sym_string_literal] = sym_string_literal,
  [sym__type_specifier] = sym__type_specifier,
  [sym__attribute_identifier] = sym__attribute_identifier,
  [sym__method_identifier] = sym__method_identifier,
  [sym__parameter_identifier] = sym__parameter_identifier,
  [sym__variable_identifier] = sym__variable_identifier,
  [sym_block_comment] = sym_block_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_class_definition_repeat1] = aux_sym_class_definition_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_arguments_list_repeat1] = aux_sym_arguments_list_repeat1,
  [aux_sym_expr_block_expression_repeat1] = aux_sym_expr_block_expression_repeat1,
  [aux_sym_variable_definition_list_repeat1] = aux_sym_variable_definition_list_repeat1,
  [aux_sym_case_branch_list_repeat1] = aux_sym_case_branch_list_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_block_comment_repeat1] = aux_sym_block_comment_repeat1,
  [alias_sym_method_identifier] = alias_sym_method_identifier,
  [alias_sym_parameter_identifier] = alias_sym_parameter_identifier,
  [alias_sym_variable_identifier] = alias_sym_variable_identifier,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inherits] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_loop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_esac] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_new] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isvoid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__escape_sequence] = {
    .visible = false,
    .named = true,
  },
  [sym_self] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_feature_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_block_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_class_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__feature] = {
    .visible = false,
    .named = true,
  },
  [sym_method_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_dispatch_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_method_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments_list] = {
    .visible = true,
    .named = true,
  },
  [sym_if_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_while_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_block_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_let_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_definition_list] = {
    .visible = true,
    .named = true,
  },
  [sym_let_variable_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_case_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_case_branch_list] = {
    .visible = true,
    .named = true,
  },
  [sym_case_branch] = {
    .visible = true,
    .named = true,
  },
  [sym_newtype_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_isvoid_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_complement] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_complement] = {
    .visible = true,
    .named = true,
  },
  [sym_parentheses_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__type_specifier] = {
    .visible = false,
    .named = true,
  },
  [sym__attribute_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__method_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__parameter_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__variable_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expr_block_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_definition_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_case_branch_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_method_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_parameter_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_variable_identifier] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_arg = 1,
  field_args_list = 2,
  field_body = 3,
  field_branch = 4,
  field_branch_list = 5,
  field_class_feature = 6,
  field_class_type = 7,
  field_cond = 8,
  field_dispatch_expr = 9,
  field_else = 10,
  field_expr = 11,
  field_id = 12,
  field_inherit_type = 13,
  field_initialization = 14,
  field_lhs = 15,
  field_method_id = 16,
  field_name = 17,
  field_param_list = 18,
  field_return_type = 19,
  field_rhs = 20,
  field_then = 21,
  field_type = 22,
  field_value = 23,
  field_var_def = 24,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arg] = "arg",
  [field_args_list] = "args_list",
  [field_body] = "body",
  [field_branch] = "branch",
  [field_branch_list] = "branch_list",
  [field_class_feature] = "class_feature",
  [field_class_type] = "class_type",
  [field_cond] = "cond",
  [field_dispatch_expr] = "dispatch_expr",
  [field_else] = "else",
  [field_expr] = "expr",
  [field_id] = "id",
  [field_inherit_type] = "inherit_type",
  [field_initialization] = "initialization",
  [field_lhs] = "lhs",
  [field_method_id] = "method_id",
  [field_name] = "name",
  [field_param_list] = "param_list",
  [field_return_type] = "return_type",
  [field_rhs] = "rhs",
  [field_then] = "then",
  [field_type] = "type",
  [field_value] = "value",
  [field_var_def] = "var_def",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 2},
  [6] = {.index = 4, .length = 2},
  [7] = {.index = 6, .length = 2},
  [8] = {.index = 8, .length = 2},
  [9] = {.index = 10, .length = 3},
  [11] = {.index = 13, .length = 1},
  [12] = {.index = 14, .length = 1},
  [13] = {.index = 15, .length = 1},
  [14] = {.index = 16, .length = 3},
  [15] = {.index = 19, .length = 2},
  [16] = {.index = 21, .length = 2},
  [17] = {.index = 23, .length = 2},
  [18] = {.index = 25, .length = 2},
  [19] = {.index = 27, .length = 1},
  [20] = {.index = 28, .length = 2},
  [21] = {.index = 30, .length = 2},
  [22] = {.index = 32, .length = 1},
  [23] = {.index = 33, .length = 1},
  [24] = {.index = 34, .length = 3},
  [25] = {.index = 37, .length = 1},
  [26] = {.index = 38, .length = 4},
  [27] = {.index = 42, .length = 2},
  [28] = {.index = 44, .length = 2},
  [29] = {.index = 46, .length = 2},
  [30] = {.index = 48, .length = 2},
  [31] = {.index = 50, .length = 2},
  [32] = {.index = 52, .length = 3},
  [33] = {.index = 55, .length = 4},
  [34] = {.index = 59, .length = 3},
  [35] = {.index = 62, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_class_feature, 0},
  [1] =
    {field_class_type, 1},
  [2] =
    {field_class_feature, 0, .inherited = true},
    {field_class_feature, 1, .inherited = true},
  [4] =
    {field_class_feature, 3, .inherited = true},
    {field_class_type, 1},
  [6] =
    {field_class_type, 1},
    {field_inherit_type, 3},
  [8] =
    {field_name, 0},
    {field_type, 2},
  [10] =
    {field_class_feature, 5, .inherited = true},
    {field_class_type, 1},
    {field_inherit_type, 3},
  [13] =
    {field_var_def, 0},
  [14] =
    {field_type, 1},
  [15] =
    {field_expr, 1},
  [16] =
    {field_name, 0},
    {field_type, 2},
    {field_value, 4},
  [19] =
    {field_args_list, 1},
    {field_method_id, 0},
  [21] =
    {field_var_def, 0},
    {field_var_def, 1, .inherited = true},
  [23] =
    {field_lhs, 0},
    {field_rhs, 2},
  [25] =
    {field_body, 3},
    {field_initialization, 1},
  [27] =
    {field_var_def, 1},
  [28] =
    {field_var_def, 0, .inherited = true},
    {field_var_def, 1, .inherited = true},
  [30] =
    {field_id, 0},
    {field_type, 2},
  [32] =
    {field_branch, 0},
  [33] =
    {field_branch, 0, .inherited = true},
  [34] =
    {field_args_list, 3},
    {field_dispatch_expr, 0},
    {field_method_id, 2},
  [37] =
    {field_arg, 1},
  [38] =
    {field_body, 5},
    {field_name, 0},
    {field_param_list, 1},
    {field_return_type, 3},
  [42] =
    {field_body, 3},
    {field_cond, 1},
  [44] =
    {field_branch_list, 3},
    {field_cond, 1},
  [46] =
    {field_branch, 0, .inherited = true},
    {field_branch, 1, .inherited = true},
  [48] =
    {field_arg, 1},
    {field_arg, 2, .inherited = true},
  [50] =
    {field_arg, 0, .inherited = true},
    {field_arg, 1, .inherited = true},
  [52] =
    {field_id, 0},
    {field_type, 2},
    {field_value, 4},
  [55] =
    {field_args_list, 5},
    {field_dispatch_expr, 0},
    {field_method_id, 4},
    {field_type, 2},
  [59] =
    {field_cond, 1},
    {field_else, 5},
    {field_then, 3},
  [62] =
    {field_expr, 4},
    {field_id, 0},
    {field_type, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_method_identifier,
  },
  [5] = {
    [0] = alias_sym_parameter_identifier,
  },
  [10] = {
    [0] = alias_sym_variable_identifier,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 32,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 32,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(18);
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == '*') ADVANCE(48);
      if (lookahead == '+') ADVANCE(45);
      if (lookahead == ',') ADVANCE(24);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == ';') ADVANCE(21);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == 'B') ADVANCE(111);
      if (lookahead == 'I') ADVANCE(78);
      if (lookahead == 'O') ADVANCE(86);
      if (lookahead == 'S') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == 'f') ADVANCE(83);
      if (lookahead == 'i') ADVANCE(98);
      if (lookahead == 'l') ADVANCE(95);
      if (lookahead == 'n') ADVANCE(90);
      if (lookahead == 's') ADVANCE(96);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == 'w') ADVANCE(101);
      if (lookahead == '{') ADVANCE(19);
      if (lookahead == '}') ADVANCE(20);
      if (lookahead == '~') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(125);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '(') ADVANCE(185);
      if (lookahead == '*') ADVANCE(184);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(183);
      if (lookahead != 0) ADVANCE(182);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == '*') ADVANCE(47);
      if (lookahead == '+') ADVANCE(45);
      if (lookahead == ',') ADVANCE(24);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == ';') ADVANCE(21);
      if (lookahead == '<') ADVANCE(51);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == 'B') ADVANCE(144);
      if (lookahead == 'I') ADVANCE(130);
      if (lookahead == 'O') ADVANCE(135);
      if (lookahead == 'S') ADVANCE(126);
      if (lookahead == 'c') ADVANCE(148);
      if (lookahead == 'f') ADVANCE(149);
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead == 'l') ADVANCE(153);
      if (lookahead == 'n') ADVANCE(154);
      if (lookahead == 's') ADVANCE(159);
      if (lookahead == 't') ADVANCE(169);
      if (lookahead == 'w') ADVANCE(162);
      if (lookahead == '{') ADVANCE(19);
      if (lookahead == '}') ADVANCE(20);
      if (lookahead == '~') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(147);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(9);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == '*') ADVANCE(47);
      if (lookahead == '+') ADVANCE(45);
      if (lookahead == ',') ADVANCE(24);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == ';') ADVANCE(21);
      if (lookahead == '<') ADVANCE(51);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == '}') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(9);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == ',') ADVANCE(24);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ';') ADVANCE(21);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '{') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(9);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '}') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(9);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == 'e') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(9);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == 'e') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(180);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(179);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(40);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 15:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == '*') ADVANCE(47);
      if (lookahead == '+') ADVANCE(45);
      if (lookahead == ',') ADVANCE(24);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == ';') ADVANCE(21);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == '{') ADVANCE(19);
      if (lookahead == '}') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '*') ADVANCE(180);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_case);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_case);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_esac);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_esac);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_esac);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_isvoid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_isvoid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(179);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == ')') ADVANCE(187);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '=') ADVANCE(52);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(40);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(179);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(64);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_self);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_self);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_builtin_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_builtin_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(77);
      if (lookahead == 't') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(72);
      if (lookahead == 'n') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == 'o') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(29);
      if (lookahead == 's') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'j') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_type_identifier);
      if (lookahead == 'E') ADVANCE(129);
      if (lookahead == 't') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_type_identifier);
      if (lookahead == 'E') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_type_identifier);
      if (lookahead == 'F') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_type_identifier);
      if (lookahead == 'L') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_type_identifier);
      if (lookahead == 'O') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_type_identifier);
      if (lookahead == 'P') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_type_identifier);
      if (lookahead == 'T') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_type_identifier);
      if (lookahead == 'Y') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_type_identifier);
      if (lookahead == '_') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_type_identifier);
      if (lookahead == 'b') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_type_identifier);
      if (lookahead == 'c') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_type_identifier);
      if (lookahead == 'e') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_type_identifier);
      if (lookahead == 'g') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_type_identifier);
      if (lookahead == 'i') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_type_identifier);
      if (lookahead == 'j') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_type_identifier);
      if (lookahead == 'l') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_type_identifier);
      if (lookahead == 'n') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_type_identifier);
      if (lookahead == 'o') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_type_identifier);
      if (lookahead == 'o') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_type_identifier);
      if (lookahead == 'r') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_type_identifier);
      if (lookahead == 't') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_type_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_feature_identifier);
      if (lookahead == 'a') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_feature_identifier);
      if (lookahead == 'a') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_feature_identifier);
      if (lookahead == 'a') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_feature_identifier);
      if (lookahead == 'c') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_feature_identifier);
      if (lookahead == 'd') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_feature_identifier);
      if (lookahead == 'e') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_feature_identifier);
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == 'o') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_feature_identifier);
      if (lookahead == 'e') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_feature_identifier);
      if (lookahead == 'e') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_feature_identifier);
      if (lookahead == 'e') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_feature_identifier);
      if (lookahead == 'e') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_feature_identifier);
      if (lookahead == 'e') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_feature_identifier);
      if (lookahead == 'f') ADVANCE(30);
      if (lookahead == 's') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_feature_identifier);
      if (lookahead == 'f') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_feature_identifier);
      if (lookahead == 'h') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_feature_identifier);
      if (lookahead == 'i') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_feature_identifier);
      if (lookahead == 'i') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_feature_identifier);
      if (lookahead == 'l') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_feature_identifier);
      if (lookahead == 'l') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_feature_identifier);
      if (lookahead == 'l') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_feature_identifier);
      if (lookahead == 'o') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_feature_identifier);
      if (lookahead == 'r') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_feature_identifier);
      if (lookahead == 's') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_feature_identifier);
      if (lookahead == 's') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_feature_identifier);
      if (lookahead == 's') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_feature_identifier);
      if (lookahead == 't') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_feature_identifier);
      if (lookahead == 't') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_feature_identifier);
      if (lookahead == 'u') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_feature_identifier);
      if (lookahead == 'v') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_feature_identifier);
      if (lookahead == 'w') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_feature_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_LPAREN_STAR);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_LPAREN_STAR);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(64);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '(') ADVANCE(185);
      if (lookahead == '*') ADVANCE(184);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(182);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == ')') ADVANCE(187);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '*') ADVANCE(180);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '-') ADVANCE(179);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_STAR_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'c') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(2);
      if (lookahead == 'f') ADVANCE(3);
      if (lookahead == 'i') ADVANCE(4);
      if (lookahead == 'l') ADVANCE(5);
      if (lookahead == 'o') ADVANCE(6);
      if (lookahead == 'p') ADVANCE(7);
      if (lookahead == 't') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 3:
      if (lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 5:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead == 'f') ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 8:
      if (lookahead == 'h') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 10:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_fi);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'h') ADVANCE(19);
      END_STATE();
    case 13:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 20:
      if (lookahead == 'p') ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_loop);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_pool);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_inherits);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 17},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 17},
  [27] = {.lex_state = 17},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 8},
  [75] = {.lex_state = 8},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 17},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 17},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 17},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 17},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 17},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 17},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 17},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 17},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 17},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 17},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 17},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 17},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 17},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 6},
  [128] = {.lex_state = 17},
  [129] = {.lex_state = 8},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 6},
  [132] = {.lex_state = 6},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 7},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 5},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 17},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {(TSStateId)(-1)},
  [157] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_block_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_inherits] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_fi] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_loop] = ACTIONS(1),
    [anon_sym_pool] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_esac] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_isvoid] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__escape_sequence] = ACTIONS(1),
    [sym_self] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_builtin_type] = ACTIONS(1),
    [sym_type_identifier] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_STAR_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(137),
    [sym_class_definition] = STATE(111),
    [sym_block_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(78),
    [anon_sym_class] = ACTIONS(7),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_while,
    ACTIONS(19), 1,
      anon_sym_let,
    ACTIONS(21), 1,
      anon_sym_case,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_isvoid,
    ACTIONS(27), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_not,
    ACTIONS(31), 1,
      sym_integer_literal,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_feature_identifier,
    STATE(2), 1,
      sym_block_comment,
    STATE(3), 1,
      aux_sym_expr_block_expression_repeat1,
    STATE(27), 1,
      sym__variable_identifier,
    STATE(64), 1,
      sym__expression,
    STATE(122), 1,
      sym__method_identifier,
    ACTIONS(35), 3,
      sym_self,
      sym_true,
      sym_false,
    STATE(48), 16,
      sym_assignment_expression,
      sym_dispatch_expression,
      sym_method_call_expression,
      sym_if_expression,
      sym_while_expression,
      sym_expr_block_expression,
      sym_let_expression,
      sym_case_expression,
      sym_newtype_expression,
      sym_isvoid_expression,
      sym_binary_expression,
      sym_integer_complement,
      sym_boolean_complement,
      sym_parentheses_expression,
      sym__identifier_expression,
      sym_string_literal,
  [87] = 22,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(42), 1,
      anon_sym_RBRACE,
    ACTIONS(44), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_if,
    ACTIONS(50), 1,
      anon_sym_while,
    ACTIONS(53), 1,
      anon_sym_let,
    ACTIONS(56), 1,
      anon_sym_case,
    ACTIONS(59), 1,
      anon_sym_new,
    ACTIONS(62), 1,
      anon_sym_isvoid,
    ACTIONS(65), 1,
      anon_sym_TILDE,
    ACTIONS(68), 1,
      anon_sym_not,
    ACTIONS(71), 1,
      sym_integer_literal,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    ACTIONS(80), 1,
      sym_feature_identifier,
    STATE(27), 1,
      sym__variable_identifier,
    STATE(64), 1,
      sym__expression,
    STATE(122), 1,
      sym__method_identifier,
    STATE(3), 2,
      sym_block_comment,
      aux_sym_expr_block_expression_repeat1,
    ACTIONS(77), 3,
      sym_self,
      sym_true,
      sym_false,
    STATE(48), 16,
      sym_assignment_expression,
      sym_dispatch_expression,
      sym_method_call_expression,
      sym_if_expression,
      sym_while_expression,
      sym_expr_block_expression,
      sym_let_expression,
      sym_case_expression,
      sym_newtype_expression,
      sym_isvoid_expression,
      sym_binary_expression,
      sym_integer_complement,
      sym_boolean_complement,
      sym_parentheses_expression,
      sym__identifier_expression,
      sym_string_literal,
  [172] = 22,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_while,
    ACTIONS(19), 1,
      anon_sym_let,
    ACTIONS(21), 1,
      anon_sym_case,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_isvoid,
    ACTIONS(27), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_not,
    ACTIONS(31), 1,
      sym_integer_literal,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_feature_identifier,
    STATE(2), 1,
      aux_sym_expr_block_expression_repeat1,
    STATE(4), 1,
      sym_block_comment,
    STATE(27), 1,
      sym__variable_identifier,
    STATE(64), 1,
      sym__expression,
    STATE(122), 1,
      sym__method_identifier,
    ACTIONS(35), 3,
      sym_self,
      sym_true,
      sym_false,
    STATE(48), 16,
      sym_assignment_expression,
      sym_dispatch_expression,
      sym_method_call_expression,
      sym_if_expression,
      sym_while_expression,
      sym_expr_block_expression,
      sym_let_expression,
      sym_case_expression,
      sym_newtype_expression,
      sym_isvoid_expression,
      sym_binary_expression,
      sym_integer_complement,
      sym_boolean_complement,
      sym_parentheses_expression,
      sym__identifier_expression,
      sym_string_literal,
  [256] = 22,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_while,
    ACTIONS(19), 1,
      anon_sym_let,
    ACTIONS(21), 1,
      anon_sym_case,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_isvoid,
    ACTIONS(27), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_not,
    ACTIONS(31), 1,
      sym_integer_literal,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_feature_identifier,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      sym_block_comment,
    STATE(27), 1,
      sym__variable_identifier,
    STATE(53), 1,
      sym__expression,
    STATE(122), 1,
      sym__method_identifier,
    ACTIONS(35), 3,
      sym_self,
      sym_true,
      sym_false,
    STATE(48), 16,
      sym_assignment_expression,
      sym_dispatch_expression,
      sym_method_call_expression,
      sym_if_expression,
      sym_while_expression,
      sym_expr_block_expression,
      sym_let_expression,
      sym_case_expression,
      sym_newtype_expression,
      sym_isvoid_expression,
      sym_binary_expression,
      sym_integer_complement,
      sym_boolean_complement,
      sym_parentheses_expression,
      sym__identifier_expression,
      sym_string_literal,
  [340] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_while,
    ACTIONS(19), 1,
      anon_sym_let,
    ACTIONS(21), 1,
      anon_sym_case,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_isvoid,
    ACTIONS(27), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_not,
    ACTIONS(31), 1,
      sym_integer_literal,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_feature_identifier,
    STATE(6), 1,
      sym_block_comment,
    STATE(27), 1,
      sym__variable_identifier,
    STATE(40), 1,
      sym__expression,
    STATE(122), 1,
      sym__method_identifier,
    ACTIONS(35), 3,
      sym_self,
      sym_true,
      sym_false,
    STATE(48), 16,
      sym_assignment_expression,
      sym_dispatch_expression,
      sym_method_call_expression,
      sym_if_expression,
      sym_while_expression,
      sym_expr_block_expression,
      sym_let_expression,
      sym_case_expression,
      sym_newtype_expression,
      sym_isvoid_expression,
      sym_binary_expression,
      sym_integer_complement,
      sym_boolean_complement,
      sym_parentheses_expression,
      sym__identifier_expression,
      sym_string_literal,
  [421] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_while,
    ACTIONS(19), 1,
      anon_sym_let,
    ACTIONS(21), 1,
      anon_sym_case,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_isvoid,
    ACTIONS(27), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_not,
    ACTIONS(31), 1,
      sym_integer_literal,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_feature_identifier,
    STATE(7), 1,
      sym_block_comment,
    STATE(27), 1,
      sym__variable_identifier,
    STATE(56), 1,
      sym__expression,
    STATE(122), 1,
      sym__method_identifier,
    ACTIONS(35), 3,
      sym_self,
      sym_true,
      sym_false,
    STATE(48), 16,
      sym_assignment_expression,
      sym_dispatch_expression,
      sym_method_call_expression,
      sym_if_expression,
      sym_while_expression,
      sym_expr_block_expression,
      sym_let_expression,
      sym_case_expression,
      sym_newtype_expression,
      sym_isvoid_expression,
      sym_binary_expression,
      sym_integer_complement,
      sym_boolean_complement,
      sym_parentheses_expression,
      sym__identifier_expression,
      sym_string_literal,
  [502] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_while,
    ACTIONS(19), 1,
      anon_sym_let,
    ACTIONS(21), 1,
      anon_sym_case,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_isvoid,
    ACTIONS(27), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_not,
    ACTIONS(31), 1,
      sym_integer_literal,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_feature_identifier,
    STATE(8), 1,
      sym_block_comment,
    STATE(27), 1,
      sym__variable_identifier,
    STATE(57), 1,
      sym__expression,
    STATE(122), 1,
      sym__method_identifier,
    ACTIONS(35), 3,
      sym_self,
      sym_true,
      sym_false,
    STATE(48), 16,
      sym_assignment_expression,
      sym_dispatch_expression,
      sym_method_call_expression,
      sym_if_expression,
      sym_while_expression,
      sym_expr_block_expression,
      sym_let_expression,
      sym_case_expression,
      sym_newtype_expression,
      sym_isvoid_expression,
      sym_binary_expression,
      sym_integer_complement,
      sym_boolean_complement,
      sym_parentheses_expression,
      sym__identifier_expression,
      sym_string_literal,
  [583] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_while,
    ACTIONS(19), 1,
      anon_sym_let,
    ACTIONS(21), 1,
      anon_sym_case,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_isvoid,
    ACTIONS(27), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_not,
    ACTIONS(31), 1,
      sym_integer_literal,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_feature_identifier,
    STATE(9), 1,
      sym_block_comment,
    STATE(27), 1,
      sym__variable_identifier,
    STATE(58), 1,
      sym__expression,
    STATE(122), 1,
      sym__method_identifier,
    ACTIONS(35), 3,
      sym_self,
      sym_true,
      sym_false,
    STATE(48), 16,
      sym_assignment_expression,
      sym_dispatch_expression,
      sym_method_call_expression,
      sym_if_expression,
      sym_while_expression,
      sym_expr_block_expression,
      sym_let_expression,
      sym_case_expression,
      sym_newtype_expression,
      sym_isvoid_expression,
      sym_binary_expression,
      sym_integer_complement,
      sym_boolean_complement,
      sym_parentheses_expression,
      sym__identifier_expression,
      sym_string_literal,
  [664] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_while,
    ACTIONS(19), 1,
      anon_sym_let,
    ACTIONS(21), 1,
      anon_sym_case,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_isvoid,
    ACTIONS(27), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_not,
    ACTIONS(31), 1,
      sym_integer_literal,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_feature_identifier,
    STATE(10), 1,
      sym_block_comment,
    STATE(27), 1,
      sym__variable_identifier,
    STATE(66), 1,
      sym__expression,
    STATE(122), 1,
      sym__method_identifier,
    ACTIONS(35), 3,
      sym_self,
      sym_true,
      sym_false,
    STATE(48), 16,
      sym_assignment_expression,
      sym_dispatch_expression,
      sym_method_call_expression,
      sym_if_expression,
      sym_while_expression,
      sym_expr_block_expression,
      sym_let_expression,
      sym_case_expression,
      sym_newtype_expression,
      sym_isvoid_expression,
      sym_binary_expression,
      sym_integer_complement,
      sym_boolean_complement,
      sym_parentheses_expression,
      sym__identifier_expression,
      sym_string_literal,
  [745] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_while,
    ACTIONS(19), 1,
      anon_sym_let,
    ACTIONS(21), 1,
      anon_sym_case,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_isvoid,
    ACTIONS(27), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_not,
    ACTIONS(31), 1,
      sym_integer_literal,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_feature_identifier,
    STATE(11), 1,
      sym_block_comment,
    STATE(27), 1,
      sym__variable_identifier,
    STATE(65), 1,
      sym__expression,
    STATE(122), 1,
      sym__method_identifier,
    ACTIONS(35), 3,
      sym_self,
      sym_true,
      sym_false,
    STATE(48), 16,
      sym_assignment_expression,
      sym_dispatch_expression,
      sym_method_call_expression,
      sym_if_expression,
      sym_while_expression,
      sym_expr_block_expression,
      sym_let_expression,
      sym_case_expression,
      sym_newtype_expression,
      sym_isvoid_expression,
      sym_binary_expression,
      sym_integer_complement,
      sym_boolean_complement,
      sym_parentheses_expression,
      sym__identifier_expression,
      sym_string_literal,
  [826] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_while,
    ACTIONS(19), 1,
      anon_sym_let,
    ACTIONS(21), 1,
      anon_sym_case,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_isvoid,
    ACTIONS(27), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_not,
    ACTIONS(31), 1,
      sym_integer_literal,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_feature_identifier,
    STATE(12), 1,
      sym_block_comment,
    STATE(27), 1,
      sym__variable_identifier,
    STATE(45), 1,
      sym__expression,
    STATE(122), 1,
      sym__method_identifier,
    ACTIONS(35), 3,
      sym_self,
      sym_true,
      sym_false,
    STATE(48), 16,
      sym_assignment_expression,
      sym_dispatch_expression,
      sym_method_call_expression,
      sym_if_expression,
      sym_while_expression,
      sym_expr_block_expression,
      sym_let_expression,
      sym_case_expression,
      sym_newtype_expression,
      sym_isvoid_expression,
      sym_binary_expression,
      sym_integer_complement,
      sym_boolean_complement,
      sym_parentheses_expression,
      sym__identifier_expression,
      sym_string_literal,
  [907] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_while,
    ACTIONS(19), 1,
      anon_sym_let,
    ACTIONS(21), 1,
      anon_sym_case,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_isvoid,
    ACTIONS(27), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_not,
    ACTIONS(31), 1,
      sym_integer_literal,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_feature_identifier,
    STATE(13), 1,
      sym_block_comment,
    STATE(27), 1,
      sym__variable_identifier,
    STATE(37), 1,
      sym__expression,
    STATE(122), 1,
      sym__method_identifier,
    ACTIONS(35), 3,
      sym_self,
      sym_true,
      sym_false,
    STATE(48), 16,
      sym_assignment_expression,
      sym_dispatch_expression,
      sym_method_call_expression,
      sym_if_expression,
      sym_while_expression,
      sym_expr_block_expression,
      sym_let_expression,
      sym_case_expression,
      sym_newtype_expression,
      sym_isvoid_expression,
      sym_binary_expression,
      sym_integer_complement,
      sym_boolean_complement,
      sym_parentheses_expression,
      sym__identifier_expression,
      sym_string_literal,
  [988] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_while,
    ACTIONS(19), 1,
      anon_sym_let,
    ACTIONS(21), 1,
      anon_sym_case,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_isvoid,
    ACTIONS(27), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_not,
    ACTIONS(31), 1,
      sym_integer_literal,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_feature_identifier,
    STATE(14), 1,
      sym_block_comment,
    STATE(27), 1,
      sym__variable_identifier,
    STATE(54), 1,
      sym__expression,
    STATE(122), 1,
      sym__method_identifier,
    ACTIONS(35), 3,
      sym_self,
      sym_true,
      sym_false,
    STATE(48), 16,
      sym_assignment_expression,
      sym_dispatch_expression,
      sym_method_call_expression,
      sym_if_expression,
      sym_while_expression,
      sym_expr_block_expression,
      sym_let_expression,
      sym_case_expression,
      sym_newtype_expression,
      sym_isvoid_expression,
      sym_binary_expression,
      sym_integer_complement,
      sym_boolean_complement,
      sym_parentheses_expression,
      sym__identifier_expression,
      sym_string_literal,
  [1069] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_while,
    ACTIONS(19), 1,
      anon_sym_let,
    ACTIONS(21), 1,
      anon_sym_case,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_isvoid,
    ACTIONS(27), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_not,
    ACTIONS(31), 1,
      sym_integer_literal,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_feature_identifier,
    STATE(15), 1,
      sym_block_comment,
    STATE(27), 1,
      sym__variable_identifier,
    STATE(46), 1,
      sym__expression,
    STATE(122), 1,
      sym__method_identifier,
    ACTIONS(35), 3,
      sym_self,
      sym_true,
      sym_false,
    STATE(48), 16,
      sym_assignment_expression,
      sym_dispatch_expression,
      sym_method_call_expression,
      sym_if_expression,
      sym_while_expression,
      sym_expr_block_expression,
      sym_let_expression,
      sym_case_expression,
      sym_newtype_expression,
      sym_isvoid_expression,
      sym_binary_expression,
      sym_integer_complement,
      sym_boolean_complement,
      sym_parentheses_expression,
      sym__identifier_expression,
      sym_string_literal,
  [1150] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_while,
    ACTIONS(19), 1,
      anon_sym_let,
    ACTIONS(21), 1,
      anon_sym_case,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_isvoid,
    ACTIONS(27), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_not,
    ACTIONS(31), 1,
      sym_integer_literal,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_feature_identifier,
    STATE(16), 1,
      sym_block_comment,
    STATE(27), 1,
      sym__variable_identifier,
    STATE(39), 1,
      sym__expression,
    STATE(122), 1,
      sym__method_identifier,
    ACTIONS(35), 3,
      sym_self,
      sym_true,
      sym_false,
    STATE(48), 16,
      sym_assignment_expression,
      sym_dispatch_expression,
      sym_method_call_expression,
      sym_if_expression,
      sym_while_expression,
      sym_expr_block_expression,
      sym_let_expression,
      sym_case_expression,
      sym_newtype_expression,
      sym_isvoid_expression,
      sym_binary_expression,
      sym_integer_complement,
      sym_boolean_complement,
      sym_parentheses_expression,
      sym__identifier_expression,
      sym_string_literal,
  [1231] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_while,
    ACTIONS(19), 1,
      anon_sym_let,
    ACTIONS(21), 1,
      anon_sym_case,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_isvoid,
    ACTIONS(27), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_not,
    ACTIONS(31), 1,
      sym_integer_literal,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_feature_identifier,
    STATE(17), 1,
      sym_block_comment,
    STATE(27), 1,
      sym__variable_identifier,
    STATE(36), 1,
      sym__expression,
    STATE(122), 1,
      sym__method_identifier,
    ACTIONS(35), 3,
      sym_self,
      sym_true,
      sym_false,
    STATE(48), 16,
      sym_assignment_expression,
      sym_dispatch_expression,
      sym_method_call_expression,
      sym_if_expression,
      sym_while_expression,
      sym_expr_block_expression,
      sym_let_expression,
      sym_case_expression,
      sym_newtype_expression,
      sym_isvoid_expression,
      sym_binary_expression,
      sym_integer_complement,
      sym_boolean_complement,
      sym_parentheses_expression,
      sym__identifier_expression,
      sym_string_literal,
  [1312] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_while,
    ACTIONS(19), 1,
      anon_sym_let,
    ACTIONS(21), 1,
      anon_sym_case,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_isvoid,
    ACTIONS(27), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_not,
    ACTIONS(31), 1,
      sym_integer_literal,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_feature_identifier,
    STATE(18), 1,
      sym_block_comment,
    STATE(27), 1,
      sym__variable_identifier,
    STATE(33), 1,
      sym__expression,
    STATE(122), 1,
      sym__method_identifier,
    ACTIONS(35), 3,
      sym_self,
      sym_true,
      sym_false,
    STATE(48), 16,
      sym_assignment_expression,
      sym_dispatch_expression,
      sym_method_call_expression,
      sym_if_expression,
      sym_while_expression,
      sym_expr_block_expression,
      sym_let_expression,
      sym_case_expression,
      sym_newtype_expression,
      sym_isvoid_expression,
      sym_binary_expression,
      sym_integer_complement,
      sym_boolean_complement,
      sym_parentheses_expression,
      sym__identifier_expression,
      sym_string_literal,
  [1393] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_while,
    ACTIONS(19), 1,
      anon_sym_let,
    ACTIONS(21), 1,
      anon_sym_case,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_isvoid,
    ACTIONS(27), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_not,
    ACTIONS(31), 1,
      sym_integer_literal,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_feature_identifier,
    STATE(19), 1,
      sym_block_comment,
    STATE(27), 1,
      sym__variable_identifier,
    STATE(31), 1,
      sym__expression,
    STATE(122), 1,
      sym__method_identifier,
    ACTIONS(35), 3,
      sym_self,
      sym_true,
      sym_false,
    STATE(48), 16,
      sym_assignment_expression,
      sym_dispatch_expression,
      sym_method_call_expression,
      sym_if_expression,
      sym_while_expression,
      sym_expr_block_expression,
      sym_let_expression,
      sym_case_expression,
      sym_newtype_expression,
      sym_isvoid_expression,
      sym_binary_expression,
      sym_integer_complement,
      sym_boolean_complement,
      sym_parentheses_expression,
      sym__identifier_expression,
      sym_string_literal,
  [1474] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_while,
    ACTIONS(19), 1,
      anon_sym_let,
    ACTIONS(21), 1,
      anon_sym_case,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_isvoid,
    ACTIONS(27), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_not,
    ACTIONS(31), 1,
      sym_integer_literal,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_feature_identifier,
    STATE(20), 1,
      sym_block_comment,
    STATE(27), 1,
      sym__variable_identifier,
    STATE(62), 1,
      sym__expression,
    STATE(122), 1,
      sym__method_identifier,
    ACTIONS(35), 3,
      sym_self,
      sym_true,
      sym_false,
    STATE(48), 16,
      sym_assignment_expression,
      sym_dispatch_expression,
      sym_method_call_expression,
      sym_if_expression,
      sym_while_expression,
      sym_expr_block_expression,
      sym_let_expression,
      sym_case_expression,
      sym_newtype_expression,
      sym_isvoid_expression,
      sym_binary_expression,
      sym_integer_complement,
      sym_boolean_complement,
      sym_parentheses_expression,
      sym__identifier_expression,
      sym_string_literal,
  [1555] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_while,
    ACTIONS(19), 1,
      anon_sym_let,
    ACTIONS(21), 1,
      anon_sym_case,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_isvoid,
    ACTIONS(27), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_not,
    ACTIONS(31), 1,
      sym_integer_literal,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_feature_identifier,
    STATE(21), 1,
      sym_block_comment,
    STATE(27), 1,
      sym__variable_identifier,
    STATE(63), 1,
      sym__expression,
    STATE(122), 1,
      sym__method_identifier,
    ACTIONS(35), 3,
      sym_self,
      sym_true,
      sym_false,
    STATE(48), 16,
      sym_assignment_expression,
      sym_dispatch_expression,
      sym_method_call_expression,
      sym_if_expression,
      sym_while_expression,
      sym_expr_block_expression,
      sym_let_expression,
      sym_case_expression,
      sym_newtype_expression,
      sym_isvoid_expression,
      sym_binary_expression,
      sym_integer_complement,
      sym_boolean_complement,
      sym_parentheses_expression,
      sym__identifier_expression,
      sym_string_literal,
  [1636] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_while,
    ACTIONS(19), 1,
      anon_sym_let,
    ACTIONS(21), 1,
      anon_sym_case,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_isvoid,
    ACTIONS(27), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_not,
    ACTIONS(31), 1,
      sym_integer_literal,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_feature_identifier,
    STATE(22), 1,
      sym_block_comment,
    STATE(27), 1,
      sym__variable_identifier,
    STATE(59), 1,
      sym__expression,
    STATE(122), 1,
      sym__method_identifier,
    ACTIONS(35), 3,
      sym_self,
      sym_true,
      sym_false,
    STATE(48), 16,
      sym_assignment_expression,
      sym_dispatch_expression,
      sym_method_call_expression,
      sym_if_expression,
      sym_while_expression,
      sym_expr_block_expression,
      sym_let_expression,
      sym_case_expression,
      sym_newtype_expression,
      sym_isvoid_expression,
      sym_binary_expression,
      sym_integer_complement,
      sym_boolean_complement,
      sym_parentheses_expression,
      sym__identifier_expression,
      sym_string_literal,
  [1717] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_while,
    ACTIONS(19), 1,
      anon_sym_let,
    ACTIONS(21), 1,
      anon_sym_case,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_isvoid,
    ACTIONS(27), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_not,
    ACTIONS(31), 1,
      sym_integer_literal,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_feature_identifier,
    STATE(23), 1,
      sym_block_comment,
    STATE(27), 1,
      sym__variable_identifier,
    STATE(61), 1,
      sym__expression,
    STATE(122), 1,
      sym__method_identifier,
    ACTIONS(35), 3,
      sym_self,
      sym_true,
      sym_false,
    STATE(48), 16,
      sym_assignment_expression,
      sym_dispatch_expression,
      sym_method_call_expression,
      sym_if_expression,
      sym_while_expression,
      sym_expr_block_expression,
      sym_let_expression,
      sym_case_expression,
      sym_newtype_expression,
      sym_isvoid_expression,
      sym_binary_expression,
      sym_integer_complement,
      sym_boolean_complement,
      sym_parentheses_expression,
      sym__identifier_expression,
      sym_string_literal,
  [1798] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_while,
    ACTIONS(19), 1,
      anon_sym_let,
    ACTIONS(21), 1,
      anon_sym_case,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_isvoid,
    ACTIONS(27), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_not,
    ACTIONS(31), 1,
      sym_integer_literal,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_feature_identifier,
    STATE(24), 1,
      sym_block_comment,
    STATE(27), 1,
      sym__variable_identifier,
    STATE(55), 1,
      sym__expression,
    STATE(122), 1,
      sym__method_identifier,
    ACTIONS(35), 3,
      sym_self,
      sym_true,
      sym_false,
    STATE(48), 16,
      sym_assignment_expression,
      sym_dispatch_expression,
      sym_method_call_expression,
      sym_if_expression,
      sym_while_expression,
      sym_expr_block_expression,
      sym_let_expression,
      sym_case_expression,
      sym_newtype_expression,
      sym_isvoid_expression,
      sym_binary_expression,
      sym_integer_complement,
      sym_boolean_complement,
      sym_parentheses_expression,
      sym__identifier_expression,
      sym_string_literal,
  [1879] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_while,
    ACTIONS(19), 1,
      anon_sym_let,
    ACTIONS(21), 1,
      anon_sym_case,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_isvoid,
    ACTIONS(27), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_not,
    ACTIONS(31), 1,
      sym_integer_literal,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_feature_identifier,
    STATE(25), 1,
      sym_block_comment,
    STATE(27), 1,
      sym__variable_identifier,
    STATE(60), 1,
      sym__expression,
    STATE(122), 1,
      sym__method_identifier,
    ACTIONS(35), 3,
      sym_self,
      sym_true,
      sym_false,
    STATE(48), 16,
      sym_assignment_expression,
      sym_dispatch_expression,
      sym_method_call_expression,
      sym_if_expression,
      sym_while_expression,
      sym_expr_block_expression,
      sym_let_expression,
      sym_case_expression,
      sym_newtype_expression,
      sym_isvoid_expression,
      sym_binary_expression,
      sym_integer_complement,
      sym_boolean_complement,
      sym_parentheses_expression,
      sym__identifier_expression,
      sym_string_literal,
  [1960] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_block_comment,
    ACTIONS(89), 2,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(85), 19,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LT_DASH,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_loop,
      anon_sym_pool,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_EQ,
  [1998] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(93), 1,
      anon_sym_LT_DASH,
    STATE(27), 1,
      sym_block_comment,
    ACTIONS(95), 2,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(91), 18,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_loop,
      anon_sym_pool,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_EQ,
  [2035] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(28), 1,
      sym_block_comment,
    ACTIONS(99), 2,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(97), 18,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_loop,
      anon_sym_pool,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_EQ,
  [2069] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(29), 1,
      sym_block_comment,
    ACTIONS(103), 2,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(101), 18,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_loop,
      anon_sym_pool,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_EQ,
  [2103] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(30), 1,
      sym_block_comment,
    ACTIONS(107), 2,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(105), 18,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_loop,
      anon_sym_pool,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_EQ,
  [2137] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(31), 1,
      sym_block_comment,
    ACTIONS(111), 2,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(113), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(109), 16,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_loop,
      anon_sym_pool,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ,
  [2173] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(32), 1,
      sym_block_comment,
    ACTIONS(117), 2,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(115), 18,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_loop,
      anon_sym_pool,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_EQ,
  [2207] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(33), 1,
      sym_block_comment,
    ACTIONS(111), 2,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(109), 18,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_loop,
      anon_sym_pool,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_EQ,
  [2241] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(34), 1,
      sym_block_comment,
    ACTIONS(121), 2,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(119), 18,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_loop,
      anon_sym_pool,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_EQ,
  [2275] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(35), 1,
      sym_block_comment,
    ACTIONS(125), 2,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(123), 18,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_loop,
      anon_sym_pool,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_EQ,
  [2309] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(36), 1,
      sym_block_comment,
    ACTIONS(129), 2,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(127), 18,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_loop,
      anon_sym_pool,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_EQ,
  [2343] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(37), 1,
      sym_block_comment,
    ACTIONS(133), 2,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(131), 18,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_loop,
      anon_sym_pool,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_EQ,
  [2377] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(38), 1,
      sym_block_comment,
    ACTIONS(137), 2,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(135), 18,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_loop,
      anon_sym_pool,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_EQ,
  [2411] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(111), 1,
      anon_sym_LT,
    ACTIONS(139), 1,
      anon_sym_PLUS,
    ACTIONS(141), 1,
      anon_sym_DASH,
    STATE(39), 1,
      sym_block_comment,
    ACTIONS(113), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(109), 15,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_loop,
      anon_sym_pool,
      anon_sym_in,
      anon_sym_of,
      anon_sym_LT_EQ,
      anon_sym_EQ,
  [2451] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(139), 1,
      anon_sym_PLUS,
    ACTIONS(141), 1,
      anon_sym_DASH,
    ACTIONS(145), 1,
      anon_sym_LT,
    STATE(40), 1,
      sym_block_comment,
    ACTIONS(113), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_EQ,
    ACTIONS(143), 13,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_loop,
      anon_sym_pool,
      anon_sym_in,
      anon_sym_of,
  [2493] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(41), 1,
      sym_block_comment,
    ACTIONS(151), 2,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(149), 18,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_loop,
      anon_sym_pool,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_EQ,
  [2527] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(42), 1,
      sym_block_comment,
    ACTIONS(155), 2,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(153), 18,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_loop,
      anon_sym_pool,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_EQ,
  [2561] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(43), 1,
      sym_block_comment,
    ACTIONS(159), 2,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(157), 18,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_loop,
      anon_sym_pool,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_EQ,
  [2595] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(44), 1,
      sym_block_comment,
    ACTIONS(163), 2,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(161), 18,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_loop,
      anon_sym_pool,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_EQ,
  [2629] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(139), 1,
      anon_sym_PLUS,
    ACTIONS(141), 1,
      anon_sym_DASH,
    ACTIONS(145), 1,
      anon_sym_LT,
    STATE(45), 1,
      sym_block_comment,
    ACTIONS(113), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_EQ,
    ACTIONS(165), 13,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_loop,
      anon_sym_pool,
      anon_sym_in,
      anon_sym_of,
  [2671] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(139), 1,
      anon_sym_PLUS,
    ACTIONS(141), 1,
      anon_sym_DASH,
    ACTIONS(145), 1,
      anon_sym_LT,
    ACTIONS(169), 1,
      anon_sym_AT,
    ACTIONS(172), 1,
      anon_sym_DOT,
    STATE(46), 1,
      sym_block_comment,
    ACTIONS(113), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_EQ,
    ACTIONS(167), 11,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_loop,
      anon_sym_pool,
      anon_sym_in,
      anon_sym_of,
  [2717] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(47), 1,
      sym_block_comment,
    ACTIONS(177), 2,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(175), 18,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_loop,
      anon_sym_pool,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_EQ,
  [2751] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(48), 1,
      sym_block_comment,
    ACTIONS(181), 2,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(179), 18,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_loop,
      anon_sym_pool,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_EQ,
  [2785] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(49), 1,
      sym_block_comment,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(183), 18,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_loop,
      anon_sym_pool,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_EQ,
  [2819] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(50), 1,
      sym_block_comment,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(187), 18,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_loop,
      anon_sym_pool,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_EQ,
  [2853] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(51), 1,
      sym_block_comment,
    ACTIONS(193), 2,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(191), 18,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_loop,
      anon_sym_pool,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_EQ,
  [2887] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(52), 1,
      sym_block_comment,
    ACTIONS(42), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      sym_integer_literal,
      anon_sym_DQUOTE,
    ACTIONS(195), 12,
      anon_sym_LPAREN,
      anon_sym_if,
      anon_sym_while,
      anon_sym_let,
      anon_sym_case,
      anon_sym_new,
      anon_sym_isvoid,
      anon_sym_not,
      sym_self,
      sym_true,
      sym_false,
      sym_feature_identifier,
  [2918] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(139), 1,
      anon_sym_PLUS,
    ACTIONS(141), 1,
      anon_sym_DASH,
    ACTIONS(145), 1,
      anon_sym_LT,
    ACTIONS(197), 1,
      anon_sym_COMMA,
    ACTIONS(199), 1,
      anon_sym_RPAREN,
    ACTIONS(201), 1,
      anon_sym_AT,
    ACTIONS(203), 1,
      anon_sym_DOT,
    STATE(53), 1,
      sym_block_comment,
    STATE(101), 1,
      aux_sym_arguments_list_repeat1,
    ACTIONS(113), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_EQ,
  [2960] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(139), 1,
      anon_sym_PLUS,
    ACTIONS(141), 1,
      anon_sym_DASH,
    ACTIONS(145), 1,
      anon_sym_LT,
    ACTIONS(201), 1,
      anon_sym_AT,
    ACTIONS(203), 1,
      anon_sym_DOT,
    STATE(54), 1,
      sym_block_comment,
    ACTIONS(113), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_EQ,
    ACTIONS(205), 2,
      anon_sym_COMMA,
      anon_sym_in,
  [2997] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(139), 1,
      anon_sym_PLUS,
    ACTIONS(141), 1,
      anon_sym_DASH,
    ACTIONS(145), 1,
      anon_sym_LT,
    ACTIONS(201), 1,
      anon_sym_AT,
    ACTIONS(203), 1,
      anon_sym_DOT,
    STATE(55), 1,
      sym_block_comment,
    ACTIONS(113), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_EQ,
    ACTIONS(207), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3034] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(139), 1,
      anon_sym_PLUS,
    ACTIONS(141), 1,
      anon_sym_DASH,
    ACTIONS(145), 1,
      anon_sym_LT,
    ACTIONS(201), 1,
      anon_sym_AT,
    ACTIONS(203), 1,
      anon_sym_DOT,
    ACTIONS(209), 1,
      anon_sym_of,
    STATE(56), 1,
      sym_block_comment,
    ACTIONS(113), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_EQ,
  [3070] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(139), 1,
      anon_sym_PLUS,
    ACTIONS(141), 1,
      anon_sym_DASH,
    ACTIONS(145), 1,
      anon_sym_LT,
    ACTIONS(201), 1,
      anon_sym_AT,
    ACTIONS(203), 1,
      anon_sym_DOT,
    ACTIONS(211), 1,
      anon_sym_loop,
    STATE(57), 1,
      sym_block_comment,
    ACTIONS(113), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_EQ,
  [3106] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(139), 1,
      anon_sym_PLUS,
    ACTIONS(141), 1,
      anon_sym_DASH,
    ACTIONS(145), 1,
      anon_sym_LT,
    ACTIONS(201), 1,
      anon_sym_AT,
    ACTIONS(203), 1,
      anon_sym_DOT,
    ACTIONS(213), 1,
      anon_sym_SEMI,
    STATE(58), 1,
      sym_block_comment,
    ACTIONS(113), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_EQ,
  [3142] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(139), 1,
      anon_sym_PLUS,
    ACTIONS(141), 1,
      anon_sym_DASH,
    ACTIONS(145), 1,
      anon_sym_LT,
    ACTIONS(201), 1,
      anon_sym_AT,
    ACTIONS(203), 1,
      anon_sym_DOT,
    ACTIONS(215), 1,
      anon_sym_else,
    STATE(59), 1,
      sym_block_comment,
    ACTIONS(113), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_EQ,
  [3178] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(139), 1,
      anon_sym_PLUS,
    ACTIONS(141), 1,
      anon_sym_DASH,
    ACTIONS(145), 1,
      anon_sym_LT,
    ACTIONS(201), 1,
      anon_sym_AT,
    ACTIONS(203), 1,
      anon_sym_DOT,
    ACTIONS(217), 1,
      anon_sym_pool,
    STATE(60), 1,
      sym_block_comment,
    ACTIONS(113), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_EQ,
  [3214] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(139), 1,
      anon_sym_PLUS,
    ACTIONS(141), 1,
      anon_sym_DASH,
    ACTIONS(145), 1,
      anon_sym_LT,
    ACTIONS(201), 1,
      anon_sym_AT,
    ACTIONS(203), 1,
      anon_sym_DOT,
    ACTIONS(219), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      sym_block_comment,
    ACTIONS(113), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_EQ,
  [3250] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(139), 1,
      anon_sym_PLUS,
    ACTIONS(141), 1,
      anon_sym_DASH,
    ACTIONS(145), 1,
      anon_sym_LT,
    ACTIONS(201), 1,
      anon_sym_AT,
    ACTIONS(203), 1,
      anon_sym_DOT,
    ACTIONS(221), 1,
      anon_sym_SEMI,
    STATE(62), 1,
      sym_block_comment,
    ACTIONS(113), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_EQ,
  [3286] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(139), 1,
      anon_sym_PLUS,
    ACTIONS(141), 1,
      anon_sym_DASH,
    ACTIONS(145), 1,
      anon_sym_LT,
    ACTIONS(201), 1,
      anon_sym_AT,
    ACTIONS(203), 1,
      anon_sym_DOT,
    ACTIONS(223), 1,
      anon_sym_fi,
    STATE(63), 1,
      sym_block_comment,
    ACTIONS(113), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_EQ,
  [3322] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(139), 1,
      anon_sym_PLUS,
    ACTIONS(141), 1,
      anon_sym_DASH,
    ACTIONS(145), 1,
      anon_sym_LT,
    ACTIONS(201), 1,
      anon_sym_AT,
    ACTIONS(203), 1,
      anon_sym_DOT,
    ACTIONS(225), 1,
      anon_sym_SEMI,
    STATE(64), 1,
      sym_block_comment,
    ACTIONS(113), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_EQ,
  [3358] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(139), 1,
      anon_sym_PLUS,
    ACTIONS(141), 1,
      anon_sym_DASH,
    ACTIONS(145), 1,
      anon_sym_LT,
    ACTIONS(201), 1,
      anon_sym_AT,
    ACTIONS(203), 1,
      anon_sym_DOT,
    ACTIONS(227), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      sym_block_comment,
    ACTIONS(113), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_EQ,
  [3394] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(139), 1,
      anon_sym_PLUS,
    ACTIONS(141), 1,
      anon_sym_DASH,
    ACTIONS(145), 1,
      anon_sym_LT,
    ACTIONS(201), 1,
      anon_sym_AT,
    ACTIONS(203), 1,
      anon_sym_DOT,
    ACTIONS(229), 1,
      anon_sym_then,
    STATE(66), 1,
      sym_block_comment,
    ACTIONS(113), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_EQ,
  [3430] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(67), 1,
      sym_block_comment,
    ACTIONS(115), 8,
      anon_sym_inherits,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LT_DASH,
      anon_sym_DOT,
      anon_sym_EQ_GT,
  [3450] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(231), 1,
      anon_sym_RBRACE,
    ACTIONS(233), 1,
      sym_feature_identifier,
    STATE(68), 1,
      sym_block_comment,
    STATE(69), 1,
      aux_sym_class_definition_repeat1,
    STATE(117), 1,
      sym__feature,
    STATE(126), 1,
      sym__method_identifier,
    STATE(145), 1,
      sym__attribute_identifier,
    STATE(119), 2,
      sym_method_definition,
      sym_attribute_definition,
  [3482] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(233), 1,
      sym_feature_identifier,
    ACTIONS(235), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      sym_block_comment,
    STATE(71), 1,
      aux_sym_class_definition_repeat1,
    STATE(117), 1,
      sym__feature,
    STATE(126), 1,
      sym__method_identifier,
    STATE(145), 1,
      sym__attribute_identifier,
    STATE(119), 2,
      sym_method_definition,
      sym_attribute_definition,
  [3514] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(233), 1,
      sym_feature_identifier,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      sym_block_comment,
    STATE(72), 1,
      aux_sym_class_definition_repeat1,
    STATE(117), 1,
      sym__feature,
    STATE(126), 1,
      sym__method_identifier,
    STATE(145), 1,
      sym__attribute_identifier,
    STATE(119), 2,
      sym_method_definition,
      sym_attribute_definition,
  [3546] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
    ACTIONS(241), 1,
      sym_feature_identifier,
    STATE(117), 1,
      sym__feature,
    STATE(126), 1,
      sym__method_identifier,
    STATE(145), 1,
      sym__attribute_identifier,
    STATE(71), 2,
      sym_block_comment,
      aux_sym_class_definition_repeat1,
    STATE(119), 2,
      sym_method_definition,
      sym_attribute_definition,
  [3576] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(233), 1,
      sym_feature_identifier,
    ACTIONS(244), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      aux_sym_class_definition_repeat1,
    STATE(72), 1,
      sym_block_comment,
    STATE(117), 1,
      sym__feature,
    STATE(126), 1,
      sym__method_identifier,
    STATE(145), 1,
      sym__attribute_identifier,
    STATE(119), 2,
      sym_method_definition,
      sym_attribute_definition,
  [3608] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(246), 1,
      sym_feature_identifier,
    STATE(73), 1,
      sym_block_comment,
    STATE(75), 1,
      aux_sym_case_branch_list_repeat1,
    STATE(129), 1,
      sym_case_branch,
    STATE(142), 1,
      sym__variable_identifier,
    STATE(143), 1,
      sym_case_branch_list,
  [3633] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(248), 1,
      anon_sym_esac,
    ACTIONS(250), 1,
      sym_feature_identifier,
    STATE(129), 1,
      sym_case_branch,
    STATE(142), 1,
      sym__variable_identifier,
    STATE(74), 2,
      sym_block_comment,
      aux_sym_case_branch_list_repeat1,
  [3656] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(253), 1,
      anon_sym_esac,
    ACTIONS(255), 1,
      sym_feature_identifier,
    STATE(74), 1,
      aux_sym_case_branch_list_repeat1,
    STATE(75), 1,
      sym_block_comment,
    STATE(129), 1,
      sym_case_branch,
    STATE(142), 1,
      sym__variable_identifier,
  [3681] = 5,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(262), 1,
      sym_line_comment,
    ACTIONS(264), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(259), 2,
      aux_sym_string_literal_token1,
      sym__escape_sequence,
    STATE(76), 2,
      sym_block_comment,
      aux_sym_string_literal_repeat1,
  [3699] = 6,
    ACTIONS(262), 1,
      sym_line_comment,
    ACTIONS(264), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(266), 1,
      anon_sym_DQUOTE,
    STATE(76), 1,
      aux_sym_string_literal_repeat1,
    STATE(77), 1,
      sym_block_comment,
    ACTIONS(268), 2,
      aux_sym_string_literal_token1,
      sym__escape_sequence,
  [3719] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(7), 1,
      anon_sym_class,
    ACTIONS(270), 1,
      ts_builtin_sym_end,
    STATE(78), 1,
      sym_block_comment,
    STATE(80), 1,
      aux_sym_source_file_repeat1,
    STATE(111), 1,
      sym_class_definition,
  [3741] = 6,
    ACTIONS(262), 1,
      sym_line_comment,
    ACTIONS(264), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(272), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      aux_sym_string_literal_repeat1,
    STATE(79), 1,
      sym_block_comment,
    ACTIONS(268), 2,
      aux_sym_string_literal_token1,
      sym__escape_sequence,
  [3761] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(274), 1,
      ts_builtin_sym_end,
    ACTIONS(276), 1,
      anon_sym_class,
    STATE(111), 1,
      sym_class_definition,
    STATE(80), 2,
      sym_block_comment,
      aux_sym_source_file_repeat1,
  [3781] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(246), 1,
      sym_feature_identifier,
    STATE(81), 1,
      sym_block_comment,
    STATE(100), 1,
      sym_let_variable_definition,
    STATE(153), 1,
      sym_variable_definition_list,
    STATE(155), 1,
      sym__variable_identifier,
  [3803] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
    ACTIONS(281), 1,
      sym_feature_identifier,
    STATE(82), 1,
      sym_block_comment,
    STATE(97), 1,
      sym_parameter,
    STATE(146), 1,
      sym__parameter_identifier,
  [3825] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(283), 1,
      anon_sym_COMMA,
    ACTIONS(286), 1,
      anon_sym_RPAREN,
    STATE(83), 2,
      sym_block_comment,
      aux_sym_arguments_list_repeat1,
  [3842] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(288), 1,
      anon_sym_COMMA,
    ACTIONS(290), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      sym_block_comment,
    STATE(86), 1,
      aux_sym_parameter_list_repeat1,
  [3861] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(85), 1,
      sym_block_comment,
    STATE(130), 1,
      sym__type_specifier,
    ACTIONS(292), 2,
      sym_builtin_type,
      sym_type_identifier,
  [3878] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(294), 1,
      anon_sym_COMMA,
    ACTIONS(297), 1,
      anon_sym_RPAREN,
    STATE(86), 2,
      sym_block_comment,
      aux_sym_parameter_list_repeat1,
  [3895] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(87), 1,
      sym_block_comment,
    STATE(150), 1,
      sym__type_specifier,
    ACTIONS(292), 2,
      sym_builtin_type,
      sym_type_identifier,
  [3912] = 4,
    ACTIONS(262), 1,
      sym_line_comment,
    ACTIONS(264), 1,
      anon_sym_LPAREN_STAR,
    STATE(88), 1,
      sym_block_comment,
    ACTIONS(299), 3,
      anon_sym_DQUOTE,
      aux_sym_string_literal_token1,
      sym__escape_sequence,
  [3927] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(89), 1,
      sym_block_comment,
    STATE(152), 1,
      sym__type_specifier,
    ACTIONS(292), 2,
      sym_builtin_type,
      sym_type_identifier,
  [3944] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(303), 1,
      anon_sym_LT_DASH,
    STATE(90), 1,
      sym_block_comment,
    ACTIONS(301), 2,
      anon_sym_COMMA,
      anon_sym_in,
  [3961] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(91), 1,
      sym_block_comment,
    STATE(134), 1,
      sym__type_specifier,
    ACTIONS(292), 2,
      sym_builtin_type,
      sym_type_identifier,
  [3978] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    ACTIONS(308), 1,
      anon_sym_in,
    STATE(92), 2,
      sym_block_comment,
      aux_sym_variable_definition_list_repeat1,
  [3995] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(281), 1,
      sym_feature_identifier,
    STATE(93), 1,
      sym_block_comment,
    STATE(120), 1,
      sym_parameter,
    STATE(146), 1,
      sym__parameter_identifier,
  [4014] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(94), 1,
      sym_block_comment,
    STATE(151), 1,
      sym__type_specifier,
    ACTIONS(292), 2,
      sym_builtin_type,
      sym_type_identifier,
  [4031] = 5,
    ACTIONS(262), 1,
      sym_line_comment,
    ACTIONS(264), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(310), 1,
      aux_sym_block_comment_token1,
    ACTIONS(313), 1,
      anon_sym_STAR_RPAREN,
    STATE(95), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [4048] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(28), 1,
      sym__type_specifier,
    STATE(96), 1,
      sym_block_comment,
    ACTIONS(315), 2,
      sym_builtin_type,
      sym_type_identifier,
  [4065] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(288), 1,
      anon_sym_COMMA,
    ACTIONS(317), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      aux_sym_parameter_list_repeat1,
    STATE(97), 1,
      sym_block_comment,
  [4084] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(98), 1,
      sym_block_comment,
    STATE(118), 1,
      sym__type_specifier,
    ACTIONS(292), 2,
      sym_builtin_type,
      sym_type_identifier,
  [4101] = 6,
    ACTIONS(262), 1,
      sym_line_comment,
    ACTIONS(264), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(319), 1,
      aux_sym_block_comment_token1,
    ACTIONS(321), 1,
      anon_sym_STAR_RPAREN,
    STATE(95), 1,
      aux_sym_block_comment_repeat1,
    STATE(99), 1,
      sym_block_comment,
  [4120] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(323), 1,
      anon_sym_COMMA,
    ACTIONS(325), 1,
      anon_sym_in,
    STATE(100), 1,
      sym_block_comment,
    STATE(105), 1,
      aux_sym_variable_definition_list_repeat1,
  [4139] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(197), 1,
      anon_sym_COMMA,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      aux_sym_arguments_list_repeat1,
    STATE(101), 1,
      sym_block_comment,
  [4158] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(102), 1,
      sym_block_comment,
    ACTIONS(115), 3,
      anon_sym_COMMA,
      anon_sym_LT_DASH,
      anon_sym_in,
  [4173] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(103), 1,
      sym_block_comment,
    STATE(115), 1,
      sym__type_specifier,
    ACTIONS(292), 2,
      sym_builtin_type,
      sym_type_identifier,
  [4190] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(246), 1,
      sym_feature_identifier,
    STATE(104), 1,
      sym_block_comment,
    STATE(125), 1,
      sym_let_variable_definition,
    STATE(155), 1,
      sym__variable_identifier,
  [4209] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(323), 1,
      anon_sym_COMMA,
    ACTIONS(329), 1,
      anon_sym_in,
    STATE(92), 1,
      aux_sym_variable_definition_list_repeat1,
    STATE(105), 1,
      sym_block_comment,
  [4228] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(90), 1,
      sym__type_specifier,
    STATE(106), 1,
      sym_block_comment,
    ACTIONS(331), 2,
      sym_builtin_type,
      sym_type_identifier,
  [4245] = 6,
    ACTIONS(262), 1,
      sym_line_comment,
    ACTIONS(264), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(319), 1,
      aux_sym_block_comment_token1,
    ACTIONS(333), 1,
      anon_sym_STAR_RPAREN,
    STATE(99), 1,
      aux_sym_block_comment_repeat1,
    STATE(107), 1,
      sym_block_comment,
  [4264] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(108), 1,
      sym_block_comment,
    ACTIONS(335), 2,
      ts_builtin_sym_end,
      anon_sym_class,
  [4278] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(337), 1,
      sym_feature_identifier,
    STATE(109), 1,
      sym_block_comment,
    STATE(114), 1,
      sym__method_identifier,
  [4294] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(110), 1,
      sym_block_comment,
    ACTIONS(339), 2,
      anon_sym_RBRACE,
      sym_feature_identifier,
  [4308] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(111), 1,
      sym_block_comment,
    ACTIONS(341), 2,
      ts_builtin_sym_end,
      anon_sym_class,
  [4322] = 4,
    ACTIONS(262), 1,
      sym_line_comment,
    ACTIONS(264), 1,
      anon_sym_LPAREN_STAR,
    STATE(112), 1,
      sym_block_comment,
    ACTIONS(343), 2,
      aux_sym_block_comment_token1,
      anon_sym_STAR_RPAREN,
  [4336] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(113), 1,
      sym_block_comment,
    ACTIONS(345), 2,
      anon_sym_esac,
      sym_feature_identifier,
  [4350] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      sym_arguments_list,
    STATE(114), 1,
      sym_block_comment,
  [4366] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(349), 1,
      anon_sym_inherits,
    ACTIONS(351), 1,
      anon_sym_LBRACE,
    STATE(115), 1,
      sym_block_comment,
  [4382] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(353), 1,
      anon_sym_COLON,
    STATE(116), 1,
      sym_block_comment,
  [4398] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(117), 1,
      sym_block_comment,
    ACTIONS(355), 2,
      anon_sym_RBRACE,
      sym_feature_identifier,
  [4412] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(118), 1,
      sym_block_comment,
    ACTIONS(357), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4426] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(119), 1,
      sym_block_comment,
    ACTIONS(359), 2,
      anon_sym_RBRACE,
      sym_feature_identifier,
  [4440] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(120), 1,
      sym_block_comment,
    ACTIONS(297), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4454] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(121), 1,
      sym_block_comment,
    ACTIONS(361), 2,
      ts_builtin_sym_end,
      anon_sym_class,
  [4468] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
    STATE(50), 1,
      sym_arguments_list,
    STATE(122), 1,
      sym_block_comment,
  [4484] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(123), 1,
      sym_block_comment,
    ACTIONS(363), 2,
      ts_builtin_sym_end,
      anon_sym_class,
  [4498] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
    STATE(51), 1,
      sym_arguments_list,
    STATE(124), 1,
      sym_block_comment,
  [4514] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(125), 1,
      sym_block_comment,
    ACTIONS(365), 2,
      anon_sym_COMMA,
      anon_sym_in,
  [4528] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    STATE(126), 1,
      sym_block_comment,
    STATE(141), 1,
      sym_parameter_list,
  [4544] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(127), 1,
      sym_block_comment,
    ACTIONS(369), 2,
      anon_sym_RBRACE,
      sym_feature_identifier,
  [4558] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(128), 1,
      sym_block_comment,
    ACTIONS(371), 2,
      ts_builtin_sym_end,
      anon_sym_class,
  [4572] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(129), 1,
      sym_block_comment,
    ACTIONS(373), 2,
      anon_sym_esac,
      sym_feature_identifier,
  [4586] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(375), 1,
      anon_sym_SEMI,
    ACTIONS(377), 1,
      anon_sym_LT_DASH,
    STATE(130), 1,
      sym_block_comment,
  [4602] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(131), 1,
      sym_block_comment,
    ACTIONS(379), 2,
      anon_sym_RBRACE,
      sym_feature_identifier,
  [4616] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(337), 1,
      sym_feature_identifier,
    STATE(124), 1,
      sym__method_identifier,
    STATE(132), 1,
      sym_block_comment,
  [4632] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(381), 1,
      anon_sym_SEMI,
    STATE(133), 1,
      sym_block_comment,
  [4645] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(383), 1,
      anon_sym_LBRACE,
    STATE(134), 1,
      sym_block_comment,
  [4658] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(385), 1,
      anon_sym_COLON,
    STATE(135), 1,
      sym_block_comment,
  [4671] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(387), 1,
      anon_sym_COLON,
    STATE(136), 1,
      sym_block_comment,
  [4684] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(389), 1,
      ts_builtin_sym_end,
    STATE(137), 1,
      sym_block_comment,
  [4697] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(391), 1,
      anon_sym_SEMI,
    STATE(138), 1,
      sym_block_comment,
  [4710] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(393), 1,
      anon_sym_SEMI,
    STATE(139), 1,
      sym_block_comment,
  [4723] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(395), 1,
      anon_sym_SEMI,
    STATE(140), 1,
      sym_block_comment,
  [4736] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(397), 1,
      anon_sym_COLON,
    STATE(141), 1,
      sym_block_comment,
  [4749] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(399), 1,
      anon_sym_COLON,
    STATE(142), 1,
      sym_block_comment,
  [4762] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(401), 1,
      anon_sym_esac,
    STATE(143), 1,
      sym_block_comment,
  [4775] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(403), 1,
      anon_sym_COLON,
    STATE(144), 1,
      sym_block_comment,
  [4788] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(405), 1,
      anon_sym_COLON,
    STATE(145), 1,
      sym_block_comment,
  [4801] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(407), 1,
      anon_sym_COLON,
    STATE(146), 1,
      sym_block_comment,
  [4814] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(409), 1,
      anon_sym_COLON,
    STATE(147), 1,
      sym_block_comment,
  [4827] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(85), 1,
      anon_sym_COLON,
    STATE(148), 1,
      sym_block_comment,
  [4840] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(411), 1,
      anon_sym_SEMI,
    STATE(149), 1,
      sym_block_comment,
  [4853] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(413), 1,
      anon_sym_EQ_GT,
    STATE(150), 1,
      sym_block_comment,
  [4866] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(415), 1,
      anon_sym_LBRACE,
    STATE(151), 1,
      sym_block_comment,
  [4879] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(417), 1,
      anon_sym_DOT,
    STATE(152), 1,
      sym_block_comment,
  [4892] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(419), 1,
      anon_sym_in,
    STATE(153), 1,
      sym_block_comment,
  [4905] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    STATE(154), 1,
      sym_block_comment,
  [4918] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(421), 1,
      anon_sym_COLON,
    STATE(155), 1,
      sym_block_comment,
  [4931] = 1,
    ACTIONS(423), 1,
      ts_builtin_sym_end,
  [4935] = 1,
    ACTIONS(425), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 87,
  [SMALL_STATE(4)] = 172,
  [SMALL_STATE(5)] = 256,
  [SMALL_STATE(6)] = 340,
  [SMALL_STATE(7)] = 421,
  [SMALL_STATE(8)] = 502,
  [SMALL_STATE(9)] = 583,
  [SMALL_STATE(10)] = 664,
  [SMALL_STATE(11)] = 745,
  [SMALL_STATE(12)] = 826,
  [SMALL_STATE(13)] = 907,
  [SMALL_STATE(14)] = 988,
  [SMALL_STATE(15)] = 1069,
  [SMALL_STATE(16)] = 1150,
  [SMALL_STATE(17)] = 1231,
  [SMALL_STATE(18)] = 1312,
  [SMALL_STATE(19)] = 1393,
  [SMALL_STATE(20)] = 1474,
  [SMALL_STATE(21)] = 1555,
  [SMALL_STATE(22)] = 1636,
  [SMALL_STATE(23)] = 1717,
  [SMALL_STATE(24)] = 1798,
  [SMALL_STATE(25)] = 1879,
  [SMALL_STATE(26)] = 1960,
  [SMALL_STATE(27)] = 1998,
  [SMALL_STATE(28)] = 2035,
  [SMALL_STATE(29)] = 2069,
  [SMALL_STATE(30)] = 2103,
  [SMALL_STATE(31)] = 2137,
  [SMALL_STATE(32)] = 2173,
  [SMALL_STATE(33)] = 2207,
  [SMALL_STATE(34)] = 2241,
  [SMALL_STATE(35)] = 2275,
  [SMALL_STATE(36)] = 2309,
  [SMALL_STATE(37)] = 2343,
  [SMALL_STATE(38)] = 2377,
  [SMALL_STATE(39)] = 2411,
  [SMALL_STATE(40)] = 2451,
  [SMALL_STATE(41)] = 2493,
  [SMALL_STATE(42)] = 2527,
  [SMALL_STATE(43)] = 2561,
  [SMALL_STATE(44)] = 2595,
  [SMALL_STATE(45)] = 2629,
  [SMALL_STATE(46)] = 2671,
  [SMALL_STATE(47)] = 2717,
  [SMALL_STATE(48)] = 2751,
  [SMALL_STATE(49)] = 2785,
  [SMALL_STATE(50)] = 2819,
  [SMALL_STATE(51)] = 2853,
  [SMALL_STATE(52)] = 2887,
  [SMALL_STATE(53)] = 2918,
  [SMALL_STATE(54)] = 2960,
  [SMALL_STATE(55)] = 2997,
  [SMALL_STATE(56)] = 3034,
  [SMALL_STATE(57)] = 3070,
  [SMALL_STATE(58)] = 3106,
  [SMALL_STATE(59)] = 3142,
  [SMALL_STATE(60)] = 3178,
  [SMALL_STATE(61)] = 3214,
  [SMALL_STATE(62)] = 3250,
  [SMALL_STATE(63)] = 3286,
  [SMALL_STATE(64)] = 3322,
  [SMALL_STATE(65)] = 3358,
  [SMALL_STATE(66)] = 3394,
  [SMALL_STATE(67)] = 3430,
  [SMALL_STATE(68)] = 3450,
  [SMALL_STATE(69)] = 3482,
  [SMALL_STATE(70)] = 3514,
  [SMALL_STATE(71)] = 3546,
  [SMALL_STATE(72)] = 3576,
  [SMALL_STATE(73)] = 3608,
  [SMALL_STATE(74)] = 3633,
  [SMALL_STATE(75)] = 3656,
  [SMALL_STATE(76)] = 3681,
  [SMALL_STATE(77)] = 3699,
  [SMALL_STATE(78)] = 3719,
  [SMALL_STATE(79)] = 3741,
  [SMALL_STATE(80)] = 3761,
  [SMALL_STATE(81)] = 3781,
  [SMALL_STATE(82)] = 3803,
  [SMALL_STATE(83)] = 3825,
  [SMALL_STATE(84)] = 3842,
  [SMALL_STATE(85)] = 3861,
  [SMALL_STATE(86)] = 3878,
  [SMALL_STATE(87)] = 3895,
  [SMALL_STATE(88)] = 3912,
  [SMALL_STATE(89)] = 3927,
  [SMALL_STATE(90)] = 3944,
  [SMALL_STATE(91)] = 3961,
  [SMALL_STATE(92)] = 3978,
  [SMALL_STATE(93)] = 3995,
  [SMALL_STATE(94)] = 4014,
  [SMALL_STATE(95)] = 4031,
  [SMALL_STATE(96)] = 4048,
  [SMALL_STATE(97)] = 4065,
  [SMALL_STATE(98)] = 4084,
  [SMALL_STATE(99)] = 4101,
  [SMALL_STATE(100)] = 4120,
  [SMALL_STATE(101)] = 4139,
  [SMALL_STATE(102)] = 4158,
  [SMALL_STATE(103)] = 4173,
  [SMALL_STATE(104)] = 4190,
  [SMALL_STATE(105)] = 4209,
  [SMALL_STATE(106)] = 4228,
  [SMALL_STATE(107)] = 4245,
  [SMALL_STATE(108)] = 4264,
  [SMALL_STATE(109)] = 4278,
  [SMALL_STATE(110)] = 4294,
  [SMALL_STATE(111)] = 4308,
  [SMALL_STATE(112)] = 4322,
  [SMALL_STATE(113)] = 4336,
  [SMALL_STATE(114)] = 4350,
  [SMALL_STATE(115)] = 4366,
  [SMALL_STATE(116)] = 4382,
  [SMALL_STATE(117)] = 4398,
  [SMALL_STATE(118)] = 4412,
  [SMALL_STATE(119)] = 4426,
  [SMALL_STATE(120)] = 4440,
  [SMALL_STATE(121)] = 4454,
  [SMALL_STATE(122)] = 4468,
  [SMALL_STATE(123)] = 4484,
  [SMALL_STATE(124)] = 4498,
  [SMALL_STATE(125)] = 4514,
  [SMALL_STATE(126)] = 4528,
  [SMALL_STATE(127)] = 4544,
  [SMALL_STATE(128)] = 4558,
  [SMALL_STATE(129)] = 4572,
  [SMALL_STATE(130)] = 4586,
  [SMALL_STATE(131)] = 4602,
  [SMALL_STATE(132)] = 4616,
  [SMALL_STATE(133)] = 4632,
  [SMALL_STATE(134)] = 4645,
  [SMALL_STATE(135)] = 4658,
  [SMALL_STATE(136)] = 4671,
  [SMALL_STATE(137)] = 4684,
  [SMALL_STATE(138)] = 4697,
  [SMALL_STATE(139)] = 4710,
  [SMALL_STATE(140)] = 4723,
  [SMALL_STATE(141)] = 4736,
  [SMALL_STATE(142)] = 4749,
  [SMALL_STATE(143)] = 4762,
  [SMALL_STATE(144)] = 4775,
  [SMALL_STATE(145)] = 4788,
  [SMALL_STATE(146)] = 4801,
  [SMALL_STATE(147)] = 4814,
  [SMALL_STATE(148)] = 4827,
  [SMALL_STATE(149)] = 4840,
  [SMALL_STATE(150)] = 4853,
  [SMALL_STATE(151)] = 4866,
  [SMALL_STATE(152)] = 4879,
  [SMALL_STATE(153)] = 4892,
  [SMALL_STATE(154)] = 4905,
  [SMALL_STATE(155)] = 4918,
  [SMALL_STATE(156)] = 4931,
  [SMALL_STATE(157)] = 4935,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_block_expression_repeat1, 2), SHIFT_REPEAT(4),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_block_expression_repeat1, 2),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_block_expression_repeat1, 2), SHIFT_REPEAT(11),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_block_expression_repeat1, 2), SHIFT_REPEAT(10),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_block_expression_repeat1, 2), SHIFT_REPEAT(8),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_block_expression_repeat1, 2), SHIFT_REPEAT(81),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_block_expression_repeat1, 2), SHIFT_REPEAT(7),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_block_expression_repeat1, 2), SHIFT_REPEAT(96),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_block_expression_repeat1, 2), SHIFT_REPEAT(17),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_block_expression_repeat1, 2), SHIFT_REPEAT(13),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_block_expression_repeat1, 2), SHIFT_REPEAT(6),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_block_expression_repeat1, 2), SHIFT_REPEAT(48),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_block_expression_repeat1, 2), SHIFT_REPEAT(79),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_block_expression_repeat1, 2), SHIFT_REPEAT(48),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_block_expression_repeat1, 2), SHIFT_REPEAT(26),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_identifier, 1, .production_id = 10),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_identifier, 1, .production_id = 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable_identifier, 1, .production_id = 10),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier_expression, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier_expression, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newtype_expression, 2, .production_id = 12),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_newtype_expression, 2, .production_id = 12),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments_list, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments_list, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_expression, 5, .production_id = 27),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_expression, 5, .production_id = 27),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 17),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 17),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_specifier, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_specifier, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_expression, 5, .production_id = 28),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_expression, 5, .production_id = 28),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments_list, 3, .production_id = 25),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments_list, 3, .production_id = 25),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_isvoid_expression, 2, .production_id = 13),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_isvoid_expression, 2, .production_id = 13),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_complement, 2, .production_id = 13),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_complement, 2, .production_id = 13),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dispatch_expression, 4, .production_id = 24),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dispatch_expression, 4, .production_id = 24),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_complement, 2, .production_id = 13),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parentheses_expression, 3, .production_id = 13),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parentheses_expression, 3, .production_id = 13),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_block_expression, 3, .production_id = 13),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_block_expression, 3, .production_id = 13),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expression, 3, .production_id = 17),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expression, 4, .production_id = 18),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_let_expression, 4, .production_id = 18), SHIFT(89),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_let_expression, 4, .production_id = 18), SHIFT(109),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments_list, 4, .production_id = 30),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments_list, 4, .production_id = 30),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 7, .production_id = 34),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 7, .production_id = 34),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_call_expression, 2, .production_id = 15),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_call_expression, 2, .production_id = 15),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dispatch_expression, 6, .production_id = 33),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dispatch_expression, 6, .production_id = 33),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expr_block_expression_repeat1, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_variable_definition, 5, .production_id = 32),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_list_repeat1, 2, .production_id = 25),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2, .production_id = 4),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2, .production_id = 4), SHIFT_REPEAT(116),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_branch_list_repeat1, 2, .production_id = 29),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_branch_list_repeat1, 2, .production_id = 29), SHIFT_REPEAT(148),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_branch_list, 1, .production_id = 23),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(88),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(103),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_list_repeat1, 2, .production_id = 31), SHIFT_REPEAT(24),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_list_repeat1, 2, .production_id = 31),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(93),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_variable_definition, 3, .production_id = 21),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_definition_list_repeat1, 2, .production_id = 20), SHIFT_REPEAT(104),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_definition_list_repeat1, 2, .production_id = 20),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(112),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_list, 1, .production_id = 11),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_list, 2, .production_id = 16),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 6, .production_id = 6),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_definition, 6, .production_id = 14),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 1),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_branch, 6, .production_id = 35),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute_identifier, 1),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 1, .production_id = 2),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 8),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__feature, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 7, .production_id = 7),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 8, .production_id = 9),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_definition_list_repeat1, 2, .production_id = 19),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_definition, 4, .production_id = 8),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 5, .production_id = 3),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_branch_list_repeat1, 1, .production_id = 22),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_definition, 8, .production_id = 26),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_identifier, 1, .production_id = 5),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [389] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_cool(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
