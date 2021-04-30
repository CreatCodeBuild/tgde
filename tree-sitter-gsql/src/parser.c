#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 721
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 223
#define ALIAS_COUNT 4
#define TOKEN_COUNT 109
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 19
#define PRODUCTION_ID_COUNT 5

enum {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  aux_sym_createSignature_token1 = 3,
  aux_sym_createSignature_token2 = 4,
  aux_sym_createSignature_token3 = 5,
  aux_sym_createSignature_token4 = 6,
  anon_sym_QUERY = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  anon_sym_FOR = 10,
  anon_sym_GRAPH = 11,
  anon_sym_API = 12,
  anon_sym_SYNTAX = 13,
  anon_sym_RETURNS = 14,
  anon_sym_EQ = 15,
  anon_sym_COMMA = 16,
  anon_sym_SEMI = 17,
  aux_sym_typedef_token1 = 18,
  aux_sym_typedef_token2 = 19,
  anon_sym_LT = 20,
  anon_sym_GT = 21,
  aux_sym_constant_token1 = 22,
  aux_sym_constant_token2 = 23,
  anon_sym_STAR = 24,
  anon_sym_SLASH = 25,
  anon_sym_PERCENT = 26,
  anon_sym_PLUS = 27,
  anon_sym_DASH = 28,
  anon_sym_LT_LT = 29,
  anon_sym_GT_GT = 30,
  anon_sym_AMP = 31,
  anon_sym_PIPE = 32,
  aux_sym_condition_token1 = 33,
  aux_sym_condition_token2 = 34,
  aux_sym_condition_token3 = 35,
  aux_sym_condition_token4 = 36,
  anon_sym_AND = 37,
  anon_sym_OR = 38,
  anon_sym_LT_EQ = 39,
  anon_sym_GT_EQ = 40,
  anon_sym_EQ_EQ = 41,
  anon_sym_BANG_EQ = 42,
  sym_comment = 43,
  aux_sym_accumDeclStmt_token1 = 44,
  anon_sym_AT = 45,
  anon_sym_AT_AT = 46,
  aux_sym_accumType_token1 = 47,
  aux_sym_accumType_token2 = 48,
  aux_sym_accumType_token3 = 49,
  aux_sym_accumType_token4 = 50,
  aux_sym_accumType_token5 = 51,
  aux_sym_accumType_token6 = 52,
  aux_sym_accumType_token7 = 53,
  aux_sym_accumType_token8 = 54,
  aux_sym_accumType_token9 = 55,
  aux_sym_accumType_token10 = 56,
  aux_sym_accumType_token11 = 57,
  aux_sym_accumType_token12 = 58,
  aux_sym_accumType_token13 = 59,
  aux_sym_accumType_token14 = 60,
  aux_sym_elementType_token1 = 61,
  anon_sym_PLUS_EQ = 62,
  anon_sym_DOT = 63,
  aux_sym_queryBodyIfStmt_token1 = 64,
  aux_sym_queryBodyIfStmt_token2 = 65,
  aux_sym_queryBodyIfStmt_token3 = 66,
  aux_sym_queryBodyIfStmt_token4 = 67,
  aux_sym_fileDeclStmt_token1 = 68,
  aux_sym_simpleSet_token1 = 69,
  aux_sym_simpleSet_token2 = 70,
  aux_sym_simpleSet_token3 = 71,
  anon_sym__ = 72,
  aux_sym_seed_token1 = 73,
  anon_sym_DOT_STAR = 74,
  aux_sym_seed_token2 = 75,
  aux_sym_selectVertParams_token1 = 76,
  anon_sym_DOLLAR = 77,
  anon_sym_SQUOTE = 78,
  aux_sym_printStmt_token1 = 79,
  aux_sym_printStmt_token2 = 80,
  aux_sym_printStmt_token3 = 81,
  aux_sym_printExpr_token1 = 82,
  anon_sym_LBRACK = 83,
  anon_sym_RBRACK = 84,
  aux_sym_returnStmt_token1 = 85,
  aux_sym_gsqlSelectClause_token1 = 86,
  aux_sym_fromClause_token1 = 87,
  anon_sym_DASH_GT = 88,
  anon_sym_COLON = 89,
  anon_sym_WHERE = 90,
  aux_sym_accumClause_token1 = 91,
  aux_sym_postAccumClause_token1 = 92,
  aux_sym_perClauseV2_token1 = 93,
  anon_sym_DQUOTE = 94,
  aux_sym_stringLiteral_token1 = 95,
  sym_escape_sequence = 96,
  aux_sym_integer_token1 = 97,
  aux_sym_name_token1 = 98,
  aux_sym_name_token2 = 99,
  aux_sym_baseType_token1 = 100,
  aux_sym_baseType_token2 = 101,
  aux_sym_baseType_token3 = 102,
  aux_sym_baseType_token4 = 103,
  aux_sym_baseType_token5 = 104,
  aux_sym_baseType_token6 = 105,
  anon_sym_SET = 106,
  anon_sym_BAG = 107,
  anon_sym_FILE = 108,
  sym_source_file = 109,
  sym_createQuery = 110,
  sym_createSignature = 111,
  sym_returns = 112,
  sym_parameterList = 113,
  sym_syntaxName = 114,
  sym_queryBody = 115,
  sym_typedefs = 116,
  sym_typedef = 117,
  sym_tupleFields = 118,
  sym_declStmts = 119,
  sym_declStmt = 120,
  sym_queryBodyStmts = 121,
  sym_queryBodyStmt = 122,
  sym_constant = 123,
  sym_mathOperator = 124,
  sym_condition = 125,
  sym_comparisonOperator = 126,
  sym_pathPattern = 127,
  sym_pathEdgePattern = 128,
  sym_atomicEdgePattern = 129,
  sym_accumDeclStmt = 130,
  sym_localAccumName = 131,
  sym_globalAccumName = 132,
  sym_accumType = 133,
  sym_elementType = 134,
  sym_gAccumAccumStmt = 135,
  sym_assignStmt = 136,
  sym_argList = 137,
  sym_queryBodyIfStmt = 138,
  sym_simpleSize = 139,
  sym_baseDeclStmt = 140,
  sym_fileDeclStmt = 141,
  sym_fileVar = 142,
  sym_vSetVarDeclStmt = 143,
  sym_simpleSet = 144,
  sym_seedSet = 145,
  sym_seed = 146,
  sym_selectVertParams = 147,
  sym_columnId = 148,
  sym_expr = 149,
  sym_setBagExpr = 150,
  sym_printStmt = 151,
  sym_printExpr = 152,
  sym_vExprSet = 153,
  sym_vSetProj = 154,
  sym_jsonKey = 155,
  sym_returnStmt = 156,
  sym_selectStmt = 157,
  sym_gsqlSelectBlock = 158,
  sym_gsqlSelectClause = 159,
  sym_tableName = 160,
  sym_fromClause = 161,
  sym_stepEdgeSet = 162,
  sym_stepVertexSet = 163,
  sym_alias = 164,
  sym_vertexAlias = 165,
  sym_edgeAlias = 166,
  sym_stepEdgeTypes = 167,
  sym_atomicEdgeType = 168,
  sym_edgeSetType = 169,
  sym_stepVertexTypes = 170,
  sym_atomicVertexType = 171,
  sym_vertexSetType = 172,
  sym_whereClause = 173,
  sym_accumClause = 174,
  sym_postAccumClause = 175,
  sym_perClauseV2 = 176,
  sym_dmlSubStmtList = 177,
  sym_dmlSubStmt = 178,
  sym_stringLiteral = 179,
  sym_integer = 180,
  sym_real = 181,
  sym_numeric = 182,
  sym_name = 183,
  sym_graphName = 184,
  sym_queryName = 185,
  sym_paramName = 186,
  sym_vertexType = 187,
  sym_edgeType = 188,
  sym_accumName = 189,
  sym_vertexSetName = 190,
  sym_attrName = 191,
  sym_varName = 192,
  sym_tupleType = 193,
  sym_fieldName = 194,
  sym_filePath = 195,
  sym_type = 196,
  sym_baseType = 197,
  sym_parameterType = 198,
  aux_sym_source_file_repeat1 = 199,
  aux_sym_parameterList_repeat1 = 200,
  aux_sym_typedefs_repeat1 = 201,
  aux_sym_tupleFields_repeat1 = 202,
  aux_sym_declStmts_repeat1 = 203,
  aux_sym_queryBodyStmts_repeat1 = 204,
  aux_sym_pathPattern_repeat1 = 205,
  aux_sym_accumDeclStmt_repeat1 = 206,
  aux_sym_accumType_repeat1 = 207,
  aux_sym_argList_repeat1 = 208,
  aux_sym_queryBodyIfStmt_repeat1 = 209,
  aux_sym_baseDeclStmt_repeat1 = 210,
  aux_sym_seedSet_repeat1 = 211,
  aux_sym_printStmt_repeat1 = 212,
  aux_sym_vExprSet_repeat1 = 213,
  aux_sym_gsqlSelectBlock_repeat1 = 214,
  aux_sym_fromClause_repeat1 = 215,
  aux_sym_stepEdgeTypes_repeat1 = 216,
  aux_sym_stepVertexTypes_repeat1 = 217,
  aux_sym_perClauseV2_repeat1 = 218,
  aux_sym_dmlSubStmtList_repeat1 = 219,
  aux_sym_stringLiteral_repeat1 = 220,
  aux_sym_integer_repeat1 = 221,
  aux_sym_name_repeat1 = 222,
  anon_alias_sym_DOUBLE = 223,
  anon_alias_sym_FLOAT = 224,
  anon_alias_sym_INT = 225,
  anon_alias_sym_string = 226,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym_createSignature_token1] = "create",
  [aux_sym_createSignature_token2] = "OR",
  [aux_sym_createSignature_token3] = "REPLACE",
  [aux_sym_createSignature_token4] = "DISTRIBUTED",
  [anon_sym_QUERY] = "QUERY",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_FOR] = "FOR",
  [anon_sym_GRAPH] = "GRAPH",
  [anon_sym_API] = "API",
  [anon_sym_SYNTAX] = "SYNTAX",
  [anon_sym_RETURNS] = "RETURNS",
  [anon_sym_EQ] = "=",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [aux_sym_typedef_token1] = "TYPEDEF",
  [aux_sym_typedef_token2] = "TUPLE",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [aux_sym_constant_token1] = "TRUE",
  [aux_sym_constant_token2] = "FALSE",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [aux_sym_condition_token1] = "NOT",
  [aux_sym_condition_token2] = "IN",
  [aux_sym_condition_token3] = "IS",
  [aux_sym_condition_token4] = "NULL",
  [anon_sym_AND] = "AND",
  [anon_sym_OR] = "OR",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [sym_comment] = "comment",
  [aux_sym_accumDeclStmt_token1] = "STATIC",
  [anon_sym_AT] = "@",
  [anon_sym_AT_AT] = "@@",
  [aux_sym_accumType_token1] = "SumAccum",
  [aux_sym_accumType_token2] = "int",
  [aux_sym_accumType_token3] = "float",
  [aux_sym_accumType_token4] = "double",
  [aux_sym_accumType_token5] = "STRING",
  [aux_sym_accumType_token6] = "string compress",
  [aux_sym_accumType_token7] = "OrAccum",
  [aux_sym_accumType_token8] = "MapAccum",
  [aux_sym_accumType_token9] = "MaxAccum",
  [aux_sym_accumType_token10] = "HeapAccum",
  [aux_sym_accumType_token11] = "ASC",
  [aux_sym_accumType_token12] = "DESC",
  [aux_sym_accumType_token13] = "ListAccum",
  [aux_sym_accumType_token14] = "SetAccum",
  [aux_sym_elementType_token1] = "COMPRESS",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DOT] = ".",
  [aux_sym_queryBodyIfStmt_token1] = "IF",
  [aux_sym_queryBodyIfStmt_token2] = "THEN",
  [aux_sym_queryBodyIfStmt_token3] = "ELSE",
  [aux_sym_queryBodyIfStmt_token4] = "END",
  [aux_sym_fileDeclStmt_token1] = "FILE",
  [aux_sym_simpleSet_token1] = "UNION",
  [aux_sym_simpleSet_token2] = "INTERSECT",
  [aux_sym_simpleSet_token3] = "MINUS",
  [anon_sym__] = "_",
  [aux_sym_seed_token1] = "ANY",
  [anon_sym_DOT_STAR] = ".*",
  [aux_sym_seed_token2] = "SelectVertex",
  [aux_sym_selectVertParams_token1] = "FILTER",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_printStmt_token1] = "PRINT",
  [aux_sym_printStmt_token2] = "WHERE",
  [aux_sym_printStmt_token3] = "TO_CSV",
  [aux_sym_printExpr_token1] = "AS",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym_returnStmt_token1] = "return",
  [aux_sym_gsqlSelectClause_token1] = "SELECT",
  [aux_sym_fromClause_token1] = "from",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_COLON] = ":",
  [anon_sym_WHERE] = "WHERE",
  [aux_sym_accumClause_token1] = "ACCUM",
  [aux_sym_postAccumClause_token1] = "POST-ACCUM",
  [aux_sym_perClauseV2_token1] = "PER",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_stringLiteral_token1] = "stringLiteral_token1",
  [sym_escape_sequence] = "escape_sequence",
  [aux_sym_integer_token1] = "integer_token1",
  [aux_sym_name_token1] = "name_token1",
  [aux_sym_name_token2] = "name_token2",
  [aux_sym_baseType_token1] = "BOOL",
  [aux_sym_baseType_token2] = "VERTEX",
  [aux_sym_baseType_token3] = "EDGE",
  [aux_sym_baseType_token4] = "JSONOBJECT",
  [aux_sym_baseType_token5] = "JSONARRAY",
  [aux_sym_baseType_token6] = "DATETIME",
  [anon_sym_SET] = "SET",
  [anon_sym_BAG] = "BAG",
  [anon_sym_FILE] = "FILE",
  [sym_source_file] = "source_file",
  [sym_createQuery] = "createQuery",
  [sym_createSignature] = "createSignature",
  [sym_returns] = "returns",
  [sym_parameterList] = "parameterList",
  [sym_syntaxName] = "syntaxName",
  [sym_queryBody] = "queryBody",
  [sym_typedefs] = "typedefs",
  [sym_typedef] = "typedef",
  [sym_tupleFields] = "tupleFields",
  [sym_declStmts] = "declStmts",
  [sym_declStmt] = "declStmt",
  [sym_queryBodyStmts] = "queryBodyStmts",
  [sym_queryBodyStmt] = "queryBodyStmt",
  [sym_constant] = "constant",
  [sym_mathOperator] = "mathOperator",
  [sym_condition] = "condition",
  [sym_comparisonOperator] = "comparisonOperator",
  [sym_pathPattern] = "pathPattern",
  [sym_pathEdgePattern] = "pathEdgePattern",
  [sym_atomicEdgePattern] = "atomicEdgePattern",
  [sym_accumDeclStmt] = "accumDeclStmt",
  [sym_localAccumName] = "localAccumName",
  [sym_globalAccumName] = "globalAccumName",
  [sym_accumType] = "accumType",
  [sym_elementType] = "elementType",
  [sym_gAccumAccumStmt] = "gAccumAccumStmt",
  [sym_assignStmt] = "assignStmt",
  [sym_argList] = "argList",
  [sym_queryBodyIfStmt] = "queryBodyIfStmt",
  [sym_simpleSize] = "simpleSize",
  [sym_baseDeclStmt] = "baseDeclStmt",
  [sym_fileDeclStmt] = "fileDeclStmt",
  [sym_fileVar] = "fileVar",
  [sym_vSetVarDeclStmt] = "vSetVarDeclStmt",
  [sym_simpleSet] = "simpleSet",
  [sym_seedSet] = "seedSet",
  [sym_seed] = "seed",
  [sym_selectVertParams] = "selectVertParams",
  [sym_columnId] = "columnId",
  [sym_expr] = "expr",
  [sym_setBagExpr] = "setBagExpr",
  [sym_printStmt] = "printStmt",
  [sym_printExpr] = "printExpr",
  [sym_vExprSet] = "vExprSet",
  [sym_vSetProj] = "vSetProj",
  [sym_jsonKey] = "jsonKey",
  [sym_returnStmt] = "returnStmt",
  [sym_selectStmt] = "selectStmt",
  [sym_gsqlSelectBlock] = "gsqlSelectBlock",
  [sym_gsqlSelectClause] = "gsqlSelectClause",
  [sym_tableName] = "tableName",
  [sym_fromClause] = "fromClause",
  [sym_stepEdgeSet] = "stepEdgeSet",
  [sym_stepVertexSet] = "stepVertexSet",
  [sym_alias] = "alias",
  [sym_vertexAlias] = "vertexAlias",
  [sym_edgeAlias] = "edgeAlias",
  [sym_stepEdgeTypes] = "stepEdgeTypes",
  [sym_atomicEdgeType] = "atomicEdgeType",
  [sym_edgeSetType] = "edgeSetType",
  [sym_stepVertexTypes] = "stepVertexTypes",
  [sym_atomicVertexType] = "atomicVertexType",
  [sym_vertexSetType] = "vertexSetType",
  [sym_whereClause] = "whereClause",
  [sym_accumClause] = "accumClause",
  [sym_postAccumClause] = "postAccumClause",
  [sym_perClauseV2] = "perClauseV2",
  [sym_dmlSubStmtList] = "dmlSubStmtList",
  [sym_dmlSubStmt] = "dmlSubStmt",
  [sym_stringLiteral] = "stringLiteral",
  [sym_integer] = "integer",
  [sym_real] = "real",
  [sym_numeric] = "numeric",
  [sym_name] = "name",
  [sym_graphName] = "graphName",
  [sym_queryName] = "queryName",
  [sym_paramName] = "paramName",
  [sym_vertexType] = "vertexType",
  [sym_edgeType] = "edgeType",
  [sym_accumName] = "accumName",
  [sym_vertexSetName] = "vertexSetName",
  [sym_attrName] = "attrName",
  [sym_varName] = "varName",
  [sym_tupleType] = "tupleType",
  [sym_fieldName] = "fieldName",
  [sym_filePath] = "filePath",
  [sym_type] = "type",
  [sym_baseType] = "baseType",
  [sym_parameterType] = "parameterType",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameterList_repeat1] = "parameterList_repeat1",
  [aux_sym_typedefs_repeat1] = "typedefs_repeat1",
  [aux_sym_tupleFields_repeat1] = "tupleFields_repeat1",
  [aux_sym_declStmts_repeat1] = "declStmts_repeat1",
  [aux_sym_queryBodyStmts_repeat1] = "queryBodyStmts_repeat1",
  [aux_sym_pathPattern_repeat1] = "pathPattern_repeat1",
  [aux_sym_accumDeclStmt_repeat1] = "accumDeclStmt_repeat1",
  [aux_sym_accumType_repeat1] = "accumType_repeat1",
  [aux_sym_argList_repeat1] = "argList_repeat1",
  [aux_sym_queryBodyIfStmt_repeat1] = "queryBodyIfStmt_repeat1",
  [aux_sym_baseDeclStmt_repeat1] = "baseDeclStmt_repeat1",
  [aux_sym_seedSet_repeat1] = "seedSet_repeat1",
  [aux_sym_printStmt_repeat1] = "printStmt_repeat1",
  [aux_sym_vExprSet_repeat1] = "vExprSet_repeat1",
  [aux_sym_gsqlSelectBlock_repeat1] = "gsqlSelectBlock_repeat1",
  [aux_sym_fromClause_repeat1] = "fromClause_repeat1",
  [aux_sym_stepEdgeTypes_repeat1] = "stepEdgeTypes_repeat1",
  [aux_sym_stepVertexTypes_repeat1] = "stepVertexTypes_repeat1",
  [aux_sym_perClauseV2_repeat1] = "perClauseV2_repeat1",
  [aux_sym_dmlSubStmtList_repeat1] = "dmlSubStmtList_repeat1",
  [aux_sym_stringLiteral_repeat1] = "stringLiteral_repeat1",
  [aux_sym_integer_repeat1] = "integer_repeat1",
  [aux_sym_name_repeat1] = "name_repeat1",
  [anon_alias_sym_DOUBLE] = "DOUBLE",
  [anon_alias_sym_FLOAT] = "FLOAT",
  [anon_alias_sym_INT] = "INT",
  [anon_alias_sym_string] = "string",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_createSignature_token1] = aux_sym_createSignature_token1,
  [aux_sym_createSignature_token2] = anon_sym_OR,
  [aux_sym_createSignature_token3] = aux_sym_createSignature_token3,
  [aux_sym_createSignature_token4] = aux_sym_createSignature_token4,
  [anon_sym_QUERY] = anon_sym_QUERY,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_FOR] = anon_sym_FOR,
  [anon_sym_GRAPH] = anon_sym_GRAPH,
  [anon_sym_API] = anon_sym_API,
  [anon_sym_SYNTAX] = anon_sym_SYNTAX,
  [anon_sym_RETURNS] = anon_sym_RETURNS,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_typedef_token1] = aux_sym_typedef_token1,
  [aux_sym_typedef_token2] = aux_sym_typedef_token2,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [aux_sym_constant_token1] = aux_sym_constant_token1,
  [aux_sym_constant_token2] = aux_sym_constant_token2,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [aux_sym_condition_token1] = aux_sym_condition_token1,
  [aux_sym_condition_token2] = aux_sym_condition_token2,
  [aux_sym_condition_token3] = aux_sym_condition_token3,
  [aux_sym_condition_token4] = aux_sym_condition_token4,
  [anon_sym_AND] = anon_sym_AND,
  [anon_sym_OR] = anon_sym_OR,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [sym_comment] = sym_comment,
  [aux_sym_accumDeclStmt_token1] = aux_sym_accumDeclStmt_token1,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_AT_AT] = anon_sym_AT_AT,
  [aux_sym_accumType_token1] = aux_sym_accumType_token1,
  [aux_sym_accumType_token2] = aux_sym_accumType_token2,
  [aux_sym_accumType_token3] = aux_sym_accumType_token3,
  [aux_sym_accumType_token4] = aux_sym_accumType_token4,
  [aux_sym_accumType_token5] = aux_sym_accumType_token5,
  [aux_sym_accumType_token6] = aux_sym_accumType_token6,
  [aux_sym_accumType_token7] = aux_sym_accumType_token7,
  [aux_sym_accumType_token8] = aux_sym_accumType_token8,
  [aux_sym_accumType_token9] = aux_sym_accumType_token9,
  [aux_sym_accumType_token10] = aux_sym_accumType_token10,
  [aux_sym_accumType_token11] = aux_sym_accumType_token11,
  [aux_sym_accumType_token12] = aux_sym_accumType_token12,
  [aux_sym_accumType_token13] = aux_sym_accumType_token13,
  [aux_sym_accumType_token14] = aux_sym_accumType_token14,
  [aux_sym_elementType_token1] = aux_sym_elementType_token1,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_queryBodyIfStmt_token1] = aux_sym_queryBodyIfStmt_token1,
  [aux_sym_queryBodyIfStmt_token2] = aux_sym_queryBodyIfStmt_token2,
  [aux_sym_queryBodyIfStmt_token3] = aux_sym_queryBodyIfStmt_token3,
  [aux_sym_queryBodyIfStmt_token4] = aux_sym_queryBodyIfStmt_token4,
  [aux_sym_fileDeclStmt_token1] = anon_sym_FILE,
  [aux_sym_simpleSet_token1] = aux_sym_simpleSet_token1,
  [aux_sym_simpleSet_token2] = aux_sym_simpleSet_token2,
  [aux_sym_simpleSet_token3] = aux_sym_simpleSet_token3,
  [anon_sym__] = anon_sym__,
  [aux_sym_seed_token1] = aux_sym_seed_token1,
  [anon_sym_DOT_STAR] = anon_sym_DOT_STAR,
  [aux_sym_seed_token2] = aux_sym_seed_token2,
  [aux_sym_selectVertParams_token1] = aux_sym_selectVertParams_token1,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_printStmt_token1] = aux_sym_printStmt_token1,
  [aux_sym_printStmt_token2] = anon_sym_WHERE,
  [aux_sym_printStmt_token3] = aux_sym_printStmt_token3,
  [aux_sym_printExpr_token1] = aux_sym_printExpr_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_returnStmt_token1] = aux_sym_returnStmt_token1,
  [aux_sym_gsqlSelectClause_token1] = aux_sym_gsqlSelectClause_token1,
  [aux_sym_fromClause_token1] = aux_sym_fromClause_token1,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_WHERE] = anon_sym_WHERE,
  [aux_sym_accumClause_token1] = aux_sym_accumClause_token1,
  [aux_sym_postAccumClause_token1] = aux_sym_postAccumClause_token1,
  [aux_sym_perClauseV2_token1] = aux_sym_perClauseV2_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_stringLiteral_token1] = aux_sym_stringLiteral_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [aux_sym_integer_token1] = aux_sym_integer_token1,
  [aux_sym_name_token1] = aux_sym_name_token1,
  [aux_sym_name_token2] = aux_sym_name_token2,
  [aux_sym_baseType_token1] = aux_sym_baseType_token1,
  [aux_sym_baseType_token2] = aux_sym_baseType_token2,
  [aux_sym_baseType_token3] = aux_sym_baseType_token3,
  [aux_sym_baseType_token4] = aux_sym_baseType_token4,
  [aux_sym_baseType_token5] = aux_sym_baseType_token5,
  [aux_sym_baseType_token6] = aux_sym_baseType_token6,
  [anon_sym_SET] = anon_sym_SET,
  [anon_sym_BAG] = anon_sym_BAG,
  [anon_sym_FILE] = anon_sym_FILE,
  [sym_source_file] = sym_source_file,
  [sym_createQuery] = sym_createQuery,
  [sym_createSignature] = sym_createSignature,
  [sym_returns] = sym_returns,
  [sym_parameterList] = sym_parameterList,
  [sym_syntaxName] = sym_syntaxName,
  [sym_queryBody] = sym_queryBody,
  [sym_typedefs] = sym_typedefs,
  [sym_typedef] = sym_typedef,
  [sym_tupleFields] = sym_tupleFields,
  [sym_declStmts] = sym_declStmts,
  [sym_declStmt] = sym_declStmt,
  [sym_queryBodyStmts] = sym_queryBodyStmts,
  [sym_queryBodyStmt] = sym_queryBodyStmt,
  [sym_constant] = sym_constant,
  [sym_mathOperator] = sym_mathOperator,
  [sym_condition] = sym_condition,
  [sym_comparisonOperator] = sym_comparisonOperator,
  [sym_pathPattern] = sym_pathPattern,
  [sym_pathEdgePattern] = sym_pathEdgePattern,
  [sym_atomicEdgePattern] = sym_atomicEdgePattern,
  [sym_accumDeclStmt] = sym_accumDeclStmt,
  [sym_localAccumName] = sym_localAccumName,
  [sym_globalAccumName] = sym_globalAccumName,
  [sym_accumType] = sym_accumType,
  [sym_elementType] = sym_elementType,
  [sym_gAccumAccumStmt] = sym_gAccumAccumStmt,
  [sym_assignStmt] = sym_assignStmt,
  [sym_argList] = sym_argList,
  [sym_queryBodyIfStmt] = sym_queryBodyIfStmt,
  [sym_simpleSize] = sym_simpleSize,
  [sym_baseDeclStmt] = sym_baseDeclStmt,
  [sym_fileDeclStmt] = sym_fileDeclStmt,
  [sym_fileVar] = sym_fileVar,
  [sym_vSetVarDeclStmt] = sym_vSetVarDeclStmt,
  [sym_simpleSet] = sym_simpleSet,
  [sym_seedSet] = sym_seedSet,
  [sym_seed] = sym_seed,
  [sym_selectVertParams] = sym_selectVertParams,
  [sym_columnId] = sym_columnId,
  [sym_expr] = sym_expr,
  [sym_setBagExpr] = sym_setBagExpr,
  [sym_printStmt] = sym_printStmt,
  [sym_printExpr] = sym_printExpr,
  [sym_vExprSet] = sym_vExprSet,
  [sym_vSetProj] = sym_vSetProj,
  [sym_jsonKey] = sym_jsonKey,
  [sym_returnStmt] = sym_returnStmt,
  [sym_selectStmt] = sym_selectStmt,
  [sym_gsqlSelectBlock] = sym_gsqlSelectBlock,
  [sym_gsqlSelectClause] = sym_gsqlSelectClause,
  [sym_tableName] = sym_tableName,
  [sym_fromClause] = sym_fromClause,
  [sym_stepEdgeSet] = sym_stepEdgeSet,
  [sym_stepVertexSet] = sym_stepVertexSet,
  [sym_alias] = sym_alias,
  [sym_vertexAlias] = sym_vertexAlias,
  [sym_edgeAlias] = sym_edgeAlias,
  [sym_stepEdgeTypes] = sym_stepEdgeTypes,
  [sym_atomicEdgeType] = sym_atomicEdgeType,
  [sym_edgeSetType] = sym_edgeSetType,
  [sym_stepVertexTypes] = sym_stepVertexTypes,
  [sym_atomicVertexType] = sym_atomicVertexType,
  [sym_vertexSetType] = sym_vertexSetType,
  [sym_whereClause] = sym_whereClause,
  [sym_accumClause] = sym_accumClause,
  [sym_postAccumClause] = sym_postAccumClause,
  [sym_perClauseV2] = sym_perClauseV2,
  [sym_dmlSubStmtList] = sym_dmlSubStmtList,
  [sym_dmlSubStmt] = sym_dmlSubStmt,
  [sym_stringLiteral] = sym_stringLiteral,
  [sym_integer] = sym_integer,
  [sym_real] = sym_real,
  [sym_numeric] = sym_numeric,
  [sym_name] = sym_name,
  [sym_graphName] = sym_graphName,
  [sym_queryName] = sym_queryName,
  [sym_paramName] = sym_paramName,
  [sym_vertexType] = sym_vertexType,
  [sym_edgeType] = sym_edgeType,
  [sym_accumName] = sym_accumName,
  [sym_vertexSetName] = sym_vertexSetName,
  [sym_attrName] = sym_attrName,
  [sym_varName] = sym_varName,
  [sym_tupleType] = sym_tupleType,
  [sym_fieldName] = sym_fieldName,
  [sym_filePath] = sym_filePath,
  [sym_type] = sym_type,
  [sym_baseType] = sym_baseType,
  [sym_parameterType] = sym_parameterType,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameterList_repeat1] = aux_sym_parameterList_repeat1,
  [aux_sym_typedefs_repeat1] = aux_sym_typedefs_repeat1,
  [aux_sym_tupleFields_repeat1] = aux_sym_tupleFields_repeat1,
  [aux_sym_declStmts_repeat1] = aux_sym_declStmts_repeat1,
  [aux_sym_queryBodyStmts_repeat1] = aux_sym_queryBodyStmts_repeat1,
  [aux_sym_pathPattern_repeat1] = aux_sym_pathPattern_repeat1,
  [aux_sym_accumDeclStmt_repeat1] = aux_sym_accumDeclStmt_repeat1,
  [aux_sym_accumType_repeat1] = aux_sym_accumType_repeat1,
  [aux_sym_argList_repeat1] = aux_sym_argList_repeat1,
  [aux_sym_queryBodyIfStmt_repeat1] = aux_sym_queryBodyIfStmt_repeat1,
  [aux_sym_baseDeclStmt_repeat1] = aux_sym_baseDeclStmt_repeat1,
  [aux_sym_seedSet_repeat1] = aux_sym_seedSet_repeat1,
  [aux_sym_printStmt_repeat1] = aux_sym_printStmt_repeat1,
  [aux_sym_vExprSet_repeat1] = aux_sym_vExprSet_repeat1,
  [aux_sym_gsqlSelectBlock_repeat1] = aux_sym_gsqlSelectBlock_repeat1,
  [aux_sym_fromClause_repeat1] = aux_sym_fromClause_repeat1,
  [aux_sym_stepEdgeTypes_repeat1] = aux_sym_stepEdgeTypes_repeat1,
  [aux_sym_stepVertexTypes_repeat1] = aux_sym_stepVertexTypes_repeat1,
  [aux_sym_perClauseV2_repeat1] = aux_sym_perClauseV2_repeat1,
  [aux_sym_dmlSubStmtList_repeat1] = aux_sym_dmlSubStmtList_repeat1,
  [aux_sym_stringLiteral_repeat1] = aux_sym_stringLiteral_repeat1,
  [aux_sym_integer_repeat1] = aux_sym_integer_repeat1,
  [aux_sym_name_repeat1] = aux_sym_name_repeat1,
  [anon_alias_sym_DOUBLE] = anon_alias_sym_DOUBLE,
  [anon_alias_sym_FLOAT] = anon_alias_sym_FLOAT,
  [anon_alias_sym_INT] = anon_alias_sym_INT,
  [anon_alias_sym_string] = anon_alias_sym_string,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_createSignature_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_createSignature_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_createSignature_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_createSignature_token4] = {
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
  [anon_sym_API] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SYNTAX] = {
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
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_typedef_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_typedef_token2] = {
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
  [aux_sym_constant_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_constant_token2] = {
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
  [anon_sym_GT_GT] = {
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
  [aux_sym_condition_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_condition_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_condition_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_condition_token4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OR] = {
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_accumDeclStmt_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_accumType_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_accumType_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_accumType_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_accumType_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_accumType_token5] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_accumType_token6] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_accumType_token7] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_accumType_token8] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_accumType_token9] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_accumType_token10] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_accumType_token11] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_accumType_token12] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_accumType_token13] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_accumType_token14] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_elementType_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_queryBodyIfStmt_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_queryBodyIfStmt_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_queryBodyIfStmt_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_queryBodyIfStmt_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_fileDeclStmt_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_simpleSet_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_simpleSet_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_simpleSet_token3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_seed_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_seed_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_selectVertParams_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_printStmt_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_printStmt_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_printStmt_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_printExpr_token1] = {
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
  [aux_sym_returnStmt_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gsqlSelectClause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_fromClause_token1] = {
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
  [anon_sym_WHERE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_accumClause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_postAccumClause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_perClauseV2_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_stringLiteral_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
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
  [aux_sym_baseType_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_baseType_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_baseType_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_baseType_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_baseType_token5] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_baseType_token6] = {
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_createQuery] = {
    .visible = true,
    .named = true,
  },
  [sym_createSignature] = {
    .visible = true,
    .named = true,
  },
  [sym_returns] = {
    .visible = true,
    .named = true,
  },
  [sym_parameterList] = {
    .visible = true,
    .named = true,
  },
  [sym_syntaxName] = {
    .visible = true,
    .named = true,
  },
  [sym_queryBody] = {
    .visible = true,
    .named = true,
  },
  [sym_typedefs] = {
    .visible = true,
    .named = true,
  },
  [sym_typedef] = {
    .visible = true,
    .named = true,
  },
  [sym_tupleFields] = {
    .visible = true,
    .named = true,
  },
  [sym_declStmts] = {
    .visible = true,
    .named = true,
  },
  [sym_declStmt] = {
    .visible = true,
    .named = true,
  },
  [sym_queryBodyStmts] = {
    .visible = true,
    .named = true,
  },
  [sym_queryBodyStmt] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_mathOperator] = {
    .visible = true,
    .named = true,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_comparisonOperator] = {
    .visible = true,
    .named = true,
  },
  [sym_pathPattern] = {
    .visible = true,
    .named = true,
  },
  [sym_pathEdgePattern] = {
    .visible = true,
    .named = true,
  },
  [sym_atomicEdgePattern] = {
    .visible = true,
    .named = true,
  },
  [sym_accumDeclStmt] = {
    .visible = true,
    .named = true,
  },
  [sym_localAccumName] = {
    .visible = true,
    .named = true,
  },
  [sym_globalAccumName] = {
    .visible = true,
    .named = true,
  },
  [sym_accumType] = {
    .visible = true,
    .named = true,
  },
  [sym_elementType] = {
    .visible = true,
    .named = true,
  },
  [sym_gAccumAccumStmt] = {
    .visible = true,
    .named = true,
  },
  [sym_assignStmt] = {
    .visible = true,
    .named = true,
  },
  [sym_argList] = {
    .visible = true,
    .named = true,
  },
  [sym_queryBodyIfStmt] = {
    .visible = true,
    .named = true,
  },
  [sym_simpleSize] = {
    .visible = true,
    .named = true,
  },
  [sym_baseDeclStmt] = {
    .visible = true,
    .named = true,
  },
  [sym_fileDeclStmt] = {
    .visible = true,
    .named = true,
  },
  [sym_fileVar] = {
    .visible = true,
    .named = true,
  },
  [sym_vSetVarDeclStmt] = {
    .visible = true,
    .named = true,
  },
  [sym_simpleSet] = {
    .visible = true,
    .named = true,
  },
  [sym_seedSet] = {
    .visible = true,
    .named = true,
  },
  [sym_seed] = {
    .visible = true,
    .named = true,
  },
  [sym_selectVertParams] = {
    .visible = true,
    .named = true,
  },
  [sym_columnId] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_setBagExpr] = {
    .visible = true,
    .named = true,
  },
  [sym_printStmt] = {
    .visible = true,
    .named = true,
  },
  [sym_printExpr] = {
    .visible = true,
    .named = true,
  },
  [sym_vExprSet] = {
    .visible = true,
    .named = true,
  },
  [sym_vSetProj] = {
    .visible = true,
    .named = true,
  },
  [sym_jsonKey] = {
    .visible = true,
    .named = true,
  },
  [sym_returnStmt] = {
    .visible = true,
    .named = true,
  },
  [sym_selectStmt] = {
    .visible = true,
    .named = true,
  },
  [sym_gsqlSelectBlock] = {
    .visible = true,
    .named = true,
  },
  [sym_gsqlSelectClause] = {
    .visible = true,
    .named = true,
  },
  [sym_tableName] = {
    .visible = true,
    .named = true,
  },
  [sym_fromClause] = {
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
  [sym_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_vertexAlias] = {
    .visible = true,
    .named = true,
  },
  [sym_edgeAlias] = {
    .visible = true,
    .named = true,
  },
  [sym_stepEdgeTypes] = {
    .visible = true,
    .named = true,
  },
  [sym_atomicEdgeType] = {
    .visible = true,
    .named = true,
  },
  [sym_edgeSetType] = {
    .visible = true,
    .named = true,
  },
  [sym_stepVertexTypes] = {
    .visible = true,
    .named = true,
  },
  [sym_atomicVertexType] = {
    .visible = true,
    .named = true,
  },
  [sym_vertexSetType] = {
    .visible = true,
    .named = true,
  },
  [sym_whereClause] = {
    .visible = true,
    .named = true,
  },
  [sym_accumClause] = {
    .visible = true,
    .named = true,
  },
  [sym_postAccumClause] = {
    .visible = true,
    .named = true,
  },
  [sym_perClauseV2] = {
    .visible = true,
    .named = true,
  },
  [sym_dmlSubStmtList] = {
    .visible = true,
    .named = true,
  },
  [sym_dmlSubStmt] = {
    .visible = true,
    .named = true,
  },
  [sym_stringLiteral] = {
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
  [sym_edgeType] = {
    .visible = true,
    .named = true,
  },
  [sym_accumName] = {
    .visible = true,
    .named = true,
  },
  [sym_vertexSetName] = {
    .visible = true,
    .named = true,
  },
  [sym_attrName] = {
    .visible = true,
    .named = true,
  },
  [sym_varName] = {
    .visible = true,
    .named = true,
  },
  [sym_tupleType] = {
    .visible = true,
    .named = true,
  },
  [sym_fieldName] = {
    .visible = true,
    .named = true,
  },
  [sym_filePath] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
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
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameterList_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_typedefs_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tupleFields_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declStmts_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_queryBodyStmts_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pathPattern_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_accumDeclStmt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_accumType_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argList_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_queryBodyIfStmt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_baseDeclStmt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_seedSet_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_printStmt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_vExprSet_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_gsqlSelectBlock_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fromClause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stepEdgeTypes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stepVertexTypes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_perClauseV2_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dmlSubStmtList_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stringLiteral_repeat1] = {
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
  [anon_alias_sym_DOUBLE] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_FLOAT] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_INT] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_string] = {
    .visible = true,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_alias_sym_INT,
  },
  [2] = {
    [0] = anon_alias_sym_FLOAT,
  },
  [3] = {
    [0] = anon_alias_sym_DOUBLE,
  },
  [4] = {
    [2] = anon_alias_sym_string,
  },
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\r') SKIP(368)
      if (lookahead == '!') ADVANCE(42);
      if (lookahead == '"') ADVANCE(472);
      if (lookahead == '#') ADVANCE(420);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == '%') ADVANCE(400);
      if (lookahead == '&') ADVANCE(407);
      if (lookahead == '\'') ADVANCE(456);
      if (lookahead == '(') ADVANCE(379);
      if (lookahead == ')') ADVANCE(380);
      if (lookahead == '*') ADVANCE(398);
      if (lookahead == '+') ADVANCE(402);
      if (lookahead == ',') ADVANCE(388);
      if (lookahead == '-') ADVANCE(404);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == '/') ADVANCE(399);
      if (lookahead == ':') ADVANCE(467);
      if (lookahead == ';') ADVANCE(389);
      if (lookahead == '<') ADVANCE(393);
      if (lookahead == '=') ADVANCE(387);
      if (lookahead == '>') ADVANCE(395);
      if (lookahead == '@') ADVANCE(422);
      if (lookahead == 'A') ADVANCE(536);
      if (lookahead == 'B') ADVANCE(577);
      if (lookahead == 'D') ADVANCE(542);
      if (lookahead == 'E') ADVANCE(549);
      if (lookahead == 'F') ADVANCE(545);
      if (lookahead == 'H') ADVANCE(551);
      if (lookahead == 'I') ADVANCE(561);
      if (lookahead == 'J') ADVANCE(585);
      if (lookahead == 'L') ADVANCE(568);
      if (lookahead == 'M') ADVANCE(547);
      if (lookahead == 'N') ADVANCE(579);
      if (lookahead == 'O') ADVANCE(539);
      if (lookahead == 'P') ADVANCE(553);
      if (lookahead == 'R') ADVANCE(555);
      if (lookahead == 'S') ADVANCE(541);
      if (lookahead == 'T') ADVANCE(564);
      if (lookahead == 'U') ADVANCE(574);
      if (lookahead == 'V') ADVANCE(554);
      if (lookahead == 'W') ADVANCE(534);
      if (lookahead == '[') ADVANCE(461);
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead == ']') ADVANCE(462);
      if (lookahead == '_') ADVANCE(450);
      if (lookahead == 'a') ADVANCE(514);
      if (lookahead == 'b') ADVANCE(520);
      if (lookahead == 'd') ADVANCE(483);
      if (lookahead == 'e') ADVANCE(490);
      if (lookahead == 'f') ADVANCE(486);
      if (lookahead == 'h') ADVANCE(492);
      if (lookahead == 'i') ADVANCE(503);
      if (lookahead == 'j') ADVANCE(528);
      if (lookahead == 'l') ADVANCE(510);
      if (lookahead == 'm') ADVANCE(488);
      if (lookahead == 'n') ADVANCE(522);
      if (lookahead == 'p') ADVANCE(494);
      if (lookahead == 'r') ADVANCE(497);
      if (lookahead == 's') ADVANCE(495);
      if (lookahead == 't') ADVANCE(506);
      if (lookahead == 'u') ADVANCE(517);
      if (lookahead == 'v') ADVANCE(496);
      if (lookahead == 'w') ADVANCE(507);
      if (lookahead == '{') ADVANCE(372);
      if (lookahead == '|') ADVANCE(408);
      if (lookahead == '}') ADVANCE(373);
      if (('C' <= lookahead && lookahead <= 'Z')) ADVANCE(532);
      if (('c' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(325)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(326)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(327)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(328)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(329)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(330)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(331)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(332)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(333)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(334)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(335)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(336)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(337)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(338)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(339)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(340)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(341)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(342)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(343)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(344)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(345)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(346)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(347)
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(348)
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(349)
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(350)
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(351)
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(352)
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(353)
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(354)
      END_STATE();
    case 31:
      if (lookahead == '\n') SKIP(355)
      END_STATE();
    case 32:
      if (lookahead == '\n') SKIP(356)
      END_STATE();
    case 33:
      if (lookahead == '\n') SKIP(357)
      END_STATE();
    case 34:
      if (lookahead == '\n') SKIP(358)
      END_STATE();
    case 35:
      if (lookahead == '\n') SKIP(359)
      END_STATE();
    case 36:
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '/') ADVANCE(420);
      END_STATE();
    case 37:
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '/') ADVANCE(419);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == '*') ADVANCE(37);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '*') ADVANCE(452);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(107);
      END_STATE();
    case 41:
      if (lookahead == '<') ADVANCE(405);
      END_STATE();
    case 42:
      if (lookahead == '=') ADVANCE(418);
      END_STATE();
    case 43:
      if (lookahead == '=') ADVANCE(440);
      END_STATE();
    case 44:
      if (lookahead == '=') ADVANCE(417);
      END_STATE();
    case 45:
      if (lookahead == '>') ADVANCE(406);
      END_STATE();
    case 46:
      if (lookahead == '@') ADVANCE(423);
      END_STATE();
    case 47:
      if (lookahead == 'A') ADVANCE(87);
      END_STATE();
    case 48:
      if (lookahead == 'A') ADVANCE(71);
      END_STATE();
    case 49:
      if (lookahead == 'A') ADVANCE(60);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(238);
      END_STATE();
    case 50:
      if (lookahead == 'D') ADVANCE(413);
      END_STATE();
    case 51:
      if (lookahead == 'D') ADVANCE(413);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(451);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(468);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(468);
      if (lookahead == 'e') ADVANCE(458);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(83);
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(597);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(81);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(260);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(77);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(78);
      END_STATE();
    case 60:
      if (lookahead == 'G') ADVANCE(596);
      END_STATE();
    case 61:
      if (lookahead == 'H') ADVANCE(382);
      END_STATE();
    case 62:
      if (lookahead == 'H') ADVANCE(59);
      END_STATE();
    case 63:
      if (lookahead == 'I') ADVANCE(383);
      END_STATE();
    case 64:
      if (lookahead == 'I') ADVANCE(65);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(235);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 65:
      if (lookahead == 'L') ADVANCE(56);
      END_STATE();
    case 66:
      if (lookahead == 'N') ADVANCE(80);
      END_STATE();
    case 67:
      if (lookahead == 'N') ADVANCE(50);
      if (lookahead == 'P') ADVANCE(63);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(129);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(460);
      END_STATE();
    case 68:
      if (lookahead == 'N') ADVANCE(50);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(460);
      END_STATE();
    case 69:
      if (lookahead == 'N') ADVANCE(79);
      END_STATE();
    case 70:
      if (lookahead == 'O') ADVANCE(73);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(203);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 71:
      if (lookahead == 'P') ADVANCE(61);
      END_STATE();
    case 72:
      if (lookahead == 'R') ADVANCE(414);
      END_STATE();
    case 73:
      if (lookahead == 'R') ADVANCE(381);
      END_STATE();
    case 74:
      if (lookahead == 'R') ADVANCE(69);
      END_STATE();
    case 75:
      if (lookahead == 'R') ADVANCE(54);
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 76:
      if (lookahead == 'R') ADVANCE(48);
      END_STATE();
    case 77:
      if (lookahead == 'R') ADVANCE(89);
      END_STATE();
    case 78:
      if (lookahead == 'R') ADVANCE(53);
      END_STATE();
    case 79:
      if (lookahead == 'S') ADVANCE(385);
      END_STATE();
    case 80:
      if (lookahead == 'T') ADVANCE(47);
      END_STATE();
    case 81:
      if (lookahead == 'T') ADVANCE(595);
      END_STATE();
    case 82:
      if (lookahead == 'T') ADVANCE(86);
      END_STATE();
    case 83:
      if (lookahead == 'T') ADVANCE(86);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(204);
      END_STATE();
    case 84:
      if (lookahead == 'U') ADVANCE(367);
      if (lookahead == 'u') ADVANCE(363);
      if (lookahead == 'x') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (lookahead != 0) ADVANCE(478);
      END_STATE();
    case 85:
      if (lookahead == 'U') ADVANCE(58);
      END_STATE();
    case 86:
      if (lookahead == 'U') ADVANCE(74);
      END_STATE();
    case 87:
      if (lookahead == 'X') ADVANCE(384);
      END_STATE();
    case 88:
      if (lookahead == 'Y') ADVANCE(66);
      END_STATE();
    case 89:
      if (lookahead == 'Y') ADVANCE(378);
      END_STATE();
    case 90:
      if (lookahead == '_') ADVANCE(115);
      END_STATE();
    case 91:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(476);
      if (lookahead == '\n') SKIP(358)
      if (lookahead == '\r') ADVANCE(477);
      if (lookahead == '"') ADVANCE(472);
      if (lookahead == '#') ADVANCE(477);
      if (lookahead == '/') ADVANCE(473);
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead != 0) ADVANCE(477);
      END_STATE();
    case 92:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(291);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(266);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(277);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(305);
      END_STATE();
    case 93:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(203);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 94:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(324);
      END_STATE();
    case 95:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(248);
      END_STATE();
    case 96:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 97:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(290);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 98:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(253);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 99:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(282);
      END_STATE();
    case 100:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 101:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 102:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 103:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(297);
      END_STATE();
    case 104:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 105:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 106:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 107:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 108:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 109:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(192);
      END_STATE();
    case 110:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(318);
      END_STATE();
    case 111:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(201);
      END_STATE();
    case 112:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(436);
      END_STATE();
    case 113:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(421);
      END_STATE();
    case 114:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(435);
      END_STATE();
    case 115:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(268);
      END_STATE();
    case 116:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(308);
      END_STATE();
    case 117:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(116);
      END_STATE();
    case 118:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(309);
      END_STATE();
    case 119:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 120:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(310);
      END_STATE();
    case 121:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 122:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(311);
      END_STATE();
    case 123:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(284);
      END_STATE();
    case 124:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(312);
      END_STATE();
    case 125:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 126:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(285);
      END_STATE();
    case 127:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(314);
      END_STATE();
    case 128:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(124);
      END_STATE();
    case 129:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(315);
      END_STATE();
    case 130:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(127);
      END_STATE();
    case 131:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(129);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(460);
      END_STATE();
    case 132:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(316);
      END_STATE();
    case 133:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(317);
      END_STATE();
    case 134:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(132);
      END_STATE();
    case 135:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(289);
      END_STATE();
    case 136:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(133);
      END_STATE();
    case 137:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(288);
      END_STATE();
    case 138:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(158);
      END_STATE();
    case 139:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(241);
      END_STATE();
    case 140:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(180);
      END_STATE();
    case 141:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(445);
      END_STATE();
    case 142:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(377);
      END_STATE();
    case 143:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(154);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(249);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(278);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(591);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(444);
      END_STATE();
    case 148:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(446);
      END_STATE();
    case 149:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 151:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 152:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(458);
      END_STATE();
    case 153:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(427);
      END_STATE();
    case 154:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 155:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(594);
      END_STATE();
    case 156:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 157:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(374);
      END_STATE();
    case 158:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 159:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 160:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 161:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 162:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 163:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 164:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 165:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 166:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 167:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 168:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 169:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 170:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 171:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 172:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 173:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 174:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 175:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 176:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 177:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(390);
      END_STATE();
    case 178:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(428);
      END_STATE();
    case 179:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(429);
      END_STATE();
    case 180:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(146);
      END_STATE();
    case 181:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(165);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 182:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(165);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(90);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(313);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(245);
      END_STATE();
    case 183:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(163);
      END_STATE();
    case 184:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(229);
      END_STATE();
    case 185:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(218);
      END_STATE();
    case 186:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 187:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(239);
      END_STATE();
    case 188:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(226);
      END_STATE();
    case 189:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(228);
      END_STATE();
    case 190:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 191:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(277);
      END_STATE();
    case 192:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(172);
      END_STATE();
    case 193:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(589);
      END_STATE();
    case 194:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(412);
      END_STATE();
    case 195:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(235);
      END_STATE();
    case 196:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(235);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 197:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 198:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(194);
      END_STATE();
    case 199:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(166);
      END_STATE();
    case 200:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(166);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(102);
      END_STATE();
    case 201:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(153);
      END_STATE();
    case 202:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(156);
      END_STATE();
    case 203:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(276);
      END_STATE();
    case 204:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 205:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(300);
      END_STATE();
    case 206:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(174);
      END_STATE();
    case 207:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(465);
      END_STATE();
    case 208:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(432);
      END_STATE();
    case 209:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(433);
      END_STATE();
    case 210:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(438);
      END_STATE();
    case 211:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(424);
      END_STATE();
    case 212:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(434);
      END_STATE();
    case 213:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(437);
      END_STATE();
    case 214:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(469);
      END_STATE();
    case 215:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(470);
      END_STATE();
    case 216:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(431);
      END_STATE();
    case 217:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(246);
      END_STATE();
    case 218:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(155);
      END_STATE();
    case 219:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(247);
      END_STATE();
    case 220:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(104);
      END_STATE();
    case 221:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(410);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(411);
      END_STATE();
    case 222:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 223:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(443);
      END_STATE();
    case 224:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(447);
      END_STATE();
    case 225:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(463);
      END_STATE();
    case 226:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 227:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(306);
      END_STATE();
    case 228:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(179);
      END_STATE();
    case 229:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(283);
      END_STATE();
    case 230:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(287);
      END_STATE();
    case 231:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(238);
      END_STATE();
    case 232:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(305);
      END_STATE();
    case 233:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(281);
      END_STATE();
    case 234:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(281);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(198);
      END_STATE();
    case 235:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 236:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(222);
      END_STATE();
    case 237:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(207);
      END_STATE();
    case 238:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 239:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(224);
      END_STATE();
    case 240:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(217);
      END_STATE();
    case 241:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(219);
      END_STATE();
    case 242:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(96);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(101);
      END_STATE();
    case 243:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(204);
      END_STATE();
    case 244:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(159);
      END_STATE();
    case 245:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(202);
      END_STATE();
    case 246:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(258);
      END_STATE();
    case 247:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(261);
      END_STATE();
    case 248:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(105);
      END_STATE();
    case 249:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(471);
      END_STATE();
    case 250:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(454);
      END_STATE();
    case 251:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(375);
      END_STATE();
    case 252:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 253:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 254:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 255:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(225);
      END_STATE();
    case 256:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 257:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 258:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 259:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(296);
      END_STATE();
    case 260:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 261:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 262:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 263:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(280);
      END_STATE();
    case 264:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(299);
      END_STATE();
    case 265:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(460);
      END_STATE();
    case 266:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(112);
      END_STATE();
    case 267:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(449);
      END_STATE();
    case 268:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(319);
      END_STATE();
    case 269:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(439);
      END_STATE();
    case 270:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(430);
      END_STATE();
    case 271:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(236);
      END_STATE();
    case 272:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(304);
      END_STATE();
    case 273:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(147);
      END_STATE();
    case 274:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(269);
      END_STATE();
    case 275:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(270);
      END_STATE();
    case 276:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(150);
      END_STATE();
    case 277:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(294);
      END_STATE();
    case 278:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(286);
      END_STATE();
    case 279:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(114);
      END_STATE();
    case 280:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(175);
      END_STATE();
    case 281:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(409);
      END_STATE();
    case 282:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(426);
      END_STATE();
    case 283:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(457);
      END_STATE();
    case 284:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(464);
      END_STATE();
    case 285:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(592);
      END_STATE();
    case 286:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(40);
      END_STATE();
    case 287:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(425);
      END_STATE();
    case 288:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(448);
      END_STATE();
    case 289:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(320);
      END_STATE();
    case 290:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(190);
      END_STATE();
    case 291:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(168);
      END_STATE();
    case 292:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(307);
      END_STATE();
    case 293:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(185);
      END_STATE();
    case 294:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(254);
      END_STATE();
    case 295:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(260);
      END_STATE();
    case 296:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(151);
      END_STATE();
    case 297:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(157);
      END_STATE();
    case 298:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(162);
      END_STATE();
    case 299:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(161);
      END_STATE();
    case 300:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(170);
      END_STATE();
    case 301:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(171);
      END_STATE();
    case 302:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(262);
      END_STATE();
    case 303:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(102);
      END_STATE();
    case 304:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(106);
      END_STATE();
    case 305:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(111);
      END_STATE();
    case 306:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(267);
      END_STATE();
    case 307:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(255);
      END_STATE();
    case 308:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(208);
      END_STATE();
    case 309:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(209);
      END_STATE();
    case 310:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(210);
      END_STATE();
    case 311:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(211);
      END_STATE();
    case 312:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(212);
      END_STATE();
    case 313:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(149);
      END_STATE();
    case 314:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(213);
      END_STATE();
    case 315:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(214);
      END_STATE();
    case 316:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(215);
      END_STATE();
    case 317:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(216);
      END_STATE();
    case 318:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(298);
      END_STATE();
    case 319:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(459);
      END_STATE();
    case 320:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(176);
      END_STATE();
    case 321:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(590);
      END_STATE();
    case 322:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(453);
      END_STATE();
    case 323:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(451);
      END_STATE();
    case 324:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(593);
      END_STATE();
    case 325:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(325)
      if (lookahead == '\r') SKIP(1)
      if (lookahead == '#') ADVANCE(420);
      if (lookahead == '%') ADVANCE(400);
      if (lookahead == '&') ADVANCE(407);
      if (lookahead == '(') ADVANCE(379);
      if (lookahead == ')') ADVANCE(380);
      if (lookahead == '*') ADVANCE(398);
      if (lookahead == '+') ADVANCE(401);
      if (lookahead == ',') ADVANCE(388);
      if (lookahead == '-') ADVANCE(403);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == '/') ADVANCE(399);
      if (lookahead == ';') ADVANCE(389);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == '=') ADVANCE(386);
      if (lookahead == '>') ADVANCE(45);
      if (lookahead == 'B') ADVANCE(577);
      if (lookahead == 'D') ADVANCE(543);
      if (lookahead == 'E') ADVANCE(548);
      if (lookahead == 'F') ADVANCE(567);
      if (lookahead == 'H') ADVANCE(551);
      if (lookahead == 'I') ADVANCE(562);
      if (lookahead == 'J') ADVANCE(585);
      if (lookahead == 'L') ADVANCE(568);
      if (lookahead == 'M') ADVANCE(546);
      if (lookahead == 'O') ADVANCE(583);
      if (lookahead == 'P') ADVANCE(580);
      if (lookahead == 'R') ADVANCE(555);
      if (lookahead == 'S') ADVANCE(558);
      if (lookahead == 'T') ADVANCE(588);
      if (lookahead == 'V') ADVANCE(554);
      if (lookahead == '_') ADVANCE(450);
      if (lookahead == 'b') ADVANCE(520);
      if (lookahead == 'd') ADVANCE(484);
      if (lookahead == 'e') ADVANCE(489);
      if (lookahead == 'f') ADVANCE(509);
      if (lookahead == 'h') ADVANCE(492);
      if (lookahead == 'i') ADVANCE(504);
      if (lookahead == 'j') ADVANCE(528);
      if (lookahead == 'l') ADVANCE(510);
      if (lookahead == 'm') ADVANCE(487);
      if (lookahead == 'o') ADVANCE(526);
      if (lookahead == 'p') ADVANCE(523);
      if (lookahead == 'r') ADVANCE(497);
      if (lookahead == 's') ADVANCE(500);
      if (lookahead == 't') ADVANCE(531);
      if (lookahead == 'v') ADVANCE(496);
      if (lookahead == '|') ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(532);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 326:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(326)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == '#') ADVANCE(420);
      if (lookahead == ')') ADVANCE(380);
      if (lookahead == '+') ADVANCE(43);
      if (lookahead == ',') ADVANCE(388);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == ':') ADVANCE(467);
      if (lookahead == ';') ADVANCE(389);
      if (lookahead == '>') ADVANCE(394);
      if (lookahead == '@') ADVANCE(422);
      if (lookahead == 'B') ADVANCE(577);
      if (lookahead == 'D') ADVANCE(543);
      if (lookahead == 'E') ADVANCE(548);
      if (lookahead == 'F') ADVANCE(567);
      if (lookahead == 'H') ADVANCE(551);
      if (lookahead == 'I') ADVANCE(562);
      if (lookahead == 'J') ADVANCE(585);
      if (lookahead == 'L') ADVANCE(568);
      if (lookahead == 'M') ADVANCE(546);
      if (lookahead == 'O') ADVANCE(583);
      if (lookahead == 'P') ADVANCE(580);
      if (lookahead == 'R') ADVANCE(555);
      if (lookahead == 'S') ADVANCE(558);
      if (lookahead == 'V') ADVANCE(554);
      if (lookahead == '_') ADVANCE(450);
      if (lookahead == 'b') ADVANCE(520);
      if (lookahead == 'd') ADVANCE(484);
      if (lookahead == 'e') ADVANCE(489);
      if (lookahead == 'f') ADVANCE(509);
      if (lookahead == 'h') ADVANCE(492);
      if (lookahead == 'i') ADVANCE(504);
      if (lookahead == 'j') ADVANCE(528);
      if (lookahead == 'l') ADVANCE(510);
      if (lookahead == 'm') ADVANCE(487);
      if (lookahead == 'o') ADVANCE(526);
      if (lookahead == 'p') ADVANCE(523);
      if (lookahead == 'r') ADVANCE(497);
      if (lookahead == 's') ADVANCE(500);
      if (lookahead == 'v') ADVANCE(496);
      if (lookahead == '|') ADVANCE(408);
      if (lookahead == '}') ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(532);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 327:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(327)
      if (lookahead == '\r') SKIP(3)
      if (lookahead == '!') ADVANCE(42);
      if (lookahead == '#') ADVANCE(420);
      if (lookahead == '%') ADVANCE(400);
      if (lookahead == '&') ADVANCE(407);
      if (lookahead == '\'') ADVANCE(456);
      if (lookahead == ')') ADVANCE(380);
      if (lookahead == '*') ADVANCE(398);
      if (lookahead == '+') ADVANCE(401);
      if (lookahead == ',') ADVANCE(388);
      if (lookahead == '-') ADVANCE(403);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == '/') ADVANCE(399);
      if (lookahead == ';') ADVANCE(389);
      if (lookahead == '<') ADVANCE(393);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '>') ADVANCE(395);
      if (lookahead == 'A') ADVANCE(68);
      if (lookahead == 'O') ADVANCE(72);
      if (lookahead == '[') ADVANCE(461);
      if (lookahead == ']') ADVANCE(462);
      if (lookahead == 'a') ADVANCE(265);
      if (lookahead == '|') ADVANCE(408);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(221);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(233);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(144);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(181);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      END_STATE();
    case 328:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(328)
      if (lookahead == '\r') SKIP(4)
      if (lookahead == '!') ADVANCE(42);
      if (lookahead == '#') ADVANCE(420);
      if (lookahead == '%') ADVANCE(400);
      if (lookahead == '&') ADVANCE(407);
      if (lookahead == '\'') ADVANCE(456);
      if (lookahead == ')') ADVANCE(380);
      if (lookahead == '*') ADVANCE(398);
      if (lookahead == '+') ADVANCE(401);
      if (lookahead == ',') ADVANCE(388);
      if (lookahead == '-') ADVANCE(403);
      if (lookahead == '/') ADVANCE(399);
      if (lookahead == ';') ADVANCE(389);
      if (lookahead == '<') ADVANCE(393);
      if (lookahead == '=') ADVANCE(387);
      if (lookahead == '>') ADVANCE(395);
      if (lookahead == 'A') ADVANCE(68);
      if (lookahead == 'O') ADVANCE(72);
      if (lookahead == '[') ADVANCE(461);
      if (lookahead == ']') ADVANCE(462);
      if (lookahead == 'a') ADVANCE(265);
      if (lookahead == '|') ADVANCE(408);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(221);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(233);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(144);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(181);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(183);
      END_STATE();
    case 329:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(329)
      if (lookahead == '\r') SKIP(5)
      if (lookahead == '!') ADVANCE(42);
      if (lookahead == '#') ADVANCE(420);
      if (lookahead == '%') ADVANCE(400);
      if (lookahead == '&') ADVANCE(407);
      if (lookahead == '\'') ADVANCE(456);
      if (lookahead == '*') ADVANCE(398);
      if (lookahead == '+') ADVANCE(401);
      if (lookahead == '-') ADVANCE(403);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == '/') ADVANCE(399);
      if (lookahead == ';') ADVANCE(389);
      if (lookahead == '<') ADVANCE(393);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '>') ADVANCE(395);
      if (lookahead == 'A') ADVANCE(537);
      if (lookahead == 'I') ADVANCE(573);
      if (lookahead == 'N') ADVANCE(579);
      if (lookahead == 'O') ADVANCE(539);
      if (lookahead == 'P') ADVANCE(552);
      if (lookahead == '_') ADVANCE(450);
      if (lookahead == 'i') ADVANCE(516);
      if (lookahead == 'n') ADVANCE(522);
      if (lookahead == 'p') ADVANCE(493);
      if (lookahead == '|') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(532);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 330:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(330)
      if (lookahead == '\r') SKIP(6)
      if (lookahead == '!') ADVANCE(42);
      if (lookahead == '#') ADVANCE(420);
      if (lookahead == '%') ADVANCE(400);
      if (lookahead == '&') ADVANCE(407);
      if (lookahead == '\'') ADVANCE(456);
      if (lookahead == '*') ADVANCE(398);
      if (lookahead == '+') ADVANCE(401);
      if (lookahead == '-') ADVANCE(403);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == '/') ADVANCE(399);
      if (lookahead == ';') ADVANCE(389);
      if (lookahead == '<') ADVANCE(393);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '>') ADVANCE(395);
      if (lookahead == 'A') ADVANCE(537);
      if (lookahead == 'I') ADVANCE(573);
      if (lookahead == 'N') ADVANCE(579);
      if (lookahead == 'O') ADVANCE(539);
      if (lookahead == 'T') ADVANCE(578);
      if (lookahead == '_') ADVANCE(450);
      if (lookahead == 'i') ADVANCE(516);
      if (lookahead == 'n') ADVANCE(522);
      if (lookahead == 't') ADVANCE(521);
      if (lookahead == '|') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(532);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 331:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(331)
      if (lookahead == '\r') SKIP(7)
      if (lookahead == '!') ADVANCE(42);
      if (lookahead == '#') ADVANCE(420);
      if (lookahead == '%') ADVANCE(400);
      if (lookahead == '&') ADVANCE(407);
      if (lookahead == '\'') ADVANCE(456);
      if (lookahead == ')') ADVANCE(380);
      if (lookahead == '*') ADVANCE(398);
      if (lookahead == '+') ADVANCE(401);
      if (lookahead == '-') ADVANCE(403);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == '/') ADVANCE(399);
      if (lookahead == '<') ADVANCE(393);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '>') ADVANCE(395);
      if (lookahead == 'A') ADVANCE(537);
      if (lookahead == 'I') ADVANCE(573);
      if (lookahead == 'N') ADVANCE(579);
      if (lookahead == 'O') ADVANCE(539);
      if (lookahead == '_') ADVANCE(450);
      if (lookahead == 'i') ADVANCE(516);
      if (lookahead == 'n') ADVANCE(522);
      if (lookahead == '|') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(532);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 332:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(332)
      if (lookahead == '\r') SKIP(8)
      if (lookahead == '!') ADVANCE(42);
      if (lookahead == '#') ADVANCE(420);
      if (lookahead == '%') ADVANCE(400);
      if (lookahead == '&') ADVANCE(407);
      if (lookahead == '\'') ADVANCE(456);
      if (lookahead == '*') ADVANCE(398);
      if (lookahead == '+') ADVANCE(401);
      if (lookahead == '-') ADVANCE(403);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == '/') ADVANCE(399);
      if (lookahead == '<') ADVANCE(393);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '>') ADVANCE(395);
      if (lookahead == 'A') ADVANCE(537);
      if (lookahead == 'I') ADVANCE(573);
      if (lookahead == 'N') ADVANCE(579);
      if (lookahead == 'O') ADVANCE(539);
      if (lookahead == 'T') ADVANCE(563);
      if (lookahead == '_') ADVANCE(450);
      if (lookahead == 'i') ADVANCE(516);
      if (lookahead == 'n') ADVANCE(522);
      if (lookahead == 't') ADVANCE(505);
      if (lookahead == '|') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(532);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 333:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(333)
      if (lookahead == '\r') SKIP(9)
      if (lookahead == '"') ADVANCE(472);
      if (lookahead == '#') ADVANCE(420);
      if (lookahead == '$') ADVANCE(455);
      if (lookahead == '%') ADVANCE(400);
      if (lookahead == '&') ADVANCE(407);
      if (lookahead == '\'') ADVANCE(456);
      if (lookahead == '(') ADVANCE(379);
      if (lookahead == ')') ADVANCE(380);
      if (lookahead == '*') ADVANCE(398);
      if (lookahead == '+') ADVANCE(402);
      if (lookahead == ',') ADVANCE(388);
      if (lookahead == '-') ADVANCE(403);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == '/') ADVANCE(399);
      if (lookahead == ':') ADVANCE(467);
      if (lookahead == ';') ADVANCE(389);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == '=') ADVANCE(386);
      if (lookahead == '>') ADVANCE(45);
      if (lookahead == '@') ADVANCE(422);
      if (lookahead == ']') ADVANCE(462);
      if (lookahead == '_') ADVANCE(450);
      if (lookahead == '{') ADVANCE(372);
      if (lookahead == '|') ADVANCE(408);
      if (lookahead == '}') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(532);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 334:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(334)
      if (lookahead == '\r') SKIP(10)
      if (lookahead == '#') ADVANCE(420);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == 'B') ADVANCE(577);
      if (lookahead == 'D') ADVANCE(543);
      if (lookahead == 'E') ADVANCE(548);
      if (lookahead == 'F') ADVANCE(569);
      if (lookahead == 'H') ADVANCE(551);
      if (lookahead == 'I') ADVANCE(575);
      if (lookahead == 'J') ADVANCE(585);
      if (lookahead == 'L') ADVANCE(568);
      if (lookahead == 'M') ADVANCE(546);
      if (lookahead == 'O') ADVANCE(583);
      if (lookahead == 'S') ADVANCE(559);
      if (lookahead == 'V') ADVANCE(554);
      if (lookahead == '_') ADVANCE(450);
      if (lookahead == 'b') ADVANCE(520);
      if (lookahead == 'd') ADVANCE(484);
      if (lookahead == 'e') ADVANCE(489);
      if (lookahead == 'f') ADVANCE(511);
      if (lookahead == 'h') ADVANCE(492);
      if (lookahead == 'i') ADVANCE(518);
      if (lookahead == 'j') ADVANCE(528);
      if (lookahead == 'l') ADVANCE(510);
      if (lookahead == 'm') ADVANCE(487);
      if (lookahead == 'o') ADVANCE(526);
      if (lookahead == 's') ADVANCE(501);
      if (lookahead == 'v') ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(532);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 335:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(335)
      if (lookahead == '\r') SKIP(11)
      if (lookahead == '"') ADVANCE(472);
      if (lookahead == '#') ADVANCE(420);
      if (lookahead == '(') ADVANCE(379);
      if (lookahead == '-') ADVANCE(403);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == 'F') ADVANCE(544);
      if (lookahead == 'T') ADVANCE(581);
      if (lookahead == '_') ADVANCE(450);
      if (lookahead == 'f') ADVANCE(485);
      if (lookahead == 't') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(532);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 336:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(336)
      if (lookahead == '\r') SKIP(12)
      if (lookahead == '#') ADVANCE(420);
      if (lookahead == '%') ADVANCE(400);
      if (lookahead == '&') ADVANCE(407);
      if (lookahead == '\'') ADVANCE(456);
      if (lookahead == '*') ADVANCE(398);
      if (lookahead == '+') ADVANCE(401);
      if (lookahead == ',') ADVANCE(388);
      if (lookahead == '-') ADVANCE(403);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == '/') ADVANCE(399);
      if (lookahead == ';') ADVANCE(389);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == '>') ADVANCE(45);
      if (lookahead == 'A') ADVANCE(584);
      if (lookahead == 'T') ADVANCE(578);
      if (lookahead == 'W') ADVANCE(565);
      if (lookahead == '[') ADVANCE(461);
      if (lookahead == '_') ADVANCE(450);
      if (lookahead == 'a') ADVANCE(527);
      if (lookahead == 't') ADVANCE(521);
      if (lookahead == 'w') ADVANCE(507);
      if (lookahead == '|') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(532);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 337:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(337)
      if (lookahead == '\r') SKIP(13)
      if (lookahead == '#') ADVANCE(420);
      if (lookahead == '%') ADVANCE(400);
      if (lookahead == '&') ADVANCE(407);
      if (lookahead == '\'') ADVANCE(456);
      if (lookahead == '*') ADVANCE(398);
      if (lookahead == '+') ADVANCE(401);
      if (lookahead == '-') ADVANCE(403);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == '/') ADVANCE(399);
      if (lookahead == ';') ADVANCE(389);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == '>') ADVANCE(45);
      if (lookahead == 'A') ADVANCE(537);
      if (lookahead == 'O') ADVANCE(539);
      if (lookahead == 'P') ADVANCE(552);
      if (lookahead == '_') ADVANCE(450);
      if (lookahead == 'p') ADVANCE(493);
      if (lookahead == '|') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(532);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 338:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(338)
      if (lookahead == '\r') SKIP(14)
      if (lookahead == '#') ADVANCE(420);
      if (lookahead == '%') ADVANCE(400);
      if (lookahead == '&') ADVANCE(407);
      if (lookahead == '\'') ADVANCE(456);
      if (lookahead == '*') ADVANCE(398);
      if (lookahead == '+') ADVANCE(401);
      if (lookahead == '-') ADVANCE(403);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == '/') ADVANCE(399);
      if (lookahead == ';') ADVANCE(389);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == '>') ADVANCE(45);
      if (lookahead == 'A') ADVANCE(537);
      if (lookahead == 'O') ADVANCE(539);
      if (lookahead == 'T') ADVANCE(578);
      if (lookahead == '_') ADVANCE(450);
      if (lookahead == 't') ADVANCE(521);
      if (lookahead == '|') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(532);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 339:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(339)
      if (lookahead == '\r') SKIP(15)
      if (lookahead == '#') ADVANCE(420);
      if (lookahead == '%') ADVANCE(400);
      if (lookahead == '&') ADVANCE(407);
      if (lookahead == '\'') ADVANCE(456);
      if (lookahead == '*') ADVANCE(398);
      if (lookahead == '+') ADVANCE(401);
      if (lookahead == '-') ADVANCE(403);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == '/') ADVANCE(399);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == '>') ADVANCE(45);
      if (lookahead == 'A') ADVANCE(537);
      if (lookahead == 'O') ADVANCE(539);
      if (lookahead == 'T') ADVANCE(563);
      if (lookahead == '_') ADVANCE(450);
      if (lookahead == 't') ADVANCE(505);
      if (lookahead == '|') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(532);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 340:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(340)
      if (lookahead == '\r') SKIP(16)
      if (lookahead == '#') ADVANCE(420);
      if (lookahead == '%') ADVANCE(400);
      if (lookahead == '&') ADVANCE(407);
      if (lookahead == '\'') ADVANCE(456);
      if (lookahead == '*') ADVANCE(398);
      if (lookahead == '+') ADVANCE(401);
      if (lookahead == ',') ADVANCE(388);
      if (lookahead == '-') ADVANCE(403);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == '/') ADVANCE(399);
      if (lookahead == ';') ADVANCE(389);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == '>') ADVANCE(45);
      if (lookahead == 'P') ADVANCE(552);
      if (lookahead == '_') ADVANCE(450);
      if (lookahead == 'p') ADVANCE(493);
      if (lookahead == '|') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(532);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 341:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(341)
      if (lookahead == '\r') SKIP(17)
      if (lookahead == '#') ADVANCE(420);
      if (lookahead == '%') ADVANCE(400);
      if (lookahead == '&') ADVANCE(407);
      if (lookahead == '\'') ADVANCE(456);
      if (lookahead == ')') ADVANCE(380);
      if (lookahead == '*') ADVANCE(398);
      if (lookahead == '+') ADVANCE(401);
      if (lookahead == '-') ADVANCE(403);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == '/') ADVANCE(399);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == '>') ADVANCE(45);
      if (lookahead == 'A') ADVANCE(537);
      if (lookahead == 'O') ADVANCE(539);
      if (lookahead == '_') ADVANCE(450);
      if (lookahead == '|') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(532);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 342:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(342)
      if (lookahead == '\r') SKIP(18)
      if (lookahead == '#') ADVANCE(420);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(560);
      if (lookahead == 'P') ADVANCE(580);
      if (lookahead == 'R') ADVANCE(555);
      if (lookahead == '_') ADVANCE(450);
      if (lookahead == 'e') ADVANCE(512);
      if (lookahead == 'i') ADVANCE(502);
      if (lookahead == 'p') ADVANCE(523);
      if (lookahead == 'r') ADVANCE(497);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(532);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 343:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(343)
      if (lookahead == '\r') SKIP(19)
      if (lookahead == '#') ADVANCE(420);
      if (lookahead == '%') ADVANCE(400);
      if (lookahead == '&') ADVANCE(407);
      if (lookahead == '\'') ADVANCE(456);
      if (lookahead == '*') ADVANCE(398);
      if (lookahead == '+') ADVANCE(401);
      if (lookahead == ',') ADVANCE(388);
      if (lookahead == '-') ADVANCE(403);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == '/') ADVANCE(399);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == '>') ADVANCE(45);
      if (lookahead == 'A') ADVANCE(584);
      if (lookahead == ']') ADVANCE(462);
      if (lookahead == '_') ADVANCE(450);
      if (lookahead == 'a') ADVANCE(527);
      if (lookahead == '|') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(532);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 344:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(344)
      if (lookahead == '\r') SKIP(20)
      if (lookahead == '#') ADVANCE(420);
      if (lookahead == '(') ADVANCE(379);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == ':') ADVANCE(467);
      if (lookahead == '<') ADVANCE(392);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == 'A') ADVANCE(571);
      if (lookahead == '_') ADVANCE(450);
      if (lookahead == 'a') ADVANCE(513);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(532);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 345:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(345)
      if (lookahead == '\r') SKIP(21)
      if (lookahead == '#') ADVANCE(420);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == 'I') ADVANCE(560);
      if (lookahead == 'P') ADVANCE(580);
      if (lookahead == 'R') ADVANCE(555);
      if (lookahead == '_') ADVANCE(450);
      if (lookahead == 'i') ADVANCE(502);
      if (lookahead == 'p') ADVANCE(523);
      if (lookahead == 'r') ADVANCE(497);
      if (lookahead == '}') ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(532);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 346:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(346)
      if (lookahead == '\r') SKIP(22)
      if (lookahead == '#') ADVANCE(420);
      if (lookahead == ')') ADVANCE(380);
      if (lookahead == ',') ADVANCE(388);
      if (lookahead == '-') ADVANCE(403);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == ':') ADVANCE(467);
      if (lookahead == ';') ADVANCE(389);
      if (lookahead == '<') ADVANCE(392);
      if (lookahead == '>') ADVANCE(394);
      if (lookahead == 'B') ADVANCE(49);
      if (lookahead == 'F') ADVANCE(64);
      if (lookahead == 'Q') ADVANCE(85);
      if (lookahead == 'S') ADVANCE(57);
      if (lookahead == 'W') ADVANCE(62);
      if (lookahead == 'b') ADVANCE(231);
      if (lookahead == 'f') ADVANCE(196);
      if (lookahead == 's') ADVANCE(295);
      if (lookahead == '|') ADVANCE(408);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(279);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(240);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(92);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(230);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(271);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(251);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(144);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(160);
      END_STATE();
    case 347:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(347)
      if (lookahead == '\r') SKIP(23)
      if (lookahead == '#') ADVANCE(420);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == 'B') ADVANCE(577);
      if (lookahead == 'D') ADVANCE(543);
      if (lookahead == 'E') ADVANCE(548);
      if (lookahead == 'F') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(575);
      if (lookahead == 'J') ADVANCE(585);
      if (lookahead == 'S') ADVANCE(587);
      if (lookahead == 'V') ADVANCE(554);
      if (lookahead == '_') ADVANCE(450);
      if (lookahead == 'b') ADVANCE(520);
      if (lookahead == 'd') ADVANCE(484);
      if (lookahead == 'e') ADVANCE(489);
      if (lookahead == 'f') ADVANCE(511);
      if (lookahead == 'i') ADVANCE(518);
      if (lookahead == 'j') ADVANCE(528);
      if (lookahead == 's') ADVANCE(530);
      if (lookahead == 'v') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(532);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 348:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(348)
      if (lookahead == '\r') SKIP(24)
      if (lookahead == '#') ADVANCE(420);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == 'A') ADVANCE(571);
      if (lookahead == 'S') ADVANCE(556);
      if (lookahead == '_') ADVANCE(450);
      if (lookahead == 'a') ADVANCE(513);
      if (lookahead == 's') ADVANCE(498);
      if (lookahead == '}') ADVANCE(373);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(532);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 349:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(349)
      if (lookahead == '\r') SKIP(25)
      if (lookahead == '#') ADVANCE(420);
      if (lookahead == ')') ADVANCE(380);
      if (lookahead == ',') ADVANCE(388);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == ':') ADVANCE(467);
      if (lookahead == '<') ADVANCE(392);
      if (lookahead == '>') ADVANCE(394);
      if (lookahead == '_') ADVANCE(450);
      if (lookahead == '|') ADVANCE(408);
      if (lookahead == '}') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(532);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 350:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(350)
      if (lookahead == '\r') SKIP(26)
      if (lookahead == '#') ADVANCE(420);
      if (lookahead == ',') ADVANCE(388);
      if (lookahead == '-') ADVANCE(403);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == ':') ADVANCE(467);
      if (lookahead == ';') ADVANCE(389);
      if (lookahead == 'P') ADVANCE(552);
      if (lookahead == 'W') ADVANCE(535);
      if (lookahead == '_') ADVANCE(450);
      if (lookahead == 'p') ADVANCE(493);
      if (lookahead == '|') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(532);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 351:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(351)
      if (lookahead == '\r') SKIP(27)
      if (lookahead == '#') ADVANCE(420);
      if (lookahead == '(') ADVANCE(379);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == 'S') ADVANCE(557);
      if (lookahead == '_') ADVANCE(450);
      if (lookahead == 's') ADVANCE(499);
      if (lookahead == '{') ADVANCE(372);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(532);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 352:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(352)
      if (lookahead == '\r') SKIP(28)
      if (lookahead == '#') ADVANCE(420);
      if (lookahead == '(') ADVANCE(379);
      if (lookahead == ')') ADVANCE(380);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == ';') ADVANCE(389);
      if (lookahead == '=') ADVANCE(386);
      if (lookahead == 'I') ADVANCE(576);
      if (lookahead == 'M') ADVANCE(566);
      if (lookahead == 'U') ADVANCE(574);
      if (lookahead == '_') ADVANCE(450);
      if (lookahead == 'i') ADVANCE(519);
      if (lookahead == 'm') ADVANCE(508);
      if (lookahead == 'u') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(532);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 353:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(353)
      if (lookahead == '\r') SKIP(29)
      if (lookahead == '#') ADVANCE(420);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == 'A') ADVANCE(538);
      if (lookahead == 'R') ADVANCE(533);
      if (lookahead == 'S') ADVANCE(540);
      if (lookahead == '_') ADVANCE(450);
      if (lookahead == '{') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(532);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 354:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(354)
      if (lookahead == '\r') SKIP(30)
      if (lookahead == '#') ADVANCE(420);
      if (lookahead == ',') ADVANCE(388);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == ';') ADVANCE(389);
      if (lookahead == 'T') ADVANCE(578);
      if (lookahead == 'W') ADVANCE(565);
      if (lookahead == '_') ADVANCE(450);
      if (lookahead == 't') ADVANCE(521);
      if (lookahead == 'w') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(532);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 355:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(355)
      if (lookahead == '\r') SKIP(31)
      if (lookahead == '#') ADVANCE(420);
      if (lookahead == ')') ADVANCE(380);
      if (lookahead == ',') ADVANCE(388);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == 'A') ADVANCE(586);
      if (lookahead == 'D') ADVANCE(550);
      if (lookahead == '_') ADVANCE(450);
      if (lookahead == 'a') ADVANCE(529);
      if (lookahead == 'd') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(532);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 356:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(356)
      if (lookahead == '\r') SKIP(32)
      if (lookahead == '#') ADVANCE(420);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == 'F') ADVANCE(582);
      if (lookahead == '_') ADVANCE(450);
      if (lookahead == 'f') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(532);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 357:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(357)
      if (lookahead == '\r') SKIP(33)
      if (lookahead == '#') ADVANCE(420);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(232);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(195);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(230);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(302);
      END_STATE();
    case 358:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(358)
      if (lookahead == '\r') SKIP(34)
      if (lookahead == '"') ADVANCE(472);
      if (lookahead == '#') ADVANCE(420);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(84);
      END_STATE();
    case 359:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(359)
      if (lookahead == '\r') SKIP(35)
      if (lookahead == '#') ADVANCE(420);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(560);
      if (lookahead == 'P') ADVANCE(580);
      if (lookahead == 'R') ADVANCE(555);
      if (lookahead == '_') ADVANCE(450);
      if (lookahead == 'e') ADVANCE(515);
      if (lookahead == 'i') ADVANCE(502);
      if (lookahead == 'p') ADVANCE(523);
      if (lookahead == 'r') ADVANCE(497);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(532);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 360:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(478);
      END_STATE();
    case 361:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(360);
      END_STATE();
    case 362:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(361);
      END_STATE();
    case 363:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(362);
      END_STATE();
    case 364:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(363);
      END_STATE();
    case 365:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(364);
      END_STATE();
    case 366:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(365);
      END_STATE();
    case 367:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      END_STATE();
    case 368:
      if (eof) ADVANCE(371);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 369:
      if (eof) ADVANCE(371);
      if (lookahead == '\n') SKIP(370)
      END_STATE();
    case 370:
      if (eof) ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(370)
      if (lookahead == '\r') SKIP(369)
      if (lookahead == '!') ADVANCE(42);
      if (lookahead == '"') ADVANCE(472);
      if (lookahead == '#') ADVANCE(420);
      if (lookahead == '%') ADVANCE(400);
      if (lookahead == '&') ADVANCE(407);
      if (lookahead == '\'') ADVANCE(456);
      if (lookahead == ')') ADVANCE(380);
      if (lookahead == '*') ADVANCE(398);
      if (lookahead == '+') ADVANCE(402);
      if (lookahead == ',') ADVANCE(388);
      if (lookahead == '-') ADVANCE(403);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == '/') ADVANCE(399);
      if (lookahead == ':') ADVANCE(467);
      if (lookahead == ';') ADVANCE(389);
      if (lookahead == '<') ADVANCE(393);
      if (lookahead == '=') ADVANCE(387);
      if (lookahead == '>') ADVANCE(395);
      if (lookahead == 'A') ADVANCE(67);
      if (lookahead == 'F') ADVANCE(70);
      if (lookahead == 'G') ADVANCE(76);
      if (lookahead == 'O') ADVANCE(72);
      if (lookahead == 'Q') ADVANCE(85);
      if (lookahead == 'R') ADVANCE(55);
      if (lookahead == 'S') ADVANCE(88);
      if (lookahead == '[') ADVANCE(461);
      if (lookahead == ']') ADVANCE(462);
      if (lookahead == 'a') ADVANCE(131);
      if (lookahead == 'f') ADVANCE(93);
      if (lookahead == 'r') ADVANCE(164);
      if (lookahead == '{') ADVANCE(372);
      if (lookahead == '|') ADVANCE(408);
      if (lookahead == '}') ADVANCE(373);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(257);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(191);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(221);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(234);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(145);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(182);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_createSignature_token1);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_createSignature_token2);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_createSignature_token3);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_createSignature_token4);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_QUERY);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_FOR);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_GRAPH);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_API);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_SYNTAX);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_RETURNS);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(417);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_typedef_token1);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_typedef_token2);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(405);
      if (lookahead == '=') ADVANCE(415);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(416);
      if (lookahead == '>') ADVANCE(406);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_constant_token2);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '/') ADVANCE(420);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(440);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(466);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_condition_token2);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_condition_token3);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_condition_token4);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(420);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_accumDeclStmt_token1);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(423);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_accumType_token1);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_accumType_token2);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_accumType_token3);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_accumType_token4);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_accumType_token5);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_accumType_token5);
      if (lookahead == ' ') ADVANCE(139);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_accumType_token6);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_accumType_token7);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_accumType_token8);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_accumType_token9);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_accumType_token10);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_accumType_token11);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_accumType_token12);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_accumType_token13);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_accumType_token14);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_elementType_token1);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_queryBodyIfStmt_token1);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_queryBodyIfStmt_token2);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_queryBodyIfStmt_token3);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_queryBodyIfStmt_token4);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_fileDeclStmt_token1);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_simpleSet_token1);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_simpleSet_token2);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_simpleSet_token3);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_seed_token1);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_DOT_STAR);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_seed_token2);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_selectVertParams_token1);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_printStmt_token1);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_printStmt_token2);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_printStmt_token3);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_printExpr_token1);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_returnStmt_token1);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_gsqlSelectClause_token1);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_fromClause_token1);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_WHERE);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_accumClause_token1);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_postAccumClause_token1);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_perClauseV2_token1);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_stringLiteral_token1);
      if (lookahead == '*') ADVANCE(475);
      if (lookahead == '/') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(477);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_stringLiteral_token1);
      if (lookahead == '*') ADVANCE(474);
      if (lookahead == '/') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(475);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_stringLiteral_token1);
      if (lookahead == '*') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(475);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_stringLiteral_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(476);
      if (lookahead == '\r') ADVANCE(477);
      if (lookahead == '#') ADVANCE(477);
      if (lookahead == '/') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(477);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_stringLiteral_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(477);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_name_token1);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(291);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(266);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(305);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(291);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(305);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(203);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(203);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(197);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(235);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(242);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(242);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(227);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(180);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(180);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(273);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(249);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(97);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(220);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(303);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(97);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(220);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(303);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(260);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(220);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(442);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(442);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(410);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(411);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(442);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(287);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(165);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(165);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(90);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(313);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(244);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(163);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(227);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(197);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(235);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(272);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(235);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(273);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(323);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(323);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(460);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(410);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(411);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(287);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(301);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(238);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(281);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(313);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(460);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(236);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(114);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(260);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(244);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_name_token2);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E') ADVANCE(82);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'H') ADVANCE(52);
      if (lookahead == 'h') ADVANCE(163);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'H') ADVANCE(59);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'N') ADVANCE(51);
      if (lookahead == 'P') ADVANCE(63);
      if (lookahead == 'n') ADVANCE(323);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(460);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'N') ADVANCE(50);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'P') ADVANCE(63);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'R') ADVANCE(414);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'Y') ADVANCE(66);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'Y') ADVANCE(66);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(97);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(220);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(291);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(266);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(305);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(291);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(305);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(203);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(203);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(197);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(235);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(242);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(242);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(227);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(180);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(180);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(273);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(249);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(303);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(97);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(220);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(303);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(260);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(220);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(442);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(442);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(410);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(411);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(442);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(287);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(165);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(165);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(90);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(313);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(244);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(163);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(227);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(197);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(235);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(272);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(235);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(273);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(323);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(410);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(411);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(287);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(301);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(238);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(281);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(313);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(460);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(236);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(114);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(260);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(244);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_baseType_token1);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_baseType_token2);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_baseType_token3);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_baseType_token4);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_baseType_token5);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_baseType_token6);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_SET);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_BAG);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_FILE);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 370},
  [2] = {.lex_state = 325},
  [3] = {.lex_state = 326},
  [4] = {.lex_state = 370},
  [5] = {.lex_state = 370},
  [6] = {.lex_state = 327},
  [7] = {.lex_state = 327},
  [8] = {.lex_state = 327},
  [9] = {.lex_state = 327},
  [10] = {.lex_state = 328},
  [11] = {.lex_state = 326},
  [12] = {.lex_state = 327},
  [13] = {.lex_state = 327},
  [14] = {.lex_state = 327},
  [15] = {.lex_state = 327},
  [16] = {.lex_state = 326},
  [17] = {.lex_state = 327},
  [18] = {.lex_state = 327},
  [19] = {.lex_state = 327},
  [20] = {.lex_state = 327},
  [21] = {.lex_state = 327},
  [22] = {.lex_state = 327},
  [23] = {.lex_state = 327},
  [24] = {.lex_state = 327},
  [25] = {.lex_state = 327},
  [26] = {.lex_state = 327},
  [27] = {.lex_state = 329},
  [28] = {.lex_state = 329},
  [29] = {.lex_state = 330},
  [30] = {.lex_state = 330},
  [31] = {.lex_state = 330},
  [32] = {.lex_state = 329},
  [33] = {.lex_state = 325},
  [34] = {.lex_state = 331},
  [35] = {.lex_state = 331},
  [36] = {.lex_state = 332},
  [37] = {.lex_state = 332},
  [38] = {.lex_state = 332},
  [39] = {.lex_state = 331},
  [40] = {.lex_state = 325},
  [41] = {.lex_state = 333},
  [42] = {.lex_state = 333},
  [43] = {.lex_state = 333},
  [44] = {.lex_state = 325},
  [45] = {.lex_state = 326},
  [46] = {.lex_state = 334},
  [47] = {.lex_state = 335},
  [48] = {.lex_state = 327},
  [49] = {.lex_state = 334},
  [50] = {.lex_state = 335},
  [51] = {.lex_state = 327},
  [52] = {.lex_state = 327},
  [53] = {.lex_state = 327},
  [54] = {.lex_state = 327},
  [55] = {.lex_state = 327},
  [56] = {.lex_state = 327},
  [57] = {.lex_state = 327},
  [58] = {.lex_state = 335},
  [59] = {.lex_state = 336},
  [60] = {.lex_state = 335},
  [61] = {.lex_state = 335},
  [62] = {.lex_state = 335},
  [63] = {.lex_state = 335},
  [64] = {.lex_state = 327},
  [65] = {.lex_state = 335},
  [66] = {.lex_state = 335},
  [67] = {.lex_state = 327},
  [68] = {.lex_state = 335},
  [69] = {.lex_state = 335},
  [70] = {.lex_state = 335},
  [71] = {.lex_state = 335},
  [72] = {.lex_state = 336},
  [73] = {.lex_state = 335},
  [74] = {.lex_state = 327},
  [75] = {.lex_state = 327},
  [76] = {.lex_state = 335},
  [77] = {.lex_state = 336},
  [78] = {.lex_state = 335},
  [79] = {.lex_state = 335},
  [80] = {.lex_state = 335},
  [81] = {.lex_state = 335},
  [82] = {.lex_state = 335},
  [83] = {.lex_state = 335},
  [84] = {.lex_state = 335},
  [85] = {.lex_state = 335},
  [86] = {.lex_state = 335},
  [87] = {.lex_state = 335},
  [88] = {.lex_state = 335},
  [89] = {.lex_state = 335},
  [90] = {.lex_state = 335},
  [91] = {.lex_state = 335},
  [92] = {.lex_state = 335},
  [93] = {.lex_state = 335},
  [94] = {.lex_state = 335},
  [95] = {.lex_state = 335},
  [96] = {.lex_state = 335},
  [97] = {.lex_state = 335},
  [98] = {.lex_state = 335},
  [99] = {.lex_state = 335},
  [100] = {.lex_state = 337},
  [101] = {.lex_state = 337},
  [102] = {.lex_state = 337},
  [103] = {.lex_state = 338},
  [104] = {.lex_state = 338},
  [105] = {.lex_state = 338},
  [106] = {.lex_state = 339},
  [107] = {.lex_state = 340},
  [108] = {.lex_state = 341},
  [109] = {.lex_state = 342},
  [110] = {.lex_state = 341},
  [111] = {.lex_state = 343},
  [112] = {.lex_state = 341},
  [113] = {.lex_state = 343},
  [114] = {.lex_state = 343},
  [115] = {.lex_state = 339},
  [116] = {.lex_state = 339},
  [117] = {.lex_state = 340},
  [118] = {.lex_state = 340},
  [119] = {.lex_state = 342},
  [120] = {.lex_state = 325},
  [121] = {.lex_state = 344},
  [122] = {.lex_state = 345},
  [123] = {.lex_state = 345},
  [124] = {.lex_state = 345},
  [125] = {.lex_state = 344},
  [126] = {.lex_state = 345},
  [127] = {.lex_state = 346},
  [128] = {.lex_state = 345},
  [129] = {.lex_state = 359},
  [130] = {.lex_state = 345},
  [131] = {.lex_state = 346},
  [132] = {.lex_state = 346},
  [133] = {.lex_state = 345},
  [134] = {.lex_state = 345},
  [135] = {.lex_state = 345},
  [136] = {.lex_state = 346},
  [137] = {.lex_state = 359},
  [138] = {.lex_state = 347},
  [139] = {.lex_state = 347},
  [140] = {.lex_state = 347},
  [141] = {.lex_state = 327},
  [142] = {.lex_state = 346},
  [143] = {.lex_state = 327},
  [144] = {.lex_state = 344},
  [145] = {.lex_state = 327},
  [146] = {.lex_state = 347},
  [147] = {.lex_state = 327},
  [148] = {.lex_state = 344},
  [149] = {.lex_state = 344},
  [150] = {.lex_state = 347},
  [151] = {.lex_state = 346},
  [152] = {.lex_state = 347},
  [153] = {.lex_state = 347},
  [154] = {.lex_state = 327},
  [155] = {.lex_state = 327},
  [156] = {.lex_state = 327},
  [157] = {.lex_state = 327},
  [158] = {.lex_state = 327},
  [159] = {.lex_state = 327},
  [160] = {.lex_state = 327},
  [161] = {.lex_state = 327},
  [162] = {.lex_state = 327},
  [163] = {.lex_state = 327},
  [164] = {.lex_state = 327},
  [165] = {.lex_state = 325},
  [166] = {.lex_state = 327},
  [167] = {.lex_state = 327},
  [168] = {.lex_state = 327},
  [169] = {.lex_state = 327},
  [170] = {.lex_state = 325},
  [171] = {.lex_state = 325},
  [172] = {.lex_state = 327},
  [173] = {.lex_state = 327},
  [174] = {.lex_state = 327},
  [175] = {.lex_state = 327},
  [176] = {.lex_state = 348},
  [177] = {.lex_state = 327},
  [178] = {.lex_state = 370},
  [179] = {.lex_state = 349},
  [180] = {.lex_state = 349},
  [181] = {.lex_state = 370},
  [182] = {.lex_state = 350},
  [183] = {.lex_state = 350},
  [184] = {.lex_state = 370},
  [185] = {.lex_state = 370},
  [186] = {.lex_state = 370},
  [187] = {.lex_state = 348},
  [188] = {.lex_state = 350},
  [189] = {.lex_state = 370},
  [190] = {.lex_state = 370},
  [191] = {.lex_state = 349},
  [192] = {.lex_state = 351},
  [193] = {.lex_state = 325},
  [194] = {.lex_state = 344},
  [195] = {.lex_state = 325},
  [196] = {.lex_state = 335},
  [197] = {.lex_state = 325},
  [198] = {.lex_state = 335},
  [199] = {.lex_state = 325},
  [200] = {.lex_state = 333},
  [201] = {.lex_state = 325},
  [202] = {.lex_state = 325},
  [203] = {.lex_state = 352},
  [204] = {.lex_state = 333},
  [205] = {.lex_state = 352},
  [206] = {.lex_state = 352},
  [207] = {.lex_state = 350},
  [208] = {.lex_state = 333},
  [209] = {.lex_state = 333},
  [210] = {.lex_state = 333},
  [211] = {.lex_state = 353},
  [212] = {.lex_state = 354},
  [213] = {.lex_state = 333},
  [214] = {.lex_state = 354},
  [215] = {.lex_state = 354},
  [216] = {.lex_state = 333},
  [217] = {.lex_state = 355},
  [218] = {.lex_state = 353},
  [219] = {.lex_state = 353},
  [220] = {.lex_state = 346},
  [221] = {.lex_state = 333},
  [222] = {.lex_state = 333},
  [223] = {.lex_state = 355},
  [224] = {.lex_state = 333},
  [225] = {.lex_state = 333},
  [226] = {.lex_state = 333},
  [227] = {.lex_state = 346},
  [228] = {.lex_state = 355},
  [229] = {.lex_state = 349},
  [230] = {.lex_state = 346},
  [231] = {.lex_state = 349},
  [232] = {.lex_state = 333},
  [233] = {.lex_state = 333},
  [234] = {.lex_state = 346},
  [235] = {.lex_state = 333},
  [236] = {.lex_state = 333},
  [237] = {.lex_state = 346},
  [238] = {.lex_state = 333},
  [239] = {.lex_state = 325},
  [240] = {.lex_state = 333},
  [241] = {.lex_state = 342},
  [242] = {.lex_state = 333},
  [243] = {.lex_state = 333},
  [244] = {.lex_state = 333},
  [245] = {.lex_state = 346},
  [246] = {.lex_state = 333},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 333},
  [249] = {.lex_state = 349},
  [250] = {.lex_state = 333},
  [251] = {.lex_state = 352},
  [252] = {.lex_state = 346},
  [253] = {.lex_state = 333},
  [254] = {.lex_state = 346},
  [255] = {.lex_state = 346},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 333},
  [258] = {.lex_state = 345},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 333},
  [261] = {.lex_state = 359},
  [262] = {.lex_state = 333},
  [263] = {.lex_state = 333},
  [264] = {.lex_state = 349},
  [265] = {.lex_state = 346},
  [266] = {.lex_state = 349},
  [267] = {.lex_state = 370},
  [268] = {.lex_state = 370},
  [269] = {.lex_state = 333},
  [270] = {.lex_state = 333},
  [271] = {.lex_state = 333},
  [272] = {.lex_state = 333},
  [273] = {.lex_state = 333},
  [274] = {.lex_state = 333},
  [275] = {.lex_state = 333},
  [276] = {.lex_state = 370},
  [277] = {.lex_state = 370},
  [278] = {.lex_state = 370},
  [279] = {.lex_state = 333},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 346},
  [282] = {.lex_state = 346},
  [283] = {.lex_state = 333},
  [284] = {.lex_state = 349},
  [285] = {.lex_state = 333},
  [286] = {.lex_state = 346},
  [287] = {.lex_state = 356},
  [288] = {.lex_state = 346},
  [289] = {.lex_state = 356},
  [290] = {.lex_state = 333},
  [291] = {.lex_state = 346},
  [292] = {.lex_state = 370},
  [293] = {.lex_state = 333},
  [294] = {.lex_state = 346},
  [295] = {.lex_state = 349},
  [296] = {.lex_state = 356},
  [297] = {.lex_state = 333},
  [298] = {.lex_state = 333},
  [299] = {.lex_state = 333},
  [300] = {.lex_state = 349},
  [301] = {.lex_state = 352},
  [302] = {.lex_state = 333},
  [303] = {.lex_state = 333},
  [304] = {.lex_state = 333},
  [305] = {.lex_state = 333},
  [306] = {.lex_state = 333},
  [307] = {.lex_state = 333},
  [308] = {.lex_state = 370},
  [309] = {.lex_state = 333},
  [310] = {.lex_state = 333},
  [311] = {.lex_state = 333},
  [312] = {.lex_state = 333},
  [313] = {.lex_state = 326},
  [314] = {.lex_state = 370},
  [315] = {.lex_state = 333},
  [316] = {.lex_state = 333},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 333},
  [320] = {.lex_state = 370},
  [321] = {.lex_state = 370},
  [322] = {.lex_state = 333},
  [323] = {.lex_state = 333},
  [324] = {.lex_state = 333},
  [325] = {.lex_state = 346},
  [326] = {.lex_state = 333},
  [327] = {.lex_state = 346},
  [328] = {.lex_state = 370},
  [329] = {.lex_state = 333},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 370},
  [332] = {.lex_state = 346},
  [333] = {.lex_state = 333},
  [334] = {.lex_state = 346},
  [335] = {.lex_state = 333},
  [336] = {.lex_state = 333},
  [337] = {.lex_state = 333},
  [338] = {.lex_state = 333},
  [339] = {.lex_state = 333},
  [340] = {.lex_state = 333},
  [341] = {.lex_state = 352},
  [342] = {.lex_state = 352},
  [343] = {.lex_state = 333},
  [344] = {.lex_state = 333},
  [345] = {.lex_state = 333},
  [346] = {.lex_state = 333},
  [347] = {.lex_state = 333},
  [348] = {.lex_state = 333},
  [349] = {.lex_state = 333},
  [350] = {.lex_state = 346},
  [351] = {.lex_state = 333},
  [352] = {.lex_state = 333},
  [353] = {.lex_state = 333},
  [354] = {.lex_state = 333},
  [355] = {.lex_state = 370},
  [356] = {.lex_state = 333},
  [357] = {.lex_state = 333},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 333},
  [360] = {.lex_state = 333},
  [361] = {.lex_state = 333},
  [362] = {.lex_state = 333},
  [363] = {.lex_state = 370},
  [364] = {.lex_state = 370},
  [365] = {.lex_state = 352},
  [366] = {.lex_state = 333},
  [367] = {.lex_state = 370},
  [368] = {.lex_state = 370},
  [369] = {.lex_state = 333},
  [370] = {.lex_state = 333},
  [371] = {.lex_state = 333},
  [372] = {.lex_state = 333},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 333},
  [375] = {.lex_state = 333},
  [376] = {.lex_state = 333},
  [377] = {.lex_state = 333},
  [378] = {.lex_state = 357},
  [379] = {.lex_state = 370},
  [380] = {.lex_state = 333},
  [381] = {.lex_state = 333},
  [382] = {.lex_state = 333},
  [383] = {.lex_state = 333},
  [384] = {.lex_state = 346},
  [385] = {.lex_state = 370},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 333},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 333},
  [390] = {.lex_state = 333},
  [391] = {.lex_state = 333},
  [392] = {.lex_state = 333},
  [393] = {.lex_state = 333},
  [394] = {.lex_state = 333},
  [395] = {.lex_state = 333},
  [396] = {.lex_state = 370},
  [397] = {.lex_state = 333},
  [398] = {.lex_state = 333},
  [399] = {.lex_state = 333},
  [400] = {.lex_state = 333},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 346},
  [403] = {.lex_state = 370},
  [404] = {.lex_state = 326},
  [405] = {.lex_state = 326},
  [406] = {.lex_state = 352},
  [407] = {.lex_state = 326},
  [408] = {.lex_state = 346},
  [409] = {.lex_state = 326},
  [410] = {.lex_state = 326},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 370},
  [413] = {.lex_state = 370},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 333},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 91},
  [419] = {.lex_state = 326},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 352},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 326},
  [424] = {.lex_state = 91},
  [425] = {.lex_state = 326},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 370},
  [428] = {.lex_state = 325},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 325},
  [431] = {.lex_state = 325},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 91},
  [435] = {.lex_state = 346},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 352},
  [438] = {.lex_state = 333},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 325},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 326},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 333},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 326},
  [450] = {.lex_state = 325},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 333},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 346},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 326},
  [467] = {.lex_state = 326},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 326},
  [474] = {.lex_state = 346},
  [475] = {.lex_state = 325},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 326},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 333},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 325},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 325},
  [499] = {.lex_state = 326},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 326},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 325},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 370},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 326},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 370},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 326},
  [547] = {.lex_state = 370},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 346},
  [550] = {.lex_state = 326},
  [551] = {.lex_state = 326},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 370},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 370},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 325},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 325},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 370},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 370},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 326},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 325},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 370},
  [600] = {.lex_state = 326},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 326},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 370},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 326},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 370},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 370},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 326},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 326},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 326},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 370},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 370},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 326},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 326},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 326},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 326},
  [677] = {.lex_state = 326},
  [678] = {.lex_state = 0},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 370},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 325},
  [689] = {.lex_state = 325},
  [690] = {.lex_state = 370},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 370},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 0},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 370},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 370},
  [718] = {.lex_state = 370},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_API] = ACTIONS(1),
    [anon_sym_SYNTAX] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_typedef_token1] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [aux_sym_constant_token1] = ACTIONS(1),
    [aux_sym_constant_token2] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [aux_sym_condition_token1] = ACTIONS(1),
    [aux_sym_condition_token2] = ACTIONS(1),
    [aux_sym_condition_token3] = ACTIONS(1),
    [anon_sym_AND] = ACTIONS(1),
    [anon_sym_OR] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [aux_sym_accumDeclStmt_token1] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [aux_sym_accumType_token1] = ACTIONS(1),
    [aux_sym_accumType_token3] = ACTIONS(1),
    [aux_sym_accumType_token4] = ACTIONS(1),
    [aux_sym_accumType_token5] = ACTIONS(1),
    [aux_sym_accumType_token8] = ACTIONS(1),
    [aux_sym_accumType_token9] = ACTIONS(1),
    [aux_sym_accumType_token10] = ACTIONS(1),
    [aux_sym_accumType_token12] = ACTIONS(1),
    [aux_sym_accumType_token13] = ACTIONS(1),
    [aux_sym_accumType_token14] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_queryBodyIfStmt_token1] = ACTIONS(1),
    [aux_sym_queryBodyIfStmt_token2] = ACTIONS(1),
    [aux_sym_queryBodyIfStmt_token3] = ACTIONS(1),
    [aux_sym_queryBodyIfStmt_token4] = ACTIONS(1),
    [aux_sym_fileDeclStmt_token1] = ACTIONS(1),
    [aux_sym_simpleSet_token1] = ACTIONS(1),
    [aux_sym_simpleSet_token3] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [aux_sym_seed_token1] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym_printStmt_token1] = ACTIONS(1),
    [aux_sym_printStmt_token2] = ACTIONS(1),
    [aux_sym_printStmt_token3] = ACTIONS(1),
    [aux_sym_printExpr_token1] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_returnStmt_token1] = ACTIONS(1),
    [aux_sym_gsqlSelectClause_token1] = ACTIONS(1),
    [aux_sym_fromClause_token1] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_WHERE] = ACTIONS(1),
    [aux_sym_perClauseV2_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [aux_sym_integer_token1] = ACTIONS(1),
    [aux_sym_name_token1] = ACTIONS(1),
    [aux_sym_name_token2] = ACTIONS(1),
    [aux_sym_baseType_token1] = ACTIONS(1),
    [aux_sym_baseType_token2] = ACTIONS(1),
    [aux_sym_baseType_token3] = ACTIONS(1),
    [aux_sym_baseType_token4] = ACTIONS(1),
    [aux_sym_baseType_token5] = ACTIONS(1),
    [aux_sym_baseType_token6] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(720),
    [sym_createQuery] = STATE(331),
    [sym_createSignature] = STATE(719),
    [aux_sym_source_file_repeat1] = STATE(331),
    [aux_sym_createSignature_token1] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 39,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_typedef_token1,
    ACTIONS(9), 1,
      aux_sym_accumDeclStmt_token1,
    ACTIONS(11), 1,
      aux_sym_accumType_token1,
    ACTIONS(13), 1,
      aux_sym_accumType_token2,
    ACTIONS(15), 1,
      aux_sym_accumType_token3,
    ACTIONS(17), 1,
      aux_sym_accumType_token4,
    ACTIONS(21), 1,
      aux_sym_accumType_token7,
    ACTIONS(23), 1,
      aux_sym_accumType_token8,
    ACTIONS(25), 1,
      aux_sym_accumType_token9,
    ACTIONS(27), 1,
      aux_sym_accumType_token10,
    ACTIONS(29), 1,
      aux_sym_accumType_token13,
    ACTIONS(31), 1,
      aux_sym_accumType_token14,
    ACTIONS(33), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(35), 1,
      aux_sym_fileDeclStmt_token1,
    ACTIONS(37), 1,
      anon_sym__,
    ACTIONS(39), 1,
      aux_sym_printStmt_token1,
    ACTIONS(41), 1,
      aux_sym_returnStmt_token1,
    ACTIONS(45), 1,
      aux_sym_baseType_token2,
    STATE(3), 1,
      sym_typedefs,
    STATE(16), 1,
      aux_sym_declStmts_repeat1,
    STATE(40), 1,
      aux_sym_typedefs_repeat1,
    STATE(128), 1,
      sym_declStmts,
    STATE(135), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(251), 1,
      sym_name,
    STATE(411), 1,
      sym_accumType,
    STATE(415), 1,
      sym_baseType,
    STATE(571), 1,
      sym_vertexSetName,
    STATE(574), 1,
      sym_gsqlSelectClause,
    STATE(696), 1,
      sym_gsqlSelectBlock,
    STATE(699), 1,
      sym_queryBodyStmt,
    STATE(700), 1,
      sym_queryBodyStmts,
    STATE(702), 1,
      sym_declStmt,
    STATE(703), 1,
      sym_typedef,
    STATE(704), 1,
      sym_queryBody,
    ACTIONS(43), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(698), 3,
      sym_accumDeclStmt,
      sym_baseDeclStmt,
      sym_fileDeclStmt,
    STATE(697), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
    ACTIONS(19), 6,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [130] = 34,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_accumDeclStmt_token1,
    ACTIONS(11), 1,
      aux_sym_accumType_token1,
    ACTIONS(13), 1,
      aux_sym_accumType_token2,
    ACTIONS(15), 1,
      aux_sym_accumType_token3,
    ACTIONS(17), 1,
      aux_sym_accumType_token4,
    ACTIONS(21), 1,
      aux_sym_accumType_token7,
    ACTIONS(23), 1,
      aux_sym_accumType_token8,
    ACTIONS(25), 1,
      aux_sym_accumType_token9,
    ACTIONS(27), 1,
      aux_sym_accumType_token10,
    ACTIONS(29), 1,
      aux_sym_accumType_token13,
    ACTIONS(31), 1,
      aux_sym_accumType_token14,
    ACTIONS(33), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(35), 1,
      aux_sym_fileDeclStmt_token1,
    ACTIONS(37), 1,
      anon_sym__,
    ACTIONS(39), 1,
      aux_sym_printStmt_token1,
    ACTIONS(41), 1,
      aux_sym_returnStmt_token1,
    ACTIONS(45), 1,
      aux_sym_baseType_token2,
    STATE(16), 1,
      aux_sym_declStmts_repeat1,
    STATE(133), 1,
      sym_declStmts,
    STATE(135), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(251), 1,
      sym_name,
    STATE(411), 1,
      sym_accumType,
    STATE(415), 1,
      sym_baseType,
    STATE(571), 1,
      sym_vertexSetName,
    STATE(574), 1,
      sym_gsqlSelectClause,
    STATE(682), 1,
      sym_queryBodyStmts,
    STATE(696), 1,
      sym_gsqlSelectBlock,
    STATE(699), 1,
      sym_queryBodyStmt,
    STATE(702), 1,
      sym_declStmt,
    ACTIONS(43), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(698), 3,
      sym_accumDeclStmt,
      sym_baseDeclStmt,
      sym_fileDeclStmt,
    STATE(697), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
    ACTIONS(19), 6,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [245] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 5,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PLUS,
    ACTIONS(47), 30,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS_EQ,
      aux_sym_queryBodyIfStmt_token2,
      anon_sym_SQUOTE,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      aux_sym_perClauseV2_token1,
  [288] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 5,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PLUS,
    ACTIONS(51), 29,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS_EQ,
      aux_sym_queryBodyIfStmt_token2,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      aux_sym_perClauseV2_token1,
  [330] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_DOT,
    ACTIONS(61), 1,
      aux_sym_integer_token1,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    ACTIONS(57), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(55), 27,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      aux_sym_queryBodyIfStmt_token2,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_perClauseV2_token1,
  [377] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      aux_sym_integer_token1,
    ACTIONS(67), 1,
      anon_sym_DOT,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    ACTIONS(65), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(63), 27,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      aux_sym_queryBodyIfStmt_token2,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_perClauseV2_token1,
  [424] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      aux_sym_integer_token1,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    ACTIONS(71), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(69), 28,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT,
      aux_sym_queryBodyIfStmt_token2,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_perClauseV2_token1,
  [469] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      aux_sym_integer_token1,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    ACTIONS(78), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(76), 27,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      aux_sym_queryBodyIfStmt_token2,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_perClauseV2_token1,
  [513] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(80), 28,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      aux_sym_queryBodyIfStmt_token2,
      anon_sym_SQUOTE,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_perClauseV2_token1,
  [553] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      aux_sym_accumDeclStmt_token1,
    ACTIONS(87), 1,
      aux_sym_accumType_token1,
    ACTIONS(90), 1,
      aux_sym_accumType_token2,
    ACTIONS(93), 1,
      aux_sym_accumType_token3,
    ACTIONS(96), 1,
      aux_sym_accumType_token4,
    ACTIONS(102), 1,
      aux_sym_accumType_token7,
    ACTIONS(105), 1,
      aux_sym_accumType_token8,
    ACTIONS(108), 1,
      aux_sym_accumType_token9,
    ACTIONS(111), 1,
      aux_sym_accumType_token10,
    ACTIONS(114), 1,
      aux_sym_accumType_token13,
    ACTIONS(117), 1,
      aux_sym_accumType_token14,
    ACTIONS(122), 1,
      aux_sym_fileDeclStmt_token1,
    ACTIONS(127), 1,
      aux_sym_baseType_token2,
    STATE(11), 1,
      aux_sym_declStmts_repeat1,
    STATE(411), 1,
      sym_accumType,
    STATE(415), 1,
      sym_baseType,
    STATE(702), 1,
      sym_declStmt,
    ACTIONS(125), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(698), 3,
      sym_accumDeclStmt,
      sym_baseDeclStmt,
      sym_fileDeclStmt,
    ACTIONS(120), 4,
      aux_sym_queryBodyIfStmt_token1,
      anon_sym__,
      aux_sym_printStmt_token1,
      aux_sym_returnStmt_token1,
    ACTIONS(99), 6,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [631] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      aux_sym_integer_token1,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    ACTIONS(132), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(130), 27,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      aux_sym_queryBodyIfStmt_token2,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_perClauseV2_token1,
  [675] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      aux_sym_integer_token1,
    STATE(14), 1,
      aux_sym_integer_repeat1,
    ACTIONS(132), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(130), 27,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      aux_sym_queryBodyIfStmt_token2,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_perClauseV2_token1,
  [719] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      aux_sym_integer_token1,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    ACTIONS(138), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(136), 27,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      aux_sym_queryBodyIfStmt_token2,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_perClauseV2_token1,
  [763] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      aux_sym_integer_token1,
    STATE(12), 1,
      aux_sym_integer_repeat1,
    ACTIONS(78), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(76), 27,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      aux_sym_queryBodyIfStmt_token2,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_perClauseV2_token1,
  [807] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_accumDeclStmt_token1,
    ACTIONS(11), 1,
      aux_sym_accumType_token1,
    ACTIONS(13), 1,
      aux_sym_accumType_token2,
    ACTIONS(15), 1,
      aux_sym_accumType_token3,
    ACTIONS(17), 1,
      aux_sym_accumType_token4,
    ACTIONS(21), 1,
      aux_sym_accumType_token7,
    ACTIONS(23), 1,
      aux_sym_accumType_token8,
    ACTIONS(25), 1,
      aux_sym_accumType_token9,
    ACTIONS(27), 1,
      aux_sym_accumType_token10,
    ACTIONS(29), 1,
      aux_sym_accumType_token13,
    ACTIONS(31), 1,
      aux_sym_accumType_token14,
    ACTIONS(35), 1,
      aux_sym_fileDeclStmt_token1,
    ACTIONS(45), 1,
      aux_sym_baseType_token2,
    STATE(11), 1,
      aux_sym_declStmts_repeat1,
    STATE(411), 1,
      sym_accumType,
    STATE(415), 1,
      sym_baseType,
    STATE(702), 1,
      sym_declStmt,
    ACTIONS(144), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(698), 3,
      sym_accumDeclStmt,
      sym_baseDeclStmt,
      sym_fileDeclStmt,
    ACTIONS(142), 4,
      aux_sym_queryBodyIfStmt_token1,
      anon_sym__,
      aux_sym_printStmt_token1,
      aux_sym_returnStmt_token1,
    ACTIONS(19), 6,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [885] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_SQUOTE,
    ACTIONS(149), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(146), 27,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      aux_sym_queryBodyIfStmt_token2,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_perClauseV2_token1,
  [926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(154), 27,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      aux_sym_queryBodyIfStmt_token2,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_perClauseV2_token1,
  [964] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(158), 27,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      aux_sym_queryBodyIfStmt_token2,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_perClauseV2_token1,
  [1002] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(146), 27,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      aux_sym_queryBodyIfStmt_token2,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_perClauseV2_token1,
  [1040] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(162), 27,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      aux_sym_queryBodyIfStmt_token2,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_perClauseV2_token1,
  [1078] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(166), 27,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      aux_sym_queryBodyIfStmt_token2,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_perClauseV2_token1,
  [1116] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(170), 27,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      aux_sym_queryBodyIfStmt_token2,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_perClauseV2_token1,
  [1154] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(174), 27,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      aux_sym_queryBodyIfStmt_token2,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_perClauseV2_token1,
  [1192] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(178), 27,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      aux_sym_queryBodyIfStmt_token2,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_perClauseV2_token1,
  [1230] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(182), 27,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      aux_sym_queryBodyIfStmt_token2,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_perClauseV2_token1,
  [1268] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(32), 1,
      aux_sym_name_repeat1,
    ACTIONS(192), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(194), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(190), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(188), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      aux_sym_perClauseV2_token1,
  [1311] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(28), 1,
      aux_sym_name_repeat1,
    ACTIONS(200), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(203), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(198), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(196), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      aux_sym_perClauseV2_token1,
  [1354] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(30), 1,
      aux_sym_name_repeat1,
    ACTIONS(206), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(208), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(190), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(188), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      aux_sym_printStmt_token3,
  [1397] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(31), 1,
      aux_sym_name_repeat1,
    ACTIONS(214), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(216), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(212), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(210), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      aux_sym_printStmt_token3,
  [1440] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(31), 1,
      aux_sym_name_repeat1,
    ACTIONS(218), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(221), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(198), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(196), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      aux_sym_printStmt_token3,
  [1483] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(28), 1,
      aux_sym_name_repeat1,
    ACTIONS(224), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(226), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(212), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(210), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      aux_sym_perClauseV2_token1,
  [1526] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      aux_sym_typedef_token1,
    STATE(33), 1,
      aux_sym_typedefs_repeat1,
    STATE(703), 1,
      sym_typedef,
    ACTIONS(233), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(231), 23,
      aux_sym_accumDeclStmt_token1,
      aux_sym_accumType_token1,
      aux_sym_accumType_token2,
      aux_sym_accumType_token3,
      aux_sym_accumType_token4,
      aux_sym_accumType_token5,
      aux_sym_accumType_token7,
      aux_sym_accumType_token8,
      aux_sym_accumType_token9,
      aux_sym_accumType_token10,
      aux_sym_accumType_token13,
      aux_sym_accumType_token14,
      aux_sym_queryBodyIfStmt_token1,
      aux_sym_fileDeclStmt_token1,
      anon_sym__,
      aux_sym_printStmt_token1,
      aux_sym_returnStmt_token1,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [1568] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(34), 1,
      aux_sym_name_repeat1,
    ACTIONS(235), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(238), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(198), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(196), 20,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT,
      anon_sym_SQUOTE,
  [1610] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(34), 1,
      aux_sym_name_repeat1,
    ACTIONS(241), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(243), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(212), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(210), 20,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT,
      anon_sym_SQUOTE,
  [1652] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_name_repeat1,
    ACTIONS(245), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(248), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(198), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(196), 20,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT,
      aux_sym_queryBodyIfStmt_token2,
      anon_sym_SQUOTE,
  [1694] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_name_repeat1,
    ACTIONS(251), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(253), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(212), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(210), 20,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT,
      aux_sym_queryBodyIfStmt_token2,
      anon_sym_SQUOTE,
  [1736] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(37), 1,
      aux_sym_name_repeat1,
    ACTIONS(255), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(257), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(190), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(188), 20,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT,
      aux_sym_queryBodyIfStmt_token2,
      anon_sym_SQUOTE,
  [1778] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(35), 1,
      aux_sym_name_repeat1,
    ACTIONS(259), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(261), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(190), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(188), 20,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT,
      anon_sym_SQUOTE,
  [1820] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_typedef_token1,
    STATE(33), 1,
      aux_sym_typedefs_repeat1,
    STATE(703), 1,
      sym_typedef,
    ACTIONS(265), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(263), 23,
      aux_sym_accumDeclStmt_token1,
      aux_sym_accumType_token1,
      aux_sym_accumType_token2,
      aux_sym_accumType_token3,
      aux_sym_accumType_token4,
      aux_sym_accumType_token5,
      aux_sym_accumType_token7,
      aux_sym_accumType_token8,
      aux_sym_accumType_token9,
      aux_sym_accumType_token10,
      aux_sym_accumType_token13,
      aux_sym_accumType_token14,
      aux_sym_queryBodyIfStmt_token1,
      aux_sym_fileDeclStmt_token1,
      anon_sym__,
      aux_sym_printStmt_token1,
      aux_sym_returnStmt_token1,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [1862] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(41), 1,
      aux_sym_name_repeat1,
    ACTIONS(198), 2,
      anon_sym_SLASH,
      anon_sym_PLUS,
    ACTIONS(267), 4,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(196), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_PLUS_EQ,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [1900] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(43), 1,
      aux_sym_name_repeat1,
    ACTIONS(190), 2,
      anon_sym_SLASH,
      anon_sym_PLUS,
    ACTIONS(270), 4,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(188), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_PLUS_EQ,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [1938] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(41), 1,
      aux_sym_name_repeat1,
    ACTIONS(212), 2,
      anon_sym_SLASH,
      anon_sym_PLUS,
    ACTIONS(272), 4,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(210), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_PLUS_EQ,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [1976] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(231), 24,
      aux_sym_typedef_token1,
      aux_sym_accumDeclStmt_token1,
      aux_sym_accumType_token1,
      aux_sym_accumType_token2,
      aux_sym_accumType_token3,
      aux_sym_accumType_token4,
      aux_sym_accumType_token5,
      aux_sym_accumType_token7,
      aux_sym_accumType_token8,
      aux_sym_accumType_token9,
      aux_sym_accumType_token10,
      aux_sym_accumType_token13,
      aux_sym_accumType_token14,
      aux_sym_queryBodyIfStmt_token1,
      aux_sym_fileDeclStmt_token1,
      anon_sym__,
      aux_sym_printStmt_token1,
      aux_sym_returnStmt_token1,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [2010] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(120), 23,
      aux_sym_accumDeclStmt_token1,
      aux_sym_accumType_token1,
      aux_sym_accumType_token2,
      aux_sym_accumType_token3,
      aux_sym_accumType_token4,
      aux_sym_accumType_token5,
      aux_sym_accumType_token7,
      aux_sym_accumType_token8,
      aux_sym_accumType_token9,
      aux_sym_accumType_token10,
      aux_sym_accumType_token13,
      aux_sym_accumType_token14,
      aux_sym_queryBodyIfStmt_token1,
      aux_sym_fileDeclStmt_token1,
      anon_sym__,
      aux_sym_printStmt_token1,
      aux_sym_returnStmt_token1,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [2043] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_accumType_token1,
    ACTIONS(13), 1,
      aux_sym_accumType_token2,
    ACTIONS(15), 1,
      aux_sym_accumType_token3,
    ACTIONS(17), 1,
      aux_sym_accumType_token4,
    ACTIONS(21), 1,
      aux_sym_accumType_token7,
    ACTIONS(23), 1,
      aux_sym_accumType_token8,
    ACTIONS(25), 1,
      aux_sym_accumType_token9,
    ACTIONS(27), 1,
      aux_sym_accumType_token10,
    ACTIONS(29), 1,
      aux_sym_accumType_token13,
    ACTIONS(31), 1,
      aux_sym_accumType_token14,
    ACTIONS(45), 1,
      aux_sym_baseType_token2,
    ACTIONS(274), 1,
      aux_sym_accumType_token5,
    ACTIONS(276), 1,
      anon_sym__,
    STATE(467), 1,
      sym_name,
    STATE(677), 1,
      sym_type,
    ACTIONS(278), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(669), 3,
      sym_accumType,
      sym_tupleType,
      sym_baseType,
    ACTIONS(19), 5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [2108] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_DASH,
    ACTIONS(286), 1,
      anon_sym_AT_AT,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(290), 1,
      anon_sym__,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      aux_sym_integer_token1,
    STATE(6), 1,
      aux_sym_integer_repeat1,
    STATE(26), 1,
      sym_globalAccumName,
    STATE(145), 1,
      sym_name,
    STATE(147), 1,
      sym_expr,
    STATE(364), 1,
      sym_vExprSet,
    STATE(403), 1,
      sym_tableName,
    STATE(412), 1,
      sym_printExpr,
    ACTIONS(282), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(296), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(19), 2,
      sym_integer,
      sym_real,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
  [2174] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_SLASH,
    ACTIONS(306), 1,
      aux_sym_condition_token1,
    ACTIONS(308), 1,
      aux_sym_condition_token2,
    ACTIONS(310), 1,
      aux_sym_condition_token3,
    STATE(91), 1,
      sym_comparisonOperator,
    STATE(98), 1,
      sym_mathOperator,
    ACTIONS(300), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(298), 4,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_perClauseV2_token1,
    ACTIONS(312), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(302), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [2222] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_accumType_token1,
    ACTIONS(13), 1,
      aux_sym_accumType_token2,
    ACTIONS(15), 1,
      aux_sym_accumType_token3,
    ACTIONS(17), 1,
      aux_sym_accumType_token4,
    ACTIONS(21), 1,
      aux_sym_accumType_token7,
    ACTIONS(23), 1,
      aux_sym_accumType_token8,
    ACTIONS(25), 1,
      aux_sym_accumType_token9,
    ACTIONS(27), 1,
      aux_sym_accumType_token10,
    ACTIONS(29), 1,
      aux_sym_accumType_token13,
    ACTIONS(31), 1,
      aux_sym_accumType_token14,
    ACTIONS(45), 1,
      aux_sym_baseType_token2,
    ACTIONS(276), 1,
      anon_sym__,
    STATE(467), 1,
      sym_name,
    ACTIONS(278), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(600), 3,
      sym_accumType,
      sym_tupleType,
      sym_baseType,
    ACTIONS(19), 6,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [2282] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_DASH,
    ACTIONS(286), 1,
      anon_sym_AT_AT,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(290), 1,
      anon_sym__,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      aux_sym_integer_token1,
    STATE(6), 1,
      aux_sym_integer_repeat1,
    STATE(26), 1,
      sym_globalAccumName,
    STATE(145), 1,
      sym_name,
    STATE(147), 1,
      sym_expr,
    STATE(364), 1,
      sym_vExprSet,
    STATE(368), 1,
      sym_printExpr,
    STATE(403), 1,
      sym_tableName,
    ACTIONS(282), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(296), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(19), 2,
      sym_integer,
      sym_real,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
  [2348] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_SLASH,
    ACTIONS(310), 1,
      aux_sym_condition_token3,
    ACTIONS(314), 1,
      aux_sym_condition_token1,
    ACTIONS(316), 1,
      aux_sym_condition_token2,
    STATE(89), 1,
      sym_mathOperator,
    STATE(94), 1,
      sym_comparisonOperator,
    ACTIONS(300), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(298), 4,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_printStmt_token3,
    ACTIONS(312), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(302), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [2396] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(185), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(182), 19,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      aux_sym_perClauseV2_token1,
  [2429] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_SLASH,
    ACTIONS(310), 1,
      aux_sym_condition_token3,
    ACTIONS(320), 1,
      aux_sym_condition_token1,
    ACTIONS(322), 1,
      aux_sym_condition_token2,
    STATE(85), 1,
      sym_comparisonOperator,
    STATE(88), 1,
      sym_mathOperator,
    ACTIONS(300), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(298), 3,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_queryBodyIfStmt_token2,
    ACTIONS(312), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(302), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [2476] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_SLASH,
    STATE(98), 1,
      sym_mathOperator,
    ACTIONS(326), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(328), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(324), 11,
      anon_sym_SEMI,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      aux_sym_perClauseV2_token1,
  [2513] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_SLASH,
    ACTIONS(310), 1,
      aux_sym_condition_token3,
    ACTIONS(334), 1,
      aux_sym_condition_token1,
    ACTIONS(336), 1,
      aux_sym_condition_token2,
    STATE(81), 1,
      sym_comparisonOperator,
    STATE(92), 1,
      sym_mathOperator,
    ACTIONS(300), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(298), 3,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
    ACTIONS(312), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(302), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [2560] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_SLASH,
    STATE(89), 1,
      sym_mathOperator,
    ACTIONS(326), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(328), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(324), 11,
      anon_sym_SEMI,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      aux_sym_printStmt_token3,
  [2597] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(185), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(182), 19,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      aux_sym_printStmt_token3,
  [2630] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      aux_sym_integer_token1,
    ACTIONS(340), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym__,
    STATE(6), 1,
      aux_sym_integer_repeat1,
    STATE(26), 1,
      sym_globalAccumName,
    STATE(163), 1,
      sym_expr,
    STATE(169), 1,
      sym_name,
    STATE(558), 1,
      sym_vSetProj,
    ACTIONS(282), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(344), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(19), 2,
      sym_integer,
      sym_real,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
  [2690] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_SLASH,
    STATE(59), 1,
      aux_sym_name_repeat1,
    ACTIONS(346), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(349), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(196), 16,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
  [2726] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      aux_sym_integer_token1,
    ACTIONS(352), 1,
      anon_sym_AT_AT,
    ACTIONS(354), 1,
      anon_sym__,
    STATE(6), 1,
      aux_sym_integer_repeat1,
    STATE(26), 1,
      sym_globalAccumName,
    STATE(48), 1,
      sym_expr,
    STATE(52), 1,
      sym_name,
    STATE(439), 1,
      sym_condition,
    ACTIONS(282), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(356), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(19), 2,
      sym_integer,
      sym_real,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
  [2786] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      aux_sym_integer_token1,
    ACTIONS(352), 1,
      anon_sym_AT_AT,
    ACTIONS(354), 1,
      anon_sym__,
    STATE(6), 1,
      aux_sym_integer_repeat1,
    STATE(26), 1,
      sym_globalAccumName,
    STATE(48), 1,
      sym_expr,
    STATE(52), 1,
      sym_name,
    STATE(426), 1,
      sym_condition,
    ACTIONS(282), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(356), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(19), 2,
      sym_integer,
      sym_real,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
  [2846] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      aux_sym_integer_token1,
    ACTIONS(358), 1,
      anon_sym_AT_AT,
    ACTIONS(360), 1,
      anon_sym__,
    STATE(6), 1,
      aux_sym_integer_repeat1,
    STATE(26), 1,
      sym_globalAccumName,
    STATE(55), 1,
      sym_expr,
    STATE(75), 1,
      sym_name,
    STATE(484), 1,
      sym_condition,
    ACTIONS(282), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(362), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(19), 2,
      sym_integer,
      sym_real,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
  [2906] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym__,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      aux_sym_integer_token1,
    ACTIONS(364), 1,
      anon_sym_AT_AT,
    STATE(6), 1,
      aux_sym_integer_repeat1,
    STATE(26), 1,
      sym_globalAccumName,
    STATE(170), 1,
      sym_expr,
    STATE(171), 1,
      sym_name,
    STATE(668), 1,
      sym_argList,
    ACTIONS(43), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(282), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(19), 2,
      sym_integer,
      sym_real,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
  [2966] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_SLASH,
    STATE(92), 1,
      sym_mathOperator,
    ACTIONS(326), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(328), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(324), 10,
      anon_sym_RPAREN,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3002] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      aux_sym_integer_token1,
    ACTIONS(366), 1,
      anon_sym_AT_AT,
    ACTIONS(368), 1,
      anon_sym__,
    STATE(6), 1,
      aux_sym_integer_repeat1,
    STATE(26), 1,
      sym_globalAccumName,
    STATE(53), 1,
      sym_expr,
    STATE(74), 1,
      sym_name,
    STATE(471), 1,
      sym_condition,
    ACTIONS(282), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(370), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(19), 2,
      sym_integer,
      sym_real,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
  [3062] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      aux_sym_integer_token1,
    ACTIONS(366), 1,
      anon_sym_AT_AT,
    ACTIONS(368), 1,
      anon_sym__,
    STATE(6), 1,
      aux_sym_integer_repeat1,
    STATE(26), 1,
      sym_globalAccumName,
    STATE(53), 1,
      sym_expr,
    STATE(74), 1,
      sym_name,
    STATE(507), 1,
      sym_condition,
    ACTIONS(282), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(370), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(19), 2,
      sym_integer,
      sym_real,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
  [3122] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_SLASH,
    STATE(88), 1,
      sym_mathOperator,
    ACTIONS(326), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(328), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(324), 10,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      aux_sym_queryBodyIfStmt_token2,
  [3158] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      aux_sym_integer_token1,
    ACTIONS(372), 1,
      anon_sym_AT_AT,
    ACTIONS(374), 1,
      anon_sym__,
    STATE(6), 1,
      aux_sym_integer_repeat1,
    STATE(26), 1,
      sym_globalAccumName,
    STATE(51), 1,
      sym_expr,
    STATE(57), 1,
      sym_name,
    STATE(436), 1,
      sym_condition,
    ACTIONS(282), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(376), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(19), 2,
      sym_integer,
      sym_real,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
  [3218] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      aux_sym_integer_token1,
    ACTIONS(366), 1,
      anon_sym_AT_AT,
    ACTIONS(368), 1,
      anon_sym__,
    STATE(6), 1,
      aux_sym_integer_repeat1,
    STATE(26), 1,
      sym_globalAccumName,
    STATE(53), 1,
      sym_expr,
    STATE(74), 1,
      sym_name,
    STATE(459), 1,
      sym_condition,
    ACTIONS(282), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(370), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(19), 2,
      sym_integer,
      sym_real,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
  [3278] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      aux_sym_integer_token1,
    ACTIONS(372), 1,
      anon_sym_AT_AT,
    ACTIONS(374), 1,
      anon_sym__,
    STATE(6), 1,
      aux_sym_integer_repeat1,
    STATE(26), 1,
      sym_globalAccumName,
    STATE(51), 1,
      sym_expr,
    STATE(57), 1,
      sym_name,
    STATE(422), 1,
      sym_condition,
    ACTIONS(282), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(376), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(19), 2,
      sym_integer,
      sym_real,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
  [3338] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      aux_sym_integer_token1,
    ACTIONS(366), 1,
      anon_sym_AT_AT,
    ACTIONS(368), 1,
      anon_sym__,
    STATE(6), 1,
      aux_sym_integer_repeat1,
    STATE(26), 1,
      sym_globalAccumName,
    STATE(53), 1,
      sym_expr,
    STATE(74), 1,
      sym_name,
    STATE(493), 1,
      sym_condition,
    ACTIONS(282), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(370), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(19), 2,
      sym_integer,
      sym_real,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
  [3398] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_SLASH,
    STATE(59), 1,
      aux_sym_name_repeat1,
    ACTIONS(378), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(380), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(210), 16,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
  [3434] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      aux_sym_integer_token1,
    ACTIONS(372), 1,
      anon_sym_AT_AT,
    ACTIONS(374), 1,
      anon_sym__,
    STATE(6), 1,
      aux_sym_integer_repeat1,
    STATE(26), 1,
      sym_globalAccumName,
    STATE(51), 1,
      sym_expr,
    STATE(57), 1,
      sym_name,
    STATE(416), 1,
      sym_condition,
    ACTIONS(282), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(376), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(19), 2,
      sym_integer,
      sym_real,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
  [3494] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_DOT,
    ACTIONS(185), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(182), 18,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      aux_sym_queryBodyIfStmt_token2,
  [3526] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(185), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(182), 18,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3558] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      aux_sym_integer_token1,
    ACTIONS(358), 1,
      anon_sym_AT_AT,
    ACTIONS(360), 1,
      anon_sym__,
    STATE(6), 1,
      aux_sym_integer_repeat1,
    STATE(26), 1,
      sym_globalAccumName,
    STATE(55), 1,
      sym_expr,
    STATE(75), 1,
      sym_name,
    STATE(460), 1,
      sym_condition,
    ACTIONS(282), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(362), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(19), 2,
      sym_integer,
      sym_real,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
  [3618] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_SLASH,
    STATE(72), 1,
      aux_sym_name_repeat1,
    ACTIONS(386), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(388), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(188), 16,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
  [3654] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      aux_sym_integer_token1,
    ACTIONS(340), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym__,
    STATE(6), 1,
      aux_sym_integer_repeat1,
    STATE(26), 1,
      sym_globalAccumName,
    STATE(163), 1,
      sym_expr,
    STATE(169), 1,
      sym_name,
    STATE(513), 1,
      sym_vSetProj,
    ACTIONS(282), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(344), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(19), 2,
      sym_integer,
      sym_real,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
  [3714] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      aux_sym_integer_token1,
    ACTIONS(390), 1,
      anon_sym_AT_AT,
    ACTIONS(392), 1,
      anon_sym__,
    STATE(6), 1,
      aux_sym_integer_repeat1,
    STATE(26), 1,
      sym_globalAccumName,
    STATE(161), 1,
      sym_expr,
    STATE(173), 1,
      sym_name,
    ACTIONS(282), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(394), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(19), 2,
      sym_integer,
      sym_real,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
  [3771] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      aux_sym_integer_token1,
    ACTIONS(390), 1,
      anon_sym_AT_AT,
    ACTIONS(392), 1,
      anon_sym__,
    STATE(6), 1,
      aux_sym_integer_repeat1,
    STATE(26), 1,
      sym_globalAccumName,
    STATE(168), 1,
      sym_expr,
    STATE(173), 1,
      sym_name,
    ACTIONS(282), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(394), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(19), 2,
      sym_integer,
      sym_real,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
  [3828] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      aux_sym_integer_token1,
    ACTIONS(396), 1,
      anon_sym_AT_AT,
    ACTIONS(398), 1,
      anon_sym__,
    STATE(6), 1,
      aux_sym_integer_repeat1,
    STATE(26), 1,
      sym_globalAccumName,
    STATE(164), 1,
      sym_expr,
    STATE(167), 1,
      sym_name,
    ACTIONS(282), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(400), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(19), 2,
      sym_integer,
      sym_real,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
  [3885] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      aux_sym_integer_token1,
    ACTIONS(390), 1,
      anon_sym_AT_AT,
    ACTIONS(392), 1,
      anon_sym__,
    STATE(6), 1,
      aux_sym_integer_repeat1,
    STATE(26), 1,
      sym_globalAccumName,
    STATE(173), 1,
      sym_name,
    STATE(175), 1,
      sym_expr,
    ACTIONS(282), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(394), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(19), 2,
      sym_integer,
      sym_real,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
  [3942] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym__,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      aux_sym_integer_token1,
    ACTIONS(364), 1,
      anon_sym_AT_AT,
    STATE(6), 1,
      aux_sym_integer_repeat1,
    STATE(26), 1,
      sym_globalAccumName,
    STATE(165), 1,
      sym_expr,
    STATE(171), 1,
      sym_name,
    ACTIONS(43), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(282), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(19), 2,
      sym_integer,
      sym_real,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
  [3999] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_DASH,
    ACTIONS(286), 1,
      anon_sym_AT_AT,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(290), 1,
      anon_sym__,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      aux_sym_integer_token1,
    STATE(6), 1,
      aux_sym_integer_repeat1,
    STATE(26), 1,
      sym_globalAccumName,
    STATE(141), 1,
      sym_expr,
    STATE(143), 1,
      sym_name,
    ACTIONS(282), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(296), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(19), 2,
      sym_integer,
      sym_real,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
  [4056] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      aux_sym_integer_token1,
    ACTIONS(402), 1,
      anon_sym_AT_AT,
    ACTIONS(404), 1,
      anon_sym__,
    STATE(6), 1,
      aux_sym_integer_repeat1,
    STATE(26), 1,
      sym_globalAccumName,
    STATE(166), 1,
      sym_expr,
    STATE(174), 1,
      sym_name,
    ACTIONS(282), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(406), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(19), 2,
      sym_integer,
      sym_real,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
  [4113] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      aux_sym_integer_token1,
    ACTIONS(340), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym__,
    STATE(6), 1,
      aux_sym_integer_repeat1,
    STATE(26), 1,
      sym_globalAccumName,
    STATE(169), 1,
      sym_name,
    STATE(172), 1,
      sym_expr,
    ACTIONS(282), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(344), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(19), 2,
      sym_integer,
      sym_real,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
  [4170] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      aux_sym_integer_token1,
    ACTIONS(396), 1,
      anon_sym_AT_AT,
    ACTIONS(398), 1,
      anon_sym__,
    STATE(6), 1,
      aux_sym_integer_repeat1,
    STATE(26), 1,
      sym_globalAccumName,
    STATE(167), 1,
      sym_name,
    STATE(177), 1,
      sym_expr,
    ACTIONS(282), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(400), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(19), 2,
      sym_integer,
      sym_real,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
  [4227] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      aux_sym_integer_token1,
    ACTIONS(366), 1,
      anon_sym_AT_AT,
    ACTIONS(368), 1,
      anon_sym__,
    STATE(6), 1,
      aux_sym_integer_repeat1,
    STATE(26), 1,
      sym_globalAccumName,
    STATE(67), 1,
      sym_expr,
    STATE(74), 1,
      sym_name,
    ACTIONS(282), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(370), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(19), 2,
      sym_integer,
      sym_real,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
  [4284] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      aux_sym_integer_token1,
    ACTIONS(372), 1,
      anon_sym_AT_AT,
    ACTIONS(374), 1,
      anon_sym__,
    STATE(6), 1,
      aux_sym_integer_repeat1,
    STATE(26), 1,
      sym_globalAccumName,
    STATE(56), 1,
      sym_expr,
    STATE(57), 1,
      sym_name,
    ACTIONS(282), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(376), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(19), 2,
      sym_integer,
      sym_real,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
  [4341] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      aux_sym_integer_token1,
    ACTIONS(408), 1,
      anon_sym_AT_AT,
    ACTIONS(410), 1,
      anon_sym__,
    STATE(6), 1,
      aux_sym_integer_repeat1,
    STATE(26), 1,
      sym_globalAccumName,
    STATE(155), 1,
      sym_name,
    STATE(157), 1,
      sym_expr,
    ACTIONS(282), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(412), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(19), 2,
      sym_integer,
      sym_real,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
  [4398] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      aux_sym_integer_token1,
    ACTIONS(408), 1,
      anon_sym_AT_AT,
    ACTIONS(410), 1,
      anon_sym__,
    STATE(6), 1,
      aux_sym_integer_repeat1,
    STATE(26), 1,
      sym_globalAccumName,
    STATE(154), 1,
      sym_expr,
    STATE(155), 1,
      sym_name,
    ACTIONS(282), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(412), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(19), 2,
      sym_integer,
      sym_real,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
  [4455] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      aux_sym_integer_token1,
    ACTIONS(358), 1,
      anon_sym_AT_AT,
    ACTIONS(360), 1,
      anon_sym__,
    STATE(6), 1,
      aux_sym_integer_repeat1,
    STATE(26), 1,
      sym_globalAccumName,
    STATE(64), 1,
      sym_expr,
    STATE(75), 1,
      sym_name,
    ACTIONS(282), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(362), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(19), 2,
      sym_integer,
      sym_real,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
  [4512] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      aux_sym_integer_token1,
    ACTIONS(402), 1,
      anon_sym_AT_AT,
    ACTIONS(404), 1,
      anon_sym__,
    STATE(6), 1,
      aux_sym_integer_repeat1,
    STATE(26), 1,
      sym_globalAccumName,
    STATE(160), 1,
      sym_expr,
    STATE(174), 1,
      sym_name,
    ACTIONS(282), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(406), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(19), 2,
      sym_integer,
      sym_real,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
  [4569] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      aux_sym_integer_token1,
    ACTIONS(414), 1,
      anon_sym_AT_AT,
    ACTIONS(416), 1,
      anon_sym__,
    STATE(6), 1,
      aux_sym_integer_repeat1,
    STATE(26), 1,
      sym_globalAccumName,
    STATE(158), 1,
      sym_expr,
    STATE(159), 1,
      sym_name,
    ACTIONS(282), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(418), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(19), 2,
      sym_integer,
      sym_real,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
  [4626] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      aux_sym_integer_token1,
    ACTIONS(414), 1,
      anon_sym_AT_AT,
    ACTIONS(416), 1,
      anon_sym__,
    STATE(6), 1,
      aux_sym_integer_repeat1,
    STATE(26), 1,
      sym_globalAccumName,
    STATE(156), 1,
      sym_expr,
    STATE(159), 1,
      sym_name,
    ACTIONS(282), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(418), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(19), 2,
      sym_integer,
      sym_real,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
  [4683] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      aux_sym_integer_token1,
    ACTIONS(390), 1,
      anon_sym_AT_AT,
    ACTIONS(392), 1,
      anon_sym__,
    STATE(6), 1,
      aux_sym_integer_repeat1,
    STATE(26), 1,
      sym_globalAccumName,
    STATE(162), 1,
      sym_expr,
    STATE(173), 1,
      sym_name,
    ACTIONS(282), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(394), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(19), 2,
      sym_integer,
      sym_real,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
  [4740] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym__,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      aux_sym_integer_token1,
    ACTIONS(364), 1,
      anon_sym_AT_AT,
    STATE(6), 1,
      aux_sym_integer_repeat1,
    STATE(26), 1,
      sym_globalAccumName,
    STATE(171), 1,
      sym_name,
    STATE(202), 1,
      sym_expr,
    ACTIONS(43), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(282), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(19), 2,
      sym_integer,
      sym_real,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
  [4797] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      aux_sym_integer_token1,
    ACTIONS(352), 1,
      anon_sym_AT_AT,
    ACTIONS(354), 1,
      anon_sym__,
    STATE(6), 1,
      aux_sym_integer_repeat1,
    STATE(26), 1,
      sym_globalAccumName,
    STATE(52), 1,
      sym_name,
    STATE(54), 1,
      sym_expr,
    ACTIONS(282), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(356), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(19), 2,
      sym_integer,
      sym_real,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
  [4854] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym__,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      aux_sym_integer_token1,
    ACTIONS(364), 1,
      anon_sym_AT_AT,
    STATE(6), 1,
      aux_sym_integer_repeat1,
    STATE(26), 1,
      sym_globalAccumName,
    STATE(171), 1,
      sym_name,
    STATE(193), 1,
      sym_expr,
    ACTIONS(43), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(282), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(19), 2,
      sym_integer,
      sym_real,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
  [4911] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_SLASH,
    STATE(101), 1,
      aux_sym_name_repeat1,
    ACTIONS(420), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(422), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(188), 14,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      aux_sym_perClauseV2_token1,
  [4945] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_SLASH,
    STATE(102), 1,
      aux_sym_name_repeat1,
    ACTIONS(424), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(426), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(210), 14,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      aux_sym_perClauseV2_token1,
  [4979] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_SLASH,
    STATE(102), 1,
      aux_sym_name_repeat1,
    ACTIONS(428), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(431), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(196), 14,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      aux_sym_perClauseV2_token1,
  [5013] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_SLASH,
    STATE(105), 1,
      aux_sym_name_repeat1,
    ACTIONS(434), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(436), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(188), 14,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      aux_sym_printStmt_token3,
  [5047] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_SLASH,
    STATE(104), 1,
      aux_sym_name_repeat1,
    ACTIONS(438), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(441), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(196), 14,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      aux_sym_printStmt_token3,
  [5081] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_SLASH,
    STATE(104), 1,
      aux_sym_name_repeat1,
    ACTIONS(444), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(446), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(210), 14,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      aux_sym_printStmt_token3,
  [5115] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_SLASH,
    STATE(116), 1,
      aux_sym_name_repeat1,
    ACTIONS(448), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(450), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(188), 13,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_DOT,
      aux_sym_queryBodyIfStmt_token2,
      anon_sym_SQUOTE,
  [5148] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_SLASH,
    STATE(118), 1,
      aux_sym_name_repeat1,
    ACTIONS(452), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(454), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(188), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      aux_sym_perClauseV2_token1,
  [5181] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_SLASH,
    ACTIONS(459), 1,
      aux_sym_name_token2,
    STATE(108), 1,
      aux_sym_name_repeat1,
    ACTIONS(456), 3,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
    ACTIONS(196), 13,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_DOT,
      anon_sym_SQUOTE,
  [5214] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(467), 1,
      anon_sym__,
    ACTIONS(470), 1,
      aux_sym_printStmt_token1,
    ACTIONS(473), 1,
      aux_sym_returnStmt_token1,
    STATE(109), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(251), 1,
      sym_name,
    STATE(571), 1,
      sym_vertexSetName,
    STATE(574), 1,
      sym_gsqlSelectClause,
    STATE(627), 1,
      sym_queryBodyStmt,
    STATE(696), 1,
      sym_gsqlSelectBlock,
    ACTIONS(465), 2,
      aux_sym_queryBodyIfStmt_token3,
      aux_sym_queryBodyIfStmt_token4,
    ACTIONS(476), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(697), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [5263] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_SLASH,
    ACTIONS(481), 1,
      aux_sym_name_token2,
    STATE(108), 1,
      aux_sym_name_repeat1,
    ACTIONS(479), 3,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
    ACTIONS(210), 13,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_DOT,
      anon_sym_SQUOTE,
  [5296] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_SLASH,
    STATE(111), 1,
      aux_sym_name_repeat1,
    ACTIONS(483), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(486), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(196), 13,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      aux_sym_printExpr_token1,
      anon_sym_RBRACK,
  [5329] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_SLASH,
    ACTIONS(491), 1,
      aux_sym_name_token2,
    STATE(110), 1,
      aux_sym_name_repeat1,
    ACTIONS(489), 3,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
    ACTIONS(188), 13,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_DOT,
      anon_sym_SQUOTE,
  [5362] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_SLASH,
    STATE(114), 1,
      aux_sym_name_repeat1,
    ACTIONS(493), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(495), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(188), 13,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      aux_sym_printExpr_token1,
      anon_sym_RBRACK,
  [5395] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_SLASH,
    STATE(111), 1,
      aux_sym_name_repeat1,
    ACTIONS(497), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(499), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(210), 13,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      aux_sym_printExpr_token1,
      anon_sym_RBRACK,
  [5428] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_SLASH,
    STATE(115), 1,
      aux_sym_name_repeat1,
    ACTIONS(501), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(504), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(196), 13,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_DOT,
      aux_sym_queryBodyIfStmt_token2,
      anon_sym_SQUOTE,
  [5461] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_SLASH,
    STATE(115), 1,
      aux_sym_name_repeat1,
    ACTIONS(507), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(509), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(210), 13,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_DOT,
      aux_sym_queryBodyIfStmt_token2,
      anon_sym_SQUOTE,
  [5494] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_SLASH,
    STATE(117), 1,
      aux_sym_name_repeat1,
    ACTIONS(511), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(514), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(196), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      aux_sym_perClauseV2_token1,
  [5527] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_SLASH,
    STATE(117), 1,
      aux_sym_name_repeat1,
    ACTIONS(517), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(519), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(210), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      aux_sym_perClauseV2_token1,
  [5560] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(37), 1,
      anon_sym__,
    ACTIONS(39), 1,
      aux_sym_printStmt_token1,
    ACTIONS(41), 1,
      aux_sym_returnStmt_token1,
    STATE(109), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(251), 1,
      sym_name,
    STATE(571), 1,
      sym_vertexSetName,
    STATE(574), 1,
      sym_gsqlSelectClause,
    STATE(627), 1,
      sym_queryBodyStmt,
    STATE(696), 1,
      sym_gsqlSelectBlock,
    ACTIONS(43), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(521), 2,
      aux_sym_queryBodyIfStmt_token3,
      aux_sym_queryBodyIfStmt_token4,
    STATE(697), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [5609] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_accumType_token1,
    ACTIONS(13), 1,
      aux_sym_accumType_token2,
    ACTIONS(15), 1,
      aux_sym_accumType_token3,
    ACTIONS(17), 1,
      aux_sym_accumType_token4,
    ACTIONS(21), 1,
      aux_sym_accumType_token7,
    ACTIONS(23), 1,
      aux_sym_accumType_token8,
    ACTIONS(25), 1,
      aux_sym_accumType_token9,
    ACTIONS(27), 1,
      aux_sym_accumType_token10,
    ACTIONS(29), 1,
      aux_sym_accumType_token13,
    ACTIONS(31), 1,
      aux_sym_accumType_token14,
    ACTIONS(45), 1,
      aux_sym_baseType_token2,
    STATE(582), 2,
      sym_accumType,
      sym_baseType,
    ACTIONS(19), 6,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [5658] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(525), 1,
      anon_sym_LT,
    ACTIONS(527), 1,
      anon_sym_AT_AT,
    ACTIONS(529), 1,
      anon_sym__,
    ACTIONS(531), 1,
      aux_sym_seed_token1,
    ACTIONS(533), 1,
      anon_sym_COLON,
    STATE(313), 1,
      sym_edgeSetType,
    STATE(405), 1,
      sym_name,
    STATE(504), 1,
      sym_atomicEdgeType,
    STATE(536), 1,
      sym_stepEdgeTypes,
    STATE(544), 1,
      sym_atomicEdgePattern,
    STATE(613), 1,
      sym_stepEdgeSet,
    STATE(716), 1,
      sym_pathEdgePattern,
    ACTIONS(278), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(410), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_edgeType,
  [5710] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym__,
    ACTIONS(39), 1,
      aux_sym_printStmt_token1,
    ACTIONS(41), 1,
      aux_sym_returnStmt_token1,
    ACTIONS(535), 1,
      aux_sym_queryBodyIfStmt_token1,
    STATE(129), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(251), 1,
      sym_name,
    STATE(571), 1,
      sym_vertexSetName,
    STATE(574), 1,
      sym_gsqlSelectClause,
    STATE(584), 1,
      sym_queryBodyStmts,
    STATE(640), 1,
      sym_queryBodyStmt,
    STATE(696), 1,
      sym_gsqlSelectBlock,
    ACTIONS(43), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(697), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [5758] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(465), 1,
      anon_sym_RBRACE,
    ACTIONS(467), 1,
      anon_sym__,
    ACTIONS(470), 1,
      aux_sym_printStmt_token1,
    ACTIONS(473), 1,
      aux_sym_returnStmt_token1,
    STATE(123), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(251), 1,
      sym_name,
    STATE(571), 1,
      sym_vertexSetName,
    STATE(574), 1,
      sym_gsqlSelectClause,
    STATE(696), 1,
      sym_gsqlSelectBlock,
    STATE(699), 1,
      sym_queryBodyStmt,
    ACTIONS(476), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(697), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [5806] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(37), 1,
      anon_sym__,
    ACTIONS(39), 1,
      aux_sym_printStmt_token1,
    ACTIONS(41), 1,
      aux_sym_returnStmt_token1,
    STATE(119), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(251), 1,
      sym_name,
    STATE(492), 1,
      sym_queryBodyStmts,
    STATE(571), 1,
      sym_vertexSetName,
    STATE(574), 1,
      sym_gsqlSelectClause,
    STATE(627), 1,
      sym_queryBodyStmt,
    STATE(696), 1,
      sym_gsqlSelectBlock,
    ACTIONS(43), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(697), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [5854] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(525), 1,
      anon_sym_LT,
    ACTIONS(527), 1,
      anon_sym_AT_AT,
    ACTIONS(529), 1,
      anon_sym__,
    ACTIONS(531), 1,
      aux_sym_seed_token1,
    ACTIONS(533), 1,
      anon_sym_COLON,
    STATE(405), 1,
      sym_name,
    STATE(466), 1,
      sym_edgeSetType,
    STATE(504), 1,
      sym_atomicEdgeType,
    STATE(536), 1,
      sym_stepEdgeTypes,
    STATE(544), 1,
      sym_atomicEdgePattern,
    STATE(601), 1,
      sym_pathEdgePattern,
    STATE(613), 1,
      sym_stepEdgeSet,
    ACTIONS(278), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(410), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_edgeType,
  [5906] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(37), 1,
      anon_sym__,
    ACTIONS(39), 1,
      aux_sym_printStmt_token1,
    ACTIONS(41), 1,
      aux_sym_returnStmt_token1,
    STATE(119), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(251), 1,
      sym_name,
    STATE(523), 1,
      sym_queryBodyStmts,
    STATE(571), 1,
      sym_vertexSetName,
    STATE(574), 1,
      sym_gsqlSelectClause,
    STATE(627), 1,
      sym_queryBodyStmt,
    STATE(696), 1,
      sym_gsqlSelectBlock,
    ACTIONS(43), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(697), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [5954] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_accumType_token2,
    ACTIONS(15), 1,
      aux_sym_accumType_token3,
    ACTIONS(17), 1,
      aux_sym_accumType_token4,
    ACTIONS(45), 1,
      aux_sym_baseType_token2,
    ACTIONS(537), 1,
      anon_sym_RPAREN,
    ACTIONS(539), 1,
      anon_sym_LT,
    ACTIONS(543), 1,
      anon_sym_FILE,
    STATE(339), 1,
      sym_parameterType,
    STATE(461), 1,
      sym_baseType,
    STATE(580), 1,
      sym_parameterList,
    ACTIONS(541), 2,
      anon_sym_SET,
      anon_sym_BAG,
    ACTIONS(19), 6,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [6000] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(37), 1,
      anon_sym__,
    ACTIONS(39), 1,
      aux_sym_printStmt_token1,
    ACTIONS(41), 1,
      aux_sym_returnStmt_token1,
    STATE(135), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(251), 1,
      sym_name,
    STATE(571), 1,
      sym_vertexSetName,
    STATE(574), 1,
      sym_gsqlSelectClause,
    STATE(682), 1,
      sym_queryBodyStmts,
    STATE(696), 1,
      sym_gsqlSelectBlock,
    STATE(699), 1,
      sym_queryBodyStmt,
    ACTIONS(43), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(697), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [6048] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(37), 1,
      anon_sym__,
    ACTIONS(39), 1,
      aux_sym_printStmt_token1,
    ACTIONS(41), 1,
      aux_sym_returnStmt_token1,
    ACTIONS(521), 1,
      aux_sym_queryBodyIfStmt_token4,
    STATE(137), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(251), 1,
      sym_name,
    STATE(571), 1,
      sym_vertexSetName,
    STATE(574), 1,
      sym_gsqlSelectClause,
    STATE(640), 1,
      sym_queryBodyStmt,
    STATE(696), 1,
      sym_gsqlSelectBlock,
    ACTIONS(43), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(697), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [6096] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym__,
    ACTIONS(39), 1,
      aux_sym_printStmt_token1,
    ACTIONS(41), 1,
      aux_sym_returnStmt_token1,
    ACTIONS(535), 1,
      aux_sym_queryBodyIfStmt_token1,
    STATE(129), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(251), 1,
      sym_name,
    STATE(571), 1,
      sym_vertexSetName,
    STATE(574), 1,
      sym_gsqlSelectClause,
    STATE(640), 1,
      sym_queryBodyStmt,
    STATE(675), 1,
      sym_queryBodyStmts,
    STATE(696), 1,
      sym_gsqlSelectBlock,
    ACTIONS(43), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(697), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [6144] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_accumType_token2,
    ACTIONS(15), 1,
      aux_sym_accumType_token3,
    ACTIONS(17), 1,
      aux_sym_accumType_token4,
    ACTIONS(45), 1,
      aux_sym_baseType_token2,
    ACTIONS(539), 1,
      anon_sym_LT,
    ACTIONS(543), 1,
      anon_sym_FILE,
    ACTIONS(545), 1,
      anon_sym_RPAREN,
    STATE(339), 1,
      sym_parameterType,
    STATE(461), 1,
      sym_baseType,
    STATE(678), 1,
      sym_parameterList,
    ACTIONS(541), 2,
      anon_sym_SET,
      anon_sym_BAG,
    ACTIONS(19), 6,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [6190] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_accumType_token2,
    ACTIONS(15), 1,
      aux_sym_accumType_token3,
    ACTIONS(17), 1,
      aux_sym_accumType_token4,
    ACTIONS(45), 1,
      aux_sym_baseType_token2,
    ACTIONS(539), 1,
      anon_sym_LT,
    ACTIONS(543), 1,
      anon_sym_FILE,
    ACTIONS(547), 1,
      anon_sym_RPAREN,
    STATE(339), 1,
      sym_parameterType,
    STATE(461), 1,
      sym_baseType,
    STATE(612), 1,
      sym_parameterList,
    ACTIONS(541), 2,
      anon_sym_SET,
      anon_sym_BAG,
    ACTIONS(19), 6,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [6236] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(37), 1,
      anon_sym__,
    ACTIONS(39), 1,
      aux_sym_printStmt_token1,
    ACTIONS(41), 1,
      aux_sym_returnStmt_token1,
    STATE(135), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(251), 1,
      sym_name,
    STATE(571), 1,
      sym_vertexSetName,
    STATE(574), 1,
      sym_gsqlSelectClause,
    STATE(662), 1,
      sym_queryBodyStmts,
    STATE(696), 1,
      sym_gsqlSelectBlock,
    STATE(699), 1,
      sym_queryBodyStmt,
    ACTIONS(43), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(697), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [6284] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(37), 1,
      anon_sym__,
    ACTIONS(39), 1,
      aux_sym_printStmt_token1,
    ACTIONS(41), 1,
      aux_sym_returnStmt_token1,
    STATE(119), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(251), 1,
      sym_name,
    STATE(509), 1,
      sym_queryBodyStmts,
    STATE(571), 1,
      sym_vertexSetName,
    STATE(574), 1,
      sym_gsqlSelectClause,
    STATE(627), 1,
      sym_queryBodyStmt,
    STATE(696), 1,
      sym_gsqlSelectBlock,
    ACTIONS(43), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(697), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [6332] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(37), 1,
      anon_sym__,
    ACTIONS(39), 1,
      aux_sym_printStmt_token1,
    ACTIONS(41), 1,
      aux_sym_returnStmt_token1,
    ACTIONS(521), 1,
      anon_sym_RBRACE,
    STATE(123), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(251), 1,
      sym_name,
    STATE(571), 1,
      sym_vertexSetName,
    STATE(574), 1,
      sym_gsqlSelectClause,
    STATE(696), 1,
      sym_gsqlSelectBlock,
    STATE(699), 1,
      sym_queryBodyStmt,
    ACTIONS(43), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(697), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [6380] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_accumType_token2,
    ACTIONS(15), 1,
      aux_sym_accumType_token3,
    ACTIONS(17), 1,
      aux_sym_accumType_token4,
    ACTIONS(45), 1,
      aux_sym_baseType_token2,
    ACTIONS(539), 1,
      anon_sym_LT,
    ACTIONS(543), 1,
      anon_sym_FILE,
    ACTIONS(549), 1,
      anon_sym_RPAREN,
    STATE(339), 1,
      sym_parameterType,
    STATE(461), 1,
      sym_baseType,
    STATE(652), 1,
      sym_parameterList,
    ACTIONS(541), 2,
      anon_sym_SET,
      anon_sym_BAG,
    ACTIONS(19), 6,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [6426] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(465), 1,
      aux_sym_queryBodyIfStmt_token4,
    ACTIONS(467), 1,
      anon_sym__,
    ACTIONS(470), 1,
      aux_sym_printStmt_token1,
    ACTIONS(473), 1,
      aux_sym_returnStmt_token1,
    STATE(137), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(251), 1,
      sym_name,
    STATE(571), 1,
      sym_vertexSetName,
    STATE(574), 1,
      sym_gsqlSelectClause,
    STATE(640), 1,
      sym_queryBodyStmt,
    STATE(696), 1,
      sym_gsqlSelectBlock,
    ACTIONS(476), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(697), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [6474] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_accumType_token2,
    ACTIONS(15), 1,
      aux_sym_accumType_token3,
    ACTIONS(17), 1,
      aux_sym_accumType_token4,
    ACTIONS(37), 1,
      anon_sym__,
    ACTIONS(45), 1,
      aux_sym_baseType_token2,
    ACTIONS(551), 1,
      aux_sym_accumType_token5,
    STATE(467), 1,
      sym_name,
    STATE(674), 1,
      sym_elementType,
    ACTIONS(43), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(550), 2,
      sym_tupleType,
      sym_baseType,
    ACTIONS(19), 5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [6517] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_accumType_token2,
    ACTIONS(15), 1,
      aux_sym_accumType_token3,
    ACTIONS(17), 1,
      aux_sym_accumType_token4,
    ACTIONS(45), 1,
      aux_sym_baseType_token2,
    ACTIONS(553), 1,
      anon_sym__,
    STATE(151), 1,
      sym_name,
    STATE(201), 1,
      sym_fieldName,
    STATE(304), 1,
      sym_baseType,
    STATE(645), 1,
      sym_tupleFields,
    ACTIONS(555), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(19), 6,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [6560] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_accumType_token2,
    ACTIONS(15), 1,
      aux_sym_accumType_token3,
    ACTIONS(17), 1,
      aux_sym_accumType_token4,
    ACTIONS(45), 1,
      aux_sym_baseType_token2,
    ACTIONS(276), 1,
      anon_sym__,
    ACTIONS(551), 1,
      aux_sym_accumType_token5,
    STATE(467), 1,
      sym_name,
    STATE(677), 1,
      sym_elementType,
    ACTIONS(278), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(550), 2,
      sym_tupleType,
      sym_baseType,
    ACTIONS(19), 5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [6603] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_SLASH,
    STATE(84), 1,
      sym_mathOperator,
    ACTIONS(324), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
    ACTIONS(328), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [6631] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_accumType_token2,
    ACTIONS(15), 1,
      aux_sym_accumType_token3,
    ACTIONS(17), 1,
      aux_sym_accumType_token4,
    ACTIONS(45), 1,
      aux_sym_baseType_token2,
    ACTIONS(539), 1,
      anon_sym_LT,
    ACTIONS(543), 1,
      anon_sym_FILE,
    STATE(360), 1,
      sym_parameterType,
    STATE(461), 1,
      sym_baseType,
    ACTIONS(541), 2,
      anon_sym_SET,
      anon_sym_BAG,
    ACTIONS(19), 6,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [6671] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(557), 1,
      anon_sym_DOT,
    ACTIONS(182), 14,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
  [6697] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_LPAREN,
    ACTIONS(561), 1,
      anon_sym_AT_AT,
    ACTIONS(563), 1,
      anon_sym__,
    ACTIONS(565), 1,
      aux_sym_seed_token1,
    ACTIONS(567), 1,
      anon_sym_COLON,
    STATE(255), 1,
      sym_name,
    STATE(282), 1,
      sym_vertexSetType,
    STATE(286), 1,
      sym_atomicVertexType,
    STATE(291), 1,
      sym_stepVertexTypes,
    STATE(294), 1,
      sym_stepVertexSet,
    STATE(402), 1,
      sym_pathPattern,
    ACTIONS(569), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(254), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexType,
  [6743] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(557), 1,
      anon_sym_DOT,
    ACTIONS(571), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
    ACTIONS(182), 10,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
  [6771] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_accumType_token2,
    ACTIONS(15), 1,
      aux_sym_accumType_token3,
    ACTIONS(17), 1,
      aux_sym_accumType_token4,
    ACTIONS(45), 1,
      aux_sym_baseType_token2,
    ACTIONS(553), 1,
      anon_sym__,
    STATE(151), 1,
      sym_name,
    STATE(195), 1,
      sym_fieldName,
    STATE(353), 1,
      sym_baseType,
    ACTIONS(555), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(19), 6,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [6811] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_SLASH,
    ACTIONS(577), 1,
      aux_sym_printExpr_token1,
    ACTIONS(579), 1,
      anon_sym_LBRACK,
    STATE(84), 1,
      sym_mathOperator,
    ACTIONS(575), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
    ACTIONS(302), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [6843] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_LPAREN,
    ACTIONS(561), 1,
      anon_sym_AT_AT,
    ACTIONS(563), 1,
      anon_sym__,
    ACTIONS(565), 1,
      aux_sym_seed_token1,
    ACTIONS(567), 1,
      anon_sym_COLON,
    STATE(255), 1,
      sym_name,
    STATE(282), 1,
      sym_vertexSetType,
    STATE(286), 1,
      sym_atomicVertexType,
    STATE(291), 1,
      sym_stepVertexTypes,
    STATE(294), 1,
      sym_stepVertexSet,
    STATE(435), 1,
      sym_pathPattern,
    ACTIONS(569), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(254), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexType,
  [6889] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_LPAREN,
    ACTIONS(561), 1,
      anon_sym_AT_AT,
    ACTIONS(563), 1,
      anon_sym__,
    ACTIONS(565), 1,
      aux_sym_seed_token1,
    ACTIONS(567), 1,
      anon_sym_COLON,
    STATE(255), 1,
      sym_name,
    STATE(282), 1,
      sym_vertexSetType,
    STATE(286), 1,
      sym_atomicVertexType,
    STATE(291), 1,
      sym_stepVertexTypes,
    STATE(384), 1,
      sym_stepVertexSet,
    ACTIONS(569), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(254), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexType,
  [6932] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(153), 1,
      aux_sym_name_repeat1,
    ACTIONS(581), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(583), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(188), 10,
      aux_sym_accumType_token2,
      aux_sym_accumType_token3,
      aux_sym_accumType_token4,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [6959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 15,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      aux_sym_accumType_token2,
      aux_sym_accumType_token3,
      aux_sym_accumType_token4,
      aux_sym_accumType_token5,
      aux_sym_accumType_token11,
      aux_sym_accumType_token12,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [6980] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(152), 1,
      aux_sym_name_repeat1,
    ACTIONS(587), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(590), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(196), 10,
      aux_sym_accumType_token2,
      aux_sym_accumType_token3,
      aux_sym_accumType_token4,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [7007] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(152), 1,
      aux_sym_name_repeat1,
    ACTIONS(593), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(595), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(210), 10,
      aux_sym_accumType_token2,
      aux_sym_accumType_token3,
      aux_sym_accumType_token4,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [7034] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_SLASH,
    STATE(90), 1,
      sym_mathOperator,
    ACTIONS(597), 4,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_perClauseV2_token1,
    ACTIONS(302), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7060] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(599), 1,
      anon_sym_DOT,
    ACTIONS(182), 12,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_perClauseV2_token1,
  [7084] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_SLASH,
    STATE(95), 1,
      sym_mathOperator,
    ACTIONS(324), 4,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_printStmt_token3,
    ACTIONS(328), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7110] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_SLASH,
    STATE(90), 1,
      sym_mathOperator,
    ACTIONS(324), 4,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_perClauseV2_token1,
    ACTIONS(328), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7136] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_SLASH,
    STATE(95), 1,
      sym_mathOperator,
    ACTIONS(597), 4,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_printStmt_token3,
    ACTIONS(302), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7162] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(601), 1,
      anon_sym_DOT,
    ACTIONS(182), 12,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_printStmt_token3,
  [7186] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_SLASH,
    STATE(93), 1,
      sym_mathOperator,
    ACTIONS(324), 3,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_queryBodyIfStmt_token2,
    ACTIONS(328), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7211] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_SLASH,
    STATE(82), 1,
      sym_mathOperator,
    ACTIONS(603), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
    ACTIONS(302), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7236] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_SLASH,
    STATE(82), 1,
      sym_mathOperator,
    ACTIONS(605), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
    ACTIONS(302), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7261] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_SLASH,
    ACTIONS(609), 1,
      aux_sym_printExpr_token1,
    STATE(86), 1,
      sym_mathOperator,
    ACTIONS(607), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(302), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7288] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_SLASH,
    STATE(87), 1,
      sym_mathOperator,
    ACTIONS(597), 3,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
    ACTIONS(302), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7313] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_SLASH,
    STATE(83), 1,
      sym_mathOperator,
    ACTIONS(324), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(328), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7338] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_SLASH,
    STATE(93), 1,
      sym_mathOperator,
    ACTIONS(597), 3,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_queryBodyIfStmt_token2,
    ACTIONS(302), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7363] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(611), 1,
      anon_sym_DOT,
    ACTIONS(182), 11,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AND,
      anon_sym_OR,
  [7386] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_SLASH,
    STATE(82), 1,
      sym_mathOperator,
    ACTIONS(613), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
    ACTIONS(302), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7411] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(615), 1,
      anon_sym_DOT,
    ACTIONS(182), 11,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      aux_sym_printExpr_token1,
      anon_sym_RBRACK,
  [7434] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_SLASH,
    ACTIONS(617), 1,
      anon_sym_RPAREN,
    ACTIONS(619), 1,
      anon_sym_COMMA,
    STATE(83), 1,
      sym_mathOperator,
    STATE(505), 1,
      aux_sym_argList_repeat1,
    ACTIONS(302), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7463] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(621), 1,
      anon_sym_DOT,
    ACTIONS(182), 11,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7486] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_SLASH,
    STATE(86), 1,
      sym_mathOperator,
    ACTIONS(324), 3,
      anon_sym_COMMA,
      aux_sym_printExpr_token1,
      anon_sym_RBRACK,
    ACTIONS(328), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7511] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(623), 1,
      anon_sym_DOT,
    ACTIONS(182), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      aux_sym_perClauseV2_token1,
  [7534] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(625), 1,
      anon_sym_DOT,
    ACTIONS(182), 11,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_queryBodyIfStmt_token2,
  [7557] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_SLASH,
    STATE(82), 1,
      sym_mathOperator,
    ACTIONS(324), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
    ACTIONS(328), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7582] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_AT_AT,
    ACTIONS(627), 1,
      anon_sym_RBRACE,
    ACTIONS(629), 1,
      anon_sym__,
    ACTIONS(631), 1,
      aux_sym_seed_token1,
    ACTIONS(633), 1,
      aux_sym_seed_token2,
    STATE(499), 1,
      sym_name,
    STATE(503), 1,
      sym_seed,
    STATE(618), 1,
      sym_vertexType,
    ACTIONS(278), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(525), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexSetName,
  [7619] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_SLASH,
    STATE(87), 1,
      sym_mathOperator,
    ACTIONS(324), 3,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
    ACTIONS(328), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7644] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      aux_sym_integer_token1,
    STATE(6), 1,
      aux_sym_integer_repeat1,
    STATE(477), 1,
      sym_constant,
    ACTIONS(282), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(19), 2,
      sym_integer,
      sym_real,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
  [7678] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(179), 1,
      aux_sym_name_repeat1,
    ACTIONS(635), 4,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(196), 7,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_DOT_STAR,
      anon_sym_COLON,
  [7700] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(191), 1,
      aux_sym_name_repeat1,
    ACTIONS(638), 4,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(188), 7,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_DOT_STAR,
      anon_sym_COLON,
  [7722] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      aux_sym_integer_token1,
    STATE(6), 1,
      aux_sym_integer_repeat1,
    STATE(531), 1,
      sym_constant,
    ACTIONS(282), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(19), 2,
      sym_integer,
      sym_real,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
  [7756] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(183), 1,
      aux_sym_name_repeat1,
    ACTIONS(640), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(642), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(210), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [7780] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(183), 1,
      aux_sym_name_repeat1,
    ACTIONS(644), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(647), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(196), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [7804] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      aux_sym_integer_token1,
    STATE(6), 1,
      aux_sym_integer_repeat1,
    STATE(489), 1,
      sym_constant,
    ACTIONS(282), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(19), 2,
      sym_integer,
      sym_real,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
  [7838] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      aux_sym_integer_token1,
    STATE(6), 1,
      aux_sym_integer_repeat1,
    STATE(555), 1,
      sym_constant,
    ACTIONS(282), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(19), 2,
      sym_integer,
      sym_real,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
  [7872] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      aux_sym_integer_token1,
    STATE(6), 1,
      aux_sym_integer_repeat1,
    STATE(515), 1,
      sym_constant,
    ACTIONS(282), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(19), 2,
      sym_integer,
      sym_real,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
  [7906] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_AT_AT,
    ACTIONS(629), 1,
      anon_sym__,
    ACTIONS(631), 1,
      aux_sym_seed_token1,
    ACTIONS(633), 1,
      aux_sym_seed_token2,
    STATE(499), 1,
      sym_name,
    STATE(519), 1,
      sym_seed,
    STATE(618), 1,
      sym_vertexType,
    ACTIONS(278), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(525), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexSetName,
  [7940] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(182), 1,
      aux_sym_name_repeat1,
    ACTIONS(650), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(652), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(188), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [7964] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      aux_sym_integer_token1,
    STATE(6), 1,
      aux_sym_integer_repeat1,
    STATE(443), 1,
      sym_constant,
    ACTIONS(282), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(19), 2,
      sym_integer,
      sym_real,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
  [7998] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      aux_sym_integer_token1,
    STATE(6), 1,
      aux_sym_integer_repeat1,
    STATE(537), 1,
      sym_constant,
    ACTIONS(282), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(19), 2,
      sym_integer,
      sym_real,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
  [8032] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(179), 1,
      aux_sym_name_repeat1,
    ACTIONS(654), 4,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(210), 7,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_DOT_STAR,
      anon_sym_COLON,
  [8054] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_LBRACE,
    ACTIONS(658), 1,
      anon_sym_LPAREN,
    ACTIONS(660), 1,
      anon_sym__,
    ACTIONS(662), 1,
      aux_sym_gsqlSelectClause_token1,
    STATE(251), 1,
      sym_name,
    STATE(301), 1,
      sym_vertexSetName,
    STATE(421), 1,
      sym_simpleSet,
    STATE(574), 1,
      sym_gsqlSelectClause,
    ACTIONS(664), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(655), 2,
      sym_seedSet,
      sym_gsqlSelectBlock,
  [8090] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_SLASH,
    STATE(83), 1,
      sym_mathOperator,
    ACTIONS(666), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(302), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [8114] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_AT_AT,
    ACTIONS(531), 1,
      aux_sym_seed_token1,
    ACTIONS(668), 1,
      anon_sym__,
    STATE(405), 1,
      sym_name,
    STATE(466), 1,
      sym_edgeSetType,
    STATE(572), 1,
      sym_atomicEdgeType,
    ACTIONS(43), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(410), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_edgeType,
  [8145] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_accumType_token2,
    ACTIONS(15), 1,
      aux_sym_accumType_token3,
    ACTIONS(17), 1,
      aux_sym_accumType_token4,
    ACTIONS(45), 1,
      aux_sym_baseType_token2,
    STATE(551), 1,
      sym_baseType,
    ACTIONS(19), 6,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [8172] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(670), 9,
      anon_sym_LPAREN,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      anon_sym_DASH,
      anon_sym_AT_AT,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_DQUOTE,
      aux_sym_integer_token1,
  [8191] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_accumType_token2,
    ACTIONS(15), 1,
      aux_sym_accumType_token3,
    ACTIONS(17), 1,
      aux_sym_accumType_token4,
    ACTIONS(45), 1,
      aux_sym_baseType_token2,
    STATE(647), 1,
      sym_baseType,
    ACTIONS(19), 6,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [8218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(674), 9,
      anon_sym_LPAREN,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      anon_sym_DASH,
      anon_sym_AT_AT,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_DQUOTE,
      aux_sym_integer_token1,
  [8237] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_accumType_token2,
    ACTIONS(15), 1,
      aux_sym_accumType_token3,
    ACTIONS(17), 1,
      aux_sym_accumType_token4,
    ACTIONS(45), 1,
      aux_sym_baseType_token2,
    STATE(604), 1,
      sym_baseType,
    ACTIONS(19), 6,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [8264] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_DASH,
    ACTIONS(680), 1,
      aux_sym_integer_token1,
    STATE(452), 1,
      aux_sym_integer_repeat1,
    STATE(586), 1,
      sym_simpleSize,
    STATE(588), 1,
      sym_name,
    ACTIONS(37), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(587), 3,
      sym_integer,
      sym_paramName,
      sym_varName,
  [8293] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_accumType_token2,
    ACTIONS(15), 1,
      aux_sym_accumType_token3,
    ACTIONS(17), 1,
      aux_sym_accumType_token4,
    ACTIONS(45), 1,
      aux_sym_baseType_token2,
    STATE(480), 1,
      sym_baseType,
    ACTIONS(19), 6,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [8320] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_SLASH,
    ACTIONS(682), 1,
      anon_sym_SEMI,
    STATE(83), 1,
      sym_mathOperator,
    ACTIONS(302), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [8343] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(205), 1,
      aux_sym_name_repeat1,
    ACTIONS(684), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(686), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(210), 6,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [8366] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_LBRACE,
    ACTIONS(658), 1,
      anon_sym_LPAREN,
    STATE(251), 1,
      sym_name,
    STATE(301), 1,
      sym_vertexSetName,
    STATE(406), 1,
      sym_simpleSet,
    STATE(574), 1,
      sym_gsqlSelectClause,
    STATE(576), 2,
      sym_seedSet,
      sym_gsqlSelectBlock,
    ACTIONS(660), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [8397] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(205), 1,
      aux_sym_name_repeat1,
    ACTIONS(688), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(691), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(196), 6,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [8420] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(203), 1,
      aux_sym_name_repeat1,
    ACTIONS(694), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(696), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(188), 6,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [8443] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(182), 1,
      aux_sym_name_repeat1,
    ACTIONS(650), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(652), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(698), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [8466] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_AT_AT,
    STATE(432), 1,
      sym_dmlSubStmt,
    STATE(565), 1,
      sym_name,
    STATE(566), 1,
      sym_dmlSubStmtList,
    STATE(589), 1,
      sym_globalAccumName,
    STATE(456), 2,
      sym_gAccumAccumStmt,
      sym_assignStmt,
    ACTIONS(37), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [8494] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_AT_AT,
    STATE(432), 1,
      sym_dmlSubStmt,
    STATE(564), 1,
      sym_dmlSubStmtList,
    STATE(565), 1,
      sym_name,
    STATE(589), 1,
      sym_globalAccumName,
    STATE(456), 2,
      sym_gAccumAccumStmt,
      sym_assignStmt,
    ACTIONS(37), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [8522] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    STATE(631), 1,
      sym_name,
    STATE(512), 2,
      sym_stringLiteral,
      sym_paramName,
    STATE(592), 2,
      sym_fileVar,
      sym_filePath,
    ACTIONS(37), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [8545] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      aux_sym_name_token2,
    STATE(218), 1,
      aux_sym_name_repeat1,
    ACTIONS(701), 3,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
    ACTIONS(188), 4,
      anon_sym_LBRACE,
      anon_sym_API,
      anon_sym_SYNTAX,
      anon_sym_RETURNS,
  [8566] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(215), 1,
      aux_sym_name_repeat1,
    ACTIONS(705), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(707), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(188), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
  [8587] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_AT_AT,
    STATE(454), 1,
      sym_dmlSubStmt,
    STATE(565), 1,
      sym_name,
    STATE(589), 1,
      sym_globalAccumName,
    STATE(456), 2,
      sym_gAccumAccumStmt,
      sym_assignStmt,
    ACTIONS(37), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [8612] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(214), 1,
      aux_sym_name_repeat1,
    ACTIONS(709), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(712), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(196), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
  [8633] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(214), 1,
      aux_sym_name_repeat1,
    ACTIONS(715), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(717), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(210), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
  [8654] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_AT_AT,
    STATE(405), 1,
      sym_name,
    STATE(494), 1,
      sym_edgeSetType,
    ACTIONS(37), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(410), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_edgeType,
  [8677] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(223), 1,
      aux_sym_name_repeat1,
    ACTIONS(719), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(721), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(188), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_accumType_token11,
      aux_sym_accumType_token12,
  [8698] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      aux_sym_name_token2,
    STATE(219), 1,
      aux_sym_name_repeat1,
    ACTIONS(723), 3,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
    ACTIONS(210), 4,
      anon_sym_LBRACE,
      anon_sym_API,
      anon_sym_SYNTAX,
      anon_sym_RETURNS,
  [8719] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      aux_sym_name_token2,
    STATE(219), 1,
      aux_sym_name_repeat1,
    ACTIONS(727), 3,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
    ACTIONS(196), 4,
      anon_sym_LBRACE,
      anon_sym_API,
      anon_sym_SYNTAX,
      anon_sym_RETURNS,
  [8740] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 9,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [8755] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    STATE(631), 1,
      sym_name,
    STATE(512), 2,
      sym_stringLiteral,
      sym_paramName,
    STATE(590), 2,
      sym_fileVar,
      sym_filePath,
    ACTIONS(37), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [8778] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    STATE(631), 1,
      sym_name,
    STATE(512), 2,
      sym_stringLiteral,
      sym_paramName,
    STATE(594), 2,
      sym_fileVar,
      sym_filePath,
    ACTIONS(37), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [8801] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(228), 1,
      aux_sym_name_repeat1,
    ACTIONS(733), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(735), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(210), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_accumType_token11,
      aux_sym_accumType_token12,
  [8822] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    STATE(631), 1,
      sym_name,
    STATE(512), 2,
      sym_stringLiteral,
      sym_paramName,
    STATE(632), 2,
      sym_fileVar,
      sym_filePath,
    ACTIONS(37), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [8845] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_AT_AT,
    STATE(245), 1,
      sym_vertexSetType,
    STATE(255), 1,
      sym_name,
    ACTIONS(737), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(254), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexType,
  [8868] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_AT_AT,
    STATE(252), 1,
      sym_vertexSetType,
    STATE(255), 1,
      sym_name,
    ACTIONS(737), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(254), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexType,
  [8891] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 9,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [8906] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(228), 1,
      aux_sym_name_repeat1,
    ACTIONS(739), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(742), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(196), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_accumType_token11,
      aux_sym_accumType_token12,
  [8927] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_PIPE,
    STATE(191), 1,
      aux_sym_name_repeat1,
    ACTIONS(745), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COLON,
    ACTIONS(638), 4,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [8948] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_SEMI,
    ACTIONS(750), 1,
      anon_sym_WHERE,
    ACTIONS(752), 1,
      aux_sym_perClauseV2_token1,
    STATE(280), 1,
      sym_whereClause,
    STATE(318), 1,
      sym_accumClause,
    STATE(534), 1,
      sym_perClauseV2,
    STATE(317), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [8974] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_DOT_STAR,
    STATE(191), 1,
      aux_sym_name_repeat1,
    ACTIONS(754), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(638), 4,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [8994] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(414), 1,
      anon_sym_AT_AT,
    STATE(247), 1,
      sym_globalAccumName,
    STATE(256), 1,
      sym_setBagExpr,
    STATE(401), 1,
      sym_name,
    ACTIONS(416), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9018] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(402), 1,
      anon_sym_AT_AT,
    STATE(247), 1,
      sym_globalAccumName,
    STATE(259), 1,
      sym_setBagExpr,
    STATE(420), 1,
      sym_name,
    ACTIONS(404), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9042] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      anon_sym_PIPE,
    STATE(234), 1,
      aux_sym_stepVertexTypes_repeat1,
    ACTIONS(757), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [9060] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(408), 1,
      anon_sym_AT_AT,
    STATE(247), 1,
      sym_globalAccumName,
    STATE(259), 1,
      sym_setBagExpr,
    STATE(386), 1,
      sym_name,
    ACTIONS(410), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9084] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(414), 1,
      anon_sym_AT_AT,
    STATE(247), 1,
      sym_globalAccumName,
    STATE(259), 1,
      sym_setBagExpr,
    STATE(401), 1,
      sym_name,
    ACTIONS(416), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9108] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_PIPE,
    STATE(234), 1,
      aux_sym_stepVertexTypes_repeat1,
    ACTIONS(762), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [9126] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(396), 1,
      anon_sym_AT_AT,
    STATE(247), 1,
      sym_globalAccumName,
    STATE(256), 1,
      sym_setBagExpr,
    STATE(433), 1,
      sym_name,
    ACTIONS(398), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9150] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_accumType_token1,
    ACTIONS(21), 1,
      aux_sym_accumType_token7,
    ACTIONS(23), 1,
      aux_sym_accumType_token8,
    ACTIONS(25), 1,
      aux_sym_accumType_token9,
    ACTIONS(27), 1,
      aux_sym_accumType_token10,
    ACTIONS(29), 1,
      aux_sym_accumType_token13,
    ACTIONS(31), 1,
      aux_sym_accumType_token14,
    STATE(569), 1,
      sym_accumType,
  [9178] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    STATE(498), 1,
      sym_name,
    STATE(638), 1,
      sym_filePath,
    STATE(512), 2,
      sym_stringLiteral,
      sym_paramName,
    ACTIONS(37), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9200] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(465), 6,
      aux_sym_queryBodyIfStmt_token1,
      aux_sym_queryBodyIfStmt_token3,
      aux_sym_queryBodyIfStmt_token4,
      anon_sym__,
      aux_sym_printStmt_token1,
      aux_sym_returnStmt_token1,
  [9216] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    STATE(498), 1,
      sym_name,
    STATE(634), 1,
      sym_filePath,
    STATE(512), 2,
      sym_stringLiteral,
      sym_paramName,
    ACTIONS(37), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9238] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(402), 1,
      anon_sym_AT_AT,
    STATE(247), 1,
      sym_globalAccumName,
    STATE(256), 1,
      sym_setBagExpr,
    STATE(420), 1,
      sym_name,
    ACTIONS(404), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9262] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(408), 1,
      anon_sym_AT_AT,
    STATE(247), 1,
      sym_globalAccumName,
    STATE(256), 1,
      sym_setBagExpr,
    STATE(386), 1,
      sym_name,
    ACTIONS(410), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9286] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_PIPE,
    STATE(237), 1,
      aux_sym_stepVertexTypes_repeat1,
    ACTIONS(768), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [9304] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(396), 1,
      anon_sym_AT_AT,
    STATE(247), 1,
      sym_globalAccumName,
    STATE(259), 1,
      sym_setBagExpr,
    STATE(433), 1,
      sym_name,
    ACTIONS(398), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 7,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_queryBodyIfStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_perClauseV2_token1,
  [9341] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(465), 1,
      sym_alias,
    STATE(561), 1,
      sym_name,
    STATE(556), 2,
      sym_vertexAlias,
      sym_edgeAlias,
    ACTIONS(37), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9360] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_LT,
    ACTIONS(772), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9375] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(561), 1,
      sym_name,
    STATE(568), 1,
      sym_alias,
    STATE(556), 2,
      sym_vertexAlias,
      sym_edgeAlias,
    ACTIONS(37), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [9407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [9420] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_LPAREN,
    STATE(251), 1,
      sym_name,
    STATE(365), 1,
      sym_vertexSetName,
    STATE(437), 1,
      sym_simpleSet,
    ACTIONS(660), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [9454] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [9467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 7,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_queryBodyIfStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_perClauseV2_token1,
  [9480] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(43), 1,
      aux_sym_name_repeat1,
    ACTIONS(745), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
    ACTIONS(270), 4,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9497] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(465), 5,
      anon_sym_RBRACE,
      aux_sym_queryBodyIfStmt_token1,
      anon_sym__,
      aux_sym_printStmt_token1,
      aux_sym_returnStmt_token1,
  [9512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 7,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_queryBodyIfStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_perClauseV2_token1,
  [9525] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_LPAREN,
    STATE(251), 1,
      sym_name,
    STATE(342), 1,
      sym_simpleSet,
    STATE(365), 1,
      sym_vertexSetName,
    ACTIONS(660), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9546] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(465), 5,
      aux_sym_queryBodyIfStmt_token1,
      aux_sym_queryBodyIfStmt_token4,
      anon_sym__,
      aux_sym_printStmt_token1,
      aux_sym_returnStmt_token1,
  [9561] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym_localAccumName,
    STATE(20), 1,
      sym_name,
    ACTIONS(410), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9579] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym_localAccumName,
    STATE(20), 1,
      sym_name,
    ACTIONS(342), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9597] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9609] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      anon_sym_DASH,
    STATE(288), 1,
      aux_sym_pathPattern_repeat1,
    ACTIONS(791), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [9625] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9637] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(678), 1,
      anon_sym_DASH,
    ACTIONS(680), 1,
      aux_sym_integer_token1,
    STATE(452), 1,
      aux_sym_integer_repeat1,
    STATE(648), 2,
      sym_stringLiteral,
      sym_integer,
  [9657] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      anon_sym_LBRACE,
    ACTIONS(797), 1,
      anon_sym_FOR,
    ACTIONS(799), 1,
      anon_sym_API,
    ACTIONS(801), 1,
      anon_sym_SYNTAX,
    ACTIONS(803), 1,
      anon_sym_RETURNS,
    STATE(462), 1,
      sym_returns,
  [9679] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      anon_sym_DOLLAR,
    STATE(635), 2,
      sym_columnId,
      sym_name,
    ACTIONS(37), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9695] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym_localAccumName,
    STATE(20), 1,
      sym_name,
    ACTIONS(398), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9713] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym_localAccumName,
    STATE(20), 1,
      sym_name,
    ACTIONS(360), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9731] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym_localAccumName,
    STATE(20), 1,
      sym_name,
    ACTIONS(290), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9749] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym_localAccumName,
    STATE(20), 1,
      sym_name,
    ACTIONS(392), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9767] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym_localAccumName,
    STATE(20), 1,
      sym_name,
    ACTIONS(37), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9785] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 1,
      anon_sym_AT,
    STATE(25), 2,
      sym_localAccumName,
      sym_name,
    ACTIONS(416), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9801] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_RETURNS,
    ACTIONS(819), 1,
      anon_sym_LBRACE,
    ACTIONS(821), 1,
      anon_sym_FOR,
    ACTIONS(823), 1,
      anon_sym_API,
    ACTIONS(825), 1,
      anon_sym_SYNTAX,
    STATE(495), 1,
      sym_returns,
  [9823] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_RETURNS,
    ACTIONS(827), 1,
      anon_sym_LBRACE,
    ACTIONS(829), 1,
      anon_sym_FOR,
    ACTIONS(831), 1,
      anon_sym_API,
    ACTIONS(833), 1,
      anon_sym_SYNTAX,
    STATE(497), 1,
      sym_returns,
  [9845] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_RETURNS,
    ACTIONS(835), 1,
      anon_sym_LBRACE,
    ACTIONS(837), 1,
      anon_sym_FOR,
    ACTIONS(839), 1,
      anon_sym_API,
    ACTIONS(841), 1,
      anon_sym_SYNTAX,
    STATE(446), 1,
      sym_returns,
  [9867] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      anon_sym_AT,
    STATE(25), 2,
      sym_localAccumName,
      sym_name,
    ACTIONS(398), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9883] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      aux_sym_perClauseV2_token1,
    ACTIONS(843), 1,
      anon_sym_SEMI,
    STATE(358), 1,
      sym_accumClause,
    STATE(534), 1,
      sym_perClauseV2,
    STATE(373), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [9903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      aux_sym_fromClause_token1,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [9915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [9927] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      anon_sym_AT,
    STATE(25), 2,
      sym_localAccumName,
      sym_name,
    ACTIONS(404), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9955] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym_localAccumName,
    STATE(20), 1,
      sym_name,
    ACTIONS(404), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [9985] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      aux_sym_fromClause_token1,
    STATE(287), 1,
      aux_sym_name_repeat1,
    ACTIONS(855), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(858), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10003] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_DASH,
    STATE(288), 1,
      aux_sym_pathPattern_repeat1,
    ACTIONS(861), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [10019] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      aux_sym_fromClause_token1,
    STATE(287), 1,
      aux_sym_name_repeat1,
    ACTIONS(866), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(868), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10037] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 1,
      anon_sym_AT,
    STATE(25), 2,
      sym_localAccumName,
      sym_name,
    ACTIONS(410), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10053] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_COLON,
    ACTIONS(870), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [10067] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_RETURNS,
    ACTIONS(874), 1,
      anon_sym_LBRACE,
    ACTIONS(876), 1,
      anon_sym_FOR,
    ACTIONS(878), 1,
      anon_sym_API,
    ACTIONS(880), 1,
      anon_sym_SYNTAX,
    STATE(486), 1,
      sym_returns,
  [10089] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym_localAccumName,
    STATE(20), 1,
      sym_name,
    ACTIONS(368), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10107] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      anon_sym_DASH,
    STATE(265), 1,
      aux_sym_pathPattern_repeat1,
    ACTIONS(884), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [10123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10135] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      aux_sym_fromClause_token1,
    STATE(289), 1,
      aux_sym_name_repeat1,
    ACTIONS(888), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(890), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10153] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym_localAccumName,
    STATE(20), 1,
      sym_name,
    ACTIONS(354), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10171] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym_localAccumName,
    STATE(20), 1,
      sym_name,
    ACTIONS(374), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10189] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym_localAccumName,
    STATE(20), 1,
      sym_name,
    ACTIONS(416), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10219] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_EQ,
    ACTIONS(900), 4,
      anon_sym_SEMI,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [10232] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(10), 1,
      sym_accumName,
    ACTIONS(398), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10247] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(714), 1,
      sym_queryName,
    STATE(715), 1,
      sym_name,
    ACTIONS(37), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10262] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(151), 1,
      sym_name,
    STATE(480), 1,
      sym_fieldName,
    ACTIONS(276), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10277] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(581), 1,
      sym_syntaxName,
    STATE(606), 1,
      sym_name,
    ACTIONS(37), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10292] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(363), 1,
      sym_graphName,
    STATE(427), 1,
      sym_name,
    ACTIONS(902), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10307] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(355), 1,
      sym_graphName,
    STATE(427), 1,
      sym_name,
    ACTIONS(902), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10322] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      ts_builtin_sym_end,
    ACTIONS(906), 1,
      aux_sym_createSignature_token1,
    STATE(719), 1,
      sym_createSignature,
    STATE(308), 2,
      sym_createQuery,
      aux_sym_source_file_repeat1,
  [10339] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(606), 1,
      sym_name,
    STATE(607), 1,
      sym_syntaxName,
    ACTIONS(37), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10354] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(10), 1,
      sym_accumName,
    ACTIONS(374), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10369] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(5), 1,
      sym_accumName,
    ACTIONS(404), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10384] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(467), 1,
      sym_name,
    STATE(585), 1,
      sym_tupleType,
    ACTIONS(37), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10399] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      anon_sym_GT,
    ACTIONS(913), 1,
      anon_sym_PIPE,
    STATE(429), 1,
      aux_sym_stepEdgeTypes_repeat1,
    ACTIONS(909), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [10416] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 1,
      anon_sym_COMMA,
    STATE(314), 1,
      aux_sym_printStmt_repeat1,
    ACTIONS(918), 3,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
  [10431] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(692), 1,
      sym_queryName,
    STATE(715), 1,
      sym_name,
    ACTIONS(37), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10446] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(281), 1,
      sym_name,
    STATE(617), 1,
      sym_vertexAlias,
    ACTIONS(920), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10461] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      aux_sym_perClauseV2_token1,
    ACTIONS(843), 1,
      anon_sym_SEMI,
    STATE(625), 1,
      sym_perClauseV2,
    STATE(388), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [10478] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      aux_sym_perClauseV2_token1,
    ACTIONS(843), 1,
      anon_sym_SEMI,
    STATE(625), 1,
      sym_perClauseV2,
    STATE(373), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [10495] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(385), 1,
      sym_name,
    STATE(559), 1,
      sym_jsonKey,
    ACTIONS(37), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(922), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
  [10521] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_RETURNS,
    ACTIONS(924), 1,
      anon_sym_LBRACE,
    ACTIONS(926), 1,
      anon_sym_API,
    ACTIONS(928), 1,
      anon_sym_SYNTAX,
    STATE(485), 1,
      sym_returns,
  [10540] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(281), 1,
      sym_name,
    STATE(334), 1,
      sym_vertexAlias,
    ACTIONS(737), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10555] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(10), 1,
      sym_accumName,
    ACTIONS(354), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10570] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(606), 1,
      sym_name,
    STATE(664), 1,
      sym_syntaxName,
    ACTIONS(37), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10585] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(930), 1,
      anon_sym_COMMA,
    STATE(325), 1,
      aux_sym_fromClause_repeat1,
    ACTIONS(933), 3,
      anon_sym_SEMI,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [10600] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(5), 1,
      sym_accumName,
    ACTIONS(342), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [10626] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      anon_sym_COMMA,
    ACTIONS(939), 1,
      anon_sym_SEMI,
    ACTIONS(941), 1,
      aux_sym_printStmt_token2,
    ACTIONS(943), 1,
      aux_sym_printStmt_token3,
    STATE(314), 1,
      aux_sym_printStmt_repeat1,
  [10645] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(385), 1,
      sym_name,
    STATE(413), 1,
      sym_jsonKey,
    ACTIONS(945), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10660] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      aux_sym_perClauseV2_token1,
    ACTIONS(947), 1,
      anon_sym_SEMI,
    STATE(625), 1,
      sym_perClauseV2,
    STATE(388), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [10677] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      aux_sym_createSignature_token1,
    ACTIONS(949), 1,
      ts_builtin_sym_end,
    STATE(719), 1,
      sym_createSignature,
    STATE(308), 2,
      sym_createQuery,
      aux_sym_source_file_repeat1,
  [10694] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(951), 1,
      anon_sym_RPAREN,
    ACTIONS(953), 1,
      anon_sym_COMMA,
    STATE(491), 1,
      aux_sym_accumType_repeat1,
    ACTIONS(955), 2,
      aux_sym_accumType_token11,
      aux_sym_accumType_token12,
  [10711] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(10), 1,
      sym_accumName,
    ACTIONS(416), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10726] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [10737] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(5), 1,
      sym_accumName,
    ACTIONS(374), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10752] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(10), 1,
      sym_accumName,
    ACTIONS(410), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10767] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(5), 1,
      sym_accumName,
    ACTIONS(354), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10782] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(151), 1,
      sym_name,
    STATE(332), 1,
      sym_fieldName,
    ACTIONS(959), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10797] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(440), 1,
      sym_paramName,
    STATE(498), 1,
      sym_name,
    ACTIONS(37), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10812] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(10), 1,
      sym_accumName,
    ACTIONS(392), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [10838] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(963), 3,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [10851] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(5), 1,
      sym_accumName,
    ACTIONS(416), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10866] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(5), 1,
      sym_accumName,
    ACTIONS(290), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10881] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(220), 1,
      sym_name,
    STATE(227), 1,
      sym_accumName,
    ACTIONS(737), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10896] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(10), 1,
      sym_accumName,
    ACTIONS(342), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10911] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(653), 1,
      sym_queryName,
    STATE(715), 1,
      sym_name,
    ACTIONS(37), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10926] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(10), 1,
      sym_accumName,
    ACTIONS(404), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10941] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(606), 1,
      sym_name,
    STATE(658), 1,
      sym_syntaxName,
    ACTIONS(37), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10956] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 1,
      anon_sym_COMMA,
    STATE(325), 1,
      aux_sym_fromClause_repeat1,
    ACTIONS(968), 3,
      anon_sym_SEMI,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [10971] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(367), 1,
      sym_graphName,
    STATE(427), 1,
      sym_name,
    ACTIONS(902), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10986] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(546), 1,
      sym_name,
    STATE(656), 1,
      sym_vertexType,
    ACTIONS(37), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11001] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(151), 1,
      sym_name,
    STATE(551), 1,
      sym_fieldName,
    ACTIONS(276), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11016] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(281), 1,
      sym_name,
    STATE(327), 1,
      sym_vertexAlias,
    ACTIONS(737), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11031] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_RETURNS,
    ACTIONS(819), 1,
      anon_sym_LBRACE,
    ACTIONS(823), 1,
      anon_sym_API,
    ACTIONS(825), 1,
      anon_sym_SYNTAX,
    STATE(495), 1,
      sym_returns,
  [11050] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(10), 1,
      sym_accumName,
    ACTIONS(37), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11065] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(10), 1,
      sym_accumName,
    ACTIONS(290), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11080] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      aux_sym_perClauseV2_token1,
    ACTIONS(970), 1,
      anon_sym_SEMI,
    STATE(625), 1,
      sym_perClauseV2,
    STATE(330), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [11097] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(667), 1,
      sym_edgeAlias,
    STATE(694), 1,
      sym_name,
    ACTIONS(37), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11112] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(475), 1,
      sym_paramName,
    STATE(498), 1,
      sym_name,
    ACTIONS(37), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11127] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(10), 1,
      sym_accumName,
    ACTIONS(360), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11142] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(546), 1,
      sym_name,
    STATE(663), 1,
      sym_vertexType,
    ACTIONS(276), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11157] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_RETURNS,
    ACTIONS(972), 1,
      anon_sym_LBRACE,
    ACTIONS(974), 1,
      anon_sym_API,
    ACTIONS(976), 1,
      anon_sym_SYNTAX,
    STATE(502), 1,
      sym_returns,
  [11176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      aux_sym_printExpr_token1,
    ACTIONS(575), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
  [11189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [11200] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(396), 1,
      sym_graphName,
    STATE(427), 1,
      sym_name,
    ACTIONS(902), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11215] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      anon_sym_LBRACE,
    ACTIONS(799), 1,
      anon_sym_API,
    ACTIONS(801), 1,
      anon_sym_SYNTAX,
    ACTIONS(803), 1,
      anon_sym_RETURNS,
    STATE(462), 1,
      sym_returns,
  [11234] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      anon_sym_COMMA,
    ACTIONS(978), 1,
      anon_sym_SEMI,
    ACTIONS(980), 1,
      aux_sym_printStmt_token2,
    ACTIONS(982), 1,
      aux_sym_printStmt_token3,
    STATE(328), 1,
      aux_sym_printStmt_repeat1,
  [11253] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(220), 1,
      sym_name,
    STATE(227), 1,
      sym_accumName,
    ACTIONS(276), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11268] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(606), 1,
      sym_name,
    STATE(639), 1,
      sym_syntaxName,
    ACTIONS(37), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11283] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(321), 1,
      sym_graphName,
    STATE(427), 1,
      sym_name,
    ACTIONS(902), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11298] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(5), 1,
      sym_accumName,
    ACTIONS(368), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11313] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      aux_sym_perClauseV2_token1,
    ACTIONS(970), 1,
      anon_sym_SEMI,
    STATE(625), 1,
      sym_perClauseV2,
    STATE(388), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [11330] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(467), 1,
      sym_name,
    STATE(671), 1,
      sym_tupleType,
    ACTIONS(276), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11345] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(10), 1,
      sym_accumName,
    ACTIONS(368), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11360] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(5), 1,
      sym_accumName,
    ACTIONS(410), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11375] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(5), 1,
      sym_accumName,
    ACTIONS(37), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11390] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(986), 1,
      aux_sym_accumType_token5,
    ACTIONS(984), 4,
      aux_sym_accumType_token2,
      aux_sym_accumType_token3,
      aux_sym_accumType_token4,
      aux_sym_accumType_token6,
  [11403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(988), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
  [11414] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(151), 1,
      sym_name,
    STATE(408), 1,
      sym_fieldName,
    ACTIONS(959), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11429] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(681), 1,
      sym_queryName,
    STATE(715), 1,
      sym_name,
    ACTIONS(37), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11444] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(5), 1,
      sym_accumName,
    ACTIONS(392), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11459] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(606), 1,
      sym_name,
    STATE(687), 1,
      sym_syntaxName,
    ACTIONS(37), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(990), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [11485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(992), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      anon_sym_RBRACK,
  [11496] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(994), 1,
      anon_sym_DOT,
    ACTIONS(770), 4,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_perClauseV2_token1,
  [11509] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(5), 1,
      sym_accumName,
    ACTIONS(360), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11524] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(996), 1,
      anon_sym_SEMI,
    ACTIONS(998), 1,
      aux_sym_perClauseV2_token1,
    STATE(625), 1,
      sym_perClauseV2,
    STATE(388), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [11541] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(597), 1,
      sym_syntaxName,
    STATE(606), 1,
      sym_name,
    ACTIONS(37), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11556] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(694), 1,
      sym_name,
    STATE(695), 1,
      sym_edgeAlias,
    ACTIONS(37), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11571] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(602), 1,
      sym_syntaxName,
    STATE(606), 1,
      sym_name,
    ACTIONS(37), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11586] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(603), 1,
      sym_syntaxName,
    STATE(606), 1,
      sym_name,
    ACTIONS(37), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11601] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(606), 1,
      sym_name,
    STATE(633), 1,
      sym_syntaxName,
    ACTIONS(37), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11616] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(606), 1,
      sym_name,
    STATE(608), 1,
      sym_syntaxName,
    ACTIONS(37), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11631] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(606), 1,
      sym_name,
    STATE(615), 1,
      sym_syntaxName,
    ACTIONS(37), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11646] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_RETURNS,
    ACTIONS(1001), 1,
      anon_sym_LBRACE,
    ACTIONS(1003), 1,
      anon_sym_API,
    ACTIONS(1005), 1,
      anon_sym_SYNTAX,
    STATE(508), 1,
      sym_returns,
  [11665] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(688), 1,
      sym_attrName,
    STATE(689), 1,
      sym_name,
    ACTIONS(37), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11680] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(606), 1,
      sym_name,
    STATE(622), 1,
      sym_syntaxName,
    ACTIONS(37), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11695] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(684), 1,
      sym_name,
    STATE(685), 1,
      sym_fileVar,
    ACTIONS(37), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11710] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(5), 1,
      sym_accumName,
    ACTIONS(398), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11725] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1007), 1,
      anon_sym_DOT,
    ACTIONS(770), 4,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_printStmt_token3,
  [11738] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 1,
      anon_sym_COMMA,
    STATE(350), 1,
      aux_sym_fromClause_repeat1,
    ACTIONS(1009), 3,
      anon_sym_SEMI,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [11753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
  [11763] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1013), 1,
      anon_sym_AT,
    ACTIONS(1011), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_AT_AT,
  [11775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1015), 4,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_COLON,
  [11785] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1018), 1,
      anon_sym_SEMI,
    ACTIONS(1020), 3,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [11797] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1024), 1,
      anon_sym_AT,
    ACTIONS(1022), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_AT_AT,
  [11809] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1026), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(1028), 2,
      aux_sym_accumType_token11,
      aux_sym_accumType_token12,
  [11821] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1032), 1,
      anon_sym_AT,
    ACTIONS(1030), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_AT_AT,
  [11833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1034), 4,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_COLON,
  [11843] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_AT_AT,
    ACTIONS(1036), 1,
      anon_sym_AT,
    STATE(428), 2,
      sym_localAccumName,
      sym_globalAccumName,
  [11857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(918), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
  [11867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1038), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
  [11877] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1042), 1,
      anon_sym_PIPE,
    STATE(414), 1,
      aux_sym_stepEdgeTypes_repeat1,
    ACTIONS(1040), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [11891] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(430), 1,
      sym_name,
    ACTIONS(37), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11903] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 2,
      anon_sym_SEMI,
      aux_sym_printStmt_token3,
    ACTIONS(1045), 2,
      anon_sym_AND,
      anon_sym_OR,
  [11915] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1048), 1,
      anon_sym_COMMA,
    STATE(441), 1,
      aux_sym_dmlSubStmtList_repeat1,
    ACTIONS(1050), 2,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
  [11929] = 5,
    ACTIONS(1052), 1,
      sym_comment,
    ACTIONS(1054), 1,
      anon_sym_DQUOTE,
    ACTIONS(1056), 1,
      aux_sym_stringLiteral_token1,
    ACTIONS(1058), 1,
      sym_escape_sequence,
    STATE(434), 1,
      aux_sym_stringLiteral_repeat1,
  [11945] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1062), 1,
      anon_sym_AT,
    ACTIONS(1060), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_AT_AT,
  [11957] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1064), 1,
      anon_sym_DOT,
    ACTIONS(770), 3,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_queryBodyIfStmt_token2,
  [11969] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1066), 1,
      anon_sym_SEMI,
    ACTIONS(1020), 3,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [11981] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1068), 1,
      anon_sym_SEMI,
    ACTIONS(1072), 1,
      aux_sym_printStmt_token3,
    ACTIONS(1070), 2,
      anon_sym_AND,
      anon_sym_OR,
  [11995] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1076), 1,
      anon_sym_AT,
    ACTIONS(1074), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_AT_AT,
  [12007] = 5,
    ACTIONS(1052), 1,
      sym_comment,
    ACTIONS(1078), 1,
      anon_sym_DQUOTE,
    ACTIONS(1080), 1,
      aux_sym_stringLiteral_token1,
    ACTIONS(1083), 1,
      sym_escape_sequence,
    STATE(424), 1,
      aux_sym_stringLiteral_repeat1,
  [12023] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1088), 1,
      anon_sym_AT,
    ACTIONS(1086), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_AT_AT,
  [12035] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1090), 2,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
    ACTIONS(1092), 2,
      anon_sym_AND,
      anon_sym_OR,
  [12047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1094), 4,
      anon_sym_LBRACE,
      anon_sym_API,
      anon_sym_SYNTAX,
      anon_sym_RETURNS,
  [12057] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1096), 1,
      anon_sym_EQ,
    ACTIONS(1098), 1,
      anon_sym_COMMA,
    ACTIONS(1100), 1,
      anon_sym_SEMI,
    STATE(483), 1,
      aux_sym_accumDeclStmt_repeat1,
  [12073] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      anon_sym_PIPE,
    STATE(414), 1,
      aux_sym_stepEdgeTypes_repeat1,
    ACTIONS(1102), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [12087] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1104), 1,
      anon_sym_EQ,
    ACTIONS(1106), 1,
      anon_sym_COMMA,
    ACTIONS(1108), 1,
      anon_sym_SEMI,
    STATE(496), 1,
      aux_sym_baseDeclStmt_repeat1,
  [12103] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      anon_sym_COMMA,
    ACTIONS(1110), 1,
      anon_sym_EQ,
    ACTIONS(1112), 1,
      anon_sym_SEMI,
    STATE(500), 1,
      aux_sym_accumDeclStmt_repeat1,
  [12119] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1048), 1,
      anon_sym_COMMA,
    STATE(417), 1,
      aux_sym_dmlSubStmtList_repeat1,
    ACTIONS(1114), 2,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
  [12133] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1116), 1,
      anon_sym_DOT,
    ACTIONS(770), 3,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
  [12145] = 5,
    ACTIONS(1052), 1,
      sym_comment,
    ACTIONS(1118), 1,
      anon_sym_DQUOTE,
    ACTIONS(1120), 1,
      aux_sym_stringLiteral_token1,
    ACTIONS(1122), 1,
      sym_escape_sequence,
    STATE(424), 1,
      aux_sym_stringLiteral_repeat1,
  [12161] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(933), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [12171] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1124), 1,
      anon_sym_SEMI,
    ACTIONS(1126), 1,
      aux_sym_printStmt_token3,
    ACTIONS(1070), 2,
      anon_sym_AND,
      anon_sym_OR,
  [12185] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1128), 1,
      anon_sym_RPAREN,
    ACTIONS(1020), 3,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [12197] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(488), 1,
      sym_name,
    ACTIONS(37), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12209] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 2,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
    ACTIONS(1130), 2,
      anon_sym_AND,
      anon_sym_OR,
  [12221] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1133), 1,
      anon_sym_RPAREN,
    ACTIONS(1135), 1,
      anon_sym_EQ,
    ACTIONS(1137), 1,
      anon_sym_COMMA,
    STATE(481), 1,
      aux_sym_parameterList_repeat1,
  [12237] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1139), 1,
      anon_sym_COMMA,
    STATE(441), 1,
      aux_sym_dmlSubStmtList_repeat1,
    ACTIONS(1142), 2,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
  [12251] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1146), 1,
      anon_sym_AT,
    ACTIONS(1144), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_AT_AT,
  [12263] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1137), 1,
      anon_sym_COMMA,
    ACTIONS(1148), 1,
      anon_sym_RPAREN,
    STATE(476), 1,
      aux_sym_parameterList_repeat1,
  [12276] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(953), 1,
      anon_sym_COMMA,
    ACTIONS(1150), 1,
      anon_sym_RPAREN,
    STATE(511), 1,
      aux_sym_accumType_repeat1,
  [12289] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1106), 1,
      anon_sym_COMMA,
    ACTIONS(1152), 1,
      anon_sym_SEMI,
    STATE(487), 1,
      aux_sym_baseDeclStmt_repeat1,
  [12302] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      anon_sym_LBRACE,
    ACTIONS(823), 1,
      anon_sym_API,
    ACTIONS(825), 1,
      anon_sym_SYNTAX,
  [12315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1154), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12324] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1156), 1,
      anon_sym_RPAREN,
    ACTIONS(1158), 1,
      anon_sym_COMMA,
    STATE(448), 1,
      aux_sym_parameterList_repeat1,
  [12337] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 1,
      anon_sym_COMMA,
    ACTIONS(1163), 1,
      anon_sym_GT,
    STATE(473), 1,
      aux_sym_tupleFields_repeat1,
  [12350] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(984), 3,
      aux_sym_accumType_token2,
      aux_sym_accumType_token3,
      aux_sym_accumType_token4,
  [12359] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      anon_sym_COMMA,
    ACTIONS(1165), 1,
      anon_sym_SEMI,
    STATE(506), 1,
      aux_sym_accumDeclStmt_repeat1,
  [12372] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_COMMA,
    ACTIONS(61), 1,
      aux_sym_integer_token1,
    STATE(8), 1,
      aux_sym_integer_repeat1,
  [12385] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      anon_sym_RPAREN,
    ACTIONS(1169), 1,
      anon_sym_COMMA,
    STATE(453), 1,
      aux_sym_perClauseV2_repeat1,
  [12398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1142), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
  [12407] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1172), 1,
      anon_sym_DOT,
    ACTIONS(1174), 1,
      aux_sym_integer_token1,
    STATE(7), 1,
      aux_sym_integer_repeat1,
  [12420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1176), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
  [12429] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1178), 1,
      aux_sym_queryBodyIfStmt_token3,
    ACTIONS(1181), 1,
      aux_sym_queryBodyIfStmt_token4,
    STATE(457), 1,
      aux_sym_queryBodyIfStmt_repeat1,
  [12442] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1183), 1,
      anon_sym_COMMA,
    ACTIONS(1186), 1,
      anon_sym_RBRACK,
    STATE(458), 1,
      aux_sym_vExprSet_repeat1,
  [12455] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1190), 1,
      aux_sym_queryBodyIfStmt_token2,
    ACTIONS(1188), 2,
      anon_sym_AND,
      anon_sym_OR,
  [12466] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1192), 1,
      anon_sym_RPAREN,
    ACTIONS(1194), 2,
      anon_sym_AND,
      anon_sym_OR,
  [12477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1196), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12486] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(924), 1,
      anon_sym_LBRACE,
    ACTIONS(926), 1,
      anon_sym_API,
    ACTIONS(928), 1,
      anon_sym_SYNTAX,
  [12499] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1198), 1,
      aux_sym_elementType_token1,
    ACTIONS(772), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [12510] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      anon_sym_COMMA,
    ACTIONS(1200), 1,
      anon_sym_SEMI,
    STATE(506), 1,
      aux_sym_accumDeclStmt_repeat1,
  [12523] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1202), 1,
      anon_sym_RPAREN,
    ACTIONS(1204), 1,
      anon_sym_COMMA,
    STATE(514), 1,
      aux_sym_perClauseV2_repeat1,
  [12536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COLON,
  [12545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1206), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
  [12554] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1208), 1,
      anon_sym_COMMA,
    ACTIONS(1210), 1,
      anon_sym_RBRACK,
    STATE(458), 1,
      aux_sym_vExprSet_repeat1,
  [12567] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1212), 1,
      aux_sym_queryBodyIfStmt_token3,
    ACTIONS(1214), 1,
      aux_sym_queryBodyIfStmt_token4,
    STATE(457), 1,
      aux_sym_queryBodyIfStmt_repeat1,
  [12580] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_RPAREN,
    ACTIONS(1216), 1,
      anon_sym_COMMA,
    STATE(470), 1,
      aux_sym_argList_repeat1,
  [12593] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1219), 1,
      aux_sym_queryBodyIfStmt_token2,
    ACTIONS(1188), 2,
      anon_sym_AND,
      anon_sym_OR,
  [12604] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      aux_sym_integer_token1,
    ACTIONS(63), 1,
      anon_sym_COMMA,
    STATE(8), 1,
      aux_sym_integer_repeat1,
  [12617] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1221), 1,
      anon_sym_COMMA,
    ACTIONS(1224), 1,
      anon_sym_GT,
    STATE(473), 1,
      aux_sym_tupleFields_repeat1,
  [12630] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1226), 1,
      aux_sym_createSignature_token2,
    ACTIONS(1228), 1,
      aux_sym_createSignature_token4,
    ACTIONS(1230), 1,
      anon_sym_QUERY,
  [12643] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1234), 1,
      anon_sym_EQ,
    ACTIONS(1232), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [12654] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1137), 1,
      anon_sym_COMMA,
    ACTIONS(1236), 1,
      anon_sym_RPAREN,
    STATE(448), 1,
      aux_sym_parameterList_repeat1,
  [12667] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      anon_sym_COMMA,
    ACTIONS(1200), 1,
      anon_sym_SEMI,
    STATE(451), 1,
      aux_sym_accumDeclStmt_repeat1,
  [12680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1238), 3,
      anon_sym_LBRACE,
      anon_sym_API,
      anon_sym_SYNTAX,
  [12689] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1242), 1,
      anon_sym_DOT,
    ACTIONS(1240), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [12700] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 1,
      anon_sym_COMMA,
    ACTIONS(1244), 1,
      anon_sym_GT,
    STATE(449), 1,
      aux_sym_tupleFields_repeat1,
  [12713] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1137), 1,
      anon_sym_COMMA,
    ACTIONS(1246), 1,
      anon_sym_RPAREN,
    STATE(448), 1,
      aux_sym_parameterList_repeat1,
  [12726] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1248), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12735] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      anon_sym_COMMA,
    ACTIONS(1112), 1,
      anon_sym_SEMI,
    STATE(506), 1,
      aux_sym_accumDeclStmt_repeat1,
  [12748] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_RPAREN,
    ACTIONS(1250), 2,
      anon_sym_AND,
      anon_sym_OR,
  [12759] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(972), 1,
      anon_sym_LBRACE,
    ACTIONS(974), 1,
      anon_sym_API,
    ACTIONS(976), 1,
      anon_sym_SYNTAX,
  [12772] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_LBRACE,
    ACTIONS(839), 1,
      anon_sym_API,
    ACTIONS(841), 1,
      anon_sym_SYNTAX,
  [12785] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1253), 1,
      anon_sym_COMMA,
    ACTIONS(1256), 1,
      anon_sym_SEMI,
    STATE(487), 1,
      aux_sym_baseDeclStmt_repeat1,
  [12798] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1258), 1,
      anon_sym_EQ,
    ACTIONS(1256), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12809] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1106), 1,
      anon_sym_COMMA,
    ACTIONS(1260), 1,
      anon_sym_SEMI,
    STATE(445), 1,
      aux_sym_baseDeclStmt_repeat1,
  [12822] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(953), 1,
      anon_sym_COMMA,
    ACTIONS(1262), 1,
      anon_sym_RPAREN,
    STATE(444), 1,
      aux_sym_accumType_repeat1,
  [12835] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(953), 1,
      anon_sym_COMMA,
    ACTIONS(1262), 1,
      anon_sym_RPAREN,
    STATE(511), 1,
      aux_sym_accumType_repeat1,
  [12848] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1264), 1,
      aux_sym_queryBodyIfStmt_token3,
    ACTIONS(1267), 1,
      aux_sym_queryBodyIfStmt_token4,
    STATE(469), 1,
      aux_sym_queryBodyIfStmt_repeat1,
  [12861] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1270), 1,
      aux_sym_queryBodyIfStmt_token2,
    ACTIONS(1188), 2,
      anon_sym_AND,
      anon_sym_OR,
  [12872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1040), 3,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COLON,
  [12881] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      anon_sym_LBRACE,
    ACTIONS(799), 1,
      anon_sym_API,
    ACTIONS(801), 1,
      anon_sym_SYNTAX,
  [12894] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1106), 1,
      anon_sym_COMMA,
    ACTIONS(1272), 1,
      anon_sym_SEMI,
    STATE(487), 1,
      aux_sym_baseDeclStmt_repeat1,
  [12907] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      anon_sym_LBRACE,
    ACTIONS(878), 1,
      anon_sym_API,
    ACTIONS(880), 1,
      anon_sym_SYNTAX,
  [12920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1274), 3,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_COMMA,
  [12929] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1279), 1,
      anon_sym_DOT_STAR,
    ACTIONS(1276), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [12940] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      anon_sym_COMMA,
    ACTIONS(1281), 1,
      anon_sym_SEMI,
    STATE(506), 1,
      aux_sym_accumDeclStmt_repeat1,
  [12953] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1283), 1,
      anon_sym_RBRACE,
    ACTIONS(1285), 1,
      anon_sym_COMMA,
    STATE(501), 1,
      aux_sym_seedSet_repeat1,
  [12966] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1001), 1,
      anon_sym_LBRACE,
    ACTIONS(1003), 1,
      anon_sym_API,
    ACTIONS(1005), 1,
      anon_sym_SYNTAX,
  [12979] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1288), 1,
      anon_sym_RBRACE,
    ACTIONS(1290), 1,
      anon_sym_COMMA,
    STATE(510), 1,
      aux_sym_seedSet_repeat1,
  [12992] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1294), 1,
      anon_sym_GT,
    ACTIONS(1292), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [13003] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_COMMA,
    ACTIONS(1296), 1,
      anon_sym_RPAREN,
    STATE(470), 1,
      aux_sym_argList_repeat1,
  [13016] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1298), 1,
      anon_sym_COMMA,
    ACTIONS(1301), 1,
      anon_sym_SEMI,
    STATE(506), 1,
      aux_sym_accumDeclStmt_repeat1,
  [13029] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      aux_sym_queryBodyIfStmt_token2,
    ACTIONS(1303), 2,
      anon_sym_AND,
      anon_sym_OR,
  [13040] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1306), 1,
      anon_sym_LBRACE,
    ACTIONS(1308), 1,
      anon_sym_API,
    ACTIONS(1310), 1,
      anon_sym_SYNTAX,
  [13053] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1312), 1,
      aux_sym_queryBodyIfStmt_token3,
    ACTIONS(1314), 1,
      aux_sym_queryBodyIfStmt_token4,
    STATE(469), 1,
      aux_sym_queryBodyIfStmt_repeat1,
  [13066] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1290), 1,
      anon_sym_COMMA,
    ACTIONS(1316), 1,
      anon_sym_RBRACE,
    STATE(501), 1,
      aux_sym_seedSet_repeat1,
  [13079] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1026), 1,
      anon_sym_RPAREN,
    ACTIONS(1318), 1,
      anon_sym_COMMA,
    STATE(511), 1,
      aux_sym_accumType_repeat1,
  [13092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1321), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13101] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1208), 1,
      anon_sym_COMMA,
    ACTIONS(1323), 1,
      anon_sym_RBRACK,
    STATE(468), 1,
      aux_sym_vExprSet_repeat1,
  [13114] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1204), 1,
      anon_sym_COMMA,
    ACTIONS(1325), 1,
      anon_sym_RPAREN,
    STATE(453), 1,
      aux_sym_perClauseV2_repeat1,
  [13127] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      anon_sym_COMMA,
    ACTIONS(1281), 1,
      anon_sym_SEMI,
    STATE(464), 1,
      aux_sym_accumDeclStmt_repeat1,
  [13140] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1327), 1,
      anon_sym_EQ,
    ACTIONS(1301), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13151] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    STATE(628), 1,
      sym_stringLiteral,
  [13161] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1306), 1,
      anon_sym_LBRACE,
    ACTIONS(1310), 1,
      anon_sym_SYNTAX,
  [13171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1283), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [13179] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    STATE(629), 1,
      sym_stringLiteral,
  [13189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1329), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1331), 2,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
  [13205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1333), 2,
      aux_sym_queryBodyIfStmt_token3,
      aux_sym_queryBodyIfStmt_token4,
  [13213] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    STATE(620), 1,
      sym_stringLiteral,
  [13223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1335), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [13231] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    STATE(619), 1,
      sym_stringLiteral,
  [13241] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1337), 1,
      anon_sym_LPAREN,
    STATE(570), 1,
      sym_selectVertParams,
  [13251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1339), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [13259] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1001), 1,
      anon_sym_LBRACE,
    ACTIONS(1005), 1,
      anon_sym_SYNTAX,
  [13269] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1341), 1,
      anon_sym_LBRACE,
    ACTIONS(1343), 1,
      anon_sym_SYNTAX,
  [13279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1345), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13287] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1347), 1,
      anon_sym_LBRACE,
    ACTIONS(1349), 1,
      anon_sym_SYNTAX,
  [13297] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    STATE(679), 1,
      sym_stringLiteral,
  [13307] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1351), 1,
      aux_sym_accumClause_token1,
    ACTIONS(1353), 1,
      aux_sym_postAccumClause_token1,
  [13317] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    STATE(609), 1,
      sym_stringLiteral,
  [13327] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1355), 1,
      anon_sym_RPAREN,
    ACTIONS(1357), 1,
      anon_sym_COLON,
  [13337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1359), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13345] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(972), 1,
      anon_sym_LBRACE,
    ACTIONS(976), 1,
      anon_sym_SYNTAX,
  [13355] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1361), 1,
      anon_sym_LBRACE,
    ACTIONS(1363), 1,
      anon_sym_SYNTAX,
  [13365] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    STATE(649), 1,
      sym_stringLiteral,
  [13375] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      anon_sym_LBRACE,
    ACTIONS(801), 1,
      anon_sym_SYNTAX,
  [13385] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_AT,
    STATE(516), 1,
      sym_localAccumName,
  [13395] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    STATE(644), 1,
      sym_stringLiteral,
  [13405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1365), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [13413] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1367), 1,
      anon_sym_LBRACE,
    ACTIONS(1369), 1,
      anon_sym_SYNTAX,
  [13423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1279), 2,
      anon_sym_RPAREN,
      anon_sym_GT,
  [13431] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1371), 1,
      aux_sym_condition_token1,
    ACTIONS(1373), 1,
      aux_sym_condition_token4,
  [13441] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      aux_sym_integer_token1,
    STATE(12), 1,
      aux_sym_integer_repeat1,
  [13451] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_GT,
    ACTIONS(1375), 1,
      aux_sym_elementType_token1,
  [13461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1377), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [13469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1379), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [13477] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(924), 1,
      anon_sym_LBRACE,
    ACTIONS(928), 1,
      anon_sym_SYNTAX,
  [13487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1381), 2,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
  [13495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1383), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [13503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1385), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1387), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13519] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    STATE(665), 1,
      sym_stringLiteral,
  [13529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1186), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1389), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      anon_sym_DOLLAR,
    STATE(666), 1,
      sym_columnId,
  [13555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1391), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13563] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1394), 1,
      aux_sym_integer_token1,
    STATE(9), 1,
      aux_sym_integer_repeat1,
  [13573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1396), 2,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
  [13581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1398), 2,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
  [13589] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1400), 1,
      anon_sym_EQ,
    ACTIONS(1402), 1,
      anon_sym_DOT,
  [13599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1404), 2,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
  [13607] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1406), 1,
      aux_sym_integer_token1,
    STATE(472), 1,
      aux_sym_integer_repeat1,
  [13617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13625] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_AT_AT,
    STATE(431), 1,
      sym_globalAccumName,
  [13635] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1408), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [13643] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1410), 1,
      anon_sym_LPAREN,
    ACTIONS(1412), 1,
      anon_sym_EQ,
  [13653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1414), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [13661] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    STATE(660), 1,
      sym_stringLiteral,
  [13671] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1416), 1,
      aux_sym_fromClause_token1,
    STATE(230), 1,
      sym_fromClause,
  [13681] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1418), 1,
      aux_sym_createSignature_token4,
    ACTIONS(1420), 1,
      anon_sym_QUERY,
  [13691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1018), 1,
      anon_sym_SEMI,
  [13698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1422), 1,
      anon_sym_LPAREN,
  [13705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1424), 1,
      anon_sym_LPAREN,
  [13712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1426), 1,
      anon_sym_GRAPH,
  [13719] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1428), 1,
      anon_sym_RPAREN,
  [13726] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      anon_sym_LBRACE,
  [13733] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1430), 1,
      anon_sym_RPAREN,
  [13740] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1432), 1,
      anon_sym_SEMI,
  [13747] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1434), 1,
      aux_sym_queryBodyIfStmt_token4,
  [13754] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1436), 1,
      anon_sym_SEMI,
  [13761] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1438), 1,
      anon_sym_COMMA,
  [13768] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1440), 1,
      anon_sym_COMMA,
  [13775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1442), 1,
      anon_sym_COMMA,
  [13782] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1445), 1,
      anon_sym_PLUS_EQ,
  [13789] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1447), 1,
      anon_sym_SEMI,
  [13796] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1449), 1,
      anon_sym_SEMI,
  [13803] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1451), 1,
      anon_sym_SEMI,
  [13810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1453), 1,
      anon_sym_EQ,
  [13817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1124), 1,
      anon_sym_SEMI,
  [13824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1455), 1,
      anon_sym_LPAREN,
  [13831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1457), 1,
      anon_sym_SEMI,
  [13838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1459), 1,
      anon_sym_LBRACE,
  [13845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1461), 1,
      anon_sym_SEMI,
  [13852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1463), 1,
      aux_sym_selectVertParams_token1,
  [13859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1465), 1,
      anon_sym_GT,
  [13866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1467), 1,
      anon_sym_RPAREN,
  [13873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1469), 1,
      anon_sym_LBRACE,
  [13880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1367), 1,
      anon_sym_LBRACE,
  [13887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1471), 1,
      anon_sym_GT,
  [13894] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1473), 1,
      anon_sym_RPAREN,
  [13901] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1475), 1,
      anon_sym_LBRACE,
  [13908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_LBRACE,
  [13915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1361), 1,
      anon_sym_LBRACE,
  [13922] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1477), 1,
      anon_sym_RPAREN,
  [13929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      anon_sym_LPAREN,
  [13936] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1481), 1,
      anon_sym_GRAPH,
  [13943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_RPAREN,
  [13950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1483), 1,
      anon_sym_RPAREN,
  [13957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1485), 1,
      aux_sym_constant_token1,
  [13964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1347), 1,
      anon_sym_LBRACE,
  [13971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      aux_sym_gsqlSelectClause_token1,
  [13978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1487), 1,
      aux_sym_fromClause_token1,
  [13985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1489), 1,
      anon_sym_DOT_STAR,
  [13992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1491), 1,
      anon_sym_RPAREN,
  [13999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1493), 1,
      anon_sym_COMMA,
  [14006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1495), 1,
      anon_sym_LPAREN,
  [14013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1341), 1,
      anon_sym_LBRACE,
  [14020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1497), 1,
      anon_sym_SEMI,
  [14027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1499), 1,
      aux_sym_condition_token2,
  [14034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1353), 1,
      aux_sym_postAccumClause_token1,
  [14041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1501), 1,
      anon_sym_LPAREN,
  [14048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1503), 1,
      anon_sym_SEMI,
  [14055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1505), 1,
      anon_sym_RPAREN,
  [14062] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1507), 1,
      anon_sym_RPAREN,
  [14069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1509), 1,
      anon_sym_LPAREN,
  [14076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1511), 1,
      anon_sym_SEMI,
  [14083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1068), 1,
      anon_sym_SEMI,
  [14090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1306), 1,
      anon_sym_LBRACE,
  [14097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1514), 1,
      anon_sym_RPAREN,
  [14104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1516), 1,
      anon_sym_COMMA,
  [14111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1518), 1,
      aux_sym_condition_token4,
  [14118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1520), 1,
      aux_sym_queryBodyIfStmt_token1,
  [14125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1522), 1,
      anon_sym_COMMA,
  [14132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1001), 1,
      anon_sym_LBRACE,
  [14139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1524), 1,
      anon_sym_SEMI,
  [14146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1526), 1,
      anon_sym_GT,
  [14153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1528), 1,
      anon_sym_LPAREN,
  [14160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1530), 1,
      anon_sym_SEMI,
  [14167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1532), 1,
      anon_sym_RPAREN,
  [14174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1534), 1,
      anon_sym_GT,
  [14181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1536), 1,
      anon_sym_LPAREN,
  [14188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1538), 1,
      anon_sym_GT,
  [14195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1540), 1,
      anon_sym_COMMA,
  [14202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1542), 1,
      anon_sym_RPAREN,
  [14209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1544), 1,
      anon_sym_LPAREN,
  [14216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1546), 1,
      anon_sym_GRAPH,
  [14223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_RPAREN,
  [14230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1548), 1,
      anon_sym_LPAREN,
  [14237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1550), 1,
      anon_sym_GRAPH,
  [14244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1066), 1,
      anon_sym_SEMI,
  [14251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1552), 1,
      anon_sym_RPAREN,
  [14258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1554), 1,
      anon_sym_LPAREN,
  [14265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      anon_sym_LBRACE,
  [14272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1556), 1,
      anon_sym_LPAREN,
  [14279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1558), 1,
      anon_sym_RPAREN,
  [14286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1560), 1,
      anon_sym_LPAREN,
  [14293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1562), 1,
      anon_sym_RBRACE,
  [14300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1564), 1,
      anon_sym_GT,
  [14307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(972), 1,
      anon_sym_LBRACE,
  [14314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1566), 1,
      anon_sym_RPAREN,
  [14321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1568), 1,
      anon_sym_COMMA,
  [14328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1570), 1,
      anon_sym_RPAREN,
  [14335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1572), 1,
      anon_sym_RPAREN,
  [14342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1574), 1,
      anon_sym_GT,
  [14349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1576), 1,
      anon_sym_RPAREN,
  [14356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1578), 1,
      anon_sym_GT,
  [14363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1580), 1,
      anon_sym_SEMI,
  [14370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1582), 1,
      anon_sym_SEMI,
  [14377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1584), 1,
      anon_sym_COMMA,
  [14384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1586), 1,
      aux_sym_queryBodyIfStmt_token4,
  [14391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1588), 1,
      anon_sym_GT,
  [14398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1590), 1,
      anon_sym_GT,
  [14405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_RPAREN,
  [14412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1592), 1,
      anon_sym_RPAREN,
  [14419] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1594), 1,
      anon_sym_LT,
  [14426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1596), 1,
      anon_sym_LPAREN,
  [14433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1598), 1,
      anon_sym_RBRACE,
  [14440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1600), 1,
      anon_sym_GRAPH,
  [14447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1602), 1,
      anon_sym_LPAREN,
  [14454] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1604), 1,
      anon_sym_LPAREN,
  [14461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1606), 1,
      anon_sym_LPAREN,
  [14468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(924), 1,
      anon_sym_LBRACE,
  [14475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1608), 1,
      anon_sym_EQ,
  [14482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1610), 1,
      anon_sym_EQ,
  [14489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1612), 1,
      anon_sym_DASH,
  [14496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1614), 1,
      anon_sym_LT,
  [14503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1616), 1,
      anon_sym_LPAREN,
  [14510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1618), 1,
      anon_sym_QUERY,
  [14517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1620), 1,
      anon_sym_RPAREN,
  [14524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1622), 1,
      anon_sym_RPAREN,
  [14531] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1624), 1,
      anon_sym_SEMI,
  [14538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1626), 1,
      anon_sym_SEMI,
  [14545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1628), 1,
      anon_sym_SEMI,
  [14552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1630), 1,
      anon_sym_SEMI,
  [14559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1632), 1,
      anon_sym_RBRACE,
  [14566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1634), 1,
      aux_sym_condition_token2,
  [14573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1636), 1,
      anon_sym_SEMI,
  [14580] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1638), 1,
      anon_sym_SEMI,
  [14587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1640), 1,
      anon_sym_RBRACE,
  [14594] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1642), 1,
      anon_sym_LT,
  [14601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1644), 1,
      aux_sym_condition_token2,
  [14608] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1646), 1,
      anon_sym_LT,
  [14615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1648), 1,
      anon_sym_LT,
  [14622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1650), 1,
      anon_sym_LT,
  [14629] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1652), 1,
      anon_sym_LT,
  [14636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1654), 1,
      aux_sym_condition_token2,
  [14643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1656), 1,
      anon_sym_LT,
  [14650] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1658), 1,
      aux_sym_typedef_token2,
  [14657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1660), 1,
      anon_sym_LPAREN,
  [14664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1662), 1,
      anon_sym_LPAREN,
  [14671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1664), 1,
      anon_sym_RPAREN,
  [14678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1666), 1,
      anon_sym_QUERY,
  [14685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1668), 1,
      aux_sym_createSignature_token3,
  [14692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1670), 1,
      anon_sym_LBRACE,
  [14699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1672), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 130,
  [SMALL_STATE(4)] = 245,
  [SMALL_STATE(5)] = 288,
  [SMALL_STATE(6)] = 330,
  [SMALL_STATE(7)] = 377,
  [SMALL_STATE(8)] = 424,
  [SMALL_STATE(9)] = 469,
  [SMALL_STATE(10)] = 513,
  [SMALL_STATE(11)] = 553,
  [SMALL_STATE(12)] = 631,
  [SMALL_STATE(13)] = 675,
  [SMALL_STATE(14)] = 719,
  [SMALL_STATE(15)] = 763,
  [SMALL_STATE(16)] = 807,
  [SMALL_STATE(17)] = 885,
  [SMALL_STATE(18)] = 926,
  [SMALL_STATE(19)] = 964,
  [SMALL_STATE(20)] = 1002,
  [SMALL_STATE(21)] = 1040,
  [SMALL_STATE(22)] = 1078,
  [SMALL_STATE(23)] = 1116,
  [SMALL_STATE(24)] = 1154,
  [SMALL_STATE(25)] = 1192,
  [SMALL_STATE(26)] = 1230,
  [SMALL_STATE(27)] = 1268,
  [SMALL_STATE(28)] = 1311,
  [SMALL_STATE(29)] = 1354,
  [SMALL_STATE(30)] = 1397,
  [SMALL_STATE(31)] = 1440,
  [SMALL_STATE(32)] = 1483,
  [SMALL_STATE(33)] = 1526,
  [SMALL_STATE(34)] = 1568,
  [SMALL_STATE(35)] = 1610,
  [SMALL_STATE(36)] = 1652,
  [SMALL_STATE(37)] = 1694,
  [SMALL_STATE(38)] = 1736,
  [SMALL_STATE(39)] = 1778,
  [SMALL_STATE(40)] = 1820,
  [SMALL_STATE(41)] = 1862,
  [SMALL_STATE(42)] = 1900,
  [SMALL_STATE(43)] = 1938,
  [SMALL_STATE(44)] = 1976,
  [SMALL_STATE(45)] = 2010,
  [SMALL_STATE(46)] = 2043,
  [SMALL_STATE(47)] = 2108,
  [SMALL_STATE(48)] = 2174,
  [SMALL_STATE(49)] = 2222,
  [SMALL_STATE(50)] = 2282,
  [SMALL_STATE(51)] = 2348,
  [SMALL_STATE(52)] = 2396,
  [SMALL_STATE(53)] = 2429,
  [SMALL_STATE(54)] = 2476,
  [SMALL_STATE(55)] = 2513,
  [SMALL_STATE(56)] = 2560,
  [SMALL_STATE(57)] = 2597,
  [SMALL_STATE(58)] = 2630,
  [SMALL_STATE(59)] = 2690,
  [SMALL_STATE(60)] = 2726,
  [SMALL_STATE(61)] = 2786,
  [SMALL_STATE(62)] = 2846,
  [SMALL_STATE(63)] = 2906,
  [SMALL_STATE(64)] = 2966,
  [SMALL_STATE(65)] = 3002,
  [SMALL_STATE(66)] = 3062,
  [SMALL_STATE(67)] = 3122,
  [SMALL_STATE(68)] = 3158,
  [SMALL_STATE(69)] = 3218,
  [SMALL_STATE(70)] = 3278,
  [SMALL_STATE(71)] = 3338,
  [SMALL_STATE(72)] = 3398,
  [SMALL_STATE(73)] = 3434,
  [SMALL_STATE(74)] = 3494,
  [SMALL_STATE(75)] = 3526,
  [SMALL_STATE(76)] = 3558,
  [SMALL_STATE(77)] = 3618,
  [SMALL_STATE(78)] = 3654,
  [SMALL_STATE(79)] = 3714,
  [SMALL_STATE(80)] = 3771,
  [SMALL_STATE(81)] = 3828,
  [SMALL_STATE(82)] = 3885,
  [SMALL_STATE(83)] = 3942,
  [SMALL_STATE(84)] = 3999,
  [SMALL_STATE(85)] = 4056,
  [SMALL_STATE(86)] = 4113,
  [SMALL_STATE(87)] = 4170,
  [SMALL_STATE(88)] = 4227,
  [SMALL_STATE(89)] = 4284,
  [SMALL_STATE(90)] = 4341,
  [SMALL_STATE(91)] = 4398,
  [SMALL_STATE(92)] = 4455,
  [SMALL_STATE(93)] = 4512,
  [SMALL_STATE(94)] = 4569,
  [SMALL_STATE(95)] = 4626,
  [SMALL_STATE(96)] = 4683,
  [SMALL_STATE(97)] = 4740,
  [SMALL_STATE(98)] = 4797,
  [SMALL_STATE(99)] = 4854,
  [SMALL_STATE(100)] = 4911,
  [SMALL_STATE(101)] = 4945,
  [SMALL_STATE(102)] = 4979,
  [SMALL_STATE(103)] = 5013,
  [SMALL_STATE(104)] = 5047,
  [SMALL_STATE(105)] = 5081,
  [SMALL_STATE(106)] = 5115,
  [SMALL_STATE(107)] = 5148,
  [SMALL_STATE(108)] = 5181,
  [SMALL_STATE(109)] = 5214,
  [SMALL_STATE(110)] = 5263,
  [SMALL_STATE(111)] = 5296,
  [SMALL_STATE(112)] = 5329,
  [SMALL_STATE(113)] = 5362,
  [SMALL_STATE(114)] = 5395,
  [SMALL_STATE(115)] = 5428,
  [SMALL_STATE(116)] = 5461,
  [SMALL_STATE(117)] = 5494,
  [SMALL_STATE(118)] = 5527,
  [SMALL_STATE(119)] = 5560,
  [SMALL_STATE(120)] = 5609,
  [SMALL_STATE(121)] = 5658,
  [SMALL_STATE(122)] = 5710,
  [SMALL_STATE(123)] = 5758,
  [SMALL_STATE(124)] = 5806,
  [SMALL_STATE(125)] = 5854,
  [SMALL_STATE(126)] = 5906,
  [SMALL_STATE(127)] = 5954,
  [SMALL_STATE(128)] = 6000,
  [SMALL_STATE(129)] = 6048,
  [SMALL_STATE(130)] = 6096,
  [SMALL_STATE(131)] = 6144,
  [SMALL_STATE(132)] = 6190,
  [SMALL_STATE(133)] = 6236,
  [SMALL_STATE(134)] = 6284,
  [SMALL_STATE(135)] = 6332,
  [SMALL_STATE(136)] = 6380,
  [SMALL_STATE(137)] = 6426,
  [SMALL_STATE(138)] = 6474,
  [SMALL_STATE(139)] = 6517,
  [SMALL_STATE(140)] = 6560,
  [SMALL_STATE(141)] = 6603,
  [SMALL_STATE(142)] = 6631,
  [SMALL_STATE(143)] = 6671,
  [SMALL_STATE(144)] = 6697,
  [SMALL_STATE(145)] = 6743,
  [SMALL_STATE(146)] = 6771,
  [SMALL_STATE(147)] = 6811,
  [SMALL_STATE(148)] = 6843,
  [SMALL_STATE(149)] = 6889,
  [SMALL_STATE(150)] = 6932,
  [SMALL_STATE(151)] = 6959,
  [SMALL_STATE(152)] = 6980,
  [SMALL_STATE(153)] = 7007,
  [SMALL_STATE(154)] = 7034,
  [SMALL_STATE(155)] = 7060,
  [SMALL_STATE(156)] = 7084,
  [SMALL_STATE(157)] = 7110,
  [SMALL_STATE(158)] = 7136,
  [SMALL_STATE(159)] = 7162,
  [SMALL_STATE(160)] = 7186,
  [SMALL_STATE(161)] = 7211,
  [SMALL_STATE(162)] = 7236,
  [SMALL_STATE(163)] = 7261,
  [SMALL_STATE(164)] = 7288,
  [SMALL_STATE(165)] = 7313,
  [SMALL_STATE(166)] = 7338,
  [SMALL_STATE(167)] = 7363,
  [SMALL_STATE(168)] = 7386,
  [SMALL_STATE(169)] = 7411,
  [SMALL_STATE(170)] = 7434,
  [SMALL_STATE(171)] = 7463,
  [SMALL_STATE(172)] = 7486,
  [SMALL_STATE(173)] = 7511,
  [SMALL_STATE(174)] = 7534,
  [SMALL_STATE(175)] = 7557,
  [SMALL_STATE(176)] = 7582,
  [SMALL_STATE(177)] = 7619,
  [SMALL_STATE(178)] = 7644,
  [SMALL_STATE(179)] = 7678,
  [SMALL_STATE(180)] = 7700,
  [SMALL_STATE(181)] = 7722,
  [SMALL_STATE(182)] = 7756,
  [SMALL_STATE(183)] = 7780,
  [SMALL_STATE(184)] = 7804,
  [SMALL_STATE(185)] = 7838,
  [SMALL_STATE(186)] = 7872,
  [SMALL_STATE(187)] = 7906,
  [SMALL_STATE(188)] = 7940,
  [SMALL_STATE(189)] = 7964,
  [SMALL_STATE(190)] = 7998,
  [SMALL_STATE(191)] = 8032,
  [SMALL_STATE(192)] = 8054,
  [SMALL_STATE(193)] = 8090,
  [SMALL_STATE(194)] = 8114,
  [SMALL_STATE(195)] = 8145,
  [SMALL_STATE(196)] = 8172,
  [SMALL_STATE(197)] = 8191,
  [SMALL_STATE(198)] = 8218,
  [SMALL_STATE(199)] = 8237,
  [SMALL_STATE(200)] = 8264,
  [SMALL_STATE(201)] = 8293,
  [SMALL_STATE(202)] = 8320,
  [SMALL_STATE(203)] = 8343,
  [SMALL_STATE(204)] = 8366,
  [SMALL_STATE(205)] = 8397,
  [SMALL_STATE(206)] = 8420,
  [SMALL_STATE(207)] = 8443,
  [SMALL_STATE(208)] = 8466,
  [SMALL_STATE(209)] = 8494,
  [SMALL_STATE(210)] = 8522,
  [SMALL_STATE(211)] = 8545,
  [SMALL_STATE(212)] = 8566,
  [SMALL_STATE(213)] = 8587,
  [SMALL_STATE(214)] = 8612,
  [SMALL_STATE(215)] = 8633,
  [SMALL_STATE(216)] = 8654,
  [SMALL_STATE(217)] = 8677,
  [SMALL_STATE(218)] = 8698,
  [SMALL_STATE(219)] = 8719,
  [SMALL_STATE(220)] = 8740,
  [SMALL_STATE(221)] = 8755,
  [SMALL_STATE(222)] = 8778,
  [SMALL_STATE(223)] = 8801,
  [SMALL_STATE(224)] = 8822,
  [SMALL_STATE(225)] = 8845,
  [SMALL_STATE(226)] = 8868,
  [SMALL_STATE(227)] = 8891,
  [SMALL_STATE(228)] = 8906,
  [SMALL_STATE(229)] = 8927,
  [SMALL_STATE(230)] = 8948,
  [SMALL_STATE(231)] = 8974,
  [SMALL_STATE(232)] = 8994,
  [SMALL_STATE(233)] = 9018,
  [SMALL_STATE(234)] = 9042,
  [SMALL_STATE(235)] = 9060,
  [SMALL_STATE(236)] = 9084,
  [SMALL_STATE(237)] = 9108,
  [SMALL_STATE(238)] = 9126,
  [SMALL_STATE(239)] = 9150,
  [SMALL_STATE(240)] = 9178,
  [SMALL_STATE(241)] = 9200,
  [SMALL_STATE(242)] = 9216,
  [SMALL_STATE(243)] = 9238,
  [SMALL_STATE(244)] = 9262,
  [SMALL_STATE(245)] = 9286,
  [SMALL_STATE(246)] = 9304,
  [SMALL_STATE(247)] = 9328,
  [SMALL_STATE(248)] = 9341,
  [SMALL_STATE(249)] = 9360,
  [SMALL_STATE(250)] = 9375,
  [SMALL_STATE(251)] = 9394,
  [SMALL_STATE(252)] = 9407,
  [SMALL_STATE(253)] = 9420,
  [SMALL_STATE(254)] = 9441,
  [SMALL_STATE(255)] = 9454,
  [SMALL_STATE(256)] = 9467,
  [SMALL_STATE(257)] = 9480,
  [SMALL_STATE(258)] = 9497,
  [SMALL_STATE(259)] = 9512,
  [SMALL_STATE(260)] = 9525,
  [SMALL_STATE(261)] = 9546,
  [SMALL_STATE(262)] = 9561,
  [SMALL_STATE(263)] = 9579,
  [SMALL_STATE(264)] = 9597,
  [SMALL_STATE(265)] = 9609,
  [SMALL_STATE(266)] = 9625,
  [SMALL_STATE(267)] = 9637,
  [SMALL_STATE(268)] = 9657,
  [SMALL_STATE(269)] = 9679,
  [SMALL_STATE(270)] = 9695,
  [SMALL_STATE(271)] = 9713,
  [SMALL_STATE(272)] = 9731,
  [SMALL_STATE(273)] = 9749,
  [SMALL_STATE(274)] = 9767,
  [SMALL_STATE(275)] = 9785,
  [SMALL_STATE(276)] = 9801,
  [SMALL_STATE(277)] = 9823,
  [SMALL_STATE(278)] = 9845,
  [SMALL_STATE(279)] = 9867,
  [SMALL_STATE(280)] = 9883,
  [SMALL_STATE(281)] = 9903,
  [SMALL_STATE(282)] = 9915,
  [SMALL_STATE(283)] = 9927,
  [SMALL_STATE(284)] = 9943,
  [SMALL_STATE(285)] = 9955,
  [SMALL_STATE(286)] = 9973,
  [SMALL_STATE(287)] = 9985,
  [SMALL_STATE(288)] = 10003,
  [SMALL_STATE(289)] = 10019,
  [SMALL_STATE(290)] = 10037,
  [SMALL_STATE(291)] = 10053,
  [SMALL_STATE(292)] = 10067,
  [SMALL_STATE(293)] = 10089,
  [SMALL_STATE(294)] = 10107,
  [SMALL_STATE(295)] = 10123,
  [SMALL_STATE(296)] = 10135,
  [SMALL_STATE(297)] = 10153,
  [SMALL_STATE(298)] = 10171,
  [SMALL_STATE(299)] = 10189,
  [SMALL_STATE(300)] = 10207,
  [SMALL_STATE(301)] = 10219,
  [SMALL_STATE(302)] = 10232,
  [SMALL_STATE(303)] = 10247,
  [SMALL_STATE(304)] = 10262,
  [SMALL_STATE(305)] = 10277,
  [SMALL_STATE(306)] = 10292,
  [SMALL_STATE(307)] = 10307,
  [SMALL_STATE(308)] = 10322,
  [SMALL_STATE(309)] = 10339,
  [SMALL_STATE(310)] = 10354,
  [SMALL_STATE(311)] = 10369,
  [SMALL_STATE(312)] = 10384,
  [SMALL_STATE(313)] = 10399,
  [SMALL_STATE(314)] = 10416,
  [SMALL_STATE(315)] = 10431,
  [SMALL_STATE(316)] = 10446,
  [SMALL_STATE(317)] = 10461,
  [SMALL_STATE(318)] = 10478,
  [SMALL_STATE(319)] = 10495,
  [SMALL_STATE(320)] = 10510,
  [SMALL_STATE(321)] = 10521,
  [SMALL_STATE(322)] = 10540,
  [SMALL_STATE(323)] = 10555,
  [SMALL_STATE(324)] = 10570,
  [SMALL_STATE(325)] = 10585,
  [SMALL_STATE(326)] = 10600,
  [SMALL_STATE(327)] = 10615,
  [SMALL_STATE(328)] = 10626,
  [SMALL_STATE(329)] = 10645,
  [SMALL_STATE(330)] = 10660,
  [SMALL_STATE(331)] = 10677,
  [SMALL_STATE(332)] = 10694,
  [SMALL_STATE(333)] = 10711,
  [SMALL_STATE(334)] = 10726,
  [SMALL_STATE(335)] = 10737,
  [SMALL_STATE(336)] = 10752,
  [SMALL_STATE(337)] = 10767,
  [SMALL_STATE(338)] = 10782,
  [SMALL_STATE(339)] = 10797,
  [SMALL_STATE(340)] = 10812,
  [SMALL_STATE(341)] = 10827,
  [SMALL_STATE(342)] = 10838,
  [SMALL_STATE(343)] = 10851,
  [SMALL_STATE(344)] = 10866,
  [SMALL_STATE(345)] = 10881,
  [SMALL_STATE(346)] = 10896,
  [SMALL_STATE(347)] = 10911,
  [SMALL_STATE(348)] = 10926,
  [SMALL_STATE(349)] = 10941,
  [SMALL_STATE(350)] = 10956,
  [SMALL_STATE(351)] = 10971,
  [SMALL_STATE(352)] = 10986,
  [SMALL_STATE(353)] = 11001,
  [SMALL_STATE(354)] = 11016,
  [SMALL_STATE(355)] = 11031,
  [SMALL_STATE(356)] = 11050,
  [SMALL_STATE(357)] = 11065,
  [SMALL_STATE(358)] = 11080,
  [SMALL_STATE(359)] = 11097,
  [SMALL_STATE(360)] = 11112,
  [SMALL_STATE(361)] = 11127,
  [SMALL_STATE(362)] = 11142,
  [SMALL_STATE(363)] = 11157,
  [SMALL_STATE(364)] = 11176,
  [SMALL_STATE(365)] = 11189,
  [SMALL_STATE(366)] = 11200,
  [SMALL_STATE(367)] = 11215,
  [SMALL_STATE(368)] = 11234,
  [SMALL_STATE(369)] = 11253,
  [SMALL_STATE(370)] = 11268,
  [SMALL_STATE(371)] = 11283,
  [SMALL_STATE(372)] = 11298,
  [SMALL_STATE(373)] = 11313,
  [SMALL_STATE(374)] = 11330,
  [SMALL_STATE(375)] = 11345,
  [SMALL_STATE(376)] = 11360,
  [SMALL_STATE(377)] = 11375,
  [SMALL_STATE(378)] = 11390,
  [SMALL_STATE(379)] = 11403,
  [SMALL_STATE(380)] = 11414,
  [SMALL_STATE(381)] = 11429,
  [SMALL_STATE(382)] = 11444,
  [SMALL_STATE(383)] = 11459,
  [SMALL_STATE(384)] = 11474,
  [SMALL_STATE(385)] = 11485,
  [SMALL_STATE(386)] = 11496,
  [SMALL_STATE(387)] = 11509,
  [SMALL_STATE(388)] = 11524,
  [SMALL_STATE(389)] = 11541,
  [SMALL_STATE(390)] = 11556,
  [SMALL_STATE(391)] = 11571,
  [SMALL_STATE(392)] = 11586,
  [SMALL_STATE(393)] = 11601,
  [SMALL_STATE(394)] = 11616,
  [SMALL_STATE(395)] = 11631,
  [SMALL_STATE(396)] = 11646,
  [SMALL_STATE(397)] = 11665,
  [SMALL_STATE(398)] = 11680,
  [SMALL_STATE(399)] = 11695,
  [SMALL_STATE(400)] = 11710,
  [SMALL_STATE(401)] = 11725,
  [SMALL_STATE(402)] = 11738,
  [SMALL_STATE(403)] = 11753,
  [SMALL_STATE(404)] = 11763,
  [SMALL_STATE(405)] = 11775,
  [SMALL_STATE(406)] = 11785,
  [SMALL_STATE(407)] = 11797,
  [SMALL_STATE(408)] = 11809,
  [SMALL_STATE(409)] = 11821,
  [SMALL_STATE(410)] = 11833,
  [SMALL_STATE(411)] = 11843,
  [SMALL_STATE(412)] = 11857,
  [SMALL_STATE(413)] = 11867,
  [SMALL_STATE(414)] = 11877,
  [SMALL_STATE(415)] = 11891,
  [SMALL_STATE(416)] = 11903,
  [SMALL_STATE(417)] = 11915,
  [SMALL_STATE(418)] = 11929,
  [SMALL_STATE(419)] = 11945,
  [SMALL_STATE(420)] = 11957,
  [SMALL_STATE(421)] = 11969,
  [SMALL_STATE(422)] = 11981,
  [SMALL_STATE(423)] = 11995,
  [SMALL_STATE(424)] = 12007,
  [SMALL_STATE(425)] = 12023,
  [SMALL_STATE(426)] = 12035,
  [SMALL_STATE(427)] = 12047,
  [SMALL_STATE(428)] = 12057,
  [SMALL_STATE(429)] = 12073,
  [SMALL_STATE(430)] = 12087,
  [SMALL_STATE(431)] = 12103,
  [SMALL_STATE(432)] = 12119,
  [SMALL_STATE(433)] = 12133,
  [SMALL_STATE(434)] = 12145,
  [SMALL_STATE(435)] = 12161,
  [SMALL_STATE(436)] = 12171,
  [SMALL_STATE(437)] = 12185,
  [SMALL_STATE(438)] = 12197,
  [SMALL_STATE(439)] = 12209,
  [SMALL_STATE(440)] = 12221,
  [SMALL_STATE(441)] = 12237,
  [SMALL_STATE(442)] = 12251,
  [SMALL_STATE(443)] = 12263,
  [SMALL_STATE(444)] = 12276,
  [SMALL_STATE(445)] = 12289,
  [SMALL_STATE(446)] = 12302,
  [SMALL_STATE(447)] = 12315,
  [SMALL_STATE(448)] = 12324,
  [SMALL_STATE(449)] = 12337,
  [SMALL_STATE(450)] = 12350,
  [SMALL_STATE(451)] = 12359,
  [SMALL_STATE(452)] = 12372,
  [SMALL_STATE(453)] = 12385,
  [SMALL_STATE(454)] = 12398,
  [SMALL_STATE(455)] = 12407,
  [SMALL_STATE(456)] = 12420,
  [SMALL_STATE(457)] = 12429,
  [SMALL_STATE(458)] = 12442,
  [SMALL_STATE(459)] = 12455,
  [SMALL_STATE(460)] = 12466,
  [SMALL_STATE(461)] = 12477,
  [SMALL_STATE(462)] = 12486,
  [SMALL_STATE(463)] = 12499,
  [SMALL_STATE(464)] = 12510,
  [SMALL_STATE(465)] = 12523,
  [SMALL_STATE(466)] = 12536,
  [SMALL_STATE(467)] = 12545,
  [SMALL_STATE(468)] = 12554,
  [SMALL_STATE(469)] = 12567,
  [SMALL_STATE(470)] = 12580,
  [SMALL_STATE(471)] = 12593,
  [SMALL_STATE(472)] = 12604,
  [SMALL_STATE(473)] = 12617,
  [SMALL_STATE(474)] = 12630,
  [SMALL_STATE(475)] = 12643,
  [SMALL_STATE(476)] = 12654,
  [SMALL_STATE(477)] = 12667,
  [SMALL_STATE(478)] = 12680,
  [SMALL_STATE(479)] = 12689,
  [SMALL_STATE(480)] = 12700,
  [SMALL_STATE(481)] = 12713,
  [SMALL_STATE(482)] = 12726,
  [SMALL_STATE(483)] = 12735,
  [SMALL_STATE(484)] = 12748,
  [SMALL_STATE(485)] = 12759,
  [SMALL_STATE(486)] = 12772,
  [SMALL_STATE(487)] = 12785,
  [SMALL_STATE(488)] = 12798,
  [SMALL_STATE(489)] = 12809,
  [SMALL_STATE(490)] = 12822,
  [SMALL_STATE(491)] = 12835,
  [SMALL_STATE(492)] = 12848,
  [SMALL_STATE(493)] = 12861,
  [SMALL_STATE(494)] = 12872,
  [SMALL_STATE(495)] = 12881,
  [SMALL_STATE(496)] = 12894,
  [SMALL_STATE(497)] = 12907,
  [SMALL_STATE(498)] = 12920,
  [SMALL_STATE(499)] = 12929,
  [SMALL_STATE(500)] = 12940,
  [SMALL_STATE(501)] = 12953,
  [SMALL_STATE(502)] = 12966,
  [SMALL_STATE(503)] = 12979,
  [SMALL_STATE(504)] = 12992,
  [SMALL_STATE(505)] = 13003,
  [SMALL_STATE(506)] = 13016,
  [SMALL_STATE(507)] = 13029,
  [SMALL_STATE(508)] = 13040,
  [SMALL_STATE(509)] = 13053,
  [SMALL_STATE(510)] = 13066,
  [SMALL_STATE(511)] = 13079,
  [SMALL_STATE(512)] = 13092,
  [SMALL_STATE(513)] = 13101,
  [SMALL_STATE(514)] = 13114,
  [SMALL_STATE(515)] = 13127,
  [SMALL_STATE(516)] = 13140,
  [SMALL_STATE(517)] = 13151,
  [SMALL_STATE(518)] = 13161,
  [SMALL_STATE(519)] = 13171,
  [SMALL_STATE(520)] = 13179,
  [SMALL_STATE(521)] = 13189,
  [SMALL_STATE(522)] = 13197,
  [SMALL_STATE(523)] = 13205,
  [SMALL_STATE(524)] = 13213,
  [SMALL_STATE(525)] = 13223,
  [SMALL_STATE(526)] = 13231,
  [SMALL_STATE(527)] = 13241,
  [SMALL_STATE(528)] = 13251,
  [SMALL_STATE(529)] = 13259,
  [SMALL_STATE(530)] = 13269,
  [SMALL_STATE(531)] = 13279,
  [SMALL_STATE(532)] = 13287,
  [SMALL_STATE(533)] = 13297,
  [SMALL_STATE(534)] = 13307,
  [SMALL_STATE(535)] = 13317,
  [SMALL_STATE(536)] = 13327,
  [SMALL_STATE(537)] = 13337,
  [SMALL_STATE(538)] = 13345,
  [SMALL_STATE(539)] = 13355,
  [SMALL_STATE(540)] = 13365,
  [SMALL_STATE(541)] = 13375,
  [SMALL_STATE(542)] = 13385,
  [SMALL_STATE(543)] = 13395,
  [SMALL_STATE(544)] = 13405,
  [SMALL_STATE(545)] = 13413,
  [SMALL_STATE(546)] = 13423,
  [SMALL_STATE(547)] = 13431,
  [SMALL_STATE(548)] = 13441,
  [SMALL_STATE(549)] = 13451,
  [SMALL_STATE(550)] = 13461,
  [SMALL_STATE(551)] = 13469,
  [SMALL_STATE(552)] = 13477,
  [SMALL_STATE(553)] = 13487,
  [SMALL_STATE(554)] = 13495,
  [SMALL_STATE(555)] = 13503,
  [SMALL_STATE(556)] = 13511,
  [SMALL_STATE(557)] = 13519,
  [SMALL_STATE(558)] = 13529,
  [SMALL_STATE(559)] = 13537,
  [SMALL_STATE(560)] = 13545,
  [SMALL_STATE(561)] = 13555,
  [SMALL_STATE(562)] = 13563,
  [SMALL_STATE(563)] = 13573,
  [SMALL_STATE(564)] = 13581,
  [SMALL_STATE(565)] = 13589,
  [SMALL_STATE(566)] = 13599,
  [SMALL_STATE(567)] = 13607,
  [SMALL_STATE(568)] = 13617,
  [SMALL_STATE(569)] = 13625,
  [SMALL_STATE(570)] = 13635,
  [SMALL_STATE(571)] = 13643,
  [SMALL_STATE(572)] = 13653,
  [SMALL_STATE(573)] = 13661,
  [SMALL_STATE(574)] = 13671,
  [SMALL_STATE(575)] = 13681,
  [SMALL_STATE(576)] = 13691,
  [SMALL_STATE(577)] = 13698,
  [SMALL_STATE(578)] = 13705,
  [SMALL_STATE(579)] = 13712,
  [SMALL_STATE(580)] = 13719,
  [SMALL_STATE(581)] = 13726,
  [SMALL_STATE(582)] = 13733,
  [SMALL_STATE(583)] = 13740,
  [SMALL_STATE(584)] = 13747,
  [SMALL_STATE(585)] = 13754,
  [SMALL_STATE(586)] = 13761,
  [SMALL_STATE(587)] = 13768,
  [SMALL_STATE(588)] = 13775,
  [SMALL_STATE(589)] = 13782,
  [SMALL_STATE(590)] = 13789,
  [SMALL_STATE(591)] = 13796,
  [SMALL_STATE(592)] = 13803,
  [SMALL_STATE(593)] = 13810,
  [SMALL_STATE(594)] = 13817,
  [SMALL_STATE(595)] = 13824,
  [SMALL_STATE(596)] = 13831,
  [SMALL_STATE(597)] = 13838,
  [SMALL_STATE(598)] = 13845,
  [SMALL_STATE(599)] = 13852,
  [SMALL_STATE(600)] = 13859,
  [SMALL_STATE(601)] = 13866,
  [SMALL_STATE(602)] = 13873,
  [SMALL_STATE(603)] = 13880,
  [SMALL_STATE(604)] = 13887,
  [SMALL_STATE(605)] = 13894,
  [SMALL_STATE(606)] = 13901,
  [SMALL_STATE(607)] = 13908,
  [SMALL_STATE(608)] = 13915,
  [SMALL_STATE(609)] = 13922,
  [SMALL_STATE(610)] = 13929,
  [SMALL_STATE(611)] = 13936,
  [SMALL_STATE(612)] = 13943,
  [SMALL_STATE(613)] = 13950,
  [SMALL_STATE(614)] = 13957,
  [SMALL_STATE(615)] = 13964,
  [SMALL_STATE(616)] = 13971,
  [SMALL_STATE(617)] = 13978,
  [SMALL_STATE(618)] = 13985,
  [SMALL_STATE(619)] = 13992,
  [SMALL_STATE(620)] = 13999,
  [SMALL_STATE(621)] = 14006,
  [SMALL_STATE(622)] = 14013,
  [SMALL_STATE(623)] = 14020,
  [SMALL_STATE(624)] = 14027,
  [SMALL_STATE(625)] = 14034,
  [SMALL_STATE(626)] = 14041,
  [SMALL_STATE(627)] = 14048,
  [SMALL_STATE(628)] = 14055,
  [SMALL_STATE(629)] = 14062,
  [SMALL_STATE(630)] = 14069,
  [SMALL_STATE(631)] = 14076,
  [SMALL_STATE(632)] = 14083,
  [SMALL_STATE(633)] = 14090,
  [SMALL_STATE(634)] = 14097,
  [SMALL_STATE(635)] = 14104,
  [SMALL_STATE(636)] = 14111,
  [SMALL_STATE(637)] = 14118,
  [SMALL_STATE(638)] = 14125,
  [SMALL_STATE(639)] = 14132,
  [SMALL_STATE(640)] = 14139,
  [SMALL_STATE(641)] = 14146,
  [SMALL_STATE(642)] = 14153,
  [SMALL_STATE(643)] = 14160,
  [SMALL_STATE(644)] = 14167,
  [SMALL_STATE(645)] = 14174,
  [SMALL_STATE(646)] = 14181,
  [SMALL_STATE(647)] = 14188,
  [SMALL_STATE(648)] = 14195,
  [SMALL_STATE(649)] = 14202,
  [SMALL_STATE(650)] = 14209,
  [SMALL_STATE(651)] = 14216,
  [SMALL_STATE(652)] = 14223,
  [SMALL_STATE(653)] = 14230,
  [SMALL_STATE(654)] = 14237,
  [SMALL_STATE(655)] = 14244,
  [SMALL_STATE(656)] = 14251,
  [SMALL_STATE(657)] = 14258,
  [SMALL_STATE(658)] = 14265,
  [SMALL_STATE(659)] = 14272,
  [SMALL_STATE(660)] = 14279,
  [SMALL_STATE(661)] = 14286,
  [SMALL_STATE(662)] = 14293,
  [SMALL_STATE(663)] = 14300,
  [SMALL_STATE(664)] = 14307,
  [SMALL_STATE(665)] = 14314,
  [SMALL_STATE(666)] = 14321,
  [SMALL_STATE(667)] = 14328,
  [SMALL_STATE(668)] = 14335,
  [SMALL_STATE(669)] = 14342,
  [SMALL_STATE(670)] = 14349,
  [SMALL_STATE(671)] = 14356,
  [SMALL_STATE(672)] = 14363,
  [SMALL_STATE(673)] = 14370,
  [SMALL_STATE(674)] = 14377,
  [SMALL_STATE(675)] = 14384,
  [SMALL_STATE(676)] = 14391,
  [SMALL_STATE(677)] = 14398,
  [SMALL_STATE(678)] = 14405,
  [SMALL_STATE(679)] = 14412,
  [SMALL_STATE(680)] = 14419,
  [SMALL_STATE(681)] = 14426,
  [SMALL_STATE(682)] = 14433,
  [SMALL_STATE(683)] = 14440,
  [SMALL_STATE(684)] = 14447,
  [SMALL_STATE(685)] = 14454,
  [SMALL_STATE(686)] = 14461,
  [SMALL_STATE(687)] = 14468,
  [SMALL_STATE(688)] = 14475,
  [SMALL_STATE(689)] = 14482,
  [SMALL_STATE(690)] = 14489,
  [SMALL_STATE(691)] = 14496,
  [SMALL_STATE(692)] = 14503,
  [SMALL_STATE(693)] = 14510,
  [SMALL_STATE(694)] = 14517,
  [SMALL_STATE(695)] = 14524,
  [SMALL_STATE(696)] = 14531,
  [SMALL_STATE(697)] = 14538,
  [SMALL_STATE(698)] = 14545,
  [SMALL_STATE(699)] = 14552,
  [SMALL_STATE(700)] = 14559,
  [SMALL_STATE(701)] = 14566,
  [SMALL_STATE(702)] = 14573,
  [SMALL_STATE(703)] = 14580,
  [SMALL_STATE(704)] = 14587,
  [SMALL_STATE(705)] = 14594,
  [SMALL_STATE(706)] = 14601,
  [SMALL_STATE(707)] = 14608,
  [SMALL_STATE(708)] = 14615,
  [SMALL_STATE(709)] = 14622,
  [SMALL_STATE(710)] = 14629,
  [SMALL_STATE(711)] = 14636,
  [SMALL_STATE(712)] = 14643,
  [SMALL_STATE(713)] = 14650,
  [SMALL_STATE(714)] = 14657,
  [SMALL_STATE(715)] = 14664,
  [SMALL_STATE(716)] = 14671,
  [SMALL_STATE(717)] = 14678,
  [SMALL_STATE(718)] = 14685,
  [SMALL_STATE(719)] = 14692,
  [SMALL_STATE(720)] = 14699,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumName, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumName, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_globalAccumName, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_globalAccumName, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2), SHIFT_REPEAT(8),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_localAccumName, 2),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_localAccumName, 2),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(239),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(712),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(295),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(284),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(264),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(266),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(425),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(710),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(709),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(708),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(707),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(705),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(399),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declStmts_repeat1, 2),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(249),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 3),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real, 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 4),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real, 4),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declStmts, 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declStmts, 1),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expr, 3), REDUCE(sym_setBagExpr, 3),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_expr, 3), REDUCE(sym_setBagExpr, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringLiteral, 3),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringLiteral, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 4),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 4),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringLiteral, 2),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringLiteral, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setBagExpr, 3),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setBagExpr, 3),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expr, 1), REDUCE(sym_setBagExpr, 1),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_expr, 1), REDUCE(sym_setBagExpr, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(28),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(28),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(31),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(31),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typedefs_repeat1, 2), SHIFT_REPEAT(713),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typedefs_repeat1, 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_typedefs_repeat1, 2),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(34),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(34),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(36),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(36),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedefs, 1),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typedefs, 1),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(41),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 3),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 3),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expr, 3), SHIFT(196),
  [331] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_expr, 3), SHIFT(196),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(59),
  [349] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(59),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(102),
  [431] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(102),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(104),
  [441] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(104),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(108),
  [459] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(108),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_queryBodyStmts_repeat1, 2), SHIFT_REPEAT(69),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_queryBodyStmts_repeat1, 2),
  [467] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_queryBodyStmts_repeat1, 2), SHIFT_REPEAT(42),
  [470] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_queryBodyStmts_repeat1, 2), SHIFT_REPEAT(50),
  [473] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_queryBodyStmts_repeat1, 2), SHIFT_REPEAT(97),
  [476] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_queryBodyStmts_repeat1, 2), SHIFT_REPEAT(42),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(111),
  [486] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(111),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(115),
  [504] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(115),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [511] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(117),
  [514] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(117),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBodyStmts, 1),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [571] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym_expr, 1), REDUCE(sym_setBagExpr, 1), REDUCE(sym_tableName, 1),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printExpr, 1),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldName, 1),
  [587] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(152),
  [590] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(152),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignStmt, 3),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gAccumAccumStmt, 3),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vSetProj, 1),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignStmt, 5),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argList, 1),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [635] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(179),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [644] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(183),
  [647] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(183),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argList_repeat1, 2),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mathOperator, 1),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mathOperator, 1),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparisonOperator, 1),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparisonOperator, 1),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnStmt, 2),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [688] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(205),
  [691] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(205),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [698] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_atomicVertexType, 1), REDUCE(sym_name, 1),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [709] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(214),
  [712] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(214),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [727] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(219),
  [730] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(219),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [739] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(228),
  [742] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(228),
  [745] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_atomicEdgeType, 1), REDUCE(sym_name, 1),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsqlSelectBlock, 2),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [754] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_seed, 1), REDUCE(sym_name, 1),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stepVertexTypes_repeat1, 2),
  [759] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stepVertexTypes_repeat1, 2), SHIFT_REPEAT(226),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepVertexTypes, 3),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_queryBodyStmts_repeat1, 2),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepVertexTypes, 2),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setBagExpr, 1),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseType, 1),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertexSetName, 1),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertexSetType, 1),
  [780] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_paramName, 1), REDUCE(sym_vertexType, 1),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 4),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseType, 1, .production_id = 3),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pathPattern, 2),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 9),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 8),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 5),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 7),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsqlSelectBlock, 3),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertexAlias, 1),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomicVertexType, 1),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseType, 1, .production_id = 2),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepVertexTypes, 1),
  [855] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(287),
  [858] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(287),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pathPattern_repeat1, 2),
  [863] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pathPattern_repeat1, 2), SHIFT_REPEAT(626),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [868] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepVertexSet, 1),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 6),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pathPattern, 1),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseType, 1, .production_id = 1),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [890] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseType, 4),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simpleSet, 1),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [906] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(474),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepEdgeTypes, 2),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomicEdgeType, 1),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [915] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_printStmt_repeat1, 2), SHIFT_REPEAT(47),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_printStmt_repeat1, 2),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vExprSet, 4),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 10),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [930] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fromClause_repeat1, 2), SHIFT_REPEAT(148),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fromClause_repeat1, 2),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepVertexSet, 3),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printStmt, 3),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsqlSelectBlock, 5),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepVertexSet, 2),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simpleSet, 3),
  [963] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_simpleSet, 3), SHIFT(260),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fromClause, 3),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsqlSelectBlock, 4),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 11),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printStmt, 2),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [986] = {.entry = {.count = 1, .reusable = false}}, SHIFT(676),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vExprSet, 5),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pathPattern_repeat1, 6),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonKey, 1),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gsqlSelectBlock_repeat1, 2),
  [998] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gsqlSelectBlock_repeat1, 2), SHIFT_REPEAT(659),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 12),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fromClause, 2),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumType, 6),
  [1013] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumType, 6),
  [1015] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_paramName, 1), REDUCE(sym_edgeType, 1),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vSetVarDeclStmt, 6),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumType, 10),
  [1024] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumType, 10),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accumType_repeat1, 2),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumType, 11),
  [1032] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumType, 11),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edgeSetType, 1),
  [1036] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printExpr, 3),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stepEdgeTypes_repeat1, 2),
  [1042] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stepEdgeTypes_repeat1, 2), SHIFT_REPEAT(216),
  [1045] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_condition, 3), SHIFT(73),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dmlSubStmtList, 2),
  [1052] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1054] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1058] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumType, 9),
  [1062] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumType, 9),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vSetVarDeclStmt, 3),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printStmt, 4),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumType, 4, .production_id = 4),
  [1076] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumType, 4, .production_id = 4),
  [1078] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stringLiteral_repeat1, 2),
  [1080] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stringLiteral_repeat1, 2), SHIFT_REPEAT(424),
  [1083] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stringLiteral_repeat1, 2), SHIFT_REPEAT(424),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumType, 1),
  [1088] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumType, 1),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_whereClause, 2),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphName, 1),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumDeclStmt, 2),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepEdgeTypes, 3),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseDeclStmt, 2),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumDeclStmt, 3),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dmlSubStmtList, 1),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printStmt, 5),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_condition, 3), SHIFT(60),
  [1133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterList, 2),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dmlSubStmtList_repeat1, 2), SHIFT_REPEAT(213),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dmlSubStmtList_repeat1, 2),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumType, 4),
  [1146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumType, 4),
  [1148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterList, 4),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseDeclStmt, 5),
  [1154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterType, 4),
  [1156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameterList_repeat1, 2),
  [1158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameterList_repeat1, 2), SHIFT_REPEAT(142),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tupleFields, 3),
  [1165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumDeclStmt, 6),
  [1167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_perClauseV2_repeat1, 2),
  [1169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_perClauseV2_repeat1, 2), SHIFT_REPEAT(250),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dmlSubStmt, 1),
  [1178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_queryBodyIfStmt_repeat1, 2), SHIFT_REPEAT(637),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_queryBodyIfStmt_repeat1, 2),
  [1183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vExprSet_repeat1, 2), SHIFT_REPEAT(58),
  [1186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vExprSet_repeat1, 2),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterType, 1),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumDeclStmt, 5),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tupleType, 1),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argList_repeat1, 2), SHIFT_REPEAT(99),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tupleFields_repeat1, 2), SHIFT_REPEAT(146),
  [1224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tupleFields_repeat1, 2),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameterList_repeat1, 3),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterList, 5),
  [1238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returns, 4),
  [1240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectVertParams, 11),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tupleFields, 2),
  [1246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterList, 3),
  [1248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterType, 3),
  [1250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_condition, 3), SHIFT(62),
  [1253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseDeclStmt_repeat1, 2), SHIFT_REPEAT(438),
  [1256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_baseDeclStmt_repeat1, 2),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseDeclStmt, 4),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_queryBodyIfStmt_repeat1, 5), SHIFT(122),
  [1267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_queryBodyIfStmt_repeat1, 5), SHIFT(598),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseDeclStmt, 3),
  [1274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paramName, 1),
  [1276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_paramName, 1), REDUCE(sym_vertexSetName, 1),
  [1279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertexType, 1),
  [1281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumDeclStmt, 4),
  [1283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seedSet_repeat1, 2),
  [1285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seedSet_repeat1, 2), SHIFT_REPEAT(187),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomicEdgePattern, 1),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argList, 2),
  [1298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accumDeclStmt_repeat1, 2), SHIFT_REPEAT(542),
  [1301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accumDeclStmt_repeat1, 2),
  [1303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_condition, 3), SHIFT(66),
  [1306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 13),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accumType_repeat1, 2), SHIFT_REPEAT(380),
  [1321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filePath, 1),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accumType_repeat1, 3),
  [1331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_perClauseV2, 4),
  [1333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_queryBodyIfStmt_repeat1, 5),
  [1335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed, 1),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementType, 2),
  [1341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 14),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_baseDeclStmt_repeat1, 4),
  [1347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 15),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepEdgeSet, 1),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameterList_repeat1, 5),
  [1361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 16),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepEdgeTypes, 1),
  [1367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 17),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementType, 1),
  [1379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tupleFields_repeat1, 3),
  [1381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createQuery, 4),
  [1383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectVertParams, 16),
  [1385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accumDeclStmt_repeat1, 4),
  [1387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 1),
  [1389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vSetProj, 3),
  [1391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_vertexAlias, 1), REDUCE(sym_edgeAlias, 1),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_perClauseV2, 5),
  [1398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumClause, 3),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postAccumClause, 3),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed, 2),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomicEdgePattern, 2),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seedSet, 3),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 6),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simpleSize, 1),
  [1442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_paramName, 1), REDUCE(sym_varName, 1),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printStmt, 7),
  [1449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBodyIfStmt, 6),
  [1451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printStmt, 6),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fileDeclStmt, 5),
  [1459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 19),
  [1461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBodyIfStmt, 5),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [1469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 18),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntaxName, 1),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pathEdgePattern, 1),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsqlSelectClause, 4),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seedSet, 2),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1511] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_fileVar, 1), REDUCE(sym_paramName, 1),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seedSet, 4),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_columnId, 2),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBody, 3),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepEdgeSet, 3),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [1576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pathEdgePattern, 3),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBodyIfStmt, 7),
  [1582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBodyIfStmt, 8),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBody, 2),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fileVar, 1),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attrName, 1),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edgeAlias, 1),
  [1622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepEdgeSet, 2),
  [1624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectStmt, 1),
  [1626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBodyStmt, 1),
  [1628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declStmt, 1),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBody, 1),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryName, 1),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1672] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
