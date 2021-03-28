#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 32
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 5

enum {
  anon_sym_ = 1,
  anon_sym_select = 2,
  anon_sym_SELECT = 3,
  anon_sym_from = 4,
  anon_sym_FROM = 5,
  anon_sym_DASH_LPAREN = 6,
  anon_sym_RPAREN = 7,
  anon_sym_DASH = 8,
  anon_sym_DASH_GT = 9,
  sym_name = 10,
  sym_source_file = 11,
  sym_selectStmt = 12,
  sym_step = 13,
  sym_stepEdgeSet = 14,
  sym_stepVertexSet = 15,
  sym_stepSourceSet = 16,
  sym_vertexSetName = 17,
  aux_sym_selectStmt_repeat1 = 18,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_] = " ",
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
  [aux_sym_selectStmt_repeat1] = "selectStmt_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_] = anon_sym_,
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
  [aux_sym_selectStmt_repeat1] = {
    .visible = false,
    .named = false,
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
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_select, 0},
  [1] =
    {field_step, 5},
  [2] =
    {field_step, 6},
  [3] =
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
      if (eof) ADVANCE(21);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == 'F') ADVANCE(10);
      if (lookahead == 'S') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(18);
      if (lookahead == 's') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(27);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 4:
      if (lookahead == 'C') ADVANCE(11);
      END_STATE();
    case 5:
      if (lookahead == 'E') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'E') ADVANCE(4);
      END_STATE();
    case 7:
      if (lookahead == 'L') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == 'M') ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == 'O') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == 'R') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 'T') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 20:
      if (eof) ADVANCE(21);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == 'F') ADVANCE(10);
      if (lookahead == 'S') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(18);
      if (lookahead == 's') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(20)
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_select);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_SELECT);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_FROM);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_DASH_LPAREN);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == '>') ADVANCE(31);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 20},
  [2] = {.lex_state = 20},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 20},
  [5] = {.lex_state = 20},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 20},
  [8] = {.lex_state = 20},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 20},
  [12] = {.lex_state = 20},
  [13] = {.lex_state = 20},
  [14] = {.lex_state = 20},
  [15] = {.lex_state = 20},
  [16] = {.lex_state = 20},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 20},
  [19] = {.lex_state = 20},
  [20] = {.lex_state = 20},
  [21] = {.lex_state = 20},
  [22] = {.lex_state = 20},
  [23] = {.lex_state = 20},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 20},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [sym_source_file] = STATE(28),
    [sym_selectStmt] = STATE(30),
    [aux_sym_selectStmt_repeat1] = STATE(5),
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
    STATE(13), 1,
      sym_stepSourceSet,
    STATE(14), 1,
      sym_vertexSetName,
    STATE(16), 1,
      sym_step,
  [26] = 3,
    ACTIONS(14), 1,
      anon_sym_,
    STATE(2), 1,
      aux_sym_selectStmt_repeat1,
    ACTIONS(16), 2,
      anon_sym_from,
      anon_sym_FROM,
  [37] = 3,
    ACTIONS(14), 1,
      anon_sym_,
    STATE(2), 1,
      aux_sym_selectStmt_repeat1,
    ACTIONS(18), 2,
      anon_sym_select,
      anon_sym_SELECT,
  [48] = 4,
    ACTIONS(12), 1,
      sym_name,
    STATE(8), 1,
      sym_step,
    STATE(13), 1,
      sym_stepSourceSet,
    STATE(14), 1,
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
    STATE(15), 1,
      aux_sym_selectStmt_repeat1,
  [82] = 3,
    ACTIONS(26), 1,
      anon_sym_,
    ACTIONS(28), 1,
      sym_name,
    STATE(17), 1,
      aux_sym_selectStmt_repeat1,
  [92] = 3,
    ACTIONS(26), 1,
      anon_sym_,
    ACTIONS(30), 1,
      sym_name,
    STATE(17), 1,
      aux_sym_selectStmt_repeat1,
  [102] = 2,
    ACTIONS(34), 1,
      anon_sym_DASH_LPAREN,
    ACTIONS(32), 2,
      ts_builtin_sym_end,
      anon_sym_,
  [110] = 3,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 1,
      anon_sym_,
    STATE(12), 1,
      aux_sym_selectStmt_repeat1,
  [120] = 2,
    ACTIONS(43), 1,
      anon_sym_DASH_LPAREN,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      anon_sym_,
  [128] = 2,
    ACTIONS(47), 1,
      anon_sym_DASH_LPAREN,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      anon_sym_,
  [136] = 3,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      anon_sym_,
    STATE(12), 1,
      aux_sym_selectStmt_repeat1,
  [146] = 3,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 1,
      anon_sym_,
    STATE(18), 1,
      aux_sym_selectStmt_repeat1,
  [156] = 3,
    ACTIONS(10), 1,
      sym_name,
    ACTIONS(57), 1,
      anon_sym_,
    STATE(17), 1,
      aux_sym_selectStmt_repeat1,
  [166] = 3,
    ACTIONS(51), 1,
      anon_sym_,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      aux_sym_selectStmt_repeat1,
  [176] = 1,
    ACTIONS(62), 2,
      ts_builtin_sym_end,
      anon_sym_,
  [181] = 2,
    ACTIONS(64), 1,
      anon_sym_,
    STATE(10), 1,
      aux_sym_selectStmt_repeat1,
  [188] = 2,
    ACTIONS(66), 1,
      anon_sym_,
    STATE(4), 1,
      aux_sym_selectStmt_repeat1,
  [195] = 2,
    ACTIONS(68), 1,
      anon_sym_,
    STATE(9), 1,
      aux_sym_selectStmt_repeat1,
  [202] = 2,
    ACTIONS(70), 1,
      anon_sym_,
    STATE(7), 1,
      aux_sym_selectStmt_repeat1,
  [209] = 2,
    ACTIONS(72), 1,
      sym_name,
    STATE(29), 1,
      sym_stepEdgeSet,
  [216] = 2,
    ACTIONS(74), 1,
      anon_sym_DASH,
    ACTIONS(76), 1,
      anon_sym_DASH_GT,
  [223] = 2,
    ACTIONS(78), 1,
      sym_name,
    STATE(19), 1,
      sym_stepVertexSet,
  [230] = 1,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      anon_sym_,
  [235] = 1,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
  [239] = 1,
    ACTIONS(84), 1,
      anon_sym_RPAREN,
  [243] = 1,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
  [247] = 1,
    ACTIONS(88), 1,
      anon_sym_RPAREN,
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
  [SMALL_STATE(12)] = 110,
  [SMALL_STATE(13)] = 120,
  [SMALL_STATE(14)] = 128,
  [SMALL_STATE(15)] = 136,
  [SMALL_STATE(16)] = 146,
  [SMALL_STATE(17)] = 156,
  [SMALL_STATE(18)] = 166,
  [SMALL_STATE(19)] = 176,
  [SMALL_STATE(20)] = 181,
  [SMALL_STATE(21)] = 188,
  [SMALL_STATE(22)] = 195,
  [SMALL_STATE(23)] = 202,
  [SMALL_STATE(24)] = 209,
  [SMALL_STATE(25)] = 216,
  [SMALL_STATE(26)] = 223,
  [SMALL_STATE(27)] = 230,
  [SMALL_STATE(28)] = 235,
  [SMALL_STATE(29)] = 239,
  [SMALL_STATE(30)] = 243,
  [SMALL_STATE(31)] = 247,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [7] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selectStmt_repeat1, 2), SHIFT_REPEAT(2),
  [10] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selectStmt_repeat1, 2),
  [12] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [14] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [16] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [18] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [20] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectStmt, 6, .production_id = 2),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertexSetName, 1),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vertexSetName, 1),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selectStmt_repeat1, 2),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selectStmt_repeat1, 2), SHIFT_REPEAT(12),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepSourceSet, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stepSourceSet, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectStmt, 7, .production_id = 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectStmt, 7, .production_id = 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selectStmt_repeat1, 2), SHIFT_REPEAT(17),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectStmt, 8, .production_id = 3),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 6, .production_id = 4),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepVertexSet, 1),
  [82] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepEdgeSet, 1),
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
