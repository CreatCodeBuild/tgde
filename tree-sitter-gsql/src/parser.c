#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 30
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_LPAREN = 1,
  anon_sym_RPAREN = 2,
  anon_sym_EQ = 3,
  anon_sym_COMMA = 4,
  sym_lowercase = 5,
  sym_uppercase = 6,
  sym_digit = 7,
  anon_sym_DASH = 8,
  anon_sym_DOT = 9,
  anon_sym__ = 10,
  anon_sym_LT = 11,
  anon_sym_GT = 12,
  anon_sym_ = 13,
  anon_sym_select = 14,
  anon_sym_SELECT = 15,
  anon_sym_from = 16,
  anon_sym_FROM = 17,
  anon_sym_DASH_LPAREN = 18,
  anon_sym_DASH_GT = 19,
  sym_source_file = 20,
  sym_letter = 21,
  sym_name = 22,
  sym_vertexSetName = 23,
  sym_selectStmt = 24,
  sym_step = 25,
  sym_stepEdgeSet = 26,
  sym_stepVertexSet = 27,
  sym_stepSourceSet = 28,
  aux_sym_name_repeat1 = 29,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ] = "=",
  [anon_sym_COMMA] = ",",
  [sym_lowercase] = "lowercase",
  [sym_uppercase] = "uppercase",
  [sym_digit] = "digit",
  [anon_sym_DASH] = "-",
  [anon_sym_DOT] = ".",
  [anon_sym__] = "_",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_] = " ",
  [anon_sym_select] = "select",
  [anon_sym_SELECT] = "SELECT",
  [anon_sym_from] = "from",
  [anon_sym_FROM] = "FROM",
  [anon_sym_DASH_LPAREN] = "-(",
  [anon_sym_DASH_GT] = "->",
  [sym_source_file] = "source_file",
  [sym_letter] = "letter",
  [sym_name] = "name",
  [sym_vertexSetName] = "vertexSetName",
  [sym_selectStmt] = "selectStmt",
  [sym_step] = "step",
  [sym_stepEdgeSet] = "stepEdgeSet",
  [sym_stepVertexSet] = "stepVertexSet",
  [sym_stepSourceSet] = "stepSourceSet",
  [aux_sym_name_repeat1] = "name_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_lowercase] = sym_lowercase,
  [sym_uppercase] = sym_uppercase,
  [sym_digit] = sym_digit,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym__] = anon_sym__,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_] = anon_sym_,
  [anon_sym_select] = anon_sym_select,
  [anon_sym_SELECT] = anon_sym_SELECT,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_FROM] = anon_sym_FROM,
  [anon_sym_DASH_LPAREN] = anon_sym_DASH_LPAREN,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym_source_file] = sym_source_file,
  [sym_letter] = sym_letter,
  [sym_name] = sym_name,
  [sym_vertexSetName] = sym_vertexSetName,
  [sym_selectStmt] = sym_selectStmt,
  [sym_step] = sym_step,
  [sym_stepEdgeSet] = sym_stepEdgeSet,
  [sym_stepVertexSet] = sym_stepVertexSet,
  [sym_stepSourceSet] = sym_stepSourceSet,
  [aux_sym_name_repeat1] = aux_sym_name_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [sym_lowercase] = {
    .visible = true,
    .named = true,
  },
  [sym_uppercase] = {
    .visible = true,
    .named = true,
  },
  [sym_digit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
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
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_letter] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_vertexSetName] = {
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
  [aux_sym_name_repeat1] = {
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
      if (eof) ADVANCE(23);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(18)
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == '(') ADVANCE(24);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == ',') ADVANCE(27);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '<') ADVANCE(37);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(38);
      if (lookahead == 'F') ADVANCE(31);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(30);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') SKIP(1)
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == '-') ADVANCE(34);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(44);
      END_STATE();
    case 4:
      if (lookahead == 'C') ADVANCE(10);
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
      if (lookahead == 'M') ADVANCE(43);
      END_STATE();
    case 9:
      if (lookahead == 'O') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == 'T') ADVANCE(41);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(17);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == 'm') ADVANCE(42);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 18:
      if (eof) ADVANCE(23);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 19:
      if (eof) ADVANCE(23);
      if (lookahead == '\n') SKIP(20)
      END_STATE();
    case 20:
      if (eof) ADVANCE(23);
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '\r') SKIP(19)
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == 'S') ADVANCE(5);
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 21:
      if (eof) ADVANCE(23);
      if (lookahead == '\n') SKIP(22)
      END_STATE();
    case 22:
      if (eof) ADVANCE(23);
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '\r') SKIP(21)
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(30);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_lowercase);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_lowercase);
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_uppercase);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_uppercase);
      if (lookahead == 'R') ADVANCE(9);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_digit);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '(') ADVANCE(44);
      if (lookahead == '>') ADVANCE(45);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(45);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_select);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_SELECT);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_FROM);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DASH_LPAREN);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 20},
  [2] = {.lex_state = 22},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 22},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 22},
  [8] = {.lex_state = 22},
  [9] = {.lex_state = 22},
  [10] = {.lex_state = 22},
  [11] = {.lex_state = 22},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 22},
  [14] = {.lex_state = 22},
  [15] = {.lex_state = 22},
  [16] = {.lex_state = 22},
  [17] = {.lex_state = 22},
  [18] = {.lex_state = 20},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 20},
  [21] = {.lex_state = 20},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_lowercase] = ACTIONS(1),
    [sym_uppercase] = ACTIONS(1),
    [sym_digit] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_FROM] = ACTIONS(1),
    [anon_sym_DASH_LPAREN] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(27),
    [sym_selectStmt] = STATE(29),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_select] = ACTIONS(5),
    [anon_sym_SELECT] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      anon_sym_DASH_LPAREN,
    ACTIONS(9), 2,
      sym_lowercase,
      sym_uppercase,
    ACTIONS(11), 2,
      sym_digit,
      anon_sym__,
    STATE(8), 2,
      sym_letter,
      aux_sym_name_repeat1,
  [20] = 5,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(7), 2,
      anon_sym_from,
      anon_sym_FROM,
    ACTIONS(13), 2,
      sym_lowercase,
      sym_uppercase,
    ACTIONS(15), 2,
      sym_digit,
      anon_sym__,
    STATE(4), 2,
      sym_letter,
      aux_sym_name_repeat1,
  [40] = 5,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(13), 2,
      sym_lowercase,
      sym_uppercase,
    ACTIONS(17), 2,
      sym_digit,
      anon_sym__,
    ACTIONS(19), 2,
      anon_sym_from,
      anon_sym_FROM,
    STATE(6), 2,
      sym_letter,
      aux_sym_name_repeat1,
  [60] = 8,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(21), 1,
      anon_sym__,
    STATE(2), 1,
      sym_letter,
    STATE(18), 1,
      sym_stepSourceSet,
    STATE(20), 1,
      sym_vertexSetName,
    STATE(21), 1,
      sym_name,
    STATE(28), 1,
      sym_step,
    ACTIONS(9), 2,
      sym_lowercase,
      sym_uppercase,
  [86] = 5,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(23), 2,
      sym_lowercase,
      sym_uppercase,
    ACTIONS(26), 2,
      sym_digit,
      anon_sym__,
    ACTIONS(29), 2,
      anon_sym_from,
      anon_sym_FROM,
    STATE(6), 2,
      sym_letter,
      aux_sym_name_repeat1,
  [106] = 5,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      anon_sym_DASH_LPAREN,
    ACTIONS(31), 2,
      sym_lowercase,
      sym_uppercase,
    ACTIONS(34), 2,
      sym_digit,
      anon_sym__,
    STATE(7), 2,
      sym_letter,
      aux_sym_name_repeat1,
  [126] = 5,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(9), 2,
      sym_lowercase,
      sym_uppercase,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      anon_sym_DASH_LPAREN,
    ACTIONS(37), 2,
      sym_digit,
      anon_sym__,
    STATE(7), 2,
      sym_letter,
      aux_sym_name_repeat1,
  [146] = 5,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(29), 1,
      anon_sym_RPAREN,
    ACTIONS(39), 2,
      sym_lowercase,
      sym_uppercase,
    ACTIONS(42), 2,
      sym_digit,
      anon_sym__,
    STATE(9), 2,
      sym_letter,
      aux_sym_name_repeat1,
  [165] = 5,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(19), 1,
      anon_sym_RPAREN,
    ACTIONS(45), 2,
      sym_lowercase,
      sym_uppercase,
    ACTIONS(47), 2,
      sym_digit,
      anon_sym__,
    STATE(9), 2,
      sym_letter,
      aux_sym_name_repeat1,
  [184] = 5,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(7), 1,
      anon_sym_RPAREN,
    ACTIONS(45), 2,
      sym_lowercase,
      sym_uppercase,
    ACTIONS(49), 2,
      sym_digit,
      anon_sym__,
    STATE(10), 2,
      sym_letter,
      aux_sym_name_repeat1,
  [203] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(51), 2,
      sym_lowercase,
      sym_uppercase,
    ACTIONS(53), 4,
      sym_digit,
      anon_sym__,
      anon_sym_from,
      anon_sym_FROM,
  [217] = 6,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(55), 1,
      anon_sym__,
    STATE(11), 1,
      sym_letter,
    STATE(23), 1,
      sym_name,
    STATE(26), 1,
      sym_stepEdgeSet,
    ACTIONS(45), 2,
      sym_lowercase,
      sym_uppercase,
  [237] = 6,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(21), 1,
      anon_sym__,
    STATE(2), 1,
      sym_letter,
    STATE(24), 1,
      sym_name,
    STATE(25), 1,
      sym_stepVertexSet,
    ACTIONS(9), 2,
      sym_lowercase,
      sym_uppercase,
  [257] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(53), 6,
      ts_builtin_sym_end,
      sym_lowercase,
      sym_uppercase,
      sym_digit,
      anon_sym__,
      anon_sym_DASH_LPAREN,
  [269] = 5,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(59), 1,
      anon_sym__,
    STATE(3), 1,
      sym_letter,
    STATE(22), 1,
      sym_name,
    ACTIONS(57), 2,
      sym_lowercase,
      sym_uppercase,
  [286] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(53), 5,
      anon_sym_RPAREN,
      sym_lowercase,
      sym_uppercase,
      sym_digit,
      anon_sym__,
  [297] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      anon_sym_DASH_LPAREN,
  [307] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(67), 1,
      anon_sym_DASH_GT,
  [317] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      anon_sym_DASH_LPAREN,
  [325] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      anon_sym_DASH_LPAREN,
  [333] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(73), 2,
      anon_sym_from,
      anon_sym_FROM,
  [341] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
  [348] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
  [355] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
  [362] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
  [369] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
  [376] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
  [383] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 20,
  [SMALL_STATE(4)] = 40,
  [SMALL_STATE(5)] = 60,
  [SMALL_STATE(6)] = 86,
  [SMALL_STATE(7)] = 106,
  [SMALL_STATE(8)] = 126,
  [SMALL_STATE(9)] = 146,
  [SMALL_STATE(10)] = 165,
  [SMALL_STATE(11)] = 184,
  [SMALL_STATE(12)] = 203,
  [SMALL_STATE(13)] = 217,
  [SMALL_STATE(14)] = 237,
  [SMALL_STATE(15)] = 257,
  [SMALL_STATE(16)] = 269,
  [SMALL_STATE(17)] = 286,
  [SMALL_STATE(18)] = 297,
  [SMALL_STATE(19)] = 307,
  [SMALL_STATE(20)] = 317,
  [SMALL_STATE(21)] = 325,
  [SMALL_STATE(22)] = 333,
  [SMALL_STATE(23)] = 341,
  [SMALL_STATE(24)] = 348,
  [SMALL_STATE(25)] = 355,
  [SMALL_STATE(26)] = 362,
  [SMALL_STATE(27)] = 369,
  [SMALL_STATE(28)] = 376,
  [SMALL_STATE(29)] = 383,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(12),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(6),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(15),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(7),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(17),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(9),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_letter, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_letter, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepSourceSet, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertexSetName, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepEdgeSet, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepVertexSet, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 6, .production_id = 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [83] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectStmt, 4, .production_id = 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 1),
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
