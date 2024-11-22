#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 49
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
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
  anon_sym_POUNDt = 11,
  anon_sym_POUNDf = 12,
  anon_sym_POUND_LPAREN = 13,
  anon_sym_DOT = 14,
  anon_sym_RPAREN = 15,
  anon_sym_COMMA = 16,
  anon_sym_POUND_LBRACK = 17,
  anon_sym_RBRACK = 18,
  sym_string_literal = 19,
  sym_number = 20,
  sym_character_literal = 21,
  sym_symbol = 22,
  sym_function_word = 23,
  anon_sym_POUNDnext = 24,
  anon_sym_POUNDrest = 25,
  anon_sym_POUNDkey = 26,
  anon_sym_POUNDall_DASHkeys = 27,
  anon_sym_POUNDinclude = 28,
  sym_source_file = 29,
  sym_meta_preprocessor_dylan = 30,
  sym_module = 31,
  sym_synopsis = 32,
  sym_author = 33,
  sym_copyright = 34,
  sym_version = 35,
  sym_files = 36,
  sym_executable = 37,
  sym_library = 38,
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
  [anon_sym_POUNDt] = "#t",
  [anon_sym_POUNDf] = "#f",
  [anon_sym_POUND_LPAREN] = "#(",
  [anon_sym_DOT] = ".",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_POUND_LBRACK] = "#[",
  [anon_sym_RBRACK] = "]",
  [sym_string_literal] = "string_literal",
  [sym_number] = "number",
  [sym_character_literal] = "character_literal",
  [sym_symbol] = "symbol",
  [sym_function_word] = "function_word",
  [anon_sym_POUNDnext] = "#next",
  [anon_sym_POUNDrest] = "#rest",
  [anon_sym_POUNDkey] = "#key",
  [anon_sym_POUNDall_DASHkeys] = "#all-keys",
  [anon_sym_POUNDinclude] = "#include",
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
  [anon_sym_POUNDt] = anon_sym_POUNDt,
  [anon_sym_POUNDf] = anon_sym_POUNDf,
  [anon_sym_POUND_LPAREN] = anon_sym_POUND_LPAREN,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_POUND_LBRACK] = anon_sym_POUND_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_string_literal] = sym_string_literal,
  [sym_number] = sym_number,
  [sym_character_literal] = sym_character_literal,
  [sym_symbol] = sym_symbol,
  [sym_function_word] = sym_function_word,
  [anon_sym_POUNDnext] = anon_sym_POUNDnext,
  [anon_sym_POUNDrest] = anon_sym_POUNDrest,
  [anon_sym_POUNDkey] = anon_sym_POUNDkey,
  [anon_sym_POUNDall_DASHkeys] = anon_sym_POUNDall_DASHkeys,
  [anon_sym_POUNDinclude] = anon_sym_POUNDinclude,
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
  [anon_sym_RPAREN] = {
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
  [sym_function_word] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(81);
      ADVANCE_MAP(
        '#', 2,
        '(', 40,
        ')', 97,
        ',', 98,
        '.', 96,
        '/', 5,
        ']', 100,
        '_', 106,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(101);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (lookahead == ',' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '(', 95,
        '[', 99,
        'a', 36,
        'f', 94,
        'i', 41,
        'k', 14,
        'n', 15,
        'r', 16,
        't', 93,
      );
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(107);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(33);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(83);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 8:
      if (lookahead == 'b') ADVANCE(53);
      END_STATE();
    case 9:
      if (lookahead == 'b') ADVANCE(39);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(72);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(3);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 25:
      if (lookahead == 'g') ADVANCE(27);
      END_STATE();
    case 26:
      if (lookahead == 'h') ADVANCE(50);
      END_STATE();
    case 27:
      if (lookahead == 'h') ADVANCE(67);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(8);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 33:
      if (lookahead == 'k') ADVANCE(23);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(4);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 51:
      if (lookahead == 'p') ADVANCE(78);
      END_STATE();
    case 52:
      if (lookahead == 'p') ADVANCE(63);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(111);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 69:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 70:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 71:
      if (lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 72:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 73:
      if (lookahead == 'x') ADVANCE(64);
      END_STATE();
    case 74:
      if (lookahead == 'x') ADVANCE(22);
      END_STATE();
    case 75:
      if (lookahead == 'y') ADVANCE(110);
      END_STATE();
    case 76:
      if (lookahead == 'y') ADVANCE(92);
      END_STATE();
    case 77:
      if (lookahead == 'y') ADVANCE(58);
      END_STATE();
    case 78:
      if (lookahead == 'y') ADVANCE(56);
      END_STATE();
    case 79:
      if (lookahead == 'y') ADVANCE(44);
      END_STATE();
    case 80:
      if (eof) ADVANCE(81);
      ADVANCE_MAP(
        'a', 70,
        'c', 45,
        'e', 74,
        'f', 30,
        'l', 28,
        'm', 46,
        's', 79,
        'v', 19,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_comment_block_dylan);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_synopsis);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_author);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_copyright);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_files);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_executable);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_library);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_POUNDt);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_POUNDf);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_POUND_LPAREN);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACK);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == ' ') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (lookahead == ',' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_string_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_character_literal);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_symbol);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_function_word);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_POUNDnext);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_POUNDrest);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_POUNDkey);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_POUNDall_DASHkeys);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_POUNDinclude);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 80},
  [2] = {.lex_state = 80},
  [3] = {.lex_state = 80},
  [4] = {.lex_state = 80},
  [5] = {.lex_state = 80},
  [6] = {.lex_state = 80},
  [7] = {.lex_state = 80},
  [8] = {.lex_state = 80},
  [9] = {.lex_state = 80},
  [10] = {.lex_state = 80},
  [11] = {.lex_state = 80},
  [12] = {.lex_state = 80},
  [13] = {.lex_state = 80},
  [14] = {.lex_state = 80},
  [15] = {.lex_state = 80},
  [16] = {.lex_state = 80},
  [17] = {.lex_state = 80},
  [18] = {.lex_state = 80},
  [19] = {.lex_state = 80},
  [20] = {.lex_state = 80},
  [21] = {.lex_state = 80},
  [22] = {.lex_state = 80},
  [23] = {.lex_state = 80},
  [24] = {.lex_state = 80},
  [25] = {.lex_state = 80},
  [26] = {.lex_state = 80},
  [27] = {.lex_state = 80},
  [28] = {.lex_state = 80},
  [29] = {.lex_state = 80},
  [30] = {.lex_state = 80},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment_block_dylan] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_POUNDt] = ACTIONS(1),
    [anon_sym_POUNDf] = ACTIONS(1),
    [anon_sym_POUND_LPAREN] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_POUND_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_character_literal] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
    [sym_function_word] = ACTIONS(1),
    [anon_sym_POUNDnext] = ACTIONS(1),
    [anon_sym_POUNDrest] = ACTIONS(1),
    [anon_sym_POUNDkey] = ACTIONS(1),
    [anon_sym_POUNDall_DASHkeys] = ACTIONS(1),
    [anon_sym_POUNDinclude] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(37),
    [sym_meta_preprocessor_dylan] = STATE(35),
    [sym_module] = STATE(2),
    [anon_sym_module] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(5), 1,
      ts_builtin_sym_end,
    ACTIONS(7), 1,
      anon_sym_synopsis,
    ACTIONS(9), 1,
      anon_sym_author,
    ACTIONS(11), 1,
      anon_sym_copyright,
    ACTIONS(13), 1,
      anon_sym_version,
    ACTIONS(15), 1,
      anon_sym_files,
    ACTIONS(17), 1,
      anon_sym_executable,
    ACTIONS(19), 1,
      anon_sym_library,
    STATE(3), 1,
      sym_synopsis,
    STATE(4), 1,
      sym_author,
    STATE(6), 1,
      sym_copyright,
    STATE(10), 1,
      sym_version,
    STATE(16), 1,
      sym_files,
    STATE(25), 1,
      sym_executable,
    STATE(42), 1,
      sym_library,
  [46] = 13,
    ACTIONS(9), 1,
      anon_sym_author,
    ACTIONS(11), 1,
      anon_sym_copyright,
    ACTIONS(13), 1,
      anon_sym_version,
    ACTIONS(15), 1,
      anon_sym_files,
    ACTIONS(17), 1,
      anon_sym_executable,
    ACTIONS(19), 1,
      anon_sym_library,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_author,
    STATE(7), 1,
      sym_copyright,
    STATE(12), 1,
      sym_version,
    STATE(19), 1,
      sym_files,
    STATE(24), 1,
      sym_executable,
    STATE(39), 1,
      sym_library,
  [86] = 11,
    ACTIONS(11), 1,
      anon_sym_copyright,
    ACTIONS(13), 1,
      anon_sym_version,
    ACTIONS(15), 1,
      anon_sym_files,
    ACTIONS(17), 1,
      anon_sym_executable,
    ACTIONS(19), 1,
      anon_sym_library,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_copyright,
    STATE(12), 1,
      sym_version,
    STATE(19), 1,
      sym_files,
    STATE(24), 1,
      sym_executable,
    STATE(39), 1,
      sym_library,
  [120] = 11,
    ACTIONS(11), 1,
      anon_sym_copyright,
    ACTIONS(13), 1,
      anon_sym_version,
    ACTIONS(15), 1,
      anon_sym_files,
    ACTIONS(17), 1,
      anon_sym_executable,
    ACTIONS(19), 1,
      anon_sym_library,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_copyright,
    STATE(14), 1,
      sym_version,
    STATE(18), 1,
      sym_files,
    STATE(26), 1,
      sym_executable,
    STATE(43), 1,
      sym_library,
  [154] = 9,
    ACTIONS(13), 1,
      anon_sym_version,
    ACTIONS(15), 1,
      anon_sym_files,
    ACTIONS(17), 1,
      anon_sym_executable,
    ACTIONS(19), 1,
      anon_sym_library,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      sym_version,
    STATE(19), 1,
      sym_files,
    STATE(24), 1,
      sym_executable,
    STATE(39), 1,
      sym_library,
  [182] = 9,
    ACTIONS(13), 1,
      anon_sym_version,
    ACTIONS(15), 1,
      anon_sym_files,
    ACTIONS(17), 1,
      anon_sym_executable,
    ACTIONS(19), 1,
      anon_sym_library,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(14), 1,
      sym_version,
    STATE(18), 1,
      sym_files,
    STATE(26), 1,
      sym_executable,
    STATE(43), 1,
      sym_library,
  [210] = 9,
    ACTIONS(13), 1,
      anon_sym_version,
    ACTIONS(15), 1,
      anon_sym_files,
    ACTIONS(17), 1,
      anon_sym_executable,
    ACTIONS(19), 1,
      anon_sym_library,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      sym_version,
    STATE(20), 1,
      sym_files,
    STATE(27), 1,
      sym_executable,
    STATE(46), 1,
      sym_library,
  [238] = 1,
    ACTIONS(27), 8,
      ts_builtin_sym_end,
      anon_sym_synopsis,
      anon_sym_author,
      anon_sym_copyright,
      anon_sym_version,
      anon_sym_files,
      anon_sym_executable,
      anon_sym_library,
  [249] = 7,
    ACTIONS(15), 1,
      anon_sym_files,
    ACTIONS(17), 1,
      anon_sym_executable,
    ACTIONS(19), 1,
      anon_sym_library,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      sym_files,
    STATE(24), 1,
      sym_executable,
    STATE(39), 1,
      sym_library,
  [271] = 1,
    ACTIONS(29), 7,
      ts_builtin_sym_end,
      anon_sym_author,
      anon_sym_copyright,
      anon_sym_version,
      anon_sym_files,
      anon_sym_executable,
      anon_sym_library,
  [281] = 7,
    ACTIONS(15), 1,
      anon_sym_files,
    ACTIONS(17), 1,
      anon_sym_executable,
    ACTIONS(19), 1,
      anon_sym_library,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      sym_files,
    STATE(26), 1,
      sym_executable,
    STATE(43), 1,
      sym_library,
  [303] = 7,
    ACTIONS(15), 1,
      anon_sym_files,
    ACTIONS(17), 1,
      anon_sym_executable,
    ACTIONS(19), 1,
      anon_sym_library,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(21), 1,
      sym_files,
    STATE(28), 1,
      sym_executable,
    STATE(45), 1,
      sym_library,
  [325] = 7,
    ACTIONS(15), 1,
      anon_sym_files,
    ACTIONS(17), 1,
      anon_sym_executable,
    ACTIONS(19), 1,
      anon_sym_library,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      sym_files,
    STATE(27), 1,
      sym_executable,
    STATE(46), 1,
      sym_library,
  [347] = 1,
    ACTIONS(33), 6,
      ts_builtin_sym_end,
      anon_sym_copyright,
      anon_sym_version,
      anon_sym_files,
      anon_sym_executable,
      anon_sym_library,
  [356] = 5,
    ACTIONS(17), 1,
      anon_sym_executable,
    ACTIONS(19), 1,
      anon_sym_library,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    STATE(24), 1,
      sym_executable,
    STATE(39), 1,
      sym_library,
  [372] = 1,
    ACTIONS(35), 5,
      ts_builtin_sym_end,
      anon_sym_version,
      anon_sym_files,
      anon_sym_executable,
      anon_sym_library,
  [380] = 5,
    ACTIONS(17), 1,
      anon_sym_executable,
    ACTIONS(19), 1,
      anon_sym_library,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(27), 1,
      sym_executable,
    STATE(46), 1,
      sym_library,
  [396] = 5,
    ACTIONS(17), 1,
      anon_sym_executable,
    ACTIONS(19), 1,
      anon_sym_library,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(26), 1,
      sym_executable,
    STATE(43), 1,
      sym_library,
  [412] = 5,
    ACTIONS(17), 1,
      anon_sym_executable,
    ACTIONS(19), 1,
      anon_sym_library,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(28), 1,
      sym_executable,
    STATE(45), 1,
      sym_library,
  [428] = 5,
    ACTIONS(17), 1,
      anon_sym_executable,
    ACTIONS(19), 1,
      anon_sym_library,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      sym_executable,
    STATE(47), 1,
      sym_library,
  [444] = 1,
    ACTIONS(39), 4,
      ts_builtin_sym_end,
      anon_sym_files,
      anon_sym_executable,
      anon_sym_library,
  [451] = 1,
    ACTIONS(41), 3,
      ts_builtin_sym_end,
      anon_sym_executable,
      anon_sym_library,
  [457] = 3,
    ACTIONS(19), 1,
      anon_sym_library,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(43), 1,
      sym_library,
  [467] = 3,
    ACTIONS(19), 1,
      anon_sym_library,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    STATE(39), 1,
      sym_library,
  [477] = 3,
    ACTIONS(19), 1,
      anon_sym_library,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(46), 1,
      sym_library,
  [487] = 3,
    ACTIONS(19), 1,
      anon_sym_library,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(45), 1,
      sym_library,
  [497] = 3,
    ACTIONS(19), 1,
      anon_sym_library,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(47), 1,
      sym_library,
  [507] = 3,
    ACTIONS(19), 1,
      anon_sym_library,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    STATE(48), 1,
      sym_library,
  [517] = 1,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      anon_sym_library,
  [522] = 2,
    ACTIONS(47), 1,
      sym_string_literal,
    ACTIONS(49), 1,
      sym_number,
  [529] = 1,
    ACTIONS(51), 1,
      sym_string_literal,
  [533] = 1,
    ACTIONS(53), 1,
      sym_string_literal,
  [537] = 1,
    ACTIONS(55), 1,
      sym_string_literal,
  [541] = 1,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
  [545] = 1,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
  [549] = 1,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
  [553] = 1,
    ACTIONS(63), 1,
      sym_string_literal,
  [557] = 1,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
  [561] = 1,
    ACTIONS(65), 1,
      sym_string_literal,
  [565] = 1,
    ACTIONS(67), 1,
      sym_string_literal,
  [569] = 1,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
  [573] = 1,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
  [577] = 1,
    ACTIONS(69), 1,
      sym_string_literal,
  [581] = 1,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
  [585] = 1,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
  [589] = 1,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
  [593] = 1,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 86,
  [SMALL_STATE(5)] = 120,
  [SMALL_STATE(6)] = 154,
  [SMALL_STATE(7)] = 182,
  [SMALL_STATE(8)] = 210,
  [SMALL_STATE(9)] = 238,
  [SMALL_STATE(10)] = 249,
  [SMALL_STATE(11)] = 271,
  [SMALL_STATE(12)] = 281,
  [SMALL_STATE(13)] = 303,
  [SMALL_STATE(14)] = 325,
  [SMALL_STATE(15)] = 347,
  [SMALL_STATE(16)] = 356,
  [SMALL_STATE(17)] = 372,
  [SMALL_STATE(18)] = 380,
  [SMALL_STATE(19)] = 396,
  [SMALL_STATE(20)] = 412,
  [SMALL_STATE(21)] = 428,
  [SMALL_STATE(22)] = 444,
  [SMALL_STATE(23)] = 451,
  [SMALL_STATE(24)] = 457,
  [SMALL_STATE(25)] = 467,
  [SMALL_STATE(26)] = 477,
  [SMALL_STATE(27)] = 487,
  [SMALL_STATE(28)] = 497,
  [SMALL_STATE(29)] = 507,
  [SMALL_STATE(30)] = 517,
  [SMALL_STATE(31)] = 522,
  [SMALL_STATE(32)] = 529,
  [SMALL_STATE(33)] = 533,
  [SMALL_STATE(34)] = 537,
  [SMALL_STATE(35)] = 541,
  [SMALL_STATE(36)] = 545,
  [SMALL_STATE(37)] = 549,
  [SMALL_STATE(38)] = 553,
  [SMALL_STATE(39)] = 557,
  [SMALL_STATE(40)] = 561,
  [SMALL_STATE(41)] = 565,
  [SMALL_STATE(42)] = 569,
  [SMALL_STATE(43)] = 573,
  [SMALL_STATE(44)] = 577,
  [SMALL_STATE(45)] = 581,
  [SMALL_STATE(46)] = 585,
  [SMALL_STATE(47)] = 589,
  [SMALL_STATE(48)] = 593,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_preprocessor_dylan, 1, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_preprocessor_dylan, 2, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_preprocessor_dylan, 3, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_preprocessor_dylan, 4, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_synopsis, 2, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_preprocessor_dylan, 5, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author, 2, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copyright, 2, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_preprocessor_dylan, 6, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 2, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_files, 2, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_preprocessor_dylan, 7, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_executable, 2, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_library, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_preprocessor_dylan, 8, 0, 0),
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
