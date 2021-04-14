#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 4
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 1
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_DEBUG = 1,
  anon_sym_EQ = 2,
  anon_sym_COMMA = 3,
  anon_sym_SEMI = 4,
  anon_sym_LT = 5,
  anon_sym_GT = 6,
  anon_sym_STAR = 7,
  anon_sym_SLASH = 8,
  anon_sym_PERCENT = 9,
  anon_sym_PLUS = 10,
  anon_sym_DASH = 11,
  anon_sym_LT_LT = 12,
  anon_sym_AMP = 13,
  anon_sym_PIPE = 14,
  anon_sym_LT_EQ = 15,
  anon_sym_GT_EQ = 16,
  anon_sym_EQ_EQ = 17,
  anon_sym_BANG_EQ = 18,
  anon_sym_DOT = 19,
  anon_sym_SQUOTE = 20,
  anon_sym_LPAREN = 21,
  anon_sym_RPAREN = 22,
  sym_comment = 23,
  anon_sym_AT = 24,
  anon_sym_AT_AT = 25,
  anon_sym_LBRACK = 26,
  anon_sym_RBRACK = 27,
  anon_sym_DASH_GT = 28,
  anon_sym_COLON = 29,
  anon_sym__ = 30,
  sym_stringLiteral = 31,
  aux_sym_integer_token1 = 32,
  aux_sym_name_token1 = 33,
  aux_sym_name_token2 = 34,
  sym_source_file = 35,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DEBUG] = "DEBUG",
  [anon_sym_EQ] = "=",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_DOT] = ".",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_comment] = "comment",
  [anon_sym_AT] = "@",
  [anon_sym_AT_AT] = "@@",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_COLON] = ":",
  [anon_sym__] = "_",
  [sym_stringLiteral] = "stringLiteral",
  [aux_sym_integer_token1] = "integer_token1",
  [aux_sym_name_token1] = "name_token1",
  [aux_sym_name_token2] = "name_token2",
  [sym_source_file] = "source_file",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DEBUG] = anon_sym_DEBUG,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_comment] = sym_comment,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_AT_AT] = anon_sym_AT_AT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym__] = anon_sym__,
  [sym_stringLiteral] = sym_stringLiteral,
  [aux_sym_integer_token1] = aux_sym_integer_token1,
  [aux_sym_name_token1] = aux_sym_name_token1,
  [aux_sym_name_token2] = aux_sym_name_token2,
  [sym_source_file] = sym_source_file,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DEBUG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
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
  [anon_sym_PERCENT] = {
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
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [sym_stringLiteral] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_integer_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_name_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '\r') SKIP(10)
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '%') ADVANCE(23);
      if (lookahead == '&') ADVANCE(27);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '(') ADVANCE(35);
      if (lookahead == ')') ADVANCE(36);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '+') ADVANCE(24);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '>') ADVANCE(20);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '[') ADVANCE(41);
      if (lookahead == ']') ADVANCE(42);
      if (lookahead == '_') ADVANCE(45);
      if (lookahead == '|') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(49);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(38);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(32);
      END_STATE();
    case 6:
      if (lookahead == 'B') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 'E') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == 'G') ADVANCE(15);
      END_STATE();
    case 9:
      if (lookahead == 'U') ADVANCE(8);
      END_STATE();
    case 10:
      if (eof) ADVANCE(14);
      if (lookahead == '\n') SKIP(12)
      END_STATE();
    case 11:
      if (eof) ADVANCE(14);
      if (lookahead == '\n') SKIP(13)
      END_STATE();
    case 12:
      if (eof) ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '\r') SKIP(10)
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '%') ADVANCE(23);
      if (lookahead == '&') ADVANCE(27);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '(') ADVANCE(35);
      if (lookahead == ')') ADVANCE(36);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '+') ADVANCE(24);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '>') ADVANCE(20);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '[') ADVANCE(41);
      if (lookahead == ']') ADVANCE(42);
      if (lookahead == '_') ADVANCE(45);
      if (lookahead == '|') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(49);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 13:
      if (eof) ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '\r') SKIP(11)
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == 'D') ADVANCE(7);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_DEBUG);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(31);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(26);
      if (lookahead == '=') ADVANCE(29);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(30);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(38);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(43);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_stringLiteral);
      if (lookahead == '"') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_name_token1);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_name_token2);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 13},
  [2] = {.lex_state = 13},
  [3] = {.lex_state = 13},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [sym_stringLiteral] = ACTIONS(1),
    [aux_sym_integer_token1] = ACTIONS(1),
    [aux_sym_name_token1] = ACTIONS(1),
    [aux_sym_name_token2] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(3),
    [anon_sym_DEBUG] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
  [7] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 7,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [9] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_gsql(void) {
  static TSLanguage language = {
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
    .parse_table = (const uint16_t *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
