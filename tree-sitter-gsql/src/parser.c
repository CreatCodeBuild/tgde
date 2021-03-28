#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 126
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 55
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 16
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_CREATE = 1,
  anon_sym_OR = 2,
  anon_sym_REPLACE = 3,
  anon_sym_DISTRIBUTED = 4,
  anon_sym_QUERY = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  anon_sym_FOR = 8,
  anon_sym_GRAPH = 9,
  anon_sym_RETURNS = 10,
  anon_sym_EQ = 11,
  anon_sym_COMMA = 12,
  anon_sym_DASH = 13,
  aux_sym_integer_token1 = 14,
  anon_sym_DOT = 15,
  aux_sym_name_token1 = 16,
  aux_sym_name_token2 = 17,
  anon_sym__ = 18,
  anon_sym_INT = 19,
  anon_sym_FLOAT = 20,
  anon_sym_DOUBLE = 21,
  anon_sym_STRING = 22,
  anon_sym_BOOL = 23,
  anon_sym_VERTEX = 24,
  anon_sym_LT = 25,
  anon_sym_GT = 26,
  anon_sym_EDGE = 27,
  anon_sym_JSONOBJECT = 28,
  anon_sym_JSONARRAY = 29,
  anon_sym_DATETIME = 30,
  anon_sym_SET = 31,
  anon_sym_BAG = 32,
  anon_sym_FILE = 33,
  anon_sym_ = 34,
  anon_sym_DASH_LPAREN = 35,
  anon_sym_DASH_GT = 36,
  sym_source_file = 37,
  sym_createQuery = 38,
  sym_parameterList = 39,
  sym_integer = 40,
  sym_real = 41,
  sym_numeric = 42,
  sym_name = 43,
  sym_graphName = 44,
  sym_queryName = 45,
  sym_paramName = 46,
  sym_vertexType = 47,
  sym_baseType = 48,
  sym_parameterType = 49,
  sym_accumType = 50,
  sym_constant = 51,
  aux_sym_parameterList_repeat1 = 52,
  aux_sym_integer_repeat1 = 53,
  aux_sym_name_repeat1 = 54,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_CREATE] = "CREATE",
  [anon_sym_OR] = "OR",
  [anon_sym_REPLACE] = "REPLACE",
  [anon_sym_DISTRIBUTED] = "DISTRIBUTED",
  [anon_sym_QUERY] = "QUERY",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_FOR] = "FOR",
  [anon_sym_GRAPH] = "GRAPH",
  [anon_sym_RETURNS] = "RETURNS",
  [anon_sym_EQ] = "=",
  [anon_sym_COMMA] = ",",
  [anon_sym_DASH] = "-",
  [aux_sym_integer_token1] = "integer_token1",
  [anon_sym_DOT] = ".",
  [aux_sym_name_token1] = "name_token1",
  [aux_sym_name_token2] = "name_token2",
  [anon_sym__] = "_",
  [anon_sym_INT] = "INT",
  [anon_sym_FLOAT] = "FLOAT",
  [anon_sym_DOUBLE] = "DOUBLE",
  [anon_sym_STRING] = "STRING",
  [anon_sym_BOOL] = "BOOL",
  [anon_sym_VERTEX] = "VERTEX",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_EDGE] = "EDGE",
  [anon_sym_JSONOBJECT] = "JSONOBJECT",
  [anon_sym_JSONARRAY] = "JSONARRAY",
  [anon_sym_DATETIME] = "DATETIME",
  [anon_sym_SET] = "SET",
  [anon_sym_BAG] = "BAG",
  [anon_sym_FILE] = "FILE",
  [anon_sym_] = " ",
  [anon_sym_DASH_LPAREN] = "-(",
  [anon_sym_DASH_GT] = "->",
  [sym_source_file] = "source_file",
  [sym_createQuery] = "createQuery",
  [sym_parameterList] = "parameterList",
  [sym_integer] = "integer",
  [sym_real] = "real",
  [sym_numeric] = "numeric",
  [sym_name] = "name",
  [sym_graphName] = "graphName",
  [sym_queryName] = "queryName",
  [sym_paramName] = "paramName",
  [sym_vertexType] = "vertexType",
  [sym_baseType] = "baseType",
  [sym_parameterType] = "parameterType",
  [sym_accumType] = "accumType",
  [sym_constant] = "constant",
  [aux_sym_parameterList_repeat1] = "parameterList_repeat1",
  [aux_sym_integer_repeat1] = "integer_repeat1",
  [aux_sym_name_repeat1] = "name_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_CREATE] = anon_sym_CREATE,
  [anon_sym_OR] = anon_sym_OR,
  [anon_sym_REPLACE] = anon_sym_REPLACE,
  [anon_sym_DISTRIBUTED] = anon_sym_DISTRIBUTED,
  [anon_sym_QUERY] = anon_sym_QUERY,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_FOR] = anon_sym_FOR,
  [anon_sym_GRAPH] = anon_sym_GRAPH,
  [anon_sym_RETURNS] = anon_sym_RETURNS,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_integer_token1] = aux_sym_integer_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_name_token1] = aux_sym_name_token1,
  [aux_sym_name_token2] = aux_sym_name_token2,
  [anon_sym__] = anon_sym__,
  [anon_sym_INT] = anon_sym_INT,
  [anon_sym_FLOAT] = anon_sym_FLOAT,
  [anon_sym_DOUBLE] = anon_sym_DOUBLE,
  [anon_sym_STRING] = anon_sym_STRING,
  [anon_sym_BOOL] = anon_sym_BOOL,
  [anon_sym_VERTEX] = anon_sym_VERTEX,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_EDGE] = anon_sym_EDGE,
  [anon_sym_JSONOBJECT] = anon_sym_JSONOBJECT,
  [anon_sym_JSONARRAY] = anon_sym_JSONARRAY,
  [anon_sym_DATETIME] = anon_sym_DATETIME,
  [anon_sym_SET] = anon_sym_SET,
  [anon_sym_BAG] = anon_sym_BAG,
  [anon_sym_FILE] = anon_sym_FILE,
  [anon_sym_] = anon_sym_,
  [anon_sym_DASH_LPAREN] = anon_sym_DASH_LPAREN,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym_source_file] = sym_source_file,
  [sym_createQuery] = sym_createQuery,
  [sym_parameterList] = sym_parameterList,
  [sym_integer] = sym_integer,
  [sym_real] = sym_real,
  [sym_numeric] = sym_numeric,
  [sym_name] = sym_name,
  [sym_graphName] = sym_graphName,
  [sym_queryName] = sym_queryName,
  [sym_paramName] = sym_paramName,
  [sym_vertexType] = sym_vertexType,
  [sym_baseType] = sym_baseType,
  [sym_parameterType] = sym_parameterType,
  [sym_accumType] = sym_accumType,
  [sym_constant] = sym_constant,
  [aux_sym_parameterList_repeat1] = aux_sym_parameterList_repeat1,
  [aux_sym_integer_repeat1] = aux_sym_integer_repeat1,
  [aux_sym_name_repeat1] = aux_sym_name_repeat1,
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
  [anon_sym_OR] = {
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GRAPH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RETURNS] = {
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
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_integer_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
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
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FLOAT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOUBLE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STRING] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BOOL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VERTEX] = {
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
  [anon_sym_EDGE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JSONOBJECT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JSONARRAY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DATETIME] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BAG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FILE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
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
  [sym_createQuery] = {
    .visible = true,
    .named = true,
  },
  [sym_parameterList] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_real] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_graphName] = {
    .visible = true,
    .named = true,
  },
  [sym_queryName] = {
    .visible = true,
    .named = true,
  },
  [sym_paramName] = {
    .visible = true,
    .named = true,
  },
  [sym_vertexType] = {
    .visible = true,
    .named = true,
  },
  [sym_baseType] = {
    .visible = true,
    .named = true,
  },
  [sym_parameterType] = {
    .visible = true,
    .named = true,
  },
  [sym_accumType] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_parameterList_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_name_repeat1] = {
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
      if (eof) ADVANCE(91);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(88)
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == '(') ADVANCE(97);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == ',') ADVANCE(103);
      if (lookahead == '-') ADVANCE(105);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == '=') ADVANCE(102);
      if (lookahead == '>') ADVANCE(119);
      if (lookahead == 'R') ADVANCE(110);
      if (lookahead == '_') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(109);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') SKIP(1)
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == '(') ADVANCE(97);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == ',') ADVANCE(103);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == '=') ADVANCE(102);
      if (lookahead == '>') ADVANCE(119);
      if (lookahead == '_') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(109);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 3:
      if (lookahead == 'A') ADVANCE(33);
      if (lookahead == 'O') ADVANCE(51);
      END_STATE();
    case 4:
      if (lookahead == 'A') ADVANCE(54);
      END_STATE();
    case 5:
      if (lookahead == 'A') ADVANCE(15);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(76);
      if (lookahead == 'I') ADVANCE(69);
      if (lookahead == 'O') ADVANCE(82);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(87);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(73);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(65);
      if (lookahead == 'O') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(78);
      END_STATE();
    case 11:
      if (lookahead == 'B') ADVANCE(41);
      END_STATE();
    case 12:
      if (lookahead == 'B') ADVANCE(84);
      END_STATE();
    case 13:
      if (lookahead == 'B') ADVANCE(45);
      END_STATE();
    case 14:
      if (lookahead == 'C') ADVANCE(74);
      END_STATE();
    case 15:
      if (lookahead == 'C') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == 'D') ADVANCE(95);
      END_STATE();
    case 17:
      if (lookahead == 'D') ADVANCE(35);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(55);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(120);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(126);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(85);
      END_STATE();
    case 22:
      if (lookahead == 'E') ADVANCE(92);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(114);
      END_STATE();
    case 24:
      if (lookahead == 'E') ADVANCE(94);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(123);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(16);
      END_STATE();
    case 27:
      if (lookahead == 'E') ADVANCE(10);
      END_STATE();
    case 28:
      if (lookahead == 'E') ADVANCE(14);
      END_STATE();
    case 29:
      if (lookahead == 'E') ADVANCE(72);
      if (lookahead == 'T') ADVANCE(60);
      END_STATE();
    case 30:
      if (lookahead == 'E') ADVANCE(75);
      END_STATE();
    case 31:
      if (lookahead == 'E') ADVANCE(66);
      END_STATE();
    case 32:
      if (lookahead == 'E') ADVANCE(61);
      END_STATE();
    case 33:
      if (lookahead == 'G') ADVANCE(125);
      END_STATE();
    case 34:
      if (lookahead == 'G') ADVANCE(115);
      END_STATE();
    case 35:
      if (lookahead == 'G') ADVANCE(19);
      END_STATE();
    case 36:
      if (lookahead == 'H') ADVANCE(100);
      END_STATE();
    case 37:
      if (lookahead == 'I') ADVANCE(44);
      if (lookahead == 'L') ADVANCE(53);
      if (lookahead == 'O') ADVANCE(59);
      END_STATE();
    case 38:
      if (lookahead == 'I') ADVANCE(46);
      END_STATE();
    case 39:
      if (lookahead == 'I') ADVANCE(12);
      END_STATE();
    case 40:
      if (lookahead == 'I') ADVANCE(50);
      END_STATE();
    case 41:
      if (lookahead == 'J') ADVANCE(28);
      END_STATE();
    case 42:
      if (lookahead == 'L') ADVANCE(116);
      END_STATE();
    case 43:
      if (lookahead == 'L') ADVANCE(5);
      END_STATE();
    case 44:
      if (lookahead == 'L') ADVANCE(20);
      END_STATE();
    case 45:
      if (lookahead == 'L') ADVANCE(23);
      END_STATE();
    case 46:
      if (lookahead == 'M') ADVANCE(25);
      END_STATE();
    case 47:
      if (lookahead == 'N') ADVANCE(67);
      END_STATE();
    case 48:
      if (lookahead == 'N') ADVANCE(9);
      END_STATE();
    case 49:
      if (lookahead == 'N') ADVANCE(71);
      END_STATE();
    case 50:
      if (lookahead == 'N') ADVANCE(34);
      END_STATE();
    case 51:
      if (lookahead == 'O') ADVANCE(42);
      END_STATE();
    case 52:
      if (lookahead == 'O') ADVANCE(48);
      END_STATE();
    case 53:
      if (lookahead == 'O') ADVANCE(8);
      END_STATE();
    case 54:
      if (lookahead == 'P') ADVANCE(36);
      END_STATE();
    case 55:
      if (lookahead == 'P') ADVANCE(43);
      if (lookahead == 'T') ADVANCE(81);
      END_STATE();
    case 56:
      if (lookahead == 'R') ADVANCE(47);
      END_STATE();
    case 57:
      if (lookahead == 'R') ADVANCE(4);
      END_STATE();
    case 58:
      if (lookahead == 'R') ADVANCE(93);
      END_STATE();
    case 59:
      if (lookahead == 'R') ADVANCE(99);
      END_STATE();
    case 60:
      if (lookahead == 'R') ADVANCE(40);
      END_STATE();
    case 61:
      if (lookahead == 'R') ADVANCE(86);
      END_STATE();
    case 62:
      if (lookahead == 'R') ADVANCE(27);
      END_STATE();
    case 63:
      if (lookahead == 'R') ADVANCE(39);
      END_STATE();
    case 64:
      if (lookahead == 'R') ADVANCE(7);
      END_STATE();
    case 65:
      if (lookahead == 'R') ADVANCE(64);
      END_STATE();
    case 66:
      if (lookahead == 'R') ADVANCE(77);
      END_STATE();
    case 67:
      if (lookahead == 'S') ADVANCE(101);
      END_STATE();
    case 68:
      if (lookahead == 'S') ADVANCE(52);
      END_STATE();
    case 69:
      if (lookahead == 'S') ADVANCE(79);
      END_STATE();
    case 70:
      if (lookahead == 'T') ADVANCE(81);
      END_STATE();
    case 71:
      if (lookahead == 'T') ADVANCE(112);
      END_STATE();
    case 72:
      if (lookahead == 'T') ADVANCE(124);
      END_STATE();
    case 73:
      if (lookahead == 'T') ADVANCE(113);
      END_STATE();
    case 74:
      if (lookahead == 'T') ADVANCE(121);
      END_STATE();
    case 75:
      if (lookahead == 'T') ADVANCE(38);
      END_STATE();
    case 76:
      if (lookahead == 'T') ADVANCE(30);
      END_STATE();
    case 77:
      if (lookahead == 'T') ADVANCE(21);
      END_STATE();
    case 78:
      if (lookahead == 'T') ADVANCE(22);
      END_STATE();
    case 79:
      if (lookahead == 'T') ADVANCE(63);
      END_STATE();
    case 80:
      if (lookahead == 'T') ADVANCE(26);
      END_STATE();
    case 81:
      if (lookahead == 'U') ADVANCE(56);
      END_STATE();
    case 82:
      if (lookahead == 'U') ADVANCE(13);
      END_STATE();
    case 83:
      if (lookahead == 'U') ADVANCE(32);
      END_STATE();
    case 84:
      if (lookahead == 'U') ADVANCE(80);
      END_STATE();
    case 85:
      if (lookahead == 'X') ADVANCE(117);
      END_STATE();
    case 86:
      if (lookahead == 'Y') ADVANCE(96);
      END_STATE();
    case 87:
      if (lookahead == 'Y') ADVANCE(122);
      END_STATE();
    case 88:
      if (eof) ADVANCE(91);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 89:
      if (eof) ADVANCE(91);
      if (lookahead == '\n') SKIP(90)
      END_STATE();
    case 90:
      if (eof) ADVANCE(91);
      if (lookahead == '\n') SKIP(90)
      if (lookahead == '\r') SKIP(89)
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == '-') ADVANCE(104);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == 'B') ADVANCE(3);
      if (lookahead == 'C') ADVANCE(62);
      if (lookahead == 'D') ADVANCE(6);
      if (lookahead == 'E') ADVANCE(17);
      if (lookahead == 'F') ADVANCE(37);
      if (lookahead == 'G') ADVANCE(57);
      if (lookahead == 'I') ADVANCE(49);
      if (lookahead == 'J') ADVANCE(68);
      if (lookahead == 'O') ADVANCE(58);
      if (lookahead == 'Q') ADVANCE(83);
      if (lookahead == 'R') ADVANCE(18);
      if (lookahead == 'S') ADVANCE(29);
      if (lookahead == 'V') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_CREATE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_REPLACE);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_DISTRIBUTED);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_QUERY);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_FOR);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_GRAPH);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_RETURNS);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '(') ADVANCE(128);
      if (lookahead == '>') ADVANCE(129);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_name_token1);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_name_token2);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E') ADVANCE(70);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_INT);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_FLOAT);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_DOUBLE);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_STRING);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_BOOL);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_VERTEX);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_EDGE);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_JSONOBJECT);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_JSONARRAY);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_DATETIME);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_SET);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_BAG);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_FILE);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_DASH_LPAREN);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 90},
  [2] = {.lex_state = 90},
  [3] = {.lex_state = 90},
  [4] = {.lex_state = 90},
  [5] = {.lex_state = 90},
  [6] = {.lex_state = 90},
  [7] = {.lex_state = 90},
  [8] = {.lex_state = 90},
  [9] = {.lex_state = 90},
  [10] = {.lex_state = 90},
  [11] = {.lex_state = 90},
  [12] = {.lex_state = 90},
  [13] = {.lex_state = 90},
  [14] = {.lex_state = 90},
  [15] = {.lex_state = 90},
  [16] = {.lex_state = 90},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 90},
  [21] = {.lex_state = 90},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 90},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 90},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 90},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 90},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 90},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 90},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 90},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 90},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 90},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 90},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 90},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 90},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 90},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 90},
  [124] = {.lex_state = 90},
  [125] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_RETURNS] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_integer_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_name_token1] = ACTIONS(1),
    [aux_sym_name_token2] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_DASH_LPAREN] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(118),
    [sym_createQuery] = STATE(125),
    [anon_sym_CREATE] = ACTIONS(5),
    [anon_sym_] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(7), 1,
      anon_sym_RPAREN,
    ACTIONS(11), 1,
      anon_sym_VERTEX,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_FILE,
    STATE(31), 1,
      sym_parameterType,
    STATE(49), 1,
      sym_baseType,
    STATE(98), 1,
      sym_parameterList,
    ACTIONS(15), 2,
      anon_sym_SET,
      anon_sym_BAG,
    ACTIONS(9), 9,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [40] = 10,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(11), 1,
      anon_sym_VERTEX,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_FILE,
    ACTIONS(19), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      sym_parameterType,
    STATE(49), 1,
      sym_baseType,
    STATE(80), 1,
      sym_parameterList,
    ACTIONS(15), 2,
      anon_sym_SET,
      anon_sym_BAG,
    ACTIONS(9), 9,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [80] = 10,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(11), 1,
      anon_sym_VERTEX,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_FILE,
    ACTIONS(21), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      sym_parameterType,
    STATE(49), 1,
      sym_baseType,
    STATE(92), 1,
      sym_parameterList,
    ACTIONS(15), 2,
      anon_sym_SET,
      anon_sym_BAG,
    ACTIONS(9), 9,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [120] = 10,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(11), 1,
      anon_sym_VERTEX,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_FILE,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      sym_parameterType,
    STATE(49), 1,
      sym_baseType,
    STATE(88), 1,
      sym_parameterList,
    ACTIONS(15), 2,
      anon_sym_SET,
      anon_sym_BAG,
    ACTIONS(9), 9,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [160] = 8,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(11), 1,
      anon_sym_VERTEX,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_FILE,
    STATE(39), 1,
      sym_parameterType,
    STATE(49), 1,
      sym_baseType,
    ACTIONS(15), 2,
      anon_sym_SET,
      anon_sym_BAG,
    ACTIONS(9), 9,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [194] = 4,
    ACTIONS(11), 1,
      anon_sym_VERTEX,
    ACTIONS(25), 1,
      anon_sym_,
    STATE(83), 2,
      sym_baseType,
      sym_accumType,
    ACTIONS(9), 9,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [216] = 4,
    ACTIONS(11), 1,
      anon_sym_VERTEX,
    ACTIONS(25), 1,
      anon_sym_,
    STATE(95), 2,
      sym_baseType,
      sym_accumType,
    ACTIONS(9), 9,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [238] = 4,
    ACTIONS(11), 1,
      anon_sym_VERTEX,
    ACTIONS(25), 1,
      anon_sym_,
    STATE(121), 2,
      sym_baseType,
      sym_accumType,
    ACTIONS(9), 9,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [260] = 4,
    ACTIONS(11), 1,
      anon_sym_VERTEX,
    ACTIONS(25), 1,
      anon_sym_,
    STATE(96), 2,
      sym_baseType,
      sym_accumType,
    ACTIONS(9), 9,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [282] = 4,
    ACTIONS(11), 1,
      anon_sym_VERTEX,
    ACTIONS(25), 1,
      anon_sym_,
    STATE(117), 2,
      sym_baseType,
      sym_accumType,
    ACTIONS(9), 9,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [304] = 4,
    ACTIONS(11), 1,
      anon_sym_VERTEX,
    ACTIONS(25), 1,
      anon_sym_,
    STATE(116), 2,
      sym_baseType,
      sym_accumType,
    ACTIONS(9), 9,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [326] = 4,
    ACTIONS(11), 1,
      anon_sym_VERTEX,
    ACTIONS(25), 1,
      anon_sym_,
    STATE(111), 2,
      sym_baseType,
      sym_accumType,
    ACTIONS(9), 9,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [348] = 4,
    ACTIONS(11), 1,
      anon_sym_VERTEX,
    ACTIONS(25), 1,
      anon_sym_,
    STATE(101), 2,
      sym_baseType,
      sym_accumType,
    ACTIONS(9), 9,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [370] = 4,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(11), 1,
      anon_sym_VERTEX,
    STATE(81), 1,
      sym_baseType,
    ACTIONS(9), 9,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [391] = 4,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(11), 1,
      anon_sym_VERTEX,
    STATE(89), 1,
      sym_baseType,
    ACTIONS(9), 9,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [412] = 4,
    ACTIONS(3), 1,
      anon_sym_,
    STATE(18), 1,
      aux_sym_name_repeat1,
    ACTIONS(29), 4,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
      anon_sym__,
    ACTIONS(27), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_GT,
  [432] = 4,
    ACTIONS(3), 1,
      anon_sym_,
    STATE(18), 1,
      aux_sym_name_repeat1,
    ACTIONS(33), 4,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
      anon_sym__,
    ACTIONS(31), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_GT,
  [452] = 4,
    ACTIONS(3), 1,
      anon_sym_,
    STATE(17), 1,
      aux_sym_name_repeat1,
    ACTIONS(38), 4,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
      anon_sym__,
    ACTIONS(36), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_GT,
  [472] = 8,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(40), 1,
      anon_sym_DASH,
    ACTIONS(42), 1,
      aux_sym_integer_token1,
    ACTIONS(44), 1,
      anon_sym_DOT,
    STATE(38), 1,
      aux_sym_integer_repeat1,
    STATE(61), 1,
      sym_constant,
    STATE(68), 1,
      sym_numeric,
    STATE(67), 2,
      sym_integer,
      sym_real,
  [498] = 8,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(40), 1,
      anon_sym_DASH,
    ACTIONS(42), 1,
      aux_sym_integer_token1,
    ACTIONS(44), 1,
      anon_sym_DOT,
    STATE(38), 1,
      aux_sym_integer_repeat1,
    STATE(68), 1,
      sym_numeric,
    STATE(74), 1,
      sym_constant,
    STATE(67), 2,
      sym_integer,
      sym_real,
  [524] = 5,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(48), 1,
      aux_sym_name_token2,
    STATE(24), 1,
      aux_sym_name_repeat1,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      anon_sym_RETURNS,
    ACTIONS(46), 3,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      anon_sym__,
  [543] = 5,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(52), 1,
      aux_sym_name_token2,
    STATE(22), 1,
      aux_sym_name_repeat1,
    ACTIONS(36), 2,
      ts_builtin_sym_end,
      anon_sym_RETURNS,
    ACTIONS(50), 3,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      anon_sym__,
  [562] = 5,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(57), 1,
      aux_sym_name_token2,
    STATE(24), 1,
      aux_sym_name_repeat1,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      anon_sym_RETURNS,
    ACTIONS(54), 3,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      anon_sym__,
  [581] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(62), 1,
      anon_sym_LT,
    ACTIONS(60), 5,
      anon_sym_RPAREN,
      aux_sym_name_token1,
      aux_sym_name_token2,
      anon_sym__,
      anon_sym_GT,
  [595] = 4,
    ACTIONS(3), 1,
      anon_sym_,
    STATE(69), 1,
      sym_name,
    STATE(73), 1,
      sym_graphName,
    ACTIONS(64), 3,
      aux_sym_name_token1,
      aux_sym_name_token2,
      anon_sym__,
  [610] = 4,
    ACTIONS(3), 1,
      anon_sym_,
    STATE(97), 1,
      sym_queryName,
    STATE(113), 1,
      sym_name,
    ACTIONS(66), 3,
      aux_sym_name_token1,
      aux_sym_name_token2,
      anon_sym__,
  [625] = 4,
    ACTIONS(3), 1,
      anon_sym_,
    STATE(66), 1,
      sym_graphName,
    STATE(69), 1,
      sym_name,
    ACTIONS(64), 3,
      aux_sym_name_token1,
      aux_sym_name_token2,
      anon_sym__,
  [640] = 4,
    ACTIONS(3), 1,
      anon_sym_,
    STATE(112), 1,
      sym_queryName,
    STATE(113), 1,
      sym_name,
    ACTIONS(66), 3,
      aux_sym_name_token1,
      aux_sym_name_token2,
      anon_sym__,
  [655] = 4,
    ACTIONS(3), 1,
      anon_sym_,
    STATE(103), 1,
      sym_queryName,
    STATE(113), 1,
      sym_name,
    ACTIONS(66), 3,
      aux_sym_name_token1,
      aux_sym_name_token2,
      anon_sym__,
  [670] = 4,
    ACTIONS(3), 1,
      anon_sym_,
    STATE(44), 1,
      sym_paramName,
    STATE(58), 1,
      sym_name,
    ACTIONS(66), 3,
      aux_sym_name_token1,
      aux_sym_name_token2,
      anon_sym__,
  [685] = 4,
    ACTIONS(3), 1,
      anon_sym_,
    STATE(78), 1,
      sym_queryName,
    STATE(113), 1,
      sym_name,
    ACTIONS(66), 3,
      aux_sym_name_token1,
      aux_sym_name_token2,
      anon_sym__,
  [700] = 4,
    ACTIONS(3), 1,
      anon_sym_,
    STATE(69), 1,
      sym_name,
    STATE(75), 1,
      sym_graphName,
    ACTIONS(64), 3,
      aux_sym_name_token1,
      aux_sym_name_token2,
      anon_sym__,
  [715] = 4,
    ACTIONS(3), 1,
      anon_sym_,
    STATE(69), 1,
      sym_name,
    STATE(70), 1,
      sym_graphName,
    ACTIONS(64), 3,
      aux_sym_name_token1,
      aux_sym_name_token2,
      anon_sym__,
  [730] = 4,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(70), 1,
      aux_sym_integer_token1,
    STATE(35), 1,
      aux_sym_integer_repeat1,
    ACTIONS(68), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
  [745] = 4,
    ACTIONS(3), 1,
      anon_sym_,
    STATE(82), 1,
      sym_vertexType,
    STATE(85), 1,
      sym_name,
    ACTIONS(66), 3,
      aux_sym_name_token1,
      aux_sym_name_token2,
      anon_sym__,
  [760] = 4,
    ACTIONS(3), 1,
      anon_sym_,
    STATE(65), 1,
      sym_graphName,
    STATE(69), 1,
      sym_name,
    ACTIONS(64), 3,
      aux_sym_name_token1,
      aux_sym_name_token2,
      anon_sym__,
  [775] = 5,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(75), 1,
      aux_sym_integer_token1,
    ACTIONS(77), 1,
      anon_sym_DOT,
    STATE(35), 1,
      aux_sym_integer_repeat1,
    ACTIONS(73), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [792] = 4,
    ACTIONS(3), 1,
      anon_sym_,
    STATE(58), 1,
      sym_name,
    STATE(60), 1,
      sym_paramName,
    ACTIONS(66), 3,
      aux_sym_name_token1,
      aux_sym_name_token2,
      anon_sym__,
  [807] = 5,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(75), 1,
      aux_sym_integer_token1,
    ACTIONS(81), 1,
      anon_sym_DOT,
    STATE(35), 1,
      aux_sym_integer_repeat1,
    ACTIONS(79), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [824] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(83), 5,
      anon_sym_RPAREN,
      aux_sym_name_token1,
      aux_sym_name_token2,
      anon_sym__,
      anon_sym_GT,
  [835] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(60), 5,
      anon_sym_RPAREN,
      aux_sym_name_token1,
      aux_sym_name_token2,
      anon_sym__,
      anon_sym_GT,
  [846] = 4,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(75), 1,
      aux_sym_integer_token1,
    STATE(35), 1,
      aux_sym_integer_repeat1,
    ACTIONS(85), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [860] = 5,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    ACTIONS(89), 1,
      anon_sym_EQ,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    STATE(54), 1,
      aux_sym_parameterList_repeat1,
  [876] = 4,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(93), 1,
      aux_sym_integer_token1,
    STATE(46), 1,
      aux_sym_integer_repeat1,
    ACTIONS(85), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [890] = 4,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(75), 1,
      aux_sym_integer_token1,
    STATE(35), 1,
      aux_sym_integer_repeat1,
    ACTIONS(95), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [904] = 4,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(75), 1,
      aux_sym_integer_token1,
    STATE(35), 1,
      aux_sym_integer_repeat1,
    ACTIONS(97), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [918] = 4,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(99), 1,
      aux_sym_integer_token1,
    STATE(47), 1,
      aux_sym_integer_repeat1,
    ACTIONS(95), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [932] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(101), 3,
      aux_sym_name_token1,
      aux_sym_name_token2,
      anon_sym__,
  [941] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(103), 3,
      aux_sym_name_token1,
      aux_sym_name_token2,
      anon_sym__,
  [950] = 4,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(107), 1,
      anon_sym_FOR,
    ACTIONS(109), 1,
      anon_sym_RETURNS,
  [963] = 4,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(111), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      aux_sym_parameterList_repeat1,
  [976] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(113), 3,
      aux_sym_name_token1,
      aux_sym_name_token2,
      anon_sym__,
  [985] = 4,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(115), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      aux_sym_parameterList_repeat1,
  [998] = 4,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    ACTIONS(119), 1,
      anon_sym_FOR,
    ACTIONS(121), 1,
      anon_sym_RETURNS,
  [1011] = 4,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(123), 1,
      anon_sym_RPAREN,
    ACTIONS(125), 1,
      anon_sym_COMMA,
    STATE(56), 1,
      aux_sym_parameterList_repeat1,
  [1024] = 4,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    ACTIONS(130), 1,
      anon_sym_FOR,
    ACTIONS(132), 1,
      anon_sym_RETURNS,
  [1037] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(134), 3,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_COMMA,
  [1046] = 4,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(136), 1,
      anon_sym_OR,
    ACTIONS(138), 1,
      anon_sym_DISTRIBUTED,
    ACTIONS(140), 1,
      anon_sym_QUERY,
  [1059] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(144), 1,
      anon_sym_EQ,
    ACTIONS(142), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1070] = 4,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(146), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      aux_sym_parameterList_repeat1,
  [1083] = 4,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    ACTIONS(150), 1,
      anon_sym_FOR,
    ACTIONS(152), 1,
      anon_sym_RETURNS,
  [1096] = 4,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(154), 1,
      aux_sym_integer_token1,
    ACTIONS(156), 1,
      anon_sym_DOT,
    STATE(40), 1,
      aux_sym_integer_repeat1,
  [1109] = 4,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(158), 1,
      ts_builtin_sym_end,
    ACTIONS(160), 1,
      anon_sym_FOR,
    ACTIONS(162), 1,
      anon_sym_RETURNS,
  [1122] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 1,
      anon_sym_RETURNS,
  [1132] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
    ACTIONS(166), 1,
      anon_sym_RETURNS,
  [1142] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(168), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1150] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(170), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1158] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(172), 2,
      ts_builtin_sym_end,
      anon_sym_RETURNS,
  [1166] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 1,
      anon_sym_RETURNS,
  [1176] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(93), 1,
      aux_sym_integer_token1,
    STATE(46), 1,
      aux_sym_integer_repeat1,
  [1186] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(174), 1,
      anon_sym_DISTRIBUTED,
    ACTIONS(176), 1,
      anon_sym_QUERY,
  [1196] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
    ACTIONS(180), 1,
      anon_sym_RETURNS,
  [1206] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(182), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1214] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(184), 1,
      ts_builtin_sym_end,
    ACTIONS(186), 1,
      anon_sym_RETURNS,
  [1224] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(188), 1,
      aux_sym_integer_token1,
    STATE(43), 1,
      aux_sym_integer_repeat1,
  [1234] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
  [1241] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(190), 1,
      anon_sym_LPAREN,
  [1248] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
  [1255] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(194), 1,
      anon_sym_RPAREN,
  [1262] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(196), 1,
      anon_sym_GT,
  [1269] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(198), 1,
      anon_sym_GT,
  [1276] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(200), 1,
      anon_sym_RPAREN,
  [1283] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
  [1290] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(202), 1,
      anon_sym_GT,
  [1297] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
  [1304] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(206), 1,
      anon_sym_GRAPH,
  [1311] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(19), 1,
      anon_sym_RPAREN,
  [1318] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(208), 1,
      anon_sym_GT,
  [1325] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
  [1332] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(212), 1,
      anon_sym_GRAPH,
  [1339] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
  [1346] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(214), 1,
      anon_sym_GRAPH,
  [1353] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
  [1360] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(218), 1,
      anon_sym_RPAREN,
  [1367] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(220), 1,
      anon_sym_RPAREN,
  [1374] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
  [1381] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(21), 1,
      anon_sym_RPAREN,
  [1388] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(224), 1,
      anon_sym_LT,
  [1395] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(226), 1,
      anon_sym_GRAPH,
  [1402] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(228), 1,
      anon_sym_RPAREN,
  [1409] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(230), 1,
      anon_sym_GRAPH,
  [1416] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
  [1423] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(234), 1,
      anon_sym_LPAREN,
  [1430] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(184), 1,
      ts_builtin_sym_end,
  [1437] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(236), 1,
      anon_sym_QUERY,
  [1444] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
  [1451] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
  [1458] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
  [1465] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(242), 1,
      anon_sym_RPAREN,
  [1472] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(244), 1,
      anon_sym_RPAREN,
  [1479] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(246), 1,
      anon_sym_LPAREN,
  [1486] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(248), 1,
      anon_sym_LPAREN,
  [1493] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
  [1500] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
  [1507] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(254), 1,
      anon_sym_RPAREN,
  [1514] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(256), 1,
      anon_sym_RPAREN,
  [1521] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(258), 1,
      ts_builtin_sym_end,
  [1528] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(260), 1,
      ts_builtin_sym_end,
  [1535] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(262), 1,
      ts_builtin_sym_end,
  [1542] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(264), 1,
      anon_sym_RPAREN,
  [1549] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(266), 1,
      ts_builtin_sym_end,
  [1556] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(268), 1,
      anon_sym_QUERY,
  [1563] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(270), 1,
      anon_sym_REPLACE,
  [1570] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(272), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 80,
  [SMALL_STATE(5)] = 120,
  [SMALL_STATE(6)] = 160,
  [SMALL_STATE(7)] = 194,
  [SMALL_STATE(8)] = 216,
  [SMALL_STATE(9)] = 238,
  [SMALL_STATE(10)] = 260,
  [SMALL_STATE(11)] = 282,
  [SMALL_STATE(12)] = 304,
  [SMALL_STATE(13)] = 326,
  [SMALL_STATE(14)] = 348,
  [SMALL_STATE(15)] = 370,
  [SMALL_STATE(16)] = 391,
  [SMALL_STATE(17)] = 412,
  [SMALL_STATE(18)] = 432,
  [SMALL_STATE(19)] = 452,
  [SMALL_STATE(20)] = 472,
  [SMALL_STATE(21)] = 498,
  [SMALL_STATE(22)] = 524,
  [SMALL_STATE(23)] = 543,
  [SMALL_STATE(24)] = 562,
  [SMALL_STATE(25)] = 581,
  [SMALL_STATE(26)] = 595,
  [SMALL_STATE(27)] = 610,
  [SMALL_STATE(28)] = 625,
  [SMALL_STATE(29)] = 640,
  [SMALL_STATE(30)] = 655,
  [SMALL_STATE(31)] = 670,
  [SMALL_STATE(32)] = 685,
  [SMALL_STATE(33)] = 700,
  [SMALL_STATE(34)] = 715,
  [SMALL_STATE(35)] = 730,
  [SMALL_STATE(36)] = 745,
  [SMALL_STATE(37)] = 760,
  [SMALL_STATE(38)] = 775,
  [SMALL_STATE(39)] = 792,
  [SMALL_STATE(40)] = 807,
  [SMALL_STATE(41)] = 824,
  [SMALL_STATE(42)] = 835,
  [SMALL_STATE(43)] = 846,
  [SMALL_STATE(44)] = 860,
  [SMALL_STATE(45)] = 876,
  [SMALL_STATE(46)] = 890,
  [SMALL_STATE(47)] = 904,
  [SMALL_STATE(48)] = 918,
  [SMALL_STATE(49)] = 932,
  [SMALL_STATE(50)] = 941,
  [SMALL_STATE(51)] = 950,
  [SMALL_STATE(52)] = 963,
  [SMALL_STATE(53)] = 976,
  [SMALL_STATE(54)] = 985,
  [SMALL_STATE(55)] = 998,
  [SMALL_STATE(56)] = 1011,
  [SMALL_STATE(57)] = 1024,
  [SMALL_STATE(58)] = 1037,
  [SMALL_STATE(59)] = 1046,
  [SMALL_STATE(60)] = 1059,
  [SMALL_STATE(61)] = 1070,
  [SMALL_STATE(62)] = 1083,
  [SMALL_STATE(63)] = 1096,
  [SMALL_STATE(64)] = 1109,
  [SMALL_STATE(65)] = 1122,
  [SMALL_STATE(66)] = 1132,
  [SMALL_STATE(67)] = 1142,
  [SMALL_STATE(68)] = 1150,
  [SMALL_STATE(69)] = 1158,
  [SMALL_STATE(70)] = 1166,
  [SMALL_STATE(71)] = 1176,
  [SMALL_STATE(72)] = 1186,
  [SMALL_STATE(73)] = 1196,
  [SMALL_STATE(74)] = 1206,
  [SMALL_STATE(75)] = 1214,
  [SMALL_STATE(76)] = 1224,
  [SMALL_STATE(77)] = 1234,
  [SMALL_STATE(78)] = 1241,
  [SMALL_STATE(79)] = 1248,
  [SMALL_STATE(80)] = 1255,
  [SMALL_STATE(81)] = 1262,
  [SMALL_STATE(82)] = 1269,
  [SMALL_STATE(83)] = 1276,
  [SMALL_STATE(84)] = 1283,
  [SMALL_STATE(85)] = 1290,
  [SMALL_STATE(86)] = 1297,
  [SMALL_STATE(87)] = 1304,
  [SMALL_STATE(88)] = 1311,
  [SMALL_STATE(89)] = 1318,
  [SMALL_STATE(90)] = 1325,
  [SMALL_STATE(91)] = 1332,
  [SMALL_STATE(92)] = 1339,
  [SMALL_STATE(93)] = 1346,
  [SMALL_STATE(94)] = 1353,
  [SMALL_STATE(95)] = 1360,
  [SMALL_STATE(96)] = 1367,
  [SMALL_STATE(97)] = 1374,
  [SMALL_STATE(98)] = 1381,
  [SMALL_STATE(99)] = 1388,
  [SMALL_STATE(100)] = 1395,
  [SMALL_STATE(101)] = 1402,
  [SMALL_STATE(102)] = 1409,
  [SMALL_STATE(103)] = 1416,
  [SMALL_STATE(104)] = 1423,
  [SMALL_STATE(105)] = 1430,
  [SMALL_STATE(106)] = 1437,
  [SMALL_STATE(107)] = 1444,
  [SMALL_STATE(108)] = 1451,
  [SMALL_STATE(109)] = 1458,
  [SMALL_STATE(110)] = 1465,
  [SMALL_STATE(111)] = 1472,
  [SMALL_STATE(112)] = 1479,
  [SMALL_STATE(113)] = 1486,
  [SMALL_STATE(114)] = 1493,
  [SMALL_STATE(115)] = 1500,
  [SMALL_STATE(116)] = 1507,
  [SMALL_STATE(117)] = 1514,
  [SMALL_STATE(118)] = 1521,
  [SMALL_STATE(119)] = 1528,
  [SMALL_STATE(120)] = 1535,
  [SMALL_STATE(121)] = 1542,
  [SMALL_STATE(122)] = 1549,
  [SMALL_STATE(123)] = 1556,
  [SMALL_STATE(124)] = 1563,
  [SMALL_STATE(125)] = 1570,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(18),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(24),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(24),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseType, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2), SHIFT_REPEAT(35),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseType, 4),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterList, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 4),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterType, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterType, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createQuery, 9),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterList, 5),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterType, 4),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterList, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createQuery, 8),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameterList_repeat1, 2),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameterList_repeat1, 2), SHIFT_REPEAT(6),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createQuery, 7),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paramName, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameterList_repeat1, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterList, 4),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createQuery, 6),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createQuery, 5),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createQuery, 10),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphName, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createQuery, 12),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameterList_repeat1, 5),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createQuery, 11),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertexType, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumType, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryName, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createQuery, 13),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [258] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createQuery, 14),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createQuery, 15),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createQuery, 16),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
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
