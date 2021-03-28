#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 18
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_CREATE = 1,
  anon_sym_REPLACE = 2,
  anon_sym_DISTRIBUTED = 3,
  anon_sym_QUERY = 4,
  anon_sym_select = 5,
  anon_sym_SELECT = 6,
  anon_sym_from = 7,
  anon_sym_FROM = 8,
  anon_sym_DASH_LPAREN = 9,
  anon_sym_RPAREN = 10,
  anon_sym_DASH = 11,
  anon_sym_DASH_GT = 12,
  sym_name = 13,
  sym_source_file = 14,
  sym_selectStmt = 15,
  sym_step = 16,
  sym_stepEdgeSet = 17,
  sym_stepVertexSet = 18,
  sym_stepSourceSet = 19,
  sym_vertexSetName = 20,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_CREATE] = "CREATE",
  [anon_sym_REPLACE] = "REPLACE",
  [anon_sym_DISTRIBUTED] = "DISTRIBUTED",
  [anon_sym_QUERY] = "QUERY",
  [anon_sym_select] = "select",
  [anon_sym_SELECT] = "SELECT",
  [anon_sym_from] = "from",
  [anon_sym_FROM] = "FROM",
  [anon_sym_DASH_LPAREN] = "-(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DASH] = "-",
  [anon_sym_DASH_GT] = "->",
  [sym_name] = "name",
  [sym_source_file] = "source_file",
  [sym_selectStmt] = "selectStmt",
  [sym_step] = "step",
  [sym_stepEdgeSet] = "stepEdgeSet",
  [sym_stepVertexSet] = "stepVertexSet",
  [sym_stepSourceSet] = "stepSourceSet",
  [sym_vertexSetName] = "vertexSetName",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_CREATE] = anon_sym_CREATE,
  [anon_sym_REPLACE] = anon_sym_REPLACE,
  [anon_sym_DISTRIBUTED] = anon_sym_DISTRIBUTED,
  [anon_sym_QUERY] = anon_sym_QUERY,
  [anon_sym_select] = anon_sym_select,
  [anon_sym_SELECT] = anon_sym_SELECT,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_FROM] = anon_sym_FROM,
  [anon_sym_DASH_LPAREN] = anon_sym_DASH_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym_name] = sym_name,
  [sym_source_file] = sym_source_file,
  [sym_selectStmt] = sym_selectStmt,
  [sym_step] = sym_step,
  [sym_stepEdgeSet] = sym_stepEdgeSet,
  [sym_stepVertexSet] = sym_stepVertexSet,
  [sym_stepSourceSet] = sym_stepSourceSet,
  [sym_vertexSetName] = sym_vertexSetName,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_CREATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REPLACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DISTRIBUTED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QUERY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_select] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SELECT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FROM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_selectStmt] = {
    .visible = true,
    .named = true,
  },
  [sym_step] = {
    .visible = true,
    .named = true,
  },
  [sym_stepEdgeSet] = {
    .visible = true,
    .named = true,
  },
  [sym_stepVertexSet] = {
    .visible = true,
    .named = true,
  },
  [sym_stepSourceSet] = {
    .visible = true,
    .named = true,
  },
  [sym_vertexSetName] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_select = 1,
  field_step = 2,
  field_stepEdgeSet = 3,
  field_stepVertexSet = 4,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_select] = "select",
  [field_step] = "step",
  [field_stepEdgeSet] = "stepEdgeSet",
  [field_stepVertexSet] = "stepVertexSet",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_select, 0},
  [1] =
    {field_step, 3},
  [2] =
    {field_stepEdgeSet, 2},
    {field_stepVertexSet, 5},
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
      if (eof) ADVANCE(48);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\r') SKIP(45)
      if (lookahead == ')') ADVANCE(58);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == 'C') ADVANCE(27);
      if (lookahead == 'D') ADVANCE(17);
      if (lookahead == 'F') ADVANCE(24);
      if (lookahead == 'Q') ADVANCE(33);
      if (lookahead == 'R') ADVANCE(9);
      if (lookahead == 'S') ADVANCE(10);
      if (lookahead == 'f') ADVANCE(42);
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(44)
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(57);
      END_STATE();
    case 3:
      if (lookahead == 'A') ADVANCE(31);
      END_STATE();
    case 4:
      if (lookahead == 'A') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == 'B') ADVANCE(34);
      END_STATE();
    case 6:
      if (lookahead == 'C') ADVANCE(29);
      END_STATE();
    case 7:
      if (lookahead == 'C') ADVANCE(14);
      END_STATE();
    case 8:
      if (lookahead == 'D') ADVANCE(51);
      END_STATE();
    case 9:
      if (lookahead == 'E') ADVANCE(23);
      END_STATE();
    case 10:
      if (lookahead == 'E') ADVANCE(20);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(3);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(6);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(49);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(50);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(8);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(25);
      END_STATE();
    case 17:
      if (lookahead == 'I') ADVANCE(28);
      END_STATE();
    case 18:
      if (lookahead == 'I') ADVANCE(5);
      END_STATE();
    case 19:
      if (lookahead == 'L') ADVANCE(4);
      END_STATE();
    case 20:
      if (lookahead == 'L') ADVANCE(12);
      END_STATE();
    case 21:
      if (lookahead == 'M') ADVANCE(56);
      END_STATE();
    case 22:
      if (lookahead == 'O') ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == 'P') ADVANCE(19);
      END_STATE();
    case 24:
      if (lookahead == 'R') ADVANCE(22);
      END_STATE();
    case 25:
      if (lookahead == 'R') ADVANCE(35);
      END_STATE();
    case 26:
      if (lookahead == 'R') ADVANCE(18);
      END_STATE();
    case 27:
      if (lookahead == 'R') ADVANCE(11);
      END_STATE();
    case 28:
      if (lookahead == 'S') ADVANCE(30);
      END_STATE();
    case 29:
      if (lookahead == 'T') ADVANCE(54);
      END_STATE();
    case 30:
      if (lookahead == 'T') ADVANCE(26);
      END_STATE();
    case 31:
      if (lookahead == 'T') ADVANCE(13);
      END_STATE();
    case 32:
      if (lookahead == 'T') ADVANCE(15);
      END_STATE();
    case 33:
      if (lookahead == 'U') ADVANCE(16);
      END_STATE();
    case 34:
      if (lookahead == 'U') ADVANCE(32);
      END_STATE();
    case 35:
      if (lookahead == 'Y') ADVANCE(52);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 40:
      if (lookahead == 'm') ADVANCE(55);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 44:
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(44)
      if (lookahead == '\r') SKIP(1)
      if (lookahead == '-') ADVANCE(60);
      END_STATE();
    case 45:
      if (eof) ADVANCE(48);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 46:
      if (eof) ADVANCE(48);
      if (lookahead == '\n') SKIP(47)
      END_STATE();
    case 47:
      if (eof) ADVANCE(48);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(47)
      if (lookahead == '\r') SKIP(46)
      if (lookahead == '-') ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_CREATE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_REPLACE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DISTRIBUTED);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_QUERY);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_select);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_SELECT);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_FROM);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DASH_LPAREN);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == '>') ADVANCE(61);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 47},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 47},
  [5] = {.lex_state = 47},
  [6] = {.lex_state = 47},
  [7] = {.lex_state = 47},
  [8] = {.lex_state = 44},
  [9] = {.lex_state = 47},
  [10] = {.lex_state = 47},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_CREATE] = ACTIONS(1),
    [anon_sym_REPLACE] = ACTIONS(1),
    [anon_sym_DISTRIBUTED] = ACTIONS(1),
    [anon_sym_QUERY] = ACTIONS(1),
    [anon_sym_select] = ACTIONS(1),
    [anon_sym_SELECT] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_FROM] = ACTIONS(1),
    [anon_sym_DASH_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(11),
    [sym_selectStmt] = STATE(12),
    [anon_sym_select] = ACTIONS(3),
    [anon_sym_SELECT] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(5), 1,
      sym_name,
    STATE(5), 1,
      sym_stepSourceSet,
    STATE(6), 1,
      sym_vertexSetName,
    STATE(13), 1,
      sym_step,
  [13] = 1,
    ACTIONS(7), 2,
      anon_sym_from,
      anon_sym_FROM,
  [18] = 1,
    ACTIONS(9), 2,
      ts_builtin_sym_end,
      anon_sym_DASH_LPAREN,
  [23] = 2,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_DASH_LPAREN,
  [30] = 1,
    ACTIONS(15), 2,
      ts_builtin_sym_end,
      anon_sym_DASH_LPAREN,
  [35] = 2,
    ACTIONS(17), 1,
      sym_name,
    STATE(15), 1,
      sym_stepEdgeSet,
  [42] = 2,
    ACTIONS(19), 1,
      anon_sym_DASH,
    ACTIONS(21), 1,
      anon_sym_DASH_GT,
  [49] = 2,
    ACTIONS(23), 1,
      sym_name,
    STATE(17), 1,
      sym_stepVertexSet,
  [56] = 1,
    ACTIONS(25), 1,
      sym_name,
  [60] = 1,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
  [64] = 1,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
  [68] = 1,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
  [72] = 1,
    ACTIONS(33), 1,
      anon_sym_RPAREN,
  [76] = 1,
    ACTIONS(35), 1,
      anon_sym_RPAREN,
  [80] = 1,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
  [84] = 1,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 13,
  [SMALL_STATE(4)] = 18,
  [SMALL_STATE(5)] = 23,
  [SMALL_STATE(6)] = 30,
  [SMALL_STATE(7)] = 35,
  [SMALL_STATE(8)] = 42,
  [SMALL_STATE(9)] = 49,
  [SMALL_STATE(10)] = 56,
  [SMALL_STATE(11)] = 60,
  [SMALL_STATE(12)] = 64,
  [SMALL_STATE(13)] = 68,
  [SMALL_STATE(14)] = 72,
  [SMALL_STATE(15)] = 76,
  [SMALL_STATE(16)] = 80,
  [SMALL_STATE(17)] = 84,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertexSetName, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepSourceSet, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectStmt, 4, .production_id = 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepEdgeSet, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepVertexSet, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 6, .production_id = 3),
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
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
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
