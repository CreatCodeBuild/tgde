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
#define STATE_COUNT 787
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 240
#define ALIAS_COUNT 5
#define TOKEN_COUNT 121
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 19
#define PRODUCTION_ID_COUNT 6

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
  aux_sym_CREATE_VERTEX_token1 = 44,
  aux_sym_CREATE_VERTEX_token2 = 45,
  aux_sym_CREATE_VERTEX_token3 = 46,
  aux_sym_CREATE_VERTEX_token4 = 47,
  anon_sym_DQUOTEnone_DQUOTE = 48,
  anon_sym_DQUOTEoutdegree_by_edgetype_DQUOTE = 49,
  anon_sym_primary_id_as_attribute = 50,
  anon_sym_DQUOTEtrue_DQUOTE = 51,
  aux_sym_primary_id_name_type_token1 = 52,
  aux_sym_accumDeclStmt_token1 = 53,
  anon_sym_AT = 54,
  anon_sym_AT_AT = 55,
  aux_sym_accumType_token1 = 56,
  aux_sym_accumType_token2 = 57,
  aux_sym_accumType_token3 = 58,
  aux_sym_accumType_token4 = 59,
  aux_sym_accumType_token5 = 60,
  aux_sym_accumType_token6 = 61,
  aux_sym_accumType_token7 = 62,
  aux_sym_accumType_token8 = 63,
  aux_sym_accumType_token9 = 64,
  aux_sym_accumType_token10 = 65,
  aux_sym_accumType_token11 = 66,
  aux_sym_accumType_token12 = 67,
  aux_sym_accumType_token13 = 68,
  aux_sym_accumType_token14 = 69,
  aux_sym_accumType_token15 = 70,
  aux_sym_accumType_token16 = 71,
  aux_sym_elementType_token1 = 72,
  anon_sym_PLUS_EQ = 73,
  anon_sym_DOT = 74,
  aux_sym_queryBodyIfStmt_token1 = 75,
  aux_sym_queryBodyIfStmt_token2 = 76,
  aux_sym_queryBodyIfStmt_token3 = 77,
  aux_sym_queryBodyIfStmt_token4 = 78,
  aux_sym_fileDeclStmt_token1 = 79,
  aux_sym_simpleSet_token1 = 80,
  aux_sym_simpleSet_token2 = 81,
  aux_sym_simpleSet_token3 = 82,
  anon_sym__ = 83,
  aux_sym_seed_token1 = 84,
  anon_sym_DOT_STAR = 85,
  aux_sym_seed_token2 = 86,
  aux_sym_selectVertParams_token1 = 87,
  anon_sym_DOLLAR = 88,
  anon_sym_SQUOTE = 89,
  aux_sym_printStmt_token1 = 90,
  aux_sym_printStmt_token2 = 91,
  aux_sym_printStmt_token3 = 92,
  aux_sym_printExpr_token1 = 93,
  anon_sym_LBRACK = 94,
  anon_sym_RBRACK = 95,
  aux_sym_logStmt_token1 = 96,
  aux_sym_returnStmt_token1 = 97,
  aux_sym_gsqlSelectClause_token1 = 98,
  aux_sym_fromClause_token1 = 99,
  anon_sym_DASH_GT = 100,
  anon_sym_COLON = 101,
  anon_sym_WHERE = 102,
  aux_sym_accumClause_token1 = 103,
  aux_sym_postAccumClause_token1 = 104,
  aux_sym_perClauseV2_token1 = 105,
  anon_sym_DQUOTE = 106,
  aux_sym_stringLiteral_token1 = 107,
  sym_escape_sequence = 108,
  aux_sym_integer_token1 = 109,
  aux_sym_name_token1 = 110,
  aux_sym_name_token2 = 111,
  aux_sym_baseType_token1 = 112,
  aux_sym_baseType_token2 = 113,
  aux_sym_baseType_token3 = 114,
  aux_sym_baseType_token4 = 115,
  aux_sym_baseType_token5 = 116,
  aux_sym_baseType_token6 = 117,
  anon_sym_SET = 118,
  anon_sym_BAG = 119,
  anon_sym_FILE = 120,
  sym_source_file = 121,
  sym_createQuery = 122,
  sym_createSignature = 123,
  sym_returns = 124,
  sym_parameterList = 125,
  sym_syntaxName = 126,
  sym_queryBody = 127,
  sym_typedefs = 128,
  sym_typedef = 129,
  sym_tupleFields = 130,
  sym_declStmts = 131,
  sym_declStmt = 132,
  sym_queryBodyStmts = 133,
  sym_queryBodyStmt = 134,
  sym_constant = 135,
  sym_mathOperator = 136,
  sym_condition = 137,
  sym_comparisonOperator = 138,
  sym_pathPattern = 139,
  sym_pathEdgePattern = 140,
  sym_atomicEdgePattern = 141,
  sym_CREATE_VERTEX = 142,
  sym_primary_id_name_type = 143,
  sym_accumDeclStmt = 144,
  sym_localAccumName = 145,
  sym_globalAccumName = 146,
  sym_accumType = 147,
  sym_elementType = 148,
  sym_gAccumAccumStmt = 149,
  sym_assignStmt = 150,
  sym_argList = 151,
  sym_queryBodyIfStmt = 152,
  sym_simpleSize = 153,
  sym_baseDeclStmt = 154,
  sym_fileDeclStmt = 155,
  sym_fileVar = 156,
  sym_vSetVarDeclStmt = 157,
  sym_simpleSet = 158,
  sym_seedSet = 159,
  sym_seed = 160,
  sym_selectVertParams = 161,
  sym_columnId = 162,
  sym_expr = 163,
  sym_setBagExpr = 164,
  sym_printStmt = 165,
  sym_printExpr = 166,
  sym_vExprSet = 167,
  sym_vSetProj = 168,
  sym_jsonKey = 169,
  sym_logStmt = 170,
  sym_returnStmt = 171,
  sym_selectStmt = 172,
  sym_gsqlSelectBlock = 173,
  sym_gsqlSelectClause = 174,
  sym_tableName = 175,
  sym_fromClause = 176,
  sym_stepEdgeSet = 177,
  sym_stepVertexSet = 178,
  sym_alias = 179,
  sym_vertexAlias = 180,
  sym_edgeAlias = 181,
  sym_stepEdgeTypes = 182,
  sym_atomicEdgeType = 183,
  sym_edgeSetType = 184,
  sym_stepVertexTypes = 185,
  sym_atomicVertexType = 186,
  sym_vertexSetType = 187,
  sym_whereClause = 188,
  sym_accumClause = 189,
  sym_postAccumClause = 190,
  sym_perClauseV2 = 191,
  sym_dmlSubStmtList = 192,
  sym_dmlSubStmt = 193,
  sym_stringLiteral = 194,
  sym_integer = 195,
  sym_real = 196,
  sym_numeric = 197,
  sym_name = 198,
  sym_graphName = 199,
  sym_queryName = 200,
  sym_paramName = 201,
  sym_vertexType = 202,
  sym_edgeType = 203,
  sym_accumName = 204,
  sym_vertexSetName = 205,
  sym_attrName = 206,
  sym_varName = 207,
  sym_tupleType = 208,
  sym_fieldName = 209,
  sym_filePath = 210,
  sym_type = 211,
  sym_baseType = 212,
  sym_parameterType = 213,
  aux_sym_source_file_repeat1 = 214,
  aux_sym_parameterList_repeat1 = 215,
  aux_sym_typedefs_repeat1 = 216,
  aux_sym_tupleFields_repeat1 = 217,
  aux_sym_declStmts_repeat1 = 218,
  aux_sym_queryBodyStmts_repeat1 = 219,
  aux_sym_pathPattern_repeat1 = 220,
  aux_sym_CREATE_VERTEX_repeat1 = 221,
  aux_sym_accumDeclStmt_repeat1 = 222,
  aux_sym_accumDeclStmt_repeat2 = 223,
  aux_sym_accumType_repeat1 = 224,
  aux_sym_argList_repeat1 = 225,
  aux_sym_queryBodyIfStmt_repeat1 = 226,
  aux_sym_baseDeclStmt_repeat1 = 227,
  aux_sym_seedSet_repeat1 = 228,
  aux_sym_printStmt_repeat1 = 229,
  aux_sym_vExprSet_repeat1 = 230,
  aux_sym_gsqlSelectBlock_repeat1 = 231,
  aux_sym_fromClause_repeat1 = 232,
  aux_sym_stepEdgeTypes_repeat1 = 233,
  aux_sym_stepVertexTypes_repeat1 = 234,
  aux_sym_perClauseV2_repeat1 = 235,
  aux_sym_dmlSubStmtList_repeat1 = 236,
  aux_sym_stringLiteral_repeat1 = 237,
  aux_sym_integer_repeat1 = 238,
  aux_sym_name_repeat1 = 239,
  anon_alias_sym_CREATE = 240,
  anon_alias_sym_DOUBLE = 241,
  anon_alias_sym_FLOAT = 242,
  anon_alias_sym_INT = 243,
  anon_alias_sym_string = 244,
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
  [aux_sym_CREATE_VERTEX_token1] = "VERTEX",
  [aux_sym_CREATE_VERTEX_token2] = "DEFAULT",
  [aux_sym_CREATE_VERTEX_token3] = "WITH",
  [aux_sym_CREATE_VERTEX_token4] = "STATS",
  [anon_sym_DQUOTEnone_DQUOTE] = "\"none\"",
  [anon_sym_DQUOTEoutdegree_by_edgetype_DQUOTE] = "\"outdegree_by_edgetype\"",
  [anon_sym_primary_id_as_attribute] = "primary_id_as_attribute",
  [anon_sym_DQUOTEtrue_DQUOTE] = "\"true\"",
  [aux_sym_primary_id_name_type_token1] = "PRIMARY_ID",
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
  [aux_sym_accumType_token8] = "AvgAccum",
  [aux_sym_accumType_token9] = "MapAccum",
  [aux_sym_accumType_token10] = "MinAccum",
  [aux_sym_accumType_token11] = "MaxAccum",
  [aux_sym_accumType_token12] = "HeapAccum",
  [aux_sym_accumType_token13] = "ASC",
  [aux_sym_accumType_token14] = "DESC",
  [aux_sym_accumType_token15] = "ListAccum",
  [aux_sym_accumType_token16] = "SetAccum",
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
  [aux_sym_logStmt_token1] = "LOG",
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
  [aux_sym_baseType_token1] = "UINT",
  [aux_sym_baseType_token2] = "BOOL",
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
  [sym_CREATE_VERTEX] = "CREATE_VERTEX",
  [sym_primary_id_name_type] = "primary_id_name_type",
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
  [sym_logStmt] = "logStmt",
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
  [aux_sym_CREATE_VERTEX_repeat1] = "CREATE_VERTEX_repeat1",
  [aux_sym_accumDeclStmt_repeat1] = "accumDeclStmt_repeat1",
  [aux_sym_accumDeclStmt_repeat2] = "accumDeclStmt_repeat2",
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
  [anon_alias_sym_CREATE] = "CREATE",
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
  [aux_sym_CREATE_VERTEX_token1] = aux_sym_CREATE_VERTEX_token1,
  [aux_sym_CREATE_VERTEX_token2] = aux_sym_CREATE_VERTEX_token2,
  [aux_sym_CREATE_VERTEX_token3] = aux_sym_CREATE_VERTEX_token3,
  [aux_sym_CREATE_VERTEX_token4] = aux_sym_CREATE_VERTEX_token4,
  [anon_sym_DQUOTEnone_DQUOTE] = anon_sym_DQUOTEnone_DQUOTE,
  [anon_sym_DQUOTEoutdegree_by_edgetype_DQUOTE] = anon_sym_DQUOTEoutdegree_by_edgetype_DQUOTE,
  [anon_sym_primary_id_as_attribute] = anon_sym_primary_id_as_attribute,
  [anon_sym_DQUOTEtrue_DQUOTE] = anon_sym_DQUOTEtrue_DQUOTE,
  [aux_sym_primary_id_name_type_token1] = aux_sym_primary_id_name_type_token1,
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
  [aux_sym_accumType_token15] = aux_sym_accumType_token15,
  [aux_sym_accumType_token16] = aux_sym_accumType_token16,
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
  [aux_sym_logStmt_token1] = aux_sym_logStmt_token1,
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
  [sym_CREATE_VERTEX] = sym_CREATE_VERTEX,
  [sym_primary_id_name_type] = sym_primary_id_name_type,
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
  [sym_logStmt] = sym_logStmt,
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
  [aux_sym_CREATE_VERTEX_repeat1] = aux_sym_CREATE_VERTEX_repeat1,
  [aux_sym_accumDeclStmt_repeat1] = aux_sym_accumDeclStmt_repeat1,
  [aux_sym_accumDeclStmt_repeat2] = aux_sym_accumDeclStmt_repeat2,
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
  [anon_alias_sym_CREATE] = anon_alias_sym_CREATE,
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
  [aux_sym_CREATE_VERTEX_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_CREATE_VERTEX_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_CREATE_VERTEX_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_CREATE_VERTEX_token4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEnone_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEoutdegree_by_edgetype_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_primary_id_as_attribute] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEtrue_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_primary_id_name_type_token1] = {
    .visible = true,
    .named = false,
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
  [aux_sym_accumType_token15] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_accumType_token16] = {
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
  [aux_sym_logStmt_token1] = {
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
  [sym_CREATE_VERTEX] = {
    .visible = true,
    .named = true,
  },
  [sym_primary_id_name_type] = {
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
  [sym_logStmt] = {
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
  [aux_sym_CREATE_VERTEX_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_accumDeclStmt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_accumDeclStmt_repeat2] = {
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
  [anon_alias_sym_CREATE] = {
    .visible = true,
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
    [0] = anon_alias_sym_CREATE,
  },
  [5] = {
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
      if (eof) ADVANCE(465);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\r') SKIP(462)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '"') ADVANCE(578);
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '$') ADVANCE(560);
      if (lookahead == '%') ADVANCE(494);
      if (lookahead == '&') ADVANCE(501);
      if (lookahead == '\'') ADVANCE(561);
      if (lookahead == '(') ADVANCE(473);
      if (lookahead == ')') ADVANCE(474);
      if (lookahead == '*') ADVANCE(492);
      if (lookahead == '+') ADVANCE(496);
      if (lookahead == ',') ADVANCE(482);
      if (lookahead == '-') ADVANCE(498);
      if (lookahead == '.') ADVANCE(546);
      if (lookahead == '/') ADVANCE(493);
      if (lookahead == ':') ADVANCE(573);
      if (lookahead == ';') ADVANCE(483);
      if (lookahead == '<') ADVANCE(487);
      if (lookahead == '=') ADVANCE(481);
      if (lookahead == '>') ADVANCE(489);
      if (lookahead == '@') ADVANCE(525);
      if (lookahead == 'A') ADVANCE(648);
      if (lookahead == 'B') ADVANCE(693);
      if (lookahead == 'D') ADVANCE(654);
      if (lookahead == 'E') ADVANCE(661);
      if (lookahead == 'F') ADVANCE(657);
      if (lookahead == 'H') ADVANCE(662);
      if (lookahead == 'I') ADVANCE(674);
      if (lookahead == 'J') ADVANCE(702);
      if (lookahead == 'L') ADVANCE(680);
      if (lookahead == 'M') ADVANCE(658);
      if (lookahead == 'N') ADVANCE(695);
      if (lookahead == 'O') ADVANCE(651);
      if (lookahead == 'P') ADVANCE(664);
      if (lookahead == 'R') ADVANCE(667);
      if (lookahead == 'S') ADVANCE(653);
      if (lookahead == 'T') ADVANCE(677);
      if (lookahead == 'U') ADVANCE(683);
      if (lookahead == 'V') ADVANCE(665);
      if (lookahead == 'W') ADVANCE(646);
      if (lookahead == '[') ADVANCE(566);
      if (lookahead == '\\') ADVANCE(88);
      if (lookahead == ']') ADVANCE(567);
      if (lookahead == '_') ADVANCE(555);
      if (lookahead == 'a') ADVANCE(624);
      if (lookahead == 'b') ADVANCE(630);
      if (lookahead == 'd') ADVANCE(589);
      if (lookahead == 'e') ADVANCE(596);
      if (lookahead == 'f') ADVANCE(592);
      if (lookahead == 'h') ADVANCE(597);
      if (lookahead == 'i') ADVANCE(610);
      if (lookahead == 'j') ADVANCE(639);
      if (lookahead == 'l') ADVANCE(616);
      if (lookahead == 'm') ADVANCE(593);
      if (lookahead == 'n') ADVANCE(632);
      if (lookahead == 'p') ADVANCE(599);
      if (lookahead == 'r') ADVANCE(603);
      if (lookahead == 's') ADVANCE(600);
      if (lookahead == 't') ADVANCE(613);
      if (lookahead == 'u') ADVANCE(619);
      if (lookahead == 'v') ADVANCE(601);
      if (lookahead == 'w') ADVANCE(614);
      if (lookahead == '{') ADVANCE(466);
      if (lookahead == '|') ADVANCE(502);
      if (lookahead == '}') ADVANCE(467);
      if (('C' <= lookahead && lookahead <= 'Z')) ADVANCE(644);
      if (('c' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(587);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(418)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(419)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(420)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(421)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(422)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(423)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(424)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(425)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(426)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(427)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(428)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(429)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(430)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(431)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(432)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(433)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(434)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(435)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(436)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(437)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(438)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(439)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(440)
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(441)
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(442)
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(443)
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(444)
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(445)
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(446)
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(447)
      END_STATE();
    case 31:
      if (lookahead == '\n') SKIP(448)
      END_STATE();
    case 32:
      if (lookahead == '\n') SKIP(449)
      END_STATE();
    case 33:
      if (lookahead == '\n') SKIP(450)
      END_STATE();
    case 34:
      if (lookahead == '\n') SKIP(451)
      END_STATE();
    case 35:
      if (lookahead == '\n') SKIP(452)
      END_STATE();
    case 36:
      if (lookahead == '\n') SKIP(453)
      END_STATE();
    case 37:
      if (lookahead == '"') ADVANCE(519);
      END_STATE();
    case 38:
      if (lookahead == '"') ADVANCE(522);
      END_STATE();
    case 39:
      if (lookahead == '"') ADVANCE(520);
      END_STATE();
    case 40:
      if (lookahead == '*') ADVANCE(42);
      if (lookahead == '/') ADVANCE(514);
      END_STATE();
    case 41:
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '/') ADVANCE(513);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == '*') ADVANCE(41);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == '*') ADVANCE(557);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(167);
      END_STATE();
    case 45:
      if (lookahead == '<') ADVANCE(499);
      END_STATE();
    case 46:
      if (lookahead == '=') ADVANCE(512);
      END_STATE();
    case 47:
      if (lookahead == '=') ADVANCE(545);
      END_STATE();
    case 48:
      if (lookahead == '=') ADVANCE(511);
      END_STATE();
    case 49:
      if (lookahead == '>') ADVANCE(500);
      END_STATE();
    case 50:
      if (lookahead == '@') ADVANCE(526);
      END_STATE();
    case 51:
      if (lookahead == 'A') ADVANCE(91);
      END_STATE();
    case 52:
      if (lookahead == 'A') ADVANCE(75);
      END_STATE();
    case 53:
      if (lookahead == 'A') ADVANCE(64);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(318);
      END_STATE();
    case 54:
      if (lookahead == 'D') ADVANCE(507);
      END_STATE();
    case 55:
      if (lookahead == 'D') ADVANCE(507);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(556);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(80);
      if (lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(574);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(574);
      if (lookahead == 'e') ADVANCE(563);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(87);
      if (lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(715);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(85);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(343);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(78);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(82);
      END_STATE();
    case 64:
      if (lookahead == 'G') ADVANCE(714);
      END_STATE();
    case 65:
      if (lookahead == 'H') ADVANCE(476);
      END_STATE();
    case 66:
      if (lookahead == 'H') ADVANCE(63);
      END_STATE();
    case 67:
      if (lookahead == 'I') ADVANCE(477);
      END_STATE();
    case 68:
      if (lookahead == 'I') ADVANCE(69);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(320);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(317);
      END_STATE();
    case 69:
      if (lookahead == 'L') ADVANCE(60);
      END_STATE();
    case 70:
      if (lookahead == 'N') ADVANCE(84);
      END_STATE();
    case 71:
      if (lookahead == 'N') ADVANCE(54);
      if (lookahead == 'P') ADVANCE(67);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(193);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(565);
      END_STATE();
    case 72:
      if (lookahead == 'N') ADVANCE(54);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(565);
      END_STATE();
    case 73:
      if (lookahead == 'N') ADVANCE(83);
      END_STATE();
    case 74:
      if (lookahead == 'O') ADVANCE(77);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(279);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(281);
      END_STATE();
    case 75:
      if (lookahead == 'P') ADVANCE(65);
      END_STATE();
    case 76:
      if (lookahead == 'R') ADVANCE(508);
      END_STATE();
    case 77:
      if (lookahead == 'R') ADVANCE(475);
      END_STATE();
    case 78:
      if (lookahead == 'R') ADVANCE(93);
      END_STATE();
    case 79:
      if (lookahead == 'R') ADVANCE(73);
      END_STATE();
    case 80:
      if (lookahead == 'R') ADVANCE(58);
      if (lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 81:
      if (lookahead == 'R') ADVANCE(52);
      END_STATE();
    case 82:
      if (lookahead == 'R') ADVANCE(57);
      END_STATE();
    case 83:
      if (lookahead == 'S') ADVANCE(479);
      END_STATE();
    case 84:
      if (lookahead == 'T') ADVANCE(51);
      END_STATE();
    case 85:
      if (lookahead == 'T') ADVANCE(713);
      END_STATE();
    case 86:
      if (lookahead == 'T') ADVANCE(90);
      END_STATE();
    case 87:
      if (lookahead == 'T') ADVANCE(90);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(280);
      END_STATE();
    case 88:
      if (lookahead == 'U') ADVANCE(461);
      if (lookahead == 'u') ADVANCE(457);
      if (lookahead == 'x') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(586);
      if (lookahead != 0) ADVANCE(584);
      END_STATE();
    case 89:
      if (lookahead == 'U') ADVANCE(62);
      END_STATE();
    case 90:
      if (lookahead == 'U') ADVANCE(79);
      END_STATE();
    case 91:
      if (lookahead == 'X') ADVANCE(478);
      END_STATE();
    case 92:
      if (lookahead == 'Y') ADVANCE(70);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(157);
      END_STATE();
    case 93:
      if (lookahead == 'Y') ADVANCE(472);
      END_STATE();
    case 94:
      if (lookahead == '_') ADVANCE(175);
      END_STATE();
    case 95:
      if (lookahead == '_') ADVANCE(121);
      END_STATE();
    case 96:
      if (lookahead == '_') ADVANCE(102);
      END_STATE();
    case 97:
      if (lookahead == '_') ADVANCE(105);
      END_STATE();
    case 98:
      if (lookahead == '_') ADVANCE(103);
      END_STATE();
    case 99:
      if (lookahead == '_') ADVANCE(113);
      END_STATE();
    case 100:
      if (lookahead == '_') ADVANCE(259);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 104:
      if (lookahead == 'b') ADVANCE(139);
      END_STATE();
    case 105:
      if (lookahead == 'b') ADVANCE(144);
      END_STATE();
    case 106:
      if (lookahead == 'd') ADVANCE(119);
      END_STATE();
    case 107:
      if (lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 108:
      if (lookahead == 'd') ADVANCE(111);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(521);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 118:
      if (lookahead == 'g') ADVANCE(132);
      END_STATE();
    case 119:
      if (lookahead == 'g') ADVANCE(116);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 123:
      if (lookahead == 'm') ADVANCE(101);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(126);
      if (lookahead == 'o') ADVANCE(141);
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 126:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 127:
      if (lookahead == 'p') ADVANCE(114);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(120);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(331);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(361);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 139:
      if (lookahead == 'u') ADVANCE(134);
      END_STATE();
    case 140:
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 141:
      if (lookahead == 'u') ADVANCE(137);
      END_STATE();
    case 142:
      if (lookahead == 'y') ADVANCE(127);
      END_STATE();
    case 143:
      if (lookahead == 'y') ADVANCE(95);
      END_STATE();
    case 144:
      if (lookahead == 'y') ADVANCE(99);
      END_STATE();
    case 145:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(582);
      if (lookahead == '\n') SKIP(452)
      if (lookahead == '\r') ADVANCE(583);
      if (lookahead == '"') ADVANCE(578);
      if (lookahead == '#') ADVANCE(583);
      if (lookahead == '/') ADVANCE(579);
      if (lookahead == '\\') ADVANCE(88);
      if (lookahead != 0) ADVANCE(583);
      END_STATE();
    case 146:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(245);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(362);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(394);
      END_STATE();
    case 147:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(279);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(281);
      END_STATE();
    case 148:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(416);
      END_STATE();
    case 149:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(330);
      END_STATE();
    case 150:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(177);
      END_STATE();
    case 151:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(396);
      END_STATE();
    case 152:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(378);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(261);
      END_STATE();
    case 153:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(336);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 154:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(367);
      END_STATE();
    case 155:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(334);
      END_STATE();
    case 156:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(201);
      END_STATE();
    case 157:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(381);
      END_STATE();
    case 158:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 159:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(181);
      END_STATE();
    case 160:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(385);
      END_STATE();
    case 161:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(183);
      END_STATE();
    case 162:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(183);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(350);
      END_STATE();
    case 163:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 164:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 165:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 166:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 167:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 168:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 169:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(267);
      END_STATE();
    case 170:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(410);
      END_STATE();
    case 171:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(277);
      END_STATE();
    case 172:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(541);
      END_STATE();
    case 173:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(524);
      END_STATE();
    case 174:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(540);
      END_STATE();
    case 175:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(351);
      END_STATE();
    case 176:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(398);
      END_STATE();
    case 177:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(176);
      END_STATE();
    case 178:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(399);
      END_STATE();
    case 179:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(178);
      END_STATE();
    case 180:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(400);
      END_STATE();
    case 181:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(180);
      END_STATE();
    case 182:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(401);
      END_STATE();
    case 183:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(182);
      END_STATE();
    case 184:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(402);
      END_STATE();
    case 185:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(184);
      END_STATE();
    case 186:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(369);
      END_STATE();
    case 187:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(404);
      END_STATE();
    case 188:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(405);
      END_STATE();
    case 189:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(187);
      END_STATE();
    case 190:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(371);
      END_STATE();
    case 191:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(406);
      END_STATE();
    case 192:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(188);
      END_STATE();
    case 193:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(407);
      END_STATE();
    case 194:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(191);
      END_STATE();
    case 195:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(193);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(565);
      END_STATE();
    case 196:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(408);
      END_STATE();
    case 197:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(409);
      END_STATE();
    case 198:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(196);
      END_STATE();
    case 199:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(197);
      END_STATE();
    case 200:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(376);
      END_STATE();
    case 201:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(224);
      END_STATE();
    case 202:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(375);
      END_STATE();
    case 203:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(323);
      END_STATE();
    case 204:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(550);
      END_STATE();
    case 205:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(471);
      END_STATE();
    case 206:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(523);
      END_STATE();
    case 207:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(250);
      END_STATE();
    case 208:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(220);
      END_STATE();
    case 209:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 210:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(331);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(361);
      END_STATE();
    case 211:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(331);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(264);
      END_STATE();
    case 212:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(709);
      END_STATE();
    case 213:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(549);
      END_STATE();
    case 214:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(551);
      END_STATE();
    case 215:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(490);
      END_STATE();
    case 216:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(491);
      END_STATE();
    case 217:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(413);
      END_STATE();
    case 218:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(563);
      END_STATE();
    case 219:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(530);
      END_STATE();
    case 220:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 221:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(712);
      END_STATE();
    case 222:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(485);
      END_STATE();
    case 223:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(468);
      END_STATE();
    case 224:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(470);
      END_STATE();
    case 225:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 226:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 227:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(414);
      END_STATE();
    case 228:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 229:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 230:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 231:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 232:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 233:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 234:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 235:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(332);
      END_STATE();
    case 236:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(358);
      END_STATE();
    case 237:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 238:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 239:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(360);
      END_STATE();
    case 240:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 241:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 242:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(347);
      END_STATE();
    case 243:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(484);
      END_STATE();
    case 244:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(151);
      END_STATE();
    case 245:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(151);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(172);
      END_STATE();
    case 246:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(568);
      END_STATE();
    case 247:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(531);
      END_STATE();
    case 248:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(532);
      END_STATE();
    case 249:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(150);
      END_STATE();
    case 250:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(212);
      END_STATE();
    case 251:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(231);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 252:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(231);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(94);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(403);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(326);
      END_STATE();
    case 253:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(517);
      END_STATE();
    case 254:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(229);
      END_STATE();
    case 255:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(229);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(372);
      END_STATE();
    case 256:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(308);
      END_STATE();
    case 257:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(297);
      END_STATE();
    case 258:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 259:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 260:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(321);
      END_STATE();
    case 261:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(306);
      END_STATE();
    case 262:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(307);
      END_STATE();
    case 263:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 264:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(296);
      END_STATE();
    case 265:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(309);
      END_STATE();
    case 266:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(362);
      END_STATE();
    case 267:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(238);
      END_STATE();
    case 268:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(708);
      END_STATE();
    case 269:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(506);
      END_STATE();
    case 270:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(320);
      END_STATE();
    case 271:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(320);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(317);
      END_STATE();
    case 272:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(214);
      END_STATE();
    case 273:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(232);
      END_STATE();
    case 274:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(232);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(163);
      END_STATE();
    case 275:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(269);
      END_STATE();
    case 276:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(370);
      END_STATE();
    case 277:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(219);
      END_STATE();
    case 278:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(222);
      END_STATE();
    case 279:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(359);
      END_STATE();
    case 280:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(156);
      END_STATE();
    case 281:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(388);
      END_STATE();
    case 282:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(240);
      END_STATE();
    case 283:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(571);
      END_STATE();
    case 284:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(535);
      END_STATE();
    case 285:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(536);
      END_STATE();
    case 286:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(538);
      END_STATE();
    case 287:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(537);
      END_STATE();
    case 288:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(543);
      END_STATE();
    case 289:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(527);
      END_STATE();
    case 290:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(539);
      END_STATE();
    case 291:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(542);
      END_STATE();
    case 292:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(575);
      END_STATE();
    case 293:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(576);
      END_STATE();
    case 294:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(534);
      END_STATE();
    case 295:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(327);
      END_STATE();
    case 296:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(155);
      END_STATE();
    case 297:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(221);
      END_STATE();
    case 298:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(328);
      END_STATE();
    case 299:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(164);
      END_STATE();
    case 300:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(504);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(505);
      END_STATE();
    case 301:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 302:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 303:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(548);
      END_STATE();
    case 304:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(552);
      END_STATE();
    case 305:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(569);
      END_STATE();
    case 306:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(247);
      END_STATE();
    case 307:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(248);
      END_STATE();
    case 308:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(366);
      END_STATE();
    case 309:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(368);
      END_STATE();
    case 310:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(395);
      END_STATE();
    case 311:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(374);
      END_STATE();
    case 312:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(161);
      END_STATE();
    case 313:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(318);
      END_STATE();
    case 314:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(394);
      END_STATE();
    case 315:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(365);
      END_STATE();
    case 316:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(365);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(275);
      END_STATE();
    case 317:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(283);
      END_STATE();
    case 318:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(268);
      END_STATE();
    case 319:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(302);
      END_STATE();
    case 320:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 321:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(304);
      END_STATE();
    case 322:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(295);
      END_STATE();
    case 323:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(298);
      END_STATE();
    case 324:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(280);
      END_STATE();
    case 325:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(225);
      END_STATE();
    case 326:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(278);
      END_STATE();
    case 327:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(341);
      END_STATE();
    case 328:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(344);
      END_STATE();
    case 329:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(158);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(159);
      END_STATE();
    case 330:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(165);
      END_STATE();
    case 331:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(577);
      END_STATE();
    case 332:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(559);
      END_STATE();
    case 333:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(469);
      END_STATE();
    case 334:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(417);
      END_STATE();
    case 335:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 336:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(335);
      END_STATE();
    case 337:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(258);
      END_STATE();
    case 338:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(305);
      END_STATE();
    case 339:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 340:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(233);
      END_STATE();
    case 341:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 342:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(384);
      END_STATE();
    case 343:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(261);
      END_STATE();
    case 344:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 345:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(364);
      END_STATE();
    case 346:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(262);
      END_STATE();
    case 347:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(387);
      END_STATE();
    case 348:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(565);
      END_STATE();
    case 349:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(172);
      END_STATE();
    case 350:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(554);
      END_STATE();
    case 351:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(411);
      END_STATE();
    case 352:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(518);
      END_STATE();
    case 353:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(544);
      END_STATE();
    case 354:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(533);
      END_STATE();
    case 355:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(319);
      END_STATE();
    case 356:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(393);
      END_STATE();
    case 357:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(213);
      END_STATE();
    case 358:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(353);
      END_STATE();
    case 359:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(216);
      END_STATE();
    case 360:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(354);
      END_STATE();
    case 361:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(373);
      END_STATE();
    case 362:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(382);
      END_STATE();
    case 363:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(174);
      END_STATE();
    case 364:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(241);
      END_STATE();
    case 365:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(503);
      END_STATE();
    case 366:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(707);
      END_STATE();
    case 367:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(529);
      END_STATE();
    case 368:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(562);
      END_STATE();
    case 369:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(570);
      END_STATE();
    case 370:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(516);
      END_STATE();
    case 371:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(710);
      END_STATE();
    case 372:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(253);
      END_STATE();
    case 373:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(44);
      END_STATE();
    case 374:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(528);
      END_STATE();
    case 375:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(553);
      END_STATE();
    case 376:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(412);
      END_STATE();
    case 377:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(397);
      END_STATE();
    case 378:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(263);
      END_STATE();
    case 379:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(234);
      END_STATE();
    case 380:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(257);
      END_STATE();
    case 381:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(352);
      END_STATE();
    case 382:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(337);
      END_STATE();
    case 383:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(343);
      END_STATE();
    case 384:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(217);
      END_STATE();
    case 385:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(223);
      END_STATE();
    case 386:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(228);
      END_STATE();
    case 387:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(227);
      END_STATE();
    case 388:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(235);
      END_STATE();
    case 389:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(157);
      END_STATE();
    case 390:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(237);
      END_STATE();
    case 391:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(346);
      END_STATE();
    case 392:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(163);
      END_STATE();
    case 393:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(166);
      END_STATE();
    case 394:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(171);
      END_STATE();
    case 395:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(350);
      END_STATE();
    case 396:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(276);
      END_STATE();
    case 397:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(338);
      END_STATE();
    case 398:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(284);
      END_STATE();
    case 399:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(285);
      END_STATE();
    case 400:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(286);
      END_STATE();
    case 401:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(287);
      END_STATE();
    case 402:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(288);
      END_STATE();
    case 403:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(215);
      END_STATE();
    case 404:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(289);
      END_STATE();
    case 405:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(290);
      END_STATE();
    case 406:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(291);
      END_STATE();
    case 407:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(292);
      END_STATE();
    case 408:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(293);
      END_STATE();
    case 409:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(294);
      END_STATE();
    case 410:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(386);
      END_STATE();
    case 411:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(564);
      END_STATE();
    case 412:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(242);
      END_STATE();
    case 413:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(515);
      END_STATE();
    case 414:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(558);
      END_STATE();
    case 415:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(556);
      END_STATE();
    case 416:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(711);
      END_STATE();
    case 417:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(100);
      END_STATE();
    case 418:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(418)
      if (lookahead == '\r') SKIP(1)
      if (lookahead == '"') ADVANCE(124);
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '%') ADVANCE(494);
      if (lookahead == '&') ADVANCE(501);
      if (lookahead == '(') ADVANCE(473);
      if (lookahead == ')') ADVANCE(474);
      if (lookahead == '*') ADVANCE(492);
      if (lookahead == '+') ADVANCE(495);
      if (lookahead == ',') ADVANCE(482);
      if (lookahead == '-') ADVANCE(497);
      if (lookahead == '.') ADVANCE(546);
      if (lookahead == '/') ADVANCE(493);
      if (lookahead == ';') ADVANCE(483);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '=') ADVANCE(480);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == 'A') ADVANCE(705);
      if (lookahead == 'B') ADVANCE(693);
      if (lookahead == 'D') ADVANCE(655);
      if (lookahead == 'E') ADVANCE(660);
      if (lookahead == 'F') ADVANCE(681);
      if (lookahead == 'H') ADVANCE(662);
      if (lookahead == 'I') ADVANCE(675);
      if (lookahead == 'J') ADVANCE(702);
      if (lookahead == 'L') ADVANCE(680);
      if (lookahead == 'M') ADVANCE(659);
      if (lookahead == 'O') ADVANCE(700);
      if (lookahead == 'P') ADVANCE(697);
      if (lookahead == 'R') ADVANCE(667);
      if (lookahead == 'S') ADVANCE(671);
      if (lookahead == 'T') ADVANCE(706);
      if (lookahead == 'U') ADVANCE(682);
      if (lookahead == 'V') ADVANCE(665);
      if (lookahead == '_') ADVANCE(555);
      if (lookahead == 'a') ADVANCE(642);
      if (lookahead == 'b') ADVANCE(630);
      if (lookahead == 'd') ADVANCE(590);
      if (lookahead == 'e') ADVANCE(595);
      if (lookahead == 'f') ADVANCE(617);
      if (lookahead == 'h') ADVANCE(597);
      if (lookahead == 'i') ADVANCE(611);
      if (lookahead == 'j') ADVANCE(639);
      if (lookahead == 'l') ADVANCE(616);
      if (lookahead == 'm') ADVANCE(594);
      if (lookahead == 'o') ADVANCE(637);
      if (lookahead == 'p') ADVANCE(634);
      if (lookahead == 'r') ADVANCE(603);
      if (lookahead == 's') ADVANCE(607);
      if (lookahead == 't') ADVANCE(643);
      if (lookahead == 'u') ADVANCE(618);
      if (lookahead == 'v') ADVANCE(601);
      if (lookahead == '|') ADVANCE(502);
      if (('C' <= lookahead && lookahead <= 'Z')) ADVANCE(644);
      if (('c' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 419:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(419)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '(') ADVANCE(473);
      if (lookahead == ')') ADVANCE(474);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == ',') ADVANCE(482);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == ':') ADVANCE(573);
      if (lookahead == '>') ADVANCE(488);
      if (lookahead == 'A') ADVANCE(705);
      if (lookahead == 'B') ADVANCE(693);
      if (lookahead == 'D') ADVANCE(655);
      if (lookahead == 'E') ADVANCE(660);
      if (lookahead == 'F') ADVANCE(681);
      if (lookahead == 'H') ADVANCE(662);
      if (lookahead == 'I') ADVANCE(675);
      if (lookahead == 'J') ADVANCE(702);
      if (lookahead == 'L') ADVANCE(680);
      if (lookahead == 'M') ADVANCE(659);
      if (lookahead == 'O') ADVANCE(700);
      if (lookahead == 'P') ADVANCE(697);
      if (lookahead == 'R') ADVANCE(667);
      if (lookahead == 'S') ADVANCE(671);
      if (lookahead == 'U') ADVANCE(682);
      if (lookahead == 'V') ADVANCE(665);
      if (lookahead == '_') ADVANCE(555);
      if (lookahead == 'a') ADVANCE(642);
      if (lookahead == 'b') ADVANCE(630);
      if (lookahead == 'd') ADVANCE(590);
      if (lookahead == 'e') ADVANCE(595);
      if (lookahead == 'f') ADVANCE(617);
      if (lookahead == 'h') ADVANCE(597);
      if (lookahead == 'i') ADVANCE(611);
      if (lookahead == 'j') ADVANCE(639);
      if (lookahead == 'l') ADVANCE(616);
      if (lookahead == 'm') ADVANCE(594);
      if (lookahead == 'o') ADVANCE(637);
      if (lookahead == 'p') ADVANCE(634);
      if (lookahead == 'r') ADVANCE(603);
      if (lookahead == 's') ADVANCE(607);
      if (lookahead == 'u') ADVANCE(618);
      if (lookahead == 'v') ADVANCE(601);
      if (lookahead == '|') ADVANCE(502);
      if (lookahead == '}') ADVANCE(467);
      if (('C' <= lookahead && lookahead <= 'Z')) ADVANCE(644);
      if (('c' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 420:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(420)
      if (lookahead == '\r') SKIP(3)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '%') ADVANCE(494);
      if (lookahead == '&') ADVANCE(501);
      if (lookahead == '\'') ADVANCE(561);
      if (lookahead == ')') ADVANCE(474);
      if (lookahead == '*') ADVANCE(492);
      if (lookahead == '+') ADVANCE(495);
      if (lookahead == ',') ADVANCE(482);
      if (lookahead == '-') ADVANCE(497);
      if (lookahead == '.') ADVANCE(546);
      if (lookahead == '/') ADVANCE(493);
      if (lookahead == ';') ADVANCE(483);
      if (lookahead == '<') ADVANCE(487);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(72);
      if (lookahead == 'O') ADVANCE(76);
      if (lookahead == '[') ADVANCE(566);
      if (lookahead == ']') ADVANCE(567);
      if (lookahead == 'a') ADVANCE(348);
      if (lookahead == '|') ADVANCE(502);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(300);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(315);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(211);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(251);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(587);
      END_STATE();
    case 421:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(421)
      if (lookahead == '\r') SKIP(4)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '%') ADVANCE(494);
      if (lookahead == '&') ADVANCE(501);
      if (lookahead == '\'') ADVANCE(561);
      if (lookahead == ')') ADVANCE(474);
      if (lookahead == '*') ADVANCE(492);
      if (lookahead == '+') ADVANCE(495);
      if (lookahead == ',') ADVANCE(482);
      if (lookahead == '-') ADVANCE(497);
      if (lookahead == '/') ADVANCE(493);
      if (lookahead == ';') ADVANCE(483);
      if (lookahead == '<') ADVANCE(487);
      if (lookahead == '=') ADVANCE(481);
      if (lookahead == '>') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(72);
      if (lookahead == 'O') ADVANCE(76);
      if (lookahead == '[') ADVANCE(566);
      if (lookahead == ']') ADVANCE(567);
      if (lookahead == 'a') ADVANCE(348);
      if (lookahead == '|') ADVANCE(502);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(300);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(315);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(209);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(251);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(254);
      END_STATE();
    case 422:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(422)
      if (lookahead == '\r') SKIP(5)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '%') ADVANCE(494);
      if (lookahead == '&') ADVANCE(501);
      if (lookahead == '\'') ADVANCE(561);
      if (lookahead == '*') ADVANCE(492);
      if (lookahead == '+') ADVANCE(495);
      if (lookahead == '-') ADVANCE(497);
      if (lookahead == '.') ADVANCE(546);
      if (lookahead == '/') ADVANCE(493);
      if (lookahead == ';') ADVANCE(483);
      if (lookahead == '<') ADVANCE(487);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(649);
      if (lookahead == 'I') ADVANCE(689);
      if (lookahead == 'N') ADVANCE(695);
      if (lookahead == 'O') ADVANCE(651);
      if (lookahead == 'T') ADVANCE(694);
      if (lookahead == '_') ADVANCE(555);
      if (lookahead == 'i') ADVANCE(626);
      if (lookahead == 'n') ADVANCE(632);
      if (lookahead == 't') ADVANCE(631);
      if (lookahead == '|') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(587);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(644);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 423:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(423)
      if (lookahead == '\r') SKIP(6)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '%') ADVANCE(494);
      if (lookahead == '&') ADVANCE(501);
      if (lookahead == '\'') ADVANCE(561);
      if (lookahead == '*') ADVANCE(492);
      if (lookahead == '+') ADVANCE(495);
      if (lookahead == '-') ADVANCE(497);
      if (lookahead == '.') ADVANCE(546);
      if (lookahead == '/') ADVANCE(493);
      if (lookahead == ';') ADVANCE(483);
      if (lookahead == '<') ADVANCE(487);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(649);
      if (lookahead == 'I') ADVANCE(689);
      if (lookahead == 'N') ADVANCE(695);
      if (lookahead == 'O') ADVANCE(651);
      if (lookahead == 'P') ADVANCE(663);
      if (lookahead == '_') ADVANCE(555);
      if (lookahead == 'i') ADVANCE(626);
      if (lookahead == 'n') ADVANCE(632);
      if (lookahead == 'p') ADVANCE(598);
      if (lookahead == '|') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(587);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(644);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 424:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(424)
      if (lookahead == '\r') SKIP(7)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '%') ADVANCE(494);
      if (lookahead == '&') ADVANCE(501);
      if (lookahead == '\'') ADVANCE(561);
      if (lookahead == ')') ADVANCE(474);
      if (lookahead == '*') ADVANCE(492);
      if (lookahead == '+') ADVANCE(495);
      if (lookahead == ',') ADVANCE(482);
      if (lookahead == '-') ADVANCE(497);
      if (lookahead == '.') ADVANCE(546);
      if (lookahead == '/') ADVANCE(493);
      if (lookahead == '<') ADVANCE(487);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(649);
      if (lookahead == 'I') ADVANCE(689);
      if (lookahead == 'N') ADVANCE(695);
      if (lookahead == 'O') ADVANCE(651);
      if (lookahead == '_') ADVANCE(555);
      if (lookahead == 'i') ADVANCE(626);
      if (lookahead == 'n') ADVANCE(632);
      if (lookahead == '|') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(587);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(644);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 425:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(425)
      if (lookahead == '\r') SKIP(8)
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == 'A') ADVANCE(705);
      if (lookahead == 'B') ADVANCE(693);
      if (lookahead == 'D') ADVANCE(655);
      if (lookahead == 'E') ADVANCE(660);
      if (lookahead == 'F') ADVANCE(686);
      if (lookahead == 'H') ADVANCE(662);
      if (lookahead == 'I') ADVANCE(691);
      if (lookahead == 'J') ADVANCE(702);
      if (lookahead == 'L') ADVANCE(679);
      if (lookahead == 'M') ADVANCE(659);
      if (lookahead == 'O') ADVANCE(700);
      if (lookahead == 'S') ADVANCE(672);
      if (lookahead == 'U') ADVANCE(682);
      if (lookahead == 'V') ADVANCE(665);
      if (lookahead == '_') ADVANCE(555);
      if (lookahead == 'a') ADVANCE(642);
      if (lookahead == 'b') ADVANCE(630);
      if (lookahead == 'd') ADVANCE(590);
      if (lookahead == 'e') ADVANCE(595);
      if (lookahead == 'f') ADVANCE(622);
      if (lookahead == 'h') ADVANCE(597);
      if (lookahead == 'i') ADVANCE(628);
      if (lookahead == 'j') ADVANCE(639);
      if (lookahead == 'l') ADVANCE(615);
      if (lookahead == 'm') ADVANCE(594);
      if (lookahead == 'o') ADVANCE(637);
      if (lookahead == 's') ADVANCE(608);
      if (lookahead == 'u') ADVANCE(618);
      if (lookahead == 'v') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(587);
      if (('C' <= lookahead && lookahead <= 'Z')) ADVANCE(644);
      if (('c' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 426:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(426)
      if (lookahead == '\r') SKIP(9)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '%') ADVANCE(494);
      if (lookahead == '&') ADVANCE(501);
      if (lookahead == '\'') ADVANCE(561);
      if (lookahead == '*') ADVANCE(492);
      if (lookahead == '+') ADVANCE(495);
      if (lookahead == '-') ADVANCE(497);
      if (lookahead == '.') ADVANCE(546);
      if (lookahead == '/') ADVANCE(493);
      if (lookahead == '<') ADVANCE(487);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(649);
      if (lookahead == 'I') ADVANCE(689);
      if (lookahead == 'N') ADVANCE(695);
      if (lookahead == 'O') ADVANCE(651);
      if (lookahead == 'T') ADVANCE(676);
      if (lookahead == '_') ADVANCE(555);
      if (lookahead == 'i') ADVANCE(626);
      if (lookahead == 'n') ADVANCE(632);
      if (lookahead == 't') ADVANCE(612);
      if (lookahead == '|') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(587);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(644);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 427:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(427)
      if (lookahead == '\r') SKIP(10)
      if (lookahead == '"') ADVANCE(578);
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '$') ADVANCE(560);
      if (lookahead == '%') ADVANCE(494);
      if (lookahead == '&') ADVANCE(501);
      if (lookahead == '\'') ADVANCE(561);
      if (lookahead == '(') ADVANCE(473);
      if (lookahead == ')') ADVANCE(474);
      if (lookahead == '*') ADVANCE(492);
      if (lookahead == '+') ADVANCE(496);
      if (lookahead == ',') ADVANCE(482);
      if (lookahead == '-') ADVANCE(497);
      if (lookahead == '.') ADVANCE(546);
      if (lookahead == '/') ADVANCE(493);
      if (lookahead == ':') ADVANCE(573);
      if (lookahead == ';') ADVANCE(483);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '=') ADVANCE(480);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == '@') ADVANCE(525);
      if (lookahead == ']') ADVANCE(567);
      if (lookahead == '_') ADVANCE(555);
      if (lookahead == '{') ADVANCE(466);
      if (lookahead == '|') ADVANCE(502);
      if (lookahead == '}') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(587);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(644);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 428:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(428)
      if (lookahead == '\r') SKIP(11)
      if (lookahead == '"') ADVANCE(578);
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '(') ADVANCE(473);
      if (lookahead == '-') ADVANCE(497);
      if (lookahead == '.') ADVANCE(546);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '@') ADVANCE(50);
      if (lookahead == 'F') ADVANCE(656);
      if (lookahead == 'T') ADVANCE(698);
      if (lookahead == '_') ADVANCE(555);
      if (lookahead == 'f') ADVANCE(591);
      if (lookahead == 't') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(587);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(644);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 429:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(429)
      if (lookahead == '\r') SKIP(12)
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '%') ADVANCE(494);
      if (lookahead == '&') ADVANCE(501);
      if (lookahead == '\'') ADVANCE(561);
      if (lookahead == '*') ADVANCE(492);
      if (lookahead == '+') ADVANCE(495);
      if (lookahead == ',') ADVANCE(482);
      if (lookahead == '-') ADVANCE(497);
      if (lookahead == '.') ADVANCE(546);
      if (lookahead == '/') ADVANCE(493);
      if (lookahead == ';') ADVANCE(483);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == 'A') ADVANCE(701);
      if (lookahead == 'T') ADVANCE(694);
      if (lookahead == 'W') ADVANCE(678);
      if (lookahead == '[') ADVANCE(566);
      if (lookahead == '_') ADVANCE(555);
      if (lookahead == 'a') ADVANCE(638);
      if (lookahead == 't') ADVANCE(631);
      if (lookahead == 'w') ADVANCE(614);
      if (lookahead == '|') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(587);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(644);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 430:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(430)
      if (lookahead == '\r') SKIP(13)
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == 'E') ADVANCE(685);
      if (lookahead == 'I') ADVANCE(673);
      if (lookahead == 'L') ADVANCE(696);
      if (lookahead == 'P') ADVANCE(697);
      if (lookahead == 'R') ADVANCE(667);
      if (lookahead == '_') ADVANCE(555);
      if (lookahead == 'e') ADVANCE(621);
      if (lookahead == 'i') ADVANCE(609);
      if (lookahead == 'l') ADVANCE(633);
      if (lookahead == 'p') ADVANCE(634);
      if (lookahead == 'r') ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(644);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 431:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(431)
      if (lookahead == '\r') SKIP(14)
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == 'I') ADVANCE(673);
      if (lookahead == 'L') ADVANCE(696);
      if (lookahead == 'P') ADVANCE(697);
      if (lookahead == 'R') ADVANCE(667);
      if (lookahead == '_') ADVANCE(555);
      if (lookahead == 'i') ADVANCE(609);
      if (lookahead == 'l') ADVANCE(633);
      if (lookahead == 'p') ADVANCE(634);
      if (lookahead == 'r') ADVANCE(603);
      if (lookahead == '}') ADVANCE(467);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(644);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 432:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(432)
      if (lookahead == '\r') SKIP(15)
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '%') ADVANCE(494);
      if (lookahead == '&') ADVANCE(501);
      if (lookahead == '\'') ADVANCE(561);
      if (lookahead == '*') ADVANCE(492);
      if (lookahead == '+') ADVANCE(495);
      if (lookahead == '-') ADVANCE(497);
      if (lookahead == '.') ADVANCE(546);
      if (lookahead == '/') ADVANCE(493);
      if (lookahead == ';') ADVANCE(483);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == 'A') ADVANCE(649);
      if (lookahead == 'O') ADVANCE(651);
      if (lookahead == 'P') ADVANCE(663);
      if (lookahead == '_') ADVANCE(555);
      if (lookahead == 'p') ADVANCE(598);
      if (lookahead == '|') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(587);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(644);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 433:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(433)
      if (lookahead == '\r') SKIP(16)
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '%') ADVANCE(494);
      if (lookahead == '&') ADVANCE(501);
      if (lookahead == '\'') ADVANCE(561);
      if (lookahead == '*') ADVANCE(492);
      if (lookahead == '+') ADVANCE(495);
      if (lookahead == '-') ADVANCE(497);
      if (lookahead == '.') ADVANCE(546);
      if (lookahead == '/') ADVANCE(493);
      if (lookahead == ';') ADVANCE(483);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == 'A') ADVANCE(649);
      if (lookahead == 'O') ADVANCE(651);
      if (lookahead == 'T') ADVANCE(694);
      if (lookahead == '_') ADVANCE(555);
      if (lookahead == 't') ADVANCE(631);
      if (lookahead == '|') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(587);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(644);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 434:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(434)
      if (lookahead == '\r') SKIP(17)
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '%') ADVANCE(494);
      if (lookahead == '&') ADVANCE(501);
      if (lookahead == '\'') ADVANCE(561);
      if (lookahead == ')') ADVANCE(474);
      if (lookahead == '*') ADVANCE(492);
      if (lookahead == '+') ADVANCE(495);
      if (lookahead == ',') ADVANCE(482);
      if (lookahead == '-') ADVANCE(497);
      if (lookahead == '.') ADVANCE(546);
      if (lookahead == '/') ADVANCE(493);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == 'A') ADVANCE(649);
      if (lookahead == 'O') ADVANCE(651);
      if (lookahead == '_') ADVANCE(555);
      if (lookahead == '|') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(587);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(644);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 435:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(435)
      if (lookahead == '\r') SKIP(18)
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '%') ADVANCE(494);
      if (lookahead == '&') ADVANCE(501);
      if (lookahead == '\'') ADVANCE(561);
      if (lookahead == '*') ADVANCE(492);
      if (lookahead == '+') ADVANCE(495);
      if (lookahead == ',') ADVANCE(482);
      if (lookahead == '-') ADVANCE(497);
      if (lookahead == '.') ADVANCE(546);
      if (lookahead == '/') ADVANCE(493);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == 'A') ADVANCE(701);
      if (lookahead == ']') ADVANCE(567);
      if (lookahead == '_') ADVANCE(555);
      if (lookahead == 'a') ADVANCE(638);
      if (lookahead == '|') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(587);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(644);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 436:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(436)
      if (lookahead == '\r') SKIP(19)
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '%') ADVANCE(494);
      if (lookahead == '&') ADVANCE(501);
      if (lookahead == '\'') ADVANCE(561);
      if (lookahead == '*') ADVANCE(492);
      if (lookahead == '+') ADVANCE(495);
      if (lookahead == ',') ADVANCE(482);
      if (lookahead == '-') ADVANCE(497);
      if (lookahead == '.') ADVANCE(546);
      if (lookahead == '/') ADVANCE(493);
      if (lookahead == ';') ADVANCE(483);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == 'P') ADVANCE(663);
      if (lookahead == '_') ADVANCE(555);
      if (lookahead == 'p') ADVANCE(598);
      if (lookahead == '|') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(587);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(644);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 437:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(437)
      if (lookahead == '\r') SKIP(20)
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == ')') ADVANCE(474);
      if (lookahead == ',') ADVANCE(482);
      if (lookahead == '-') ADVANCE(497);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == ':') ADVANCE(573);
      if (lookahead == ';') ADVANCE(483);
      if (lookahead == '<') ADVANCE(486);
      if (lookahead == '>') ADVANCE(488);
      if (lookahead == '@') ADVANCE(525);
      if (lookahead == 'B') ADVANCE(53);
      if (lookahead == 'F') ADVANCE(68);
      if (lookahead == 'Q') ADVANCE(89);
      if (lookahead == 'S') ADVANCE(61);
      if (lookahead == 'W') ADVANCE(66);
      if (lookahead == 'b') ADVANCE(313);
      if (lookahead == 'f') ADVANCE(271);
      if (lookahead == 's') ADVANCE(383);
      if (lookahead == '|') ADVANCE(502);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(363);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(322);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(146);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(207);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(311);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(355);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(333);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(209);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(256);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(226);
      END_STATE();
    case 438:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(438)
      if (lookahead == '\r') SKIP(21)
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '%') ADVANCE(494);
      if (lookahead == '&') ADVANCE(501);
      if (lookahead == '\'') ADVANCE(561);
      if (lookahead == '*') ADVANCE(492);
      if (lookahead == '+') ADVANCE(495);
      if (lookahead == '-') ADVANCE(497);
      if (lookahead == '.') ADVANCE(546);
      if (lookahead == '/') ADVANCE(493);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == 'A') ADVANCE(649);
      if (lookahead == 'O') ADVANCE(651);
      if (lookahead == 'T') ADVANCE(676);
      if (lookahead == '_') ADVANCE(555);
      if (lookahead == 't') ADVANCE(612);
      if (lookahead == '|') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(587);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(644);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 439:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(439)
      if (lookahead == '\r') SKIP(22)
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '(') ADVANCE(473);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == ':') ADVANCE(573);
      if (lookahead == '<') ADVANCE(486);
      if (lookahead == '@') ADVANCE(50);
      if (lookahead == 'A') ADVANCE(687);
      if (lookahead == '_') ADVANCE(555);
      if (lookahead == 'a') ADVANCE(623);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(644);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 440:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(440)
      if (lookahead == '\r') SKIP(23)
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == 'B') ADVANCE(693);
      if (lookahead == 'D') ADVANCE(655);
      if (lookahead == 'E') ADVANCE(660);
      if (lookahead == 'F') ADVANCE(686);
      if (lookahead == 'I') ADVANCE(691);
      if (lookahead == 'J') ADVANCE(702);
      if (lookahead == 'S') ADVANCE(704);
      if (lookahead == 'U') ADVANCE(682);
      if (lookahead == 'V') ADVANCE(665);
      if (lookahead == '_') ADVANCE(555);
      if (lookahead == 'b') ADVANCE(630);
      if (lookahead == 'd') ADVANCE(590);
      if (lookahead == 'e') ADVANCE(595);
      if (lookahead == 'f') ADVANCE(622);
      if (lookahead == 'i') ADVANCE(628);
      if (lookahead == 'j') ADVANCE(639);
      if (lookahead == 's') ADVANCE(641);
      if (lookahead == 'u') ADVANCE(618);
      if (lookahead == 'v') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(587);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(644);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 441:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(441)
      if (lookahead == '\r') SKIP(24)
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '@') ADVANCE(50);
      if (lookahead == 'A') ADVANCE(687);
      if (lookahead == 'S') ADVANCE(669);
      if (lookahead == '_') ADVANCE(555);
      if (lookahead == 'a') ADVANCE(623);
      if (lookahead == 's') ADVANCE(605);
      if (lookahead == '}') ADVANCE(467);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(644);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 442:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(442)
      if (lookahead == '\r') SKIP(25)
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == ')') ADVANCE(474);
      if (lookahead == ',') ADVANCE(482);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == ':') ADVANCE(573);
      if (lookahead == '<') ADVANCE(486);
      if (lookahead == '>') ADVANCE(488);
      if (lookahead == '_') ADVANCE(555);
      if (lookahead == '|') ADVANCE(502);
      if (lookahead == '}') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(587);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(644);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 443:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(443)
      if (lookahead == '\r') SKIP(26)
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '(') ADVANCE(473);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == 'S') ADVANCE(670);
      if (lookahead == '_') ADVANCE(555);
      if (lookahead == 's') ADVANCE(606);
      if (lookahead == '{') ADVANCE(466);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(644);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 444:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(444)
      if (lookahead == '\r') SKIP(27)
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == ',') ADVANCE(482);
      if (lookahead == '-') ADVANCE(497);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == ':') ADVANCE(573);
      if (lookahead == ';') ADVANCE(483);
      if (lookahead == 'P') ADVANCE(663);
      if (lookahead == 'W') ADVANCE(647);
      if (lookahead == '_') ADVANCE(555);
      if (lookahead == 'p') ADVANCE(598);
      if (lookahead == '|') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(587);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(644);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 445:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(445)
      if (lookahead == '\r') SKIP(28)
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '(') ADVANCE(473);
      if (lookahead == ')') ADVANCE(474);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == ';') ADVANCE(483);
      if (lookahead == '=') ADVANCE(480);
      if (lookahead == 'I') ADVANCE(692);
      if (lookahead == 'M') ADVANCE(684);
      if (lookahead == 'U') ADVANCE(690);
      if (lookahead == '_') ADVANCE(555);
      if (lookahead == 'i') ADVANCE(629);
      if (lookahead == 'm') ADVANCE(620);
      if (lookahead == 'u') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(587);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(644);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 446:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(446)
      if (lookahead == '\r') SKIP(29)
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == ',') ADVANCE(482);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == ';') ADVANCE(483);
      if (lookahead == 'T') ADVANCE(694);
      if (lookahead == 'W') ADVANCE(678);
      if (lookahead == '_') ADVANCE(555);
      if (lookahead == 't') ADVANCE(631);
      if (lookahead == 'w') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(587);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(644);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 447:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(447)
      if (lookahead == '\r') SKIP(30)
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == ')') ADVANCE(474);
      if (lookahead == ',') ADVANCE(482);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == 'A') ADVANCE(703);
      if (lookahead == 'D') ADVANCE(668);
      if (lookahead == '_') ADVANCE(555);
      if (lookahead == 'a') ADVANCE(640);
      if (lookahead == 'd') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(587);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(644);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 448:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(448)
      if (lookahead == '\r') SKIP(31)
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == 'A') ADVANCE(650);
      if (lookahead == 'R') ADVANCE(645);
      if (lookahead == 'S') ADVANCE(652);
      if (lookahead == '_') ADVANCE(555);
      if (lookahead == '{') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(587);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(644);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 449:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(449)
      if (lookahead == '\r') SKIP(32)
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == ')') ADVANCE(474);
      if (lookahead == ',') ADVANCE(482);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == 'D') ADVANCE(666);
      if (lookahead == '_') ADVANCE(555);
      if (lookahead == 'd') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(587);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(644);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 450:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(450)
      if (lookahead == '\r') SKIP(33)
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == 'F') ADVANCE(699);
      if (lookahead == '_') ADVANCE(555);
      if (lookahead == 'f') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(587);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(644);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 451:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(451)
      if (lookahead == '\r') SKIP(34)
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(314);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(270);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(311);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(391);
      END_STATE();
    case 452:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(452)
      if (lookahead == '\r') SKIP(35)
      if (lookahead == '"') ADVANCE(578);
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(88);
      END_STATE();
    case 453:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(453)
      if (lookahead == '\r') SKIP(36)
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == 'E') ADVANCE(688);
      if (lookahead == 'I') ADVANCE(673);
      if (lookahead == 'L') ADVANCE(696);
      if (lookahead == 'P') ADVANCE(697);
      if (lookahead == 'R') ADVANCE(667);
      if (lookahead == '_') ADVANCE(555);
      if (lookahead == 'e') ADVANCE(625);
      if (lookahead == 'i') ADVANCE(609);
      if (lookahead == 'l') ADVANCE(633);
      if (lookahead == 'p') ADVANCE(634);
      if (lookahead == 'r') ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(644);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 454:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(584);
      END_STATE();
    case 455:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(454);
      END_STATE();
    case 456:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(455);
      END_STATE();
    case 457:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(456);
      END_STATE();
    case 458:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(457);
      END_STATE();
    case 459:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(458);
      END_STATE();
    case 460:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(459);
      END_STATE();
    case 461:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(460);
      END_STATE();
    case 462:
      if (eof) ADVANCE(465);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 463:
      if (eof) ADVANCE(465);
      if (lookahead == '\n') SKIP(464)
      END_STATE();
    case 464:
      if (eof) ADVANCE(465);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(464)
      if (lookahead == '\r') SKIP(463)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '"') ADVANCE(578);
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '%') ADVANCE(494);
      if (lookahead == '&') ADVANCE(501);
      if (lookahead == '\'') ADVANCE(561);
      if (lookahead == ')') ADVANCE(474);
      if (lookahead == '*') ADVANCE(492);
      if (lookahead == '+') ADVANCE(496);
      if (lookahead == ',') ADVANCE(482);
      if (lookahead == '-') ADVANCE(497);
      if (lookahead == '.') ADVANCE(546);
      if (lookahead == '/') ADVANCE(493);
      if (lookahead == ':') ADVANCE(573);
      if (lookahead == ';') ADVANCE(483);
      if (lookahead == '<') ADVANCE(487);
      if (lookahead == '=') ADVANCE(481);
      if (lookahead == '>') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(71);
      if (lookahead == 'F') ADVANCE(74);
      if (lookahead == 'G') ADVANCE(81);
      if (lookahead == 'O') ADVANCE(76);
      if (lookahead == 'P') ADVANCE(210);
      if (lookahead == 'Q') ADVANCE(89);
      if (lookahead == 'R') ADVANCE(59);
      if (lookahead == 'S') ADVANCE(92);
      if (lookahead == '[') ADVANCE(566);
      if (lookahead == ']') ADVANCE(567);
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 'f') ADVANCE(147);
      if (lookahead == 'p') ADVANCE(128);
      if (lookahead == 'r') ADVANCE(230);
      if (lookahead == 's') ADVANCE(389);
      if (lookahead == '{') ADVANCE(466);
      if (lookahead == '|') ADVANCE(502);
      if (lookahead == '}') ADVANCE(467);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(340);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(266);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(300);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(316);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(252);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(587);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_createSignature_token1);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_createSignature_token2);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_createSignature_token3);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_createSignature_token4);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_QUERY);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_FOR);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_GRAPH);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_API);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_SYNTAX);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_RETURNS);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(511);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_typedef_token1);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_typedef_token2);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(499);
      if (lookahead == '=') ADVANCE(509);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(510);
      if (lookahead == '>') ADVANCE(500);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_constant_token2);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(42);
      if (lookahead == '/') ADVANCE(514);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(545);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(572);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_condition_token2);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_condition_token3);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_condition_token4);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(514);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_CREATE_VERTEX_token1);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_CREATE_VERTEX_token2);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_CREATE_VERTEX_token3);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_CREATE_VERTEX_token4);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_DQUOTEnone_DQUOTE);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_DQUOTEoutdegree_by_edgetype_DQUOTE);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_primary_id_as_attribute);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_DQUOTEtrue_DQUOTE);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_primary_id_name_type_token1);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_accumDeclStmt_token1);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(526);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_accumType_token1);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_accumType_token2);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_accumType_token3);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_accumType_token4);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_accumType_token5);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_accumType_token5);
      if (lookahead == ' ') ADVANCE(203);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_accumType_token6);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_accumType_token7);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_accumType_token8);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_accumType_token9);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_accumType_token10);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_accumType_token11);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_accumType_token12);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_accumType_token13);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_accumType_token14);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_accumType_token15);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_accumType_token16);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_elementType_token1);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_queryBodyIfStmt_token1);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_queryBodyIfStmt_token2);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_queryBodyIfStmt_token3);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_queryBodyIfStmt_token4);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_fileDeclStmt_token1);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_simpleSet_token1);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_simpleSet_token2);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_simpleSet_token3);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_seed_token1);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_DOT_STAR);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_seed_token2);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_selectVertParams_token1);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_printStmt_token1);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_printStmt_token2);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_printStmt_token3);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_printExpr_token1);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_logStmt_token1);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_returnStmt_token1);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_gsqlSelectClause_token1);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_fromClause_token1);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_WHERE);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_accumClause_token1);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_postAccumClause_token1);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_perClauseV2_token1);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_stringLiteral_token1);
      if (lookahead == '*') ADVANCE(581);
      if (lookahead == '/') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(583);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_stringLiteral_token1);
      if (lookahead == '*') ADVANCE(580);
      if (lookahead == '/') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(581);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_stringLiteral_token1);
      if (lookahead == '*') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(581);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_stringLiteral_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(582);
      if (lookahead == '\r') ADVANCE(583);
      if (lookahead == '#') ADVANCE(583);
      if (lookahead == '/') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(583);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_stringLiteral_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(583);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(584);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(585);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_name_token1);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(245);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(394);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(379);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(394);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(279);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(279);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(272);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(320);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(317);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(329);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(301);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(329);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(312);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(250);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(250);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(357);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(331);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(265);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(274);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(152);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(299);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(349);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(392);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(152);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(299);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(392);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(343);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(299);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(547);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(547);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(504);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(505);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(547);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(374);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(231);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(231);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(94);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(403);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(325);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(229);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(356);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(356);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(246);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(272);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(320);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(308);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(308);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(260);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(310);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(357);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(320);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(415);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(415);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(565);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(249);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(504);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(505);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(260);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(374);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(390);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(318);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(365);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(246);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(265);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(403);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(317);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(565);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(319);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(174);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(343);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(249);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(325);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_name_token2);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E') ADVANCE(86);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'H') ADVANCE(56);
      if (lookahead == 'h') ADVANCE(229);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'H') ADVANCE(63);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'N') ADVANCE(55);
      if (lookahead == 'P') ADVANCE(67);
      if (lookahead == 'n') ADVANCE(415);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(565);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(249);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'N') ADVANCE(54);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'P') ADVANCE(67);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'R') ADVANCE(508);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'Y') ADVANCE(70);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'Y') ADVANCE(70);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(274);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(152);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(299);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(245);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(394);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(379);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(394);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(279);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(279);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(272);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(320);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(317);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(329);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(301);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(329);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(312);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(250);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(250);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(357);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(331);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(265);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(349);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(392);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(152);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(299);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(392);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(343);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(299);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(547);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(547);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(504);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(505);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(547);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(374);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(231);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(231);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(94);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(403);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(325);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(229);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(356);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(356);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(246);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(272);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(320);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(308);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(308);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(260);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(310);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(357);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(320);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(415);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(504);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(505);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(260);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(374);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(390);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(318);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(365);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(246);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(265);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(403);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(317);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(565);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(319);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(174);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(343);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(249);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(325);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_baseType_token1);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_baseType_token2);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_baseType_token3);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_baseType_token4);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_baseType_token5);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_baseType_token6);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_SET);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_BAG);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_FILE);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 464},
  [2] = {.lex_state = 418},
  [3] = {.lex_state = 419},
  [4] = {.lex_state = 419},
  [5] = {.lex_state = 419},
  [6] = {.lex_state = 464},
  [7] = {.lex_state = 464},
  [8] = {.lex_state = 420},
  [9] = {.lex_state = 420},
  [10] = {.lex_state = 420},
  [11] = {.lex_state = 418},
  [12] = {.lex_state = 420},
  [13] = {.lex_state = 420},
  [14] = {.lex_state = 418},
  [15] = {.lex_state = 420},
  [16] = {.lex_state = 420},
  [17] = {.lex_state = 421},
  [18] = {.lex_state = 420},
  [19] = {.lex_state = 420},
  [20] = {.lex_state = 420},
  [21] = {.lex_state = 420},
  [22] = {.lex_state = 420},
  [23] = {.lex_state = 420},
  [24] = {.lex_state = 420},
  [25] = {.lex_state = 420},
  [26] = {.lex_state = 420},
  [27] = {.lex_state = 420},
  [28] = {.lex_state = 418},
  [29] = {.lex_state = 420},
  [30] = {.lex_state = 422},
  [31] = {.lex_state = 423},
  [32] = {.lex_state = 424},
  [33] = {.lex_state = 424},
  [34] = {.lex_state = 422},
  [35] = {.lex_state = 419},
  [36] = {.lex_state = 422},
  [37] = {.lex_state = 423},
  [38] = {.lex_state = 423},
  [39] = {.lex_state = 424},
  [40] = {.lex_state = 425},
  [41] = {.lex_state = 426},
  [42] = {.lex_state = 425},
  [43] = {.lex_state = 425},
  [44] = {.lex_state = 426},
  [45] = {.lex_state = 426},
  [46] = {.lex_state = 425},
  [47] = {.lex_state = 427},
  [48] = {.lex_state = 427},
  [49] = {.lex_state = 427},
  [50] = {.lex_state = 425},
  [51] = {.lex_state = 425},
  [52] = {.lex_state = 425},
  [53] = {.lex_state = 420},
  [54] = {.lex_state = 420},
  [55] = {.lex_state = 428},
  [56] = {.lex_state = 428},
  [57] = {.lex_state = 420},
  [58] = {.lex_state = 420},
  [59] = {.lex_state = 420},
  [60] = {.lex_state = 420},
  [61] = {.lex_state = 420},
  [62] = {.lex_state = 420},
  [63] = {.lex_state = 420},
  [64] = {.lex_state = 420},
  [65] = {.lex_state = 428},
  [66] = {.lex_state = 418},
  [67] = {.lex_state = 428},
  [68] = {.lex_state = 428},
  [69] = {.lex_state = 428},
  [70] = {.lex_state = 428},
  [71] = {.lex_state = 428},
  [72] = {.lex_state = 428},
  [73] = {.lex_state = 420},
  [74] = {.lex_state = 429},
  [75] = {.lex_state = 429},
  [76] = {.lex_state = 428},
  [77] = {.lex_state = 428},
  [78] = {.lex_state = 429},
  [79] = {.lex_state = 428},
  [80] = {.lex_state = 428},
  [81] = {.lex_state = 428},
  [82] = {.lex_state = 428},
  [83] = {.lex_state = 428},
  [84] = {.lex_state = 428},
  [85] = {.lex_state = 428},
  [86] = {.lex_state = 420},
  [87] = {.lex_state = 428},
  [88] = {.lex_state = 428},
  [89] = {.lex_state = 428},
  [90] = {.lex_state = 428},
  [91] = {.lex_state = 428},
  [92] = {.lex_state = 428},
  [93] = {.lex_state = 430},
  [94] = {.lex_state = 428},
  [95] = {.lex_state = 428},
  [96] = {.lex_state = 428},
  [97] = {.lex_state = 428},
  [98] = {.lex_state = 428},
  [99] = {.lex_state = 428},
  [100] = {.lex_state = 428},
  [101] = {.lex_state = 428},
  [102] = {.lex_state = 428},
  [103] = {.lex_state = 428},
  [104] = {.lex_state = 430},
  [105] = {.lex_state = 428},
  [106] = {.lex_state = 428},
  [107] = {.lex_state = 428},
  [108] = {.lex_state = 428},
  [109] = {.lex_state = 428},
  [110] = {.lex_state = 428},
  [111] = {.lex_state = 431},
  [112] = {.lex_state = 431},
  [113] = {.lex_state = 432},
  [114] = {.lex_state = 453},
  [115] = {.lex_state = 431},
  [116] = {.lex_state = 433},
  [117] = {.lex_state = 433},
  [118] = {.lex_state = 431},
  [119] = {.lex_state = 453},
  [120] = {.lex_state = 431},
  [121] = {.lex_state = 431},
  [122] = {.lex_state = 432},
  [123] = {.lex_state = 434},
  [124] = {.lex_state = 432},
  [125] = {.lex_state = 431},
  [126] = {.lex_state = 434},
  [127] = {.lex_state = 431},
  [128] = {.lex_state = 434},
  [129] = {.lex_state = 433},
  [130] = {.lex_state = 431},
  [131] = {.lex_state = 435},
  [132] = {.lex_state = 436},
  [133] = {.lex_state = 436},
  [134] = {.lex_state = 437},
  [135] = {.lex_state = 438},
  [136] = {.lex_state = 435},
  [137] = {.lex_state = 438},
  [138] = {.lex_state = 437},
  [139] = {.lex_state = 436},
  [140] = {.lex_state = 435},
  [141] = {.lex_state = 438},
  [142] = {.lex_state = 437},
  [143] = {.lex_state = 437},
  [144] = {.lex_state = 439},
  [145] = {.lex_state = 440},
  [146] = {.lex_state = 440},
  [147] = {.lex_state = 440},
  [148] = {.lex_state = 439},
  [149] = {.lex_state = 440},
  [150] = {.lex_state = 437},
  [151] = {.lex_state = 420},
  [152] = {.lex_state = 439},
  [153] = {.lex_state = 420},
  [154] = {.lex_state = 440},
  [155] = {.lex_state = 439},
  [156] = {.lex_state = 420},
  [157] = {.lex_state = 437},
  [158] = {.lex_state = 440},
  [159] = {.lex_state = 440},
  [160] = {.lex_state = 420},
  [161] = {.lex_state = 439},
  [162] = {.lex_state = 420},
  [163] = {.lex_state = 420},
  [164] = {.lex_state = 420},
  [165] = {.lex_state = 420},
  [166] = {.lex_state = 420},
  [167] = {.lex_state = 420},
  [168] = {.lex_state = 420},
  [169] = {.lex_state = 420},
  [170] = {.lex_state = 420},
  [171] = {.lex_state = 420},
  [172] = {.lex_state = 418},
  [173] = {.lex_state = 420},
  [174] = {.lex_state = 418},
  [175] = {.lex_state = 420},
  [176] = {.lex_state = 420},
  [177] = {.lex_state = 420},
  [178] = {.lex_state = 420},
  [179] = {.lex_state = 420},
  [180] = {.lex_state = 441},
  [181] = {.lex_state = 420},
  [182] = {.lex_state = 420},
  [183] = {.lex_state = 420},
  [184] = {.lex_state = 420},
  [185] = {.lex_state = 418},
  [186] = {.lex_state = 464},
  [187] = {.lex_state = 442},
  [188] = {.lex_state = 443},
  [189] = {.lex_state = 418},
  [190] = {.lex_state = 444},
  [191] = {.lex_state = 444},
  [192] = {.lex_state = 418},
  [193] = {.lex_state = 464},
  [194] = {.lex_state = 464},
  [195] = {.lex_state = 464},
  [196] = {.lex_state = 418},
  [197] = {.lex_state = 418},
  [198] = {.lex_state = 442},
  [199] = {.lex_state = 464},
  [200] = {.lex_state = 418},
  [201] = {.lex_state = 441},
  [202] = {.lex_state = 464},
  [203] = {.lex_state = 444},
  [204] = {.lex_state = 464},
  [205] = {.lex_state = 464},
  [206] = {.lex_state = 464},
  [207] = {.lex_state = 418},
  [208] = {.lex_state = 442},
  [209] = {.lex_state = 444},
  [210] = {.lex_state = 445},
  [211] = {.lex_state = 445},
  [212] = {.lex_state = 427},
  [213] = {.lex_state = 445},
  [214] = {.lex_state = 428},
  [215] = {.lex_state = 428},
  [216] = {.lex_state = 418},
  [217] = {.lex_state = 427},
  [218] = {.lex_state = 439},
  [219] = {.lex_state = 418},
  [220] = {.lex_state = 427},
  [221] = {.lex_state = 427},
  [222] = {.lex_state = 446},
  [223] = {.lex_state = 427},
  [224] = {.lex_state = 427},
  [225] = {.lex_state = 447},
  [226] = {.lex_state = 427},
  [227] = {.lex_state = 437},
  [228] = {.lex_state = 442},
  [229] = {.lex_state = 427},
  [230] = {.lex_state = 447},
  [231] = {.lex_state = 448},
  [232] = {.lex_state = 446},
  [233] = {.lex_state = 427},
  [234] = {.lex_state = 448},
  [235] = {.lex_state = 446},
  [236] = {.lex_state = 427},
  [237] = {.lex_state = 447},
  [238] = {.lex_state = 430},
  [239] = {.lex_state = 427},
  [240] = {.lex_state = 427},
  [241] = {.lex_state = 437},
  [242] = {.lex_state = 448},
  [243] = {.lex_state = 427},
  [244] = {.lex_state = 437},
  [245] = {.lex_state = 427},
  [246] = {.lex_state = 427},
  [247] = {.lex_state = 449},
  [248] = {.lex_state = 437},
  [249] = {.lex_state = 437},
  [250] = {.lex_state = 442},
  [251] = {.lex_state = 427},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 453},
  [254] = {.lex_state = 427},
  [255] = {.lex_state = 427},
  [256] = {.lex_state = 427},
  [257] = {.lex_state = 449},
  [258] = {.lex_state = 431},
  [259] = {.lex_state = 427},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 449},
  [262] = {.lex_state = 427},
  [263] = {.lex_state = 427},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 437},
  [266] = {.lex_state = 437},
  [267] = {.lex_state = 445},
  [268] = {.lex_state = 427},
  [269] = {.lex_state = 437},
  [270] = {.lex_state = 442},
  [271] = {.lex_state = 427},
  [272] = {.lex_state = 427},
  [273] = {.lex_state = 437},
  [274] = {.lex_state = 427},
  [275] = {.lex_state = 427},
  [276] = {.lex_state = 427},
  [277] = {.lex_state = 427},
  [278] = {.lex_state = 437},
  [279] = {.lex_state = 437},
  [280] = {.lex_state = 464},
  [281] = {.lex_state = 464},
  [282] = {.lex_state = 442},
  [283] = {.lex_state = 442},
  [284] = {.lex_state = 442},
  [285] = {.lex_state = 464},
  [286] = {.lex_state = 442},
  [287] = {.lex_state = 437},
  [288] = {.lex_state = 464},
  [289] = {.lex_state = 437},
  [290] = {.lex_state = 427},
  [291] = {.lex_state = 437},
  [292] = {.lex_state = 427},
  [293] = {.lex_state = 437},
  [294] = {.lex_state = 427},
  [295] = {.lex_state = 427},
  [296] = {.lex_state = 437},
  [297] = {.lex_state = 427},
  [298] = {.lex_state = 464},
  [299] = {.lex_state = 450},
  [300] = {.lex_state = 450},
  [301] = {.lex_state = 427},
  [302] = {.lex_state = 437},
  [303] = {.lex_state = 427},
  [304] = {.lex_state = 464},
  [305] = {.lex_state = 437},
  [306] = {.lex_state = 450},
  [307] = {.lex_state = 437},
  [308] = {.lex_state = 427},
  [309] = {.lex_state = 442},
  [310] = {.lex_state = 427},
  [311] = {.lex_state = 437},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 427},
  [314] = {.lex_state = 437},
  [315] = {.lex_state = 437},
  [316] = {.lex_state = 427},
  [317] = {.lex_state = 464},
  [318] = {.lex_state = 437},
  [319] = {.lex_state = 427},
  [320] = {.lex_state = 464},
  [321] = {.lex_state = 427},
  [322] = {.lex_state = 427},
  [323] = {.lex_state = 427},
  [324] = {.lex_state = 427},
  [325] = {.lex_state = 427},
  [326] = {.lex_state = 427},
  [327] = {.lex_state = 427},
  [328] = {.lex_state = 427},
  [329] = {.lex_state = 427},
  [330] = {.lex_state = 427},
  [331] = {.lex_state = 427},
  [332] = {.lex_state = 427},
  [333] = {.lex_state = 427},
  [334] = {.lex_state = 427},
  [335] = {.lex_state = 427},
  [336] = {.lex_state = 427},
  [337] = {.lex_state = 427},
  [338] = {.lex_state = 427},
  [339] = {.lex_state = 445},
  [340] = {.lex_state = 437},
  [341] = {.lex_state = 464},
  [342] = {.lex_state = 427},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 427},
  [346] = {.lex_state = 464},
  [347] = {.lex_state = 437},
  [348] = {.lex_state = 427},
  [349] = {.lex_state = 427},
  [350] = {.lex_state = 427},
  [351] = {.lex_state = 464},
  [352] = {.lex_state = 427},
  [353] = {.lex_state = 427},
  [354] = {.lex_state = 427},
  [355] = {.lex_state = 437},
  [356] = {.lex_state = 427},
  [357] = {.lex_state = 437},
  [358] = {.lex_state = 419},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 437},
  [362] = {.lex_state = 427},
  [363] = {.lex_state = 437},
  [364] = {.lex_state = 437},
  [365] = {.lex_state = 427},
  [366] = {.lex_state = 427},
  [367] = {.lex_state = 464},
  [368] = {.lex_state = 427},
  [369] = {.lex_state = 427},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 427},
  [372] = {.lex_state = 445},
  [373] = {.lex_state = 445},
  [374] = {.lex_state = 427},
  [375] = {.lex_state = 427},
  [376] = {.lex_state = 427},
  [377] = {.lex_state = 427},
  [378] = {.lex_state = 427},
  [379] = {.lex_state = 427},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 427},
  [382] = {.lex_state = 427},
  [383] = {.lex_state = 464},
  [384] = {.lex_state = 427},
  [385] = {.lex_state = 464},
  [386] = {.lex_state = 427},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 427},
  [389] = {.lex_state = 427},
  [390] = {.lex_state = 427},
  [391] = {.lex_state = 464},
  [392] = {.lex_state = 464},
  [393] = {.lex_state = 464},
  [394] = {.lex_state = 427},
  [395] = {.lex_state = 427},
  [396] = {.lex_state = 427},
  [397] = {.lex_state = 427},
  [398] = {.lex_state = 445},
  [399] = {.lex_state = 427},
  [400] = {.lex_state = 427},
  [401] = {.lex_state = 427},
  [402] = {.lex_state = 427},
  [403] = {.lex_state = 427},
  [404] = {.lex_state = 437},
  [405] = {.lex_state = 451},
  [406] = {.lex_state = 427},
  [407] = {.lex_state = 427},
  [408] = {.lex_state = 427},
  [409] = {.lex_state = 427},
  [410] = {.lex_state = 427},
  [411] = {.lex_state = 464},
  [412] = {.lex_state = 427},
  [413] = {.lex_state = 427},
  [414] = {.lex_state = 427},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 427},
  [417] = {.lex_state = 427},
  [418] = {.lex_state = 427},
  [419] = {.lex_state = 427},
  [420] = {.lex_state = 464},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 427},
  [423] = {.lex_state = 427},
  [424] = {.lex_state = 427},
  [425] = {.lex_state = 437},
  [426] = {.lex_state = 464},
  [427] = {.lex_state = 427},
  [428] = {.lex_state = 427},
  [429] = {.lex_state = 418},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 419},
  [432] = {.lex_state = 437},
  [433] = {.lex_state = 464},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 464},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 445},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 145},
  [443] = {.lex_state = 145},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 464},
  [446] = {.lex_state = 445},
  [447] = {.lex_state = 464},
  [448] = {.lex_state = 418},
  [449] = {.lex_state = 427},
  [450] = {.lex_state = 419},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 464},
  [453] = {.lex_state = 418},
  [454] = {.lex_state = 427},
  [455] = {.lex_state = 418},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 437},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 437},
  [460] = {.lex_state = 145},
  [461] = {.lex_state = 437},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 445},
  [465] = {.lex_state = 427},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 464},
  [468] = {.lex_state = 418},
  [469] = {.lex_state = 427},
  [470] = {.lex_state = 437},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 419},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 418},
  [475] = {.lex_state = 419},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 419},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 427},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 418},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 419},
  [492] = {.lex_state = 427},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 437},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 464},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 418},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 464},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 464},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 427},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 464},
  [534] = {.lex_state = 0},
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
  [546] = {.lex_state = 419},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 418},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 418},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 418},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 419},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 419},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 464},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 464},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 464},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 464},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 419},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 464},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 419},
  [599] = {.lex_state = 418},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 464},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 464},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 419},
  [611] = {.lex_state = 464},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 464},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 420},
  [619] = {.lex_state = 418},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 464},
  [623] = {.lex_state = 418},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 418},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 418},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 464},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 418},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 419},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 464},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 419},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 419},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 464},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 418},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 419},
  [678] = {.lex_state = 0},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 418},
  [684] = {.lex_state = 464},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 418},
  [688] = {.lex_state = 418},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 419},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 0},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 419},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 464},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 418},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 419},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 419},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 464},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 464},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 418},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 0},
  [729] = {.lex_state = 464},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 0},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 418},
  [737] = {.lex_state = 419},
  [738] = {.lex_state = 419},
  [739] = {.lex_state = 419},
  [740] = {.lex_state = 418},
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 464},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 0},
  [745] = {.lex_state = 0},
  [746] = {.lex_state = 0},
  [747] = {.lex_state = 0},
  [748] = {.lex_state = 0},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 0},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 0},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 0},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 464},
  [758] = {.lex_state = 418},
  [759] = {.lex_state = 418},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 0},
  [763] = {.lex_state = 0},
  [764] = {.lex_state = 0},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 0},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 0},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 464},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 418},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 464},
  [785] = {.lex_state = 464},
  [786] = {.lex_state = 0},
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
    [aux_sym_CREATE_VERTEX_token1] = ACTIONS(1),
    [aux_sym_CREATE_VERTEX_token2] = ACTIONS(1),
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
    [aux_sym_accumType_token11] = ACTIONS(1),
    [aux_sym_accumType_token12] = ACTIONS(1),
    [aux_sym_accumType_token14] = ACTIONS(1),
    [aux_sym_accumType_token15] = ACTIONS(1),
    [aux_sym_accumType_token16] = ACTIONS(1),
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
    [aux_sym_logStmt_token1] = ACTIONS(1),
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
    [sym_source_file] = STATE(733),
    [sym_createQuery] = STATE(280),
    [sym_createSignature] = STATE(786),
    [sym_CREATE_VERTEX] = STATE(280),
    [aux_sym_source_file_repeat1] = STATE(280),
    [aux_sym_createSignature_token1] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 40,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_typedef_token1,
    ACTIONS(9), 1,
      aux_sym_CREATE_VERTEX_token1,
    ACTIONS(11), 1,
      aux_sym_accumDeclStmt_token1,
    ACTIONS(13), 1,
      aux_sym_accumType_token1,
    ACTIONS(15), 1,
      aux_sym_accumType_token2,
    ACTIONS(17), 1,
      aux_sym_accumType_token3,
    ACTIONS(19), 1,
      aux_sym_accumType_token4,
    ACTIONS(25), 1,
      aux_sym_accumType_token9,
    ACTIONS(29), 1,
      aux_sym_accumType_token12,
    ACTIONS(31), 1,
      aux_sym_accumType_token15,
    ACTIONS(33), 1,
      aux_sym_accumType_token16,
    ACTIONS(35), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(37), 1,
      aux_sym_fileDeclStmt_token1,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(41), 1,
      aux_sym_printStmt_token1,
    ACTIONS(43), 1,
      aux_sym_logStmt_token1,
    ACTIONS(45), 1,
      aux_sym_returnStmt_token1,
    STATE(3), 1,
      sym_typedefs,
    STATE(5), 1,
      aux_sym_declStmts_repeat1,
    STATE(11), 1,
      aux_sym_typedefs_repeat1,
    STATE(121), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(130), 1,
      sym_declStmts,
    STATE(267), 1,
      sym_name,
    STATE(449), 1,
      sym_baseType,
    STATE(451), 1,
      sym_accumType,
    STATE(619), 1,
      sym_vertexSetName,
    STATE(621), 1,
      sym_gsqlSelectClause,
    STATE(760), 1,
      sym_gsqlSelectBlock,
    STATE(763), 1,
      sym_queryBodyStmt,
    STATE(764), 1,
      sym_queryBodyStmts,
    STATE(765), 1,
      sym_declStmt,
    STATE(766), 1,
      sym_typedef,
    STATE(768), 1,
      sym_queryBody,
    ACTIONS(23), 2,
      aux_sym_accumType_token7,
      aux_sym_accumType_token8,
    ACTIONS(27), 2,
      aux_sym_accumType_token10,
      aux_sym_accumType_token11,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(762), 3,
      sym_accumDeclStmt,
      sym_baseDeclStmt,
      sym_fileDeclStmt,
    STATE(761), 6,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_logStmt,
      sym_returnStmt,
      sym_selectStmt,
    ACTIONS(21), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [137] = 35,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_CREATE_VERTEX_token1,
    ACTIONS(11), 1,
      aux_sym_accumDeclStmt_token1,
    ACTIONS(13), 1,
      aux_sym_accumType_token1,
    ACTIONS(15), 1,
      aux_sym_accumType_token2,
    ACTIONS(17), 1,
      aux_sym_accumType_token3,
    ACTIONS(19), 1,
      aux_sym_accumType_token4,
    ACTIONS(25), 1,
      aux_sym_accumType_token9,
    ACTIONS(29), 1,
      aux_sym_accumType_token12,
    ACTIONS(31), 1,
      aux_sym_accumType_token15,
    ACTIONS(33), 1,
      aux_sym_accumType_token16,
    ACTIONS(35), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(37), 1,
      aux_sym_fileDeclStmt_token1,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(41), 1,
      aux_sym_printStmt_token1,
    ACTIONS(43), 1,
      aux_sym_logStmt_token1,
    ACTIONS(45), 1,
      aux_sym_returnStmt_token1,
    STATE(5), 1,
      aux_sym_declStmts_repeat1,
    STATE(111), 1,
      sym_declStmts,
    STATE(121), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(267), 1,
      sym_name,
    STATE(449), 1,
      sym_baseType,
    STATE(451), 1,
      sym_accumType,
    STATE(619), 1,
      sym_vertexSetName,
    STATE(621), 1,
      sym_gsqlSelectClause,
    STATE(745), 1,
      sym_queryBodyStmts,
    STATE(760), 1,
      sym_gsqlSelectBlock,
    STATE(763), 1,
      sym_queryBodyStmt,
    STATE(765), 1,
      sym_declStmt,
    ACTIONS(23), 2,
      aux_sym_accumType_token7,
      aux_sym_accumType_token8,
    ACTIONS(27), 2,
      aux_sym_accumType_token10,
      aux_sym_accumType_token11,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(762), 3,
      sym_accumDeclStmt,
      sym_baseDeclStmt,
      sym_fileDeclStmt,
    STATE(761), 6,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_logStmt,
      sym_returnStmt,
      sym_selectStmt,
    ACTIONS(21), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [259] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      aux_sym_CREATE_VERTEX_token1,
    ACTIONS(52), 1,
      aux_sym_accumDeclStmt_token1,
    ACTIONS(55), 1,
      aux_sym_accumType_token1,
    ACTIONS(58), 1,
      aux_sym_accumType_token2,
    ACTIONS(61), 1,
      aux_sym_accumType_token3,
    ACTIONS(64), 1,
      aux_sym_accumType_token4,
    ACTIONS(73), 1,
      aux_sym_accumType_token9,
    ACTIONS(79), 1,
      aux_sym_accumType_token12,
    ACTIONS(82), 1,
      aux_sym_accumType_token15,
    ACTIONS(85), 1,
      aux_sym_accumType_token16,
    ACTIONS(90), 1,
      aux_sym_fileDeclStmt_token1,
    STATE(4), 1,
      aux_sym_declStmts_repeat1,
    STATE(449), 1,
      sym_baseType,
    STATE(451), 1,
      sym_accumType,
    STATE(765), 1,
      sym_declStmt,
    ACTIONS(70), 2,
      aux_sym_accumType_token7,
      aux_sym_accumType_token8,
    ACTIONS(76), 2,
      aux_sym_accumType_token10,
      aux_sym_accumType_token11,
    ACTIONS(93), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(762), 3,
      sym_accumDeclStmt,
      sym_baseDeclStmt,
      sym_fileDeclStmt,
    ACTIONS(88), 5,
      aux_sym_queryBodyIfStmt_token1,
      anon_sym__,
      aux_sym_printStmt_token1,
      aux_sym_logStmt_token1,
      aux_sym_returnStmt_token1,
    ACTIONS(67), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [341] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_CREATE_VERTEX_token1,
    ACTIONS(11), 1,
      aux_sym_accumDeclStmt_token1,
    ACTIONS(13), 1,
      aux_sym_accumType_token1,
    ACTIONS(15), 1,
      aux_sym_accumType_token2,
    ACTIONS(17), 1,
      aux_sym_accumType_token3,
    ACTIONS(19), 1,
      aux_sym_accumType_token4,
    ACTIONS(25), 1,
      aux_sym_accumType_token9,
    ACTIONS(29), 1,
      aux_sym_accumType_token12,
    ACTIONS(31), 1,
      aux_sym_accumType_token15,
    ACTIONS(33), 1,
      aux_sym_accumType_token16,
    ACTIONS(37), 1,
      aux_sym_fileDeclStmt_token1,
    STATE(4), 1,
      aux_sym_declStmts_repeat1,
    STATE(449), 1,
      sym_baseType,
    STATE(451), 1,
      sym_accumType,
    STATE(765), 1,
      sym_declStmt,
    ACTIONS(23), 2,
      aux_sym_accumType_token7,
      aux_sym_accumType_token8,
    ACTIONS(27), 2,
      aux_sym_accumType_token10,
      aux_sym_accumType_token11,
    ACTIONS(97), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(762), 3,
      sym_accumDeclStmt,
      sym_baseDeclStmt,
      sym_fileDeclStmt,
    ACTIONS(95), 5,
      aux_sym_queryBodyIfStmt_token1,
      anon_sym__,
      aux_sym_printStmt_token1,
      aux_sym_logStmt_token1,
      aux_sym_returnStmt_token1,
    ACTIONS(21), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [423] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 5,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PLUS,
    ACTIONS(99), 30,
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
  [466] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 5,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PLUS,
    ACTIONS(103), 29,
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
  [508] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_DOT,
    ACTIONS(113), 1,
      aux_sym_integer_token1,
    STATE(10), 1,
      aux_sym_integer_repeat1,
    ACTIONS(109), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(107), 27,
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
  [555] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      aux_sym_integer_token1,
    ACTIONS(119), 1,
      anon_sym_DOT,
    STATE(10), 1,
      aux_sym_integer_repeat1,
    ACTIONS(117), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(115), 27,
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
  [602] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      aux_sym_integer_token1,
    STATE(10), 1,
      aux_sym_integer_repeat1,
    ACTIONS(123), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(121), 28,
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
  [647] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_typedef_token1,
    STATE(14), 1,
      aux_sym_typedefs_repeat1,
    STATE(766), 1,
      sym_typedef,
    ACTIONS(130), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(128), 27,
      aux_sym_CREATE_VERTEX_token1,
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
      aux_sym_accumType_token11,
      aux_sym_accumType_token12,
      aux_sym_accumType_token15,
      aux_sym_accumType_token16,
      aux_sym_queryBodyIfStmt_token1,
      aux_sym_fileDeclStmt_token1,
      anon_sym__,
      aux_sym_printStmt_token1,
      aux_sym_logStmt_token1,
      aux_sym_returnStmt_token1,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [693] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      aux_sym_integer_token1,
    STATE(15), 1,
      aux_sym_integer_repeat1,
    ACTIONS(134), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(132), 27,
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
  [737] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      aux_sym_integer_token1,
    STATE(10), 1,
      aux_sym_integer_repeat1,
    ACTIONS(134), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(132), 27,
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
  [781] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      aux_sym_typedef_token1,
    STATE(14), 1,
      aux_sym_typedefs_repeat1,
    STATE(766), 1,
      sym_typedef,
    ACTIONS(143), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(141), 27,
      aux_sym_CREATE_VERTEX_token1,
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
      aux_sym_accumType_token11,
      aux_sym_accumType_token12,
      aux_sym_accumType_token15,
      aux_sym_accumType_token16,
      aux_sym_queryBodyIfStmt_token1,
      aux_sym_fileDeclStmt_token1,
      anon_sym__,
      aux_sym_printStmt_token1,
      aux_sym_logStmt_token1,
      aux_sym_returnStmt_token1,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [827] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      aux_sym_integer_token1,
    STATE(10), 1,
      aux_sym_integer_repeat1,
    ACTIONS(147), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(145), 27,
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
  [871] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      aux_sym_integer_token1,
    STATE(10), 1,
      aux_sym_integer_repeat1,
    ACTIONS(151), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(149), 27,
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
  [915] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(153), 28,
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
  [955] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      aux_sym_integer_token1,
    STATE(13), 1,
      aux_sym_integer_repeat1,
    ACTIONS(151), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(149), 27,
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
  [999] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_SQUOTE,
    ACTIONS(162), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(159), 27,
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
    ACTIONS(169), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(167), 27,
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
    ACTIONS(162), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(159), 27,
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
    ACTIONS(173), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(171), 27,
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
    ACTIONS(177), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(175), 27,
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
    ACTIONS(182), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(179), 27,
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
    ACTIONS(187), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(185), 27,
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
  [1268] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(189), 27,
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
  [1306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(193), 27,
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
  [1344] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(141), 28,
      aux_sym_typedef_token1,
      aux_sym_CREATE_VERTEX_token1,
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
      aux_sym_accumType_token11,
      aux_sym_accumType_token12,
      aux_sym_accumType_token15,
      aux_sym_accumType_token16,
      aux_sym_queryBodyIfStmt_token1,
      aux_sym_fileDeclStmt_token1,
      anon_sym__,
      aux_sym_printStmt_token1,
      aux_sym_logStmt_token1,
      aux_sym_returnStmt_token1,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [1382] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(197), 27,
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
  [1420] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(34), 1,
      aux_sym_name_repeat1,
    ACTIONS(205), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(207), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(203), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(201), 21,
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
  [1463] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(37), 1,
      aux_sym_name_repeat1,
    ACTIONS(209), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(211), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(203), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(201), 21,
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
  [1506] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(32), 1,
      aux_sym_name_repeat1,
    ACTIONS(217), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(220), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(215), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(213), 21,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [1549] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(32), 1,
      aux_sym_name_repeat1,
    ACTIONS(227), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(229), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(225), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(223), 21,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [1592] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_name_repeat1,
    ACTIONS(231), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(233), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(225), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(223), 21,
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
  [1635] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(88), 27,
      aux_sym_CREATE_VERTEX_token1,
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
      aux_sym_accumType_token11,
      aux_sym_accumType_token12,
      aux_sym_accumType_token15,
      aux_sym_accumType_token16,
      aux_sym_queryBodyIfStmt_token1,
      aux_sym_fileDeclStmt_token1,
      anon_sym__,
      aux_sym_printStmt_token1,
      aux_sym_logStmt_token1,
      aux_sym_returnStmt_token1,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [1672] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_name_repeat1,
    ACTIONS(235), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(238), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(215), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(213), 21,
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
  [1715] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(38), 1,
      aux_sym_name_repeat1,
    ACTIONS(241), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(243), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(225), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(223), 21,
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
  [1758] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(38), 1,
      aux_sym_name_repeat1,
    ACTIONS(245), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(248), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(215), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(213), 21,
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
  [1801] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(33), 1,
      aux_sym_name_repeat1,
    ACTIONS(251), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(253), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(203), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(201), 21,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [1844] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_CREATE_VERTEX_token1,
    ACTIONS(13), 1,
      aux_sym_accumType_token1,
    ACTIONS(15), 1,
      aux_sym_accumType_token2,
    ACTIONS(17), 1,
      aux_sym_accumType_token3,
    ACTIONS(19), 1,
      aux_sym_accumType_token4,
    ACTIONS(25), 1,
      aux_sym_accumType_token9,
    ACTIONS(29), 1,
      aux_sym_accumType_token12,
    ACTIONS(31), 1,
      aux_sym_accumType_token15,
    ACTIONS(33), 1,
      aux_sym_accumType_token16,
    ACTIONS(255), 1,
      aux_sym_accumType_token5,
    ACTIONS(257), 1,
      anon_sym__,
    STATE(363), 1,
      sym_name,
    STATE(738), 1,
      sym_type,
    ACTIONS(23), 2,
      aux_sym_accumType_token7,
      aux_sym_accumType_token8,
    ACTIONS(27), 2,
      aux_sym_accumType_token10,
      aux_sym_accumType_token11,
    ACTIONS(259), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(459), 3,
      sym_accumType,
      sym_tupleType,
      sym_baseType,
    ACTIONS(21), 6,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [1912] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(44), 1,
      aux_sym_name_repeat1,
    ACTIONS(261), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(263), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(203), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(201), 20,
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
  [1954] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_CREATE_VERTEX_token1,
    ACTIONS(13), 1,
      aux_sym_accumType_token1,
    ACTIONS(15), 1,
      aux_sym_accumType_token2,
    ACTIONS(17), 1,
      aux_sym_accumType_token3,
    ACTIONS(19), 1,
      aux_sym_accumType_token4,
    ACTIONS(25), 1,
      aux_sym_accumType_token9,
    ACTIONS(29), 1,
      aux_sym_accumType_token12,
    ACTIONS(31), 1,
      aux_sym_accumType_token15,
    ACTIONS(33), 1,
      aux_sym_accumType_token16,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(255), 1,
      aux_sym_accumType_token5,
    STATE(363), 1,
      sym_name,
    STATE(585), 1,
      sym_type,
    ACTIONS(23), 2,
      aux_sym_accumType_token7,
      aux_sym_accumType_token8,
    ACTIONS(27), 2,
      aux_sym_accumType_token10,
      aux_sym_accumType_token11,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(459), 3,
      sym_accumType,
      sym_tupleType,
      sym_baseType,
    ACTIONS(21), 6,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [2022] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_accumType_token1,
    ACTIONS(25), 1,
      aux_sym_accumType_token9,
    ACTIONS(29), 1,
      aux_sym_accumType_token12,
    ACTIONS(31), 1,
      aux_sym_accumType_token15,
    ACTIONS(33), 1,
      aux_sym_accumType_token16,
    ACTIONS(255), 1,
      aux_sym_accumType_token5,
    ACTIONS(265), 1,
      aux_sym_CREATE_VERTEX_token1,
    ACTIONS(267), 1,
      aux_sym_accumType_token2,
    ACTIONS(269), 1,
      aux_sym_accumType_token3,
    ACTIONS(271), 1,
      aux_sym_accumType_token4,
    ACTIONS(273), 1,
      anon_sym__,
    STATE(363), 1,
      sym_name,
    STATE(471), 1,
      sym_type,
    ACTIONS(23), 2,
      aux_sym_accumType_token7,
      aux_sym_accumType_token8,
    ACTIONS(27), 2,
      aux_sym_accumType_token10,
      aux_sym_accumType_token11,
    ACTIONS(275), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(459), 3,
      sym_accumType,
      sym_tupleType,
      sym_baseType,
    ACTIONS(277), 6,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [2090] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(45), 1,
      aux_sym_name_repeat1,
    ACTIONS(279), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(281), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(225), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(223), 20,
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
  [2132] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(45), 1,
      aux_sym_name_repeat1,
    ACTIONS(283), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(286), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(215), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(213), 20,
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
  [2174] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_CREATE_VERTEX_token1,
    ACTIONS(13), 1,
      aux_sym_accumType_token1,
    ACTIONS(15), 1,
      aux_sym_accumType_token2,
    ACTIONS(17), 1,
      aux_sym_accumType_token3,
    ACTIONS(19), 1,
      aux_sym_accumType_token4,
    ACTIONS(25), 1,
      aux_sym_accumType_token9,
    ACTIONS(29), 1,
      aux_sym_accumType_token12,
    ACTIONS(31), 1,
      aux_sym_accumType_token15,
    ACTIONS(33), 1,
      aux_sym_accumType_token16,
    ACTIONS(257), 1,
      anon_sym__,
    STATE(363), 1,
      sym_name,
    ACTIONS(23), 2,
      aux_sym_accumType_token7,
      aux_sym_accumType_token8,
    ACTIONS(27), 2,
      aux_sym_accumType_token10,
      aux_sym_accumType_token11,
    ACTIONS(259), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(656), 3,
      sym_accumType,
      sym_tupleType,
      sym_baseType,
    ACTIONS(21), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [2237] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(49), 1,
      aux_sym_name_repeat1,
    ACTIONS(203), 2,
      anon_sym_SLASH,
      anon_sym_PLUS,
    ACTIONS(289), 4,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(201), 19,
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
  [2275] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_name_repeat1,
    ACTIONS(215), 2,
      anon_sym_SLASH,
      anon_sym_PLUS,
    ACTIONS(291), 4,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(213), 19,
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
  [2313] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_name_repeat1,
    ACTIONS(225), 2,
      anon_sym_SLASH,
      anon_sym_PLUS,
    ACTIONS(294), 4,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(223), 19,
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
  [2351] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(52), 1,
      aux_sym_name_repeat1,
    ACTIONS(296), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(298), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(201), 20,
      aux_sym_CREATE_VERTEX_token1,
      aux_sym_accumType_token1,
      aux_sym_accumType_token2,
      aux_sym_accumType_token3,
      aux_sym_accumType_token4,
      aux_sym_accumType_token5,
      aux_sym_accumType_token7,
      aux_sym_accumType_token8,
      aux_sym_accumType_token9,
      aux_sym_accumType_token10,
      aux_sym_accumType_token11,
      aux_sym_accumType_token12,
      aux_sym_accumType_token15,
      aux_sym_accumType_token16,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [2388] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(51), 1,
      aux_sym_name_repeat1,
    ACTIONS(300), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(303), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(213), 20,
      aux_sym_CREATE_VERTEX_token1,
      aux_sym_accumType_token1,
      aux_sym_accumType_token2,
      aux_sym_accumType_token3,
      aux_sym_accumType_token4,
      aux_sym_accumType_token5,
      aux_sym_accumType_token7,
      aux_sym_accumType_token8,
      aux_sym_accumType_token9,
      aux_sym_accumType_token10,
      aux_sym_accumType_token11,
      aux_sym_accumType_token12,
      aux_sym_accumType_token15,
      aux_sym_accumType_token16,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [2425] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(51), 1,
      aux_sym_name_repeat1,
    ACTIONS(306), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(308), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(223), 20,
      aux_sym_CREATE_VERTEX_token1,
      aux_sym_accumType_token1,
      aux_sym_accumType_token2,
      aux_sym_accumType_token3,
      aux_sym_accumType_token4,
      aux_sym_accumType_token5,
      aux_sym_accumType_token7,
      aux_sym_accumType_token8,
      aux_sym_accumType_token9,
      aux_sym_accumType_token10,
      aux_sym_accumType_token11,
      aux_sym_accumType_token12,
      aux_sym_accumType_token15,
      aux_sym_accumType_token16,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [2462] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_SLASH,
    ACTIONS(318), 1,
      aux_sym_condition_token1,
    ACTIONS(320), 1,
      aux_sym_condition_token2,
    ACTIONS(322), 1,
      aux_sym_condition_token3,
    STATE(89), 1,
      sym_comparisonOperator,
    STATE(109), 1,
      sym_mathOperator,
    ACTIONS(312), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(310), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AND,
      anon_sym_OR,
    ACTIONS(324), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(314), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [2510] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_SLASH,
    ACTIONS(322), 1,
      aux_sym_condition_token3,
    ACTIONS(326), 1,
      aux_sym_condition_token1,
    ACTIONS(328), 1,
      aux_sym_condition_token2,
    STATE(102), 1,
      sym_comparisonOperator,
    STATE(108), 1,
      sym_mathOperator,
    ACTIONS(312), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(310), 4,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_perClauseV2_token1,
    ACTIONS(324), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(314), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [2558] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      anon_sym_AT_AT,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(340), 1,
      anon_sym__,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_integer_token1,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(156), 1,
      sym_name,
    STATE(160), 1,
      sym_expr,
    STATE(391), 1,
      sym_vExprSet,
    STATE(392), 1,
      sym_printExpr,
    STATE(447), 1,
      sym_tableName,
    ACTIONS(332), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(346), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [2624] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      anon_sym_AT_AT,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(340), 1,
      anon_sym__,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_integer_token1,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(156), 1,
      sym_name,
    STATE(160), 1,
      sym_expr,
    STATE(391), 1,
      sym_vExprSet,
    STATE(433), 1,
      sym_printExpr,
    STATE(447), 1,
      sym_tableName,
    ACTIONS(332), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(346), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [2690] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_SLASH,
    ACTIONS(322), 1,
      aux_sym_condition_token3,
    ACTIONS(348), 1,
      aux_sym_condition_token1,
    ACTIONS(350), 1,
      aux_sym_condition_token2,
    STATE(100), 1,
      sym_mathOperator,
    STATE(107), 1,
      sym_comparisonOperator,
    ACTIONS(312), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(310), 4,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_printStmt_token3,
    ACTIONS(324), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(314), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [2738] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_SLASH,
    STATE(109), 1,
      sym_mathOperator,
    ACTIONS(354), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(356), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(352), 11,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2775] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_DOT,
    ACTIONS(182), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(179), 19,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [2808] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_SLASH,
    ACTIONS(322), 1,
      aux_sym_condition_token3,
    ACTIONS(364), 1,
      aux_sym_condition_token1,
    ACTIONS(366), 1,
      aux_sym_condition_token2,
    STATE(95), 1,
      sym_comparisonOperator,
    STATE(97), 1,
      sym_mathOperator,
    ACTIONS(312), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(310), 3,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_queryBodyIfStmt_token2,
    ACTIONS(324), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(314), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [2855] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_DOT,
    ACTIONS(182), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(179), 19,
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
  [2888] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_SLASH,
    STATE(108), 1,
      sym_mathOperator,
    ACTIONS(354), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(356), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(352), 11,
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
  [2925] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_DOT,
    ACTIONS(182), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(179), 19,
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
  [2958] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_SLASH,
    STATE(100), 1,
      sym_mathOperator,
    ACTIONS(354), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(356), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(352), 11,
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
  [2995] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_integer_token1,
    ACTIONS(372), 1,
      anon_sym_AT_AT,
    ACTIONS(374), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(54), 1,
      sym_expr,
    STATE(61), 1,
      sym_name,
    STATE(462), 1,
      sym_condition,
    ACTIONS(332), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(376), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [3055] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_CREATE_VERTEX_token1,
    ACTIONS(13), 1,
      aux_sym_accumType_token1,
    ACTIONS(15), 1,
      aux_sym_accumType_token2,
    ACTIONS(17), 1,
      aux_sym_accumType_token3,
    ACTIONS(19), 1,
      aux_sym_accumType_token4,
    ACTIONS(25), 1,
      aux_sym_accumType_token9,
    ACTIONS(29), 1,
      aux_sym_accumType_token12,
    ACTIONS(31), 1,
      aux_sym_accumType_token15,
    ACTIONS(33), 1,
      aux_sym_accumType_token16,
    ACTIONS(23), 2,
      aux_sym_accumType_token7,
      aux_sym_accumType_token8,
    ACTIONS(27), 2,
      aux_sym_accumType_token10,
      aux_sym_accumType_token11,
    STATE(641), 2,
      sym_accumType,
      sym_baseType,
    ACTIONS(21), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [3107] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_integer_token1,
    ACTIONS(378), 1,
      anon_sym_AT_AT,
    ACTIONS(380), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(57), 1,
      sym_expr,
    STATE(63), 1,
      sym_name,
    STATE(463), 1,
      sym_condition,
    ACTIONS(332), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(382), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [3167] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_integer_token1,
    ACTIONS(378), 1,
      anon_sym_AT_AT,
    ACTIONS(380), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(57), 1,
      sym_expr,
    STATE(63), 1,
      sym_name,
    STATE(466), 1,
      sym_condition,
    ACTIONS(332), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(382), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [3227] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_integer_token1,
    ACTIONS(384), 1,
      anon_sym_AT_AT,
    ACTIONS(386), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(60), 1,
      sym_expr,
    STATE(86), 1,
      sym_name,
    STATE(536), 1,
      sym_condition,
    ACTIONS(332), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(388), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [3287] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_integer_token1,
    ACTIONS(390), 1,
      anon_sym_AT_AT,
    ACTIONS(392), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(53), 1,
      sym_expr,
    STATE(59), 1,
      sym_name,
    STATE(444), 1,
      sym_condition,
    ACTIONS(332), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(394), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [3347] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_integer_token1,
    ACTIONS(390), 1,
      anon_sym_AT_AT,
    ACTIONS(392), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(53), 1,
      sym_expr,
    STATE(59), 1,
      sym_name,
    STATE(503), 1,
      sym_condition,
    ACTIONS(332), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(394), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [3407] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_integer_token1,
    ACTIONS(372), 1,
      anon_sym_AT_AT,
    ACTIONS(374), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(54), 1,
      sym_expr,
    STATE(61), 1,
      sym_name,
    STATE(435), 1,
      sym_condition,
    ACTIONS(332), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(376), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [3467] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_SLASH,
    STATE(97), 1,
      sym_mathOperator,
    ACTIONS(354), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(356), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(352), 10,
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
  [3503] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_SLASH,
    STATE(75), 1,
      aux_sym_name_repeat1,
    ACTIONS(396), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(398), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(223), 16,
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
  [3539] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_SLASH,
    STATE(75), 1,
      aux_sym_name_repeat1,
    ACTIONS(400), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(403), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(213), 16,
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
  [3575] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_integer_token1,
    ACTIONS(384), 1,
      anon_sym_AT_AT,
    ACTIONS(386), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(60), 1,
      sym_expr,
    STATE(86), 1,
      sym_name,
    STATE(482), 1,
      sym_condition,
    ACTIONS(332), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(388), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [3635] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_integer_token1,
    ACTIONS(406), 1,
      anon_sym_AT_AT,
    ACTIONS(408), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(176), 1,
      sym_name,
    STATE(183), 1,
      sym_expr,
    STATE(600), 1,
      sym_vSetProj,
    ACTIONS(332), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(410), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [3695] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_SLASH,
    STATE(74), 1,
      aux_sym_name_repeat1,
    ACTIONS(412), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(414), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(201), 16,
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
  [3731] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_integer_token1,
    ACTIONS(416), 1,
      anon_sym_AT_AT,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(174), 1,
      sym_expr,
    STATE(185), 1,
      sym_name,
    STATE(649), 1,
      sym_argList,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(332), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [3791] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_integer_token1,
    ACTIONS(384), 1,
      anon_sym_AT_AT,
    ACTIONS(386), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(60), 1,
      sym_expr,
    STATE(86), 1,
      sym_name,
    STATE(489), 1,
      sym_condition,
    ACTIONS(332), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(388), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [3851] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_integer_token1,
    ACTIONS(384), 1,
      anon_sym_AT_AT,
    ACTIONS(386), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(60), 1,
      sym_expr,
    STATE(86), 1,
      sym_name,
    STATE(540), 1,
      sym_condition,
    ACTIONS(332), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(388), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [3911] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_integer_token1,
    ACTIONS(416), 1,
      anon_sym_AT_AT,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(174), 1,
      sym_expr,
    STATE(185), 1,
      sym_name,
    STATE(732), 1,
      sym_argList,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(332), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [3971] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_integer_token1,
    ACTIONS(390), 1,
      anon_sym_AT_AT,
    ACTIONS(392), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(53), 1,
      sym_expr,
    STATE(59), 1,
      sym_name,
    STATE(504), 1,
      sym_condition,
    ACTIONS(332), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(394), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [4031] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_integer_token1,
    ACTIONS(406), 1,
      anon_sym_AT_AT,
    ACTIONS(408), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(176), 1,
      sym_name,
    STATE(183), 1,
      sym_expr,
    STATE(547), 1,
      sym_vSetProj,
    ACTIONS(332), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(410), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [4091] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_integer_token1,
    ACTIONS(378), 1,
      anon_sym_AT_AT,
    ACTIONS(380), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(57), 1,
      sym_expr,
    STATE(63), 1,
      sym_name,
    STATE(436), 1,
      sym_condition,
    ACTIONS(332), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(382), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [4151] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_DOT,
    ACTIONS(182), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(179), 18,
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
  [4183] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_integer_token1,
    ACTIONS(416), 1,
      anon_sym_AT_AT,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(185), 1,
      sym_name,
    STATE(216), 1,
      sym_expr,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(332), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [4240] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_integer_token1,
    ACTIONS(420), 1,
      anon_sym_AT_AT,
    ACTIONS(422), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(162), 1,
      sym_name,
    STATE(164), 1,
      sym_expr,
    ACTIONS(332), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(424), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [4297] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_integer_token1,
    ACTIONS(420), 1,
      anon_sym_AT_AT,
    ACTIONS(422), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(162), 1,
      sym_name,
    STATE(165), 1,
      sym_expr,
    ACTIONS(332), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(424), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [4354] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      anon_sym_AT_AT,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(340), 1,
      anon_sym__,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_integer_token1,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(151), 1,
      sym_name,
    STATE(153), 1,
      sym_expr,
    ACTIONS(332), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(346), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [4411] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_integer_token1,
    ACTIONS(416), 1,
      anon_sym_AT_AT,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(185), 1,
      sym_name,
    STATE(192), 1,
      sym_expr,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(332), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [4468] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_integer_token1,
    ACTIONS(426), 1,
      anon_sym_AT_AT,
    ACTIONS(428), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(179), 1,
      sym_name,
    STATE(182), 1,
      sym_expr,
    ACTIONS(332), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(430), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [4525] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(437), 1,
      anon_sym__,
    ACTIONS(440), 1,
      aux_sym_printStmt_token1,
    ACTIONS(443), 1,
      aux_sym_logStmt_token1,
    ACTIONS(446), 1,
      aux_sym_returnStmt_token1,
    STATE(93), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(267), 1,
      sym_name,
    STATE(619), 1,
      sym_vertexSetName,
    STATE(621), 1,
      sym_gsqlSelectClause,
    STATE(692), 1,
      sym_queryBodyStmt,
    STATE(760), 1,
      sym_gsqlSelectBlock,
    ACTIONS(435), 2,
      aux_sym_queryBodyIfStmt_token3,
      aux_sym_queryBodyIfStmt_token4,
    ACTIONS(449), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(761), 6,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_logStmt,
      sym_returnStmt,
      sym_selectStmt,
  [4578] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_integer_token1,
    ACTIONS(416), 1,
      anon_sym_AT_AT,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(172), 1,
      sym_expr,
    STATE(185), 1,
      sym_name,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(332), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [4635] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_integer_token1,
    ACTIONS(452), 1,
      anon_sym_AT_AT,
    ACTIONS(454), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(175), 1,
      sym_expr,
    STATE(178), 1,
      sym_name,
    ACTIONS(332), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(456), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [4692] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_integer_token1,
    ACTIONS(416), 1,
      anon_sym_AT_AT,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(185), 1,
      sym_name,
    STATE(189), 1,
      sym_expr,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(332), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [4749] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_integer_token1,
    ACTIONS(384), 1,
      anon_sym_AT_AT,
    ACTIONS(386), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(73), 1,
      sym_expr,
    STATE(86), 1,
      sym_name,
    ACTIONS(332), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(388), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [4806] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_integer_token1,
    ACTIONS(426), 1,
      anon_sym_AT_AT,
    ACTIONS(428), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(171), 1,
      sym_expr,
    STATE(179), 1,
      sym_name,
    ACTIONS(332), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(430), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [4863] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_integer_token1,
    ACTIONS(426), 1,
      anon_sym_AT_AT,
    ACTIONS(428), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(179), 1,
      sym_name,
    STATE(181), 1,
      sym_expr,
    ACTIONS(332), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(430), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [4920] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_integer_token1,
    ACTIONS(378), 1,
      anon_sym_AT_AT,
    ACTIONS(380), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(63), 1,
      sym_name,
    STATE(64), 1,
      sym_expr,
    ACTIONS(332), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(382), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [4977] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_integer_token1,
    ACTIONS(458), 1,
      anon_sym_AT_AT,
    ACTIONS(460), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(168), 1,
      sym_expr,
    STATE(170), 1,
      sym_name,
    ACTIONS(332), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(462), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [5034] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_integer_token1,
    ACTIONS(464), 1,
      anon_sym_AT_AT,
    ACTIONS(466), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(163), 1,
      sym_expr,
    STATE(167), 1,
      sym_name,
    ACTIONS(332), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(468), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [5091] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_integer_token1,
    ACTIONS(426), 1,
      anon_sym_AT_AT,
    ACTIONS(428), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(173), 1,
      sym_expr,
    STATE(179), 1,
      sym_name,
    ACTIONS(332), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(430), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [5148] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(41), 1,
      aux_sym_printStmt_token1,
    ACTIONS(43), 1,
      aux_sym_logStmt_token1,
    ACTIONS(45), 1,
      aux_sym_returnStmt_token1,
    STATE(93), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(267), 1,
      sym_name,
    STATE(619), 1,
      sym_vertexSetName,
    STATE(621), 1,
      sym_gsqlSelectClause,
    STATE(692), 1,
      sym_queryBodyStmt,
    STATE(760), 1,
      sym_gsqlSelectBlock,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(470), 2,
      aux_sym_queryBodyIfStmt_token3,
      aux_sym_queryBodyIfStmt_token4,
    STATE(761), 6,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_logStmt,
      sym_returnStmt,
      sym_selectStmt,
  [5201] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_integer_token1,
    ACTIONS(452), 1,
      anon_sym_AT_AT,
    ACTIONS(454), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(177), 1,
      sym_expr,
    STATE(178), 1,
      sym_name,
    ACTIONS(332), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(456), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [5258] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_integer_token1,
    ACTIONS(464), 1,
      anon_sym_AT_AT,
    ACTIONS(466), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(166), 1,
      sym_expr,
    STATE(167), 1,
      sym_name,
    ACTIONS(332), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(468), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [5315] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_integer_token1,
    ACTIONS(458), 1,
      anon_sym_AT_AT,
    ACTIONS(460), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(169), 1,
      sym_expr,
    STATE(170), 1,
      sym_name,
    ACTIONS(332), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(462), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [5372] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_integer_token1,
    ACTIONS(372), 1,
      anon_sym_AT_AT,
    ACTIONS(374), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(61), 1,
      sym_name,
    STATE(62), 1,
      sym_expr,
    ACTIONS(332), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(376), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [5429] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_integer_token1,
    ACTIONS(390), 1,
      anon_sym_AT_AT,
    ACTIONS(392), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(58), 1,
      sym_expr,
    STATE(59), 1,
      sym_name,
    ACTIONS(332), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(394), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [5486] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_integer_token1,
    ACTIONS(406), 1,
      anon_sym_AT_AT,
    ACTIONS(408), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(176), 1,
      sym_name,
    STATE(184), 1,
      sym_expr,
    ACTIONS(332), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(410), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [5543] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(41), 1,
      aux_sym_printStmt_token1,
    ACTIONS(43), 1,
      aux_sym_logStmt_token1,
    ACTIONS(45), 1,
      aux_sym_returnStmt_token1,
    STATE(121), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(267), 1,
      sym_name,
    STATE(619), 1,
      sym_vertexSetName,
    STATE(621), 1,
      sym_gsqlSelectClause,
    STATE(727), 1,
      sym_queryBodyStmts,
    STATE(760), 1,
      sym_gsqlSelectBlock,
    STATE(763), 1,
      sym_queryBodyStmt,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(761), 6,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_logStmt,
      sym_returnStmt,
      sym_selectStmt,
  [5595] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(41), 1,
      aux_sym_printStmt_token1,
    ACTIONS(43), 1,
      aux_sym_logStmt_token1,
    ACTIONS(45), 1,
      aux_sym_returnStmt_token1,
    ACTIONS(472), 1,
      aux_sym_queryBodyIfStmt_token1,
    STATE(114), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(267), 1,
      sym_name,
    STATE(619), 1,
      sym_vertexSetName,
    STATE(621), 1,
      sym_gsqlSelectClause,
    STATE(706), 1,
      sym_queryBodyStmt,
    STATE(753), 1,
      sym_queryBodyStmts,
    STATE(760), 1,
      sym_gsqlSelectBlock,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(761), 6,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_logStmt,
      sym_returnStmt,
      sym_selectStmt,
  [5647] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_SLASH,
    STATE(122), 1,
      aux_sym_name_repeat1,
    ACTIONS(474), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(476), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(201), 14,
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
  [5681] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(41), 1,
      aux_sym_printStmt_token1,
    ACTIONS(43), 1,
      aux_sym_logStmt_token1,
    ACTIONS(45), 1,
      aux_sym_returnStmt_token1,
    ACTIONS(470), 1,
      aux_sym_queryBodyIfStmt_token4,
    STATE(119), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(267), 1,
      sym_name,
    STATE(619), 1,
      sym_vertexSetName,
    STATE(621), 1,
      sym_gsqlSelectClause,
    STATE(706), 1,
      sym_queryBodyStmt,
    STATE(760), 1,
      sym_gsqlSelectBlock,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(761), 6,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_logStmt,
      sym_returnStmt,
      sym_selectStmt,
  [5733] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(41), 1,
      aux_sym_printStmt_token1,
    ACTIONS(43), 1,
      aux_sym_logStmt_token1,
    ACTIONS(45), 1,
      aux_sym_returnStmt_token1,
    STATE(104), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(267), 1,
      sym_name,
    STATE(574), 1,
      sym_queryBodyStmts,
    STATE(619), 1,
      sym_vertexSetName,
    STATE(621), 1,
      sym_gsqlSelectClause,
    STATE(692), 1,
      sym_queryBodyStmt,
    STATE(760), 1,
      sym_gsqlSelectBlock,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(761), 6,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_logStmt,
      sym_returnStmt,
      sym_selectStmt,
  [5785] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_SLASH,
    STATE(117), 1,
      aux_sym_name_repeat1,
    ACTIONS(478), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(480), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(223), 14,
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
  [5819] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_SLASH,
    STATE(117), 1,
      aux_sym_name_repeat1,
    ACTIONS(482), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(485), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(213), 14,
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
  [5853] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(41), 1,
      aux_sym_printStmt_token1,
    ACTIONS(43), 1,
      aux_sym_logStmt_token1,
    ACTIONS(45), 1,
      aux_sym_returnStmt_token1,
    STATE(104), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(267), 1,
      sym_name,
    STATE(539), 1,
      sym_queryBodyStmts,
    STATE(619), 1,
      sym_vertexSetName,
    STATE(621), 1,
      sym_gsqlSelectClause,
    STATE(692), 1,
      sym_queryBodyStmt,
    STATE(760), 1,
      sym_gsqlSelectBlock,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(761), 6,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_logStmt,
      sym_returnStmt,
      sym_selectStmt,
  [5905] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(435), 1,
      aux_sym_queryBodyIfStmt_token4,
    ACTIONS(437), 1,
      anon_sym__,
    ACTIONS(440), 1,
      aux_sym_printStmt_token1,
    ACTIONS(443), 1,
      aux_sym_logStmt_token1,
    ACTIONS(446), 1,
      aux_sym_returnStmt_token1,
    STATE(119), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(267), 1,
      sym_name,
    STATE(619), 1,
      sym_vertexSetName,
    STATE(621), 1,
      sym_gsqlSelectClause,
    STATE(706), 1,
      sym_queryBodyStmt,
    STATE(760), 1,
      sym_gsqlSelectBlock,
    ACTIONS(449), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(761), 6,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_logStmt,
      sym_returnStmt,
      sym_selectStmt,
  [5957] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(435), 1,
      anon_sym_RBRACE,
    ACTIONS(437), 1,
      anon_sym__,
    ACTIONS(440), 1,
      aux_sym_printStmt_token1,
    ACTIONS(443), 1,
      aux_sym_logStmt_token1,
    ACTIONS(446), 1,
      aux_sym_returnStmt_token1,
    STATE(120), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(267), 1,
      sym_name,
    STATE(619), 1,
      sym_vertexSetName,
    STATE(621), 1,
      sym_gsqlSelectClause,
    STATE(760), 1,
      sym_gsqlSelectBlock,
    STATE(763), 1,
      sym_queryBodyStmt,
    ACTIONS(449), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(761), 6,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_logStmt,
      sym_returnStmt,
      sym_selectStmt,
  [6009] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(41), 1,
      aux_sym_printStmt_token1,
    ACTIONS(43), 1,
      aux_sym_logStmt_token1,
    ACTIONS(45), 1,
      aux_sym_returnStmt_token1,
    ACTIONS(470), 1,
      anon_sym_RBRACE,
    STATE(120), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(267), 1,
      sym_name,
    STATE(619), 1,
      sym_vertexSetName,
    STATE(621), 1,
      sym_gsqlSelectClause,
    STATE(760), 1,
      sym_gsqlSelectBlock,
    STATE(763), 1,
      sym_queryBodyStmt,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(761), 6,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_logStmt,
      sym_returnStmt,
      sym_selectStmt,
  [6061] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_SLASH,
    STATE(124), 1,
      aux_sym_name_repeat1,
    ACTIONS(488), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(490), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(223), 14,
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
  [6095] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_SLASH,
    ACTIONS(494), 1,
      aux_sym_name_token2,
    STATE(126), 1,
      aux_sym_name_repeat1,
    ACTIONS(492), 3,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
    ACTIONS(201), 14,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [6129] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_SLASH,
    STATE(124), 1,
      aux_sym_name_repeat1,
    ACTIONS(496), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(499), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(213), 14,
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
  [6163] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(41), 1,
      aux_sym_printStmt_token1,
    ACTIONS(43), 1,
      aux_sym_logStmt_token1,
    ACTIONS(45), 1,
      aux_sym_returnStmt_token1,
    ACTIONS(472), 1,
      aux_sym_queryBodyIfStmt_token1,
    STATE(114), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(267), 1,
      sym_name,
    STATE(619), 1,
      sym_vertexSetName,
    STATE(621), 1,
      sym_gsqlSelectClause,
    STATE(639), 1,
      sym_queryBodyStmts,
    STATE(706), 1,
      sym_queryBodyStmt,
    STATE(760), 1,
      sym_gsqlSelectBlock,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(761), 6,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_logStmt,
      sym_returnStmt,
      sym_selectStmt,
  [6215] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_SLASH,
    ACTIONS(504), 1,
      aux_sym_name_token2,
    STATE(128), 1,
      aux_sym_name_repeat1,
    ACTIONS(502), 3,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
    ACTIONS(223), 14,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [6249] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(41), 1,
      aux_sym_printStmt_token1,
    ACTIONS(43), 1,
      aux_sym_logStmt_token1,
    ACTIONS(45), 1,
      aux_sym_returnStmt_token1,
    STATE(104), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(267), 1,
      sym_name,
    STATE(542), 1,
      sym_queryBodyStmts,
    STATE(619), 1,
      sym_vertexSetName,
    STATE(621), 1,
      sym_gsqlSelectClause,
    STATE(692), 1,
      sym_queryBodyStmt,
    STATE(760), 1,
      sym_gsqlSelectBlock,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(761), 6,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_logStmt,
      sym_returnStmt,
      sym_selectStmt,
  [6301] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_SLASH,
    ACTIONS(509), 1,
      aux_sym_name_token2,
    STATE(128), 1,
      aux_sym_name_repeat1,
    ACTIONS(506), 3,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
    ACTIONS(213), 14,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [6335] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_SLASH,
    STATE(116), 1,
      aux_sym_name_repeat1,
    ACTIONS(512), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(514), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(201), 14,
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
  [6369] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(41), 1,
      aux_sym_printStmt_token1,
    ACTIONS(43), 1,
      aux_sym_logStmt_token1,
    ACTIONS(45), 1,
      aux_sym_returnStmt_token1,
    STATE(121), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(267), 1,
      sym_name,
    STATE(619), 1,
      sym_vertexSetName,
    STATE(621), 1,
      sym_gsqlSelectClause,
    STATE(745), 1,
      sym_queryBodyStmts,
    STATE(760), 1,
      sym_gsqlSelectBlock,
    STATE(763), 1,
      sym_queryBodyStmt,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(761), 6,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_logStmt,
      sym_returnStmt,
      sym_selectStmt,
  [6421] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_SLASH,
    STATE(140), 1,
      aux_sym_name_repeat1,
    ACTIONS(516), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(518), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(201), 13,
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
  [6454] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_SLASH,
    STATE(132), 1,
      aux_sym_name_repeat1,
    ACTIONS(520), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(523), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(213), 13,
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
  [6487] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_SLASH,
    STATE(139), 1,
      aux_sym_name_repeat1,
    ACTIONS(526), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(528), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(201), 13,
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
  [6520] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_CREATE_VERTEX_token1,
    ACTIONS(15), 1,
      aux_sym_accumType_token2,
    ACTIONS(17), 1,
      aux_sym_accumType_token3,
    ACTIONS(19), 1,
      aux_sym_accumType_token4,
    ACTIONS(530), 1,
      anon_sym_RPAREN,
    ACTIONS(532), 1,
      anon_sym_LT,
    ACTIONS(536), 1,
      anon_sym_FILE,
    STATE(374), 1,
      sym_parameterType,
    STATE(492), 1,
      sym_baseType,
    STATE(716), 1,
      sym_parameterList,
    ACTIONS(534), 2,
      anon_sym_SET,
      anon_sym_BAG,
    ACTIONS(21), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [6567] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_SLASH,
    STATE(135), 1,
      aux_sym_name_repeat1,
    ACTIONS(538), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(541), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(213), 13,
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
  [6600] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_SLASH,
    STATE(136), 1,
      aux_sym_name_repeat1,
    ACTIONS(544), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(547), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(213), 13,
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
  [6633] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_SLASH,
    STATE(141), 1,
      aux_sym_name_repeat1,
    ACTIONS(550), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(552), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(201), 13,
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
  [6666] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_CREATE_VERTEX_token1,
    ACTIONS(15), 1,
      aux_sym_accumType_token2,
    ACTIONS(17), 1,
      aux_sym_accumType_token3,
    ACTIONS(19), 1,
      aux_sym_accumType_token4,
    ACTIONS(532), 1,
      anon_sym_LT,
    ACTIONS(536), 1,
      anon_sym_FILE,
    ACTIONS(554), 1,
      anon_sym_RPAREN,
    STATE(374), 1,
      sym_parameterType,
    STATE(492), 1,
      sym_baseType,
    STATE(671), 1,
      sym_parameterList,
    ACTIONS(534), 2,
      anon_sym_SET,
      anon_sym_BAG,
    ACTIONS(21), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [6713] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_SLASH,
    STATE(132), 1,
      aux_sym_name_repeat1,
    ACTIONS(556), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(558), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(223), 13,
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
  [6746] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_SLASH,
    STATE(136), 1,
      aux_sym_name_repeat1,
    ACTIONS(560), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(562), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(223), 13,
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
  [6779] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_SLASH,
    STATE(135), 1,
      aux_sym_name_repeat1,
    ACTIONS(564), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(566), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(223), 13,
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
  [6812] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_CREATE_VERTEX_token1,
    ACTIONS(15), 1,
      aux_sym_accumType_token2,
    ACTIONS(17), 1,
      aux_sym_accumType_token3,
    ACTIONS(19), 1,
      aux_sym_accumType_token4,
    ACTIONS(532), 1,
      anon_sym_LT,
    ACTIONS(536), 1,
      anon_sym_FILE,
    ACTIONS(568), 1,
      anon_sym_RPAREN,
    STATE(374), 1,
      sym_parameterType,
    STATE(492), 1,
      sym_baseType,
    STATE(741), 1,
      sym_parameterList,
    ACTIONS(534), 2,
      anon_sym_SET,
      anon_sym_BAG,
    ACTIONS(21), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [6859] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_CREATE_VERTEX_token1,
    ACTIONS(15), 1,
      aux_sym_accumType_token2,
    ACTIONS(17), 1,
      aux_sym_accumType_token3,
    ACTIONS(19), 1,
      aux_sym_accumType_token4,
    ACTIONS(532), 1,
      anon_sym_LT,
    ACTIONS(536), 1,
      anon_sym_FILE,
    ACTIONS(570), 1,
      anon_sym_RPAREN,
    STATE(374), 1,
      sym_parameterType,
    STATE(492), 1,
      sym_baseType,
    STATE(634), 1,
      sym_parameterList,
    ACTIONS(534), 2,
      anon_sym_SET,
      anon_sym_BAG,
    ACTIONS(21), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [6906] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_LPAREN,
    ACTIONS(574), 1,
      anon_sym_LT,
    ACTIONS(576), 1,
      anon_sym_AT_AT,
    ACTIONS(578), 1,
      anon_sym__,
    ACTIONS(580), 1,
      aux_sym_seed_token1,
    ACTIONS(582), 1,
      anon_sym_COLON,
    STATE(358), 1,
      sym_edgeSetType,
    STATE(431), 1,
      sym_name,
    STATE(546), 1,
      sym_atomicEdgeType,
    STATE(565), 1,
      sym_atomicEdgePattern,
    STATE(571), 1,
      sym_stepEdgeTypes,
    STATE(690), 1,
      sym_stepEdgeSet,
    STATE(750), 1,
      sym_pathEdgePattern,
    ACTIONS(259), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(450), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_edgeType,
  [6958] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_CREATE_VERTEX_token1,
    ACTIONS(15), 1,
      aux_sym_accumType_token2,
    ACTIONS(17), 1,
      aux_sym_accumType_token3,
    ACTIONS(19), 1,
      aux_sym_accumType_token4,
    ACTIONS(257), 1,
      anon_sym__,
    ACTIONS(584), 1,
      aux_sym_accumType_token5,
    STATE(363), 1,
      sym_name,
    STATE(738), 1,
      sym_elementType,
    ACTIONS(259), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(610), 2,
      sym_tupleType,
      sym_baseType,
    ACTIONS(21), 6,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [7002] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_CREATE_VERTEX_token1,
    ACTIONS(15), 1,
      aux_sym_accumType_token2,
    ACTIONS(17), 1,
      aux_sym_accumType_token3,
    ACTIONS(19), 1,
      aux_sym_accumType_token4,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(584), 1,
      aux_sym_accumType_token5,
    STATE(363), 1,
      sym_name,
    STATE(735), 1,
      sym_elementType,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(610), 2,
      sym_tupleType,
      sym_baseType,
    ACTIONS(21), 6,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [7046] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_CREATE_VERTEX_token1,
    ACTIONS(15), 1,
      aux_sym_accumType_token2,
    ACTIONS(17), 1,
      aux_sym_accumType_token3,
    ACTIONS(19), 1,
      aux_sym_accumType_token4,
    ACTIONS(586), 1,
      anon_sym__,
    STATE(157), 1,
      sym_name,
    STATE(200), 1,
      sym_fieldName,
    STATE(328), 1,
      sym_baseType,
    STATE(707), 1,
      sym_tupleFields,
    ACTIONS(588), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(21), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [7090] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_LPAREN,
    ACTIONS(574), 1,
      anon_sym_LT,
    ACTIONS(576), 1,
      anon_sym_AT_AT,
    ACTIONS(578), 1,
      anon_sym__,
    ACTIONS(580), 1,
      aux_sym_seed_token1,
    ACTIONS(582), 1,
      anon_sym_COLON,
    STATE(431), 1,
      sym_name,
    STATE(546), 1,
      sym_atomicEdgeType,
    STATE(561), 1,
      sym_edgeSetType,
    STATE(565), 1,
      sym_atomicEdgePattern,
    STATE(571), 1,
      sym_stepEdgeTypes,
    STATE(686), 1,
      sym_pathEdgePattern,
    STATE(690), 1,
      sym_stepEdgeSet,
    ACTIONS(259), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(450), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_edgeType,
  [7142] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_CREATE_VERTEX_token1,
    ACTIONS(15), 1,
      aux_sym_accumType_token2,
    ACTIONS(17), 1,
      aux_sym_accumType_token3,
    ACTIONS(19), 1,
      aux_sym_accumType_token4,
    ACTIONS(586), 1,
      anon_sym__,
    STATE(157), 1,
      sym_name,
    STATE(197), 1,
      sym_fieldName,
    STATE(333), 1,
      sym_baseType,
    ACTIONS(588), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(21), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [7183] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_CREATE_VERTEX_token1,
    ACTIONS(15), 1,
      aux_sym_accumType_token2,
    ACTIONS(17), 1,
      aux_sym_accumType_token3,
    ACTIONS(19), 1,
      aux_sym_accumType_token4,
    ACTIONS(532), 1,
      anon_sym_LT,
    ACTIONS(536), 1,
      anon_sym_FILE,
    STATE(388), 1,
      sym_parameterType,
    STATE(492), 1,
      sym_baseType,
    ACTIONS(534), 2,
      anon_sym_SET,
      anon_sym_BAG,
    ACTIONS(21), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [7224] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_SLASH,
    ACTIONS(590), 1,
      anon_sym_DOT,
    ACTIONS(179), 14,
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
  [7250] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_LPAREN,
    ACTIONS(594), 1,
      anon_sym_AT_AT,
    ACTIONS(596), 1,
      anon_sym__,
    ACTIONS(598), 1,
      aux_sym_seed_token1,
    ACTIONS(600), 1,
      anon_sym_COLON,
    STATE(273), 1,
      sym_name,
    STATE(302), 1,
      sym_vertexSetType,
    STATE(314), 1,
      sym_atomicVertexType,
    STATE(315), 1,
      sym_stepVertexTypes,
    STATE(318), 1,
      sym_stepVertexSet,
    STATE(347), 1,
      sym_pathPattern,
    ACTIONS(602), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(269), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexType,
  [7296] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_SLASH,
    STATE(90), 1,
      sym_mathOperator,
    ACTIONS(352), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
    ACTIONS(356), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7324] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(154), 1,
      aux_sym_name_repeat1,
    ACTIONS(604), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(607), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(213), 11,
      aux_sym_CREATE_VERTEX_token1,
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
  [7352] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_LPAREN,
    ACTIONS(594), 1,
      anon_sym_AT_AT,
    ACTIONS(596), 1,
      anon_sym__,
    ACTIONS(598), 1,
      aux_sym_seed_token1,
    ACTIONS(600), 1,
      anon_sym_COLON,
    STATE(273), 1,
      sym_name,
    STATE(302), 1,
      sym_vertexSetType,
    STATE(314), 1,
      sym_atomicVertexType,
    STATE(315), 1,
      sym_stepVertexTypes,
    STATE(318), 1,
      sym_stepVertexSet,
    STATE(461), 1,
      sym_pathPattern,
    ACTIONS(602), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(269), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexType,
  [7398] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_SLASH,
    ACTIONS(590), 1,
      anon_sym_DOT,
    ACTIONS(610), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
    ACTIONS(179), 10,
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
  [7426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 16,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token1,
      aux_sym_accumType_token2,
      aux_sym_accumType_token3,
      aux_sym_accumType_token4,
      aux_sym_accumType_token5,
      aux_sym_accumType_token13,
      aux_sym_accumType_token14,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [7448] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(154), 1,
      aux_sym_name_repeat1,
    ACTIONS(616), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(618), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(223), 11,
      aux_sym_CREATE_VERTEX_token1,
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
  [7476] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(158), 1,
      aux_sym_name_repeat1,
    ACTIONS(620), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(622), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(201), 11,
      aux_sym_CREATE_VERTEX_token1,
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
  [7504] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_SLASH,
    ACTIONS(626), 1,
      aux_sym_printExpr_token1,
    ACTIONS(628), 1,
      anon_sym_LBRACK,
    STATE(90), 1,
      sym_mathOperator,
    ACTIONS(624), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
    ACTIONS(314), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7536] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_LPAREN,
    ACTIONS(594), 1,
      anon_sym_AT_AT,
    ACTIONS(596), 1,
      anon_sym__,
    ACTIONS(598), 1,
      aux_sym_seed_token1,
    ACTIONS(600), 1,
      anon_sym_COLON,
    STATE(273), 1,
      sym_name,
    STATE(302), 1,
      sym_vertexSetType,
    STATE(314), 1,
      sym_atomicVertexType,
    STATE(315), 1,
      sym_stepVertexTypes,
    STATE(425), 1,
      sym_stepVertexSet,
    ACTIONS(602), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(269), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexType,
  [7579] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_SLASH,
    ACTIONS(630), 1,
      anon_sym_DOT,
    ACTIONS(179), 12,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [7603] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_SLASH,
    STATE(106), 1,
      sym_mathOperator,
    ACTIONS(632), 4,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_perClauseV2_token1,
    ACTIONS(314), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7629] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_SLASH,
    STATE(88), 1,
      sym_mathOperator,
    ACTIONS(352), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AND,
      anon_sym_OR,
    ACTIONS(356), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7655] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_SLASH,
    STATE(88), 1,
      sym_mathOperator,
    ACTIONS(632), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AND,
      anon_sym_OR,
    ACTIONS(314), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7681] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_SLASH,
    STATE(106), 1,
      sym_mathOperator,
    ACTIONS(352), 4,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_perClauseV2_token1,
    ACTIONS(356), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7707] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_SLASH,
    ACTIONS(634), 1,
      anon_sym_DOT,
    ACTIONS(179), 12,
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
  [7731] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_SLASH,
    STATE(101), 1,
      sym_mathOperator,
    ACTIONS(352), 4,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_printStmt_token3,
    ACTIONS(356), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7757] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_SLASH,
    STATE(101), 1,
      sym_mathOperator,
    ACTIONS(632), 4,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_printStmt_token3,
    ACTIONS(314), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7783] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_SLASH,
    ACTIONS(636), 1,
      anon_sym_DOT,
    ACTIONS(179), 12,
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
  [7807] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_SLASH,
    STATE(98), 1,
      sym_mathOperator,
    ACTIONS(352), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
    ACTIONS(356), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7832] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_SLASH,
    STATE(94), 1,
      sym_mathOperator,
    ACTIONS(352), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(356), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7857] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_SLASH,
    STATE(98), 1,
      sym_mathOperator,
    ACTIONS(638), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
    ACTIONS(314), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7882] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_SLASH,
    ACTIONS(640), 1,
      anon_sym_RPAREN,
    ACTIONS(642), 1,
      anon_sym_COMMA,
    STATE(94), 1,
      sym_mathOperator,
    STATE(532), 1,
      aux_sym_argList_repeat1,
    ACTIONS(314), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7911] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_SLASH,
    STATE(105), 1,
      sym_mathOperator,
    ACTIONS(632), 3,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_queryBodyIfStmt_token2,
    ACTIONS(314), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7936] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_SLASH,
    ACTIONS(644), 1,
      anon_sym_DOT,
    ACTIONS(179), 11,
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
  [7959] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_SLASH,
    STATE(105), 1,
      sym_mathOperator,
    ACTIONS(352), 3,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_queryBodyIfStmt_token2,
    ACTIONS(356), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7984] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_SLASH,
    ACTIONS(646), 1,
      anon_sym_DOT,
    ACTIONS(179), 11,
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
  [8007] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_SLASH,
    ACTIONS(648), 1,
      anon_sym_DOT,
    ACTIONS(179), 11,
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
  [8030] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_AT_AT,
    ACTIONS(650), 1,
      anon_sym_RBRACE,
    ACTIONS(652), 1,
      anon_sym__,
    ACTIONS(654), 1,
      aux_sym_seed_token1,
    ACTIONS(656), 1,
      aux_sym_seed_token2,
    STATE(557), 1,
      sym_name,
    STATE(558), 1,
      sym_seed,
    STATE(677), 1,
      sym_vertexType,
    ACTIONS(259), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(564), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexSetName,
  [8067] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_SLASH,
    STATE(98), 1,
      sym_mathOperator,
    ACTIONS(658), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
    ACTIONS(314), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [8092] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_SLASH,
    STATE(98), 1,
      sym_mathOperator,
    ACTIONS(660), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
    ACTIONS(314), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [8117] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_SLASH,
    ACTIONS(664), 1,
      aux_sym_printExpr_token1,
    STATE(110), 1,
      sym_mathOperator,
    ACTIONS(662), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(314), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [8144] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_SLASH,
    STATE(110), 1,
      sym_mathOperator,
    ACTIONS(352), 3,
      anon_sym_COMMA,
      aux_sym_printExpr_token1,
      anon_sym_RBRACK,
    ACTIONS(356), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [8169] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_SLASH,
    ACTIONS(666), 1,
      anon_sym_DOT,
    ACTIONS(179), 11,
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
  [8192] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_integer_token1,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(566), 1,
      sym_constant,
    ACTIONS(332), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(25), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [8226] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(187), 1,
      aux_sym_name_repeat1,
    ACTIONS(668), 4,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(213), 7,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_DOT_STAR,
      anon_sym_COLON,
  [8248] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      anon_sym_LBRACE,
    ACTIONS(673), 1,
      anon_sym_LPAREN,
    ACTIONS(675), 1,
      anon_sym__,
    ACTIONS(677), 1,
      aux_sym_gsqlSelectClause_token1,
    STATE(267), 1,
      sym_name,
    STATE(339), 1,
      sym_vertexSetName,
    STATE(464), 1,
      sym_simpleSet,
    STATE(621), 1,
      sym_gsqlSelectClause,
    ACTIONS(679), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(719), 2,
      sym_seedSet,
      sym_gsqlSelectBlock,
  [8284] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_SLASH,
    STATE(94), 1,
      sym_mathOperator,
    ACTIONS(681), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(314), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [8308] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(191), 1,
      aux_sym_name_repeat1,
    ACTIONS(683), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(685), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(223), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [8332] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(191), 1,
      aux_sym_name_repeat1,
    ACTIONS(687), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(690), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(213), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [8356] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_SLASH,
    STATE(94), 1,
      sym_mathOperator,
    ACTIONS(693), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(314), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [8380] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_integer_token1,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(580), 1,
      sym_constant,
    ACTIONS(332), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(25), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [8414] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_integer_token1,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(550), 1,
      sym_constant,
    ACTIONS(332), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(25), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [8448] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_integer_token1,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(590), 1,
      sym_constant,
    ACTIONS(332), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(25), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [8482] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_CREATE_VERTEX_token1,
    ACTIONS(15), 1,
      aux_sym_accumType_token2,
    ACTIONS(17), 1,
      aux_sym_accumType_token3,
    ACTIONS(19), 1,
      aux_sym_accumType_token4,
    STATE(711), 1,
      sym_baseType,
    ACTIONS(21), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [8510] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_CREATE_VERTEX_token1,
    ACTIONS(15), 1,
      aux_sym_accumType_token2,
    ACTIONS(17), 1,
      aux_sym_accumType_token3,
    ACTIONS(19), 1,
      aux_sym_accumType_token4,
    STATE(598), 1,
      sym_baseType,
    ACTIONS(21), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [8538] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(187), 1,
      aux_sym_name_repeat1,
    ACTIONS(695), 4,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(223), 7,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_DOT_STAR,
      anon_sym_COLON,
  [8560] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_integer_token1,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(518), 1,
      sym_constant,
    ACTIONS(332), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(25), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [8594] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_CREATE_VERTEX_token1,
    ACTIONS(15), 1,
      aux_sym_accumType_token2,
    ACTIONS(17), 1,
      aux_sym_accumType_token3,
    ACTIONS(19), 1,
      aux_sym_accumType_token4,
    STATE(472), 1,
      sym_baseType,
    ACTIONS(21), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [8622] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_AT_AT,
    ACTIONS(652), 1,
      anon_sym__,
    ACTIONS(654), 1,
      aux_sym_seed_token1,
    ACTIONS(656), 1,
      aux_sym_seed_token2,
    STATE(557), 1,
      sym_name,
    STATE(562), 1,
      sym_seed,
    STATE(677), 1,
      sym_vertexType,
    ACTIONS(259), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(564), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexSetName,
  [8656] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_integer_token1,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(524), 1,
      sym_constant,
    ACTIONS(332), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(25), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [8690] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(190), 1,
      aux_sym_name_repeat1,
    ACTIONS(697), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(699), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(201), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [8714] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_integer_token1,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(573), 1,
      sym_constant,
    ACTIONS(332), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(25), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [8748] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_integer_token1,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(535), 1,
      sym_constant,
    ACTIONS(332), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(25), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [8782] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_integer_token1,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(554), 1,
      sym_constant,
    ACTIONS(332), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(25), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [8816] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_CREATE_VERTEX_token1,
    ACTIONS(15), 1,
      aux_sym_accumType_token2,
    ACTIONS(17), 1,
      aux_sym_accumType_token3,
    ACTIONS(19), 1,
      aux_sym_accumType_token4,
    STATE(663), 1,
      sym_baseType,
    ACTIONS(21), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [8844] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(198), 1,
      aux_sym_name_repeat1,
    ACTIONS(701), 4,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(201), 7,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_DOT_STAR,
      anon_sym_COLON,
  [8866] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(190), 1,
      aux_sym_name_repeat1,
    ACTIONS(697), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(699), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(703), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [8889] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(210), 1,
      aux_sym_name_repeat1,
    ACTIONS(706), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(709), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(213), 6,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [8912] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(213), 1,
      aux_sym_name_repeat1,
    ACTIONS(712), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(714), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(201), 6,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [8935] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_DASH,
    ACTIONS(718), 1,
      aux_sym_integer_token1,
    STATE(495), 1,
      aux_sym_integer_repeat1,
    STATE(638), 1,
      sym_simpleSize,
    STATE(642), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(636), 3,
      sym_integer,
      sym_paramName,
      sym_varName,
  [8964] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(210), 1,
      aux_sym_name_repeat1,
    ACTIONS(720), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(722), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(223), 6,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [8987] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(724), 9,
      anon_sym_LPAREN,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      anon_sym_DASH,
      anon_sym_AT_AT,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_DQUOTE,
      aux_sym_integer_token1,
  [9006] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(728), 9,
      anon_sym_LPAREN,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      anon_sym_DASH,
      anon_sym_AT_AT,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_DQUOTE,
      aux_sym_integer_token1,
  [9025] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_SLASH,
    ACTIONS(732), 1,
      anon_sym_SEMI,
    STATE(94), 1,
      sym_mathOperator,
    ACTIONS(314), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [9048] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      anon_sym_LBRACE,
    ACTIONS(673), 1,
      anon_sym_LPAREN,
    STATE(267), 1,
      sym_name,
    STATE(339), 1,
      sym_vertexSetName,
    STATE(440), 1,
      sym_simpleSet,
    STATE(621), 1,
      sym_gsqlSelectClause,
    STATE(701), 2,
      sym_seedSet,
      sym_gsqlSelectBlock,
    ACTIONS(675), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9079] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_AT_AT,
    ACTIONS(580), 1,
      aux_sym_seed_token1,
    ACTIONS(734), 1,
      anon_sym__,
    STATE(431), 1,
      sym_name,
    STATE(561), 1,
      sym_edgeSetType,
    STATE(615), 1,
      sym_atomicEdgeType,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(450), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_edgeType,
  [9110] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_accumType_token1,
    ACTIONS(25), 1,
      aux_sym_accumType_token9,
    ACTIONS(29), 1,
      aux_sym_accumType_token12,
    ACTIONS(31), 1,
      aux_sym_accumType_token15,
    ACTIONS(33), 1,
      aux_sym_accumType_token16,
    STATE(617), 1,
      sym_accumType,
    ACTIONS(23), 2,
      aux_sym_accumType_token7,
      aux_sym_accumType_token8,
    ACTIONS(27), 2,
      aux_sym_accumType_token10,
      aux_sym_accumType_token11,
  [9140] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_AT_AT,
    STATE(456), 1,
      sym_dmlSubStmt,
    STATE(626), 1,
      sym_name,
    STATE(627), 1,
      sym_dmlSubStmtList,
    STATE(643), 1,
      sym_globalAccumName,
    STATE(477), 2,
      sym_gAccumAccumStmt,
      sym_assignStmt,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9168] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_AT_AT,
    STATE(456), 1,
      sym_dmlSubStmt,
    STATE(625), 1,
      sym_dmlSubStmtList,
    STATE(626), 1,
      sym_name,
    STATE(643), 1,
      sym_globalAccumName,
    STATE(477), 2,
      sym_gAccumAccumStmt,
      sym_assignStmt,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9196] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(222), 1,
      aux_sym_name_repeat1,
    ACTIONS(736), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(739), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(213), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
  [9217] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_AT_AT,
    STATE(497), 1,
      sym_dmlSubStmt,
    STATE(626), 1,
      sym_name,
    STATE(643), 1,
      sym_globalAccumName,
    STATE(477), 2,
      sym_gAccumAccumStmt,
      sym_assignStmt,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9242] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    STATE(693), 1,
      sym_name,
    STATE(545), 2,
      sym_stringLiteral,
      sym_paramName,
    STATE(650), 2,
      sym_fileVar,
      sym_filePath,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9265] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(225), 1,
      aux_sym_name_repeat1,
    ACTIONS(742), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(745), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(213), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_accumType_token13,
      aux_sym_accumType_token14,
  [9286] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    STATE(693), 1,
      sym_name,
    STATE(545), 2,
      sym_stringLiteral,
      sym_paramName,
    STATE(751), 2,
      sym_fileVar,
      sym_filePath,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 9,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [9324] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_PIPE,
    STATE(198), 1,
      aux_sym_name_repeat1,
    ACTIONS(748), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COLON,
    ACTIONS(701), 4,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9345] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_AT_AT,
    STATE(266), 1,
      sym_vertexSetType,
    STATE(273), 1,
      sym_name,
    ACTIONS(751), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(269), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexType,
  [9368] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(225), 1,
      aux_sym_name_repeat1,
    ACTIONS(753), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(755), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(223), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_accumType_token13,
      aux_sym_accumType_token14,
  [9389] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      aux_sym_name_token2,
    STATE(242), 1,
      aux_sym_name_repeat1,
    ACTIONS(757), 3,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
    ACTIONS(201), 4,
      anon_sym_LBRACE,
      anon_sym_API,
      anon_sym_SYNTAX,
      anon_sym_RETURNS,
  [9410] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(235), 1,
      aux_sym_name_repeat1,
    ACTIONS(761), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(763), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(201), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
  [9431] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    STATE(693), 1,
      sym_name,
    STATE(545), 2,
      sym_stringLiteral,
      sym_paramName,
    STATE(694), 2,
      sym_fileVar,
      sym_filePath,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9454] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      aux_sym_name_token2,
    STATE(234), 1,
      aux_sym_name_repeat1,
    ACTIONS(765), 3,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
    ACTIONS(213), 4,
      anon_sym_LBRACE,
      anon_sym_API,
      anon_sym_SYNTAX,
      anon_sym_RETURNS,
  [9475] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(222), 1,
      aux_sym_name_repeat1,
    ACTIONS(771), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(773), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(223), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
  [9496] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_AT_AT,
    STATE(431), 1,
      sym_name,
    STATE(541), 1,
      sym_edgeSetType,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(450), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_edgeType,
  [9519] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(230), 1,
      aux_sym_name_repeat1,
    ACTIONS(775), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(777), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(201), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_accumType_token13,
      aux_sym_accumType_token14,
  [9540] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(435), 7,
      aux_sym_queryBodyIfStmt_token1,
      aux_sym_queryBodyIfStmt_token3,
      aux_sym_queryBodyIfStmt_token4,
      anon_sym__,
      aux_sym_printStmt_token1,
      aux_sym_logStmt_token1,
      aux_sym_returnStmt_token1,
  [9557] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    STATE(693), 1,
      sym_name,
    STATE(545), 2,
      sym_stringLiteral,
      sym_paramName,
    STATE(660), 2,
      sym_fileVar,
      sym_filePath,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9580] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_AT_AT,
    STATE(265), 1,
      sym_vertexSetType,
    STATE(273), 1,
      sym_name,
    ACTIONS(751), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(269), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexType,
  [9603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 9,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [9618] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      aux_sym_name_token2,
    STATE(234), 1,
      aux_sym_name_repeat1,
    ACTIONS(781), 3,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
    ACTIONS(223), 4,
      anon_sym_LBRACE,
      anon_sym_API,
      anon_sym_SYNTAX,
      anon_sym_RETURNS,
  [9639] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(458), 1,
      anon_sym_AT_AT,
    STATE(252), 1,
      sym_globalAccumName,
    STATE(260), 1,
      sym_setBagExpr,
    STATE(415), 1,
      sym_name,
    ACTIONS(460), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9663] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      anon_sym_PIPE,
    STATE(244), 1,
      aux_sym_stepVertexTypes_repeat1,
    ACTIONS(785), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [9681] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_AT_AT,
    STATE(252), 1,
      sym_globalAccumName,
    STATE(260), 1,
      sym_setBagExpr,
    STATE(421), 1,
      sym_name,
    ACTIONS(422), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9705] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(452), 1,
      anon_sym_AT_AT,
    STATE(252), 1,
      sym_globalAccumName,
    STATE(260), 1,
      sym_setBagExpr,
    STATE(430), 1,
      sym_name,
    ACTIONS(454), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9729] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(257), 1,
      aux_sym_name_repeat1,
    ACTIONS(790), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(792), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(201), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_CREATE_VERTEX_token2,
  [9749] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_SEMI,
    ACTIONS(796), 1,
      anon_sym_WHERE,
    ACTIONS(798), 1,
      aux_sym_perClauseV2_token1,
    STATE(312), 1,
      sym_whereClause,
    STATE(344), 1,
      sym_accumClause,
    STATE(592), 1,
      sym_perClauseV2,
    STATE(343), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [9775] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_PIPE,
    STATE(244), 1,
      aux_sym_stepVertexTypes_repeat1,
    ACTIONS(800), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [9793] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_DOT_STAR,
    STATE(198), 1,
      aux_sym_name_repeat1,
    ACTIONS(804), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(701), 4,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9813] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(452), 1,
      anon_sym_AT_AT,
    STATE(252), 1,
      sym_globalAccumName,
    STATE(264), 1,
      sym_setBagExpr,
    STATE(430), 1,
      sym_name,
    ACTIONS(454), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_queryBodyIfStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_perClauseV2_token1,
  [9851] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(435), 6,
      aux_sym_queryBodyIfStmt_token1,
      aux_sym_queryBodyIfStmt_token4,
      anon_sym__,
      aux_sym_printStmt_token1,
      aux_sym_logStmt_token1,
      aux_sym_returnStmt_token1,
  [9867] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(464), 1,
      anon_sym_AT_AT,
    STATE(252), 1,
      sym_globalAccumName,
    STATE(260), 1,
      sym_setBagExpr,
    STATE(359), 1,
      sym_name,
    ACTIONS(466), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9891] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    STATE(521), 1,
      sym_name,
    STATE(702), 1,
      sym_filePath,
    STATE(545), 2,
      sym_stringLiteral,
      sym_paramName,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9913] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_AT_AT,
    STATE(252), 1,
      sym_globalAccumName,
    STATE(264), 1,
      sym_setBagExpr,
    STATE(421), 1,
      sym_name,
    ACTIONS(422), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9937] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(261), 1,
      aux_sym_name_repeat1,
    ACTIONS(809), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(811), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(223), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_CREATE_VERTEX_token2,
  [9957] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(435), 6,
      anon_sym_RBRACE,
      aux_sym_queryBodyIfStmt_token1,
      anon_sym__,
      aux_sym_printStmt_token1,
      aux_sym_logStmt_token1,
      aux_sym_returnStmt_token1,
  [9973] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    STATE(521), 1,
      sym_name,
    STATE(697), 1,
      sym_filePath,
    STATE(545), 2,
      sym_stringLiteral,
      sym_paramName,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9995] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_queryBodyIfStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_perClauseV2_token1,
  [10009] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(261), 1,
      aux_sym_name_repeat1,
    ACTIONS(813), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(816), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(213), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_CREATE_VERTEX_token2,
  [10029] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(458), 1,
      anon_sym_AT_AT,
    STATE(252), 1,
      sym_globalAccumName,
    STATE(264), 1,
      sym_setBagExpr,
    STATE(415), 1,
      sym_name,
    ACTIONS(460), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10053] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(464), 1,
      anon_sym_AT_AT,
    STATE(252), 1,
      sym_globalAccumName,
    STATE(264), 1,
      sym_setBagExpr,
    STATE(359), 1,
      sym_name,
    ACTIONS(466), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_queryBodyIfStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_perClauseV2_token1,
  [10091] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_PIPE,
    STATE(249), 1,
      aux_sym_stepVertexTypes_repeat1,
    ACTIONS(821), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [10109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [10122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [10135] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(507), 1,
      sym_alias,
    STATE(589), 1,
      sym_name,
    STATE(603), 2,
      sym_vertexAlias,
      sym_edgeAlias,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10154] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [10167] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      anon_sym_LT,
    ACTIONS(827), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10182] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_LPAREN,
    STATE(267), 1,
      sym_name,
    STATE(398), 1,
      sym_vertexSetName,
    STATE(446), 1,
      sym_simpleSet,
    ACTIONS(675), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10203] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(49), 1,
      aux_sym_name_repeat1,
    ACTIONS(748), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
    ACTIONS(289), 4,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [10233] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(589), 1,
      sym_name,
    STATE(613), 1,
      sym_alias,
    STATE(603), 2,
      sym_vertexAlias,
      sym_edgeAlias,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10252] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_LPAREN,
    STATE(267), 1,
      sym_name,
    STATE(373), 1,
      sym_simpleSet,
    STATE(398), 1,
      sym_vertexSetName,
    ACTIONS(675), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10273] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_AT,
    STATE(19), 1,
      sym_localAccumName,
    STATE(21), 1,
      sym_name,
    ACTIONS(340), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10291] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_AT,
    STATE(19), 1,
      sym_localAccumName,
    STATE(21), 1,
      sym_name,
    ACTIONS(380), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      aux_sym_fromClause_token1,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [10321] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_DASH,
    STATE(311), 1,
      aux_sym_pathPattern_repeat1,
    ACTIONS(840), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [10337] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      aux_sym_createSignature_token1,
    ACTIONS(844), 1,
      ts_builtin_sym_end,
    STATE(786), 1,
      sym_createSignature,
    STATE(281), 3,
      sym_createQuery,
      sym_CREATE_VERTEX,
      aux_sym_source_file_repeat1,
  [10355] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      ts_builtin_sym_end,
    ACTIONS(848), 1,
      aux_sym_createSignature_token1,
    STATE(786), 1,
      sym_createSignature,
    STATE(281), 3,
      sym_createQuery,
      sym_CREATE_VERTEX,
      aux_sym_source_file_repeat1,
  [10373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10385] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10409] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      anon_sym_LBRACE,
    ACTIONS(859), 1,
      anon_sym_FOR,
    ACTIONS(861), 1,
      anon_sym_API,
    ACTIONS(863), 1,
      anon_sym_SYNTAX,
    ACTIONS(865), 1,
      anon_sym_RETURNS,
    STATE(505), 1,
      sym_returns,
  [10431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10443] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_AT,
    ACTIONS(867), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token2,
      anon_sym_AT_AT,
  [10457] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(716), 1,
      anon_sym_DASH,
    ACTIONS(718), 1,
      aux_sym_integer_token1,
    STATE(495), 1,
      aux_sym_integer_repeat1,
    STATE(700), 2,
      sym_stringLiteral,
      sym_integer,
  [10477] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_AT,
    ACTIONS(871), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token2,
      anon_sym_AT_AT,
  [10491] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 1,
      anon_sym_DOLLAR,
    STATE(681), 2,
      sym_columnId,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_AT,
    ACTIONS(877), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token2,
      anon_sym_AT_AT,
  [10521] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_AT,
    STATE(19), 1,
      sym_localAccumName,
    STATE(21), 1,
      sym_name,
    ACTIONS(428), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 1,
      anon_sym_AT,
    ACTIONS(883), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token2,
      anon_sym_AT_AT,
  [10553] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 1,
      anon_sym_AT,
    STATE(19), 1,
      sym_localAccumName,
    STATE(21), 1,
      sym_name,
    ACTIONS(466), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10571] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      anon_sym_AT,
    STATE(19), 1,
      sym_localAccumName,
    STATE(21), 1,
      sym_name,
    ACTIONS(460), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10589] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      anon_sym_AT,
    ACTIONS(891), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token2,
      anon_sym_AT_AT,
  [10603] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      anon_sym_AT,
    STATE(19), 1,
      sym_localAccumName,
    STATE(21), 1,
      sym_name,
    ACTIONS(422), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10621] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_RETURNS,
    ACTIONS(897), 1,
      anon_sym_LBRACE,
    ACTIONS(899), 1,
      anon_sym_FOR,
    ACTIONS(901), 1,
      anon_sym_API,
    ACTIONS(903), 1,
      anon_sym_SYNTAX,
    STATE(481), 1,
      sym_returns,
  [10643] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      aux_sym_fromClause_token1,
    STATE(299), 1,
      aux_sym_name_repeat1,
    ACTIONS(905), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(908), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10661] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      aux_sym_fromClause_token1,
    STATE(299), 1,
      aux_sym_name_repeat1,
    ACTIONS(911), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(913), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10679] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 1,
      anon_sym_AT,
    STATE(19), 1,
      sym_localAccumName,
    STATE(21), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [10709] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 1,
      anon_sym_AT,
    STATE(19), 1,
      sym_localAccumName,
    STATE(21), 1,
      sym_name,
    ACTIONS(454), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10727] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_RETURNS,
    ACTIONS(921), 1,
      anon_sym_LBRACE,
    ACTIONS(923), 1,
      anon_sym_FOR,
    ACTIONS(925), 1,
      anon_sym_API,
    ACTIONS(927), 1,
      anon_sym_SYNTAX,
    STATE(517), 1,
      sym_returns,
  [10749] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      anon_sym_AT,
    ACTIONS(929), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token2,
      anon_sym_AT_AT,
  [10763] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      aux_sym_fromClause_token1,
    STATE(300), 1,
      aux_sym_name_repeat1,
    ACTIONS(933), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(935), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10781] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_AT,
    ACTIONS(937), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token2,
      anon_sym_AT_AT,
  [10795] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      anon_sym_AT,
    STATE(27), 2,
      sym_localAccumName,
      sym_name,
    ACTIONS(422), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(941), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10823] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 1,
      anon_sym_AT,
    STATE(27), 2,
      sym_localAccumName,
      sym_name,
    ACTIONS(466), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10839] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(945), 1,
      anon_sym_DASH,
    STATE(311), 1,
      aux_sym_pathPattern_repeat1,
    ACTIONS(943), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [10855] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      aux_sym_perClauseV2_token1,
    ACTIONS(948), 1,
      anon_sym_SEMI,
    STATE(370), 1,
      sym_accumClause,
    STATE(592), 1,
      sym_perClauseV2,
    STATE(380), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [10875] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 1,
      anon_sym_AT,
    STATE(27), 2,
      sym_localAccumName,
      sym_name,
    ACTIONS(454), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10891] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(950), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [10903] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(954), 1,
      anon_sym_COLON,
    ACTIONS(952), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [10917] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(956), 1,
      anon_sym_AT,
    STATE(19), 1,
      sym_localAccumName,
    STATE(21), 1,
      sym_name,
    ACTIONS(392), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10935] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_RETURNS,
    ACTIONS(958), 1,
      anon_sym_LBRACE,
    ACTIONS(960), 1,
      anon_sym_FOR,
    ACTIONS(962), 1,
      anon_sym_API,
    ACTIONS(964), 1,
      anon_sym_SYNTAX,
    STATE(520), 1,
      sym_returns,
  [10957] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_DASH,
    STATE(279), 1,
      aux_sym_pathPattern_repeat1,
    ACTIONS(966), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [10973] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(968), 1,
      anon_sym_AT,
    STATE(19), 1,
      sym_localAccumName,
    STATE(21), 1,
      sym_name,
    ACTIONS(386), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10991] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_RETURNS,
    ACTIONS(970), 1,
      anon_sym_LBRACE,
    ACTIONS(972), 1,
      anon_sym_FOR,
    ACTIONS(974), 1,
      anon_sym_API,
    ACTIONS(976), 1,
      anon_sym_SYNTAX,
    STATE(534), 1,
      sym_returns,
  [11013] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      anon_sym_AT,
    STATE(27), 2,
      sym_localAccumName,
      sym_name,
    ACTIONS(460), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11029] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(978), 1,
      anon_sym_AT,
    STATE(19), 1,
      sym_localAccumName,
    STATE(21), 1,
      sym_name,
    ACTIONS(374), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11047] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 1,
      anon_sym_AT,
    STATE(19), 1,
      sym_localAccumName,
    STATE(21), 1,
      sym_name,
    ACTIONS(408), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11065] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(227), 1,
      sym_name,
    STATE(241), 1,
      sym_accumName,
    ACTIONS(751), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11080] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(480), 1,
      sym_name,
    STATE(695), 1,
      sym_vertexType,
    ACTIONS(257), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11095] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(157), 1,
      sym_name,
    STATE(404), 1,
      sym_fieldName,
    ACTIONS(982), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11110] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(383), 1,
      sym_graphName,
    STATE(452), 1,
      sym_name,
    ACTIONS(984), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11125] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(157), 1,
      sym_name,
    STATE(472), 1,
      sym_fieldName,
    ACTIONS(257), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11140] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(6), 1,
      sym_name,
    STATE(17), 1,
      sym_accumName,
    ACTIONS(408), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11155] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(6), 1,
      sym_name,
    STATE(7), 1,
      sym_accumName,
    ACTIONS(392), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11170] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(278), 1,
      sym_name,
    STATE(357), 1,
      sym_vertexAlias,
    ACTIONS(751), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11185] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(723), 1,
      sym_edgeAlias,
    STATE(746), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11200] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(157), 1,
      sym_name,
    STATE(598), 1,
      sym_fieldName,
    ACTIONS(257), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11215] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(665), 1,
      sym_name,
    STATE(666), 1,
      sym_syntaxName,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11230] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(781), 1,
      sym_queryName,
    STATE(782), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11245] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(363), 1,
      sym_name,
    STATE(630), 1,
      sym_tupleType,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11260] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(6), 1,
      sym_name,
    STATE(17), 1,
      sym_accumName,
    ACTIONS(380), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11275] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(393), 1,
      sym_graphName,
    STATE(452), 1,
      sym_name,
    ACTIONS(984), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11290] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(986), 1,
      anon_sym_EQ,
    ACTIONS(988), 4,
      anon_sym_SEMI,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [11303] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(990), 1,
      anon_sym_COMMA,
    STATE(355), 1,
      aux_sym_fromClause_repeat1,
    ACTIONS(992), 3,
      anon_sym_SEMI,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [11318] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_RETURNS,
    ACTIONS(994), 1,
      anon_sym_LBRACE,
    ACTIONS(996), 1,
      anon_sym_API,
    ACTIONS(998), 1,
      anon_sym_SYNTAX,
    STATE(529), 1,
      sym_returns,
  [11337] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(278), 1,
      sym_name,
    STATE(676), 1,
      sym_vertexAlias,
    ACTIONS(1000), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11352] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      aux_sym_perClauseV2_token1,
    ACTIONS(948), 1,
      anon_sym_SEMI,
    STATE(684), 1,
      sym_perClauseV2,
    STATE(387), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [11369] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      aux_sym_perClauseV2_token1,
    ACTIONS(948), 1,
      anon_sym_SEMI,
    STATE(684), 1,
      sym_perClauseV2,
    STATE(380), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [11386] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(420), 1,
      sym_name,
    STATE(596), 1,
      sym_jsonKey,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
  [11412] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(990), 1,
      anon_sym_COMMA,
    STATE(340), 1,
      aux_sym_fromClause_repeat1,
    ACTIONS(1004), 3,
      anon_sym_SEMI,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [11427] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(278), 1,
      sym_name,
    STATE(364), 1,
      sym_vertexAlias,
    ACTIONS(751), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11442] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(480), 1,
      sym_name,
    STATE(779), 1,
      sym_vertexType,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11457] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(6), 1,
      sym_name,
    STATE(17), 1,
      sym_accumName,
    ACTIONS(422), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11472] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1006), 1,
      anon_sym_COMMA,
    ACTIONS(1008), 1,
      anon_sym_SEMI,
    ACTIONS(1010), 1,
      aux_sym_printStmt_token2,
    ACTIONS(1012), 1,
      aux_sym_printStmt_token3,
    STATE(385), 1,
      aux_sym_printStmt_repeat1,
  [11491] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(420), 1,
      sym_name,
    STATE(438), 1,
      sym_jsonKey,
    ACTIONS(1014), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11506] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(6), 1,
      sym_name,
    STATE(17), 1,
      sym_accumName,
    ACTIONS(374), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11521] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(756), 1,
      sym_queryName,
    STATE(782), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11536] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1016), 1,
      anon_sym_COMMA,
    STATE(355), 1,
      aux_sym_fromClause_repeat1,
    ACTIONS(1019), 3,
      anon_sym_SEMI,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [11551] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(6), 1,
      sym_name,
    STATE(7), 1,
      sym_accumName,
    ACTIONS(454), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1021), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [11577] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1025), 1,
      anon_sym_GT,
    ACTIONS(1027), 1,
      anon_sym_PIPE,
    STATE(439), 1,
      aux_sym_stepEdgeTypes_repeat1,
    ACTIONS(1023), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [11594] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1029), 1,
      anon_sym_DOT,
    ACTIONS(807), 4,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_perClauseV2_token1,
  [11607] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      aux_sym_perClauseV2_token1,
    ACTIONS(1031), 1,
      anon_sym_SEMI,
    STATE(684), 1,
      sym_perClauseV2,
    STATE(387), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [11624] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1033), 1,
      aux_sym_elementType_token1,
    ACTIONS(827), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token2,
  [11637] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(665), 1,
      sym_name,
    STATE(709), 1,
      sym_syntaxName,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1035), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token2,
  [11663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1037), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [11674] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(6), 1,
      sym_name,
    STATE(17), 1,
      sym_accumName,
    ACTIONS(454), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11689] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(6), 1,
      sym_name,
    STATE(7), 1,
      sym_accumName,
    ACTIONS(408), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11704] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      anon_sym_LBRACE,
    ACTIONS(861), 1,
      anon_sym_API,
    ACTIONS(863), 1,
      anon_sym_SYNTAX,
    ACTIONS(865), 1,
      anon_sym_RETURNS,
    STATE(505), 1,
      sym_returns,
  [11723] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(6), 1,
      sym_name,
    STATE(17), 1,
      sym_accumName,
    ACTIONS(460), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11738] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(6), 1,
      sym_name,
    STATE(7), 1,
      sym_accumName,
    ACTIONS(380), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11753] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      aux_sym_perClauseV2_token1,
    ACTIONS(1039), 1,
      anon_sym_SEMI,
    STATE(684), 1,
      sym_perClauseV2,
    STATE(360), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [11770] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(6), 1,
      sym_name,
    STATE(17), 1,
      sym_accumName,
    ACTIONS(392), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1041), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [11796] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1041), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(1043), 3,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [11809] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(468), 1,
      sym_paramName,
    STATE(521), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11824] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(6), 1,
      sym_name,
    STATE(17), 1,
      sym_accumName,
    ACTIONS(466), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11839] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(717), 1,
      sym_queryName,
    STATE(782), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11854] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(657), 1,
      sym_syntaxName,
    STATE(665), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11869] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(6), 1,
      sym_name,
    STATE(17), 1,
      sym_accumName,
    ACTIONS(340), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11884] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(367), 1,
      sym_graphName,
    STATE(452), 1,
      sym_name,
    ACTIONS(984), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11899] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      aux_sym_perClauseV2_token1,
    ACTIONS(1039), 1,
      anon_sym_SEMI,
    STATE(684), 1,
      sym_perClauseV2,
    STATE(387), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [11916] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(480), 1,
      sym_name,
    STATE(720), 1,
      sym_vertexType,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11931] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(341), 1,
      sym_graphName,
    STATE(452), 1,
      sym_name,
    ACTIONS(984), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11946] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_RETURNS,
    ACTIONS(921), 1,
      anon_sym_LBRACE,
    ACTIONS(925), 1,
      anon_sym_API,
    ACTIONS(927), 1,
      anon_sym_SYNTAX,
    STATE(517), 1,
      sym_returns,
  [11965] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(665), 1,
      sym_name,
    STATE(734), 1,
      sym_syntaxName,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11980] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1046), 1,
      anon_sym_COMMA,
    STATE(385), 1,
      aux_sym_printStmt_repeat1,
    ACTIONS(1049), 3,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
  [11995] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(6), 1,
      sym_name,
    STATE(17), 1,
      sym_accumName,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12010] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1051), 1,
      anon_sym_SEMI,
    ACTIONS(1053), 1,
      aux_sym_perClauseV2_token1,
    STATE(684), 1,
      sym_perClauseV2,
    STATE(387), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [12027] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(474), 1,
      sym_paramName,
    STATE(521), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12042] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(6), 1,
      sym_name,
    STATE(7), 1,
      sym_accumName,
    ACTIONS(374), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12057] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(6), 1,
      sym_name,
    STATE(7), 1,
      sym_accumName,
    ACTIONS(340), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12072] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      aux_sym_printExpr_token1,
    ACTIONS(624), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
  [12085] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1006), 1,
      anon_sym_COMMA,
    ACTIONS(1056), 1,
      anon_sym_SEMI,
    ACTIONS(1058), 1,
      aux_sym_printStmt_token2,
    ACTIONS(1060), 1,
      aux_sym_printStmt_token3,
    STATE(351), 1,
      aux_sym_printStmt_repeat1,
  [12104] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_RETURNS,
    ACTIONS(1062), 1,
      anon_sym_LBRACE,
    ACTIONS(1064), 1,
      anon_sym_API,
    ACTIONS(1066), 1,
      anon_sym_SYNTAX,
    STATE(549), 1,
      sym_returns,
  [12123] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(426), 1,
      sym_graphName,
    STATE(452), 1,
      sym_name,
    ACTIONS(984), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12138] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(6), 1,
      sym_name,
    STATE(17), 1,
      sym_accumName,
    ACTIONS(428), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12153] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(665), 1,
      sym_name,
    STATE(689), 1,
      sym_syntaxName,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12168] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(6), 1,
      sym_name,
    STATE(17), 1,
      sym_accumName,
    ACTIONS(386), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(988), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [12194] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(6), 1,
      sym_name,
    STATE(7), 1,
      sym_accumName,
    ACTIONS(422), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12209] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(6), 1,
      sym_name,
    STATE(7), 1,
      sym_accumName,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12224] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(6), 1,
      sym_name,
    STATE(7), 1,
      sym_accumName,
    ACTIONS(386), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12239] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(363), 1,
      sym_name,
    STATE(691), 1,
      sym_tupleType,
    ACTIONS(257), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12254] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(157), 1,
      sym_name,
    STATE(432), 1,
      sym_fieldName,
    ACTIONS(982), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12269] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1068), 1,
      anon_sym_RPAREN,
    ACTIONS(1070), 1,
      anon_sym_COMMA,
    STATE(538), 1,
      aux_sym_accumType_repeat1,
    ACTIONS(1072), 2,
      aux_sym_accumType_token13,
      aux_sym_accumType_token14,
  [12286] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1076), 1,
      aux_sym_accumType_token5,
    ACTIONS(1074), 4,
      aux_sym_accumType_token2,
      aux_sym_accumType_token3,
      aux_sym_accumType_token4,
      aux_sym_accumType_token6,
  [12299] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(480), 1,
      sym_name,
    STATE(739), 1,
      sym_vertexType,
    ACTIONS(257), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12314] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(6), 1,
      sym_name,
    STATE(7), 1,
      sym_accumName,
    ACTIONS(460), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12329] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(647), 1,
      sym_syntaxName,
    STATE(665), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12344] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(651), 1,
      sym_syntaxName,
    STATE(665), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12359] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(653), 1,
      sym_syntaxName,
    STATE(665), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1078), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
  [12385] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(645), 1,
      sym_syntaxName,
    STATE(665), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12400] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(661), 1,
      sym_syntaxName,
    STATE(665), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12415] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(736), 1,
      sym_attrName,
    STATE(740), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12430] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1080), 1,
      anon_sym_DOT,
    ACTIONS(807), 4,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_printStmt_token3,
  [12443] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(665), 1,
      sym_name,
    STATE(672), 1,
      sym_syntaxName,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12458] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(744), 1,
      sym_queryName,
    STATE(782), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12473] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(747), 1,
      sym_name,
    STATE(748), 1,
      sym_fileVar,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12488] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(227), 1,
      sym_name,
    STATE(241), 1,
      sym_accumName,
    ACTIONS(257), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1082), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      anon_sym_RBRACK,
  [12514] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1084), 1,
      anon_sym_DOT,
    ACTIONS(807), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AND,
      anon_sym_OR,
  [12527] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(6), 1,
      sym_name,
    STATE(7), 1,
      sym_accumName,
    ACTIONS(466), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12542] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(644), 1,
      sym_syntaxName,
    STATE(665), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12557] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(746), 1,
      sym_name,
    STATE(749), 1,
      sym_edgeAlias,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1086), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [12583] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_RETURNS,
    ACTIONS(1088), 1,
      anon_sym_LBRACE,
    ACTIONS(1090), 1,
      anon_sym_API,
    ACTIONS(1092), 1,
      anon_sym_SYNTAX,
    STATE(553), 1,
      sym_returns,
  [12602] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(6), 1,
      sym_name,
    STATE(7), 1,
      sym_accumName,
    ACTIONS(428), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12617] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(665), 1,
      sym_name,
    STATE(680), 1,
      sym_syntaxName,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12632] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1094), 1,
      anon_sym_EQ,
    ACTIONS(1096), 1,
      anon_sym_COMMA,
    ACTIONS(1098), 1,
      anon_sym_SEMI,
    STATE(514), 1,
      aux_sym_accumDeclStmt_repeat2,
  [12648] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1100), 1,
      anon_sym_DOT,
    ACTIONS(807), 3,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_queryBodyIfStmt_token2,
  [12660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1102), 4,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_COLON,
  [12670] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1105), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(1107), 2,
      aux_sym_accumType_token13,
      aux_sym_accumType_token14,
  [12682] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1049), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
  [12692] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1111), 1,
      anon_sym_PIPE,
    STATE(434), 1,
      aux_sym_stepEdgeTypes_repeat1,
    ACTIONS(1109), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [12706] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 2,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
    ACTIONS(1114), 2,
      anon_sym_AND,
      anon_sym_OR,
  [12718] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1117), 1,
      anon_sym_SEMI,
    ACTIONS(1121), 1,
      aux_sym_printStmt_token3,
    ACTIONS(1119), 2,
      anon_sym_AND,
      anon_sym_OR,
  [12732] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1123), 1,
      anon_sym_COMMA,
    STATE(458), 1,
      aux_sym_dmlSubStmtList_repeat1,
    ACTIONS(1125), 2,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
  [12746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1127), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
  [12756] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1027), 1,
      anon_sym_PIPE,
    STATE(434), 1,
      aux_sym_stepEdgeTypes_repeat1,
    ACTIONS(1129), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [12770] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1131), 1,
      anon_sym_SEMI,
    ACTIONS(1133), 3,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [12782] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1135), 1,
      anon_sym_LT,
    ACTIONS(827), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_CREATE_VERTEX_token2,
  [12794] = 5,
    ACTIONS(1137), 1,
      sym_comment,
    ACTIONS(1139), 1,
      anon_sym_DQUOTE,
    ACTIONS(1141), 1,
      aux_sym_stringLiteral_token1,
    ACTIONS(1144), 1,
      sym_escape_sequence,
    STATE(442), 1,
      aux_sym_stringLiteral_repeat1,
  [12810] = 5,
    ACTIONS(1137), 1,
      sym_comment,
    ACTIONS(1147), 1,
      anon_sym_DQUOTE,
    ACTIONS(1149), 1,
      aux_sym_stringLiteral_token1,
    ACTIONS(1151), 1,
      sym_escape_sequence,
    STATE(460), 1,
      aux_sym_stringLiteral_repeat1,
  [12826] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(1153), 2,
      anon_sym_AND,
      anon_sym_OR,
  [12838] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1158), 1,
      aux_sym_CREATE_VERTEX_token4,
    ACTIONS(1160), 1,
      anon_sym_primary_id_as_attribute,
    ACTIONS(1156), 2,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
  [12852] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1162), 1,
      anon_sym_RPAREN,
    ACTIONS(1133), 3,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [12864] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
  [12874] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      anon_sym_SEMI,
    ACTIONS(1164), 1,
      anon_sym_EQ,
    ACTIONS(1166), 1,
      anon_sym_COMMA,
    STATE(511), 1,
      aux_sym_accumDeclStmt_repeat1,
  [12890] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(453), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12902] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1168), 4,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_COLON,
  [12912] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_AT_AT,
    ACTIONS(1170), 1,
      anon_sym_AT,
    STATE(429), 1,
      sym_globalAccumName,
    STATE(448), 1,
      sym_localAccumName,
  [12928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1172), 4,
      anon_sym_LBRACE,
      anon_sym_API,
      anon_sym_SYNTAX,
      anon_sym_RETURNS,
  [12938] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1174), 1,
      anon_sym_EQ,
    ACTIONS(1176), 1,
      anon_sym_COMMA,
    ACTIONS(1178), 1,
      anon_sym_SEMI,
    STATE(519), 1,
      aux_sym_baseDeclStmt_repeat1,
  [12954] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(42), 1,
      sym_name,
    ACTIONS(1180), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12966] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1096), 1,
      anon_sym_COMMA,
    ACTIONS(1182), 1,
      anon_sym_EQ,
    ACTIONS(1184), 1,
      anon_sym_SEMI,
    STATE(527), 1,
      aux_sym_accumDeclStmt_repeat2,
  [12982] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1123), 1,
      anon_sym_COMMA,
    STATE(437), 1,
      aux_sym_dmlSubStmtList_repeat1,
    ACTIONS(1186), 2,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
  [12996] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1188), 1,
      aux_sym_createSignature_token2,
    ACTIONS(1190), 1,
      aux_sym_createSignature_token4,
    ACTIONS(1192), 1,
      anon_sym_QUERY,
    ACTIONS(1194), 1,
      aux_sym_CREATE_VERTEX_token1,
  [13012] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1196), 1,
      anon_sym_COMMA,
    STATE(458), 1,
      aux_sym_dmlSubStmtList_repeat1,
    ACTIONS(1199), 2,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
  [13026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1201), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token2,
  [13036] = 5,
    ACTIONS(1137), 1,
      sym_comment,
    ACTIONS(1203), 1,
      anon_sym_DQUOTE,
    ACTIONS(1205), 1,
      aux_sym_stringLiteral_token1,
    ACTIONS(1207), 1,
      sym_escape_sequence,
    STATE(442), 1,
      aux_sym_stringLiteral_repeat1,
  [13052] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [13062] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1209), 2,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
    ACTIONS(1211), 2,
      anon_sym_AND,
      anon_sym_OR,
  [13074] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1213), 1,
      anon_sym_SEMI,
    ACTIONS(1215), 1,
      aux_sym_printStmt_token3,
    ACTIONS(1119), 2,
      anon_sym_AND,
      anon_sym_OR,
  [13088] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1217), 1,
      anon_sym_SEMI,
    ACTIONS(1133), 3,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [13100] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(548), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [13112] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 2,
      anon_sym_SEMI,
      aux_sym_printStmt_token3,
    ACTIONS(1219), 2,
      anon_sym_AND,
      anon_sym_OR,
  [13124] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1224), 1,
      aux_sym_CREATE_VERTEX_token4,
    ACTIONS(1226), 1,
      anon_sym_primary_id_as_attribute,
    ACTIONS(1222), 2,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
  [13138] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1228), 1,
      anon_sym_RPAREN,
    ACTIONS(1230), 1,
      anon_sym_EQ,
    ACTIONS(1232), 1,
      anon_sym_COMMA,
    STATE(530), 1,
      aux_sym_parameterList_repeat1,
  [13154] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(43), 1,
      sym_name,
    ACTIONS(1180), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [13166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1234), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token2,
  [13176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1238), 1,
      aux_sym_CREATE_VERTEX_token2,
    ACTIONS(1236), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13187] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1240), 1,
      anon_sym_COMMA,
    ACTIONS(1242), 1,
      anon_sym_GT,
    STATE(491), 1,
      aux_sym_tupleFields_repeat1,
  [13200] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1232), 1,
      anon_sym_COMMA,
    ACTIONS(1244), 1,
      anon_sym_RPAREN,
    STATE(490), 1,
      aux_sym_parameterList_repeat1,
  [13213] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1248), 1,
      anon_sym_EQ,
    ACTIONS(1246), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13224] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1250), 1,
      anon_sym_COMMA,
    ACTIONS(1253), 1,
      anon_sym_GT,
    STATE(475), 1,
      aux_sym_tupleFields_repeat1,
  [13237] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      aux_sym_integer_token1,
    ACTIONS(115), 1,
      anon_sym_COMMA,
    STATE(10), 1,
      aux_sym_integer_repeat1,
  [13250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1255), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
  [13259] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1257), 1,
      anon_sym_RBRACE,
    ACTIONS(1259), 1,
      anon_sym_COMMA,
    STATE(526), 1,
      aux_sym_seedSet_repeat1,
  [13272] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1176), 1,
      anon_sym_COMMA,
    ACTIONS(1261), 1,
      anon_sym_SEMI,
    STATE(544), 1,
      aux_sym_baseDeclStmt_repeat1,
  [13285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1263), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
  [13294] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      anon_sym_LBRACE,
    ACTIONS(925), 1,
      anon_sym_API,
    ACTIONS(927), 1,
      anon_sym_SYNTAX,
  [13307] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1267), 1,
      aux_sym_queryBodyIfStmt_token2,
    ACTIONS(1265), 2,
      anon_sym_AND,
      anon_sym_OR,
  [13318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1269), 3,
      anon_sym_LBRACE,
      anon_sym_API,
      anon_sym_SYNTAX,
  [13327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1271), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [13336] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1273), 1,
      anon_sym_RPAREN,
    ACTIONS(1275), 1,
      anon_sym_COMMA,
    STATE(485), 1,
      aux_sym_CREATE_VERTEX_repeat1,
  [13349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1074), 3,
      aux_sym_accumType_token2,
      aux_sym_accumType_token3,
      aux_sym_accumType_token4,
  [13358] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1278), 1,
      anon_sym_DOT,
    ACTIONS(1280), 1,
      aux_sym_integer_token1,
    STATE(9), 1,
      aux_sym_integer_repeat1,
  [13371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(941), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_CREATE_VERTEX_token2,
  [13380] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1282), 1,
      aux_sym_queryBodyIfStmt_token2,
    ACTIONS(1265), 2,
      anon_sym_AND,
      anon_sym_OR,
  [13391] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1284), 1,
      anon_sym_RPAREN,
    ACTIONS(1286), 1,
      anon_sym_COMMA,
    STATE(490), 1,
      aux_sym_parameterList_repeat1,
  [13404] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1240), 1,
      anon_sym_COMMA,
    ACTIONS(1289), 1,
      anon_sym_GT,
    STATE(475), 1,
      aux_sym_tupleFields_repeat1,
  [13417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1291), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [13426] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1293), 1,
      anon_sym_RPAREN,
    ACTIONS(1295), 1,
      anon_sym_COMMA,
    STATE(525), 1,
      aux_sym_CREATE_VERTEX_repeat1,
  [13439] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1096), 1,
      anon_sym_COMMA,
    ACTIONS(1297), 1,
      anon_sym_SEMI,
    STATE(556), 1,
      aux_sym_accumDeclStmt_repeat2,
  [13452] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_COMMA,
    ACTIONS(113), 1,
      aux_sym_integer_token1,
    STATE(10), 1,
      aux_sym_integer_repeat1,
  [13465] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1299), 1,
      anon_sym_RPAREN,
    ACTIONS(1301), 1,
      anon_sym_COMMA,
    STATE(496), 1,
      aux_sym_perClauseV2_repeat1,
  [13478] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1199), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
  [13487] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1304), 1,
      aux_sym_elementType_token1,
    ACTIONS(827), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [13498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_CREATE_VERTEX_token2,
  [13507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_CREATE_VERTEX_token2,
  [13516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_CREATE_VERTEX_token2,
  [13525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_CREATE_VERTEX_token2,
  [13534] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1306), 1,
      anon_sym_RPAREN,
    ACTIONS(1308), 2,
      anon_sym_AND,
      anon_sym_OR,
  [13545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1310), 1,
      anon_sym_COMMA,
    ACTIONS(1308), 2,
      anon_sym_AND,
      anon_sym_OR,
  [13556] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(994), 1,
      anon_sym_LBRACE,
    ACTIONS(996), 1,
      anon_sym_API,
    ACTIONS(998), 1,
      anon_sym_SYNTAX,
  [13569] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1312), 1,
      aux_sym_queryBodyIfStmt_token3,
    ACTIONS(1315), 1,
      aux_sym_queryBodyIfStmt_token4,
    STATE(506), 1,
      aux_sym_queryBodyIfStmt_repeat1,
  [13582] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1317), 1,
      anon_sym_RPAREN,
    ACTIONS(1319), 1,
      anon_sym_COMMA,
    STATE(543), 1,
      aux_sym_perClauseV2_repeat1,
  [13595] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1323), 1,
      anon_sym_primary_id_as_attribute,
    ACTIONS(1321), 2,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
  [13606] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1096), 1,
      anon_sym_COMMA,
    ACTIONS(1325), 1,
      anon_sym_SEMI,
    STATE(556), 1,
      aux_sym_accumDeclStmt_repeat2,
  [13619] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      anon_sym_COMMA,
    ACTIONS(1325), 1,
      anon_sym_SEMI,
    STATE(552), 1,
      aux_sym_accumDeclStmt_repeat1,
  [13632] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      anon_sym_COMMA,
    ACTIONS(1184), 1,
      anon_sym_SEMI,
    STATE(552), 1,
      aux_sym_accumDeclStmt_repeat1,
  [13645] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1329), 1,
      anon_sym_DOT,
    ACTIONS(1327), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [13656] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1331), 1,
      anon_sym_COMMA,
    ACTIONS(1333), 1,
      anon_sym_RBRACK,
    STATE(522), 1,
      aux_sym_vExprSet_repeat1,
  [13669] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1096), 1,
      anon_sym_COMMA,
    ACTIONS(1184), 1,
      anon_sym_SEMI,
    STATE(556), 1,
      aux_sym_accumDeclStmt_repeat2,
  [13682] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1335), 1,
      aux_sym_queryBodyIfStmt_token3,
    ACTIONS(1337), 1,
      aux_sym_queryBodyIfStmt_token4,
    STATE(506), 1,
      aux_sym_queryBodyIfStmt_repeat1,
  [13695] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_RPAREN,
    ACTIONS(1339), 1,
      anon_sym_COMMA,
    STATE(516), 1,
      aux_sym_argList_repeat1,
  [13708] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      anon_sym_LBRACE,
    ACTIONS(861), 1,
      anon_sym_API,
    ACTIONS(863), 1,
      anon_sym_SYNTAX,
  [13721] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1096), 1,
      anon_sym_COMMA,
    ACTIONS(1325), 1,
      anon_sym_SEMI,
    STATE(494), 1,
      aux_sym_accumDeclStmt_repeat2,
  [13734] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1176), 1,
      anon_sym_COMMA,
    ACTIONS(1342), 1,
      anon_sym_SEMI,
    STATE(544), 1,
      aux_sym_baseDeclStmt_repeat1,
  [13747] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(970), 1,
      anon_sym_LBRACE,
    ACTIONS(974), 1,
      anon_sym_API,
    ACTIONS(976), 1,
      anon_sym_SYNTAX,
  [13760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1344), 3,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_COMMA,
  [13769] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1346), 1,
      anon_sym_COMMA,
    ACTIONS(1349), 1,
      anon_sym_RBRACK,
    STATE(522), 1,
      aux_sym_vExprSet_repeat1,
  [13782] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1353), 1,
      aux_sym_CREATE_VERTEX_token3,
    ACTIONS(1351), 2,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
  [13793] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      anon_sym_COMMA,
    ACTIONS(1355), 1,
      anon_sym_SEMI,
    STATE(510), 1,
      aux_sym_accumDeclStmt_repeat1,
  [13806] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1295), 1,
      anon_sym_COMMA,
    ACTIONS(1357), 1,
      anon_sym_RPAREN,
    STATE(485), 1,
      aux_sym_CREATE_VERTEX_repeat1,
  [13819] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1359), 1,
      anon_sym_RBRACE,
    ACTIONS(1361), 1,
      anon_sym_COMMA,
    STATE(526), 1,
      aux_sym_seedSet_repeat1,
  [13832] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1096), 1,
      anon_sym_COMMA,
    ACTIONS(1355), 1,
      anon_sym_SEMI,
    STATE(556), 1,
      aux_sym_accumDeclStmt_repeat2,
  [13845] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1364), 1,
      aux_sym_CREATE_VERTEX_token3,
    ACTIONS(1222), 2,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
  [13856] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1062), 1,
      anon_sym_LBRACE,
    ACTIONS(1064), 1,
      anon_sym_API,
    ACTIONS(1066), 1,
      anon_sym_SYNTAX,
  [13869] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1232), 1,
      anon_sym_COMMA,
    ACTIONS(1366), 1,
      anon_sym_RPAREN,
    STATE(490), 1,
      aux_sym_parameterList_repeat1,
  [13882] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1368), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [13891] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_COMMA,
    ACTIONS(1370), 1,
      anon_sym_RPAREN,
    STATE(516), 1,
      aux_sym_argList_repeat1,
  [13904] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1374), 1,
      anon_sym_primary_id_as_attribute,
    ACTIONS(1372), 2,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
  [13915] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_LBRACE,
    ACTIONS(901), 1,
      anon_sym_API,
    ACTIONS(903), 1,
      anon_sym_SYNTAX,
  [13928] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1232), 1,
      anon_sym_COMMA,
    ACTIONS(1376), 1,
      anon_sym_RPAREN,
    STATE(473), 1,
      aux_sym_parameterList_repeat1,
  [13941] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      aux_sym_queryBodyIfStmt_token2,
    ACTIONS(1378), 2,
      anon_sym_AND,
      anon_sym_OR,
  [13952] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1070), 1,
      anon_sym_COMMA,
    ACTIONS(1381), 1,
      anon_sym_RPAREN,
    STATE(559), 1,
      aux_sym_accumType_repeat1,
  [13965] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1070), 1,
      anon_sym_COMMA,
    ACTIONS(1381), 1,
      anon_sym_RPAREN,
    STATE(560), 1,
      aux_sym_accumType_repeat1,
  [13978] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1383), 1,
      aux_sym_queryBodyIfStmt_token3,
    ACTIONS(1386), 1,
      aux_sym_queryBodyIfStmt_token4,
    STATE(515), 1,
      aux_sym_queryBodyIfStmt_repeat1,
  [13991] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1389), 1,
      aux_sym_queryBodyIfStmt_token2,
    ACTIONS(1265), 2,
      anon_sym_AND,
      anon_sym_OR,
  [14002] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1109), 3,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COLON,
  [14011] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1391), 1,
      aux_sym_queryBodyIfStmt_token3,
    ACTIONS(1393), 1,
      aux_sym_queryBodyIfStmt_token4,
    STATE(515), 1,
      aux_sym_queryBodyIfStmt_repeat1,
  [14024] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1319), 1,
      anon_sym_COMMA,
    ACTIONS(1395), 1,
      anon_sym_RPAREN,
    STATE(496), 1,
      aux_sym_perClauseV2_repeat1,
  [14037] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1397), 1,
      anon_sym_COMMA,
    ACTIONS(1400), 1,
      anon_sym_SEMI,
    STATE(544), 1,
      aux_sym_baseDeclStmt_repeat1,
  [14050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1402), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14059] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1406), 1,
      anon_sym_GT,
    ACTIONS(1404), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [14070] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1331), 1,
      anon_sym_COMMA,
    ACTIONS(1408), 1,
      anon_sym_RBRACK,
    STATE(513), 1,
      aux_sym_vExprSet_repeat1,
  [14083] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1410), 1,
      anon_sym_EQ,
    ACTIONS(1400), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14094] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1088), 1,
      anon_sym_LBRACE,
    ACTIONS(1090), 1,
      anon_sym_API,
    ACTIONS(1092), 1,
      anon_sym_SYNTAX,
  [14107] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1176), 1,
      anon_sym_COMMA,
    ACTIONS(1412), 1,
      anon_sym_SEMI,
    STATE(479), 1,
      aux_sym_baseDeclStmt_repeat1,
  [14120] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1414), 1,
      anon_sym_EQ,
    ACTIONS(1416), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14131] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1416), 1,
      anon_sym_SEMI,
    ACTIONS(1418), 1,
      anon_sym_COMMA,
    STATE(552), 1,
      aux_sym_accumDeclStmt_repeat1,
  [14144] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1421), 1,
      anon_sym_LBRACE,
    ACTIONS(1423), 1,
      anon_sym_API,
    ACTIONS(1425), 1,
      anon_sym_SYNTAX,
  [14157] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1096), 1,
      anon_sym_COMMA,
    ACTIONS(1355), 1,
      anon_sym_SEMI,
    STATE(509), 1,
      aux_sym_accumDeclStmt_repeat2,
  [14170] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1427), 1,
      anon_sym_EQ,
    ACTIONS(1429), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14181] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1429), 1,
      anon_sym_SEMI,
    ACTIONS(1431), 1,
      anon_sym_COMMA,
    STATE(556), 1,
      aux_sym_accumDeclStmt_repeat2,
  [14194] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1263), 1,
      anon_sym_DOT_STAR,
    ACTIONS(1434), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [14205] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1259), 1,
      anon_sym_COMMA,
    ACTIONS(1437), 1,
      anon_sym_RBRACE,
    STATE(478), 1,
      aux_sym_seedSet_repeat1,
  [14218] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1070), 1,
      anon_sym_COMMA,
    ACTIONS(1439), 1,
      anon_sym_RPAREN,
    STATE(560), 1,
      aux_sym_accumType_repeat1,
  [14231] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1105), 1,
      anon_sym_RPAREN,
    ACTIONS(1441), 1,
      anon_sym_COMMA,
    STATE(560), 1,
      aux_sym_accumType_repeat1,
  [14244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1025), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COLON,
  [14253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1359), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [14261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1444), 2,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
  [14269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1446), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [14277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1448), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [14285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1450), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14293] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1421), 1,
      anon_sym_LBRACE,
    ACTIONS(1425), 1,
      anon_sym_SYNTAX,
  [14303] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    STATE(678), 1,
      sym_stringLiteral,
  [14313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1088), 1,
      anon_sym_LBRACE,
    ACTIONS(1092), 1,
      anon_sym_SYNTAX,
  [14323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1452), 2,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
  [14331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1454), 1,
      anon_sym_RPAREN,
    ACTIONS(1456), 1,
      anon_sym_COLON,
  [14341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1458), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1460), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1462), 2,
      aux_sym_queryBodyIfStmt_token3,
      aux_sym_queryBodyIfStmt_token4,
  [14365] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1464), 1,
      anon_sym_LPAREN,
    STATE(624), 1,
      sym_selectVertParams,
  [14375] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_AT_AT,
    STATE(555), 1,
      sym_globalAccumName,
  [14385] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    STATE(662), 1,
      sym_stringLiteral,
  [14395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1372), 2,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
  [14403] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    STATE(629), 1,
      sym_stringLiteral,
  [14413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1466), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14421] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1468), 1,
      anon_sym_LBRACE,
    ACTIONS(1470), 1,
      anon_sym_SYNTAX,
  [14431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1472), 2,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
  [14439] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1062), 1,
      anon_sym_LBRACE,
    ACTIONS(1066), 1,
      anon_sym_SYNTAX,
  [14449] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1474), 1,
      anon_sym_LBRACE,
    ACTIONS(1476), 1,
      anon_sym_SYNTAX,
  [14459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1478), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1480), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [14475] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    STATE(658), 1,
      sym_stringLiteral,
  [14485] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    STATE(696), 1,
      sym_stringLiteral,
  [14495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1482), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1485), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14511] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1487), 1,
      anon_sym_LBRACE,
    ACTIONS(1489), 1,
      anon_sym_SYNTAX,
  [14521] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1491), 1,
      aux_sym_accumClause_token1,
    ACTIONS(1493), 1,
      aux_sym_postAccumClause_token1,
  [14531] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    STATE(728), 1,
      sym_stringLiteral,
  [14541] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    STATE(664), 1,
      sym_stringLiteral,
  [14551] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    STATE(673), 1,
      sym_stringLiteral,
  [14561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1495), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14569] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1497), 1,
      anon_sym_LBRACE,
    ACTIONS(1499), 1,
      anon_sym_SYNTAX,
  [14579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1501), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [14587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1503), 2,
      anon_sym_DQUOTEnone_DQUOTE,
      anon_sym_DQUOTEoutdegree_by_edgetype_DQUOTE,
  [14595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1349), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1321), 2,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
  [14611] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(994), 1,
      anon_sym_LBRACE,
    ACTIONS(998), 1,
      anon_sym_SYNTAX,
  [14621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1505), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14629] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 1,
      anon_sym_AT,
    STATE(551), 1,
      sym_localAccumName,
  [14639] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1507), 1,
      aux_sym_condition_token1,
    ACTIONS(1509), 1,
      aux_sym_condition_token4,
  [14649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1511), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [14657] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      aux_sym_integer_token1,
    STATE(13), 1,
      aux_sym_integer_repeat1,
  [14667] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    STATE(710), 1,
      sym_stringLiteral,
  [14677] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 1,
      anon_sym_DOLLAR,
    STATE(712), 1,
      sym_columnId,
  [14687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1513), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [14695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1515), 2,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
  [14703] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1517), 1,
      aux_sym_integer_token1,
    STATE(476), 1,
      aux_sym_integer_repeat1,
  [14713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1299), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1519), 2,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
  [14729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1521), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [14737] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1523), 1,
      aux_sym_integer_token1,
    STATE(16), 1,
      aux_sym_integer_repeat1,
  [14747] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_AT_AT,
    STATE(455), 1,
      sym_globalAccumName,
  [14757] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1525), 1,
      aux_sym_primary_id_name_type_token1,
    STATE(493), 1,
      sym_primary_id_name_type,
  [14767] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1527), 1,
      anon_sym_LPAREN,
    ACTIONS(1529), 1,
      anon_sym_EQ,
  [14777] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    STATE(783), 1,
      sym_stringLiteral,
  [14787] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1531), 1,
      aux_sym_fromClause_token1,
    STATE(248), 1,
      sym_fromClause,
  [14797] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1533), 1,
      aux_sym_createSignature_token4,
    ACTIONS(1535), 1,
      anon_sym_QUERY,
  [14807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1537), 2,
      anon_sym_DQUOTEnone_DQUOTE,
      anon_sym_DQUOTEoutdegree_by_edgetype_DQUOTE,
  [14815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1539), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [14823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1541), 2,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
  [14831] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1543), 1,
      anon_sym_EQ,
    ACTIONS(1545), 1,
      anon_sym_DOT,
  [14841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1547), 2,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
  [14849] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      anon_sym_LBRACE,
    ACTIONS(863), 1,
      anon_sym_SYNTAX,
  [14859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1549), 1,
      anon_sym_RPAREN,
  [14866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1551), 1,
      anon_sym_SEMI,
  [14873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1553), 1,
      anon_sym_EQ,
  [14880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1555), 1,
      anon_sym_LPAREN,
  [14887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1557), 1,
      anon_sym_GRAPH,
  [14894] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1559), 1,
      anon_sym_RPAREN,
  [14901] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1561), 1,
      anon_sym_EQ,
  [14908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1563), 1,
      anon_sym_COMMA,
  [14915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1565), 1,
      anon_sym_SEMI,
  [14922] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1567), 1,
      anon_sym_COMMA,
  [14929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1569), 1,
      aux_sym_queryBodyIfStmt_token4,
  [14936] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1571), 1,
      anon_sym_SEMI,
  [14943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1573), 1,
      anon_sym_RPAREN,
  [14950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1575), 1,
      anon_sym_COMMA,
  [14957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1578), 1,
      anon_sym_PLUS_EQ,
  [14964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      anon_sym_LBRACE,
  [14971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1487), 1,
      anon_sym_LBRACE,
  [14978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1580), 1,
      anon_sym_LPAREN,
  [14985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1582), 1,
      anon_sym_LBRACE,
  [14992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1584), 1,
      aux_sym_selectVertParams_token1,
  [14999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1586), 1,
      anon_sym_RPAREN,
  [15006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1213), 1,
      anon_sym_SEMI,
  [15013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1588), 1,
      anon_sym_LBRACE,
  [15020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1590), 1,
      anon_sym_SEMI,
  [15027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1497), 1,
      anon_sym_LBRACE,
  [15034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1592), 1,
      anon_sym_SEMI,
  [15041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1594), 1,
      anon_sym_RPAREN,
  [15048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1596), 1,
      anon_sym_GT,
  [15055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      anon_sym_LBRACE,
  [15062] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1598), 1,
      anon_sym_RPAREN,
  [15069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1600), 1,
      aux_sym_constant_token1,
  [15076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1602), 1,
      anon_sym_SEMI,
  [15083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1474), 1,
      anon_sym_LBRACE,
  [15090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1604), 1,
      anon_sym_RPAREN,
  [15097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1606), 1,
      anon_sym_GT,
  [15104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1608), 1,
      anon_sym_COMMA,
  [15111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1610), 1,
      anon_sym_LBRACE,
  [15118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_LBRACE,
  [15125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1612), 1,
      anon_sym_LPAREN,
  [15132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1614), 1,
      anon_sym_SEMI,
  [15139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1616), 1,
      anon_sym_LPAREN,
  [15146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1618), 1,
      anon_sym_GRAPH,
  [15153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_RPAREN,
  [15160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1468), 1,
      anon_sym_LBRACE,
  [15167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1620), 1,
      anon_sym_RPAREN,
  [15174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1622), 1,
      anon_sym_DQUOTEtrue_DQUOTE,
  [15181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      aux_sym_gsqlSelectClause_token1,
  [15188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1624), 1,
      aux_sym_fromClause_token1,
  [15195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1626), 1,
      anon_sym_DOT_STAR,
  [15202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1628), 1,
      anon_sym_RPAREN,
  [15209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1630), 1,
      anon_sym_LPAREN,
  [15216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1421), 1,
      anon_sym_LBRACE,
  [15223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1632), 1,
      anon_sym_COMMA,
  [15230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1634), 1,
      anon_sym_SEMI,
  [15237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1636), 1,
      anon_sym_EQ,
  [15244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1493), 1,
      aux_sym_postAccumClause_token1,
  [15251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1638), 1,
      anon_sym_LPAREN,
  [15258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1640), 1,
      anon_sym_RPAREN,
  [15265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1642), 1,
      anon_sym_EQ,
  [15272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1644), 1,
      anon_sym_DQUOTEtrue_DQUOTE,
  [15279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1088), 1,
      anon_sym_LBRACE,
  [15286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1646), 1,
      anon_sym_RPAREN,
  [15293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1648), 1,
      anon_sym_GT,
  [15300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1650), 1,
      anon_sym_SEMI,
  [15307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1652), 1,
      anon_sym_SEMI,
  [15314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1117), 1,
      anon_sym_SEMI,
  [15321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1655), 1,
      anon_sym_GT,
  [15328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1657), 1,
      anon_sym_RPAREN,
  [15335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1659), 1,
      anon_sym_RPAREN,
  [15342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1661), 1,
      anon_sym_LPAREN,
  [15349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1663), 1,
      aux_sym_condition_token4,
  [15356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1665), 1,
      anon_sym_COMMA,
  [15363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1131), 1,
      anon_sym_SEMI,
  [15370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1667), 1,
      anon_sym_COMMA,
  [15377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1669), 1,
      anon_sym_LPAREN,
  [15384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1671), 1,
      anon_sym_EQ,
  [15391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1673), 1,
      anon_sym_SEMI,
  [15398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1675), 1,
      anon_sym_SEMI,
  [15405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1677), 1,
      anon_sym_GT,
  [15412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1679), 1,
      anon_sym_LPAREN,
  [15419] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1062), 1,
      anon_sym_LBRACE,
  [15426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1681), 1,
      anon_sym_RPAREN,
  [15433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1683), 1,
      anon_sym_GT,
  [15440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1685), 1,
      anon_sym_COMMA,
  [15447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1687), 1,
      anon_sym_LPAREN,
  [15454] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1689), 1,
      anon_sym_LPAREN,
  [15461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1691), 1,
      anon_sym_GRAPH,
  [15468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_RPAREN,
  [15475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1693), 1,
      anon_sym_LPAREN,
  [15482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1695), 1,
      anon_sym_GRAPH,
  [15489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1217), 1,
      anon_sym_SEMI,
  [15496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1697), 1,
      anon_sym_RPAREN,
  [15503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1699), 1,
      anon_sym_LPAREN,
  [15510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1701), 1,
      anon_sym_LPAREN,
  [15517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1703), 1,
      anon_sym_RPAREN,
  [15524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1705), 1,
      anon_sym_RPAREN,
  [15531] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1707), 1,
      anon_sym_SEMI,
  [15538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1709), 1,
      anon_sym_DQUOTEtrue_DQUOTE,
  [15545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1711), 1,
      anon_sym_RBRACE,
  [15552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1713), 1,
      anon_sym_RPAREN,
  [15559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1715), 1,
      anon_sym_GRAPH,
  [15566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1717), 1,
      aux_sym_condition_token2,
  [15573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1719), 1,
      anon_sym_LPAREN,
  [15580] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1721), 1,
      anon_sym_RPAREN,
  [15587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1723), 1,
      ts_builtin_sym_end,
  [15594] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(994), 1,
      anon_sym_LBRACE,
  [15601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1725), 1,
      anon_sym_COMMA,
  [15608] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1727), 1,
      anon_sym_EQ,
  [15615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1729), 1,
      anon_sym_GT,
  [15622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1731), 1,
      anon_sym_GT,
  [15629] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1733), 1,
      anon_sym_GT,
  [15636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1735), 1,
      anon_sym_EQ,
  [15643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_RPAREN,
  [15650] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1737), 1,
      anon_sym_DASH,
  [15657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1739), 1,
      anon_sym_LT,
  [15664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1741), 1,
      anon_sym_LPAREN,
  [15671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1743), 1,
      anon_sym_RBRACE,
  [15678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1745), 1,
      anon_sym_RPAREN,
  [15685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1747), 1,
      anon_sym_LPAREN,
  [15692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1749), 1,
      anon_sym_LPAREN,
  [15699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1751), 1,
      anon_sym_RPAREN,
  [15706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1753), 1,
      anon_sym_RPAREN,
  [15713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1755), 1,
      anon_sym_SEMI,
  [15720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1757), 1,
      aux_sym_queryBodyIfStmt_token1,
  [15727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1759), 1,
      aux_sym_queryBodyIfStmt_token4,
  [15734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1761), 1,
      anon_sym_LT,
  [15741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1763), 1,
      anon_sym_SEMI,
  [15748] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1765), 1,
      anon_sym_LPAREN,
  [15755] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1767), 1,
      anon_sym_QUERY,
  [15762] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1769), 1,
      anon_sym_EQ,
  [15769] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1771), 1,
      anon_sym_EQ,
  [15776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1773), 1,
      anon_sym_SEMI,
  [15783] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1775), 1,
      anon_sym_SEMI,
  [15790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1777), 1,
      anon_sym_SEMI,
  [15797] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1779), 1,
      anon_sym_SEMI,
  [15804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1781), 1,
      anon_sym_RBRACE,
  [15811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1783), 1,
      anon_sym_SEMI,
  [15818] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1785), 1,
      anon_sym_SEMI,
  [15825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1787), 1,
      aux_sym_condition_token2,
  [15832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1789), 1,
      anon_sym_RBRACE,
  [15839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1791), 1,
      anon_sym_LPAREN,
  [15846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1793), 1,
      anon_sym_LT,
  [15853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1795), 1,
      anon_sym_LT,
  [15860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1797), 1,
      aux_sym_condition_token2,
  [15867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1799), 1,
      anon_sym_LT,
  [15874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1801), 1,
      anon_sym_LT,
  [15881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1803), 1,
      anon_sym_LT,
  [15888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1805), 1,
      anon_sym_LT,
  [15895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1807), 1,
      aux_sym_condition_token2,
  [15902] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1809), 1,
      aux_sym_typedef_token2,
  [15909] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1811), 1,
      anon_sym_LPAREN,
  [15916] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1813), 1,
      anon_sym_DQUOTEtrue_DQUOTE,
  [15923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1815), 1,
      anon_sym_LPAREN,
  [15930] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1817), 1,
      anon_sym_LPAREN,
  [15937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1819), 1,
      anon_sym_RPAREN,
  [15944] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1821), 1,
      anon_sym_QUERY,
  [15951] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1823), 1,
      aux_sym_createSignature_token3,
  [15958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1825), 1,
      anon_sym_LBRACE,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 137,
  [SMALL_STATE(4)] = 259,
  [SMALL_STATE(5)] = 341,
  [SMALL_STATE(6)] = 423,
  [SMALL_STATE(7)] = 466,
  [SMALL_STATE(8)] = 508,
  [SMALL_STATE(9)] = 555,
  [SMALL_STATE(10)] = 602,
  [SMALL_STATE(11)] = 647,
  [SMALL_STATE(12)] = 693,
  [SMALL_STATE(13)] = 737,
  [SMALL_STATE(14)] = 781,
  [SMALL_STATE(15)] = 827,
  [SMALL_STATE(16)] = 871,
  [SMALL_STATE(17)] = 915,
  [SMALL_STATE(18)] = 955,
  [SMALL_STATE(19)] = 999,
  [SMALL_STATE(20)] = 1040,
  [SMALL_STATE(21)] = 1078,
  [SMALL_STATE(22)] = 1116,
  [SMALL_STATE(23)] = 1154,
  [SMALL_STATE(24)] = 1192,
  [SMALL_STATE(25)] = 1230,
  [SMALL_STATE(26)] = 1268,
  [SMALL_STATE(27)] = 1306,
  [SMALL_STATE(28)] = 1344,
  [SMALL_STATE(29)] = 1382,
  [SMALL_STATE(30)] = 1420,
  [SMALL_STATE(31)] = 1463,
  [SMALL_STATE(32)] = 1506,
  [SMALL_STATE(33)] = 1549,
  [SMALL_STATE(34)] = 1592,
  [SMALL_STATE(35)] = 1635,
  [SMALL_STATE(36)] = 1672,
  [SMALL_STATE(37)] = 1715,
  [SMALL_STATE(38)] = 1758,
  [SMALL_STATE(39)] = 1801,
  [SMALL_STATE(40)] = 1844,
  [SMALL_STATE(41)] = 1912,
  [SMALL_STATE(42)] = 1954,
  [SMALL_STATE(43)] = 2022,
  [SMALL_STATE(44)] = 2090,
  [SMALL_STATE(45)] = 2132,
  [SMALL_STATE(46)] = 2174,
  [SMALL_STATE(47)] = 2237,
  [SMALL_STATE(48)] = 2275,
  [SMALL_STATE(49)] = 2313,
  [SMALL_STATE(50)] = 2351,
  [SMALL_STATE(51)] = 2388,
  [SMALL_STATE(52)] = 2425,
  [SMALL_STATE(53)] = 2462,
  [SMALL_STATE(54)] = 2510,
  [SMALL_STATE(55)] = 2558,
  [SMALL_STATE(56)] = 2624,
  [SMALL_STATE(57)] = 2690,
  [SMALL_STATE(58)] = 2738,
  [SMALL_STATE(59)] = 2775,
  [SMALL_STATE(60)] = 2808,
  [SMALL_STATE(61)] = 2855,
  [SMALL_STATE(62)] = 2888,
  [SMALL_STATE(63)] = 2925,
  [SMALL_STATE(64)] = 2958,
  [SMALL_STATE(65)] = 2995,
  [SMALL_STATE(66)] = 3055,
  [SMALL_STATE(67)] = 3107,
  [SMALL_STATE(68)] = 3167,
  [SMALL_STATE(69)] = 3227,
  [SMALL_STATE(70)] = 3287,
  [SMALL_STATE(71)] = 3347,
  [SMALL_STATE(72)] = 3407,
  [SMALL_STATE(73)] = 3467,
  [SMALL_STATE(74)] = 3503,
  [SMALL_STATE(75)] = 3539,
  [SMALL_STATE(76)] = 3575,
  [SMALL_STATE(77)] = 3635,
  [SMALL_STATE(78)] = 3695,
  [SMALL_STATE(79)] = 3731,
  [SMALL_STATE(80)] = 3791,
  [SMALL_STATE(81)] = 3851,
  [SMALL_STATE(82)] = 3911,
  [SMALL_STATE(83)] = 3971,
  [SMALL_STATE(84)] = 4031,
  [SMALL_STATE(85)] = 4091,
  [SMALL_STATE(86)] = 4151,
  [SMALL_STATE(87)] = 4183,
  [SMALL_STATE(88)] = 4240,
  [SMALL_STATE(89)] = 4297,
  [SMALL_STATE(90)] = 4354,
  [SMALL_STATE(91)] = 4411,
  [SMALL_STATE(92)] = 4468,
  [SMALL_STATE(93)] = 4525,
  [SMALL_STATE(94)] = 4578,
  [SMALL_STATE(95)] = 4635,
  [SMALL_STATE(96)] = 4692,
  [SMALL_STATE(97)] = 4749,
  [SMALL_STATE(98)] = 4806,
  [SMALL_STATE(99)] = 4863,
  [SMALL_STATE(100)] = 4920,
  [SMALL_STATE(101)] = 4977,
  [SMALL_STATE(102)] = 5034,
  [SMALL_STATE(103)] = 5091,
  [SMALL_STATE(104)] = 5148,
  [SMALL_STATE(105)] = 5201,
  [SMALL_STATE(106)] = 5258,
  [SMALL_STATE(107)] = 5315,
  [SMALL_STATE(108)] = 5372,
  [SMALL_STATE(109)] = 5429,
  [SMALL_STATE(110)] = 5486,
  [SMALL_STATE(111)] = 5543,
  [SMALL_STATE(112)] = 5595,
  [SMALL_STATE(113)] = 5647,
  [SMALL_STATE(114)] = 5681,
  [SMALL_STATE(115)] = 5733,
  [SMALL_STATE(116)] = 5785,
  [SMALL_STATE(117)] = 5819,
  [SMALL_STATE(118)] = 5853,
  [SMALL_STATE(119)] = 5905,
  [SMALL_STATE(120)] = 5957,
  [SMALL_STATE(121)] = 6009,
  [SMALL_STATE(122)] = 6061,
  [SMALL_STATE(123)] = 6095,
  [SMALL_STATE(124)] = 6129,
  [SMALL_STATE(125)] = 6163,
  [SMALL_STATE(126)] = 6215,
  [SMALL_STATE(127)] = 6249,
  [SMALL_STATE(128)] = 6301,
  [SMALL_STATE(129)] = 6335,
  [SMALL_STATE(130)] = 6369,
  [SMALL_STATE(131)] = 6421,
  [SMALL_STATE(132)] = 6454,
  [SMALL_STATE(133)] = 6487,
  [SMALL_STATE(134)] = 6520,
  [SMALL_STATE(135)] = 6567,
  [SMALL_STATE(136)] = 6600,
  [SMALL_STATE(137)] = 6633,
  [SMALL_STATE(138)] = 6666,
  [SMALL_STATE(139)] = 6713,
  [SMALL_STATE(140)] = 6746,
  [SMALL_STATE(141)] = 6779,
  [SMALL_STATE(142)] = 6812,
  [SMALL_STATE(143)] = 6859,
  [SMALL_STATE(144)] = 6906,
  [SMALL_STATE(145)] = 6958,
  [SMALL_STATE(146)] = 7002,
  [SMALL_STATE(147)] = 7046,
  [SMALL_STATE(148)] = 7090,
  [SMALL_STATE(149)] = 7142,
  [SMALL_STATE(150)] = 7183,
  [SMALL_STATE(151)] = 7224,
  [SMALL_STATE(152)] = 7250,
  [SMALL_STATE(153)] = 7296,
  [SMALL_STATE(154)] = 7324,
  [SMALL_STATE(155)] = 7352,
  [SMALL_STATE(156)] = 7398,
  [SMALL_STATE(157)] = 7426,
  [SMALL_STATE(158)] = 7448,
  [SMALL_STATE(159)] = 7476,
  [SMALL_STATE(160)] = 7504,
  [SMALL_STATE(161)] = 7536,
  [SMALL_STATE(162)] = 7579,
  [SMALL_STATE(163)] = 7603,
  [SMALL_STATE(164)] = 7629,
  [SMALL_STATE(165)] = 7655,
  [SMALL_STATE(166)] = 7681,
  [SMALL_STATE(167)] = 7707,
  [SMALL_STATE(168)] = 7731,
  [SMALL_STATE(169)] = 7757,
  [SMALL_STATE(170)] = 7783,
  [SMALL_STATE(171)] = 7807,
  [SMALL_STATE(172)] = 7832,
  [SMALL_STATE(173)] = 7857,
  [SMALL_STATE(174)] = 7882,
  [SMALL_STATE(175)] = 7911,
  [SMALL_STATE(176)] = 7936,
  [SMALL_STATE(177)] = 7959,
  [SMALL_STATE(178)] = 7984,
  [SMALL_STATE(179)] = 8007,
  [SMALL_STATE(180)] = 8030,
  [SMALL_STATE(181)] = 8067,
  [SMALL_STATE(182)] = 8092,
  [SMALL_STATE(183)] = 8117,
  [SMALL_STATE(184)] = 8144,
  [SMALL_STATE(185)] = 8169,
  [SMALL_STATE(186)] = 8192,
  [SMALL_STATE(187)] = 8226,
  [SMALL_STATE(188)] = 8248,
  [SMALL_STATE(189)] = 8284,
  [SMALL_STATE(190)] = 8308,
  [SMALL_STATE(191)] = 8332,
  [SMALL_STATE(192)] = 8356,
  [SMALL_STATE(193)] = 8380,
  [SMALL_STATE(194)] = 8414,
  [SMALL_STATE(195)] = 8448,
  [SMALL_STATE(196)] = 8482,
  [SMALL_STATE(197)] = 8510,
  [SMALL_STATE(198)] = 8538,
  [SMALL_STATE(199)] = 8560,
  [SMALL_STATE(200)] = 8594,
  [SMALL_STATE(201)] = 8622,
  [SMALL_STATE(202)] = 8656,
  [SMALL_STATE(203)] = 8690,
  [SMALL_STATE(204)] = 8714,
  [SMALL_STATE(205)] = 8748,
  [SMALL_STATE(206)] = 8782,
  [SMALL_STATE(207)] = 8816,
  [SMALL_STATE(208)] = 8844,
  [SMALL_STATE(209)] = 8866,
  [SMALL_STATE(210)] = 8889,
  [SMALL_STATE(211)] = 8912,
  [SMALL_STATE(212)] = 8935,
  [SMALL_STATE(213)] = 8964,
  [SMALL_STATE(214)] = 8987,
  [SMALL_STATE(215)] = 9006,
  [SMALL_STATE(216)] = 9025,
  [SMALL_STATE(217)] = 9048,
  [SMALL_STATE(218)] = 9079,
  [SMALL_STATE(219)] = 9110,
  [SMALL_STATE(220)] = 9140,
  [SMALL_STATE(221)] = 9168,
  [SMALL_STATE(222)] = 9196,
  [SMALL_STATE(223)] = 9217,
  [SMALL_STATE(224)] = 9242,
  [SMALL_STATE(225)] = 9265,
  [SMALL_STATE(226)] = 9286,
  [SMALL_STATE(227)] = 9309,
  [SMALL_STATE(228)] = 9324,
  [SMALL_STATE(229)] = 9345,
  [SMALL_STATE(230)] = 9368,
  [SMALL_STATE(231)] = 9389,
  [SMALL_STATE(232)] = 9410,
  [SMALL_STATE(233)] = 9431,
  [SMALL_STATE(234)] = 9454,
  [SMALL_STATE(235)] = 9475,
  [SMALL_STATE(236)] = 9496,
  [SMALL_STATE(237)] = 9519,
  [SMALL_STATE(238)] = 9540,
  [SMALL_STATE(239)] = 9557,
  [SMALL_STATE(240)] = 9580,
  [SMALL_STATE(241)] = 9603,
  [SMALL_STATE(242)] = 9618,
  [SMALL_STATE(243)] = 9639,
  [SMALL_STATE(244)] = 9663,
  [SMALL_STATE(245)] = 9681,
  [SMALL_STATE(246)] = 9705,
  [SMALL_STATE(247)] = 9729,
  [SMALL_STATE(248)] = 9749,
  [SMALL_STATE(249)] = 9775,
  [SMALL_STATE(250)] = 9793,
  [SMALL_STATE(251)] = 9813,
  [SMALL_STATE(252)] = 9837,
  [SMALL_STATE(253)] = 9851,
  [SMALL_STATE(254)] = 9867,
  [SMALL_STATE(255)] = 9891,
  [SMALL_STATE(256)] = 9913,
  [SMALL_STATE(257)] = 9937,
  [SMALL_STATE(258)] = 9957,
  [SMALL_STATE(259)] = 9973,
  [SMALL_STATE(260)] = 9995,
  [SMALL_STATE(261)] = 10009,
  [SMALL_STATE(262)] = 10029,
  [SMALL_STATE(263)] = 10053,
  [SMALL_STATE(264)] = 10077,
  [SMALL_STATE(265)] = 10091,
  [SMALL_STATE(266)] = 10109,
  [SMALL_STATE(267)] = 10122,
  [SMALL_STATE(268)] = 10135,
  [SMALL_STATE(269)] = 10154,
  [SMALL_STATE(270)] = 10167,
  [SMALL_STATE(271)] = 10182,
  [SMALL_STATE(272)] = 10203,
  [SMALL_STATE(273)] = 10220,
  [SMALL_STATE(274)] = 10233,
  [SMALL_STATE(275)] = 10252,
  [SMALL_STATE(276)] = 10273,
  [SMALL_STATE(277)] = 10291,
  [SMALL_STATE(278)] = 10309,
  [SMALL_STATE(279)] = 10321,
  [SMALL_STATE(280)] = 10337,
  [SMALL_STATE(281)] = 10355,
  [SMALL_STATE(282)] = 10373,
  [SMALL_STATE(283)] = 10385,
  [SMALL_STATE(284)] = 10397,
  [SMALL_STATE(285)] = 10409,
  [SMALL_STATE(286)] = 10431,
  [SMALL_STATE(287)] = 10443,
  [SMALL_STATE(288)] = 10457,
  [SMALL_STATE(289)] = 10477,
  [SMALL_STATE(290)] = 10491,
  [SMALL_STATE(291)] = 10507,
  [SMALL_STATE(292)] = 10521,
  [SMALL_STATE(293)] = 10539,
  [SMALL_STATE(294)] = 10553,
  [SMALL_STATE(295)] = 10571,
  [SMALL_STATE(296)] = 10589,
  [SMALL_STATE(297)] = 10603,
  [SMALL_STATE(298)] = 10621,
  [SMALL_STATE(299)] = 10643,
  [SMALL_STATE(300)] = 10661,
  [SMALL_STATE(301)] = 10679,
  [SMALL_STATE(302)] = 10697,
  [SMALL_STATE(303)] = 10709,
  [SMALL_STATE(304)] = 10727,
  [SMALL_STATE(305)] = 10749,
  [SMALL_STATE(306)] = 10763,
  [SMALL_STATE(307)] = 10781,
  [SMALL_STATE(308)] = 10795,
  [SMALL_STATE(309)] = 10811,
  [SMALL_STATE(310)] = 10823,
  [SMALL_STATE(311)] = 10839,
  [SMALL_STATE(312)] = 10855,
  [SMALL_STATE(313)] = 10875,
  [SMALL_STATE(314)] = 10891,
  [SMALL_STATE(315)] = 10903,
  [SMALL_STATE(316)] = 10917,
  [SMALL_STATE(317)] = 10935,
  [SMALL_STATE(318)] = 10957,
  [SMALL_STATE(319)] = 10973,
  [SMALL_STATE(320)] = 10991,
  [SMALL_STATE(321)] = 11013,
  [SMALL_STATE(322)] = 11029,
  [SMALL_STATE(323)] = 11047,
  [SMALL_STATE(324)] = 11065,
  [SMALL_STATE(325)] = 11080,
  [SMALL_STATE(326)] = 11095,
  [SMALL_STATE(327)] = 11110,
  [SMALL_STATE(328)] = 11125,
  [SMALL_STATE(329)] = 11140,
  [SMALL_STATE(330)] = 11155,
  [SMALL_STATE(331)] = 11170,
  [SMALL_STATE(332)] = 11185,
  [SMALL_STATE(333)] = 11200,
  [SMALL_STATE(334)] = 11215,
  [SMALL_STATE(335)] = 11230,
  [SMALL_STATE(336)] = 11245,
  [SMALL_STATE(337)] = 11260,
  [SMALL_STATE(338)] = 11275,
  [SMALL_STATE(339)] = 11290,
  [SMALL_STATE(340)] = 11303,
  [SMALL_STATE(341)] = 11318,
  [SMALL_STATE(342)] = 11337,
  [SMALL_STATE(343)] = 11352,
  [SMALL_STATE(344)] = 11369,
  [SMALL_STATE(345)] = 11386,
  [SMALL_STATE(346)] = 11401,
  [SMALL_STATE(347)] = 11412,
  [SMALL_STATE(348)] = 11427,
  [SMALL_STATE(349)] = 11442,
  [SMALL_STATE(350)] = 11457,
  [SMALL_STATE(351)] = 11472,
  [SMALL_STATE(352)] = 11491,
  [SMALL_STATE(353)] = 11506,
  [SMALL_STATE(354)] = 11521,
  [SMALL_STATE(355)] = 11536,
  [SMALL_STATE(356)] = 11551,
  [SMALL_STATE(357)] = 11566,
  [SMALL_STATE(358)] = 11577,
  [SMALL_STATE(359)] = 11594,
  [SMALL_STATE(360)] = 11607,
  [SMALL_STATE(361)] = 11624,
  [SMALL_STATE(362)] = 11637,
  [SMALL_STATE(363)] = 11652,
  [SMALL_STATE(364)] = 11663,
  [SMALL_STATE(365)] = 11674,
  [SMALL_STATE(366)] = 11689,
  [SMALL_STATE(367)] = 11704,
  [SMALL_STATE(368)] = 11723,
  [SMALL_STATE(369)] = 11738,
  [SMALL_STATE(370)] = 11753,
  [SMALL_STATE(371)] = 11770,
  [SMALL_STATE(372)] = 11785,
  [SMALL_STATE(373)] = 11796,
  [SMALL_STATE(374)] = 11809,
  [SMALL_STATE(375)] = 11824,
  [SMALL_STATE(376)] = 11839,
  [SMALL_STATE(377)] = 11854,
  [SMALL_STATE(378)] = 11869,
  [SMALL_STATE(379)] = 11884,
  [SMALL_STATE(380)] = 11899,
  [SMALL_STATE(381)] = 11916,
  [SMALL_STATE(382)] = 11931,
  [SMALL_STATE(383)] = 11946,
  [SMALL_STATE(384)] = 11965,
  [SMALL_STATE(385)] = 11980,
  [SMALL_STATE(386)] = 11995,
  [SMALL_STATE(387)] = 12010,
  [SMALL_STATE(388)] = 12027,
  [SMALL_STATE(389)] = 12042,
  [SMALL_STATE(390)] = 12057,
  [SMALL_STATE(391)] = 12072,
  [SMALL_STATE(392)] = 12085,
  [SMALL_STATE(393)] = 12104,
  [SMALL_STATE(394)] = 12123,
  [SMALL_STATE(395)] = 12138,
  [SMALL_STATE(396)] = 12153,
  [SMALL_STATE(397)] = 12168,
  [SMALL_STATE(398)] = 12183,
  [SMALL_STATE(399)] = 12194,
  [SMALL_STATE(400)] = 12209,
  [SMALL_STATE(401)] = 12224,
  [SMALL_STATE(402)] = 12239,
  [SMALL_STATE(403)] = 12254,
  [SMALL_STATE(404)] = 12269,
  [SMALL_STATE(405)] = 12286,
  [SMALL_STATE(406)] = 12299,
  [SMALL_STATE(407)] = 12314,
  [SMALL_STATE(408)] = 12329,
  [SMALL_STATE(409)] = 12344,
  [SMALL_STATE(410)] = 12359,
  [SMALL_STATE(411)] = 12374,
  [SMALL_STATE(412)] = 12385,
  [SMALL_STATE(413)] = 12400,
  [SMALL_STATE(414)] = 12415,
  [SMALL_STATE(415)] = 12430,
  [SMALL_STATE(416)] = 12443,
  [SMALL_STATE(417)] = 12458,
  [SMALL_STATE(418)] = 12473,
  [SMALL_STATE(419)] = 12488,
  [SMALL_STATE(420)] = 12503,
  [SMALL_STATE(421)] = 12514,
  [SMALL_STATE(422)] = 12527,
  [SMALL_STATE(423)] = 12542,
  [SMALL_STATE(424)] = 12557,
  [SMALL_STATE(425)] = 12572,
  [SMALL_STATE(426)] = 12583,
  [SMALL_STATE(427)] = 12602,
  [SMALL_STATE(428)] = 12617,
  [SMALL_STATE(429)] = 12632,
  [SMALL_STATE(430)] = 12648,
  [SMALL_STATE(431)] = 12660,
  [SMALL_STATE(432)] = 12670,
  [SMALL_STATE(433)] = 12682,
  [SMALL_STATE(434)] = 12692,
  [SMALL_STATE(435)] = 12706,
  [SMALL_STATE(436)] = 12718,
  [SMALL_STATE(437)] = 12732,
  [SMALL_STATE(438)] = 12746,
  [SMALL_STATE(439)] = 12756,
  [SMALL_STATE(440)] = 12770,
  [SMALL_STATE(441)] = 12782,
  [SMALL_STATE(442)] = 12794,
  [SMALL_STATE(443)] = 12810,
  [SMALL_STATE(444)] = 12826,
  [SMALL_STATE(445)] = 12838,
  [SMALL_STATE(446)] = 12852,
  [SMALL_STATE(447)] = 12864,
  [SMALL_STATE(448)] = 12874,
  [SMALL_STATE(449)] = 12890,
  [SMALL_STATE(450)] = 12902,
  [SMALL_STATE(451)] = 12912,
  [SMALL_STATE(452)] = 12928,
  [SMALL_STATE(453)] = 12938,
  [SMALL_STATE(454)] = 12954,
  [SMALL_STATE(455)] = 12966,
  [SMALL_STATE(456)] = 12982,
  [SMALL_STATE(457)] = 12996,
  [SMALL_STATE(458)] = 13012,
  [SMALL_STATE(459)] = 13026,
  [SMALL_STATE(460)] = 13036,
  [SMALL_STATE(461)] = 13052,
  [SMALL_STATE(462)] = 13062,
  [SMALL_STATE(463)] = 13074,
  [SMALL_STATE(464)] = 13088,
  [SMALL_STATE(465)] = 13100,
  [SMALL_STATE(466)] = 13112,
  [SMALL_STATE(467)] = 13124,
  [SMALL_STATE(468)] = 13138,
  [SMALL_STATE(469)] = 13154,
  [SMALL_STATE(470)] = 13166,
  [SMALL_STATE(471)] = 13176,
  [SMALL_STATE(472)] = 13187,
  [SMALL_STATE(473)] = 13200,
  [SMALL_STATE(474)] = 13213,
  [SMALL_STATE(475)] = 13224,
  [SMALL_STATE(476)] = 13237,
  [SMALL_STATE(477)] = 13250,
  [SMALL_STATE(478)] = 13259,
  [SMALL_STATE(479)] = 13272,
  [SMALL_STATE(480)] = 13285,
  [SMALL_STATE(481)] = 13294,
  [SMALL_STATE(482)] = 13307,
  [SMALL_STATE(483)] = 13318,
  [SMALL_STATE(484)] = 13327,
  [SMALL_STATE(485)] = 13336,
  [SMALL_STATE(486)] = 13349,
  [SMALL_STATE(487)] = 13358,
  [SMALL_STATE(488)] = 13371,
  [SMALL_STATE(489)] = 13380,
  [SMALL_STATE(490)] = 13391,
  [SMALL_STATE(491)] = 13404,
  [SMALL_STATE(492)] = 13417,
  [SMALL_STATE(493)] = 13426,
  [SMALL_STATE(494)] = 13439,
  [SMALL_STATE(495)] = 13452,
  [SMALL_STATE(496)] = 13465,
  [SMALL_STATE(497)] = 13478,
  [SMALL_STATE(498)] = 13487,
  [SMALL_STATE(499)] = 13498,
  [SMALL_STATE(500)] = 13507,
  [SMALL_STATE(501)] = 13516,
  [SMALL_STATE(502)] = 13525,
  [SMALL_STATE(503)] = 13534,
  [SMALL_STATE(504)] = 13545,
  [SMALL_STATE(505)] = 13556,
  [SMALL_STATE(506)] = 13569,
  [SMALL_STATE(507)] = 13582,
  [SMALL_STATE(508)] = 13595,
  [SMALL_STATE(509)] = 13606,
  [SMALL_STATE(510)] = 13619,
  [SMALL_STATE(511)] = 13632,
  [SMALL_STATE(512)] = 13645,
  [SMALL_STATE(513)] = 13656,
  [SMALL_STATE(514)] = 13669,
  [SMALL_STATE(515)] = 13682,
  [SMALL_STATE(516)] = 13695,
  [SMALL_STATE(517)] = 13708,
  [SMALL_STATE(518)] = 13721,
  [SMALL_STATE(519)] = 13734,
  [SMALL_STATE(520)] = 13747,
  [SMALL_STATE(521)] = 13760,
  [SMALL_STATE(522)] = 13769,
  [SMALL_STATE(523)] = 13782,
  [SMALL_STATE(524)] = 13793,
  [SMALL_STATE(525)] = 13806,
  [SMALL_STATE(526)] = 13819,
  [SMALL_STATE(527)] = 13832,
  [SMALL_STATE(528)] = 13845,
  [SMALL_STATE(529)] = 13856,
  [SMALL_STATE(530)] = 13869,
  [SMALL_STATE(531)] = 13882,
  [SMALL_STATE(532)] = 13891,
  [SMALL_STATE(533)] = 13904,
  [SMALL_STATE(534)] = 13915,
  [SMALL_STATE(535)] = 13928,
  [SMALL_STATE(536)] = 13941,
  [SMALL_STATE(537)] = 13952,
  [SMALL_STATE(538)] = 13965,
  [SMALL_STATE(539)] = 13978,
  [SMALL_STATE(540)] = 13991,
  [SMALL_STATE(541)] = 14002,
  [SMALL_STATE(542)] = 14011,
  [SMALL_STATE(543)] = 14024,
  [SMALL_STATE(544)] = 14037,
  [SMALL_STATE(545)] = 14050,
  [SMALL_STATE(546)] = 14059,
  [SMALL_STATE(547)] = 14070,
  [SMALL_STATE(548)] = 14083,
  [SMALL_STATE(549)] = 14094,
  [SMALL_STATE(550)] = 14107,
  [SMALL_STATE(551)] = 14120,
  [SMALL_STATE(552)] = 14131,
  [SMALL_STATE(553)] = 14144,
  [SMALL_STATE(554)] = 14157,
  [SMALL_STATE(555)] = 14170,
  [SMALL_STATE(556)] = 14181,
  [SMALL_STATE(557)] = 14194,
  [SMALL_STATE(558)] = 14205,
  [SMALL_STATE(559)] = 14218,
  [SMALL_STATE(560)] = 14231,
  [SMALL_STATE(561)] = 14244,
  [SMALL_STATE(562)] = 14253,
  [SMALL_STATE(563)] = 14261,
  [SMALL_STATE(564)] = 14269,
  [SMALL_STATE(565)] = 14277,
  [SMALL_STATE(566)] = 14285,
  [SMALL_STATE(567)] = 14293,
  [SMALL_STATE(568)] = 14303,
  [SMALL_STATE(569)] = 14313,
  [SMALL_STATE(570)] = 14323,
  [SMALL_STATE(571)] = 14331,
  [SMALL_STATE(572)] = 14341,
  [SMALL_STATE(573)] = 14349,
  [SMALL_STATE(574)] = 14357,
  [SMALL_STATE(575)] = 14365,
  [SMALL_STATE(576)] = 14375,
  [SMALL_STATE(577)] = 14385,
  [SMALL_STATE(578)] = 14395,
  [SMALL_STATE(579)] = 14403,
  [SMALL_STATE(580)] = 14413,
  [SMALL_STATE(581)] = 14421,
  [SMALL_STATE(582)] = 14431,
  [SMALL_STATE(583)] = 14439,
  [SMALL_STATE(584)] = 14449,
  [SMALL_STATE(585)] = 14459,
  [SMALL_STATE(586)] = 14467,
  [SMALL_STATE(587)] = 14475,
  [SMALL_STATE(588)] = 14485,
  [SMALL_STATE(589)] = 14495,
  [SMALL_STATE(590)] = 14503,
  [SMALL_STATE(591)] = 14511,
  [SMALL_STATE(592)] = 14521,
  [SMALL_STATE(593)] = 14531,
  [SMALL_STATE(594)] = 14541,
  [SMALL_STATE(595)] = 14551,
  [SMALL_STATE(596)] = 14561,
  [SMALL_STATE(597)] = 14569,
  [SMALL_STATE(598)] = 14579,
  [SMALL_STATE(599)] = 14587,
  [SMALL_STATE(600)] = 14595,
  [SMALL_STATE(601)] = 14603,
  [SMALL_STATE(602)] = 14611,
  [SMALL_STATE(603)] = 14621,
  [SMALL_STATE(604)] = 14629,
  [SMALL_STATE(605)] = 14639,
  [SMALL_STATE(606)] = 14649,
  [SMALL_STATE(607)] = 14657,
  [SMALL_STATE(608)] = 14667,
  [SMALL_STATE(609)] = 14677,
  [SMALL_STATE(610)] = 14687,
  [SMALL_STATE(611)] = 14695,
  [SMALL_STATE(612)] = 14703,
  [SMALL_STATE(613)] = 14713,
  [SMALL_STATE(614)] = 14721,
  [SMALL_STATE(615)] = 14729,
  [SMALL_STATE(616)] = 14737,
  [SMALL_STATE(617)] = 14747,
  [SMALL_STATE(618)] = 14757,
  [SMALL_STATE(619)] = 14767,
  [SMALL_STATE(620)] = 14777,
  [SMALL_STATE(621)] = 14787,
  [SMALL_STATE(622)] = 14797,
  [SMALL_STATE(623)] = 14807,
  [SMALL_STATE(624)] = 14815,
  [SMALL_STATE(625)] = 14823,
  [SMALL_STATE(626)] = 14831,
  [SMALL_STATE(627)] = 14841,
  [SMALL_STATE(628)] = 14849,
  [SMALL_STATE(629)] = 14859,
  [SMALL_STATE(630)] = 14866,
  [SMALL_STATE(631)] = 14873,
  [SMALL_STATE(632)] = 14880,
  [SMALL_STATE(633)] = 14887,
  [SMALL_STATE(634)] = 14894,
  [SMALL_STATE(635)] = 14901,
  [SMALL_STATE(636)] = 14908,
  [SMALL_STATE(637)] = 14915,
  [SMALL_STATE(638)] = 14922,
  [SMALL_STATE(639)] = 14929,
  [SMALL_STATE(640)] = 14936,
  [SMALL_STATE(641)] = 14943,
  [SMALL_STATE(642)] = 14950,
  [SMALL_STATE(643)] = 14957,
  [SMALL_STATE(644)] = 14964,
  [SMALL_STATE(645)] = 14971,
  [SMALL_STATE(646)] = 14978,
  [SMALL_STATE(647)] = 14985,
  [SMALL_STATE(648)] = 14992,
  [SMALL_STATE(649)] = 14999,
  [SMALL_STATE(650)] = 15006,
  [SMALL_STATE(651)] = 15013,
  [SMALL_STATE(652)] = 15020,
  [SMALL_STATE(653)] = 15027,
  [SMALL_STATE(654)] = 15034,
  [SMALL_STATE(655)] = 15041,
  [SMALL_STATE(656)] = 15048,
  [SMALL_STATE(657)] = 15055,
  [SMALL_STATE(658)] = 15062,
  [SMALL_STATE(659)] = 15069,
  [SMALL_STATE(660)] = 15076,
  [SMALL_STATE(661)] = 15083,
  [SMALL_STATE(662)] = 15090,
  [SMALL_STATE(663)] = 15097,
  [SMALL_STATE(664)] = 15104,
  [SMALL_STATE(665)] = 15111,
  [SMALL_STATE(666)] = 15118,
  [SMALL_STATE(667)] = 15125,
  [SMALL_STATE(668)] = 15132,
  [SMALL_STATE(669)] = 15139,
  [SMALL_STATE(670)] = 15146,
  [SMALL_STATE(671)] = 15153,
  [SMALL_STATE(672)] = 15160,
  [SMALL_STATE(673)] = 15167,
  [SMALL_STATE(674)] = 15174,
  [SMALL_STATE(675)] = 15181,
  [SMALL_STATE(676)] = 15188,
  [SMALL_STATE(677)] = 15195,
  [SMALL_STATE(678)] = 15202,
  [SMALL_STATE(679)] = 15209,
  [SMALL_STATE(680)] = 15216,
  [SMALL_STATE(681)] = 15223,
  [SMALL_STATE(682)] = 15230,
  [SMALL_STATE(683)] = 15237,
  [SMALL_STATE(684)] = 15244,
  [SMALL_STATE(685)] = 15251,
  [SMALL_STATE(686)] = 15258,
  [SMALL_STATE(687)] = 15265,
  [SMALL_STATE(688)] = 15272,
  [SMALL_STATE(689)] = 15279,
  [SMALL_STATE(690)] = 15286,
  [SMALL_STATE(691)] = 15293,
  [SMALL_STATE(692)] = 15300,
  [SMALL_STATE(693)] = 15307,
  [SMALL_STATE(694)] = 15314,
  [SMALL_STATE(695)] = 15321,
  [SMALL_STATE(696)] = 15328,
  [SMALL_STATE(697)] = 15335,
  [SMALL_STATE(698)] = 15342,
  [SMALL_STATE(699)] = 15349,
  [SMALL_STATE(700)] = 15356,
  [SMALL_STATE(701)] = 15363,
  [SMALL_STATE(702)] = 15370,
  [SMALL_STATE(703)] = 15377,
  [SMALL_STATE(704)] = 15384,
  [SMALL_STATE(705)] = 15391,
  [SMALL_STATE(706)] = 15398,
  [SMALL_STATE(707)] = 15405,
  [SMALL_STATE(708)] = 15412,
  [SMALL_STATE(709)] = 15419,
  [SMALL_STATE(710)] = 15426,
  [SMALL_STATE(711)] = 15433,
  [SMALL_STATE(712)] = 15440,
  [SMALL_STATE(713)] = 15447,
  [SMALL_STATE(714)] = 15454,
  [SMALL_STATE(715)] = 15461,
  [SMALL_STATE(716)] = 15468,
  [SMALL_STATE(717)] = 15475,
  [SMALL_STATE(718)] = 15482,
  [SMALL_STATE(719)] = 15489,
  [SMALL_STATE(720)] = 15496,
  [SMALL_STATE(721)] = 15503,
  [SMALL_STATE(722)] = 15510,
  [SMALL_STATE(723)] = 15517,
  [SMALL_STATE(724)] = 15524,
  [SMALL_STATE(725)] = 15531,
  [SMALL_STATE(726)] = 15538,
  [SMALL_STATE(727)] = 15545,
  [SMALL_STATE(728)] = 15552,
  [SMALL_STATE(729)] = 15559,
  [SMALL_STATE(730)] = 15566,
  [SMALL_STATE(731)] = 15573,
  [SMALL_STATE(732)] = 15580,
  [SMALL_STATE(733)] = 15587,
  [SMALL_STATE(734)] = 15594,
  [SMALL_STATE(735)] = 15601,
  [SMALL_STATE(736)] = 15608,
  [SMALL_STATE(737)] = 15615,
  [SMALL_STATE(738)] = 15622,
  [SMALL_STATE(739)] = 15629,
  [SMALL_STATE(740)] = 15636,
  [SMALL_STATE(741)] = 15643,
  [SMALL_STATE(742)] = 15650,
  [SMALL_STATE(743)] = 15657,
  [SMALL_STATE(744)] = 15664,
  [SMALL_STATE(745)] = 15671,
  [SMALL_STATE(746)] = 15678,
  [SMALL_STATE(747)] = 15685,
  [SMALL_STATE(748)] = 15692,
  [SMALL_STATE(749)] = 15699,
  [SMALL_STATE(750)] = 15706,
  [SMALL_STATE(751)] = 15713,
  [SMALL_STATE(752)] = 15720,
  [SMALL_STATE(753)] = 15727,
  [SMALL_STATE(754)] = 15734,
  [SMALL_STATE(755)] = 15741,
  [SMALL_STATE(756)] = 15748,
  [SMALL_STATE(757)] = 15755,
  [SMALL_STATE(758)] = 15762,
  [SMALL_STATE(759)] = 15769,
  [SMALL_STATE(760)] = 15776,
  [SMALL_STATE(761)] = 15783,
  [SMALL_STATE(762)] = 15790,
  [SMALL_STATE(763)] = 15797,
  [SMALL_STATE(764)] = 15804,
  [SMALL_STATE(765)] = 15811,
  [SMALL_STATE(766)] = 15818,
  [SMALL_STATE(767)] = 15825,
  [SMALL_STATE(768)] = 15832,
  [SMALL_STATE(769)] = 15839,
  [SMALL_STATE(770)] = 15846,
  [SMALL_STATE(771)] = 15853,
  [SMALL_STATE(772)] = 15860,
  [SMALL_STATE(773)] = 15867,
  [SMALL_STATE(774)] = 15874,
  [SMALL_STATE(775)] = 15881,
  [SMALL_STATE(776)] = 15888,
  [SMALL_STATE(777)] = 15895,
  [SMALL_STATE(778)] = 15902,
  [SMALL_STATE(779)] = 15909,
  [SMALL_STATE(780)] = 15916,
  [SMALL_STATE(781)] = 15923,
  [SMALL_STATE(782)] = 15930,
  [SMALL_STATE(783)] = 15937,
  [SMALL_STATE(784)] = 15944,
  [SMALL_STATE(785)] = 15951,
  [SMALL_STATE(786)] = 15958,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(270),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(219),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(776),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(282),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(283),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(284),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(286),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(287),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(775),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(774),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(773),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(771),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(770),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(418),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declStmts_repeat1, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declStmts, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declStmts, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumName, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumName, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_globalAccumName, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_globalAccumName, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2), SHIFT_REPEAT(10),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedefs, 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typedefs, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 3),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typedefs_repeat1, 2), SHIFT_REPEAT(778),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typedefs_repeat1, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_typedefs_repeat1, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 4),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real, 4),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_localAccumName, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_localAccumName, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expr, 3), REDUCE(sym_setBagExpr, 3),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_expr, 3), REDUCE(sym_setBagExpr, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringLiteral, 2),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringLiteral, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 4),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 4),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expr, 1), REDUCE(sym_setBagExpr, 1),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_expr, 1), REDUCE(sym_setBagExpr, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setBagExpr, 3),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setBagExpr, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringLiteral, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringLiteral, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(32),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(32),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(36),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(36),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(38),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(38),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(45),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(45),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(48),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(51),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(51),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 3),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 3),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expr, 3), SHIFT(215),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_expr, 3), SHIFT(215),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(75),
  [403] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(75),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_queryBodyStmts_repeat1, 2), SHIFT_REPEAT(80),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_queryBodyStmts_repeat1, 2),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_queryBodyStmts_repeat1, 2), SHIFT_REPEAT(47),
  [440] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_queryBodyStmts_repeat1, 2), SHIFT_REPEAT(55),
  [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_queryBodyStmts_repeat1, 2), SHIFT_REPEAT(769),
  [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_queryBodyStmts_repeat1, 2), SHIFT_REPEAT(87),
  [449] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_queryBodyStmts_repeat1, 2), SHIFT_REPEAT(47),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBodyStmts, 1),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(117),
  [485] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(117),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(124),
  [499] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(124),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [506] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(128),
  [509] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(128),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(132),
  [523] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(132),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [538] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(135),
  [541] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(135),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(136),
  [547] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(136),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [604] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(154),
  [607] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(154),
  [610] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym_expr, 1), REDUCE(sym_setBagExpr, 1), REDUCE(sym_tableName, 1),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldName, 1),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printExpr, 1),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignStmt, 5),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argList, 1),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignStmt, 3),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gAccumAccumStmt, 3),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vSetProj, 1),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [668] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(187),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_CREATE_VERTEX_repeat1, 5),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [687] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(191),
  [690] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(191),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argList_repeat1, 2),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [703] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_atomicVertexType, 1), REDUCE(sym_name, 1),
  [706] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(210),
  [709] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(210),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparisonOperator, 1),
  [726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparisonOperator, 1),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mathOperator, 1),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mathOperator, 1),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnStmt, 2),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [736] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(222),
  [739] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(222),
  [742] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(225),
  [745] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(225),
  [748] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_atomicEdgeType, 1), REDUCE(sym_name, 1),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [765] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(234),
  [768] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(234),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_queryBodyStmts_repeat1, 2),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stepVertexTypes_repeat1, 2),
  [787] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stepVertexTypes_repeat1, 2), SHIFT_REPEAT(229),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsqlSelectBlock, 2),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepVertexTypes, 3),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [804] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_seed, 1), REDUCE(sym_name, 1),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setBagExpr, 1),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [813] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(261),
  [816] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(261),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 4),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepVertexTypes, 2),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertexSetName, 1),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertexSetType, 1),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseType, 1),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [831] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_paramName, 1), REDUCE(sym_vertexType, 1),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertexAlias, 1),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pathPattern, 2),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [848] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(457),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseType, 1, .production_id = 1),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseType, 1, .production_id = 2),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseType, 1, .production_id = 3),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 9),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumType, 1),
  [869] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumType, 1),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumType, 9),
  [873] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumType, 9),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumType, 10),
  [879] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumType, 10),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumType, 11),
  [885] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumType, 11),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumType, 6),
  [893] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumType, 6),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 7),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [905] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(299),
  [908] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(299),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [913] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomicVertexType, 1),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 8),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumType, 4, .production_id = 5),
  [931] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumType, 4, .production_id = 5),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [935] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumType, 4),
  [939] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumType, 4),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseType, 4),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pathPattern_repeat1, 2),
  [945] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pathPattern_repeat1, 2), SHIFT_REPEAT(685),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsqlSelectBlock, 3),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepVertexTypes, 1),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepVertexSet, 1),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 5),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pathPattern, 1),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 6),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simpleSet, 1),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fromClause, 3),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 10),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vExprSet, 4),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fromClause, 2),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printStmt, 3),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1016] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fromClause_repeat1, 2), SHIFT_REPEAT(155),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fromClause_repeat1, 2),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepVertexSet, 3),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepEdgeTypes, 2),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomicEdgeType, 1),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsqlSelectBlock, 5),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tupleType, 1),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepVertexSet, 2),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsqlSelectBlock, 4),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simpleSet, 3),
  [1043] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_simpleSet, 3), SHIFT(275),
  [1046] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_printStmt_repeat1, 2), SHIFT_REPEAT(56),
  [1049] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_printStmt_repeat1, 2),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gsqlSelectBlock_repeat1, 2),
  [1053] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gsqlSelectBlock_repeat1, 2), SHIFT_REPEAT(722),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printStmt, 2),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 11),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [1076] = {.entry = {.count = 1, .reusable = false}}, SHIFT(737),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vExprSet, 5),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonKey, 1),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pathPattern_repeat1, 6),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 12),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumDeclStmt, 2),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_paramName, 1), REDUCE(sym_edgeType, 1),
  [1105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accumType_repeat1, 2),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stepEdgeTypes_repeat1, 2),
  [1111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stepEdgeTypes_repeat1, 2), SHIFT_REPEAT(236),
  [1114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_condition, 3), SHIFT(72),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printStmt, 4),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dmlSubStmtList, 2),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printExpr, 3),
  [1129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepEdgeTypes, 3),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vSetVarDeclStmt, 6),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1137] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stringLiteral_repeat1, 2),
  [1141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stringLiteral_repeat1, 2), SHIFT_REPEAT(442),
  [1144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stringLiteral_repeat1, 2), SHIFT_REPEAT(442),
  [1147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [1153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_condition, 3), SHIFT(70),
  [1156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_VERTEX, 8, .production_id = 4),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edgeSetType, 1),
  [1170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphName, 1),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseDeclStmt, 2),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumDeclStmt, 3),
  [1186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dmlSubStmtList, 1),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dmlSubStmtList_repeat1, 2), SHIFT_REPEAT(223),
  [1199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dmlSubStmtList_repeat1, 2),
  [1201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [1203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [1209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_whereClause, 2),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printStmt, 5),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vSetVarDeclStmt, 3),
  [1219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_condition, 3), SHIFT(68),
  [1222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_VERTEX, 7, .production_id = 4),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterList, 2),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [1236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_CREATE_VERTEX_repeat1, 3),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tupleFields, 2),
  [1244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterList, 5),
  [1246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameterList_repeat1, 3),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tupleFields_repeat1, 2), SHIFT_REPEAT(149),
  [1253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tupleFields_repeat1, 2),
  [1255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dmlSubStmt, 1),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseDeclStmt, 5),
  [1263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertexType, 1),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returns, 4),
  [1271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterType, 4),
  [1273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_CREATE_VERTEX_repeat1, 2),
  [1275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_CREATE_VERTEX_repeat1, 2), SHIFT_REPEAT(469),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameterList_repeat1, 2),
  [1286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameterList_repeat1, 2), SHIFT_REPEAT(150),
  [1289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tupleFields, 3),
  [1291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterType, 1),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumDeclStmt, 6),
  [1299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_perClauseV2_repeat1, 2),
  [1301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_perClauseV2_repeat1, 2), SHIFT_REPEAT(274),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_queryBodyIfStmt_repeat1, 2), SHIFT_REPEAT(752),
  [1315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_queryBodyIfStmt_repeat1, 2),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_VERTEX, 10, .production_id = 4),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [1325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumDeclStmt, 5),
  [1327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectVertParams, 11),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argList_repeat1, 2), SHIFT_REPEAT(91),
  [1342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseDeclStmt, 3),
  [1344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paramName, 1),
  [1346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vExprSet_repeat1, 2), SHIFT_REPEAT(77),
  [1349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vExprSet_repeat1, 2),
  [1351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_VERTEX, 6, .production_id = 4),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumDeclStmt, 4),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seedSet_repeat1, 2),
  [1361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seedSet_repeat1, 2), SHIFT_REPEAT(201),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterList, 3),
  [1368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterType, 3),
  [1370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argList, 2),
  [1372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_VERTEX, 11, .production_id = 4),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [1376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterList, 4),
  [1378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_condition, 3), SHIFT(69),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_queryBodyIfStmt_repeat1, 5), SHIFT(125),
  [1386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_queryBodyIfStmt_repeat1, 5), SHIFT(654),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseDeclStmt_repeat1, 2), SHIFT_REPEAT(465),
  [1400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_baseDeclStmt_repeat1, 2),
  [1402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filePath, 1),
  [1404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomicEdgePattern, 1),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseDeclStmt, 4),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accumDeclStmt_repeat1, 2),
  [1418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accumDeclStmt_repeat1, 2), SHIFT_REPEAT(604),
  [1421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 13),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accumDeclStmt_repeat2, 2),
  [1431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accumDeclStmt_repeat2, 2), SHIFT_REPEAT(576),
  [1434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_paramName, 1), REDUCE(sym_vertexSetName, 1),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accumType_repeat1, 2), SHIFT_REPEAT(403),
  [1444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_perClauseV2, 4),
  [1446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed, 1),
  [1448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepEdgeTypes, 1),
  [1450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accumDeclStmt_repeat2, 4),
  [1452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_VERTEX, 13, .production_id = 4),
  [1454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepEdgeSet, 1),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accumType_repeat1, 3),
  [1460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accumDeclStmt_repeat1, 4),
  [1462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_queryBodyIfStmt_repeat1, 5),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameterList_repeat1, 5),
  [1468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 14),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_VERTEX, 14, .production_id = 4),
  [1474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 15),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_id_name_type, 3),
  [1480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementType, 2),
  [1482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_vertexAlias, 1), REDUCE(sym_edgeAlias, 1),
  [1485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_baseDeclStmt_repeat1, 4),
  [1487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 16),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vSetProj, 3),
  [1497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 17),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tupleFields_repeat1, 3),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 1),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectVertParams, 16),
  [1513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementType, 1),
  [1515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_perClauseV2, 5),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createQuery, 4),
  [1521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomicEdgePattern, 2),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed, 2),
  [1541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postAccumClause, 3),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumClause, 3),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 6),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simpleSize, 1),
  [1565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seedSet, 3),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [1571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBodyIfStmt, 6),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1575] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_paramName, 1), REDUCE(sym_varName, 1),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 19),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [1588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 18),
  [1590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fileDeclStmt, 5),
  [1592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBodyIfStmt, 5),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printStmt, 6),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntaxName, 1),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logStmt, 6),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsqlSelectClause, 4),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seedSet, 2),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pathEdgePattern, 1),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1652] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_fileVar, 1), REDUCE(sym_paramName, 1),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_columnId, 2),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [1673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seedSet, 4),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepEdgeSet, 3),
  [1705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pathEdgePattern, 3),
  [1707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBodyIfStmt, 8),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBody, 3),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1723] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attrName, 1),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBody, 2),
  [1745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edgeAlias, 1),
  [1747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fileVar, 1),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepEdgeSet, 2),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [1755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printStmt, 7),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBodyIfStmt, 7),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectStmt, 1),
  [1775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBodyStmt, 1),
  [1777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declStmt, 1),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBody, 1),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [1811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryName, 1),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
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
