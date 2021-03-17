#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 25
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 13
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_ = 1,
  anon_sym_select = 2,
  anon_sym_SELECT = 3,
  anon_sym_from = 4,
  anon_sym_FROM = 5,
  sym_name = 6,
  sym_source_file = 7,
  sym_selectStmt = 8,
  sym_step = 9,
  sym_stepSourceSet = 10,
  sym_vertexSetName = 11,
  aux_sym_selectStmt_repeat1 = 12,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_] = " ",
  [anon_sym_select] = "select",
  [anon_sym_SELECT] = "SELECT",
  [anon_sym_from] = "from",
  [anon_sym_FROM] = "FROM",
  [sym_name] = "name",
  [sym_source_file] = "source_file",
  [sym_selectStmt] = "selectStmt",
  [sym_step] = "step",
  [sym_stepSourceSet] = "stepSourceSet",
  [sym_vertexSetName] = "vertexSetName",
  [aux_sym_selectStmt_repeat1] = "selectStmt_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_] = anon_sym_,
  [anon_sym_select] = anon_sym_select,
  [anon_sym_SELECT] = anon_sym_SELECT,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_FROM] = anon_sym_FROM,
  [sym_name] = sym_name,
  [sym_source_file] = sym_source_file,
  [sym_selectStmt] = sym_selectStmt,
  [sym_step] = sym_step,
  [sym_stepSourceSet] = sym_stepSourceSet,
  [sym_vertexSetName] = sym_vertexSetName,
  [aux_sym_selectStmt_repeat1] = aux_sym_selectStmt_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_] = {
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
  [sym_stepSourceSet] = {
    .visible = true,
    .named = true,
  },
  [sym_vertexSetName] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_selectStmt_repeat1] = {
    .visible = false,
    .named = false,
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
      if (eof) ADVANCE(19);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == 'F') ADVANCE(8);
      if (lookahead == 'S') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 2:
      if (lookahead == 'C') ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == 'E') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == 'E') ADVANCE(2);
      END_STATE();
    case 5:
      if (lookahead == 'L') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == 'M') ADVANCE(24);
      END_STATE();
    case 7:
      if (lookahead == 'O') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == 'R') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == 'T') ADVANCE(22);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(17);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_select);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_SELECT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_FROM);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 18},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 18},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_select] = ACTIONS(1),
    [anon_sym_SELECT] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_FROM] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(24),
    [sym_selectStmt] = STATE(23),
    [aux_sym_selectStmt_repeat1] = STATE(4),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_select] = ACTIONS(5),
    [anon_sym_SELECT] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(7), 1,
      anon_sym_,
    STATE(2), 1,
      aux_sym_selectStmt_repeat1,
    ACTIONS(10), 4,
      anon_sym_select,
      anon_sym_SELECT,
      anon_sym_from,
      anon_sym_FROM,
  [13] = 4,
    ACTIONS(12), 1,
      sym_name,
    STATE(12), 1,
      sym_step,
    STATE(17), 1,
      sym_stepSourceSet,
    STATE(18), 1,
      sym_vertexSetName,
  [26] = 3,
    ACTIONS(14), 1,
      anon_sym_,
    STATE(2), 1,
      aux_sym_selectStmt_repeat1,
    ACTIONS(16), 2,
      anon_sym_select,
      anon_sym_SELECT,
  [37] = 3,
    ACTIONS(14), 1,
      anon_sym_,
    STATE(2), 1,
      aux_sym_selectStmt_repeat1,
    ACTIONS(18), 2,
      anon_sym_from,
      anon_sym_FROM,
  [48] = 4,
    ACTIONS(12), 1,
      sym_name,
    STATE(15), 1,
      sym_step,
    STATE(17), 1,
      sym_stepSourceSet,
    STATE(18), 1,
      sym_vertexSetName,
  [61] = 3,
    ACTIONS(14), 1,
      anon_sym_,
    STATE(2), 1,
      aux_sym_selectStmt_repeat1,
    ACTIONS(20), 2,
      anon_sym_from,
      anon_sym_FROM,
  [72] = 3,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
    ACTIONS(24), 1,
      anon_sym_,
    STATE(8), 1,
      aux_sym_selectStmt_repeat1,
  [82] = 3,
    ACTIONS(10), 1,
      sym_name,
    ACTIONS(27), 1,
      anon_sym_,
    STATE(9), 1,
      aux_sym_selectStmt_repeat1,
  [92] = 3,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    ACTIONS(32), 1,
      anon_sym_,
    STATE(8), 1,
      aux_sym_selectStmt_repeat1,
  [102] = 3,
    ACTIONS(34), 1,
      anon_sym_,
    ACTIONS(36), 1,
      sym_name,
    STATE(9), 1,
      aux_sym_selectStmt_repeat1,
  [112] = 3,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    ACTIONS(40), 1,
      anon_sym_,
    STATE(10), 1,
      aux_sym_selectStmt_repeat1,
  [122] = 3,
    ACTIONS(32), 1,
      anon_sym_,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      aux_sym_selectStmt_repeat1,
  [132] = 3,
    ACTIONS(34), 1,
      anon_sym_,
    ACTIONS(42), 1,
      sym_name,
    STATE(9), 1,
      aux_sym_selectStmt_repeat1,
  [142] = 3,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(46), 1,
      anon_sym_,
    STATE(13), 1,
      aux_sym_selectStmt_repeat1,
  [152] = 2,
    ACTIONS(48), 1,
      anon_sym_,
    STATE(7), 1,
      aux_sym_selectStmt_repeat1,
  [159] = 1,
    ACTIONS(50), 2,
      ts_builtin_sym_end,
      anon_sym_,
  [164] = 1,
    ACTIONS(52), 2,
      ts_builtin_sym_end,
      anon_sym_,
  [169] = 1,
    ACTIONS(54), 2,
      ts_builtin_sym_end,
      anon_sym_,
  [174] = 2,
    ACTIONS(56), 1,
      anon_sym_,
    STATE(11), 1,
      aux_sym_selectStmt_repeat1,
  [181] = 2,
    ACTIONS(58), 1,
      anon_sym_,
    STATE(5), 1,
      aux_sym_selectStmt_repeat1,
  [188] = 2,
    ACTIONS(60), 1,
      anon_sym_,
    STATE(14), 1,
      aux_sym_selectStmt_repeat1,
  [195] = 1,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
  [199] = 1,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 13,
  [SMALL_STATE(4)] = 26,
  [SMALL_STATE(5)] = 37,
  [SMALL_STATE(6)] = 48,
  [SMALL_STATE(7)] = 61,
  [SMALL_STATE(8)] = 72,
  [SMALL_STATE(9)] = 82,
  [SMALL_STATE(10)] = 92,
  [SMALL_STATE(11)] = 102,
  [SMALL_STATE(12)] = 112,
  [SMALL_STATE(13)] = 122,
  [SMALL_STATE(14)] = 132,
  [SMALL_STATE(15)] = 142,
  [SMALL_STATE(16)] = 152,
  [SMALL_STATE(17)] = 159,
  [SMALL_STATE(18)] = 164,
  [SMALL_STATE(19)] = 169,
  [SMALL_STATE(20)] = 174,
  [SMALL_STATE(21)] = 181,
  [SMALL_STATE(22)] = 188,
  [SMALL_STATE(23)] = 195,
  [SMALL_STATE(24)] = 199,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [7] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selectStmt_repeat1, 2), SHIFT_REPEAT(2),
  [10] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selectStmt_repeat1, 2),
  [12] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [14] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [16] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [18] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [20] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selectStmt_repeat1, 2),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selectStmt_repeat1, 2), SHIFT_REPEAT(8),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selectStmt_repeat1, 2), SHIFT_REPEAT(9),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectStmt, 8),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectStmt, 7),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectStmt, 6),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepSourceSet, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertexSetName, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [64] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
