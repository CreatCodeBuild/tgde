#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 33
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 5

enum {
  anon_sym_select = 1,
  anon_sym_SELECT = 2,
  anon_sym_from = 3,
  anon_sym_FROM = 4,
  anon_sym_DASH_LPAREN = 5,
  anon_sym_RPAREN = 6,
  anon_sym_DASH = 7,
  anon_sym_DASH_GT = 8,
  sym_name = 9,
  anon_sym_ = 10,
  anon_sym_LF = 11,
  sym_source_file = 12,
  sym_selectStmt = 13,
  sym_step = 14,
  sym_stepEdgeSet = 15,
  sym_stepVertexSet = 16,
  sym_stepSourceSet = 17,
  sym_vertexSetName = 18,
  sym_whitespace = 19,
  aux_sym_whitespace_repeat1 = 20,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_select] = "select",
  [anon_sym_SELECT] = "SELECT",
  [anon_sym_from] = "from",
  [anon_sym_FROM] = "FROM",
  [anon_sym_DASH_LPAREN] = "-(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DASH] = "-",
  [anon_sym_DASH_GT] = "->",
  [sym_name] = "name",
  [anon_sym_] = " ",
  [anon_sym_LF] = "\n",
  [sym_source_file] = "source_file",
  [sym_selectStmt] = "selectStmt",
  [sym_step] = "step",
  [sym_stepEdgeSet] = "stepEdgeSet",
  [sym_stepVertexSet] = "stepVertexSet",
  [sym_stepSourceSet] = "stepSourceSet",
  [sym_vertexSetName] = "vertexSetName",
  [sym_whitespace] = "whitespace",
  [aux_sym_whitespace_repeat1] = "whitespace_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_select] = anon_sym_select,
  [anon_sym_SELECT] = anon_sym_SELECT,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_FROM] = anon_sym_FROM,
  [anon_sym_DASH_LPAREN] = anon_sym_DASH_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym_name] = sym_name,
  [anon_sym_] = anon_sym_,
  [anon_sym_LF] = anon_sym_LF,
  [sym_source_file] = sym_source_file,
  [sym_selectStmt] = sym_selectStmt,
  [sym_step] = sym_step,
  [sym_stepEdgeSet] = sym_stepEdgeSet,
  [sym_stepVertexSet] = sym_stepVertexSet,
  [sym_stepSourceSet] = sym_stepSourceSet,
  [sym_vertexSetName] = sym_vertexSetName,
  [sym_whitespace] = sym_whitespace,
  [aux_sym_whitespace_repeat1] = aux_sym_whitespace_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
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
  [sym_whitespace] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_whitespace_repeat1] = {
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
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == '-') ADVANCE(28);
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
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == ' ') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(26);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
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
      if (lookahead == 'M') ADVANCE(25);
      END_STATE();
    case 9:
      if (lookahead == 'O') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == 'R') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 'T') ADVANCE(23);
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
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 20:
      if (eof) ADVANCE(21);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == ' ') ADVANCE(32);
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == 'F') ADVANCE(10);
      if (lookahead == 'S') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(18);
      if (lookahead == 's') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(20)
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_select);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_SELECT);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_FROM);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_DASH_LPAREN);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == '>') ADVANCE(30);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == ' ') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == ' ') ADVANCE(32);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 20},
  [2] = {.lex_state = 20},
  [3] = {.lex_state = 20},
  [4] = {.lex_state = 20},
  [5] = {.lex_state = 20},
  [6] = {.lex_state = 20},
  [7] = {.lex_state = 20},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 20},
  [10] = {.lex_state = 20},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 20},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 20},
  [16] = {.lex_state = 20},
  [17] = {.lex_state = 20},
  [18] = {.lex_state = 20},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
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
    [sym_source_file] = STATE(27),
    [sym_selectStmt] = STATE(25),
    [sym_whitespace] = STATE(20),
    [aux_sym_whitespace_repeat1] = STATE(2),
    [anon_sym_select] = ACTIONS(3),
    [anon_sym_SELECT] = ACTIONS(3),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(11), 2,
      anon_sym_,
      anon_sym_LF,
    ACTIONS(9), 4,
      anon_sym_select,
      anon_sym_SELECT,
      anon_sym_from,
      anon_sym_FROM,
  [17] = 4,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(17), 2,
      anon_sym_,
      anon_sym_LF,
    ACTIONS(15), 4,
      anon_sym_select,
      anon_sym_SELECT,
      anon_sym_from,
      anon_sym_FROM,
  [34] = 4,
    ACTIONS(20), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_whitespace_repeat1,
    STATE(30), 1,
      sym_whitespace,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_LF,
  [48] = 4,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_whitespace_repeat1,
    STATE(26), 1,
      sym_whitespace,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_LF,
  [62] = 2,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    ACTIONS(26), 3,
      anon_sym_DASH_LPAREN,
      anon_sym_,
      anon_sym_LF,
  [71] = 2,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
    ACTIONS(30), 3,
      anon_sym_DASH_LPAREN,
      anon_sym_,
      anon_sym_LF,
  [80] = 3,
    ACTIONS(15), 1,
      sym_name,
    STATE(8), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(32), 2,
      anon_sym_,
      anon_sym_LF,
  [91] = 3,
    STATE(11), 1,
      aux_sym_whitespace_repeat1,
    STATE(31), 1,
      sym_whitespace,
    ACTIONS(35), 2,
      anon_sym_,
      anon_sym_LF,
  [102] = 3,
    STATE(2), 1,
      aux_sym_whitespace_repeat1,
    STATE(21), 1,
      sym_whitespace,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_LF,
  [113] = 3,
    ACTIONS(9), 1,
      sym_name,
    STATE(8), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(37), 2,
      anon_sym_,
      anon_sym_LF,
  [124] = 4,
    ACTIONS(39), 1,
      sym_name,
    STATE(4), 1,
      sym_step,
    STATE(7), 1,
      sym_vertexSetName,
    STATE(15), 1,
      sym_stepSourceSet,
  [137] = 3,
    STATE(2), 1,
      aux_sym_whitespace_repeat1,
    STATE(19), 1,
      sym_whitespace,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_LF,
  [148] = 4,
    ACTIONS(39), 1,
      sym_name,
    STATE(5), 1,
      sym_step,
    STATE(7), 1,
      sym_vertexSetName,
    STATE(15), 1,
      sym_stepSourceSet,
  [161] = 3,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      anon_sym_DASH_LPAREN,
    ACTIONS(45), 2,
      anon_sym_,
      anon_sym_LF,
  [172] = 3,
    STATE(11), 1,
      aux_sym_whitespace_repeat1,
    STATE(32), 1,
      sym_whitespace,
    ACTIONS(35), 2,
      anon_sym_,
      anon_sym_LF,
  [183] = 2,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 2,
      anon_sym_,
      anon_sym_LF,
  [191] = 2,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 2,
      anon_sym_,
      anon_sym_LF,
  [199] = 1,
    ACTIONS(55), 2,
      anon_sym_from,
      anon_sym_FROM,
  [204] = 1,
    ACTIONS(57), 2,
      anon_sym_select,
      anon_sym_SELECT,
  [209] = 1,
    ACTIONS(59), 2,
      anon_sym_from,
      anon_sym_FROM,
  [214] = 2,
    ACTIONS(61), 1,
      sym_name,
    STATE(29), 1,
      sym_stepEdgeSet,
  [221] = 2,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(65), 1,
      anon_sym_DASH_GT,
  [228] = 2,
    ACTIONS(67), 1,
      sym_name,
    STATE(18), 1,
      sym_stepVertexSet,
  [235] = 1,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
  [239] = 1,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
  [243] = 1,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
  [247] = 1,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
  [251] = 1,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
  [255] = 1,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
  [259] = 1,
    ACTIONS(81), 1,
      sym_name,
  [263] = 1,
    ACTIONS(83), 1,
      sym_name,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 17,
  [SMALL_STATE(4)] = 34,
  [SMALL_STATE(5)] = 48,
  [SMALL_STATE(6)] = 62,
  [SMALL_STATE(7)] = 71,
  [SMALL_STATE(8)] = 80,
  [SMALL_STATE(9)] = 91,
  [SMALL_STATE(10)] = 102,
  [SMALL_STATE(11)] = 113,
  [SMALL_STATE(12)] = 124,
  [SMALL_STATE(13)] = 137,
  [SMALL_STATE(14)] = 148,
  [SMALL_STATE(15)] = 161,
  [SMALL_STATE(16)] = 172,
  [SMALL_STATE(17)] = 183,
  [SMALL_STATE(18)] = 191,
  [SMALL_STATE(19)] = 199,
  [SMALL_STATE(20)] = 204,
  [SMALL_STATE(21)] = 209,
  [SMALL_STATE(22)] = 214,
  [SMALL_STATE(23)] = 221,
  [SMALL_STATE(24)] = 228,
  [SMALL_STATE(25)] = 235,
  [SMALL_STATE(26)] = 239,
  [SMALL_STATE(27)] = 243,
  [SMALL_STATE(28)] = 247,
  [SMALL_STATE(29)] = 251,
  [SMALL_STATE(30)] = 255,
  [SMALL_STATE(31)] = 259,
  [SMALL_STATE(32)] = 263,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_whitespace, 1),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_whitespace, 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(3),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectStmt, 7, .production_id = 3),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectStmt, 6, .production_id = 2),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertexSetName, 1),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vertexSetName, 1),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepSourceSet, 1),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stepSourceSet, 1),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(8),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_step, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepVertexSet, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stepVertexSet, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 6, .production_id = 4),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_step, 6, .production_id = 4),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectStmt, 7, .production_id = 2),
  [73] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepEdgeSet, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectStmt, 8, .production_id = 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
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
