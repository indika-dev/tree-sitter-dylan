#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 76
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 66
#define ALIAS_COUNT 0
#define TOKEN_COUNT 50
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_comment_block_dylan = 1,
  sym_line_comment = 2,
  anon_sym_module = 3,
  anon_sym_synopsis = 4,
  anon_sym_author = 5,
  anon_sym_copyright = 6,
  anon_sym_version = 7,
  anon_sym_files = 8,
  anon_sym_executable = 9,
  anon_sym_library = 10,
  anon_sym_define = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  anon_sym_EQ_GT = 14,
  aux_sym_identifier_token1 = 15,
  aux_sym_identifier_token2 = 16,
  anon_sym_QMARK = 17,
  anon_sym_BANG = 18,
  anon_sym_POUNDt = 19,
  anon_sym_POUNDf = 20,
  anon_sym_POUND_LPAREN = 21,
  anon_sym_DOT = 22,
  anon_sym_COMMA = 23,
  anon_sym_POUND_LBRACK = 24,
  anon_sym_RBRACK = 25,
  sym_string_literal = 26,
  sym_number = 27,
  sym_character_literal = 28,
  sym_symbol = 29,
  anon_sym_POUNDnext = 30,
  anon_sym_POUNDrest = 31,
  anon_sym_POUNDkey = 32,
  anon_sym_POUNDall_DASHkeys = 33,
  anon_sym_POUNDinclude = 34,
  anon_sym_method = 35,
  anon_sym_sealed = 36,
  anon_sym_open = 37,
  anon_sym_sideways = 38,
  anon_sym_dynamic = 39,
  anon_sym_compiler_DASHsideways = 40,
  anon_sym_compiler_DASHopen = 41,
  anon_sym_default_DASHinline = 42,
  anon_sym_inline_DASHonly = 43,
  anon_sym_inline = 44,
  anon_sym_may_DASHinline = 45,
  anon_sym_not_DASHinline = 46,
  anon_sym_domain = 47,
  anon_sym_function = 48,
  anon_sym_generic = 49,
  sym_source_file = 50,
  sym_meta_preprocessor_dylan = 51,
  sym_module = 52,
  sym_synopsis = 53,
  sym_author = 54,
  sym_copyright = 55,
  sym_version = 56,
  sym_files = 57,
  sym_executable = 58,
  sym_library = 59,
  sym_function_definition = 60,
  sym_identifier = 61,
  sym_modifier = 62,
  sym_function_word = 63,
  aux_sym_source_file_repeat1 = 64,
  aux_sym_identifier_repeat1 = 65,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment_block_dylan] = "comment_block_dylan",
  [sym_line_comment] = "line_comment",
  [anon_sym_module] = "module",
  [anon_sym_synopsis] = "synopsis",
  [anon_sym_author] = "author",
  [anon_sym_copyright] = "copyright",
  [anon_sym_version] = "version",
  [anon_sym_files] = "files",
  [anon_sym_executable] = "executable",
  [anon_sym_library] = "library",
  [anon_sym_define] = "define",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ_GT] = "=>",
  [aux_sym_identifier_token1] = "identifier_token1",
  [aux_sym_identifier_token2] = "identifier_token2",
  [anon_sym_QMARK] = "\?",
  [anon_sym_BANG] = "!",
  [anon_sym_POUNDt] = "#t",
  [anon_sym_POUNDf] = "#f",
  [anon_sym_POUND_LPAREN] = "#(",
  [anon_sym_DOT] = ".",
  [anon_sym_COMMA] = ",",
  [anon_sym_POUND_LBRACK] = "#[",
  [anon_sym_RBRACK] = "]",
  [sym_string_literal] = "string_literal",
  [sym_number] = "number",
  [sym_character_literal] = "character_literal",
  [sym_symbol] = "symbol",
  [anon_sym_POUNDnext] = "#next",
  [anon_sym_POUNDrest] = "#rest",
  [anon_sym_POUNDkey] = "#key",
  [anon_sym_POUNDall_DASHkeys] = "#all-keys",
  [anon_sym_POUNDinclude] = "#include",
  [anon_sym_method] = "method",
  [anon_sym_sealed] = "sealed",
  [anon_sym_open] = "open",
  [anon_sym_sideways] = "sideways",
  [anon_sym_dynamic] = "dynamic",
  [anon_sym_compiler_DASHsideways] = "compiler-sideways",
  [anon_sym_compiler_DASHopen] = "compiler-open",
  [anon_sym_default_DASHinline] = "default-inline",
  [anon_sym_inline_DASHonly] = "inline-only",
  [anon_sym_inline] = "inline",
  [anon_sym_may_DASHinline] = "may-inline",
  [anon_sym_not_DASHinline] = "not-inline",
  [anon_sym_domain] = "domain",
  [anon_sym_function] = "function",
  [anon_sym_generic] = "generic",
  [sym_source_file] = "source_file",
  [sym_meta_preprocessor_dylan] = "meta_preprocessor_dylan",
  [sym_module] = "module",
  [sym_synopsis] = "synopsis",
  [sym_author] = "author",
  [sym_copyright] = "copyright",
  [sym_version] = "version",
  [sym_files] = "files",
  [sym_executable] = "executable",
  [sym_library] = "library",
  [sym_function_definition] = "function_definition",
  [sym_identifier] = "identifier",
  [sym_modifier] = "modifier",
  [sym_function_word] = "function_word",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_identifier_repeat1] = "identifier_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment_block_dylan] = sym_comment_block_dylan,
  [sym_line_comment] = sym_line_comment,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_synopsis] = anon_sym_synopsis,
  [anon_sym_author] = anon_sym_author,
  [anon_sym_copyright] = anon_sym_copyright,
  [anon_sym_version] = anon_sym_version,
  [anon_sym_files] = anon_sym_files,
  [anon_sym_executable] = anon_sym_executable,
  [anon_sym_library] = anon_sym_library,
  [anon_sym_define] = anon_sym_define,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [aux_sym_identifier_token2] = aux_sym_identifier_token2,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_POUNDt] = anon_sym_POUNDt,
  [anon_sym_POUNDf] = anon_sym_POUNDf,
  [anon_sym_POUND_LPAREN] = anon_sym_POUND_LPAREN,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_POUND_LBRACK] = anon_sym_POUND_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_string_literal] = sym_string_literal,
  [sym_number] = sym_number,
  [sym_character_literal] = sym_character_literal,
  [sym_symbol] = sym_symbol,
  [anon_sym_POUNDnext] = anon_sym_POUNDnext,
  [anon_sym_POUNDrest] = anon_sym_POUNDrest,
  [anon_sym_POUNDkey] = anon_sym_POUNDkey,
  [anon_sym_POUNDall_DASHkeys] = anon_sym_POUNDall_DASHkeys,
  [anon_sym_POUNDinclude] = anon_sym_POUNDinclude,
  [anon_sym_method] = anon_sym_method,
  [anon_sym_sealed] = anon_sym_sealed,
  [anon_sym_open] = anon_sym_open,
  [anon_sym_sideways] = anon_sym_sideways,
  [anon_sym_dynamic] = anon_sym_dynamic,
  [anon_sym_compiler_DASHsideways] = anon_sym_compiler_DASHsideways,
  [anon_sym_compiler_DASHopen] = anon_sym_compiler_DASHopen,
  [anon_sym_default_DASHinline] = anon_sym_default_DASHinline,
  [anon_sym_inline_DASHonly] = anon_sym_inline_DASHonly,
  [anon_sym_inline] = anon_sym_inline,
  [anon_sym_may_DASHinline] = anon_sym_may_DASHinline,
  [anon_sym_not_DASHinline] = anon_sym_not_DASHinline,
  [anon_sym_domain] = anon_sym_domain,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_generic] = anon_sym_generic,
  [sym_source_file] = sym_source_file,
  [sym_meta_preprocessor_dylan] = sym_meta_preprocessor_dylan,
  [sym_module] = sym_module,
  [sym_synopsis] = sym_synopsis,
  [sym_author] = sym_author,
  [sym_copyright] = sym_copyright,
  [sym_version] = sym_version,
  [sym_files] = sym_files,
  [sym_executable] = sym_executable,
  [sym_library] = sym_library,
  [sym_function_definition] = sym_function_definition,
  [sym_identifier] = sym_identifier,
  [sym_modifier] = sym_modifier,
  [sym_function_word] = sym_function_word,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_identifier_repeat1] = aux_sym_identifier_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment_block_dylan] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_synopsis] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_author] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_copyright] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_version] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_files] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_executable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_library] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_character_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUNDnext] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDrest] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDkey] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDall_DASHkeys] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDinclude] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_method] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sealed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_open] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sideways] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dynamic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_compiler_DASHsideways] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_compiler_DASHopen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default_DASHinline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inline_DASHonly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_may_DASHinline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not_DASHinline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_domain] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_generic] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_meta_preprocessor_dylan] = {
    .visible = true,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_synopsis] = {
    .visible = true,
    .named = true,
  },
  [sym_author] = {
    .visible = true,
    .named = true,
  },
  [sym_copyright] = {
    .visible = true,
    .named = true,
  },
  [sym_version] = {
    .visible = true,
    .named = true,
  },
  [sym_files] = {
    .visible = true,
    .named = true,
  },
  [sym_executable] = {
    .visible = true,
    .named = true,
  },
  [sym_library] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_function_word] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
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
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
};

static TSCharacterRange aux_sym_identifier_token1_character_set_1[] = {
  {'0', '9'}, {'A', 'Z'}, {'_', '_'}, {'a', 'z'}, {0xaa, 0xaa}, {0xb5, 0xb5}, {0xba, 0xba}, {0xc0, 0xd6},
  {0xd8, 0xf6}, {0xf8, 0x2c1}, {0x2c6, 0x2d1}, {0x2e0, 0x2e4}, {0x2ec, 0x2ec}, {0x2ee, 0x2ee}, {0x370, 0x374}, {0x376, 0x377},
  {0x37a, 0x37d}, {0x37f, 0x37f}, {0x386, 0x386}, {0x388, 0x38a}, {0x38c, 0x38c}, {0x38e, 0x3a1}, {0x3a3, 0x3f5}, {0x3f7, 0x481},
  {0x48a, 0x52f}, {0x531, 0x556}, {0x559, 0x559}, {0x560, 0x588}, {0x5d0, 0x5ea}, {0x5ef, 0x5f2}, {0x620, 0x64a}, {0x66e, 0x66f},
  {0x671, 0x6d3}, {0x6d5, 0x6d5}, {0x6e5, 0x6e6}, {0x6ee, 0x6ef}, {0x6fa, 0x6fc}, {0x6ff, 0x6ff}, {0x710, 0x710}, {0x712, 0x72f},
  {0x74d, 0x7a5}, {0x7b1, 0x7b1}, {0x7ca, 0x7ea}, {0x7f4, 0x7f5}, {0x7fa, 0x7fa}, {0x800, 0x815}, {0x81a, 0x81a}, {0x824, 0x824},
  {0x828, 0x828}, {0x840, 0x858}, {0x860, 0x86a}, {0x870, 0x887}, {0x889, 0x88e}, {0x8a0, 0x8c9}, {0x904, 0x939}, {0x93d, 0x93d},
  {0x950, 0x950}, {0x958, 0x961}, {0x971, 0x980}, {0x985, 0x98c}, {0x98f, 0x990}, {0x993, 0x9a8}, {0x9aa, 0x9b0}, {0x9b2, 0x9b2},
  {0x9b6, 0x9b9}, {0x9bd, 0x9bd}, {0x9ce, 0x9ce}, {0x9dc, 0x9dd}, {0x9df, 0x9e1}, {0x9f0, 0x9f1}, {0x9fc, 0x9fc}, {0xa05, 0xa0a},
  {0xa0f, 0xa10}, {0xa13, 0xa28}, {0xa2a, 0xa30}, {0xa32, 0xa33}, {0xa35, 0xa36}, {0xa38, 0xa39}, {0xa59, 0xa5c}, {0xa5e, 0xa5e},
  {0xa72, 0xa74}, {0xa85, 0xa8d}, {0xa8f, 0xa91}, {0xa93, 0xaa8}, {0xaaa, 0xab0}, {0xab2, 0xab3}, {0xab5, 0xab9}, {0xabd, 0xabd},
  {0xad0, 0xad0}, {0xae0, 0xae1}, {0xaf9, 0xaf9}, {0xb05, 0xb0c}, {0xb0f, 0xb10}, {0xb13, 0xb28}, {0xb2a, 0xb30}, {0xb32, 0xb33},
  {0xb35, 0xb39}, {0xb3d, 0xb3d}, {0xb5c, 0xb5d}, {0xb5f, 0xb61}, {0xb71, 0xb71}, {0xb83, 0xb83}, {0xb85, 0xb8a}, {0xb8e, 0xb90},
  {0xb92, 0xb95}, {0xb99, 0xb9a}, {0xb9c, 0xb9c}, {0xb9e, 0xb9f}, {0xba3, 0xba4}, {0xba8, 0xbaa}, {0xbae, 0xbb9}, {0xbd0, 0xbd0},
  {0xc05, 0xc0c}, {0xc0e, 0xc10}, {0xc12, 0xc28}, {0xc2a, 0xc39}, {0xc3d, 0xc3d}, {0xc58, 0xc5a}, {0xc5d, 0xc5d}, {0xc60, 0xc61},
  {0xc80, 0xc80}, {0xc85, 0xc8c}, {0xc8e, 0xc90}, {0xc92, 0xca8}, {0xcaa, 0xcb3}, {0xcb5, 0xcb9}, {0xcbd, 0xcbd}, {0xcdd, 0xcde},
  {0xce0, 0xce1}, {0xcf1, 0xcf2}, {0xd04, 0xd0c}, {0xd0e, 0xd10}, {0xd12, 0xd3a}, {0xd3d, 0xd3d}, {0xd4e, 0xd4e}, {0xd54, 0xd56},
  {0xd5f, 0xd61}, {0xd7a, 0xd7f}, {0xd85, 0xd96}, {0xd9a, 0xdb1}, {0xdb3, 0xdbb}, {0xdbd, 0xdbd}, {0xdc0, 0xdc6}, {0xe01, 0xe30},
  {0xe32, 0xe33}, {0xe40, 0xe46}, {0xe81, 0xe82}, {0xe84, 0xe84}, {0xe86, 0xe8a}, {0xe8c, 0xea3}, {0xea5, 0xea5}, {0xea7, 0xeb0},
  {0xeb2, 0xeb3}, {0xebd, 0xebd}, {0xec0, 0xec4}, {0xec6, 0xec6}, {0xedc, 0xedf}, {0xf00, 0xf00}, {0xf40, 0xf47}, {0xf49, 0xf6c},
  {0xf88, 0xf8c}, {0x1000, 0x102a}, {0x103f, 0x103f}, {0x1050, 0x1055}, {0x105a, 0x105d}, {0x1061, 0x1061}, {0x1065, 0x1066}, {0x106e, 0x1070},
  {0x1075, 0x1081}, {0x108e, 0x108e}, {0x10a0, 0x10c5}, {0x10c7, 0x10c7}, {0x10cd, 0x10cd}, {0x10d0, 0x10fa}, {0x10fc, 0x1248}, {0x124a, 0x124d},
  {0x1250, 0x1256}, {0x1258, 0x1258}, {0x125a, 0x125d}, {0x1260, 0x1288}, {0x128a, 0x128d}, {0x1290, 0x12b0}, {0x12b2, 0x12b5}, {0x12b8, 0x12be},
  {0x12c0, 0x12c0}, {0x12c2, 0x12c5}, {0x12c8, 0x12d6}, {0x12d8, 0x1310}, {0x1312, 0x1315}, {0x1318, 0x135a}, {0x1380, 0x138f}, {0x13a0, 0x13f5},
  {0x13f8, 0x13fd}, {0x1401, 0x166c}, {0x166f, 0x167f}, {0x1681, 0x169a}, {0x16a0, 0x16ea}, {0x16f1, 0x16f8}, {0x1700, 0x1711}, {0x171f, 0x1731},
  {0x1740, 0x1751}, {0x1760, 0x176c}, {0x176e, 0x1770}, {0x1780, 0x17b3}, {0x17d7, 0x17d7}, {0x17dc, 0x17dc}, {0x1820, 0x1878}, {0x1880, 0x1884},
  {0x1887, 0x18a8}, {0x18aa, 0x18aa}, {0x18b0, 0x18f5}, {0x1900, 0x191e}, {0x1950, 0x196d}, {0x1970, 0x1974}, {0x1980, 0x19ab}, {0x19b0, 0x19c9},
  {0x1a00, 0x1a16}, {0x1a20, 0x1a54}, {0x1aa7, 0x1aa7}, {0x1b05, 0x1b33}, {0x1b45, 0x1b4c}, {0x1b83, 0x1ba0}, {0x1bae, 0x1baf}, {0x1bba, 0x1be5},
  {0x1c00, 0x1c23}, {0x1c4d, 0x1c4f}, {0x1c5a, 0x1c7d}, {0x1c80, 0x1c88}, {0x1c90, 0x1cba}, {0x1cbd, 0x1cbf}, {0x1ce9, 0x1cec}, {0x1cee, 0x1cf3},
  {0x1cf5, 0x1cf6}, {0x1cfa, 0x1cfa}, {0x1d00, 0x1dbf}, {0x1e00, 0x1f15}, {0x1f18, 0x1f1d}, {0x1f20, 0x1f45}, {0x1f48, 0x1f4d}, {0x1f50, 0x1f57},
  {0x1f59, 0x1f59}, {0x1f5b, 0x1f5b}, {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f7d}, {0x1f80, 0x1fb4}, {0x1fb6, 0x1fbc}, {0x1fbe, 0x1fbe}, {0x1fc2, 0x1fc4},
  {0x1fc6, 0x1fcc}, {0x1fd0, 0x1fd3}, {0x1fd6, 0x1fdb}, {0x1fe0, 0x1fec}, {0x1ff2, 0x1ff4}, {0x1ff6, 0x1ffc}, {0x2071, 0x2071}, {0x207f, 0x207f},
  {0x2090, 0x209c}, {0x2102, 0x2102}, {0x2107, 0x2107}, {0x210a, 0x2113}, {0x2115, 0x2115}, {0x2119, 0x211d}, {0x2124, 0x2124}, {0x2126, 0x2126},
  {0x2128, 0x2128}, {0x212a, 0x212d}, {0x212f, 0x2139}, {0x213c, 0x213f}, {0x2145, 0x2149}, {0x214e, 0x214e}, {0x2183, 0x2184}, {0x2c00, 0x2ce4},
  {0x2ceb, 0x2cee}, {0x2cf2, 0x2cf3}, {0x2d00, 0x2d25}, {0x2d27, 0x2d27}, {0x2d2d, 0x2d2d}, {0x2d30, 0x2d67}, {0x2d6f, 0x2d6f}, {0x2d80, 0x2d96},
  {0x2da0, 0x2da6}, {0x2da8, 0x2dae}, {0x2db0, 0x2db6}, {0x2db8, 0x2dbe}, {0x2dc0, 0x2dc6}, {0x2dc8, 0x2dce}, {0x2dd0, 0x2dd6}, {0x2dd8, 0x2dde},
  {0x2e2f, 0x2e2f}, {0x3005, 0x3006}, {0x3031, 0x3035}, {0x303b, 0x303c}, {0x3041, 0x3096}, {0x309d, 0x309f}, {0x30a1, 0x30fa}, {0x30fc, 0x30ff},
  {0x3105, 0x312f}, {0x3131, 0x318e}, {0x31a0, 0x31bf}, {0x31f0, 0x31ff}, {0x3400, 0x3400}, {0x4dbf, 0x4dbf}, {0x4e00, 0x4e00}, {0x9fff, 0xa48c},
  {0xa4d0, 0xa4fd}, {0xa500, 0xa60c}, {0xa610, 0xa61f}, {0xa62a, 0xa62b}, {0xa640, 0xa66e}, {0xa67f, 0xa69d}, {0xa6a0, 0xa6e5}, {0xa717, 0xa71f},
  {0xa722, 0xa788}, {0xa78b, 0xa7ca}, {0xa7d0, 0xa7d1}, {0xa7d3, 0xa7d3}, {0xa7d5, 0xa7d9}, {0xa7f2, 0xa801}, {0xa803, 0xa805}, {0xa807, 0xa80a},
  {0xa80c, 0xa822}, {0xa840, 0xa873}, {0xa882, 0xa8b3}, {0xa8f2, 0xa8f7}, {0xa8fb, 0xa8fb}, {0xa8fd, 0xa8fe}, {0xa90a, 0xa925}, {0xa930, 0xa946},
  {0xa960, 0xa97c}, {0xa984, 0xa9b2}, {0xa9cf, 0xa9cf}, {0xa9e0, 0xa9e4}, {0xa9e6, 0xa9ef}, {0xa9fa, 0xa9fe}, {0xaa00, 0xaa28}, {0xaa40, 0xaa42},
  {0xaa44, 0xaa4b}, {0xaa60, 0xaa76}, {0xaa7a, 0xaa7a}, {0xaa7e, 0xaaaf}, {0xaab1, 0xaab1}, {0xaab5, 0xaab6}, {0xaab9, 0xaabd}, {0xaac0, 0xaac0},
  {0xaac2, 0xaac2}, {0xaadb, 0xaadd}, {0xaae0, 0xaaea}, {0xaaf2, 0xaaf4}, {0xab01, 0xab06}, {0xab09, 0xab0e}, {0xab11, 0xab16}, {0xab20, 0xab26},
  {0xab28, 0xab2e}, {0xab30, 0xab5a}, {0xab5c, 0xab69}, {0xab70, 0xabe2}, {0xac00, 0xac00}, {0xd7a3, 0xd7a3}, {0xd7b0, 0xd7c6}, {0xd7cb, 0xd7fb},
  {0xf900, 0xfa6d}, {0xfa70, 0xfad9}, {0xfb00, 0xfb06}, {0xfb13, 0xfb17}, {0xfb1d, 0xfb1d}, {0xfb1f, 0xfb28}, {0xfb2a, 0xfb36}, {0xfb38, 0xfb3c},
  {0xfb3e, 0xfb3e}, {0xfb40, 0xfb41}, {0xfb43, 0xfb44}, {0xfb46, 0xfbb1}, {0xfbd3, 0xfd3d}, {0xfd50, 0xfd8f}, {0xfd92, 0xfdc7}, {0xfdf0, 0xfdfb},
  {0xfe70, 0xfe74}, {0xfe76, 0xfefc}, {0xff21, 0xff3a}, {0xff41, 0xff5a}, {0xff66, 0xffbe}, {0xffc2, 0xffc7}, {0xffca, 0xffcf}, {0xffd2, 0xffd7},
  {0xffda, 0xffdc}, {0x10000, 0x1000b}, {0x1000d, 0x10026}, {0x10028, 0x1003a}, {0x1003c, 0x1003d}, {0x1003f, 0x1004d}, {0x10050, 0x1005d}, {0x10080, 0x100fa},
  {0x10280, 0x1029c}, {0x102a0, 0x102d0}, {0x10300, 0x1031f}, {0x1032d, 0x10340}, {0x10342, 0x10349}, {0x10350, 0x10375}, {0x10380, 0x1039d}, {0x103a0, 0x103c3},
  {0x103c8, 0x103cf}, {0x10400, 0x1049d}, {0x104b0, 0x104d3}, {0x104d8, 0x104fb}, {0x10500, 0x10527}, {0x10530, 0x10563}, {0x10570, 0x1057a}, {0x1057c, 0x1058a},
  {0x1058c, 0x10592}, {0x10594, 0x10595}, {0x10597, 0x105a1}, {0x105a3, 0x105b1}, {0x105b3, 0x105b9}, {0x105bb, 0x105bc}, {0x10600, 0x10736}, {0x10740, 0x10755},
  {0x10760, 0x10767}, {0x10780, 0x10785}, {0x10787, 0x107b0}, {0x107b2, 0x107ba}, {0x10800, 0x10805}, {0x10808, 0x10808}, {0x1080a, 0x10835}, {0x10837, 0x10838},
  {0x1083c, 0x1083c}, {0x1083f, 0x10855}, {0x10860, 0x10876}, {0x10880, 0x1089e}, {0x108e0, 0x108f2}, {0x108f4, 0x108f5}, {0x10900, 0x10915},
};

static TSCharacterRange aux_sym_identifier_token2_character_set_1[] = {
  {'0', '9'}, {'@', 'Z'}, {'_', '_'}, {'a', 'z'}, {0xaa, 0xaa}, {0xb5, 0xb5}, {0xba, 0xba}, {0xc0, 0xd6},
  {0xd8, 0xf6}, {0xf8, 0x2c1}, {0x2c6, 0x2d1}, {0x2e0, 0x2e4}, {0x2ec, 0x2ec}, {0x2ee, 0x2ee}, {0x370, 0x374}, {0x376, 0x377},
  {0x37a, 0x37d}, {0x37f, 0x37f}, {0x386, 0x386}, {0x388, 0x38a}, {0x38c, 0x38c}, {0x38e, 0x3a1}, {0x3a3, 0x3f5}, {0x3f7, 0x481},
  {0x48a, 0x52f}, {0x531, 0x556}, {0x559, 0x559}, {0x560, 0x588}, {0x5d0, 0x5ea}, {0x5ef, 0x5f2}, {0x620, 0x64a}, {0x66e, 0x66f},
  {0x671, 0x6d3}, {0x6d5, 0x6d5}, {0x6e5, 0x6e6}, {0x6ee, 0x6ef}, {0x6fa, 0x6fc}, {0x6ff, 0x6ff}, {0x710, 0x710}, {0x712, 0x72f},
  {0x74d, 0x7a5}, {0x7b1, 0x7b1}, {0x7ca, 0x7ea}, {0x7f4, 0x7f5}, {0x7fa, 0x7fa}, {0x800, 0x815}, {0x81a, 0x81a}, {0x824, 0x824},
  {0x828, 0x828}, {0x840, 0x858}, {0x860, 0x86a}, {0x870, 0x887}, {0x889, 0x88e}, {0x8a0, 0x8c9}, {0x904, 0x939}, {0x93d, 0x93d},
  {0x950, 0x950}, {0x958, 0x961}, {0x971, 0x980}, {0x985, 0x98c}, {0x98f, 0x990}, {0x993, 0x9a8}, {0x9aa, 0x9b0}, {0x9b2, 0x9b2},
  {0x9b6, 0x9b9}, {0x9bd, 0x9bd}, {0x9ce, 0x9ce}, {0x9dc, 0x9dd}, {0x9df, 0x9e1}, {0x9f0, 0x9f1}, {0x9fc, 0x9fc}, {0xa05, 0xa0a},
  {0xa0f, 0xa10}, {0xa13, 0xa28}, {0xa2a, 0xa30}, {0xa32, 0xa33}, {0xa35, 0xa36}, {0xa38, 0xa39}, {0xa59, 0xa5c}, {0xa5e, 0xa5e},
  {0xa72, 0xa74}, {0xa85, 0xa8d}, {0xa8f, 0xa91}, {0xa93, 0xaa8}, {0xaaa, 0xab0}, {0xab2, 0xab3}, {0xab5, 0xab9}, {0xabd, 0xabd},
  {0xad0, 0xad0}, {0xae0, 0xae1}, {0xaf9, 0xaf9}, {0xb05, 0xb0c}, {0xb0f, 0xb10}, {0xb13, 0xb28}, {0xb2a, 0xb30}, {0xb32, 0xb33},
  {0xb35, 0xb39}, {0xb3d, 0xb3d}, {0xb5c, 0xb5d}, {0xb5f, 0xb61}, {0xb71, 0xb71}, {0xb83, 0xb83}, {0xb85, 0xb8a}, {0xb8e, 0xb90},
  {0xb92, 0xb95}, {0xb99, 0xb9a}, {0xb9c, 0xb9c}, {0xb9e, 0xb9f}, {0xba3, 0xba4}, {0xba8, 0xbaa}, {0xbae, 0xbb9}, {0xbd0, 0xbd0},
  {0xc05, 0xc0c}, {0xc0e, 0xc10}, {0xc12, 0xc28}, {0xc2a, 0xc39}, {0xc3d, 0xc3d}, {0xc58, 0xc5a}, {0xc5d, 0xc5d}, {0xc60, 0xc61},
  {0xc80, 0xc80}, {0xc85, 0xc8c}, {0xc8e, 0xc90}, {0xc92, 0xca8}, {0xcaa, 0xcb3}, {0xcb5, 0xcb9}, {0xcbd, 0xcbd}, {0xcdd, 0xcde},
  {0xce0, 0xce1}, {0xcf1, 0xcf2}, {0xd04, 0xd0c}, {0xd0e, 0xd10}, {0xd12, 0xd3a}, {0xd3d, 0xd3d}, {0xd4e, 0xd4e}, {0xd54, 0xd56},
  {0xd5f, 0xd61}, {0xd7a, 0xd7f}, {0xd85, 0xd96}, {0xd9a, 0xdb1}, {0xdb3, 0xdbb}, {0xdbd, 0xdbd}, {0xdc0, 0xdc6}, {0xe01, 0xe30},
  {0xe32, 0xe33}, {0xe40, 0xe46}, {0xe81, 0xe82}, {0xe84, 0xe84}, {0xe86, 0xe8a}, {0xe8c, 0xea3}, {0xea5, 0xea5}, {0xea7, 0xeb0},
  {0xeb2, 0xeb3}, {0xebd, 0xebd}, {0xec0, 0xec4}, {0xec6, 0xec6}, {0xedc, 0xedf}, {0xf00, 0xf00}, {0xf40, 0xf47}, {0xf49, 0xf6c},
  {0xf88, 0xf8c}, {0x1000, 0x102a}, {0x103f, 0x103f}, {0x1050, 0x1055}, {0x105a, 0x105d}, {0x1061, 0x1061}, {0x1065, 0x1066}, {0x106e, 0x1070},
  {0x1075, 0x1081}, {0x108e, 0x108e}, {0x10a0, 0x10c5}, {0x10c7, 0x10c7}, {0x10cd, 0x10cd}, {0x10d0, 0x10fa}, {0x10fc, 0x1248}, {0x124a, 0x124d},
  {0x1250, 0x1256}, {0x1258, 0x1258}, {0x125a, 0x125d}, {0x1260, 0x1288}, {0x128a, 0x128d}, {0x1290, 0x12b0}, {0x12b2, 0x12b5}, {0x12b8, 0x12be},
  {0x12c0, 0x12c0}, {0x12c2, 0x12c5}, {0x12c8, 0x12d6}, {0x12d8, 0x1310}, {0x1312, 0x1315}, {0x1318, 0x135a}, {0x1380, 0x138f}, {0x13a0, 0x13f5},
  {0x13f8, 0x13fd}, {0x1401, 0x166c}, {0x166f, 0x167f}, {0x1681, 0x169a}, {0x16a0, 0x16ea}, {0x16f1, 0x16f8}, {0x1700, 0x1711}, {0x171f, 0x1731},
  {0x1740, 0x1751}, {0x1760, 0x176c}, {0x176e, 0x1770}, {0x1780, 0x17b3}, {0x17d7, 0x17d7}, {0x17dc, 0x17dc}, {0x1820, 0x1878}, {0x1880, 0x1884},
  {0x1887, 0x18a8}, {0x18aa, 0x18aa}, {0x18b0, 0x18f5}, {0x1900, 0x191e}, {0x1950, 0x196d}, {0x1970, 0x1974}, {0x1980, 0x19ab}, {0x19b0, 0x19c9},
  {0x1a00, 0x1a16}, {0x1a20, 0x1a54}, {0x1aa7, 0x1aa7}, {0x1b05, 0x1b33}, {0x1b45, 0x1b4c}, {0x1b83, 0x1ba0}, {0x1bae, 0x1baf}, {0x1bba, 0x1be5},
  {0x1c00, 0x1c23}, {0x1c4d, 0x1c4f}, {0x1c5a, 0x1c7d}, {0x1c80, 0x1c88}, {0x1c90, 0x1cba}, {0x1cbd, 0x1cbf}, {0x1ce9, 0x1cec}, {0x1cee, 0x1cf3},
  {0x1cf5, 0x1cf6}, {0x1cfa, 0x1cfa}, {0x1d00, 0x1dbf}, {0x1e00, 0x1f15}, {0x1f18, 0x1f1d}, {0x1f20, 0x1f45}, {0x1f48, 0x1f4d}, {0x1f50, 0x1f57},
  {0x1f59, 0x1f59}, {0x1f5b, 0x1f5b}, {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f7d}, {0x1f80, 0x1fb4}, {0x1fb6, 0x1fbc}, {0x1fbe, 0x1fbe}, {0x1fc2, 0x1fc4},
  {0x1fc6, 0x1fcc}, {0x1fd0, 0x1fd3}, {0x1fd6, 0x1fdb}, {0x1fe0, 0x1fec}, {0x1ff2, 0x1ff4}, {0x1ff6, 0x1ffc}, {0x2071, 0x2071}, {0x207f, 0x207f},
  {0x2090, 0x209c}, {0x2102, 0x2102}, {0x2107, 0x2107}, {0x210a, 0x2113}, {0x2115, 0x2115}, {0x2119, 0x211d}, {0x2124, 0x2124}, {0x2126, 0x2126},
  {0x2128, 0x2128}, {0x212a, 0x212d}, {0x212f, 0x2139}, {0x213c, 0x213f}, {0x2145, 0x2149}, {0x214e, 0x214e}, {0x2183, 0x2184}, {0x2c00, 0x2ce4},
  {0x2ceb, 0x2cee}, {0x2cf2, 0x2cf3}, {0x2d00, 0x2d25}, {0x2d27, 0x2d27}, {0x2d2d, 0x2d2d}, {0x2d30, 0x2d67}, {0x2d6f, 0x2d6f}, {0x2d80, 0x2d96},
  {0x2da0, 0x2da6}, {0x2da8, 0x2dae}, {0x2db0, 0x2db6}, {0x2db8, 0x2dbe}, {0x2dc0, 0x2dc6}, {0x2dc8, 0x2dce}, {0x2dd0, 0x2dd6}, {0x2dd8, 0x2dde},
  {0x2e2f, 0x2e2f}, {0x3005, 0x3006}, {0x3031, 0x3035}, {0x303b, 0x303c}, {0x3041, 0x3096}, {0x309d, 0x309f}, {0x30a1, 0x30fa}, {0x30fc, 0x30ff},
  {0x3105, 0x312f}, {0x3131, 0x318e}, {0x31a0, 0x31bf}, {0x31f0, 0x31ff}, {0x3400, 0x3400}, {0x4dbf, 0x4dbf}, {0x4e00, 0x4e00}, {0x9fff, 0xa48c},
  {0xa4d0, 0xa4fd}, {0xa500, 0xa60c}, {0xa610, 0xa61f}, {0xa62a, 0xa62b}, {0xa640, 0xa66e}, {0xa67f, 0xa69d}, {0xa6a0, 0xa6e5}, {0xa717, 0xa71f},
  {0xa722, 0xa788}, {0xa78b, 0xa7ca}, {0xa7d0, 0xa7d1}, {0xa7d3, 0xa7d3}, {0xa7d5, 0xa7d9}, {0xa7f2, 0xa801}, {0xa803, 0xa805}, {0xa807, 0xa80a},
  {0xa80c, 0xa822}, {0xa840, 0xa873}, {0xa882, 0xa8b3}, {0xa8f2, 0xa8f7}, {0xa8fb, 0xa8fb}, {0xa8fd, 0xa8fe}, {0xa90a, 0xa925}, {0xa930, 0xa946},
  {0xa960, 0xa97c}, {0xa984, 0xa9b2}, {0xa9cf, 0xa9cf}, {0xa9e0, 0xa9e4}, {0xa9e6, 0xa9ef}, {0xa9fa, 0xa9fe}, {0xaa00, 0xaa28}, {0xaa40, 0xaa42},
  {0xaa44, 0xaa4b}, {0xaa60, 0xaa76}, {0xaa7a, 0xaa7a}, {0xaa7e, 0xaaaf}, {0xaab1, 0xaab1}, {0xaab5, 0xaab6}, {0xaab9, 0xaabd}, {0xaac0, 0xaac0},
  {0xaac2, 0xaac2}, {0xaadb, 0xaadd}, {0xaae0, 0xaaea}, {0xaaf2, 0xaaf4}, {0xab01, 0xab06}, {0xab09, 0xab0e}, {0xab11, 0xab16}, {0xab20, 0xab26},
  {0xab28, 0xab2e}, {0xab30, 0xab5a}, {0xab5c, 0xab69}, {0xab70, 0xabe2}, {0xac00, 0xac00}, {0xd7a3, 0xd7a3}, {0xd7b0, 0xd7c6}, {0xd7cb, 0xd7fb},
  {0xf900, 0xfa6d}, {0xfa70, 0xfad9}, {0xfb00, 0xfb06}, {0xfb13, 0xfb17}, {0xfb1d, 0xfb1d}, {0xfb1f, 0xfb28}, {0xfb2a, 0xfb36}, {0xfb38, 0xfb3c},
  {0xfb3e, 0xfb3e}, {0xfb40, 0xfb41}, {0xfb43, 0xfb44}, {0xfb46, 0xfbb1}, {0xfbd3, 0xfd3d}, {0xfd50, 0xfd8f}, {0xfd92, 0xfdc7}, {0xfdf0, 0xfdfb},
  {0xfe70, 0xfe74}, {0xfe76, 0xfefc}, {0xff21, 0xff3a}, {0xff41, 0xff5a}, {0xff66, 0xffbe}, {0xffc2, 0xffc7}, {0xffca, 0xffcf}, {0xffd2, 0xffd7},
  {0xffda, 0xffdc}, {0x10000, 0x1000b}, {0x1000d, 0x10026}, {0x10028, 0x1003a}, {0x1003c, 0x1003d}, {0x1003f, 0x1004d}, {0x10050, 0x1005d}, {0x10080, 0x100fa},
  {0x10280, 0x1029c}, {0x102a0, 0x102d0}, {0x10300, 0x1031f}, {0x1032d, 0x10340}, {0x10342, 0x10349}, {0x10350, 0x10375}, {0x10380, 0x1039d}, {0x103a0, 0x103c3},
  {0x103c8, 0x103cf}, {0x10400, 0x1049d}, {0x104b0, 0x104d3}, {0x104d8, 0x104fb}, {0x10500, 0x10527}, {0x10530, 0x10563}, {0x10570, 0x1057a}, {0x1057c, 0x1058a},
  {0x1058c, 0x10592}, {0x10594, 0x10595}, {0x10597, 0x105a1}, {0x105a3, 0x105b1}, {0x105b3, 0x105b9}, {0x105bb, 0x105bc}, {0x10600, 0x10736}, {0x10740, 0x10755},
  {0x10760, 0x10767}, {0x10780, 0x10785}, {0x10787, 0x107b0}, {0x107b2, 0x107ba}, {0x10800, 0x10805}, {0x10808, 0x10808}, {0x1080a, 0x10835}, {0x10837, 0x10838},
  {0x1083c, 0x1083c}, {0x1083f, 0x10855}, {0x10860, 0x10876}, {0x10880, 0x1089e}, {0x108e0, 0x108f2}, {0x108f4, 0x108f5}, {0x10900, 0x10915},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(175);
      ADVANCE_MAP(
        '!', 194,
        '#', 3,
        '(', 188,
        ')', 189,
        ',', 199,
        '.', 198,
        '/', 9,
        '=', 10,
        '?', 193,
        '@', 192,
        ']', 201,
        '_', 206,
        '$', 205,
        '*', 205,
        '-', 205,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      if (set_contains(aux_sym_identifier_token2_character_set_1, 431, lookahead)) ADVANCE(191);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(202);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(194);
      if (lookahead == '(') ADVANCE(188);
      if (lookahead == '?') ADVANCE(193);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (set_contains(aux_sym_identifier_token2_character_set_1, 431, lookahead)) ADVANCE(192);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '(', 197,
        '[', 200,
        'a', 84,
        'f', 196,
        'i', 99,
        'k', 33,
        'n', 34,
        'r', 35,
        't', 195,
      );
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(81);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(126);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(77);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(79);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(80);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(177);
      END_STATE();
    case 10:
      if (lookahead == '>') ADVANCE(190);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(169);
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 20:
      if (lookahead == 'b') ADVANCE(135);
      END_STATE();
    case 21:
      if (lookahead == 'b') ADVANCE(91);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(216);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(226);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(83);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(153);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(159);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(212);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(213);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(160);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(40);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(97);
      if (lookahead == 'y') ADVANCE(107);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead == 'y') ADVANCE(106);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 58:
      if (lookahead == 'f') ADVANCE(17);
      END_STATE();
    case 59:
      if (lookahead == 'g') ADVANCE(62);
      END_STATE();
    case 60:
      if (lookahead == 'h') ADVANCE(123);
      END_STATE();
    case 61:
      if (lookahead == 'h') ADVANCE(120);
      END_STATE();
    case 62:
      if (lookahead == 'h') ADVANCE(150);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == 'u') ADVANCE(105);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 81:
      if (lookahead == 'k') ADVANCE(49);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(4);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(156);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(167);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(155);
      END_STATE();
    case 96:
      if (lookahead == 'm') ADVANCE(128);
      if (lookahead == 'p') ADVANCE(170);
      END_STATE();
    case 97:
      if (lookahead == 'm') ADVANCE(16);
      END_STATE();
    case 98:
      if (lookahead == 'm') ADVANCE(66);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(224);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(218);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 125:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 126:
      if (lookahead == 'o') ADVANCE(130);
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 128:
      if (lookahead == 'p') ADVANCE(73);
      END_STATE();
    case 129:
      if (lookahead == 'p') ADVANCE(53);
      END_STATE();
    case 130:
      if (lookahead == 'p') ADVANCE(55);
      END_STATE();
    case 131:
      if (lookahead == 'p') ADVANCE(146);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(5);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 138:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 139:
      if (lookahead == 's') ADVANCE(210);
      END_STATE();
    case 140:
      if (lookahead == 's') ADVANCE(184);
      END_STATE();
    case 141:
      if (lookahead == 's') ADVANCE(215);
      END_STATE();
    case 142:
      if (lookahead == 's') ADVANCE(180);
      END_STATE();
    case 143:
      if (lookahead == 's') ADVANCE(217);
      END_STATE();
    case 144:
      if (lookahead == 's') ADVANCE(148);
      END_STATE();
    case 145:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 146:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(208);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 156:
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 157:
      if (lookahead == 'u') ADVANCE(149);
      END_STATE();
    case 158:
      if (lookahead == 'u') ADVANCE(95);
      END_STATE();
    case 159:
      if (lookahead == 'u') ADVANCE(151);
      END_STATE();
    case 160:
      if (lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 161:
      if (lookahead == 'w') ADVANCE(15);
      END_STATE();
    case 162:
      if (lookahead == 'w') ADVANCE(19);
      END_STATE();
    case 163:
      if (lookahead == 'x') ADVANCE(147);
      END_STATE();
    case 164:
      if (lookahead == 'x') ADVANCE(48);
      END_STATE();
    case 165:
      if (lookahead == 'y') ADVANCE(209);
      END_STATE();
    case 166:
      if (lookahead == 'y') ADVANCE(186);
      END_STATE();
    case 167:
      if (lookahead == 'y') ADVANCE(220);
      END_STATE();
    case 168:
      if (lookahead == 'y') ADVANCE(139);
      END_STATE();
    case 169:
      if (lookahead == 'y') ADVANCE(6);
      END_STATE();
    case 170:
      if (lookahead == 'y') ADVANCE(137);
      END_STATE();
    case 171:
      if (lookahead == 'y') ADVANCE(141);
      END_STATE();
    case 172:
      if (lookahead == 'y') ADVANCE(143);
      END_STATE();
    case 173:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(173);
      if (set_contains(aux_sym_identifier_token1_character_set_1, 431, lookahead)) ADVANCE(191);
      END_STATE();
    case 174:
      if (eof) ADVANCE(175);
      ADVANCE_MAP(
        'a', 157,
        'c', 119,
        'd', 37,
        'e', 164,
        'f', 65,
        'g', 50,
        'i', 108,
        'l', 63,
        'm', 13,
        'n', 122,
        'o', 129,
        's', 38,
        'v', 39,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_comment_block_dylan);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '/') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(178);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_synopsis);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_author);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_copyright);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_files);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_executable);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_library);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_POUNDt);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_POUNDf);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_POUND_LPAREN);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACK);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == ' ') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_string_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_character_literal);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_symbol);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_POUNDnext);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_POUNDrest);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_POUNDkey);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_POUNDall_DASHkeys);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_POUNDinclude);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_method);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_sealed);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_sideways);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_dynamic);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_compiler_DASHsideways);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_compiler_DASHopen);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_default_DASHinline);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_inline_DASHonly);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_inline);
      if (lookahead == '-') ADVANCE(127);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_may_DASHinline);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_not_DASHinline);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_domain);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_generic);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 174},
  [2] = {.lex_state = 174},
  [3] = {.lex_state = 174},
  [4] = {.lex_state = 174},
  [5] = {.lex_state = 174},
  [6] = {.lex_state = 174},
  [7] = {.lex_state = 174},
  [8] = {.lex_state = 174},
  [9] = {.lex_state = 174},
  [10] = {.lex_state = 174},
  [11] = {.lex_state = 174},
  [12] = {.lex_state = 174},
  [13] = {.lex_state = 174},
  [14] = {.lex_state = 174},
  [15] = {.lex_state = 174},
  [16] = {.lex_state = 174},
  [17] = {.lex_state = 174},
  [18] = {.lex_state = 174},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 174},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 174},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 174},
  [25] = {.lex_state = 174},
  [26] = {.lex_state = 174},
  [27] = {.lex_state = 174},
  [28] = {.lex_state = 174},
  [29] = {.lex_state = 174},
  [30] = {.lex_state = 174},
  [31] = {.lex_state = 174},
  [32] = {.lex_state = 174},
  [33] = {.lex_state = 174},
  [34] = {.lex_state = 174},
  [35] = {.lex_state = 174},
  [36] = {.lex_state = 174},
  [37] = {.lex_state = 174},
  [38] = {.lex_state = 174},
  [39] = {.lex_state = 173},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 174},
  [42] = {.lex_state = 173},
  [43] = {.lex_state = 174},
  [44] = {.lex_state = 174},
  [45] = {.lex_state = 173},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 173},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment_block_dylan] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [aux_sym_identifier_token1] = ACTIONS(1),
    [aux_sym_identifier_token2] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_POUNDt] = ACTIONS(1),
    [anon_sym_POUNDf] = ACTIONS(1),
    [anon_sym_POUND_LPAREN] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_POUND_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_character_literal] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
    [anon_sym_POUNDnext] = ACTIONS(1),
    [anon_sym_POUNDrest] = ACTIONS(1),
    [anon_sym_POUNDkey] = ACTIONS(1),
    [anon_sym_POUNDall_DASHkeys] = ACTIONS(1),
    [anon_sym_POUNDinclude] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(50),
    [sym_meta_preprocessor_dylan] = STATE(51),
    [sym_module] = STATE(3),
    [sym_function_definition] = STATE(27),
    [aux_sym_source_file_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_define] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(13), 1,
      anon_sym_inline,
    ACTIONS(15), 1,
      anon_sym_domain,
    STATE(17), 1,
      sym_modifier,
    STATE(39), 1,
      sym_function_word,
    ACTIONS(9), 3,
      anon_sym_method,
      anon_sym_function,
      anon_sym_generic,
    ACTIONS(11), 10,
      anon_sym_sealed,
      anon_sym_open,
      anon_sym_sideways,
      anon_sym_dynamic,
      anon_sym_compiler_DASHsideways,
      anon_sym_compiler_DASHopen,
      anon_sym_default_DASHinline,
      anon_sym_inline_DASHonly,
      anon_sym_may_DASHinline,
      anon_sym_not_DASHinline,
  [30] = 15,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      anon_sym_synopsis,
    ACTIONS(21), 1,
      anon_sym_author,
    ACTIONS(23), 1,
      anon_sym_copyright,
    ACTIONS(25), 1,
      anon_sym_version,
    ACTIONS(27), 1,
      anon_sym_files,
    ACTIONS(29), 1,
      anon_sym_executable,
    ACTIONS(31), 1,
      anon_sym_library,
    STATE(4), 1,
      sym_synopsis,
    STATE(5), 1,
      sym_author,
    STATE(7), 1,
      sym_copyright,
    STATE(11), 1,
      sym_version,
    STATE(18), 1,
      sym_files,
    STATE(38), 1,
      sym_executable,
    STATE(65), 1,
      sym_library,
  [76] = 13,
    ACTIONS(21), 1,
      anon_sym_author,
    ACTIONS(23), 1,
      anon_sym_copyright,
    ACTIONS(25), 1,
      anon_sym_version,
    ACTIONS(27), 1,
      anon_sym_files,
    ACTIONS(29), 1,
      anon_sym_executable,
    ACTIONS(31), 1,
      anon_sym_library,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      sym_author,
    STATE(8), 1,
      sym_copyright,
    STATE(13), 1,
      sym_version,
    STATE(24), 1,
      sym_files,
    STATE(32), 1,
      sym_executable,
    STATE(75), 1,
      sym_library,
  [116] = 11,
    ACTIONS(23), 1,
      anon_sym_copyright,
    ACTIONS(25), 1,
      anon_sym_version,
    ACTIONS(27), 1,
      anon_sym_files,
    ACTIONS(29), 1,
      anon_sym_executable,
    ACTIONS(31), 1,
      anon_sym_library,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_copyright,
    STATE(13), 1,
      sym_version,
    STATE(24), 1,
      sym_files,
    STATE(32), 1,
      sym_executable,
    STATE(75), 1,
      sym_library,
  [150] = 11,
    ACTIONS(23), 1,
      anon_sym_copyright,
    ACTIONS(25), 1,
      anon_sym_version,
    ACTIONS(27), 1,
      anon_sym_files,
    ACTIONS(29), 1,
      anon_sym_executable,
    ACTIONS(31), 1,
      anon_sym_library,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      sym_copyright,
    STATE(14), 1,
      sym_version,
    STATE(22), 1,
      sym_files,
    STATE(36), 1,
      sym_executable,
    STATE(54), 1,
      sym_library,
  [184] = 9,
    ACTIONS(25), 1,
      anon_sym_version,
    ACTIONS(27), 1,
      anon_sym_files,
    ACTIONS(29), 1,
      anon_sym_executable,
    ACTIONS(31), 1,
      anon_sym_library,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      sym_version,
    STATE(24), 1,
      sym_files,
    STATE(32), 1,
      sym_executable,
    STATE(75), 1,
      sym_library,
  [212] = 9,
    ACTIONS(25), 1,
      anon_sym_version,
    ACTIONS(27), 1,
      anon_sym_files,
    ACTIONS(29), 1,
      anon_sym_executable,
    ACTIONS(31), 1,
      anon_sym_library,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    STATE(14), 1,
      sym_version,
    STATE(22), 1,
      sym_files,
    STATE(36), 1,
      sym_executable,
    STATE(54), 1,
      sym_library,
  [240] = 9,
    ACTIONS(25), 1,
      anon_sym_version,
    ACTIONS(27), 1,
      anon_sym_files,
    ACTIONS(29), 1,
      anon_sym_executable,
    ACTIONS(31), 1,
      anon_sym_library,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(15), 1,
      sym_version,
    STATE(25), 1,
      sym_files,
    STATE(37), 1,
      sym_executable,
    STATE(62), 1,
      sym_library,
  [268] = 1,
    ACTIONS(39), 8,
      ts_builtin_sym_end,
      anon_sym_synopsis,
      anon_sym_author,
      anon_sym_copyright,
      anon_sym_version,
      anon_sym_files,
      anon_sym_executable,
      anon_sym_library,
  [279] = 7,
    ACTIONS(27), 1,
      anon_sym_files,
    ACTIONS(29), 1,
      anon_sym_executable,
    ACTIONS(31), 1,
      anon_sym_library,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(24), 1,
      sym_files,
    STATE(32), 1,
      sym_executable,
    STATE(75), 1,
      sym_library,
  [301] = 1,
    ACTIONS(41), 7,
      ts_builtin_sym_end,
      anon_sym_author,
      anon_sym_copyright,
      anon_sym_version,
      anon_sym_files,
      anon_sym_executable,
      anon_sym_library,
  [311] = 7,
    ACTIONS(27), 1,
      anon_sym_files,
    ACTIONS(29), 1,
      anon_sym_executable,
    ACTIONS(31), 1,
      anon_sym_library,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      sym_files,
    STATE(36), 1,
      sym_executable,
    STATE(54), 1,
      sym_library,
  [333] = 7,
    ACTIONS(27), 1,
      anon_sym_files,
    ACTIONS(29), 1,
      anon_sym_executable,
    ACTIONS(31), 1,
      anon_sym_library,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(25), 1,
      sym_files,
    STATE(37), 1,
      sym_executable,
    STATE(62), 1,
      sym_library,
  [355] = 7,
    ACTIONS(27), 1,
      anon_sym_files,
    ACTIONS(29), 1,
      anon_sym_executable,
    ACTIONS(31), 1,
      anon_sym_library,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    STATE(26), 1,
      sym_files,
    STATE(33), 1,
      sym_executable,
    STATE(67), 1,
      sym_library,
  [377] = 1,
    ACTIONS(45), 6,
      ts_builtin_sym_end,
      anon_sym_copyright,
      anon_sym_version,
      anon_sym_files,
      anon_sym_executable,
      anon_sym_library,
  [386] = 3,
    ACTIONS(15), 1,
      anon_sym_domain,
    STATE(42), 1,
      sym_function_word,
    ACTIONS(9), 3,
      anon_sym_method,
      anon_sym_function,
      anon_sym_generic,
  [398] = 5,
    ACTIONS(29), 1,
      anon_sym_executable,
    ACTIONS(31), 1,
      anon_sym_library,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(32), 1,
      sym_executable,
    STATE(75), 1,
      sym_library,
  [414] = 4,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      aux_sym_identifier_token2,
    STATE(21), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(51), 2,
      anon_sym_QMARK,
      anon_sym_BANG,
  [428] = 1,
    ACTIONS(53), 5,
      ts_builtin_sym_end,
      anon_sym_version,
      anon_sym_files,
      anon_sym_executable,
      anon_sym_library,
  [436] = 4,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      aux_sym_identifier_token2,
    STATE(23), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(59), 2,
      anon_sym_QMARK,
      anon_sym_BANG,
  [450] = 5,
    ACTIONS(29), 1,
      anon_sym_executable,
    ACTIONS(31), 1,
      anon_sym_library,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(37), 1,
      sym_executable,
    STATE(62), 1,
      sym_library,
  [466] = 3,
    ACTIONS(63), 1,
      aux_sym_identifier_token2,
    STATE(23), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(61), 3,
      anon_sym_LPAREN,
      anon_sym_QMARK,
      anon_sym_BANG,
  [478] = 5,
    ACTIONS(29), 1,
      anon_sym_executable,
    ACTIONS(31), 1,
      anon_sym_library,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    STATE(36), 1,
      sym_executable,
    STATE(54), 1,
      sym_library,
  [494] = 5,
    ACTIONS(29), 1,
      anon_sym_executable,
    ACTIONS(31), 1,
      anon_sym_library,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    STATE(33), 1,
      sym_executable,
    STATE(67), 1,
      sym_library,
  [510] = 5,
    ACTIONS(29), 1,
      anon_sym_executable,
    ACTIONS(31), 1,
      anon_sym_library,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    STATE(31), 1,
      sym_executable,
    STATE(71), 1,
      sym_library,
  [526] = 3,
    ACTIONS(7), 1,
      anon_sym_define,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    STATE(28), 2,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [537] = 3,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    ACTIONS(72), 1,
      anon_sym_define,
    STATE(28), 2,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [548] = 1,
    ACTIONS(75), 4,
      ts_builtin_sym_end,
      anon_sym_files,
      anon_sym_executable,
      anon_sym_library,
  [555] = 1,
    ACTIONS(77), 4,
      anon_sym_method,
      anon_sym_domain,
      anon_sym_function,
      anon_sym_generic,
  [562] = 3,
    ACTIONS(31), 1,
      anon_sym_library,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    STATE(74), 1,
      sym_library,
  [572] = 3,
    ACTIONS(31), 1,
      anon_sym_library,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      sym_library,
  [582] = 3,
    ACTIONS(31), 1,
      anon_sym_library,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    STATE(71), 1,
      sym_library,
  [592] = 1,
    ACTIONS(81), 3,
      ts_builtin_sym_end,
      anon_sym_executable,
      anon_sym_library,
  [598] = 1,
    ACTIONS(83), 3,
      anon_sym_method,
      anon_sym_function,
      anon_sym_generic,
  [604] = 3,
    ACTIONS(31), 1,
      anon_sym_library,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(62), 1,
      sym_library,
  [614] = 3,
    ACTIONS(31), 1,
      anon_sym_library,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    STATE(67), 1,
      sym_library,
  [624] = 3,
    ACTIONS(31), 1,
      anon_sym_library,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(75), 1,
      sym_library,
  [634] = 2,
    ACTIONS(85), 1,
      aux_sym_identifier_token1,
    STATE(70), 1,
      sym_identifier,
  [641] = 2,
    ACTIONS(87), 1,
      sym_string_literal,
    ACTIONS(89), 1,
      sym_number,
  [648] = 1,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      anon_sym_library,
  [653] = 2,
    ACTIONS(85), 1,
      aux_sym_identifier_token1,
    STATE(46), 1,
      sym_identifier,
  [660] = 1,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      anon_sym_define,
  [665] = 1,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      anon_sym_define,
  [670] = 1,
    ACTIONS(97), 1,
      aux_sym_identifier_token1,
  [674] = 1,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
  [678] = 1,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
  [682] = 1,
    ACTIONS(101), 1,
      sym_string_literal,
  [686] = 1,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
  [690] = 1,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
  [694] = 1,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
  [698] = 1,
    ACTIONS(107), 1,
      aux_sym_identifier_token1,
  [702] = 1,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
  [706] = 1,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
  [710] = 1,
    ACTIONS(111), 1,
      anon_sym_RPAREN,
  [714] = 1,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
  [718] = 1,
    ACTIONS(115), 1,
      sym_string_literal,
  [722] = 1,
    ACTIONS(117), 1,
      anon_sym_EQ_GT,
  [726] = 1,
    ACTIONS(119), 1,
      sym_string_literal,
  [730] = 1,
    ACTIONS(121), 1,
      sym_string_literal,
  [734] = 1,
    ACTIONS(123), 1,
      sym_string_literal,
  [738] = 1,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
  [742] = 1,
    ACTIONS(125), 1,
      anon_sym_EQ_GT,
  [746] = 1,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
  [750] = 1,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
  [754] = 1,
    ACTIONS(129), 1,
      sym_string_literal,
  [758] = 1,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
  [762] = 1,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
  [766] = 1,
    ACTIONS(133), 1,
      anon_sym_RPAREN,
  [770] = 1,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
  [774] = 1,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
  [778] = 1,
    ACTIONS(137), 1,
      anon_sym_RPAREN,
  [782] = 1,
    ACTIONS(139), 1,
      sym_string_literal,
  [786] = 1,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
  [790] = 1,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 76,
  [SMALL_STATE(5)] = 116,
  [SMALL_STATE(6)] = 150,
  [SMALL_STATE(7)] = 184,
  [SMALL_STATE(8)] = 212,
  [SMALL_STATE(9)] = 240,
  [SMALL_STATE(10)] = 268,
  [SMALL_STATE(11)] = 279,
  [SMALL_STATE(12)] = 301,
  [SMALL_STATE(13)] = 311,
  [SMALL_STATE(14)] = 333,
  [SMALL_STATE(15)] = 355,
  [SMALL_STATE(16)] = 377,
  [SMALL_STATE(17)] = 386,
  [SMALL_STATE(18)] = 398,
  [SMALL_STATE(19)] = 414,
  [SMALL_STATE(20)] = 428,
  [SMALL_STATE(21)] = 436,
  [SMALL_STATE(22)] = 450,
  [SMALL_STATE(23)] = 466,
  [SMALL_STATE(24)] = 478,
  [SMALL_STATE(25)] = 494,
  [SMALL_STATE(26)] = 510,
  [SMALL_STATE(27)] = 526,
  [SMALL_STATE(28)] = 537,
  [SMALL_STATE(29)] = 548,
  [SMALL_STATE(30)] = 555,
  [SMALL_STATE(31)] = 562,
  [SMALL_STATE(32)] = 572,
  [SMALL_STATE(33)] = 582,
  [SMALL_STATE(34)] = 592,
  [SMALL_STATE(35)] = 598,
  [SMALL_STATE(36)] = 604,
  [SMALL_STATE(37)] = 614,
  [SMALL_STATE(38)] = 624,
  [SMALL_STATE(39)] = 634,
  [SMALL_STATE(40)] = 641,
  [SMALL_STATE(41)] = 648,
  [SMALL_STATE(42)] = 653,
  [SMALL_STATE(43)] = 660,
  [SMALL_STATE(44)] = 665,
  [SMALL_STATE(45)] = 670,
  [SMALL_STATE(46)] = 674,
  [SMALL_STATE(47)] = 678,
  [SMALL_STATE(48)] = 682,
  [SMALL_STATE(49)] = 686,
  [SMALL_STATE(50)] = 690,
  [SMALL_STATE(51)] = 694,
  [SMALL_STATE(52)] = 698,
  [SMALL_STATE(53)] = 702,
  [SMALL_STATE(54)] = 706,
  [SMALL_STATE(55)] = 710,
  [SMALL_STATE(56)] = 714,
  [SMALL_STATE(57)] = 718,
  [SMALL_STATE(58)] = 722,
  [SMALL_STATE(59)] = 726,
  [SMALL_STATE(60)] = 730,
  [SMALL_STATE(61)] = 734,
  [SMALL_STATE(62)] = 738,
  [SMALL_STATE(63)] = 742,
  [SMALL_STATE(64)] = 746,
  [SMALL_STATE(65)] = 750,
  [SMALL_STATE(66)] = 754,
  [SMALL_STATE(67)] = 758,
  [SMALL_STATE(68)] = 762,
  [SMALL_STATE(69)] = 766,
  [SMALL_STATE(70)] = 770,
  [SMALL_STATE(71)] = 774,
  [SMALL_STATE(72)] = 778,
  [SMALL_STATE(73)] = 782,
  [SMALL_STATE(74)] = 786,
  [SMALL_STATE(75)] = 790,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_preprocessor_dylan, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_preprocessor_dylan, 2, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_preprocessor_dylan, 3, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_preprocessor_dylan, 4, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_synopsis, 2, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_preprocessor_dylan, 5, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author, 2, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copyright, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 2, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2, 0, 0),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_preprocessor_dylan, 6, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_preprocessor_dylan, 7, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_files, 2, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_executable, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_word, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [105] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_word, 2, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_library, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_preprocessor_dylan, 8, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_dylan(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
