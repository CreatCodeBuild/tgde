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
#define STATE_COUNT 771
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 235
#define ALIAS_COUNT 5
#define TOKEN_COUNT 118
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
  aux_sym_elementType_token1 = 70,
  anon_sym_PLUS_EQ = 71,
  anon_sym_DOT = 72,
  aux_sym_queryBodyIfStmt_token1 = 73,
  aux_sym_queryBodyIfStmt_token2 = 74,
  aux_sym_queryBodyIfStmt_token3 = 75,
  aux_sym_queryBodyIfStmt_token4 = 76,
  aux_sym_fileDeclStmt_token1 = 77,
  aux_sym_simpleSet_token1 = 78,
  aux_sym_simpleSet_token2 = 79,
  aux_sym_simpleSet_token3 = 80,
  anon_sym__ = 81,
  aux_sym_seed_token1 = 82,
  anon_sym_DOT_STAR = 83,
  aux_sym_seed_token2 = 84,
  aux_sym_selectVertParams_token1 = 85,
  anon_sym_DOLLAR = 86,
  anon_sym_SQUOTE = 87,
  aux_sym_printStmt_token1 = 88,
  aux_sym_printStmt_token2 = 89,
  aux_sym_printStmt_token3 = 90,
  aux_sym_printExpr_token1 = 91,
  anon_sym_LBRACK = 92,
  anon_sym_RBRACK = 93,
  aux_sym_returnStmt_token1 = 94,
  aux_sym_gsqlSelectClause_token1 = 95,
  aux_sym_fromClause_token1 = 96,
  anon_sym_DASH_GT = 97,
  anon_sym_COLON = 98,
  anon_sym_WHERE = 99,
  aux_sym_accumClause_token1 = 100,
  aux_sym_postAccumClause_token1 = 101,
  aux_sym_perClauseV2_token1 = 102,
  anon_sym_DQUOTE = 103,
  aux_sym_stringLiteral_token1 = 104,
  sym_escape_sequence = 105,
  aux_sym_integer_token1 = 106,
  aux_sym_name_token1 = 107,
  aux_sym_name_token2 = 108,
  aux_sym_baseType_token1 = 109,
  aux_sym_baseType_token2 = 110,
  aux_sym_baseType_token3 = 111,
  aux_sym_baseType_token4 = 112,
  aux_sym_baseType_token5 = 113,
  aux_sym_baseType_token6 = 114,
  anon_sym_SET = 115,
  anon_sym_BAG = 116,
  anon_sym_FILE = 117,
  sym_source_file = 118,
  sym_createQuery = 119,
  sym_createSignature = 120,
  sym_returns = 121,
  sym_parameterList = 122,
  sym_syntaxName = 123,
  sym_queryBody = 124,
  sym_typedefs = 125,
  sym_typedef = 126,
  sym_tupleFields = 127,
  sym_declStmts = 128,
  sym_declStmt = 129,
  sym_queryBodyStmts = 130,
  sym_queryBodyStmt = 131,
  sym_constant = 132,
  sym_mathOperator = 133,
  sym_condition = 134,
  sym_comparisonOperator = 135,
  sym_pathPattern = 136,
  sym_pathEdgePattern = 137,
  sym_atomicEdgePattern = 138,
  sym_CREATE_VERTEX = 139,
  sym_primary_id_name_type = 140,
  sym_accumDeclStmt = 141,
  sym_localAccumName = 142,
  sym_globalAccumName = 143,
  sym_accumType = 144,
  sym_elementType = 145,
  sym_gAccumAccumStmt = 146,
  sym_assignStmt = 147,
  sym_argList = 148,
  sym_queryBodyIfStmt = 149,
  sym_simpleSize = 150,
  sym_baseDeclStmt = 151,
  sym_fileDeclStmt = 152,
  sym_fileVar = 153,
  sym_vSetVarDeclStmt = 154,
  sym_simpleSet = 155,
  sym_seedSet = 156,
  sym_seed = 157,
  sym_selectVertParams = 158,
  sym_columnId = 159,
  sym_expr = 160,
  sym_setBagExpr = 161,
  sym_printStmt = 162,
  sym_printExpr = 163,
  sym_vExprSet = 164,
  sym_vSetProj = 165,
  sym_jsonKey = 166,
  sym_returnStmt = 167,
  sym_selectStmt = 168,
  sym_gsqlSelectBlock = 169,
  sym_gsqlSelectClause = 170,
  sym_tableName = 171,
  sym_fromClause = 172,
  sym_stepEdgeSet = 173,
  sym_stepVertexSet = 174,
  sym_alias = 175,
  sym_vertexAlias = 176,
  sym_edgeAlias = 177,
  sym_stepEdgeTypes = 178,
  sym_atomicEdgeType = 179,
  sym_edgeSetType = 180,
  sym_stepVertexTypes = 181,
  sym_atomicVertexType = 182,
  sym_vertexSetType = 183,
  sym_whereClause = 184,
  sym_accumClause = 185,
  sym_postAccumClause = 186,
  sym_perClauseV2 = 187,
  sym_dmlSubStmtList = 188,
  sym_dmlSubStmt = 189,
  sym_stringLiteral = 190,
  sym_integer = 191,
  sym_real = 192,
  sym_numeric = 193,
  sym_name = 194,
  sym_graphName = 195,
  sym_queryName = 196,
  sym_paramName = 197,
  sym_vertexType = 198,
  sym_edgeType = 199,
  sym_accumName = 200,
  sym_vertexSetName = 201,
  sym_attrName = 202,
  sym_varName = 203,
  sym_tupleType = 204,
  sym_fieldName = 205,
  sym_filePath = 206,
  sym_type = 207,
  sym_baseType = 208,
  sym_parameterType = 209,
  aux_sym_source_file_repeat1 = 210,
  aux_sym_parameterList_repeat1 = 211,
  aux_sym_typedefs_repeat1 = 212,
  aux_sym_tupleFields_repeat1 = 213,
  aux_sym_declStmts_repeat1 = 214,
  aux_sym_queryBodyStmts_repeat1 = 215,
  aux_sym_pathPattern_repeat1 = 216,
  aux_sym_CREATE_VERTEX_repeat1 = 217,
  aux_sym_accumDeclStmt_repeat1 = 218,
  aux_sym_accumType_repeat1 = 219,
  aux_sym_argList_repeat1 = 220,
  aux_sym_queryBodyIfStmt_repeat1 = 221,
  aux_sym_baseDeclStmt_repeat1 = 222,
  aux_sym_seedSet_repeat1 = 223,
  aux_sym_printStmt_repeat1 = 224,
  aux_sym_vExprSet_repeat1 = 225,
  aux_sym_gsqlSelectBlock_repeat1 = 226,
  aux_sym_fromClause_repeat1 = 227,
  aux_sym_stepEdgeTypes_repeat1 = 228,
  aux_sym_stepVertexTypes_repeat1 = 229,
  aux_sym_perClauseV2_repeat1 = 230,
  aux_sym_dmlSubStmtList_repeat1 = 231,
  aux_sym_stringLiteral_repeat1 = 232,
  aux_sym_integer_repeat1 = 233,
  aux_sym_name_repeat1 = 234,
  anon_alias_sym_CREATE = 235,
  anon_alias_sym_DOUBLE = 236,
  anon_alias_sym_FLOAT = 237,
  anon_alias_sym_INT = 238,
  anon_alias_sym_string = 239,
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
      if (eof) ADVANCE(450);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\r') SKIP(447)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '"') ADVANCE(560);
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == '$') ADVANCE(543);
      if (lookahead == '%') ADVANCE(479);
      if (lookahead == '&') ADVANCE(486);
      if (lookahead == '\'') ADVANCE(544);
      if (lookahead == '(') ADVANCE(458);
      if (lookahead == ')') ADVANCE(459);
      if (lookahead == '*') ADVANCE(477);
      if (lookahead == '+') ADVANCE(481);
      if (lookahead == ',') ADVANCE(467);
      if (lookahead == '-') ADVANCE(483);
      if (lookahead == '.') ADVANCE(529);
      if (lookahead == '/') ADVANCE(478);
      if (lookahead == ':') ADVANCE(555);
      if (lookahead == ';') ADVANCE(468);
      if (lookahead == '<') ADVANCE(472);
      if (lookahead == '=') ADVANCE(466);
      if (lookahead == '>') ADVANCE(474);
      if (lookahead == '@') ADVANCE(510);
      if (lookahead == 'A') ADVANCE(627);
      if (lookahead == 'B') ADVANCE(671);
      if (lookahead == 'D') ADVANCE(633);
      if (lookahead == 'E') ADVANCE(640);
      if (lookahead == 'F') ADVANCE(636);
      if (lookahead == 'H') ADVANCE(641);
      if (lookahead == 'I') ADVANCE(653);
      if (lookahead == 'J') ADVANCE(679);
      if (lookahead == 'L') ADVANCE(659);
      if (lookahead == 'M') ADVANCE(638);
      if (lookahead == 'N') ADVANCE(673);
      if (lookahead == 'O') ADVANCE(630);
      if (lookahead == 'P') ADVANCE(643);
      if (lookahead == 'R') ADVANCE(646);
      if (lookahead == 'S') ADVANCE(632);
      if (lookahead == 'T') ADVANCE(656);
      if (lookahead == 'U') ADVANCE(662);
      if (lookahead == 'V') ADVANCE(644);
      if (lookahead == 'W') ADVANCE(625);
      if (lookahead == '[') ADVANCE(549);
      if (lookahead == '\\') ADVANCE(88);
      if (lookahead == ']') ADVANCE(550);
      if (lookahead == '_') ADVANCE(538);
      if (lookahead == 'a') ADVANCE(605);
      if (lookahead == 'b') ADVANCE(611);
      if (lookahead == 'd') ADVANCE(571);
      if (lookahead == 'e') ADVANCE(578);
      if (lookahead == 'f') ADVANCE(574);
      if (lookahead == 'h') ADVANCE(579);
      if (lookahead == 'i') ADVANCE(592);
      if (lookahead == 'j') ADVANCE(619);
      if (lookahead == 'l') ADVANCE(598);
      if (lookahead == 'm') ADVANCE(576);
      if (lookahead == 'n') ADVANCE(613);
      if (lookahead == 'p') ADVANCE(581);
      if (lookahead == 'r') ADVANCE(585);
      if (lookahead == 's') ADVANCE(582);
      if (lookahead == 't') ADVANCE(595);
      if (lookahead == 'u') ADVANCE(601);
      if (lookahead == 'v') ADVANCE(583);
      if (lookahead == 'w') ADVANCE(596);
      if (lookahead == '{') ADVANCE(451);
      if (lookahead == '|') ADVANCE(487);
      if (lookahead == '}') ADVANCE(452);
      if (('C' <= lookahead && lookahead <= 'Z')) ADVANCE(623);
      if (('c' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(403)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(404)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(405)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(406)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(407)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(408)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(409)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(410)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(411)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(412)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(413)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(414)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(415)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(416)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(417)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(418)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(419)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(420)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(421)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(422)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(423)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(424)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(425)
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(426)
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(427)
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(428)
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(429)
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(430)
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(431)
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(432)
      END_STATE();
    case 31:
      if (lookahead == '\n') SKIP(433)
      END_STATE();
    case 32:
      if (lookahead == '\n') SKIP(434)
      END_STATE();
    case 33:
      if (lookahead == '\n') SKIP(435)
      END_STATE();
    case 34:
      if (lookahead == '\n') SKIP(436)
      END_STATE();
    case 35:
      if (lookahead == '\n') SKIP(437)
      END_STATE();
    case 36:
      if (lookahead == '\n') SKIP(438)
      END_STATE();
    case 37:
      if (lookahead == '"') ADVANCE(504);
      END_STATE();
    case 38:
      if (lookahead == '"') ADVANCE(507);
      END_STATE();
    case 39:
      if (lookahead == '"') ADVANCE(505);
      END_STATE();
    case 40:
      if (lookahead == '*') ADVANCE(42);
      if (lookahead == '/') ADVANCE(499);
      END_STATE();
    case 41:
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '/') ADVANCE(498);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == '*') ADVANCE(41);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == '*') ADVANCE(540);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(164);
      END_STATE();
    case 45:
      if (lookahead == '<') ADVANCE(484);
      END_STATE();
    case 46:
      if (lookahead == '=') ADVANCE(497);
      END_STATE();
    case 47:
      if (lookahead == '=') ADVANCE(528);
      END_STATE();
    case 48:
      if (lookahead == '=') ADVANCE(496);
      END_STATE();
    case 49:
      if (lookahead == '>') ADVANCE(485);
      END_STATE();
    case 50:
      if (lookahead == '@') ADVANCE(511);
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
          lookahead == 'o') ADVANCE(305);
      END_STATE();
    case 54:
      if (lookahead == 'D') ADVANCE(492);
      END_STATE();
    case 55:
      if (lookahead == 'D') ADVANCE(492);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(539);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(80);
      if (lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(556);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(556);
      if (lookahead == 'e') ADVANCE(546);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(87);
      if (lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(691);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(85);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(330);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(78);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(82);
      END_STATE();
    case 64:
      if (lookahead == 'G') ADVANCE(690);
      END_STATE();
    case 65:
      if (lookahead == 'H') ADVANCE(461);
      END_STATE();
    case 66:
      if (lookahead == 'H') ADVANCE(63);
      END_STATE();
    case 67:
      if (lookahead == 'I') ADVANCE(462);
      END_STATE();
    case 68:
      if (lookahead == 'I') ADVANCE(69);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(306);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(304);
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
          lookahead == 'c') ADVANCE(182);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(548);
      END_STATE();
    case 72:
      if (lookahead == 'N') ADVANCE(54);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(548);
      END_STATE();
    case 73:
      if (lookahead == 'N') ADVANCE(83);
      END_STATE();
    case 74:
      if (lookahead == 'O') ADVANCE(77);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(271);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(272);
      END_STATE();
    case 75:
      if (lookahead == 'P') ADVANCE(65);
      END_STATE();
    case 76:
      if (lookahead == 'R') ADVANCE(493);
      END_STATE();
    case 77:
      if (lookahead == 'R') ADVANCE(460);
      END_STATE();
    case 78:
      if (lookahead == 'R') ADVANCE(93);
      END_STATE();
    case 79:
      if (lookahead == 'R') ADVANCE(73);
      END_STATE();
    case 80:
      if (lookahead == 'R') ADVANCE(58);
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 81:
      if (lookahead == 'R') ADVANCE(52);
      END_STATE();
    case 82:
      if (lookahead == 'R') ADVANCE(57);
      END_STATE();
    case 83:
      if (lookahead == 'S') ADVANCE(464);
      END_STATE();
    case 84:
      if (lookahead == 'T') ADVANCE(51);
      END_STATE();
    case 85:
      if (lookahead == 'T') ADVANCE(689);
      END_STATE();
    case 86:
      if (lookahead == 'T') ADVANCE(90);
      END_STATE();
    case 87:
      if (lookahead == 'T') ADVANCE(90);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(264);
      END_STATE();
    case 88:
      if (lookahead == 'U') ADVANCE(446);
      if (lookahead == 'u') ADVANCE(442);
      if (lookahead == 'x') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(568);
      if (lookahead != 0) ADVANCE(566);
      END_STATE();
    case 89:
      if (lookahead == 'U') ADVANCE(62);
      END_STATE();
    case 90:
      if (lookahead == 'U') ADVANCE(79);
      END_STATE();
    case 91:
      if (lookahead == 'X') ADVANCE(463);
      END_STATE();
    case 92:
      if (lookahead == 'Y') ADVANCE(70);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(157);
      END_STATE();
    case 93:
      if (lookahead == 'Y') ADVANCE(457);
      END_STATE();
    case 94:
      if (lookahead == '_') ADVANCE(172);
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
      if (lookahead == '_') ADVANCE(250);
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
      if (lookahead == 'e') ADVANCE(506);
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
          lookahead == 'e') ADVANCE(318);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(349);
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
          lookahead == ' ') ADVANCE(564);
      if (lookahead == '\n') SKIP(437)
      if (lookahead == '\r') ADVANCE(565);
      if (lookahead == '"') ADVANCE(560);
      if (lookahead == '#') ADVANCE(565);
      if (lookahead == '/') ADVANCE(561);
      if (lookahead == '\\') ADVANCE(88);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 146:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(365);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(238);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(350);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(381);
      END_STATE();
    case 147:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(271);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(272);
      END_STATE();
    case 148:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(401);
      END_STATE();
    case 149:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(317);
      END_STATE();
    case 150:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 151:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(364);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 152:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(383);
      END_STATE();
    case 153:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(323);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 154:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 155:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(354);
      END_STATE();
    case 156:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(321);
      END_STATE();
    case 157:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(368);
      END_STATE();
    case 158:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(372);
      END_STATE();
    case 159:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 160:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 161:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 162:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(191);
      END_STATE();
    case 163:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 164:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 165:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 166:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(258);
      END_STATE();
    case 167:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(395);
      END_STATE();
    case 168:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(269);
      END_STATE();
    case 169:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(524);
      END_STATE();
    case 170:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(509);
      END_STATE();
    case 171:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(523);
      END_STATE();
    case 172:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(338);
      END_STATE();
    case 173:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(174);
      END_STATE();
    case 174:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(385);
      END_STATE();
    case 175:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(386);
      END_STATE();
    case 176:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(387);
      END_STATE();
    case 177:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(388);
      END_STATE();
    case 178:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(356);
      END_STATE();
    case 179:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(389);
      END_STATE();
    case 180:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(391);
      END_STATE();
    case 181:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(358);
      END_STATE();
    case 182:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(392);
      END_STATE();
    case 183:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(393);
      END_STATE();
    case 184:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(394);
      END_STATE();
    case 185:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(363);
      END_STATE();
    case 186:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(217);
      END_STATE();
    case 187:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(362);
      END_STATE();
    case 188:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(175);
      END_STATE();
    case 189:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(176);
      END_STATE();
    case 190:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(177);
      END_STATE();
    case 191:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(179);
      END_STATE();
    case 192:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(180);
      END_STATE();
    case 193:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(182);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(548);
      END_STATE();
    case 194:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(183);
      END_STATE();
    case 195:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(184);
      END_STATE();
    case 196:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(310);
      END_STATE();
    case 197:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(241);
      END_STATE();
    case 198:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(533);
      END_STATE();
    case 199:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(456);
      END_STATE();
    case 200:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(508);
      END_STATE();
    case 201:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(213);
      END_STATE();
    case 202:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 203:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(318);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(349);
      END_STATE();
    case 204:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(318);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(255);
      END_STATE();
    case 205:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(685);
      END_STATE();
    case 206:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(532);
      END_STATE();
    case 207:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(534);
      END_STATE();
    case 208:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(475);
      END_STATE();
    case 209:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(476);
      END_STATE();
    case 210:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(398);
      END_STATE();
    case 211:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(546);
      END_STATE();
    case 212:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(515);
      END_STATE();
    case 213:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 214:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(688);
      END_STATE();
    case 215:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(470);
      END_STATE();
    case 216:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(453);
      END_STATE();
    case 217:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(455);
      END_STATE();
    case 218:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 219:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 220:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(399);
      END_STATE();
    case 221:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 222:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 223:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 224:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(291);
      END_STATE();
    case 225:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 226:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 227:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 228:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(319);
      END_STATE();
    case 229:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 230:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(332);
      END_STATE();
    case 231:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 232:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(348);
      END_STATE();
    case 233:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 234:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 235:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(334);
      END_STATE();
    case 236:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(469);
      END_STATE();
    case 237:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(152);
      END_STATE();
    case 238:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(152);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(169);
      END_STATE();
    case 239:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(516);
      END_STATE();
    case 240:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(517);
      END_STATE();
    case 241:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(205);
      END_STATE();
    case 242:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(224);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 243:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(224);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(94);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(390);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(314);
      END_STATE();
    case 244:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(502);
      END_STATE();
    case 245:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(222);
      END_STATE();
    case 246:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(222);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(359);
      END_STATE();
    case 247:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(297);
      END_STATE();
    case 248:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(286);
      END_STATE();
    case 249:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 250:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 251:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(308);
      END_STATE();
    case 252:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(294);
      END_STATE();
    case 253:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 254:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(296);
      END_STATE();
    case 255:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(285);
      END_STATE();
    case 256:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(298);
      END_STATE();
    case 257:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(350);
      END_STATE();
    case 258:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(231);
      END_STATE();
    case 259:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(684);
      END_STATE();
    case 260:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(491);
      END_STATE();
    case 261:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(306);
      END_STATE();
    case 262:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(306);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(304);
      END_STATE();
    case 263:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(207);
      END_STATE();
    case 264:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 265:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(225);
      END_STATE();
    case 266:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(225);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(160);
      END_STATE();
    case 267:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(260);
      END_STATE();
    case 268:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(357);
      END_STATE();
    case 269:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(212);
      END_STATE();
    case 270:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(215);
      END_STATE();
    case 271:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(347);
      END_STATE();
    case 272:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(375);
      END_STATE();
    case 273:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(233);
      END_STATE();
    case 274:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(553);
      END_STATE();
    case 275:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(520);
      END_STATE();
    case 276:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(521);
      END_STATE();
    case 277:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(526);
      END_STATE();
    case 278:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(512);
      END_STATE();
    case 279:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(522);
      END_STATE();
    case 280:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(525);
      END_STATE();
    case 281:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(557);
      END_STATE();
    case 282:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(558);
      END_STATE();
    case 283:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(519);
      END_STATE();
    case 284:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(315);
      END_STATE();
    case 285:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(156);
      END_STATE();
    case 286:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(214);
      END_STATE();
    case 287:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(316);
      END_STATE();
    case 288:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(161);
      END_STATE();
    case 289:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(489);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(490);
      END_STATE();
    case 290:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 291:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(531);
      END_STATE();
    case 292:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(535);
      END_STATE();
    case 293:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(551);
      END_STATE();
    case 294:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(239);
      END_STATE();
    case 295:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(382);
      END_STATE();
    case 296:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(240);
      END_STATE();
    case 297:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(353);
      END_STATE();
    case 298:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(355);
      END_STATE();
    case 299:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(361);
      END_STATE();
    case 300:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(305);
      END_STATE();
    case 301:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(381);
      END_STATE();
    case 302:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(352);
      END_STATE();
    case 303:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(352);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(267);
      END_STATE();
    case 304:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(274);
      END_STATE();
    case 305:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(259);
      END_STATE();
    case 306:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 307:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(290);
      END_STATE();
    case 308:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(292);
      END_STATE();
    case 309:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(284);
      END_STATE();
    case 310:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(287);
      END_STATE();
    case 311:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(150);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(159);
      END_STATE();
    case 312:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(264);
      END_STATE();
    case 313:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(218);
      END_STATE();
    case 314:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(270);
      END_STATE();
    case 315:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(328);
      END_STATE();
    case 316:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(331);
      END_STATE();
    case 317:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(162);
      END_STATE();
    case 318:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(559);
      END_STATE();
    case 319:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(542);
      END_STATE();
    case 320:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(454);
      END_STATE();
    case 321:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(402);
      END_STATE();
    case 322:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 323:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(322);
      END_STATE();
    case 324:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(249);
      END_STATE();
    case 325:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(293);
      END_STATE();
    case 326:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 327:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 328:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(229);
      END_STATE();
    case 329:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(371);
      END_STATE();
    case 330:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 331:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 332:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(351);
      END_STATE();
    case 333:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(254);
      END_STATE();
    case 334:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(374);
      END_STATE();
    case 335:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(548);
      END_STATE();
    case 336:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(169);
      END_STATE();
    case 337:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(537);
      END_STATE();
    case 338:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(396);
      END_STATE();
    case 339:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(503);
      END_STATE();
    case 340:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(527);
      END_STATE();
    case 341:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(518);
      END_STATE();
    case 342:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(307);
      END_STATE();
    case 343:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(380);
      END_STATE();
    case 344:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(206);
      END_STATE();
    case 345:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(171);
      END_STATE();
    case 346:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(340);
      END_STATE();
    case 347:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(209);
      END_STATE();
    case 348:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(341);
      END_STATE();
    case 349:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(360);
      END_STATE();
    case 350:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(369);
      END_STATE();
    case 351:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(234);
      END_STATE();
    case 352:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(488);
      END_STATE();
    case 353:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(683);
      END_STATE();
    case 354:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(514);
      END_STATE();
    case 355:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(545);
      END_STATE();
    case 356:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(552);
      END_STATE();
    case 357:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(501);
      END_STATE();
    case 358:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(686);
      END_STATE();
    case 359:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(244);
      END_STATE();
    case 360:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(44);
      END_STATE();
    case 361:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(513);
      END_STATE();
    case 362:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(536);
      END_STATE();
    case 363:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(397);
      END_STATE();
    case 364:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(253);
      END_STATE();
    case 365:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(227);
      END_STATE();
    case 366:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(384);
      END_STATE();
    case 367:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(248);
      END_STATE();
    case 368:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(339);
      END_STATE();
    case 369:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(324);
      END_STATE();
    case 370:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(330);
      END_STATE();
    case 371:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(210);
      END_STATE();
    case 372:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(216);
      END_STATE();
    case 373:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(221);
      END_STATE();
    case 374:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(220);
      END_STATE();
    case 375:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(228);
      END_STATE();
    case 376:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(157);
      END_STATE();
    case 377:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(230);
      END_STATE();
    case 378:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(333);
      END_STATE();
    case 379:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(160);
      END_STATE();
    case 380:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(163);
      END_STATE();
    case 381:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(168);
      END_STATE();
    case 382:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(337);
      END_STATE();
    case 383:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(268);
      END_STATE();
    case 384:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(325);
      END_STATE();
    case 385:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(275);
      END_STATE();
    case 386:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(276);
      END_STATE();
    case 387:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(277);
      END_STATE();
    case 388:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(278);
      END_STATE();
    case 389:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(279);
      END_STATE();
    case 390:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(208);
      END_STATE();
    case 391:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(280);
      END_STATE();
    case 392:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(281);
      END_STATE();
    case 393:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(282);
      END_STATE();
    case 394:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(283);
      END_STATE();
    case 395:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(373);
      END_STATE();
    case 396:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(547);
      END_STATE();
    case 397:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(235);
      END_STATE();
    case 398:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(500);
      END_STATE();
    case 399:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(541);
      END_STATE();
    case 400:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(539);
      END_STATE();
    case 401:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(687);
      END_STATE();
    case 402:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(100);
      END_STATE();
    case 403:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(403)
      if (lookahead == '\r') SKIP(1)
      if (lookahead == '"') ADVANCE(124);
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == '%') ADVANCE(479);
      if (lookahead == '&') ADVANCE(486);
      if (lookahead == '(') ADVANCE(458);
      if (lookahead == ')') ADVANCE(459);
      if (lookahead == '*') ADVANCE(477);
      if (lookahead == '+') ADVANCE(480);
      if (lookahead == ',') ADVANCE(467);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '.') ADVANCE(529);
      if (lookahead == '/') ADVANCE(478);
      if (lookahead == ';') ADVANCE(468);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '=') ADVANCE(465);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == 'B') ADVANCE(671);
      if (lookahead == 'D') ADVANCE(634);
      if (lookahead == 'E') ADVANCE(639);
      if (lookahead == 'F') ADVANCE(660);
      if (lookahead == 'H') ADVANCE(641);
      if (lookahead == 'I') ADVANCE(654);
      if (lookahead == 'J') ADVANCE(679);
      if (lookahead == 'L') ADVANCE(659);
      if (lookahead == 'M') ADVANCE(637);
      if (lookahead == 'O') ADVANCE(677);
      if (lookahead == 'P') ADVANCE(674);
      if (lookahead == 'R') ADVANCE(646);
      if (lookahead == 'S') ADVANCE(650);
      if (lookahead == 'T') ADVANCE(682);
      if (lookahead == 'U') ADVANCE(661);
      if (lookahead == 'V') ADVANCE(644);
      if (lookahead == '_') ADVANCE(538);
      if (lookahead == 'b') ADVANCE(611);
      if (lookahead == 'd') ADVANCE(572);
      if (lookahead == 'e') ADVANCE(577);
      if (lookahead == 'f') ADVANCE(599);
      if (lookahead == 'h') ADVANCE(579);
      if (lookahead == 'i') ADVANCE(593);
      if (lookahead == 'j') ADVANCE(619);
      if (lookahead == 'l') ADVANCE(598);
      if (lookahead == 'm') ADVANCE(575);
      if (lookahead == 'o') ADVANCE(617);
      if (lookahead == 'p') ADVANCE(614);
      if (lookahead == 'r') ADVANCE(585);
      if (lookahead == 's') ADVANCE(589);
      if (lookahead == 't') ADVANCE(622);
      if (lookahead == 'u') ADVANCE(600);
      if (lookahead == 'v') ADVANCE(583);
      if (lookahead == '|') ADVANCE(487);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(623);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 404:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(404)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == '(') ADVANCE(458);
      if (lookahead == ')') ADVANCE(459);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == ',') ADVANCE(467);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == ':') ADVANCE(555);
      if (lookahead == '>') ADVANCE(473);
      if (lookahead == 'B') ADVANCE(671);
      if (lookahead == 'D') ADVANCE(634);
      if (lookahead == 'E') ADVANCE(639);
      if (lookahead == 'F') ADVANCE(660);
      if (lookahead == 'H') ADVANCE(641);
      if (lookahead == 'I') ADVANCE(654);
      if (lookahead == 'J') ADVANCE(679);
      if (lookahead == 'L') ADVANCE(659);
      if (lookahead == 'M') ADVANCE(637);
      if (lookahead == 'O') ADVANCE(677);
      if (lookahead == 'P') ADVANCE(674);
      if (lookahead == 'R') ADVANCE(646);
      if (lookahead == 'S') ADVANCE(650);
      if (lookahead == 'U') ADVANCE(661);
      if (lookahead == 'V') ADVANCE(644);
      if (lookahead == '_') ADVANCE(538);
      if (lookahead == 'b') ADVANCE(611);
      if (lookahead == 'd') ADVANCE(572);
      if (lookahead == 'e') ADVANCE(577);
      if (lookahead == 'f') ADVANCE(599);
      if (lookahead == 'h') ADVANCE(579);
      if (lookahead == 'i') ADVANCE(593);
      if (lookahead == 'j') ADVANCE(619);
      if (lookahead == 'l') ADVANCE(598);
      if (lookahead == 'm') ADVANCE(575);
      if (lookahead == 'o') ADVANCE(617);
      if (lookahead == 'p') ADVANCE(614);
      if (lookahead == 'r') ADVANCE(585);
      if (lookahead == 's') ADVANCE(589);
      if (lookahead == 'u') ADVANCE(600);
      if (lookahead == 'v') ADVANCE(583);
      if (lookahead == '|') ADVANCE(487);
      if (lookahead == '}') ADVANCE(452);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(623);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 405:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(405)
      if (lookahead == '\r') SKIP(3)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == '%') ADVANCE(479);
      if (lookahead == '&') ADVANCE(486);
      if (lookahead == '\'') ADVANCE(544);
      if (lookahead == ')') ADVANCE(459);
      if (lookahead == '*') ADVANCE(477);
      if (lookahead == '+') ADVANCE(480);
      if (lookahead == ',') ADVANCE(467);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '.') ADVANCE(529);
      if (lookahead == '/') ADVANCE(478);
      if (lookahead == ';') ADVANCE(468);
      if (lookahead == '<') ADVANCE(472);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(474);
      if (lookahead == 'A') ADVANCE(72);
      if (lookahead == 'O') ADVANCE(76);
      if (lookahead == '[') ADVANCE(549);
      if (lookahead == ']') ADVANCE(550);
      if (lookahead == 'a') ADVANCE(335);
      if (lookahead == '|') ADVANCE(487);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(289);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(302);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(204);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(242);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      END_STATE();
    case 406:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(406)
      if (lookahead == '\r') SKIP(4)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == '%') ADVANCE(479);
      if (lookahead == '&') ADVANCE(486);
      if (lookahead == '\'') ADVANCE(544);
      if (lookahead == ')') ADVANCE(459);
      if (lookahead == '*') ADVANCE(477);
      if (lookahead == '+') ADVANCE(480);
      if (lookahead == ',') ADVANCE(467);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '/') ADVANCE(478);
      if (lookahead == ';') ADVANCE(468);
      if (lookahead == '<') ADVANCE(472);
      if (lookahead == '=') ADVANCE(466);
      if (lookahead == '>') ADVANCE(474);
      if (lookahead == 'A') ADVANCE(72);
      if (lookahead == 'O') ADVANCE(76);
      if (lookahead == '[') ADVANCE(549);
      if (lookahead == ']') ADVANCE(550);
      if (lookahead == 'a') ADVANCE(335);
      if (lookahead == '|') ADVANCE(487);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(289);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(302);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(202);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(242);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(245);
      END_STATE();
    case 407:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(407)
      if (lookahead == '\r') SKIP(5)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == '%') ADVANCE(479);
      if (lookahead == '&') ADVANCE(486);
      if (lookahead == '\'') ADVANCE(544);
      if (lookahead == '*') ADVANCE(477);
      if (lookahead == '+') ADVANCE(480);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '.') ADVANCE(529);
      if (lookahead == '/') ADVANCE(478);
      if (lookahead == ';') ADVANCE(468);
      if (lookahead == '<') ADVANCE(472);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(474);
      if (lookahead == 'A') ADVANCE(628);
      if (lookahead == 'I') ADVANCE(667);
      if (lookahead == 'N') ADVANCE(673);
      if (lookahead == 'O') ADVANCE(630);
      if (lookahead == 'P') ADVANCE(642);
      if (lookahead == '_') ADVANCE(538);
      if (lookahead == 'i') ADVANCE(607);
      if (lookahead == 'n') ADVANCE(613);
      if (lookahead == 'p') ADVANCE(580);
      if (lookahead == '|') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(623);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 408:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(408)
      if (lookahead == '\r') SKIP(6)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == '%') ADVANCE(479);
      if (lookahead == '&') ADVANCE(486);
      if (lookahead == '\'') ADVANCE(544);
      if (lookahead == '*') ADVANCE(477);
      if (lookahead == '+') ADVANCE(480);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '.') ADVANCE(529);
      if (lookahead == '/') ADVANCE(478);
      if (lookahead == ';') ADVANCE(468);
      if (lookahead == '<') ADVANCE(472);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(474);
      if (lookahead == 'A') ADVANCE(628);
      if (lookahead == 'I') ADVANCE(667);
      if (lookahead == 'N') ADVANCE(673);
      if (lookahead == 'O') ADVANCE(630);
      if (lookahead == 'T') ADVANCE(672);
      if (lookahead == '_') ADVANCE(538);
      if (lookahead == 'i') ADVANCE(607);
      if (lookahead == 'n') ADVANCE(613);
      if (lookahead == 't') ADVANCE(612);
      if (lookahead == '|') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(623);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 409:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(409)
      if (lookahead == '\r') SKIP(7)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == '%') ADVANCE(479);
      if (lookahead == '&') ADVANCE(486);
      if (lookahead == '\'') ADVANCE(544);
      if (lookahead == ')') ADVANCE(459);
      if (lookahead == '*') ADVANCE(477);
      if (lookahead == '+') ADVANCE(480);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '.') ADVANCE(529);
      if (lookahead == '/') ADVANCE(478);
      if (lookahead == '<') ADVANCE(472);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(474);
      if (lookahead == 'A') ADVANCE(628);
      if (lookahead == 'I') ADVANCE(667);
      if (lookahead == 'N') ADVANCE(673);
      if (lookahead == 'O') ADVANCE(630);
      if (lookahead == '_') ADVANCE(538);
      if (lookahead == 'i') ADVANCE(607);
      if (lookahead == 'n') ADVANCE(613);
      if (lookahead == '|') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(623);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 410:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(410)
      if (lookahead == '\r') SKIP(8)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == '%') ADVANCE(479);
      if (lookahead == '&') ADVANCE(486);
      if (lookahead == '\'') ADVANCE(544);
      if (lookahead == '*') ADVANCE(477);
      if (lookahead == '+') ADVANCE(480);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '.') ADVANCE(529);
      if (lookahead == '/') ADVANCE(478);
      if (lookahead == '<') ADVANCE(472);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(474);
      if (lookahead == 'A') ADVANCE(628);
      if (lookahead == 'I') ADVANCE(667);
      if (lookahead == 'N') ADVANCE(673);
      if (lookahead == 'O') ADVANCE(630);
      if (lookahead == 'T') ADVANCE(655);
      if (lookahead == '_') ADVANCE(538);
      if (lookahead == 'i') ADVANCE(607);
      if (lookahead == 'n') ADVANCE(613);
      if (lookahead == 't') ADVANCE(594);
      if (lookahead == '|') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(623);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 411:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(411)
      if (lookahead == '\r') SKIP(9)
      if (lookahead == '"') ADVANCE(560);
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == '$') ADVANCE(543);
      if (lookahead == '%') ADVANCE(479);
      if (lookahead == '&') ADVANCE(486);
      if (lookahead == '\'') ADVANCE(544);
      if (lookahead == '(') ADVANCE(458);
      if (lookahead == ')') ADVANCE(459);
      if (lookahead == '*') ADVANCE(477);
      if (lookahead == '+') ADVANCE(481);
      if (lookahead == ',') ADVANCE(467);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '.') ADVANCE(529);
      if (lookahead == '/') ADVANCE(478);
      if (lookahead == ':') ADVANCE(555);
      if (lookahead == ';') ADVANCE(468);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '=') ADVANCE(465);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == '@') ADVANCE(510);
      if (lookahead == ']') ADVANCE(550);
      if (lookahead == '_') ADVANCE(538);
      if (lookahead == '{') ADVANCE(451);
      if (lookahead == '|') ADVANCE(487);
      if (lookahead == '}') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(623);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 412:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(412)
      if (lookahead == '\r') SKIP(10)
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == 'B') ADVANCE(671);
      if (lookahead == 'D') ADVANCE(634);
      if (lookahead == 'E') ADVANCE(639);
      if (lookahead == 'F') ADVANCE(664);
      if (lookahead == 'H') ADVANCE(641);
      if (lookahead == 'I') ADVANCE(669);
      if (lookahead == 'J') ADVANCE(679);
      if (lookahead == 'L') ADVANCE(659);
      if (lookahead == 'M') ADVANCE(637);
      if (lookahead == 'O') ADVANCE(677);
      if (lookahead == 'S') ADVANCE(651);
      if (lookahead == 'U') ADVANCE(661);
      if (lookahead == 'V') ADVANCE(644);
      if (lookahead == '_') ADVANCE(538);
      if (lookahead == 'b') ADVANCE(611);
      if (lookahead == 'd') ADVANCE(572);
      if (lookahead == 'e') ADVANCE(577);
      if (lookahead == 'f') ADVANCE(603);
      if (lookahead == 'h') ADVANCE(579);
      if (lookahead == 'i') ADVANCE(609);
      if (lookahead == 'j') ADVANCE(619);
      if (lookahead == 'l') ADVANCE(598);
      if (lookahead == 'm') ADVANCE(575);
      if (lookahead == 'o') ADVANCE(617);
      if (lookahead == 's') ADVANCE(590);
      if (lookahead == 'u') ADVANCE(600);
      if (lookahead == 'v') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(623);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 413:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(413)
      if (lookahead == '\r') SKIP(11)
      if (lookahead == '"') ADVANCE(560);
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == '(') ADVANCE(458);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '.') ADVANCE(529);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '@') ADVANCE(50);
      if (lookahead == 'F') ADVANCE(635);
      if (lookahead == 'T') ADVANCE(675);
      if (lookahead == '_') ADVANCE(538);
      if (lookahead == 'f') ADVANCE(573);
      if (lookahead == 't') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(623);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 414:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(414)
      if (lookahead == '\r') SKIP(12)
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == '%') ADVANCE(479);
      if (lookahead == '&') ADVANCE(486);
      if (lookahead == '\'') ADVANCE(544);
      if (lookahead == '*') ADVANCE(477);
      if (lookahead == '+') ADVANCE(480);
      if (lookahead == ',') ADVANCE(467);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '.') ADVANCE(529);
      if (lookahead == '/') ADVANCE(478);
      if (lookahead == ';') ADVANCE(468);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == 'A') ADVANCE(678);
      if (lookahead == 'T') ADVANCE(672);
      if (lookahead == 'W') ADVANCE(657);
      if (lookahead == '[') ADVANCE(549);
      if (lookahead == '_') ADVANCE(538);
      if (lookahead == 'a') ADVANCE(618);
      if (lookahead == 't') ADVANCE(612);
      if (lookahead == 'w') ADVANCE(596);
      if (lookahead == '|') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(623);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 415:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(415)
      if (lookahead == '\r') SKIP(13)
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == '%') ADVANCE(479);
      if (lookahead == '&') ADVANCE(486);
      if (lookahead == '\'') ADVANCE(544);
      if (lookahead == '*') ADVANCE(477);
      if (lookahead == '+') ADVANCE(480);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '.') ADVANCE(529);
      if (lookahead == '/') ADVANCE(478);
      if (lookahead == ';') ADVANCE(468);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == 'A') ADVANCE(628);
      if (lookahead == 'O') ADVANCE(630);
      if (lookahead == 'T') ADVANCE(672);
      if (lookahead == '_') ADVANCE(538);
      if (lookahead == 't') ADVANCE(612);
      if (lookahead == '|') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(623);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 416:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(416)
      if (lookahead == '\r') SKIP(14)
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == '%') ADVANCE(479);
      if (lookahead == '&') ADVANCE(486);
      if (lookahead == '\'') ADVANCE(544);
      if (lookahead == '*') ADVANCE(477);
      if (lookahead == '+') ADVANCE(480);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '.') ADVANCE(529);
      if (lookahead == '/') ADVANCE(478);
      if (lookahead == ';') ADVANCE(468);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == 'A') ADVANCE(628);
      if (lookahead == 'O') ADVANCE(630);
      if (lookahead == 'P') ADVANCE(642);
      if (lookahead == '_') ADVANCE(538);
      if (lookahead == 'p') ADVANCE(580);
      if (lookahead == '|') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(623);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 417:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(417)
      if (lookahead == '\r') SKIP(15)
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == ')') ADVANCE(459);
      if (lookahead == ',') ADVANCE(467);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == ':') ADVANCE(555);
      if (lookahead == ';') ADVANCE(468);
      if (lookahead == '<') ADVANCE(471);
      if (lookahead == '>') ADVANCE(473);
      if (lookahead == '@') ADVANCE(510);
      if (lookahead == 'B') ADVANCE(53);
      if (lookahead == 'F') ADVANCE(68);
      if (lookahead == 'Q') ADVANCE(89);
      if (lookahead == 'S') ADVANCE(61);
      if (lookahead == 'W') ADVANCE(66);
      if (lookahead == 'b') ADVANCE(300);
      if (lookahead == 'f') ADVANCE(262);
      if (lookahead == 's') ADVANCE(370);
      if (lookahead == '|') ADVANCE(487);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(345);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(309);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(146);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(197);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(299);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(342);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(320);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(202);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(247);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(219);
      END_STATE();
    case 418:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(418)
      if (lookahead == '\r') SKIP(16)
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == '%') ADVANCE(479);
      if (lookahead == '&') ADVANCE(486);
      if (lookahead == '\'') ADVANCE(544);
      if (lookahead == ')') ADVANCE(459);
      if (lookahead == '*') ADVANCE(477);
      if (lookahead == '+') ADVANCE(480);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '.') ADVANCE(529);
      if (lookahead == '/') ADVANCE(478);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == 'A') ADVANCE(628);
      if (lookahead == 'O') ADVANCE(630);
      if (lookahead == '_') ADVANCE(538);
      if (lookahead == '|') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(623);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 419:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(419)
      if (lookahead == '\r') SKIP(17)
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == '%') ADVANCE(479);
      if (lookahead == '&') ADVANCE(486);
      if (lookahead == '\'') ADVANCE(544);
      if (lookahead == '*') ADVANCE(477);
      if (lookahead == '+') ADVANCE(480);
      if (lookahead == ',') ADVANCE(467);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '.') ADVANCE(529);
      if (lookahead == '/') ADVANCE(478);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == 'A') ADVANCE(678);
      if (lookahead == ']') ADVANCE(550);
      if (lookahead == '_') ADVANCE(538);
      if (lookahead == 'a') ADVANCE(618);
      if (lookahead == '|') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(623);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 420:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(420)
      if (lookahead == '\r') SKIP(18)
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == '%') ADVANCE(479);
      if (lookahead == '&') ADVANCE(486);
      if (lookahead == '\'') ADVANCE(544);
      if (lookahead == '*') ADVANCE(477);
      if (lookahead == '+') ADVANCE(480);
      if (lookahead == ',') ADVANCE(467);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '.') ADVANCE(529);
      if (lookahead == '/') ADVANCE(478);
      if (lookahead == ';') ADVANCE(468);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == 'P') ADVANCE(642);
      if (lookahead == '_') ADVANCE(538);
      if (lookahead == 'p') ADVANCE(580);
      if (lookahead == '|') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(623);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 421:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(421)
      if (lookahead == '\r') SKIP(19)
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == '%') ADVANCE(479);
      if (lookahead == '&') ADVANCE(486);
      if (lookahead == '\'') ADVANCE(544);
      if (lookahead == '*') ADVANCE(477);
      if (lookahead == '+') ADVANCE(480);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '.') ADVANCE(529);
      if (lookahead == '/') ADVANCE(478);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == 'A') ADVANCE(628);
      if (lookahead == 'O') ADVANCE(630);
      if (lookahead == 'T') ADVANCE(655);
      if (lookahead == '_') ADVANCE(538);
      if (lookahead == 't') ADVANCE(594);
      if (lookahead == '|') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(623);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 422:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(422)
      if (lookahead == '\r') SKIP(20)
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == 'E') ADVANCE(663);
      if (lookahead == 'I') ADVANCE(652);
      if (lookahead == 'P') ADVANCE(674);
      if (lookahead == 'R') ADVANCE(646);
      if (lookahead == '_') ADVANCE(538);
      if (lookahead == 'e') ADVANCE(602);
      if (lookahead == 'i') ADVANCE(591);
      if (lookahead == 'p') ADVANCE(614);
      if (lookahead == 'r') ADVANCE(585);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(623);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 423:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(423)
      if (lookahead == '\r') SKIP(21)
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == 'I') ADVANCE(652);
      if (lookahead == 'P') ADVANCE(674);
      if (lookahead == 'R') ADVANCE(646);
      if (lookahead == '_') ADVANCE(538);
      if (lookahead == 'i') ADVANCE(591);
      if (lookahead == 'p') ADVANCE(614);
      if (lookahead == 'r') ADVANCE(585);
      if (lookahead == '}') ADVANCE(452);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(623);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 424:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(424)
      if (lookahead == '\r') SKIP(22)
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == '(') ADVANCE(458);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == ':') ADVANCE(555);
      if (lookahead == '<') ADVANCE(471);
      if (lookahead == '@') ADVANCE(50);
      if (lookahead == 'A') ADVANCE(665);
      if (lookahead == '_') ADVANCE(538);
      if (lookahead == 'a') ADVANCE(604);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(623);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 425:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(425)
      if (lookahead == '\r') SKIP(23)
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == 'B') ADVANCE(671);
      if (lookahead == 'D') ADVANCE(634);
      if (lookahead == 'E') ADVANCE(639);
      if (lookahead == 'F') ADVANCE(664);
      if (lookahead == 'I') ADVANCE(669);
      if (lookahead == 'J') ADVANCE(679);
      if (lookahead == 'S') ADVANCE(681);
      if (lookahead == 'U') ADVANCE(661);
      if (lookahead == 'V') ADVANCE(644);
      if (lookahead == '_') ADVANCE(538);
      if (lookahead == 'b') ADVANCE(611);
      if (lookahead == 'd') ADVANCE(572);
      if (lookahead == 'e') ADVANCE(577);
      if (lookahead == 'f') ADVANCE(603);
      if (lookahead == 'i') ADVANCE(609);
      if (lookahead == 'j') ADVANCE(619);
      if (lookahead == 's') ADVANCE(621);
      if (lookahead == 'u') ADVANCE(600);
      if (lookahead == 'v') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(623);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 426:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(426)
      if (lookahead == '\r') SKIP(24)
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '@') ADVANCE(50);
      if (lookahead == 'A') ADVANCE(665);
      if (lookahead == 'S') ADVANCE(648);
      if (lookahead == '_') ADVANCE(538);
      if (lookahead == 'a') ADVANCE(604);
      if (lookahead == 's') ADVANCE(587);
      if (lookahead == '}') ADVANCE(452);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(623);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 427:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(427)
      if (lookahead == '\r') SKIP(25)
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == ',') ADVANCE(467);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == ':') ADVANCE(555);
      if (lookahead == ';') ADVANCE(468);
      if (lookahead == 'P') ADVANCE(642);
      if (lookahead == 'W') ADVANCE(626);
      if (lookahead == '_') ADVANCE(538);
      if (lookahead == 'p') ADVANCE(580);
      if (lookahead == '|') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(623);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 428:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(428)
      if (lookahead == '\r') SKIP(26)
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == ')') ADVANCE(459);
      if (lookahead == ',') ADVANCE(467);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == ':') ADVANCE(555);
      if (lookahead == '<') ADVANCE(471);
      if (lookahead == '>') ADVANCE(473);
      if (lookahead == '_') ADVANCE(538);
      if (lookahead == '|') ADVANCE(487);
      if (lookahead == '}') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(623);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 429:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(429)
      if (lookahead == '\r') SKIP(27)
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == '(') ADVANCE(458);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == 'S') ADVANCE(649);
      if (lookahead == '_') ADVANCE(538);
      if (lookahead == 's') ADVANCE(588);
      if (lookahead == '{') ADVANCE(451);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(623);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 430:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(430)
      if (lookahead == '\r') SKIP(28)
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == '(') ADVANCE(458);
      if (lookahead == ')') ADVANCE(459);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == ';') ADVANCE(468);
      if (lookahead == '=') ADVANCE(465);
      if (lookahead == 'I') ADVANCE(670);
      if (lookahead == 'M') ADVANCE(658);
      if (lookahead == 'U') ADVANCE(668);
      if (lookahead == '_') ADVANCE(538);
      if (lookahead == 'i') ADVANCE(610);
      if (lookahead == 'm') ADVANCE(597);
      if (lookahead == 'u') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(623);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 431:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(431)
      if (lookahead == '\r') SKIP(29)
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == 'A') ADVANCE(629);
      if (lookahead == 'R') ADVANCE(624);
      if (lookahead == 'S') ADVANCE(631);
      if (lookahead == '_') ADVANCE(538);
      if (lookahead == '{') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(623);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 432:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(432)
      if (lookahead == '\r') SKIP(30)
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == ',') ADVANCE(467);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == ';') ADVANCE(468);
      if (lookahead == 'T') ADVANCE(672);
      if (lookahead == 'W') ADVANCE(657);
      if (lookahead == '_') ADVANCE(538);
      if (lookahead == 't') ADVANCE(612);
      if (lookahead == 'w') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(623);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 433:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(433)
      if (lookahead == '\r') SKIP(31)
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == ')') ADVANCE(459);
      if (lookahead == ',') ADVANCE(467);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == 'A') ADVANCE(680);
      if (lookahead == 'D') ADVANCE(647);
      if (lookahead == '_') ADVANCE(538);
      if (lookahead == 'a') ADVANCE(620);
      if (lookahead == 'd') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(623);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 434:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(434)
      if (lookahead == '\r') SKIP(32)
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == ')') ADVANCE(459);
      if (lookahead == ',') ADVANCE(467);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == 'D') ADVANCE(645);
      if (lookahead == '_') ADVANCE(538);
      if (lookahead == 'd') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(623);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 435:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(435)
      if (lookahead == '\r') SKIP(33)
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == 'F') ADVANCE(676);
      if (lookahead == '_') ADVANCE(538);
      if (lookahead == 'f') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(623);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 436:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(436)
      if (lookahead == '\r') SKIP(34)
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(301);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(261);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(299);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(378);
      END_STATE();
    case 437:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(437)
      if (lookahead == '\r') SKIP(35)
      if (lookahead == '"') ADVANCE(560);
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(88);
      END_STATE();
    case 438:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(438)
      if (lookahead == '\r') SKIP(36)
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == 'E') ADVANCE(666);
      if (lookahead == 'I') ADVANCE(652);
      if (lookahead == 'P') ADVANCE(674);
      if (lookahead == 'R') ADVANCE(646);
      if (lookahead == '_') ADVANCE(538);
      if (lookahead == 'e') ADVANCE(606);
      if (lookahead == 'i') ADVANCE(591);
      if (lookahead == 'p') ADVANCE(614);
      if (lookahead == 'r') ADVANCE(585);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(623);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 439:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(566);
      END_STATE();
    case 440:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(439);
      END_STATE();
    case 441:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(440);
      END_STATE();
    case 442:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(441);
      END_STATE();
    case 443:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(442);
      END_STATE();
    case 444:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(443);
      END_STATE();
    case 445:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(444);
      END_STATE();
    case 446:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(445);
      END_STATE();
    case 447:
      if (eof) ADVANCE(450);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 448:
      if (eof) ADVANCE(450);
      if (lookahead == '\n') SKIP(449)
      END_STATE();
    case 449:
      if (eof) ADVANCE(450);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(449)
      if (lookahead == '\r') SKIP(448)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '"') ADVANCE(560);
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == '%') ADVANCE(479);
      if (lookahead == '&') ADVANCE(486);
      if (lookahead == '\'') ADVANCE(544);
      if (lookahead == ')') ADVANCE(459);
      if (lookahead == '*') ADVANCE(477);
      if (lookahead == '+') ADVANCE(481);
      if (lookahead == ',') ADVANCE(467);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '.') ADVANCE(529);
      if (lookahead == '/') ADVANCE(478);
      if (lookahead == ':') ADVANCE(555);
      if (lookahead == ';') ADVANCE(468);
      if (lookahead == '<') ADVANCE(472);
      if (lookahead == '=') ADVANCE(466);
      if (lookahead == '>') ADVANCE(474);
      if (lookahead == 'A') ADVANCE(71);
      if (lookahead == 'F') ADVANCE(74);
      if (lookahead == 'G') ADVANCE(81);
      if (lookahead == 'O') ADVANCE(76);
      if (lookahead == 'P') ADVANCE(203);
      if (lookahead == 'Q') ADVANCE(89);
      if (lookahead == 'R') ADVANCE(59);
      if (lookahead == 'S') ADVANCE(92);
      if (lookahead == '[') ADVANCE(549);
      if (lookahead == ']') ADVANCE(550);
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 'f') ADVANCE(147);
      if (lookahead == 'p') ADVANCE(128);
      if (lookahead == 'r') ADVANCE(223);
      if (lookahead == 's') ADVANCE(376);
      if (lookahead == '{') ADVANCE(451);
      if (lookahead == '|') ADVANCE(487);
      if (lookahead == '}') ADVANCE(452);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(327);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(257);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(289);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(303);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(243);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_createSignature_token1);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_createSignature_token2);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_createSignature_token3);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_createSignature_token4);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_QUERY);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_FOR);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_GRAPH);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_API);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_SYNTAX);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_RETURNS);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(496);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_typedef_token1);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_typedef_token2);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(484);
      if (lookahead == '=') ADVANCE(494);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(495);
      if (lookahead == '>') ADVANCE(485);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_constant_token2);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(42);
      if (lookahead == '/') ADVANCE(499);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(528);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(554);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_condition_token2);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_condition_token3);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_condition_token4);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(499);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_CREATE_VERTEX_token1);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_CREATE_VERTEX_token2);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_CREATE_VERTEX_token3);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_CREATE_VERTEX_token4);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_DQUOTEnone_DQUOTE);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_DQUOTEoutdegree_by_edgetype_DQUOTE);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_primary_id_as_attribute);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_DQUOTEtrue_DQUOTE);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_primary_id_name_type_token1);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_accumDeclStmt_token1);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(511);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_accumType_token1);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_accumType_token2);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_accumType_token3);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_accumType_token4);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_accumType_token5);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_accumType_token5);
      if (lookahead == ' ') ADVANCE(196);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_accumType_token6);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_accumType_token7);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_accumType_token8);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_accumType_token9);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_accumType_token10);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_accumType_token11);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_accumType_token12);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_accumType_token13);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_accumType_token14);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_elementType_token1);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_queryBodyIfStmt_token1);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_queryBodyIfStmt_token2);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_queryBodyIfStmt_token3);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_queryBodyIfStmt_token4);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_fileDeclStmt_token1);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_simpleSet_token1);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_simpleSet_token2);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_simpleSet_token3);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_seed_token1);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_DOT_STAR);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_seed_token2);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_selectVertParams_token1);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_printStmt_token1);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_printStmt_token2);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_printStmt_token3);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_printExpr_token1);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_returnStmt_token1);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_gsqlSelectClause_token1);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_fromClause_token1);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_WHERE);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_accumClause_token1);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_postAccumClause_token1);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_perClauseV2_token1);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_stringLiteral_token1);
      if (lookahead == '*') ADVANCE(563);
      if (lookahead == '/') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_stringLiteral_token1);
      if (lookahead == '*') ADVANCE(562);
      if (lookahead == '/') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(563);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_stringLiteral_token1);
      if (lookahead == '*') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(563);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_stringLiteral_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(565);
      if (lookahead == '#') ADVANCE(565);
      if (lookahead == '/') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_stringLiteral_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(566);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(567);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_name_token1);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(365);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(238);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(381);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(365);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(381);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(271);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(271);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(263);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(306);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(304);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(311);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(311);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(295);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(241);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(241);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(344);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(318);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(256);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(266);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(151);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(288);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(379);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(151);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(288);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(379);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(330);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(288);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(530);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(530);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(489);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(490);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(530);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(361);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(224);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(224);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(94);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(390);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(313);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(222);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(295);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(343);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(263);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(306);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(297);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(297);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(251);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(344);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(306);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(400);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(400);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(548);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(489);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(490);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(251);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(361);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(377);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(305);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(352);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(256);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(390);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(304);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(548);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(307);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(171);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(330);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(313);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_name_token2);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E') ADVANCE(86);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'H') ADVANCE(56);
      if (lookahead == 'h') ADVANCE(222);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'H') ADVANCE(63);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'N') ADVANCE(55);
      if (lookahead == 'P') ADVANCE(67);
      if (lookahead == 'n') ADVANCE(400);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(548);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'N') ADVANCE(54);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'P') ADVANCE(67);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'R') ADVANCE(493);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'Y') ADVANCE(70);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'Y') ADVANCE(70);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(266);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(151);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(288);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(365);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(238);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(381);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(365);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(381);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(271);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(271);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(263);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(306);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(304);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(311);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(311);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(295);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(241);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(241);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(344);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(318);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(256);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(379);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(151);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(288);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(379);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(330);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(288);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(530);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(530);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(489);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(490);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(530);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(361);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(224);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(224);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(94);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(390);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(313);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(222);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(295);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(343);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(263);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(306);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(297);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(297);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(251);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(344);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(306);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(400);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(489);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(490);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(251);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(361);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(377);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(305);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(352);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(256);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(390);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(304);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(548);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(307);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(171);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(330);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(313);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_baseType_token1);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_baseType_token2);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_baseType_token3);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_baseType_token4);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_baseType_token5);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_baseType_token6);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_SET);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_BAG);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_FILE);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 449},
  [2] = {.lex_state = 403},
  [3] = {.lex_state = 404},
  [4] = {.lex_state = 449},
  [5] = {.lex_state = 449},
  [6] = {.lex_state = 404},
  [7] = {.lex_state = 404},
  [8] = {.lex_state = 405},
  [9] = {.lex_state = 405},
  [10] = {.lex_state = 405},
  [11] = {.lex_state = 406},
  [12] = {.lex_state = 405},
  [13] = {.lex_state = 405},
  [14] = {.lex_state = 405},
  [15] = {.lex_state = 405},
  [16] = {.lex_state = 405},
  [17] = {.lex_state = 405},
  [18] = {.lex_state = 405},
  [19] = {.lex_state = 405},
  [20] = {.lex_state = 405},
  [21] = {.lex_state = 405},
  [22] = {.lex_state = 405},
  [23] = {.lex_state = 405},
  [24] = {.lex_state = 405},
  [25] = {.lex_state = 405},
  [26] = {.lex_state = 405},
  [27] = {.lex_state = 403},
  [28] = {.lex_state = 407},
  [29] = {.lex_state = 403},
  [30] = {.lex_state = 407},
  [31] = {.lex_state = 407},
  [32] = {.lex_state = 408},
  [33] = {.lex_state = 408},
  [34] = {.lex_state = 408},
  [35] = {.lex_state = 409},
  [36] = {.lex_state = 409},
  [37] = {.lex_state = 410},
  [38] = {.lex_state = 410},
  [39] = {.lex_state = 410},
  [40] = {.lex_state = 409},
  [41] = {.lex_state = 403},
  [42] = {.lex_state = 404},
  [43] = {.lex_state = 411},
  [44] = {.lex_state = 412},
  [45] = {.lex_state = 411},
  [46] = {.lex_state = 411},
  [47] = {.lex_state = 412},
  [48] = {.lex_state = 412},
  [49] = {.lex_state = 412},
  [50] = {.lex_state = 413},
  [51] = {.lex_state = 405},
  [52] = {.lex_state = 413},
  [53] = {.lex_state = 405},
  [54] = {.lex_state = 405},
  [55] = {.lex_state = 405},
  [56] = {.lex_state = 405},
  [57] = {.lex_state = 412},
  [58] = {.lex_state = 405},
  [59] = {.lex_state = 405},
  [60] = {.lex_state = 405},
  [61] = {.lex_state = 412},
  [62] = {.lex_state = 412},
  [63] = {.lex_state = 413},
  [64] = {.lex_state = 413},
  [65] = {.lex_state = 405},
  [66] = {.lex_state = 413},
  [67] = {.lex_state = 413},
  [68] = {.lex_state = 413},
  [69] = {.lex_state = 413},
  [70] = {.lex_state = 413},
  [71] = {.lex_state = 413},
  [72] = {.lex_state = 413},
  [73] = {.lex_state = 405},
  [74] = {.lex_state = 413},
  [75] = {.lex_state = 413},
  [76] = {.lex_state = 413},
  [77] = {.lex_state = 413},
  [78] = {.lex_state = 413},
  [79] = {.lex_state = 414},
  [80] = {.lex_state = 405},
  [81] = {.lex_state = 405},
  [82] = {.lex_state = 414},
  [83] = {.lex_state = 414},
  [84] = {.lex_state = 413},
  [85] = {.lex_state = 413},
  [86] = {.lex_state = 413},
  [87] = {.lex_state = 413},
  [88] = {.lex_state = 413},
  [89] = {.lex_state = 413},
  [90] = {.lex_state = 413},
  [91] = {.lex_state = 413},
  [92] = {.lex_state = 413},
  [93] = {.lex_state = 413},
  [94] = {.lex_state = 413},
  [95] = {.lex_state = 413},
  [96] = {.lex_state = 413},
  [97] = {.lex_state = 413},
  [98] = {.lex_state = 413},
  [99] = {.lex_state = 413},
  [100] = {.lex_state = 413},
  [101] = {.lex_state = 413},
  [102] = {.lex_state = 413},
  [103] = {.lex_state = 413},
  [104] = {.lex_state = 413},
  [105] = {.lex_state = 413},
  [106] = {.lex_state = 415},
  [107] = {.lex_state = 416},
  [108] = {.lex_state = 415},
  [109] = {.lex_state = 415},
  [110] = {.lex_state = 416},
  [111] = {.lex_state = 416},
  [112] = {.lex_state = 403},
  [113] = {.lex_state = 417},
  [114] = {.lex_state = 418},
  [115] = {.lex_state = 419},
  [116] = {.lex_state = 420},
  [117] = {.lex_state = 419},
  [118] = {.lex_state = 417},
  [119] = {.lex_state = 421},
  [120] = {.lex_state = 420},
  [121] = {.lex_state = 419},
  [122] = {.lex_state = 417},
  [123] = {.lex_state = 420},
  [124] = {.lex_state = 422},
  [125] = {.lex_state = 418},
  [126] = {.lex_state = 421},
  [127] = {.lex_state = 422},
  [128] = {.lex_state = 417},
  [129] = {.lex_state = 418},
  [130] = {.lex_state = 421},
  [131] = {.lex_state = 423},
  [132] = {.lex_state = 424},
  [133] = {.lex_state = 423},
  [134] = {.lex_state = 438},
  [135] = {.lex_state = 423},
  [136] = {.lex_state = 423},
  [137] = {.lex_state = 438},
  [138] = {.lex_state = 423},
  [139] = {.lex_state = 423},
  [140] = {.lex_state = 425},
  [141] = {.lex_state = 423},
  [142] = {.lex_state = 423},
  [143] = {.lex_state = 424},
  [144] = {.lex_state = 423},
  [145] = {.lex_state = 425},
  [146] = {.lex_state = 425},
  [147] = {.lex_state = 417},
  [148] = {.lex_state = 425},
  [149] = {.lex_state = 424},
  [150] = {.lex_state = 425},
  [151] = {.lex_state = 417},
  [152] = {.lex_state = 405},
  [153] = {.lex_state = 405},
  [154] = {.lex_state = 425},
  [155] = {.lex_state = 425},
  [156] = {.lex_state = 405},
  [157] = {.lex_state = 405},
  [158] = {.lex_state = 424},
  [159] = {.lex_state = 424},
  [160] = {.lex_state = 405},
  [161] = {.lex_state = 405},
  [162] = {.lex_state = 405},
  [163] = {.lex_state = 405},
  [164] = {.lex_state = 405},
  [165] = {.lex_state = 405},
  [166] = {.lex_state = 405},
  [167] = {.lex_state = 405},
  [168] = {.lex_state = 405},
  [169] = {.lex_state = 403},
  [170] = {.lex_state = 405},
  [171] = {.lex_state = 405},
  [172] = {.lex_state = 403},
  [173] = {.lex_state = 405},
  [174] = {.lex_state = 403},
  [175] = {.lex_state = 405},
  [176] = {.lex_state = 405},
  [177] = {.lex_state = 405},
  [178] = {.lex_state = 405},
  [179] = {.lex_state = 405},
  [180] = {.lex_state = 426},
  [181] = {.lex_state = 405},
  [182] = {.lex_state = 405},
  [183] = {.lex_state = 405},
  [184] = {.lex_state = 403},
  [185] = {.lex_state = 427},
  [186] = {.lex_state = 403},
  [187] = {.lex_state = 428},
  [188] = {.lex_state = 449},
  [189] = {.lex_state = 428},
  [190] = {.lex_state = 449},
  [191] = {.lex_state = 428},
  [192] = {.lex_state = 449},
  [193] = {.lex_state = 449},
  [194] = {.lex_state = 427},
  [195] = {.lex_state = 449},
  [196] = {.lex_state = 429},
  [197] = {.lex_state = 403},
  [198] = {.lex_state = 403},
  [199] = {.lex_state = 426},
  [200] = {.lex_state = 403},
  [201] = {.lex_state = 449},
  [202] = {.lex_state = 427},
  [203] = {.lex_state = 449},
  [204] = {.lex_state = 403},
  [205] = {.lex_state = 430},
  [206] = {.lex_state = 413},
  [207] = {.lex_state = 430},
  [208] = {.lex_state = 427},
  [209] = {.lex_state = 430},
  [210] = {.lex_state = 403},
  [211] = {.lex_state = 411},
  [212] = {.lex_state = 411},
  [213] = {.lex_state = 413},
  [214] = {.lex_state = 424},
  [215] = {.lex_state = 411},
  [216] = {.lex_state = 411},
  [217] = {.lex_state = 431},
  [218] = {.lex_state = 411},
  [219] = {.lex_state = 428},
  [220] = {.lex_state = 432},
  [221] = {.lex_state = 431},
  [222] = {.lex_state = 411},
  [223] = {.lex_state = 431},
  [224] = {.lex_state = 432},
  [225] = {.lex_state = 411},
  [226] = {.lex_state = 433},
  [227] = {.lex_state = 417},
  [228] = {.lex_state = 411},
  [229] = {.lex_state = 411},
  [230] = {.lex_state = 411},
  [231] = {.lex_state = 432},
  [232] = {.lex_state = 433},
  [233] = {.lex_state = 417},
  [234] = {.lex_state = 411},
  [235] = {.lex_state = 411},
  [236] = {.lex_state = 433},
  [237] = {.lex_state = 417},
  [238] = {.lex_state = 403},
  [239] = {.lex_state = 411},
  [240] = {.lex_state = 417},
  [241] = {.lex_state = 428},
  [242] = {.lex_state = 411},
  [243] = {.lex_state = 434},
  [244] = {.lex_state = 422},
  [245] = {.lex_state = 411},
  [246] = {.lex_state = 434},
  [247] = {.lex_state = 411},
  [248] = {.lex_state = 411},
  [249] = {.lex_state = 411},
  [250] = {.lex_state = 411},
  [251] = {.lex_state = 417},
  [252] = {.lex_state = 411},
  [253] = {.lex_state = 434},
  [254] = {.lex_state = 417},
  [255] = {.lex_state = 411},
  [256] = {.lex_state = 411},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 411},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 417},
  [261] = {.lex_state = 411},
  [262] = {.lex_state = 417},
  [263] = {.lex_state = 411},
  [264] = {.lex_state = 428},
  [265] = {.lex_state = 423},
  [266] = {.lex_state = 438},
  [267] = {.lex_state = 430},
  [268] = {.lex_state = 417},
  [269] = {.lex_state = 411},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 411},
  [272] = {.lex_state = 449},
  [273] = {.lex_state = 417},
  [274] = {.lex_state = 428},
  [275] = {.lex_state = 428},
  [276] = {.lex_state = 417},
  [277] = {.lex_state = 449},
  [278] = {.lex_state = 417},
  [279] = {.lex_state = 411},
  [280] = {.lex_state = 417},
  [281] = {.lex_state = 411},
  [282] = {.lex_state = 417},
  [283] = {.lex_state = 411},
  [284] = {.lex_state = 411},
  [285] = {.lex_state = 411},
  [286] = {.lex_state = 411},
  [287] = {.lex_state = 411},
  [288] = {.lex_state = 411},
  [289] = {.lex_state = 417},
  [290] = {.lex_state = 417},
  [291] = {.lex_state = 417},
  [292] = {.lex_state = 428},
  [293] = {.lex_state = 449},
  [294] = {.lex_state = 411},
  [295] = {.lex_state = 428},
  [296] = {.lex_state = 411},
  [297] = {.lex_state = 449},
  [298] = {.lex_state = 417},
  [299] = {.lex_state = 411},
  [300] = {.lex_state = 417},
  [301] = {.lex_state = 411},
  [302] = {.lex_state = 417},
  [303] = {.lex_state = 435},
  [304] = {.lex_state = 411},
  [305] = {.lex_state = 449},
  [306] = {.lex_state = 435},
  [307] = {.lex_state = 428},
  [308] = {.lex_state = 411},
  [309] = {.lex_state = 449},
  [310] = {.lex_state = 417},
  [311] = {.lex_state = 435},
  [312] = {.lex_state = 417},
  [313] = {.lex_state = 449},
  [314] = {.lex_state = 411},
  [315] = {.lex_state = 411},
  [316] = {.lex_state = 411},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 449},
  [319] = {.lex_state = 417},
  [320] = {.lex_state = 411},
  [321] = {.lex_state = 411},
  [322] = {.lex_state = 411},
  [323] = {.lex_state = 411},
  [324] = {.lex_state = 411},
  [325] = {.lex_state = 449},
  [326] = {.lex_state = 411},
  [327] = {.lex_state = 411},
  [328] = {.lex_state = 430},
  [329] = {.lex_state = 411},
  [330] = {.lex_state = 411},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 411},
  [334] = {.lex_state = 449},
  [335] = {.lex_state = 417},
  [336] = {.lex_state = 404},
  [337] = {.lex_state = 411},
  [338] = {.lex_state = 411},
  [339] = {.lex_state = 411},
  [340] = {.lex_state = 411},
  [341] = {.lex_state = 417},
  [342] = {.lex_state = 411},
  [343] = {.lex_state = 417},
  [344] = {.lex_state = 411},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 417},
  [347] = {.lex_state = 411},
  [348] = {.lex_state = 411},
  [349] = {.lex_state = 411},
  [350] = {.lex_state = 417},
  [351] = {.lex_state = 411},
  [352] = {.lex_state = 417},
  [353] = {.lex_state = 411},
  [354] = {.lex_state = 411},
  [355] = {.lex_state = 411},
  [356] = {.lex_state = 430},
  [357] = {.lex_state = 430},
  [358] = {.lex_state = 411},
  [359] = {.lex_state = 411},
  [360] = {.lex_state = 417},
  [361] = {.lex_state = 411},
  [362] = {.lex_state = 449},
  [363] = {.lex_state = 411},
  [364] = {.lex_state = 411},
  [365] = {.lex_state = 411},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 411},
  [368] = {.lex_state = 411},
  [369] = {.lex_state = 449},
  [370] = {.lex_state = 411},
  [371] = {.lex_state = 411},
  [372] = {.lex_state = 411},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 411},
  [375] = {.lex_state = 417},
  [376] = {.lex_state = 411},
  [377] = {.lex_state = 411},
  [378] = {.lex_state = 411},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 449},
  [381] = {.lex_state = 449},
  [382] = {.lex_state = 411},
  [383] = {.lex_state = 411},
  [384] = {.lex_state = 411},
  [385] = {.lex_state = 411},
  [386] = {.lex_state = 411},
  [387] = {.lex_state = 449},
  [388] = {.lex_state = 411},
  [389] = {.lex_state = 411},
  [390] = {.lex_state = 411},
  [391] = {.lex_state = 411},
  [392] = {.lex_state = 436},
  [393] = {.lex_state = 449},
  [394] = {.lex_state = 411},
  [395] = {.lex_state = 411},
  [396] = {.lex_state = 411},
  [397] = {.lex_state = 449},
  [398] = {.lex_state = 411},
  [399] = {.lex_state = 411},
  [400] = {.lex_state = 411},
  [401] = {.lex_state = 411},
  [402] = {.lex_state = 411},
  [403] = {.lex_state = 417},
  [404] = {.lex_state = 449},
  [405] = {.lex_state = 430},
  [406] = {.lex_state = 411},
  [407] = {.lex_state = 411},
  [408] = {.lex_state = 411},
  [409] = {.lex_state = 411},
  [410] = {.lex_state = 411},
  [411] = {.lex_state = 449},
  [412] = {.lex_state = 411},
  [413] = {.lex_state = 411},
  [414] = {.lex_state = 411},
  [415] = {.lex_state = 411},
  [416] = {.lex_state = 411},
  [417] = {.lex_state = 449},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 411},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 411},
  [422] = {.lex_state = 411},
  [423] = {.lex_state = 411},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 430},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 417},
  [429] = {.lex_state = 430},
  [430] = {.lex_state = 404},
  [431] = {.lex_state = 449},
  [432] = {.lex_state = 404},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 411},
  [435] = {.lex_state = 449},
  [436] = {.lex_state = 145},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 417},
  [442] = {.lex_state = 145},
  [443] = {.lex_state = 449},
  [444] = {.lex_state = 449},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 411},
  [447] = {.lex_state = 403},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 403},
  [451] = {.lex_state = 449},
  [452] = {.lex_state = 403},
  [453] = {.lex_state = 411},
  [454] = {.lex_state = 403},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 417},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 145},
  [459] = {.lex_state = 417},
  [460] = {.lex_state = 417},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 430},
  [463] = {.lex_state = 411},
  [464] = {.lex_state = 449},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 411},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 403},
  [470] = {.lex_state = 404},
  [471] = {.lex_state = 403},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 404},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 411},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 417},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 403},
  [485] = {.lex_state = 449},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 403},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 449},
  [501] = {.lex_state = 404},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 403},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 411},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 449},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 404},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 449},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 404},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
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
  [545] = {.lex_state = 404},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 404},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 449},
  [553] = {.lex_state = 403},
  [554] = {.lex_state = 449},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 403},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 405},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 449},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 449},
  [567] = {.lex_state = 404},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 449},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 449},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 449},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 449},
  [579] = {.lex_state = 404},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 449},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 403},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 404},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 403},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 449},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 449},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 449},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 403},
  [630] = {.lex_state = 403},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 449},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 404},
  [643] = {.lex_state = 403},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 404},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 404},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 403},
  [663] = {.lex_state = 403},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 404},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 403},
  [674] = {.lex_state = 449},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 0},
  [678] = {.lex_state = 404},
  [679] = {.lex_state = 449},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 449},
  [686] = {.lex_state = 449},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 403},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 403},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 403},
  [694] = {.lex_state = 404},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 449},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 404},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 449},
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
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 404},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 404},
  [723] = {.lex_state = 404},
  [724] = {.lex_state = 404},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 0},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 403},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 403},
  [737] = {.lex_state = 403},
  [738] = {.lex_state = 0},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 449},
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
  [757] = {.lex_state = 0},
  [758] = {.lex_state = 0},
  [759] = {.lex_state = 0},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 449},
  [763] = {.lex_state = 0},
  [764] = {.lex_state = 403},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 0},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 449},
  [769] = {.lex_state = 449},
  [770] = {.lex_state = 0},
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
    [sym_source_file] = STATE(717),
    [sym_createQuery] = STATE(293),
    [sym_createSignature] = STATE(770),
    [sym_CREATE_VERTEX] = STATE(293),
    [aux_sym_source_file_repeat1] = STATE(293),
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
    ACTIONS(23), 1,
      aux_sym_accumType_token7,
    ACTIONS(25), 1,
      aux_sym_accumType_token8,
    ACTIONS(27), 1,
      aux_sym_accumType_token9,
    ACTIONS(29), 1,
      aux_sym_accumType_token10,
    ACTIONS(31), 1,
      aux_sym_accumType_token13,
    ACTIONS(33), 1,
      aux_sym_accumType_token14,
    ACTIONS(35), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(37), 1,
      aux_sym_fileDeclStmt_token1,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(41), 1,
      aux_sym_printStmt_token1,
    ACTIONS(43), 1,
      aux_sym_returnStmt_token1,
    STATE(3), 1,
      sym_typedefs,
    STATE(6), 1,
      aux_sym_declStmts_repeat1,
    STATE(29), 1,
      aux_sym_typedefs_repeat1,
    STATE(142), 1,
      sym_declStmts,
    STATE(144), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(267), 1,
      sym_name,
    STATE(433), 1,
      sym_accumType,
    STATE(434), 1,
      sym_baseType,
    STATE(555), 1,
      sym_gsqlSelectClause,
    STATE(557), 1,
      sym_vertexSetName,
    STATE(745), 1,
      sym_gsqlSelectBlock,
    STATE(748), 1,
      sym_queryBodyStmt,
    STATE(749), 1,
      sym_queryBodyStmts,
    STATE(750), 1,
      sym_declStmt,
    STATE(752), 1,
      sym_typedef,
    STATE(753), 1,
      sym_queryBody,
    ACTIONS(45), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(747), 3,
      sym_accumDeclStmt,
      sym_baseDeclStmt,
      sym_fileDeclStmt,
    STATE(746), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
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
  [131] = 34,
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
    ACTIONS(23), 1,
      aux_sym_accumType_token7,
    ACTIONS(25), 1,
      aux_sym_accumType_token8,
    ACTIONS(27), 1,
      aux_sym_accumType_token9,
    ACTIONS(29), 1,
      aux_sym_accumType_token10,
    ACTIONS(31), 1,
      aux_sym_accumType_token13,
    ACTIONS(33), 1,
      aux_sym_accumType_token14,
    ACTIONS(35), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(37), 1,
      aux_sym_fileDeclStmt_token1,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(41), 1,
      aux_sym_printStmt_token1,
    ACTIONS(43), 1,
      aux_sym_returnStmt_token1,
    STATE(6), 1,
      aux_sym_declStmts_repeat1,
    STATE(138), 1,
      sym_declStmts,
    STATE(144), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(267), 1,
      sym_name,
    STATE(433), 1,
      sym_accumType,
    STATE(434), 1,
      sym_baseType,
    STATE(555), 1,
      sym_gsqlSelectClause,
    STATE(557), 1,
      sym_vertexSetName,
    STATE(730), 1,
      sym_queryBodyStmts,
    STATE(745), 1,
      sym_gsqlSelectBlock,
    STATE(748), 1,
      sym_queryBodyStmt,
    STATE(750), 1,
      sym_declStmt,
    ACTIONS(45), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(747), 3,
      sym_accumDeclStmt,
      sym_baseDeclStmt,
      sym_fileDeclStmt,
    STATE(746), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
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
  [247] = 3,
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
  [290] = 3,
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
  [332] = 22,
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
    ACTIONS(23), 1,
      aux_sym_accumType_token7,
    ACTIONS(25), 1,
      aux_sym_accumType_token8,
    ACTIONS(27), 1,
      aux_sym_accumType_token9,
    ACTIONS(29), 1,
      aux_sym_accumType_token10,
    ACTIONS(31), 1,
      aux_sym_accumType_token13,
    ACTIONS(33), 1,
      aux_sym_accumType_token14,
    ACTIONS(37), 1,
      aux_sym_fileDeclStmt_token1,
    STATE(7), 1,
      aux_sym_declStmts_repeat1,
    STATE(433), 1,
      sym_accumType,
    STATE(434), 1,
      sym_baseType,
    STATE(750), 1,
      sym_declStmt,
    ACTIONS(57), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(747), 3,
      sym_accumDeclStmt,
      sym_baseDeclStmt,
      sym_fileDeclStmt,
    ACTIONS(55), 4,
      aux_sym_queryBodyIfStmt_token1,
      anon_sym__,
      aux_sym_printStmt_token1,
      aux_sym_returnStmt_token1,
    ACTIONS(21), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [411] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      aux_sym_CREATE_VERTEX_token1,
    ACTIONS(62), 1,
      aux_sym_accumDeclStmt_token1,
    ACTIONS(65), 1,
      aux_sym_accumType_token1,
    ACTIONS(68), 1,
      aux_sym_accumType_token2,
    ACTIONS(71), 1,
      aux_sym_accumType_token3,
    ACTIONS(74), 1,
      aux_sym_accumType_token4,
    ACTIONS(80), 1,
      aux_sym_accumType_token7,
    ACTIONS(83), 1,
      aux_sym_accumType_token8,
    ACTIONS(86), 1,
      aux_sym_accumType_token9,
    ACTIONS(89), 1,
      aux_sym_accumType_token10,
    ACTIONS(92), 1,
      aux_sym_accumType_token13,
    ACTIONS(95), 1,
      aux_sym_accumType_token14,
    ACTIONS(100), 1,
      aux_sym_fileDeclStmt_token1,
    STATE(7), 1,
      aux_sym_declStmts_repeat1,
    STATE(433), 1,
      sym_accumType,
    STATE(434), 1,
      sym_baseType,
    STATE(750), 1,
      sym_declStmt,
    ACTIONS(103), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(747), 3,
      sym_accumDeclStmt,
      sym_baseDeclStmt,
      sym_fileDeclStmt,
    ACTIONS(98), 4,
      aux_sym_queryBodyIfStmt_token1,
      anon_sym__,
      aux_sym_printStmt_token1,
      aux_sym_returnStmt_token1,
    ACTIONS(77), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [490] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      aux_sym_integer_token1,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    ACTIONS(107), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(105), 28,
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
  [535] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DOT,
    ACTIONS(118), 1,
      aux_sym_integer_token1,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    ACTIONS(114), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(112), 27,
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
  [582] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      aux_sym_integer_token1,
    ACTIONS(124), 1,
      anon_sym_DOT,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    ACTIONS(122), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(120), 27,
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
  [629] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(126), 28,
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
  [669] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      aux_sym_integer_token1,
    STATE(16), 1,
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
  [713] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
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
  [757] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
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
  [801] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      aux_sym_integer_token1,
    STATE(14), 1,
      aux_sym_integer_repeat1,
    ACTIONS(142), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(140), 27,
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
  [845] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      aux_sym_integer_token1,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    ACTIONS(142), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(140), 27,
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
  [889] = 4,
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
  [930] = 3,
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
  [968] = 3,
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
  [1006] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 3,
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
  [1044] = 3,
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
  [1082] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(168), 27,
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
  [1120] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(172), 27,
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
  [1158] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(176), 27,
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
  [1196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(180), 27,
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
  [1234] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(184), 27,
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
  [1272] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      aux_sym_typedef_token1,
    STATE(27), 1,
      aux_sym_typedefs_repeat1,
    STATE(752), 1,
      sym_typedef,
    ACTIONS(193), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(191), 24,
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
  [1315] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(31), 1,
      aux_sym_name_repeat1,
    ACTIONS(199), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(201), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(197), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(195), 21,
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
  [1358] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_typedef_token1,
    STATE(27), 1,
      aux_sym_typedefs_repeat1,
    STATE(752), 1,
      sym_typedef,
    ACTIONS(205), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(203), 24,
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
  [1401] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(30), 1,
      aux_sym_name_repeat1,
    ACTIONS(211), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(214), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(209), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(207), 21,
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
  [1444] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(30), 1,
      aux_sym_name_repeat1,
    ACTIONS(221), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(223), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(219), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(217), 21,
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
  [1487] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(34), 1,
      aux_sym_name_repeat1,
    ACTIONS(225), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(227), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(197), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(195), 21,
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
  [1530] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(33), 1,
      aux_sym_name_repeat1,
    ACTIONS(229), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(232), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(209), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(207), 21,
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
  [1573] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(33), 1,
      aux_sym_name_repeat1,
    ACTIONS(235), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(237), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(219), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(217), 21,
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
  [1616] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(35), 1,
      aux_sym_name_repeat1,
    ACTIONS(239), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(242), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(209), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(207), 20,
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
  [1658] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(35), 1,
      aux_sym_name_repeat1,
    ACTIONS(245), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(247), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(219), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(217), 20,
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
  [1700] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(37), 1,
      aux_sym_name_repeat1,
    ACTIONS(249), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(252), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(209), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(207), 20,
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
  [1742] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(39), 1,
      aux_sym_name_repeat1,
    ACTIONS(255), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(257), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(197), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(195), 20,
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
  [1784] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(37), 1,
      aux_sym_name_repeat1,
    ACTIONS(259), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(261), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(219), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(217), 20,
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
  [1826] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_name_repeat1,
    ACTIONS(263), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(265), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(197), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(195), 20,
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
  [1868] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(191), 25,
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
  [1903] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(98), 24,
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
  [1937] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(45), 1,
      aux_sym_name_repeat1,
    ACTIONS(197), 2,
      anon_sym_SLASH,
      anon_sym_PLUS,
    ACTIONS(267), 4,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(195), 19,
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
  [1975] = 19,
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
    ACTIONS(23), 1,
      aux_sym_accumType_token7,
    ACTIONS(25), 1,
      aux_sym_accumType_token8,
    ACTIONS(27), 1,
      aux_sym_accumType_token9,
    ACTIONS(29), 1,
      aux_sym_accumType_token10,
    ACTIONS(31), 1,
      aux_sym_accumType_token13,
    ACTIONS(33), 1,
      aux_sym_accumType_token14,
    ACTIONS(269), 1,
      aux_sym_accumType_token5,
    ACTIONS(271), 1,
      anon_sym__,
    STATE(352), 1,
      sym_name,
    STATE(723), 1,
      sym_type,
    ACTIONS(273), 2,
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
  [2041] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(46), 1,
      aux_sym_name_repeat1,
    ACTIONS(219), 2,
      anon_sym_SLASH,
      anon_sym_PLUS,
    ACTIONS(275), 4,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(217), 19,
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
  [2079] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(46), 1,
      aux_sym_name_repeat1,
    ACTIONS(209), 2,
      anon_sym_SLASH,
      anon_sym_PLUS,
    ACTIONS(277), 4,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(207), 19,
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
  [2117] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_accumType_token1,
    ACTIONS(23), 1,
      aux_sym_accumType_token7,
    ACTIONS(25), 1,
      aux_sym_accumType_token8,
    ACTIONS(27), 1,
      aux_sym_accumType_token9,
    ACTIONS(29), 1,
      aux_sym_accumType_token10,
    ACTIONS(31), 1,
      aux_sym_accumType_token13,
    ACTIONS(33), 1,
      aux_sym_accumType_token14,
    ACTIONS(269), 1,
      aux_sym_accumType_token5,
    ACTIONS(280), 1,
      aux_sym_CREATE_VERTEX_token1,
    ACTIONS(282), 1,
      aux_sym_accumType_token2,
    ACTIONS(284), 1,
      aux_sym_accumType_token3,
    ACTIONS(286), 1,
      aux_sym_accumType_token4,
    ACTIONS(288), 1,
      anon_sym__,
    STATE(352), 1,
      sym_name,
    STATE(530), 1,
      sym_type,
    ACTIONS(290), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(459), 3,
      sym_accumType,
      sym_tupleType,
      sym_baseType,
    ACTIONS(292), 6,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [2183] = 19,
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
    ACTIONS(23), 1,
      aux_sym_accumType_token7,
    ACTIONS(25), 1,
      aux_sym_accumType_token8,
    ACTIONS(27), 1,
      aux_sym_accumType_token9,
    ACTIONS(29), 1,
      aux_sym_accumType_token10,
    ACTIONS(31), 1,
      aux_sym_accumType_token13,
    ACTIONS(33), 1,
      aux_sym_accumType_token14,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(269), 1,
      aux_sym_accumType_token5,
    STATE(352), 1,
      sym_name,
    STATE(611), 1,
      sym_type,
    ACTIONS(45), 2,
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
  [2249] = 17,
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
    ACTIONS(23), 1,
      aux_sym_accumType_token7,
    ACTIONS(25), 1,
      aux_sym_accumType_token8,
    ACTIONS(27), 1,
      aux_sym_accumType_token9,
    ACTIONS(29), 1,
      aux_sym_accumType_token10,
    ACTIONS(31), 1,
      aux_sym_accumType_token13,
    ACTIONS(33), 1,
      aux_sym_accumType_token14,
    ACTIONS(271), 1,
      anon_sym__,
    STATE(352), 1,
      sym_name,
    ACTIONS(273), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(649), 3,
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
  [2310] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_DASH,
    ACTIONS(300), 1,
      anon_sym_AT_AT,
    ACTIONS(302), 1,
      anon_sym_DOT,
    ACTIONS(304), 1,
      anon_sym__,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      aux_sym_integer_token1,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(20), 1,
      sym_globalAccumName,
    STATE(153), 1,
      sym_name,
    STATE(157), 1,
      sym_expr,
    STATE(380), 1,
      sym_vExprSet,
    STATE(431), 1,
      sym_tableName,
    STATE(435), 1,
      sym_printExpr,
    ACTIONS(296), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(310), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
  [2376] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_SLASH,
    ACTIONS(320), 1,
      aux_sym_condition_token1,
    ACTIONS(322), 1,
      aux_sym_condition_token2,
    ACTIONS(324), 1,
      aux_sym_condition_token3,
    STATE(95), 1,
      sym_mathOperator,
    STATE(97), 1,
      sym_comparisonOperator,
    ACTIONS(314), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(312), 4,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_printStmt_token3,
    ACTIONS(326), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(316), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [2424] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_DASH,
    ACTIONS(300), 1,
      anon_sym_AT_AT,
    ACTIONS(302), 1,
      anon_sym_DOT,
    ACTIONS(304), 1,
      anon_sym__,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      aux_sym_integer_token1,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(20), 1,
      sym_globalAccumName,
    STATE(153), 1,
      sym_name,
    STATE(157), 1,
      sym_expr,
    STATE(380), 1,
      sym_vExprSet,
    STATE(381), 1,
      sym_printExpr,
    STATE(431), 1,
      sym_tableName,
    ACTIONS(296), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(310), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
  [2490] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_SLASH,
    ACTIONS(324), 1,
      aux_sym_condition_token3,
    ACTIONS(328), 1,
      aux_sym_condition_token1,
    ACTIONS(330), 1,
      aux_sym_condition_token2,
    STATE(86), 1,
      sym_mathOperator,
    STATE(102), 1,
      sym_comparisonOperator,
    ACTIONS(314), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(312), 4,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_perClauseV2_token1,
    ACTIONS(326), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(316), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [2538] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_SLASH,
    ACTIONS(324), 1,
      aux_sym_condition_token3,
    ACTIONS(332), 1,
      aux_sym_condition_token1,
    ACTIONS(334), 1,
      aux_sym_condition_token2,
    STATE(84), 1,
      sym_comparisonOperator,
    STATE(98), 1,
      sym_mathOperator,
    ACTIONS(314), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(312), 3,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_queryBodyIfStmt_token2,
    ACTIONS(326), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(316), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [2585] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_SLASH,
    STATE(95), 1,
      sym_mathOperator,
    ACTIONS(338), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(340), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(336), 11,
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
  [2622] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_SLASH,
    ACTIONS(324), 1,
      aux_sym_condition_token3,
    ACTIONS(346), 1,
      aux_sym_condition_token1,
    ACTIONS(348), 1,
      aux_sym_condition_token2,
    STATE(85), 1,
      sym_mathOperator,
    STATE(90), 1,
      sym_comparisonOperator,
    ACTIONS(314), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(312), 3,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
    ACTIONS(326), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(316), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [2669] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(61), 1,
      aux_sym_name_repeat1,
    ACTIONS(350), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(352), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(195), 18,
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
      aux_sym_accumType_token13,
      aux_sym_accumType_token14,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [2704] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_DOT,
    ACTIONS(165), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(162), 19,
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
  [2737] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_DOT,
    ACTIONS(165), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(162), 19,
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
  [2770] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_SLASH,
    STATE(86), 1,
      sym_mathOperator,
    ACTIONS(338), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(340), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(336), 11,
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
  [2807] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(62), 1,
      aux_sym_name_repeat1,
    ACTIONS(358), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(360), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(217), 18,
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
      aux_sym_accumType_token13,
      aux_sym_accumType_token14,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [2842] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(62), 1,
      aux_sym_name_repeat1,
    ACTIONS(362), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(365), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(207), 18,
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
      aux_sym_accumType_token13,
      aux_sym_accumType_token14,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [2877] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      aux_sym_integer_token1,
    ACTIONS(368), 1,
      anon_sym_AT_AT,
    ACTIONS(370), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(20), 1,
      sym_globalAccumName,
    STATE(54), 1,
      sym_expr,
    STATE(81), 1,
      sym_name,
    STATE(473), 1,
      sym_condition,
    ACTIONS(296), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(372), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
  [2937] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      aux_sym_integer_token1,
    ACTIONS(374), 1,
      anon_sym_AT_AT,
    ACTIONS(376), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(20), 1,
      sym_globalAccumName,
    STATE(53), 1,
      sym_expr,
    STATE(59), 1,
      sym_name,
    STATE(457), 1,
      sym_condition,
    ACTIONS(296), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(378), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
  [2997] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_DOT,
    ACTIONS(165), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(162), 18,
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
  [3029] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      aux_sym_integer_token1,
    ACTIONS(368), 1,
      anon_sym_AT_AT,
    ACTIONS(370), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(20), 1,
      sym_globalAccumName,
    STATE(54), 1,
      sym_expr,
    STATE(81), 1,
      sym_name,
    STATE(476), 1,
      sym_condition,
    ACTIONS(296), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(372), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
  [3089] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      aux_sym_integer_token1,
    ACTIONS(382), 1,
      anon_sym_AT_AT,
    ACTIONS(384), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(20), 1,
      sym_globalAccumName,
    STATE(56), 1,
      sym_expr,
    STATE(65), 1,
      sym_name,
    STATE(481), 1,
      sym_condition,
    ACTIONS(296), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(386), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
  [3149] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      aux_sym_integer_token1,
    ACTIONS(368), 1,
      anon_sym_AT_AT,
    ACTIONS(370), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(20), 1,
      sym_globalAccumName,
    STATE(54), 1,
      sym_expr,
    STATE(81), 1,
      sym_name,
    STATE(524), 1,
      sym_condition,
    ACTIONS(296), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(372), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
  [3209] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      aux_sym_integer_token1,
    ACTIONS(388), 1,
      anon_sym_AT_AT,
    ACTIONS(390), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(20), 1,
      sym_globalAccumName,
    STATE(51), 1,
      sym_expr,
    STATE(58), 1,
      sym_name,
    STATE(427), 1,
      sym_condition,
    ACTIONS(296), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(392), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
  [3269] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      aux_sym_integer_token1,
    ACTIONS(394), 1,
      anon_sym_AT_AT,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(20), 1,
      sym_globalAccumName,
    STATE(172), 1,
      sym_name,
    STATE(174), 1,
      sym_expr,
    STATE(676), 1,
      sym_argList,
    ACTIONS(45), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(296), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
  [3329] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      aux_sym_integer_token1,
    ACTIONS(388), 1,
      anon_sym_AT_AT,
    ACTIONS(390), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(20), 1,
      sym_globalAccumName,
    STATE(51), 1,
      sym_expr,
    STATE(58), 1,
      sym_name,
    STATE(461), 1,
      sym_condition,
    ACTIONS(296), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(392), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
  [3389] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      aux_sym_integer_token1,
    ACTIONS(368), 1,
      anon_sym_AT_AT,
    ACTIONS(370), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(20), 1,
      sym_globalAccumName,
    STATE(54), 1,
      sym_expr,
    STATE(81), 1,
      sym_name,
    STATE(491), 1,
      sym_condition,
    ACTIONS(296), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(372), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
  [3449] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_SLASH,
    STATE(98), 1,
      sym_mathOperator,
    ACTIONS(338), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(340), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(336), 10,
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
  [3485] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      aux_sym_integer_token1,
    ACTIONS(396), 1,
      anon_sym_AT_AT,
    ACTIONS(398), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(20), 1,
      sym_globalAccumName,
    STATE(173), 1,
      sym_name,
    STATE(176), 1,
      sym_expr,
    STATE(494), 1,
      sym_vSetProj,
    ACTIONS(296), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(400), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
  [3545] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      aux_sym_integer_token1,
    ACTIONS(388), 1,
      anon_sym_AT_AT,
    ACTIONS(390), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(20), 1,
      sym_globalAccumName,
    STATE(51), 1,
      sym_expr,
    STATE(58), 1,
      sym_name,
    STATE(440), 1,
      sym_condition,
    ACTIONS(296), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(392), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
  [3605] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      aux_sym_integer_token1,
    ACTIONS(396), 1,
      anon_sym_AT_AT,
    ACTIONS(398), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(20), 1,
      sym_globalAccumName,
    STATE(173), 1,
      sym_name,
    STATE(176), 1,
      sym_expr,
    STATE(600), 1,
      sym_vSetProj,
    ACTIONS(296), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(400), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
  [3665] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      aux_sym_integer_token1,
    ACTIONS(374), 1,
      anon_sym_AT_AT,
    ACTIONS(376), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(20), 1,
      sym_globalAccumName,
    STATE(53), 1,
      sym_expr,
    STATE(59), 1,
      sym_name,
    STATE(439), 1,
      sym_condition,
    ACTIONS(296), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(378), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
  [3725] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      aux_sym_integer_token1,
    ACTIONS(382), 1,
      anon_sym_AT_AT,
    ACTIONS(384), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(20), 1,
      sym_globalAccumName,
    STATE(56), 1,
      sym_expr,
    STATE(65), 1,
      sym_name,
    STATE(546), 1,
      sym_condition,
    ACTIONS(296), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(386), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
  [3785] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_SLASH,
    STATE(82), 1,
      aux_sym_name_repeat1,
    ACTIONS(402), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(404), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(217), 16,
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
  [3821] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_SLASH,
    STATE(85), 1,
      sym_mathOperator,
    ACTIONS(338), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(340), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(336), 10,
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
  [3857] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_DOT,
    ACTIONS(165), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(162), 18,
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
  [3889] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_SLASH,
    STATE(82), 1,
      aux_sym_name_repeat1,
    ACTIONS(408), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(411), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(207), 16,
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
  [3925] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_SLASH,
    STATE(79), 1,
      aux_sym_name_repeat1,
    ACTIONS(414), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(416), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(195), 16,
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
  [3961] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      aux_sym_integer_token1,
    ACTIONS(418), 1,
      anon_sym_AT_AT,
    ACTIONS(420), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(20), 1,
      sym_globalAccumName,
    STATE(171), 1,
      sym_name,
    STATE(181), 1,
      sym_expr,
    ACTIONS(296), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(422), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
  [4018] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      aux_sym_integer_token1,
    ACTIONS(382), 1,
      anon_sym_AT_AT,
    ACTIONS(384), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(20), 1,
      sym_globalAccumName,
    STATE(65), 1,
      sym_name,
    STATE(80), 1,
      sym_expr,
    ACTIONS(296), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(386), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
  [4075] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      aux_sym_integer_token1,
    ACTIONS(374), 1,
      anon_sym_AT_AT,
    ACTIONS(376), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(20), 1,
      sym_globalAccumName,
    STATE(59), 1,
      sym_name,
    STATE(60), 1,
      sym_expr,
    ACTIONS(296), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(378), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
  [4132] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      aux_sym_integer_token1,
    ACTIONS(418), 1,
      anon_sym_AT_AT,
    ACTIONS(420), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(20), 1,
      sym_globalAccumName,
    STATE(166), 1,
      sym_expr,
    STATE(171), 1,
      sym_name,
    ACTIONS(296), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(422), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
  [4189] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      aux_sym_integer_token1,
    ACTIONS(396), 1,
      anon_sym_AT_AT,
    ACTIONS(398), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(20), 1,
      sym_globalAccumName,
    STATE(168), 1,
      sym_expr,
    STATE(173), 1,
      sym_name,
    ACTIONS(296), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(400), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
  [4246] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      aux_sym_integer_token1,
    ACTIONS(424), 1,
      anon_sym_AT_AT,
    ACTIONS(426), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(20), 1,
      sym_globalAccumName,
    STATE(170), 1,
      sym_expr,
    STATE(178), 1,
      sym_name,
    ACTIONS(296), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(428), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
  [4303] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      aux_sym_integer_token1,
    ACTIONS(424), 1,
      anon_sym_AT_AT,
    ACTIONS(426), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(20), 1,
      sym_globalAccumName,
    STATE(177), 1,
      sym_expr,
    STATE(178), 1,
      sym_name,
    ACTIONS(296), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(428), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
  [4360] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      aux_sym_integer_token1,
    ACTIONS(430), 1,
      anon_sym_AT_AT,
    ACTIONS(432), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(20), 1,
      sym_globalAccumName,
    STATE(179), 1,
      sym_expr,
    STATE(182), 1,
      sym_name,
    ACTIONS(296), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(434), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
  [4417] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_DASH,
    ACTIONS(300), 1,
      anon_sym_AT_AT,
    ACTIONS(302), 1,
      anon_sym_DOT,
    ACTIONS(304), 1,
      anon_sym__,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      aux_sym_integer_token1,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(20), 1,
      sym_globalAccumName,
    STATE(152), 1,
      sym_expr,
    STATE(156), 1,
      sym_name,
    ACTIONS(296), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(310), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
  [4474] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      aux_sym_integer_token1,
    ACTIONS(436), 1,
      anon_sym_AT_AT,
    ACTIONS(438), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(20), 1,
      sym_globalAccumName,
    STATE(161), 1,
      sym_name,
    STATE(164), 1,
      sym_expr,
    ACTIONS(296), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(440), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
  [4531] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      aux_sym_integer_token1,
    ACTIONS(430), 1,
      anon_sym_AT_AT,
    ACTIONS(432), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(20), 1,
      sym_globalAccumName,
    STATE(182), 1,
      sym_name,
    STATE(183), 1,
      sym_expr,
    ACTIONS(296), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(434), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
  [4588] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      aux_sym_integer_token1,
    ACTIONS(388), 1,
      anon_sym_AT_AT,
    ACTIONS(390), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(20), 1,
      sym_globalAccumName,
    STATE(55), 1,
      sym_expr,
    STATE(58), 1,
      sym_name,
    ACTIONS(296), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(392), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
  [4645] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      aux_sym_integer_token1,
    ACTIONS(430), 1,
      anon_sym_AT_AT,
    ACTIONS(432), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(20), 1,
      sym_globalAccumName,
    STATE(167), 1,
      sym_expr,
    STATE(182), 1,
      sym_name,
    ACTIONS(296), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(434), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
  [4702] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      aux_sym_integer_token1,
    ACTIONS(436), 1,
      anon_sym_AT_AT,
    ACTIONS(438), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(20), 1,
      sym_globalAccumName,
    STATE(161), 1,
      sym_name,
    STATE(162), 1,
      sym_expr,
    ACTIONS(296), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(440), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
  [4759] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      aux_sym_integer_token1,
    ACTIONS(368), 1,
      anon_sym_AT_AT,
    ACTIONS(370), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(20), 1,
      sym_globalAccumName,
    STATE(73), 1,
      sym_expr,
    STATE(81), 1,
      sym_name,
    ACTIONS(296), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(372), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
  [4816] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      aux_sym_integer_token1,
    ACTIONS(394), 1,
      anon_sym_AT_AT,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(20), 1,
      sym_globalAccumName,
    STATE(172), 1,
      sym_name,
    STATE(198), 1,
      sym_expr,
    ACTIONS(45), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(296), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
  [4873] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      aux_sym_integer_token1,
    ACTIONS(394), 1,
      anon_sym_AT_AT,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(20), 1,
      sym_globalAccumName,
    STATE(172), 1,
      sym_name,
    STATE(210), 1,
      sym_expr,
    ACTIONS(45), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(296), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
  [4930] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      aux_sym_integer_token1,
    ACTIONS(394), 1,
      anon_sym_AT_AT,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(20), 1,
      sym_globalAccumName,
    STATE(172), 1,
      sym_name,
    STATE(186), 1,
      sym_expr,
    ACTIONS(45), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(296), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
  [4987] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      aux_sym_integer_token1,
    ACTIONS(442), 1,
      anon_sym_AT_AT,
    ACTIONS(444), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(20), 1,
      sym_globalAccumName,
    STATE(160), 1,
      sym_expr,
    STATE(165), 1,
      sym_name,
    ACTIONS(296), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(446), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
  [5044] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      aux_sym_integer_token1,
    ACTIONS(394), 1,
      anon_sym_AT_AT,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(20), 1,
      sym_globalAccumName,
    STATE(169), 1,
      sym_expr,
    STATE(172), 1,
      sym_name,
    ACTIONS(45), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(296), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
  [5101] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      aux_sym_integer_token1,
    ACTIONS(430), 1,
      anon_sym_AT_AT,
    ACTIONS(432), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(20), 1,
      sym_globalAccumName,
    STATE(175), 1,
      sym_expr,
    STATE(182), 1,
      sym_name,
    ACTIONS(296), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(434), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
  [5158] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      aux_sym_integer_token1,
    ACTIONS(442), 1,
      anon_sym_AT_AT,
    ACTIONS(444), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(20), 1,
      sym_globalAccumName,
    STATE(163), 1,
      sym_expr,
    STATE(165), 1,
      sym_name,
    ACTIONS(296), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(446), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(25), 2,
      sym_integer,
      sym_real,
  [5215] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_SLASH,
    STATE(108), 1,
      aux_sym_name_repeat1,
    ACTIONS(448), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(450), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(195), 14,
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
  [5249] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_SLASH,
    STATE(111), 1,
      aux_sym_name_repeat1,
    ACTIONS(452), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(454), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(195), 14,
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
  [5283] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_SLASH,
    STATE(109), 1,
      aux_sym_name_repeat1,
    ACTIONS(456), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(458), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(217), 14,
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
  [5317] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_SLASH,
    STATE(109), 1,
      aux_sym_name_repeat1,
    ACTIONS(460), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(463), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(207), 14,
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
  [5351] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_SLASH,
    STATE(110), 1,
      aux_sym_name_repeat1,
    ACTIONS(466), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(469), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(207), 14,
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
  [5385] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_SLASH,
    STATE(110), 1,
      aux_sym_name_repeat1,
    ACTIONS(472), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(474), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(217), 14,
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
  [5419] = 14,
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
    ACTIONS(23), 1,
      aux_sym_accumType_token7,
    ACTIONS(25), 1,
      aux_sym_accumType_token8,
    ACTIONS(27), 1,
      aux_sym_accumType_token9,
    ACTIONS(29), 1,
      aux_sym_accumType_token10,
    ACTIONS(31), 1,
      aux_sym_accumType_token13,
    ACTIONS(33), 1,
      aux_sym_accumType_token14,
    STATE(632), 2,
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
  [5469] = 13,
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
    ACTIONS(476), 1,
      anon_sym_RPAREN,
    ACTIONS(478), 1,
      anon_sym_LT,
    ACTIONS(482), 1,
      anon_sym_FILE,
    STATE(359), 1,
      sym_parameterType,
    STATE(477), 1,
      sym_baseType,
    STATE(638), 1,
      sym_parameterList,
    ACTIONS(480), 2,
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
  [5516] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_SLASH,
    ACTIONS(486), 1,
      aux_sym_name_token2,
    STATE(125), 1,
      aux_sym_name_repeat1,
    ACTIONS(484), 3,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
    ACTIONS(195), 13,
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
  [5549] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_SLASH,
    STATE(115), 1,
      aux_sym_name_repeat1,
    ACTIONS(488), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(491), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(207), 13,
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
  [5582] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_SLASH,
    STATE(116), 1,
      aux_sym_name_repeat1,
    ACTIONS(494), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(497), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(207), 13,
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
  [5615] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_SLASH,
    STATE(121), 1,
      aux_sym_name_repeat1,
    ACTIONS(500), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(502), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(195), 13,
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
  [5648] = 13,
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
    ACTIONS(478), 1,
      anon_sym_LT,
    ACTIONS(482), 1,
      anon_sym_FILE,
    ACTIONS(504), 1,
      anon_sym_RPAREN,
    STATE(359), 1,
      sym_parameterType,
    STATE(477), 1,
      sym_baseType,
    STATE(726), 1,
      sym_parameterList,
    ACTIONS(480), 2,
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
  [5695] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_SLASH,
    STATE(119), 1,
      aux_sym_name_repeat1,
    ACTIONS(506), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(509), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(207), 13,
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
  [5728] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_SLASH,
    STATE(123), 1,
      aux_sym_name_repeat1,
    ACTIONS(512), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(514), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(195), 13,
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
  [5761] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_SLASH,
    STATE(115), 1,
      aux_sym_name_repeat1,
    ACTIONS(516), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(518), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(217), 13,
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
  [5794] = 13,
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
    ACTIONS(478), 1,
      anon_sym_LT,
    ACTIONS(482), 1,
      anon_sym_FILE,
    ACTIONS(520), 1,
      anon_sym_RPAREN,
    STATE(359), 1,
      sym_parameterType,
    STATE(477), 1,
      sym_baseType,
    STATE(703), 1,
      sym_parameterList,
    ACTIONS(480), 2,
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
  [5841] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_SLASH,
    STATE(116), 1,
      aux_sym_name_repeat1,
    ACTIONS(522), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(524), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(217), 13,
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
  [5874] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(531), 1,
      anon_sym__,
    ACTIONS(534), 1,
      aux_sym_printStmt_token1,
    ACTIONS(537), 1,
      aux_sym_returnStmt_token1,
    STATE(124), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(267), 1,
      sym_name,
    STATE(555), 1,
      sym_gsqlSelectClause,
    STATE(557), 1,
      sym_vertexSetName,
    STATE(675), 1,
      sym_queryBodyStmt,
    STATE(745), 1,
      sym_gsqlSelectBlock,
    ACTIONS(529), 2,
      aux_sym_queryBodyIfStmt_token3,
      aux_sym_queryBodyIfStmt_token4,
    ACTIONS(540), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(746), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [5923] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_SLASH,
    ACTIONS(545), 1,
      aux_sym_name_token2,
    STATE(129), 1,
      aux_sym_name_repeat1,
    ACTIONS(543), 3,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
    ACTIONS(217), 13,
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
  [5956] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_SLASH,
    STATE(130), 1,
      aux_sym_name_repeat1,
    ACTIONS(547), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(549), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(195), 13,
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
  [5989] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(41), 1,
      aux_sym_printStmt_token1,
    ACTIONS(43), 1,
      aux_sym_returnStmt_token1,
    STATE(124), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(267), 1,
      sym_name,
    STATE(555), 1,
      sym_gsqlSelectClause,
    STATE(557), 1,
      sym_vertexSetName,
    STATE(675), 1,
      sym_queryBodyStmt,
    STATE(745), 1,
      sym_gsqlSelectBlock,
    ACTIONS(45), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(551), 2,
      aux_sym_queryBodyIfStmt_token3,
      aux_sym_queryBodyIfStmt_token4,
    STATE(746), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [6038] = 13,
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
    ACTIONS(478), 1,
      anon_sym_LT,
    ACTIONS(482), 1,
      anon_sym_FILE,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
    STATE(359), 1,
      sym_parameterType,
    STATE(477), 1,
      sym_baseType,
    STATE(661), 1,
      sym_parameterList,
    ACTIONS(480), 2,
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
  [6085] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_SLASH,
    ACTIONS(558), 1,
      aux_sym_name_token2,
    STATE(129), 1,
      aux_sym_name_repeat1,
    ACTIONS(555), 3,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
    ACTIONS(207), 13,
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
  [6118] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_SLASH,
    STATE(119), 1,
      aux_sym_name_repeat1,
    ACTIONS(561), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(563), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(217), 13,
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
  [6151] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(41), 1,
      aux_sym_printStmt_token1,
    ACTIONS(43), 1,
      aux_sym_returnStmt_token1,
    ACTIONS(565), 1,
      aux_sym_queryBodyIfStmt_token1,
    STATE(134), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(267), 1,
      sym_name,
    STATE(555), 1,
      sym_gsqlSelectClause,
    STATE(557), 1,
      sym_vertexSetName,
    STATE(689), 1,
      sym_queryBodyStmt,
    STATE(725), 1,
      sym_queryBodyStmts,
    STATE(745), 1,
      sym_gsqlSelectBlock,
    ACTIONS(45), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(746), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [6199] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_LPAREN,
    ACTIONS(569), 1,
      anon_sym_LT,
    ACTIONS(571), 1,
      anon_sym_AT_AT,
    ACTIONS(573), 1,
      anon_sym__,
    ACTIONS(575), 1,
      aux_sym_seed_token1,
    ACTIONS(577), 1,
      anon_sym_COLON,
    STATE(430), 1,
      sym_name,
    STATE(545), 1,
      sym_edgeSetType,
    STATE(548), 1,
      sym_atomicEdgeType,
    STATE(580), 1,
      sym_stepEdgeTypes,
    STATE(588), 1,
      sym_atomicEdgePattern,
    STATE(668), 1,
      sym_pathEdgePattern,
    STATE(687), 1,
      sym_stepEdgeSet,
    ACTIONS(273), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(432), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_edgeType,
  [6251] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(41), 1,
      aux_sym_printStmt_token1,
    ACTIONS(43), 1,
      aux_sym_returnStmt_token1,
    STATE(127), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(267), 1,
      sym_name,
    STATE(523), 1,
      sym_queryBodyStmts,
    STATE(555), 1,
      sym_gsqlSelectClause,
    STATE(557), 1,
      sym_vertexSetName,
    STATE(675), 1,
      sym_queryBodyStmt,
    STATE(745), 1,
      sym_gsqlSelectBlock,
    ACTIONS(45), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(746), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [6299] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(41), 1,
      aux_sym_printStmt_token1,
    ACTIONS(43), 1,
      aux_sym_returnStmt_token1,
    ACTIONS(551), 1,
      aux_sym_queryBodyIfStmt_token4,
    STATE(137), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(267), 1,
      sym_name,
    STATE(555), 1,
      sym_gsqlSelectClause,
    STATE(557), 1,
      sym_vertexSetName,
    STATE(689), 1,
      sym_queryBodyStmt,
    STATE(745), 1,
      sym_gsqlSelectBlock,
    ACTIONS(45), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(746), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [6347] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(41), 1,
      aux_sym_printStmt_token1,
    ACTIONS(43), 1,
      aux_sym_returnStmt_token1,
    ACTIONS(565), 1,
      aux_sym_queryBodyIfStmt_token1,
    STATE(134), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(267), 1,
      sym_name,
    STATE(555), 1,
      sym_gsqlSelectClause,
    STATE(557), 1,
      sym_vertexSetName,
    STATE(621), 1,
      sym_queryBodyStmts,
    STATE(689), 1,
      sym_queryBodyStmt,
    STATE(745), 1,
      sym_gsqlSelectBlock,
    ACTIONS(45), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(746), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [6395] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(529), 1,
      anon_sym_RBRACE,
    ACTIONS(531), 1,
      anon_sym__,
    ACTIONS(534), 1,
      aux_sym_printStmt_token1,
    ACTIONS(537), 1,
      aux_sym_returnStmt_token1,
    STATE(136), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(267), 1,
      sym_name,
    STATE(555), 1,
      sym_gsqlSelectClause,
    STATE(557), 1,
      sym_vertexSetName,
    STATE(745), 1,
      sym_gsqlSelectBlock,
    STATE(748), 1,
      sym_queryBodyStmt,
    ACTIONS(540), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(746), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [6443] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(529), 1,
      aux_sym_queryBodyIfStmt_token4,
    ACTIONS(531), 1,
      anon_sym__,
    ACTIONS(534), 1,
      aux_sym_printStmt_token1,
    ACTIONS(537), 1,
      aux_sym_returnStmt_token1,
    STATE(137), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(267), 1,
      sym_name,
    STATE(555), 1,
      sym_gsqlSelectClause,
    STATE(557), 1,
      sym_vertexSetName,
    STATE(689), 1,
      sym_queryBodyStmt,
    STATE(745), 1,
      sym_gsqlSelectBlock,
    ACTIONS(540), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(746), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [6491] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(41), 1,
      aux_sym_printStmt_token1,
    ACTIONS(43), 1,
      aux_sym_returnStmt_token1,
    STATE(144), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(267), 1,
      sym_name,
    STATE(555), 1,
      sym_gsqlSelectClause,
    STATE(557), 1,
      sym_vertexSetName,
    STATE(713), 1,
      sym_queryBodyStmts,
    STATE(745), 1,
      sym_gsqlSelectBlock,
    STATE(748), 1,
      sym_queryBodyStmt,
    ACTIONS(45), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(746), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [6539] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(41), 1,
      aux_sym_printStmt_token1,
    ACTIONS(43), 1,
      aux_sym_returnStmt_token1,
    STATE(127), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(267), 1,
      sym_name,
    STATE(555), 1,
      sym_gsqlSelectClause,
    STATE(557), 1,
      sym_vertexSetName,
    STATE(558), 1,
      sym_queryBodyStmts,
    STATE(675), 1,
      sym_queryBodyStmt,
    STATE(745), 1,
      sym_gsqlSelectBlock,
    ACTIONS(45), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(746), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [6587] = 12,
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
    ACTIONS(579), 1,
      anon_sym__,
    STATE(151), 1,
      sym_name,
    STATE(204), 1,
      sym_fieldName,
    STATE(377), 1,
      sym_baseType,
    STATE(694), 1,
      sym_tupleFields,
    ACTIONS(581), 2,
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
  [6631] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(41), 1,
      aux_sym_printStmt_token1,
    ACTIONS(43), 1,
      aux_sym_returnStmt_token1,
    STATE(127), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(267), 1,
      sym_name,
    STATE(492), 1,
      sym_queryBodyStmts,
    STATE(555), 1,
      sym_gsqlSelectClause,
    STATE(557), 1,
      sym_vertexSetName,
    STATE(675), 1,
      sym_queryBodyStmt,
    STATE(745), 1,
      sym_gsqlSelectBlock,
    ACTIONS(45), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(746), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [6679] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(41), 1,
      aux_sym_printStmt_token1,
    ACTIONS(43), 1,
      aux_sym_returnStmt_token1,
    STATE(144), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(267), 1,
      sym_name,
    STATE(555), 1,
      sym_gsqlSelectClause,
    STATE(557), 1,
      sym_vertexSetName,
    STATE(730), 1,
      sym_queryBodyStmts,
    STATE(745), 1,
      sym_gsqlSelectBlock,
    STATE(748), 1,
      sym_queryBodyStmt,
    ACTIONS(45), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(746), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [6727] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_LPAREN,
    ACTIONS(569), 1,
      anon_sym_LT,
    ACTIONS(571), 1,
      anon_sym_AT_AT,
    ACTIONS(573), 1,
      anon_sym__,
    ACTIONS(575), 1,
      aux_sym_seed_token1,
    ACTIONS(577), 1,
      anon_sym_COLON,
    STATE(336), 1,
      sym_edgeSetType,
    STATE(430), 1,
      sym_name,
    STATE(548), 1,
      sym_atomicEdgeType,
    STATE(580), 1,
      sym_stepEdgeTypes,
    STATE(588), 1,
      sym_atomicEdgePattern,
    STATE(687), 1,
      sym_stepEdgeSet,
    STATE(707), 1,
      sym_pathEdgePattern,
    ACTIONS(273), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(432), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_edgeType,
  [6779] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(41), 1,
      aux_sym_printStmt_token1,
    ACTIONS(43), 1,
      aux_sym_returnStmt_token1,
    ACTIONS(551), 1,
      anon_sym_RBRACE,
    STATE(136), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(267), 1,
      sym_name,
    STATE(555), 1,
      sym_gsqlSelectClause,
    STATE(557), 1,
      sym_vertexSetName,
    STATE(745), 1,
      sym_gsqlSelectBlock,
    STATE(748), 1,
      sym_queryBodyStmt,
    ACTIONS(45), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(746), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [6827] = 12,
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
    ACTIONS(271), 1,
      anon_sym__,
    ACTIONS(583), 1,
      aux_sym_accumType_token5,
    STATE(352), 1,
      sym_name,
    STATE(723), 1,
      sym_elementType,
    ACTIONS(273), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(567), 2,
      sym_tupleType,
      sym_baseType,
    ACTIONS(21), 6,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [6871] = 12,
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
    ACTIONS(583), 1,
      aux_sym_accumType_token5,
    STATE(352), 1,
      sym_name,
    STATE(720), 1,
      sym_elementType,
    ACTIONS(45), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(567), 2,
      sym_tupleType,
      sym_baseType,
    ACTIONS(21), 6,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [6915] = 11,
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
    ACTIONS(478), 1,
      anon_sym_LT,
    ACTIONS(482), 1,
      anon_sym_FILE,
    STATE(374), 1,
      sym_parameterType,
    STATE(477), 1,
      sym_baseType,
    ACTIONS(480), 2,
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
  [6956] = 11,
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
    ACTIONS(579), 1,
      anon_sym__,
    STATE(151), 1,
      sym_name,
    STATE(197), 1,
      sym_fieldName,
    STATE(368), 1,
      sym_baseType,
    ACTIONS(581), 2,
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
  [6997] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_LPAREN,
    ACTIONS(587), 1,
      anon_sym_AT_AT,
    ACTIONS(589), 1,
      anon_sym__,
    ACTIONS(591), 1,
      aux_sym_seed_token1,
    ACTIONS(593), 1,
      anon_sym_COLON,
    STATE(260), 1,
      sym_name,
    STATE(298), 1,
      sym_atomicVertexType,
    STATE(300), 1,
      sym_stepVertexTypes,
    STATE(302), 1,
      sym_stepVertexSet,
    STATE(312), 1,
      sym_vertexSetType,
    STATE(460), 1,
      sym_pathPattern,
    ACTIONS(595), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(262), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexType,
  [7043] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(154), 1,
      aux_sym_name_repeat1,
    ACTIONS(597), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(599), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(195), 11,
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
  [7071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 16,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token1,
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
  [7093] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_SLASH,
    STATE(92), 1,
      sym_mathOperator,
    ACTIONS(336), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
    ACTIONS(340), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7121] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_SLASH,
    ACTIONS(607), 1,
      anon_sym_DOT,
    ACTIONS(603), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
    ACTIONS(162), 10,
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
  [7149] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(155), 1,
      aux_sym_name_repeat1,
    ACTIONS(609), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(611), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(217), 11,
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
  [7177] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(155), 1,
      aux_sym_name_repeat1,
    ACTIONS(613), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(616), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(207), 11,
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
  [7205] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_SLASH,
    ACTIONS(607), 1,
      anon_sym_DOT,
    ACTIONS(162), 14,
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
  [7231] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_SLASH,
    ACTIONS(621), 1,
      aux_sym_printExpr_token1,
    ACTIONS(623), 1,
      anon_sym_LBRACK,
    STATE(92), 1,
      sym_mathOperator,
    ACTIONS(619), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
    ACTIONS(316), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7263] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_LPAREN,
    ACTIONS(587), 1,
      anon_sym_AT_AT,
    ACTIONS(589), 1,
      anon_sym__,
    ACTIONS(591), 1,
      aux_sym_seed_token1,
    ACTIONS(593), 1,
      anon_sym_COLON,
    STATE(260), 1,
      sym_name,
    STATE(298), 1,
      sym_atomicVertexType,
    STATE(300), 1,
      sym_stepVertexTypes,
    STATE(302), 1,
      sym_stepVertexSet,
    STATE(312), 1,
      sym_vertexSetType,
    STATE(335), 1,
      sym_pathPattern,
    ACTIONS(595), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(262), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexType,
  [7309] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_LPAREN,
    ACTIONS(587), 1,
      anon_sym_AT_AT,
    ACTIONS(589), 1,
      anon_sym__,
    ACTIONS(591), 1,
      aux_sym_seed_token1,
    ACTIONS(593), 1,
      anon_sym_COLON,
    STATE(260), 1,
      sym_name,
    STATE(298), 1,
      sym_atomicVertexType,
    STATE(300), 1,
      sym_stepVertexTypes,
    STATE(312), 1,
      sym_vertexSetType,
    STATE(403), 1,
      sym_stepVertexSet,
    ACTIONS(595), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(262), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexType,
  [7352] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_SLASH,
    STATE(105), 1,
      sym_mathOperator,
    ACTIONS(625), 4,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_perClauseV2_token1,
    ACTIONS(316), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7378] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_SLASH,
    ACTIONS(627), 1,
      anon_sym_DOT,
    ACTIONS(162), 12,
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
  [7402] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_SLASH,
    STATE(93), 1,
      sym_mathOperator,
    ACTIONS(625), 4,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_printStmt_token3,
    ACTIONS(316), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7428] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_SLASH,
    STATE(105), 1,
      sym_mathOperator,
    ACTIONS(336), 4,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_perClauseV2_token1,
    ACTIONS(340), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7454] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_SLASH,
    STATE(93), 1,
      sym_mathOperator,
    ACTIONS(336), 4,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_printStmt_token3,
    ACTIONS(340), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7480] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_SLASH,
    ACTIONS(629), 1,
      anon_sym_DOT,
    ACTIONS(162), 12,
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
  [7504] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_SLASH,
    STATE(87), 1,
      sym_mathOperator,
    ACTIONS(336), 3,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_queryBodyIfStmt_token2,
    ACTIONS(340), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7529] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_SLASH,
    STATE(94), 1,
      sym_mathOperator,
    ACTIONS(631), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
    ACTIONS(316), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7554] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_SLASH,
    STATE(88), 1,
      sym_mathOperator,
    ACTIONS(336), 3,
      anon_sym_COMMA,
      aux_sym_printExpr_token1,
      anon_sym_RBRACK,
    ACTIONS(340), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7579] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_SLASH,
    STATE(103), 1,
      sym_mathOperator,
    ACTIONS(336), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(340), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7604] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_SLASH,
    STATE(89), 1,
      sym_mathOperator,
    ACTIONS(336), 3,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
    ACTIONS(340), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7629] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_SLASH,
    ACTIONS(633), 1,
      anon_sym_DOT,
    ACTIONS(162), 11,
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
  [7652] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_SLASH,
    ACTIONS(635), 1,
      anon_sym_DOT,
    ACTIONS(162), 11,
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
  [7675] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_SLASH,
    ACTIONS(637), 1,
      anon_sym_DOT,
    ACTIONS(162), 11,
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
  [7698] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_SLASH,
    ACTIONS(639), 1,
      anon_sym_RPAREN,
    ACTIONS(641), 1,
      anon_sym_COMMA,
    STATE(103), 1,
      sym_mathOperator,
    STATE(490), 1,
      aux_sym_argList_repeat1,
    ACTIONS(316), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7727] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_SLASH,
    STATE(94), 1,
      sym_mathOperator,
    ACTIONS(643), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
    ACTIONS(316), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7752] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_SLASH,
    ACTIONS(647), 1,
      aux_sym_printExpr_token1,
    STATE(88), 1,
      sym_mathOperator,
    ACTIONS(645), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(316), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7779] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_SLASH,
    STATE(89), 1,
      sym_mathOperator,
    ACTIONS(625), 3,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
    ACTIONS(316), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7804] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_SLASH,
    ACTIONS(649), 1,
      anon_sym_DOT,
    ACTIONS(162), 11,
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
  [7827] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_SLASH,
    STATE(94), 1,
      sym_mathOperator,
    ACTIONS(651), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
    ACTIONS(316), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7852] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_AT_AT,
    ACTIONS(653), 1,
      anon_sym_RBRACE,
    ACTIONS(655), 1,
      anon_sym__,
    ACTIONS(657), 1,
      aux_sym_seed_token1,
    ACTIONS(659), 1,
      aux_sym_seed_token2,
    STATE(499), 1,
      sym_seed,
    STATE(501), 1,
      sym_name,
    STATE(667), 1,
      sym_vertexType,
    ACTIONS(273), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(585), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexSetName,
  [7889] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_SLASH,
    STATE(87), 1,
      sym_mathOperator,
    ACTIONS(625), 3,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_queryBodyIfStmt_token2,
    ACTIONS(316), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7914] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_SLASH,
    ACTIONS(661), 1,
      anon_sym_DOT,
    ACTIONS(162), 11,
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
  [7937] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_SLASH,
    STATE(94), 1,
      sym_mathOperator,
    ACTIONS(336), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
    ACTIONS(340), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7962] = 7,
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
    STATE(698), 1,
      sym_baseType,
    ACTIONS(21), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [7990] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(185), 1,
      aux_sym_name_repeat1,
    ACTIONS(663), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(666), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(207), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [8014] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_SLASH,
    STATE(103), 1,
      sym_mathOperator,
    ACTIONS(669), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(316), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [8038] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(189), 1,
      aux_sym_name_repeat1,
    ACTIONS(671), 4,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(217), 7,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_DOT_STAR,
      anon_sym_COLON,
  [8060] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      aux_sym_integer_token1,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(612), 1,
      sym_constant,
    ACTIONS(296), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(25), 2,
      sym_integer,
      sym_real,
  [8094] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(189), 1,
      aux_sym_name_repeat1,
    ACTIONS(673), 4,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(207), 7,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_DOT_STAR,
      anon_sym_COLON,
  [8116] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      aux_sym_integer_token1,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(502), 1,
      sym_constant,
    ACTIONS(296), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(25), 2,
      sym_integer,
      sym_real,
  [8150] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(187), 1,
      aux_sym_name_repeat1,
    ACTIONS(676), 4,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(195), 7,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_DOT_STAR,
      anon_sym_COLON,
  [8172] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      aux_sym_integer_token1,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(597), 1,
      sym_constant,
    ACTIONS(296), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(25), 2,
      sym_integer,
      sym_real,
  [8206] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      aux_sym_integer_token1,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(495), 1,
      sym_constant,
    ACTIONS(296), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(25), 2,
      sym_integer,
      sym_real,
  [8240] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(202), 1,
      aux_sym_name_repeat1,
    ACTIONS(678), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(680), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(195), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [8264] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      aux_sym_integer_token1,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(527), 1,
      sym_constant,
    ACTIONS(296), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(25), 2,
      sym_integer,
      sym_real,
  [8298] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_LBRACE,
    ACTIONS(684), 1,
      anon_sym_LPAREN,
    ACTIONS(686), 1,
      anon_sym__,
    ACTIONS(688), 1,
      aux_sym_gsqlSelectClause_token1,
    STATE(267), 1,
      sym_name,
    STATE(328), 1,
      sym_vertexSetName,
    STATE(462), 1,
      sym_simpleSet,
    STATE(555), 1,
      sym_gsqlSelectClause,
    ACTIONS(690), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(706), 2,
      sym_seedSet,
      sym_gsqlSelectBlock,
  [8334] = 7,
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
    STATE(593), 1,
      sym_baseType,
    ACTIONS(21), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [8362] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_SLASH,
    STATE(103), 1,
      sym_mathOperator,
    ACTIONS(692), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(316), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [8386] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_AT_AT,
    ACTIONS(655), 1,
      anon_sym__,
    ACTIONS(657), 1,
      aux_sym_seed_token1,
    ACTIONS(659), 1,
      aux_sym_seed_token2,
    STATE(501), 1,
      sym_name,
    STATE(592), 1,
      sym_seed,
    STATE(667), 1,
      sym_vertexType,
    ACTIONS(273), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(585), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexSetName,
  [8420] = 7,
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
    STATE(654), 1,
      sym_baseType,
    ACTIONS(21), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [8448] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      aux_sym_integer_token1,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(511), 1,
      sym_constant,
    ACTIONS(296), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(25), 2,
      sym_integer,
      sym_real,
  [8482] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(185), 1,
      aux_sym_name_repeat1,
    ACTIONS(694), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(696), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(217), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [8506] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      aux_sym_integer_token1,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(602), 1,
      sym_constant,
    ACTIONS(296), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(22), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(25), 2,
      sym_integer,
      sym_real,
  [8540] = 7,
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
    STATE(510), 1,
      sym_baseType,
    ACTIONS(21), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
  [8568] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(205), 1,
      aux_sym_name_repeat1,
    ACTIONS(698), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(701), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(207), 6,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [8591] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(704), 9,
      anon_sym_LPAREN,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      anon_sym_DASH,
      anon_sym_AT_AT,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_DQUOTE,
      aux_sym_integer_token1,
  [8610] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(205), 1,
      aux_sym_name_repeat1,
    ACTIONS(708), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(710), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(217), 6,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [8633] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(202), 1,
      aux_sym_name_repeat1,
    ACTIONS(678), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(680), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(712), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [8656] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(207), 1,
      aux_sym_name_repeat1,
    ACTIONS(715), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(717), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(195), 6,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [8679] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_SLASH,
    ACTIONS(719), 1,
      anon_sym_SEMI,
    STATE(103), 1,
      sym_mathOperator,
    ACTIONS(316), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [8702] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_LBRACE,
    ACTIONS(684), 1,
      anon_sym_LPAREN,
    STATE(267), 1,
      sym_name,
    STATE(328), 1,
      sym_vertexSetName,
    STATE(425), 1,
      sym_simpleSet,
    STATE(555), 1,
      sym_gsqlSelectClause,
    STATE(744), 2,
      sym_seedSet,
      sym_gsqlSelectBlock,
    ACTIONS(686), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [8733] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      anon_sym_DASH,
    ACTIONS(723), 1,
      aux_sym_integer_token1,
    STATE(535), 1,
      aux_sym_integer_repeat1,
    STATE(623), 1,
      sym_name,
    STATE(625), 1,
      sym_simpleSize,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(640), 3,
      sym_integer,
      sym_paramName,
      sym_varName,
  [8762] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(725), 9,
      anon_sym_LPAREN,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      anon_sym_DASH,
      anon_sym_AT_AT,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_DQUOTE,
      aux_sym_integer_token1,
  [8781] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_AT_AT,
    ACTIONS(575), 1,
      aux_sym_seed_token1,
    ACTIONS(729), 1,
      anon_sym__,
    STATE(430), 1,
      sym_name,
    STATE(545), 1,
      sym_edgeSetType,
    STATE(576), 1,
      sym_atomicEdgeType,
    ACTIONS(45), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(432), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_edgeType,
  [8812] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_AT_AT,
    STATE(455), 1,
      sym_dmlSubStmt,
    STATE(598), 1,
      sym_name,
    STATE(603), 1,
      sym_dmlSubStmtList,
    STATE(642), 1,
      sym_globalAccumName,
    STATE(518), 2,
      sym_gAccumAccumStmt,
      sym_assignStmt,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [8840] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_AT_AT,
    STATE(455), 1,
      sym_dmlSubStmt,
    STATE(551), 1,
      sym_dmlSubStmtList,
    STATE(598), 1,
      sym_name,
    STATE(642), 1,
      sym_globalAccumName,
    STATE(518), 2,
      sym_gAccumAccumStmt,
      sym_assignStmt,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [8868] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      aux_sym_name_token2,
    STATE(223), 1,
      aux_sym_name_repeat1,
    ACTIONS(731), 3,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
    ACTIONS(195), 4,
      anon_sym_LBRACE,
      anon_sym_API,
      anon_sym_SYNTAX,
      anon_sym_RETURNS,
  [8889] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_AT_AT,
    STATE(254), 1,
      sym_vertexSetType,
    STATE(260), 1,
      sym_name,
    ACTIONS(735), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(262), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexType,
  [8912] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_PIPE,
    STATE(187), 1,
      aux_sym_name_repeat1,
    ACTIONS(737), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COLON,
    ACTIONS(676), 4,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [8933] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(224), 1,
      aux_sym_name_repeat1,
    ACTIONS(740), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(742), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(195), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
  [8954] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      aux_sym_name_token2,
    STATE(221), 1,
      aux_sym_name_repeat1,
    ACTIONS(744), 3,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
    ACTIONS(207), 4,
      anon_sym_LBRACE,
      anon_sym_API,
      anon_sym_SYNTAX,
      anon_sym_RETURNS,
  [8975] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_AT_AT,
    STATE(489), 1,
      sym_dmlSubStmt,
    STATE(598), 1,
      sym_name,
    STATE(642), 1,
      sym_globalAccumName,
    STATE(518), 2,
      sym_gAccumAccumStmt,
      sym_assignStmt,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9000] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      aux_sym_name_token2,
    STATE(221), 1,
      aux_sym_name_repeat1,
    ACTIONS(750), 3,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
    ACTIONS(217), 4,
      anon_sym_LBRACE,
      anon_sym_API,
      anon_sym_SYNTAX,
      anon_sym_RETURNS,
  [9021] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(231), 1,
      aux_sym_name_repeat1,
    ACTIONS(754), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(756), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(217), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
  [9042] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    STATE(681), 1,
      sym_name,
    STATE(493), 2,
      sym_stringLiteral,
      sym_paramName,
    STATE(682), 2,
      sym_fileVar,
      sym_filePath,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9065] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(232), 1,
      aux_sym_name_repeat1,
    ACTIONS(758), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(760), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(195), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_accumType_token11,
      aux_sym_accumType_token12,
  [9086] = 2,
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
  [9101] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    STATE(681), 1,
      sym_name,
    STATE(493), 2,
      sym_stringLiteral,
      sym_paramName,
    STATE(644), 2,
      sym_fileVar,
      sym_filePath,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9124] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_AT_AT,
    STATE(260), 1,
      sym_name,
    STATE(268), 1,
      sym_vertexSetType,
    ACTIONS(735), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(262), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexType,
  [9147] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_AT_AT,
    STATE(430), 1,
      sym_name,
    STATE(525), 1,
      sym_edgeSetType,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(432), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_edgeType,
  [9170] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(231), 1,
      aux_sym_name_repeat1,
    ACTIONS(762), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(765), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(207), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
  [9191] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(236), 1,
      aux_sym_name_repeat1,
    ACTIONS(768), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(770), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(217), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_accumType_token11,
      aux_sym_accumType_token12,
  [9212] = 2,
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
  [9227] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    STATE(681), 1,
      sym_name,
    STATE(493), 2,
      sym_stringLiteral,
      sym_paramName,
    STATE(711), 2,
      sym_fileVar,
      sym_filePath,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9250] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    STATE(681), 1,
      sym_name,
    STATE(493), 2,
      sym_stringLiteral,
      sym_paramName,
    STATE(619), 2,
      sym_fileVar,
      sym_filePath,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9273] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(236), 1,
      aux_sym_name_repeat1,
    ACTIONS(772), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(775), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(207), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_accumType_token11,
      aux_sym_accumType_token12,
  [9294] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_PIPE,
    STATE(237), 1,
      aux_sym_stepVertexTypes_repeat1,
    ACTIONS(778), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [9312] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_accumType_token1,
    ACTIONS(23), 1,
      aux_sym_accumType_token7,
    ACTIONS(25), 1,
      aux_sym_accumType_token8,
    ACTIONS(27), 1,
      aux_sym_accumType_token9,
    ACTIONS(29), 1,
      aux_sym_accumType_token10,
    ACTIONS(31), 1,
      aux_sym_accumType_token13,
    ACTIONS(33), 1,
      aux_sym_accumType_token14,
    STATE(562), 1,
      sym_accumType,
  [9340] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(442), 1,
      anon_sym_AT_AT,
    STATE(257), 1,
      sym_setBagExpr,
    STATE(270), 1,
      sym_globalAccumName,
    STATE(418), 1,
      sym_name,
    ACTIONS(444), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9364] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      anon_sym_SEMI,
    ACTIONS(785), 1,
      anon_sym_WHERE,
    ACTIONS(787), 1,
      aux_sym_perClauseV2_token1,
    STATE(317), 1,
      sym_whereClause,
    STATE(332), 1,
      sym_accumClause,
    STATE(574), 1,
      sym_perClauseV2,
    STATE(331), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [9390] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_DOT_STAR,
    STATE(187), 1,
      aux_sym_name_repeat1,
    ACTIONS(789), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(676), 4,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9410] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_AT_AT,
    STATE(259), 1,
      sym_setBagExpr,
    STATE(270), 1,
      sym_globalAccumName,
    STATE(449), 1,
      sym_name,
    ACTIONS(426), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9434] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(246), 1,
      aux_sym_name_repeat1,
    ACTIONS(792), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(794), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(217), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_CREATE_VERTEX_token2,
  [9454] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(529), 6,
      aux_sym_queryBodyIfStmt_token1,
      aux_sym_queryBodyIfStmt_token3,
      aux_sym_queryBodyIfStmt_token4,
      anon_sym__,
      aux_sym_printStmt_token1,
      aux_sym_returnStmt_token1,
  [9470] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(436), 1,
      anon_sym_AT_AT,
    STATE(259), 1,
      sym_setBagExpr,
    STATE(270), 1,
      sym_globalAccumName,
    STATE(420), 1,
      sym_name,
    ACTIONS(438), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9494] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(246), 1,
      aux_sym_name_repeat1,
    ACTIONS(798), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(801), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(207), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_CREATE_VERTEX_token2,
  [9514] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(436), 1,
      anon_sym_AT_AT,
    STATE(257), 1,
      sym_setBagExpr,
    STATE(270), 1,
      sym_globalAccumName,
    STATE(420), 1,
      sym_name,
    ACTIONS(438), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9538] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(418), 1,
      anon_sym_AT_AT,
    STATE(259), 1,
      sym_setBagExpr,
    STATE(270), 1,
      sym_globalAccumName,
    STATE(426), 1,
      sym_name,
    ACTIONS(420), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9562] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    STATE(484), 1,
      sym_name,
    STATE(660), 1,
      sym_filePath,
    STATE(493), 2,
      sym_stringLiteral,
      sym_paramName,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9584] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(418), 1,
      anon_sym_AT_AT,
    STATE(257), 1,
      sym_setBagExpr,
    STATE(270), 1,
      sym_globalAccumName,
    STATE(426), 1,
      sym_name,
    ACTIONS(420), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9608] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      anon_sym_PIPE,
    STATE(237), 1,
      aux_sym_stepVertexTypes_repeat1,
    ACTIONS(804), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [9626] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_AT_AT,
    STATE(257), 1,
      sym_setBagExpr,
    STATE(270), 1,
      sym_globalAccumName,
    STATE(449), 1,
      sym_name,
    ACTIONS(426), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9650] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(243), 1,
      aux_sym_name_repeat1,
    ACTIONS(808), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(810), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(195), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_CREATE_VERTEX_token2,
  [9670] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      anon_sym_PIPE,
    STATE(251), 1,
      aux_sym_stepVertexTypes_repeat1,
    ACTIONS(812), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [9688] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    STATE(484), 1,
      sym_name,
    STATE(684), 1,
      sym_filePath,
    STATE(493), 2,
      sym_stringLiteral,
      sym_paramName,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9710] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(442), 1,
      anon_sym_AT_AT,
    STATE(259), 1,
      sym_setBagExpr,
    STATE(270), 1,
      sym_globalAccumName,
    STATE(418), 1,
      sym_name,
    ACTIONS(444), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 7,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_queryBodyIfStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_perClauseV2_token1,
  [9747] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(45), 1,
      aux_sym_name_repeat1,
    ACTIONS(737), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
    ACTIONS(267), 4,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 7,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_queryBodyIfStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_perClauseV2_token1,
  [9777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [9790] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_LPAREN,
    STATE(267), 1,
      sym_name,
    STATE(405), 1,
      sym_vertexSetName,
    STATE(429), 1,
      sym_simpleSet,
    ACTIONS(686), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [9824] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(516), 1,
      sym_alias,
    STATE(608), 1,
      sym_name,
    STATE(609), 2,
      sym_vertexAlias,
      sym_edgeAlias,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9843] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_LT,
    ACTIONS(821), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9858] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(529), 5,
      anon_sym_RBRACE,
      aux_sym_queryBodyIfStmt_token1,
      anon_sym__,
      aux_sym_printStmt_token1,
      aux_sym_returnStmt_token1,
  [9873] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(529), 5,
      aux_sym_queryBodyIfStmt_token1,
      aux_sym_queryBodyIfStmt_token4,
      anon_sym__,
      aux_sym_printStmt_token1,
      aux_sym_returnStmt_token1,
  [9888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [9901] = 2,
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
  [9914] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_LPAREN,
    STATE(267), 1,
      sym_name,
    STATE(357), 1,
      sym_simpleSet,
    STATE(405), 1,
      sym_vertexSetName,
    ACTIONS(686), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 7,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_queryBodyIfStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_perClauseV2_token1,
  [9948] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(577), 1,
      sym_alias,
    STATE(608), 1,
      sym_name,
    STATE(609), 2,
      sym_vertexAlias,
      sym_edgeAlias,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9967] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      anon_sym_LBRACE,
    ACTIONS(831), 1,
      anon_sym_FOR,
    ACTIONS(833), 1,
      anon_sym_API,
    ACTIONS(835), 1,
      anon_sym_SYNTAX,
    ACTIONS(837), 1,
      anon_sym_RETURNS,
    STATE(526), 1,
      sym_returns,
  [9989] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      aux_sym_fromClause_token1,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [10001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10025] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_AT,
    ACTIONS(843), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token2,
      anon_sym_AT_AT,
  [10039] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_RETURNS,
    ACTIONS(847), 1,
      anon_sym_LBRACE,
    ACTIONS(849), 1,
      anon_sym_FOR,
    ACTIONS(851), 1,
      anon_sym_API,
    ACTIONS(853), 1,
      anon_sym_SYNTAX,
    STATE(497), 1,
      sym_returns,
  [10061] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      anon_sym_AT,
    ACTIONS(855), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token2,
      anon_sym_AT_AT,
  [10075] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_DOLLAR,
    STATE(669), 2,
      sym_columnId,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10091] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_AT,
    ACTIONS(861), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token2,
      anon_sym_AT_AT,
  [10105] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym_localAccumName,
    STATE(21), 1,
      sym_name,
    ACTIONS(304), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10123] = 3,
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
  [10137] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym_localAccumName,
    STATE(21), 1,
      sym_name,
    ACTIONS(426), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10155] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_AT,
    STATE(19), 2,
      sym_localAccumName,
      sym_name,
    ACTIONS(438), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10171] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym_localAccumName,
    STATE(21), 1,
      sym_name,
    ACTIONS(384), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10189] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym_localAccumName,
    STATE(21), 1,
      sym_name,
    ACTIONS(432), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10207] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym_localAccumName,
    STATE(21), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10225] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_AT,
    STATE(19), 2,
      sym_localAccumName,
      sym_name,
    ACTIONS(420), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10241] = 3,
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
  [10255] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      anon_sym_AT,
    ACTIONS(887), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token2,
      anon_sym_AT_AT,
  [10269] = 3,
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
  [10283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10295] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      aux_sym_createSignature_token1,
    ACTIONS(897), 1,
      ts_builtin_sym_end,
    STATE(770), 1,
      sym_createSignature,
    STATE(313), 3,
      sym_createQuery,
      sym_CREATE_VERTEX,
      aux_sym_source_file_repeat1,
  [10313] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym_localAccumName,
    STATE(21), 1,
      sym_name,
    ACTIONS(444), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10343] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym_localAccumName,
    STATE(21), 1,
      sym_name,
    ACTIONS(420), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10361] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_RETURNS,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(905), 1,
      anon_sym_FOR,
    ACTIONS(907), 1,
      anon_sym_API,
    ACTIONS(909), 1,
      anon_sym_SYNTAX,
    STATE(483), 1,
      sym_returns,
  [10383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [10395] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      anon_sym_AT,
    STATE(19), 2,
      sym_localAccumName,
      sym_name,
    ACTIONS(444), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10411] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 1,
      anon_sym_COLON,
    ACTIONS(913), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [10425] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym_localAccumName,
    STATE(21), 1,
      sym_name,
    ACTIONS(376), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10443] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      anon_sym_DASH,
    STATE(319), 1,
      aux_sym_pathPattern_repeat1,
    ACTIONS(919), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [10459] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      aux_sym_fromClause_token1,
    STATE(303), 1,
      aux_sym_name_repeat1,
    ACTIONS(923), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(926), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10477] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(929), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym_localAccumName,
    STATE(21), 1,
      sym_name,
    ACTIONS(370), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10495] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_RETURNS,
    ACTIONS(931), 1,
      anon_sym_LBRACE,
    ACTIONS(933), 1,
      anon_sym_FOR,
    ACTIONS(935), 1,
      anon_sym_API,
    ACTIONS(937), 1,
      anon_sym_SYNTAX,
    STATE(505), 1,
      sym_returns,
  [10517] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      aux_sym_fromClause_token1,
    STATE(303), 1,
      aux_sym_name_repeat1,
    ACTIONS(939), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(941), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10547] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(945), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym_localAccumName,
    STATE(21), 1,
      sym_name,
    ACTIONS(390), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10565] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_RETURNS,
    ACTIONS(947), 1,
      anon_sym_LBRACE,
    ACTIONS(949), 1,
      anon_sym_FOR,
    ACTIONS(951), 1,
      anon_sym_API,
    ACTIONS(953), 1,
      anon_sym_SYNTAX,
    STATE(528), 1,
      sym_returns,
  [10587] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      anon_sym_DASH,
    STATE(310), 1,
      aux_sym_pathPattern_repeat1,
    ACTIONS(955), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [10603] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      aux_sym_fromClause_token1,
    STATE(306), 1,
      aux_sym_name_repeat1,
    ACTIONS(960), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(962), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(964), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [10633] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 1,
      ts_builtin_sym_end,
    ACTIONS(968), 1,
      aux_sym_createSignature_token1,
    STATE(770), 1,
      sym_createSignature,
    STATE(313), 3,
      sym_createQuery,
      sym_CREATE_VERTEX,
      aux_sym_source_file_repeat1,
  [10651] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym_localAccumName,
    STATE(21), 1,
      sym_name,
    ACTIONS(398), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10669] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      anon_sym_AT,
    STATE(19), 2,
      sym_localAccumName,
      sym_name,
    ACTIONS(426), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10685] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym_localAccumName,
    STATE(21), 1,
      sym_name,
    ACTIONS(438), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10703] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      aux_sym_perClauseV2_token1,
    ACTIONS(973), 1,
      anon_sym_SEMI,
    STATE(366), 1,
      sym_accumClause,
    STATE(574), 1,
      sym_perClauseV2,
    STATE(373), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [10723] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(721), 1,
      anon_sym_DASH,
    ACTIONS(723), 1,
      aux_sym_integer_token1,
    STATE(535), 1,
      aux_sym_integer_repeat1,
    STATE(631), 2,
      sym_stringLiteral,
      sym_integer,
  [10743] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      anon_sym_DASH,
    STATE(310), 1,
      aux_sym_pathPattern_repeat1,
    ACTIONS(975), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [10759] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(11), 1,
      sym_accumName,
    ACTIONS(432), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10774] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(5), 1,
      sym_accumName,
    ACTIONS(444), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10789] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(656), 1,
      sym_name,
    STATE(657), 1,
      sym_syntaxName,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10804] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(11), 1,
      sym_accumName,
    ACTIONS(390), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10819] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(5), 1,
      sym_accumName,
    ACTIONS(420), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10834] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_RETURNS,
    ACTIONS(977), 1,
      anon_sym_LBRACE,
    ACTIONS(979), 1,
      anon_sym_API,
    ACTIONS(981), 1,
      anon_sym_SYNTAX,
    STATE(513), 1,
      sym_returns,
  [10853] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(273), 1,
      sym_name,
    STATE(343), 1,
      sym_vertexAlias,
    ACTIONS(735), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10868] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(352), 1,
      sym_name,
    STATE(627), 1,
      sym_tupleType,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10883] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(983), 1,
      anon_sym_EQ,
    ACTIONS(985), 4,
      anon_sym_SEMI,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [10896] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(417), 1,
      sym_graphName,
    STATE(451), 1,
      sym_name,
    ACTIONS(987), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10911] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(273), 1,
      sym_name,
    STATE(666), 1,
      sym_vertexAlias,
    ACTIONS(989), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10926] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      aux_sym_perClauseV2_token1,
    ACTIONS(973), 1,
      anon_sym_SEMI,
    STATE(674), 1,
      sym_perClauseV2,
    STATE(379), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [10943] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      aux_sym_perClauseV2_token1,
    ACTIONS(973), 1,
      anon_sym_SEMI,
    STATE(674), 1,
      sym_perClauseV2,
    STATE(373), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [10960] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(411), 1,
      sym_name,
    STATE(601), 1,
      sym_jsonKey,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10975] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(991), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
  [10986] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(993), 1,
      anon_sym_COMMA,
    STATE(360), 1,
      aux_sym_fromClause_repeat1,
    ACTIONS(995), 3,
      anon_sym_SEMI,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [11001] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(999), 1,
      anon_sym_GT,
    ACTIONS(1001), 1,
      anon_sym_PIPE,
    STATE(424), 1,
      aux_sym_stepEdgeTypes_repeat1,
    ACTIONS(997), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [11018] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(273), 1,
      sym_name,
    STATE(375), 1,
      sym_vertexAlias,
    ACTIONS(735), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11033] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(11), 1,
      sym_accumName,
    ACTIONS(376), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11048] = 4,
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
  [11063] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(650), 1,
      sym_syntaxName,
    STATE(656), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11078] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1003), 1,
      anon_sym_COMMA,
    STATE(341), 1,
      aux_sym_fromClause_repeat1,
    ACTIONS(1006), 3,
      anon_sym_SEMI,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [11093] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(765), 1,
      sym_queryName,
    STATE(766), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11108] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1008), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [11119] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(411), 1,
      sym_name,
    STATE(444), 1,
      sym_jsonKey,
    ACTIONS(1010), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11134] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      aux_sym_perClauseV2_token1,
    ACTIONS(1012), 1,
      anon_sym_SEMI,
    STATE(674), 1,
      sym_perClauseV2,
    STATE(379), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [11151] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1014), 1,
      anon_sym_RPAREN,
    ACTIONS(1016), 1,
      anon_sym_COMMA,
    STATE(522), 1,
      aux_sym_accumType_repeat1,
    ACTIONS(1018), 2,
      aux_sym_accumType_token11,
      aux_sym_accumType_token12,
  [11168] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(11), 1,
      sym_accumName,
    ACTIONS(438), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11183] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(404), 1,
      sym_graphName,
    STATE(451), 1,
      sym_name,
    ACTIONS(987), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11198] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(470), 1,
      sym_name,
    STATE(763), 1,
      sym_vertexType,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11213] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1020), 1,
      aux_sym_elementType_token1,
    ACTIONS(821), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token2,
  [11226] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(5), 1,
      sym_accumName,
    ACTIONS(390), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1022), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token2,
  [11252] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(11), 1,
      sym_accumName,
    ACTIONS(444), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11267] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(5), 1,
      sym_accumName,
    ACTIONS(376), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11282] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(151), 1,
      sym_name,
    STATE(346), 1,
      sym_fieldName,
    ACTIONS(1024), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1026), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [11308] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1026), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(1028), 3,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [11321] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(618), 1,
      sym_syntaxName,
    STATE(656), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11336] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(447), 1,
      sym_paramName,
    STATE(484), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11351] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(993), 1,
      anon_sym_COMMA,
    STATE(341), 1,
      aux_sym_fromClause_repeat1,
    ACTIONS(1031), 3,
      anon_sym_SEMI,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [11366] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(5), 1,
      sym_accumName,
    ACTIONS(438), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11381] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1035), 1,
      anon_sym_SEMI,
    ACTIONS(1037), 1,
      aux_sym_printStmt_token2,
    ACTIONS(1039), 1,
      aux_sym_printStmt_token3,
    STATE(387), 1,
      aux_sym_printStmt_repeat1,
  [11400] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(635), 1,
      sym_syntaxName,
    STATE(656), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11415] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(704), 1,
      sym_queryName,
    STATE(766), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11430] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(393), 1,
      sym_graphName,
    STATE(451), 1,
      sym_name,
    ACTIONS(987), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11445] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      aux_sym_perClauseV2_token1,
    ACTIONS(1041), 1,
      anon_sym_SEMI,
    STATE(674), 1,
      sym_perClauseV2,
    STATE(345), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [11462] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(470), 1,
      sym_name,
    STATE(708), 1,
      sym_vertexType,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11477] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(151), 1,
      sym_name,
    STATE(593), 1,
      sym_fieldName,
    ACTIONS(271), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11492] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_RETURNS,
    ACTIONS(947), 1,
      anon_sym_LBRACE,
    ACTIONS(951), 1,
      anon_sym_API,
    ACTIONS(953), 1,
      anon_sym_SYNTAX,
    STATE(528), 1,
      sym_returns,
  [11511] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(11), 1,
      sym_accumName,
    ACTIONS(420), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11526] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(741), 1,
      sym_queryName,
    STATE(766), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11541] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(11), 1,
      sym_accumName,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11556] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      aux_sym_perClauseV2_token1,
    ACTIONS(1041), 1,
      anon_sym_SEMI,
    STATE(674), 1,
      sym_perClauseV2,
    STATE(379), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [11573] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(469), 1,
      sym_paramName,
    STATE(484), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1043), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [11599] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(11), 1,
      sym_accumName,
    ACTIONS(304), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11614] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(151), 1,
      sym_name,
    STATE(510), 1,
      sym_fieldName,
    ACTIONS(271), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11629] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(5), 1,
      sym_accumName,
    ACTIONS(304), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11644] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1045), 1,
      anon_sym_SEMI,
    ACTIONS(1047), 1,
      aux_sym_perClauseV2_token1,
    STATE(674), 1,
      sym_perClauseV2,
    STATE(379), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [11661] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      aux_sym_printExpr_token1,
    ACTIONS(619), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
  [11674] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1050), 1,
      anon_sym_SEMI,
    ACTIONS(1052), 1,
      aux_sym_printStmt_token2,
    ACTIONS(1054), 1,
      aux_sym_printStmt_token3,
    STATE(362), 1,
      aux_sym_printStmt_repeat1,
  [11693] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(11), 1,
      sym_accumName,
    ACTIONS(384), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11708] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(227), 1,
      sym_accumName,
    STATE(233), 1,
      sym_name,
    ACTIONS(271), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11723] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(369), 1,
      sym_graphName,
    STATE(451), 1,
      sym_name,
    ACTIONS(987), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11738] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(634), 1,
      sym_syntaxName,
    STATE(656), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11753] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(227), 1,
      sym_accumName,
    STATE(233), 1,
      sym_name,
    ACTIONS(735), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11768] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1056), 1,
      anon_sym_COMMA,
    STATE(387), 1,
      aux_sym_printStmt_repeat1,
    ACTIONS(1059), 3,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
  [11783] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(653), 1,
      sym_edgeAlias,
    STATE(697), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11798] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(5), 1,
      sym_accumName,
    ACTIONS(370), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11813] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(352), 1,
      sym_name,
    STATE(718), 1,
      sym_tupleType,
    ACTIONS(271), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11828] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(11), 1,
      sym_accumName,
    ACTIONS(426), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11843] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1063), 1,
      aux_sym_accumType_token5,
    ACTIONS(1061), 4,
      aux_sym_accumType_token2,
      aux_sym_accumType_token3,
      aux_sym_accumType_token4,
      aux_sym_accumType_token6,
  [11856] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_RETURNS,
    ACTIONS(847), 1,
      anon_sym_LBRACE,
    ACTIONS(851), 1,
      anon_sym_API,
    ACTIONS(853), 1,
      anon_sym_SYNTAX,
    STATE(497), 1,
      sym_returns,
  [11875] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(11), 1,
      sym_accumName,
    ACTIONS(370), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11890] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(470), 1,
      sym_name,
    STATE(724), 1,
      sym_vertexType,
    ACTIONS(271), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11905] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(5), 1,
      sym_accumName,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1065), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
  [11931] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(11), 1,
      sym_accumName,
    ACTIONS(398), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11946] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(729), 1,
      sym_queryName,
    STATE(766), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11961] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(5), 1,
      sym_accumName,
    ACTIONS(432), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11976] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(151), 1,
      sym_name,
    STATE(428), 1,
      sym_fieldName,
    ACTIONS(1024), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11991] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(325), 1,
      sym_graphName,
    STATE(451), 1,
      sym_name,
    ACTIONS(987), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1067), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [12017] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_RETURNS,
    ACTIONS(1069), 1,
      anon_sym_LBRACE,
    ACTIONS(1071), 1,
      anon_sym_API,
    ACTIONS(1073), 1,
      anon_sym_SYNTAX,
    STATE(533), 1,
      sym_returns,
  [12036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(985), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [12047] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(5), 1,
      sym_accumName,
    ACTIONS(384), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12062] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(656), 1,
      sym_name,
    STATE(683), 1,
      sym_syntaxName,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12077] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(697), 1,
      sym_name,
    STATE(699), 1,
      sym_edgeAlias,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12092] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(5), 1,
      sym_accumName,
    ACTIONS(426), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12107] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(656), 1,
      sym_name,
    STATE(671), 1,
      sym_syntaxName,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      anon_sym_RBRACK,
  [12133] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(656), 1,
      sym_name,
    STATE(692), 1,
      sym_syntaxName,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12148] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(617), 1,
      sym_syntaxName,
    STATE(656), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12163] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(656), 1,
      sym_name,
    STATE(705), 1,
      sym_syntaxName,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12178] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(656), 1,
      sym_name,
    STATE(712), 1,
      sym_syntaxName,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12193] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(656), 1,
      sym_name,
    STATE(716), 1,
      sym_syntaxName,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12208] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_RETURNS,
    ACTIONS(1077), 1,
      anon_sym_LBRACE,
    ACTIONS(1079), 1,
      anon_sym_API,
    ACTIONS(1081), 1,
      anon_sym_SYNTAX,
    STATE(550), 1,
      sym_returns,
  [12227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1083), 1,
      anon_sym_DOT,
    ACTIONS(827), 4,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_perClauseV2_token1,
  [12240] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(470), 1,
      sym_name,
    STATE(678), 1,
      sym_vertexType,
    ACTIONS(271), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12255] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1085), 1,
      anon_sym_DOT,
    ACTIONS(827), 4,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_printStmt_token3,
  [12268] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(656), 1,
      sym_name,
    STATE(740), 1,
      sym_syntaxName,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12283] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(732), 1,
      sym_name,
    STATE(733), 1,
      sym_fileVar,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12298] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(688), 1,
      sym_attrName,
    STATE(690), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12313] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1001), 1,
      anon_sym_PIPE,
    STATE(437), 1,
      aux_sym_stepEdgeTypes_repeat1,
    ACTIONS(1087), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [12327] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1089), 1,
      anon_sym_SEMI,
    ACTIONS(1091), 3,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [12339] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1093), 1,
      anon_sym_DOT,
    ACTIONS(827), 3,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_queryBodyIfStmt_token2,
  [12351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 2,
      anon_sym_SEMI,
      aux_sym_printStmt_token3,
    ACTIONS(1095), 2,
      anon_sym_AND,
      anon_sym_OR,
  [12363] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(1100), 2,
      aux_sym_accumType_token11,
      aux_sym_accumType_token12,
  [12375] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1102), 1,
      anon_sym_RPAREN,
    ACTIONS(1091), 3,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [12387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1104), 4,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_COLON,
  [12397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
  [12407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1107), 4,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_COLON,
  [12417] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_AT_AT,
    ACTIONS(1109), 1,
      anon_sym_AT,
    STATE(450), 2,
      sym_localAccumName,
      sym_globalAccumName,
  [12431] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(452), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1059), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
  [12453] = 5,
    ACTIONS(1111), 1,
      sym_comment,
    ACTIONS(1113), 1,
      anon_sym_DQUOTE,
    ACTIONS(1115), 1,
      aux_sym_stringLiteral_token1,
    ACTIONS(1118), 1,
      sym_escape_sequence,
    STATE(436), 1,
      aux_sym_stringLiteral_repeat1,
  [12469] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1123), 1,
      anon_sym_PIPE,
    STATE(437), 1,
      aux_sym_stepEdgeTypes_repeat1,
    ACTIONS(1121), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [12483] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1126), 1,
      anon_sym_LT,
    ACTIONS(821), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_CREATE_VERTEX_token2,
  [12495] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 2,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
    ACTIONS(1128), 2,
      anon_sym_AND,
      anon_sym_OR,
  [12507] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1131), 1,
      anon_sym_SEMI,
    ACTIONS(1135), 1,
      aux_sym_printStmt_token3,
    ACTIONS(1133), 2,
      anon_sym_AND,
      anon_sym_OR,
  [12521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1137), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token2,
  [12531] = 5,
    ACTIONS(1111), 1,
      sym_comment,
    ACTIONS(1139), 1,
      anon_sym_DQUOTE,
    ACTIONS(1141), 1,
      aux_sym_stringLiteral_token1,
    ACTIONS(1143), 1,
      sym_escape_sequence,
    STATE(458), 1,
      aux_sym_stringLiteral_repeat1,
  [12547] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1147), 1,
      aux_sym_CREATE_VERTEX_token4,
    ACTIONS(1149), 1,
      anon_sym_primary_id_as_attribute,
    ACTIONS(1145), 2,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
  [12561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
  [12571] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1153), 1,
      anon_sym_COMMA,
    STATE(448), 1,
      aux_sym_dmlSubStmtList_repeat1,
    ACTIONS(1155), 2,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
  [12585] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(47), 1,
      sym_name,
    ACTIONS(1157), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12597] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1159), 1,
      anon_sym_RPAREN,
    ACTIONS(1161), 1,
      anon_sym_EQ,
    ACTIONS(1163), 1,
      anon_sym_COMMA,
    STATE(507), 1,
      aux_sym_parameterList_repeat1,
  [12613] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1165), 1,
      anon_sym_COMMA,
    STATE(448), 1,
      aux_sym_dmlSubStmtList_repeat1,
    ACTIONS(1168), 2,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
  [12627] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1170), 1,
      anon_sym_DOT,
    ACTIONS(827), 3,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
  [12639] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1172), 1,
      anon_sym_EQ,
    ACTIONS(1174), 1,
      anon_sym_COMMA,
    ACTIONS(1176), 1,
      anon_sym_SEMI,
    STATE(480), 1,
      aux_sym_accumDeclStmt_repeat1,
  [12655] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1178), 4,
      anon_sym_LBRACE,
      anon_sym_API,
      anon_sym_SYNTAX,
      anon_sym_RETURNS,
  [12665] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1180), 1,
      anon_sym_EQ,
    ACTIONS(1182), 1,
      anon_sym_COMMA,
    ACTIONS(1184), 1,
      anon_sym_SEMI,
    STATE(482), 1,
      aux_sym_baseDeclStmt_repeat1,
  [12681] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(48), 1,
      sym_name,
    ACTIONS(1157), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12693] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1174), 1,
      anon_sym_COMMA,
    ACTIONS(1186), 1,
      anon_sym_EQ,
    ACTIONS(1188), 1,
      anon_sym_SEMI,
    STATE(487), 1,
      aux_sym_accumDeclStmt_repeat1,
  [12709] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1153), 1,
      anon_sym_COMMA,
    STATE(445), 1,
      aux_sym_dmlSubStmtList_repeat1,
    ACTIONS(1190), 2,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
  [12723] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1192), 1,
      aux_sym_createSignature_token2,
    ACTIONS(1194), 1,
      aux_sym_createSignature_token4,
    ACTIONS(1196), 1,
      anon_sym_QUERY,
    ACTIONS(1198), 1,
      aux_sym_CREATE_VERTEX_token1,
  [12739] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1200), 2,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
    ACTIONS(1202), 2,
      anon_sym_AND,
      anon_sym_OR,
  [12751] = 5,
    ACTIONS(1111), 1,
      sym_comment,
    ACTIONS(1204), 1,
      anon_sym_DQUOTE,
    ACTIONS(1206), 1,
      aux_sym_stringLiteral_token1,
    ACTIONS(1208), 1,
      sym_escape_sequence,
    STATE(436), 1,
      aux_sym_stringLiteral_repeat1,
  [12767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1210), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token2,
  [12777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1006), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [12787] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1212), 1,
      anon_sym_SEMI,
    ACTIONS(1214), 1,
      aux_sym_printStmt_token3,
    ACTIONS(1133), 2,
      anon_sym_AND,
      anon_sym_OR,
  [12801] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1216), 1,
      anon_sym_SEMI,
    ACTIONS(1091), 3,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [12813] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(503), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12825] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1220), 1,
      aux_sym_CREATE_VERTEX_token4,
    ACTIONS(1222), 1,
      anon_sym_primary_id_as_attribute,
    ACTIONS(1218), 2,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
  [12839] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1174), 1,
      anon_sym_COMMA,
    ACTIONS(1224), 1,
      anon_sym_SEMI,
    STATE(498), 1,
      aux_sym_accumDeclStmt_repeat1,
  [12852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1226), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1228), 3,
      anon_sym_LBRACE,
      anon_sym_API,
      anon_sym_SYNTAX,
  [12870] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1163), 1,
      anon_sym_COMMA,
    ACTIONS(1230), 1,
      anon_sym_RPAREN,
    STATE(529), 1,
      aux_sym_parameterList_repeat1,
  [12883] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1234), 1,
      anon_sym_EQ,
    ACTIONS(1232), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [12894] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1236), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
  [12903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1061), 3,
      aux_sym_accumType_token2,
      aux_sym_accumType_token3,
      aux_sym_accumType_token4,
  [12912] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1238), 1,
      anon_sym_DOT,
    ACTIONS(1240), 1,
      aux_sym_integer_token1,
    STATE(10), 1,
      aux_sym_integer_repeat1,
  [12925] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1244), 1,
      aux_sym_queryBodyIfStmt_token2,
    ACTIONS(1242), 2,
      anon_sym_AND,
      anon_sym_OR,
  [12936] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1246), 1,
      anon_sym_COMMA,
    ACTIONS(1249), 1,
      anon_sym_GT,
    STATE(474), 1,
      aux_sym_tupleFields_repeat1,
  [12949] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      aux_sym_integer_token1,
    ACTIONS(120), 1,
      anon_sym_COMMA,
    STATE(8), 1,
      aux_sym_integer_repeat1,
  [12962] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1251), 1,
      aux_sym_queryBodyIfStmt_token2,
    ACTIONS(1242), 2,
      anon_sym_AND,
      anon_sym_OR,
  [12973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1253), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12982] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1255), 1,
      anon_sym_RPAREN,
    ACTIONS(1257), 1,
      anon_sym_COMMA,
    STATE(486), 1,
      aux_sym_CREATE_VERTEX_repeat1,
  [12995] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1259), 1,
      aux_sym_elementType_token1,
    ACTIONS(821), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [13006] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1174), 1,
      anon_sym_COMMA,
    ACTIONS(1188), 1,
      anon_sym_SEMI,
    STATE(498), 1,
      aux_sym_accumDeclStmt_repeat1,
  [13019] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_RPAREN,
    ACTIONS(1261), 2,
      anon_sym_AND,
      anon_sym_OR,
  [13030] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1182), 1,
      anon_sym_COMMA,
    ACTIONS(1264), 1,
      anon_sym_SEMI,
    STATE(504), 1,
      aux_sym_baseDeclStmt_repeat1,
  [13043] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      anon_sym_LBRACE,
    ACTIONS(935), 1,
      anon_sym_API,
    ACTIONS(937), 1,
      anon_sym_SYNTAX,
  [13056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1266), 3,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_COMMA,
  [13065] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1270), 1,
      aux_sym_CREATE_VERTEX_token3,
    ACTIONS(1268), 2,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
  [13076] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1257), 1,
      anon_sym_COMMA,
    ACTIONS(1272), 1,
      anon_sym_RPAREN,
    STATE(509), 1,
      aux_sym_CREATE_VERTEX_repeat1,
  [13089] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1174), 1,
      anon_sym_COMMA,
    ACTIONS(1274), 1,
      anon_sym_SEMI,
    STATE(498), 1,
      aux_sym_accumDeclStmt_repeat1,
  [13102] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1276), 1,
      anon_sym_RPAREN,
    ACTIONS(1278), 1,
      anon_sym_COMMA,
    STATE(488), 1,
      aux_sym_perClauseV2_repeat1,
  [13115] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1168), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
  [13124] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_COMMA,
    ACTIONS(1281), 1,
      anon_sym_RPAREN,
    STATE(512), 1,
      aux_sym_argList_repeat1,
  [13137] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      aux_sym_queryBodyIfStmt_token2,
    ACTIONS(1283), 2,
      anon_sym_AND,
      anon_sym_OR,
  [13148] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1286), 1,
      aux_sym_queryBodyIfStmt_token3,
    ACTIONS(1288), 1,
      aux_sym_queryBodyIfStmt_token4,
    STATE(534), 1,
      aux_sym_queryBodyIfStmt_repeat1,
  [13161] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1290), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13170] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1292), 1,
      anon_sym_COMMA,
    ACTIONS(1294), 1,
      anon_sym_RBRACK,
    STATE(514), 1,
      aux_sym_vExprSet_repeat1,
  [13183] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1174), 1,
      anon_sym_COMMA,
    ACTIONS(1274), 1,
      anon_sym_SEMI,
    STATE(515), 1,
      aux_sym_accumDeclStmt_repeat1,
  [13196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1296), 1,
      anon_sym_EQ,
    ACTIONS(1298), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13207] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 1,
      anon_sym_LBRACE,
    ACTIONS(979), 1,
      anon_sym_API,
    ACTIONS(981), 1,
      anon_sym_SYNTAX,
  [13220] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1298), 1,
      anon_sym_SEMI,
    ACTIONS(1300), 1,
      anon_sym_COMMA,
    STATE(498), 1,
      aux_sym_accumDeclStmt_repeat1,
  [13233] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1303), 1,
      anon_sym_RBRACE,
    ACTIONS(1305), 1,
      anon_sym_COMMA,
    STATE(519), 1,
      aux_sym_seedSet_repeat1,
  [13246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1309), 1,
      anon_sym_primary_id_as_attribute,
    ACTIONS(1307), 2,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
  [13257] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1236), 1,
      anon_sym_DOT_STAR,
    ACTIONS(1311), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [13268] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1182), 1,
      anon_sym_COMMA,
    ACTIONS(1314), 1,
      anon_sym_SEMI,
    STATE(520), 1,
      aux_sym_baseDeclStmt_repeat1,
  [13281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1316), 1,
      anon_sym_EQ,
    ACTIONS(1318), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13292] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1318), 1,
      anon_sym_SEMI,
    ACTIONS(1320), 1,
      anon_sym_COMMA,
    STATE(504), 1,
      aux_sym_baseDeclStmt_repeat1,
  [13305] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      anon_sym_LBRACE,
    ACTIONS(833), 1,
      anon_sym_API,
    ACTIONS(835), 1,
      anon_sym_SYNTAX,
  [13318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1323), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [13327] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1163), 1,
      anon_sym_COMMA,
    ACTIONS(1325), 1,
      anon_sym_RPAREN,
    STATE(529), 1,
      aux_sym_parameterList_repeat1,
  [13340] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1327), 1,
      aux_sym_CREATE_VERTEX_token3,
    ACTIONS(1218), 2,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
  [13351] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1329), 1,
      anon_sym_RPAREN,
    ACTIONS(1331), 1,
      anon_sym_COMMA,
    STATE(509), 1,
      aux_sym_CREATE_VERTEX_repeat1,
  [13364] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1334), 1,
      anon_sym_COMMA,
    ACTIONS(1336), 1,
      anon_sym_GT,
    STATE(531), 1,
      aux_sym_tupleFields_repeat1,
  [13377] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1174), 1,
      anon_sym_COMMA,
    ACTIONS(1338), 1,
      anon_sym_SEMI,
    STATE(465), 1,
      aux_sym_accumDeclStmt_repeat1,
  [13390] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      anon_sym_RPAREN,
    ACTIONS(1340), 1,
      anon_sym_COMMA,
    STATE(512), 1,
      aux_sym_argList_repeat1,
  [13403] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1069), 1,
      anon_sym_LBRACE,
    ACTIONS(1071), 1,
      anon_sym_API,
    ACTIONS(1073), 1,
      anon_sym_SYNTAX,
  [13416] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1292), 1,
      anon_sym_COMMA,
    ACTIONS(1343), 1,
      anon_sym_RBRACK,
    STATE(537), 1,
      aux_sym_vExprSet_repeat1,
  [13429] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1174), 1,
      anon_sym_COMMA,
    ACTIONS(1338), 1,
      anon_sym_SEMI,
    STATE(498), 1,
      aux_sym_accumDeclStmt_repeat1,
  [13442] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1345), 1,
      anon_sym_RPAREN,
    ACTIONS(1347), 1,
      anon_sym_COMMA,
    STATE(549), 1,
      aux_sym_perClauseV2_repeat1,
  [13455] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1351), 1,
      anon_sym_primary_id_as_attribute,
    ACTIONS(1349), 2,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
  [13466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1353), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
  [13475] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1305), 1,
      anon_sym_COMMA,
    ACTIONS(1355), 1,
      anon_sym_RBRACE,
    STATE(541), 1,
      aux_sym_seedSet_repeat1,
  [13488] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1182), 1,
      anon_sym_COMMA,
    ACTIONS(1357), 1,
      anon_sym_SEMI,
    STATE(504), 1,
      aux_sym_baseDeclStmt_repeat1,
  [13501] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1016), 1,
      anon_sym_COMMA,
    ACTIONS(1359), 1,
      anon_sym_RPAREN,
    STATE(543), 1,
      aux_sym_accumType_repeat1,
  [13514] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1016), 1,
      anon_sym_COMMA,
    ACTIONS(1359), 1,
      anon_sym_RPAREN,
    STATE(544), 1,
      aux_sym_accumType_repeat1,
  [13527] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1361), 1,
      aux_sym_queryBodyIfStmt_token3,
    ACTIONS(1364), 1,
      aux_sym_queryBodyIfStmt_token4,
    STATE(534), 1,
      aux_sym_queryBodyIfStmt_repeat1,
  [13540] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1367), 1,
      aux_sym_queryBodyIfStmt_token2,
    ACTIONS(1242), 2,
      anon_sym_AND,
      anon_sym_OR,
  [13551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1121), 3,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COLON,
  [13560] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      anon_sym_LBRACE,
    ACTIONS(951), 1,
      anon_sym_API,
    ACTIONS(953), 1,
      anon_sym_SYNTAX,
  [13573] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1163), 1,
      anon_sym_COMMA,
    ACTIONS(1369), 1,
      anon_sym_RPAREN,
    STATE(468), 1,
      aux_sym_parameterList_repeat1,
  [13586] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_LBRACE,
    ACTIONS(851), 1,
      anon_sym_API,
    ACTIONS(853), 1,
      anon_sym_SYNTAX,
  [13599] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1371), 1,
      anon_sym_RPAREN,
    ACTIONS(1373), 1,
      anon_sym_COMMA,
    STATE(529), 1,
      aux_sym_parameterList_repeat1,
  [13612] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1378), 1,
      aux_sym_CREATE_VERTEX_token2,
    ACTIONS(1376), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13623] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1334), 1,
      anon_sym_COMMA,
    ACTIONS(1380), 1,
      anon_sym_GT,
    STATE(474), 1,
      aux_sym_tupleFields_repeat1,
  [13636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_CREATE_VERTEX_token2,
  [13645] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1077), 1,
      anon_sym_LBRACE,
    ACTIONS(1079), 1,
      anon_sym_API,
    ACTIONS(1081), 1,
      anon_sym_SYNTAX,
  [13658] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1382), 1,
      aux_sym_queryBodyIfStmt_token3,
    ACTIONS(1384), 1,
      aux_sym_queryBodyIfStmt_token4,
    STATE(536), 1,
      aux_sym_queryBodyIfStmt_repeat1,
  [13671] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    ACTIONS(118), 1,
      aux_sym_integer_token1,
    STATE(8), 1,
      aux_sym_integer_repeat1,
  [13684] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1386), 1,
      aux_sym_queryBodyIfStmt_token3,
    ACTIONS(1389), 1,
      aux_sym_queryBodyIfStmt_token4,
    STATE(536), 1,
      aux_sym_queryBodyIfStmt_repeat1,
  [13697] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1391), 1,
      anon_sym_COMMA,
    ACTIONS(1394), 1,
      anon_sym_RBRACK,
    STATE(537), 1,
      aux_sym_vExprSet_repeat1,
  [13710] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_CREATE_VERTEX_token2,
  [13719] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_CREATE_VERTEX_token2,
  [13728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_CREATE_VERTEX_token2,
  [13737] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1396), 1,
      anon_sym_RBRACE,
    ACTIONS(1398), 1,
      anon_sym_COMMA,
    STATE(541), 1,
      aux_sym_seedSet_repeat1,
  [13750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_CREATE_VERTEX_token2,
  [13759] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1016), 1,
      anon_sym_COMMA,
    ACTIONS(1401), 1,
      anon_sym_RPAREN,
    STATE(544), 1,
      aux_sym_accumType_repeat1,
  [13772] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      anon_sym_RPAREN,
    ACTIONS(1403), 1,
      anon_sym_COMMA,
    STATE(544), 1,
      aux_sym_accumType_repeat1,
  [13785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(999), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COLON,
  [13794] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1406), 1,
      anon_sym_RPAREN,
    ACTIONS(1408), 2,
      anon_sym_AND,
      anon_sym_OR,
  [13805] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1412), 1,
      anon_sym_DOT,
    ACTIONS(1410), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [13816] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1416), 1,
      anon_sym_GT,
    ACTIONS(1414), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [13827] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1347), 1,
      anon_sym_COMMA,
    ACTIONS(1418), 1,
      anon_sym_RPAREN,
    STATE(488), 1,
      aux_sym_perClauseV2_repeat1,
  [13840] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1420), 1,
      anon_sym_LBRACE,
    ACTIONS(1422), 1,
      anon_sym_API,
    ACTIONS(1424), 1,
      anon_sym_SYNTAX,
  [13853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1426), 2,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
  [13861] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1428), 1,
      aux_sym_createSignature_token4,
    ACTIONS(1430), 1,
      anon_sym_QUERY,
  [13871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1432), 2,
      anon_sym_DQUOTEnone_DQUOTE,
      anon_sym_DQUOTEoutdegree_by_edgetype_DQUOTE,
  [13879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1434), 2,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
  [13887] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1436), 1,
      aux_sym_fromClause_token1,
    STATE(240), 1,
      sym_fromClause,
  [13897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1438), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13905] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1440), 1,
      anon_sym_LPAREN,
    ACTIONS(1442), 1,
      anon_sym_EQ,
  [13915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1444), 2,
      aux_sym_queryBodyIfStmt_token3,
      aux_sym_queryBodyIfStmt_token4,
  [13923] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    STATE(731), 1,
      sym_stringLiteral,
  [13933] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1446), 1,
      aux_sym_primary_id_name_type_token1,
    STATE(478), 1,
      sym_primary_id_name_type,
  [13943] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    STATE(719), 1,
      sym_stringLiteral,
  [13953] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_AT_AT,
    STATE(454), 1,
      sym_globalAccumName,
  [13963] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1448), 1,
      aux_sym_integer_token1,
    STATE(13), 1,
      aux_sym_integer_repeat1,
  [13973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1450), 2,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
  [13981] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1452), 1,
      anon_sym_LBRACE,
    ACTIONS(1454), 1,
      anon_sym_SYNTAX,
  [13991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1456), 2,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
  [13999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1458), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [14007] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1460), 1,
      anon_sym_LBRACE,
    ACTIONS(1462), 1,
      anon_sym_SYNTAX,
  [14017] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      aux_sym_integer_token1,
    STATE(16), 1,
      aux_sym_integer_repeat1,
  [14027] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1464), 1,
      aux_sym_condition_token1,
    ACTIONS(1466), 1,
      aux_sym_condition_token4,
  [14037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    STATE(709), 1,
      sym_stringLiteral,
  [14047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1468), 2,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
  [14055] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_AT,
    STATE(496), 1,
      sym_localAccumName,
  [14065] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1470), 1,
      aux_sym_accumClause_token1,
    ACTIONS(1472), 1,
      aux_sym_postAccumClause_token1,
  [14075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1474), 1,
      anon_sym_LBRACE,
    ACTIONS(1476), 1,
      anon_sym_SYNTAX,
  [14085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1478), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [14093] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1276), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14101] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1480), 2,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
  [14109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1482), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [14117] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1484), 1,
      anon_sym_RPAREN,
    ACTIONS(1486), 1,
      anon_sym_COLON,
  [14127] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1488), 1,
      anon_sym_LBRACE,
    ACTIONS(1490), 1,
      anon_sym_SYNTAX,
  [14137] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    STATE(743), 1,
      sym_stringLiteral,
  [14147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_DOLLAR,
    STATE(652), 1,
      sym_columnId,
  [14157] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    STATE(651), 1,
      sym_stringLiteral,
  [14167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1492), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [14175] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1494), 1,
      anon_sym_LPAREN,
    STATE(615), 1,
      sym_selectVertParams,
  [14185] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 1,
      anon_sym_LBRACE,
    ACTIONS(981), 1,
      anon_sym_SYNTAX,
  [14195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1496), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [14203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1307), 2,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
  [14211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1498), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [14219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1500), 2,
      anon_sym_DQUOTEnone_DQUOTE,
      anon_sym_DQUOTEoutdegree_by_edgetype_DQUOTE,
  [14227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1396), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [14235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1502), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [14243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1420), 1,
      anon_sym_LBRACE,
    ACTIONS(1424), 1,
      anon_sym_SYNTAX,
  [14253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    STATE(677), 1,
      sym_stringLiteral,
  [14263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_LBRACE,
    ACTIONS(853), 1,
      anon_sym_SYNTAX,
  [14273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1504), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1506), 1,
      anon_sym_EQ,
    ACTIONS(1508), 1,
      anon_sym_DOT,
  [14291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    STATE(767), 1,
      sym_stringLiteral,
  [14301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1394), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1510), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1512), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1514), 2,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
  [14333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1349), 2,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
  [14341] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    STATE(639), 1,
      sym_stringLiteral,
  [14351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    STATE(622), 1,
      sym_stringLiteral,
  [14361] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1077), 1,
      anon_sym_LBRACE,
    ACTIONS(1081), 1,
      anon_sym_SYNTAX,
  [14371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1516), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1519), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14387] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1521), 1,
      aux_sym_integer_token1,
    STATE(475), 1,
      aux_sym_integer_repeat1,
  [14397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1523), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1525), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14413] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    STATE(633), 1,
      sym_stringLiteral,
  [14423] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1069), 1,
      anon_sym_LBRACE,
    ACTIONS(1073), 1,
      anon_sym_SYNTAX,
  [14433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1527), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [14441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1529), 1,
      anon_sym_GRAPH,
  [14448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1488), 1,
      anon_sym_LBRACE,
  [14455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1077), 1,
      anon_sym_LBRACE,
  [14462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1531), 1,
      anon_sym_SEMI,
  [14469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1533), 1,
      anon_sym_SEMI,
  [14476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1535), 1,
      aux_sym_queryBodyIfStmt_token4,
  [14483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1537), 1,
      anon_sym_RPAREN,
  [14490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1539), 1,
      anon_sym_COMMA,
  [14497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1542), 1,
      anon_sym_GRAPH,
  [14504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1544), 1,
      anon_sym_COMMA,
  [14511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1546), 1,
      anon_sym_LPAREN,
  [14518] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1548), 1,
      anon_sym_SEMI,
  [14525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1550), 1,
      anon_sym_LPAREN,
  [14532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1552), 1,
      anon_sym_EQ,
  [14539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1554), 1,
      anon_sym_EQ,
  [14546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1556), 1,
      anon_sym_COMMA,
  [14553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1558), 1,
      anon_sym_RPAREN,
  [14560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1560), 1,
      anon_sym_RPAREN,
  [14567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      anon_sym_LBRACE,
  [14574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_LBRACE,
  [14581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1562), 1,
      anon_sym_LPAREN,
  [14588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1564), 1,
      anon_sym_GRAPH,
  [14595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1566), 1,
      anon_sym_RPAREN,
  [14602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1568), 1,
      anon_sym_RPAREN,
  [14609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1570), 1,
      anon_sym_COMMA,
  [14616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1572), 1,
      anon_sym_SEMI,
  [14623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1574), 1,
      anon_sym_PLUS_EQ,
  [14630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1576), 1,
      anon_sym_EQ,
  [14637] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1212), 1,
      anon_sym_SEMI,
  [14644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1578), 1,
      anon_sym_SEMI,
  [14651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1580), 1,
      anon_sym_LPAREN,
  [14658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1582), 1,
      anon_sym_SEMI,
  [14665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1584), 1,
      anon_sym_LPAREN,
  [14672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1586), 1,
      anon_sym_GT,
  [14679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1069), 1,
      anon_sym_LBRACE,
  [14686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1588), 1,
      anon_sym_RPAREN,
  [14693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1590), 1,
      anon_sym_COMMA,
  [14700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1592), 1,
      anon_sym_RPAREN,
  [14707] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1594), 1,
      anon_sym_GT,
  [14714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1596), 1,
      anon_sym_RPAREN,
  [14721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1598), 1,
      anon_sym_LBRACE,
  [14728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      anon_sym_LBRACE,
  [14735] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1600), 1,
      anon_sym_SEMI,
  [14742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1602), 1,
      anon_sym_LPAREN,
  [14749] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1604), 1,
      anon_sym_COMMA,
  [14756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_RPAREN,
  [14763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1606), 1,
      anon_sym_EQ,
  [14770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1608), 1,
      anon_sym_DQUOTEtrue_DQUOTE,
  [14777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1610), 1,
      anon_sym_SEMI,
  [14784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      aux_sym_gsqlSelectClause_token1,
  [14791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1612), 1,
      aux_sym_fromClause_token1,
  [14798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1614), 1,
      anon_sym_DOT_STAR,
  [14805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1616), 1,
      anon_sym_RPAREN,
  [14812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1618), 1,
      anon_sym_COMMA,
  [14819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1620), 1,
      anon_sym_LPAREN,
  [14826] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1622), 1,
      anon_sym_LBRACE,
  [14833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1624), 1,
      anon_sym_SEMI,
  [14840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1626), 1,
      anon_sym_EQ,
  [14847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1472), 1,
      aux_sym_postAccumClause_token1,
  [14854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1628), 1,
      anon_sym_SEMI,
  [14861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1630), 1,
      anon_sym_RPAREN,
  [14868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1632), 1,
      anon_sym_RPAREN,
  [14875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1634), 1,
      anon_sym_GT,
  [14882] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1636), 1,
      anon_sym_GRAPH,
  [14889] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1638), 1,
      anon_sym_LPAREN,
  [14896] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1640), 1,
      anon_sym_SEMI,
  [14903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1131), 1,
      anon_sym_SEMI,
  [14910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 1,
      anon_sym_LBRACE,
  [14917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1643), 1,
      anon_sym_RPAREN,
  [14924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1645), 1,
      aux_sym_selectVertParams_token1,
  [14931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1647), 1,
      aux_sym_condition_token4,
  [14938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1649), 1,
      anon_sym_RPAREN,
  [14945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1651), 1,
      anon_sym_EQ,
  [14952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1653), 1,
      anon_sym_SEMI,
  [14959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1655), 1,
      anon_sym_EQ,
  [14966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1657), 1,
      anon_sym_LPAREN,
  [14973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1659), 1,
      anon_sym_LBRACE,
  [14980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1661), 1,
      anon_sym_DQUOTEtrue_DQUOTE,
  [14987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1663), 1,
      anon_sym_GT,
  [14994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1665), 1,
      anon_sym_RPAREN,
  [15001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1667), 1,
      anon_sym_DASH,
  [15008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1669), 1,
      anon_sym_RPAREN,
  [15015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1671), 1,
      anon_sym_GT,
  [15022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1673), 1,
      anon_sym_RPAREN,
  [15029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1675), 1,
      anon_sym_LPAREN,
  [15036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1677), 1,
      anon_sym_LPAREN,
  [15043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1679), 1,
      anon_sym_GRAPH,
  [15050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
  [15057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1681), 1,
      anon_sym_LPAREN,
  [15064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1474), 1,
      anon_sym_LBRACE,
  [15071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1216), 1,
      anon_sym_SEMI,
  [15078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1683), 1,
      anon_sym_RPAREN,
  [15085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1685), 1,
      anon_sym_RPAREN,
  [15092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1687), 1,
      anon_sym_RPAREN,
  [15099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1689), 1,
      anon_sym_LPAREN,
  [15106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1691), 1,
      anon_sym_SEMI,
  [15113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1420), 1,
      anon_sym_LBRACE,
  [15120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1693), 1,
      anon_sym_RBRACE,
  [15127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1695), 1,
      aux_sym_constant_token1,
  [15134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1697), 1,
      aux_sym_condition_token2,
  [15141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1460), 1,
      anon_sym_LBRACE,
  [15148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1699), 1,
      ts_builtin_sym_end,
  [15155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1701), 1,
      anon_sym_GT,
  [15162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1703), 1,
      anon_sym_RPAREN,
  [15169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1705), 1,
      anon_sym_COMMA,
  [15176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1707), 1,
      aux_sym_queryBodyIfStmt_token1,
  [15183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1709), 1,
      anon_sym_GT,
  [15190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1711), 1,
      anon_sym_GT,
  [15197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1713), 1,
      anon_sym_GT,
  [15204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1715), 1,
      aux_sym_queryBodyIfStmt_token4,
  [15211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_RPAREN,
  [15218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1717), 1,
      anon_sym_SEMI,
  [15225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1719), 1,
      anon_sym_LT,
  [15232] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1721), 1,
      anon_sym_LPAREN,
  [15239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1723), 1,
      anon_sym_RBRACE,
  [15246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1725), 1,
      anon_sym_COMMA,
  [15253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1727), 1,
      anon_sym_LPAREN,
  [15260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1729), 1,
      anon_sym_LPAREN,
  [15267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1731), 1,
      anon_sym_EQ,
  [15274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1733), 1,
      anon_sym_LPAREN,
  [15281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1735), 1,
      anon_sym_EQ,
  [15288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1737), 1,
      anon_sym_DQUOTEtrue_DQUOTE,
  [15295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1739), 1,
      anon_sym_LPAREN,
  [15302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1741), 1,
      anon_sym_LT,
  [15309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1452), 1,
      anon_sym_LBRACE,
  [15316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1743), 1,
      anon_sym_LPAREN,
  [15323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1745), 1,
      anon_sym_QUERY,
  [15330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1747), 1,
      anon_sym_RPAREN,
  [15337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1089), 1,
      anon_sym_SEMI,
  [15344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1749), 1,
      anon_sym_SEMI,
  [15351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1751), 1,
      anon_sym_SEMI,
  [15358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1753), 1,
      anon_sym_SEMI,
  [15365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1755), 1,
      anon_sym_SEMI,
  [15372] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1757), 1,
      anon_sym_RBRACE,
  [15379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1759), 1,
      anon_sym_SEMI,
  [15386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1761), 1,
      aux_sym_condition_token2,
  [15393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1763), 1,
      anon_sym_SEMI,
  [15400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1765), 1,
      anon_sym_RBRACE,
  [15407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1767), 1,
      anon_sym_LT,
  [15414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1769), 1,
      anon_sym_LT,
  [15421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1771), 1,
      aux_sym_condition_token2,
  [15428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1773), 1,
      anon_sym_LT,
  [15435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1775), 1,
      anon_sym_LT,
  [15442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1777), 1,
      anon_sym_LT,
  [15449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1779), 1,
      anon_sym_LT,
  [15456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1781), 1,
      aux_sym_condition_token2,
  [15463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1783), 1,
      aux_sym_typedef_token2,
  [15470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1785), 1,
      anon_sym_LPAREN,
  [15477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1787), 1,
      anon_sym_DQUOTEtrue_DQUOTE,
  [15484] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1789), 1,
      anon_sym_LPAREN,
  [15491] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1791), 1,
      anon_sym_LPAREN,
  [15498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1793), 1,
      anon_sym_RPAREN,
  [15505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1795), 1,
      anon_sym_QUERY,
  [15512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1797), 1,
      aux_sym_createSignature_token3,
  [15519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1799), 1,
      anon_sym_LBRACE,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 131,
  [SMALL_STATE(4)] = 247,
  [SMALL_STATE(5)] = 290,
  [SMALL_STATE(6)] = 332,
  [SMALL_STATE(7)] = 411,
  [SMALL_STATE(8)] = 490,
  [SMALL_STATE(9)] = 535,
  [SMALL_STATE(10)] = 582,
  [SMALL_STATE(11)] = 629,
  [SMALL_STATE(12)] = 669,
  [SMALL_STATE(13)] = 713,
  [SMALL_STATE(14)] = 757,
  [SMALL_STATE(15)] = 801,
  [SMALL_STATE(16)] = 845,
  [SMALL_STATE(17)] = 889,
  [SMALL_STATE(18)] = 930,
  [SMALL_STATE(19)] = 968,
  [SMALL_STATE(20)] = 1006,
  [SMALL_STATE(21)] = 1044,
  [SMALL_STATE(22)] = 1082,
  [SMALL_STATE(23)] = 1120,
  [SMALL_STATE(24)] = 1158,
  [SMALL_STATE(25)] = 1196,
  [SMALL_STATE(26)] = 1234,
  [SMALL_STATE(27)] = 1272,
  [SMALL_STATE(28)] = 1315,
  [SMALL_STATE(29)] = 1358,
  [SMALL_STATE(30)] = 1401,
  [SMALL_STATE(31)] = 1444,
  [SMALL_STATE(32)] = 1487,
  [SMALL_STATE(33)] = 1530,
  [SMALL_STATE(34)] = 1573,
  [SMALL_STATE(35)] = 1616,
  [SMALL_STATE(36)] = 1658,
  [SMALL_STATE(37)] = 1700,
  [SMALL_STATE(38)] = 1742,
  [SMALL_STATE(39)] = 1784,
  [SMALL_STATE(40)] = 1826,
  [SMALL_STATE(41)] = 1868,
  [SMALL_STATE(42)] = 1903,
  [SMALL_STATE(43)] = 1937,
  [SMALL_STATE(44)] = 1975,
  [SMALL_STATE(45)] = 2041,
  [SMALL_STATE(46)] = 2079,
  [SMALL_STATE(47)] = 2117,
  [SMALL_STATE(48)] = 2183,
  [SMALL_STATE(49)] = 2249,
  [SMALL_STATE(50)] = 2310,
  [SMALL_STATE(51)] = 2376,
  [SMALL_STATE(52)] = 2424,
  [SMALL_STATE(53)] = 2490,
  [SMALL_STATE(54)] = 2538,
  [SMALL_STATE(55)] = 2585,
  [SMALL_STATE(56)] = 2622,
  [SMALL_STATE(57)] = 2669,
  [SMALL_STATE(58)] = 2704,
  [SMALL_STATE(59)] = 2737,
  [SMALL_STATE(60)] = 2770,
  [SMALL_STATE(61)] = 2807,
  [SMALL_STATE(62)] = 2842,
  [SMALL_STATE(63)] = 2877,
  [SMALL_STATE(64)] = 2937,
  [SMALL_STATE(65)] = 2997,
  [SMALL_STATE(66)] = 3029,
  [SMALL_STATE(67)] = 3089,
  [SMALL_STATE(68)] = 3149,
  [SMALL_STATE(69)] = 3209,
  [SMALL_STATE(70)] = 3269,
  [SMALL_STATE(71)] = 3329,
  [SMALL_STATE(72)] = 3389,
  [SMALL_STATE(73)] = 3449,
  [SMALL_STATE(74)] = 3485,
  [SMALL_STATE(75)] = 3545,
  [SMALL_STATE(76)] = 3605,
  [SMALL_STATE(77)] = 3665,
  [SMALL_STATE(78)] = 3725,
  [SMALL_STATE(79)] = 3785,
  [SMALL_STATE(80)] = 3821,
  [SMALL_STATE(81)] = 3857,
  [SMALL_STATE(82)] = 3889,
  [SMALL_STATE(83)] = 3925,
  [SMALL_STATE(84)] = 3961,
  [SMALL_STATE(85)] = 4018,
  [SMALL_STATE(86)] = 4075,
  [SMALL_STATE(87)] = 4132,
  [SMALL_STATE(88)] = 4189,
  [SMALL_STATE(89)] = 4246,
  [SMALL_STATE(90)] = 4303,
  [SMALL_STATE(91)] = 4360,
  [SMALL_STATE(92)] = 4417,
  [SMALL_STATE(93)] = 4474,
  [SMALL_STATE(94)] = 4531,
  [SMALL_STATE(95)] = 4588,
  [SMALL_STATE(96)] = 4645,
  [SMALL_STATE(97)] = 4702,
  [SMALL_STATE(98)] = 4759,
  [SMALL_STATE(99)] = 4816,
  [SMALL_STATE(100)] = 4873,
  [SMALL_STATE(101)] = 4930,
  [SMALL_STATE(102)] = 4987,
  [SMALL_STATE(103)] = 5044,
  [SMALL_STATE(104)] = 5101,
  [SMALL_STATE(105)] = 5158,
  [SMALL_STATE(106)] = 5215,
  [SMALL_STATE(107)] = 5249,
  [SMALL_STATE(108)] = 5283,
  [SMALL_STATE(109)] = 5317,
  [SMALL_STATE(110)] = 5351,
  [SMALL_STATE(111)] = 5385,
  [SMALL_STATE(112)] = 5419,
  [SMALL_STATE(113)] = 5469,
  [SMALL_STATE(114)] = 5516,
  [SMALL_STATE(115)] = 5549,
  [SMALL_STATE(116)] = 5582,
  [SMALL_STATE(117)] = 5615,
  [SMALL_STATE(118)] = 5648,
  [SMALL_STATE(119)] = 5695,
  [SMALL_STATE(120)] = 5728,
  [SMALL_STATE(121)] = 5761,
  [SMALL_STATE(122)] = 5794,
  [SMALL_STATE(123)] = 5841,
  [SMALL_STATE(124)] = 5874,
  [SMALL_STATE(125)] = 5923,
  [SMALL_STATE(126)] = 5956,
  [SMALL_STATE(127)] = 5989,
  [SMALL_STATE(128)] = 6038,
  [SMALL_STATE(129)] = 6085,
  [SMALL_STATE(130)] = 6118,
  [SMALL_STATE(131)] = 6151,
  [SMALL_STATE(132)] = 6199,
  [SMALL_STATE(133)] = 6251,
  [SMALL_STATE(134)] = 6299,
  [SMALL_STATE(135)] = 6347,
  [SMALL_STATE(136)] = 6395,
  [SMALL_STATE(137)] = 6443,
  [SMALL_STATE(138)] = 6491,
  [SMALL_STATE(139)] = 6539,
  [SMALL_STATE(140)] = 6587,
  [SMALL_STATE(141)] = 6631,
  [SMALL_STATE(142)] = 6679,
  [SMALL_STATE(143)] = 6727,
  [SMALL_STATE(144)] = 6779,
  [SMALL_STATE(145)] = 6827,
  [SMALL_STATE(146)] = 6871,
  [SMALL_STATE(147)] = 6915,
  [SMALL_STATE(148)] = 6956,
  [SMALL_STATE(149)] = 6997,
  [SMALL_STATE(150)] = 7043,
  [SMALL_STATE(151)] = 7071,
  [SMALL_STATE(152)] = 7093,
  [SMALL_STATE(153)] = 7121,
  [SMALL_STATE(154)] = 7149,
  [SMALL_STATE(155)] = 7177,
  [SMALL_STATE(156)] = 7205,
  [SMALL_STATE(157)] = 7231,
  [SMALL_STATE(158)] = 7263,
  [SMALL_STATE(159)] = 7309,
  [SMALL_STATE(160)] = 7352,
  [SMALL_STATE(161)] = 7378,
  [SMALL_STATE(162)] = 7402,
  [SMALL_STATE(163)] = 7428,
  [SMALL_STATE(164)] = 7454,
  [SMALL_STATE(165)] = 7480,
  [SMALL_STATE(166)] = 7504,
  [SMALL_STATE(167)] = 7529,
  [SMALL_STATE(168)] = 7554,
  [SMALL_STATE(169)] = 7579,
  [SMALL_STATE(170)] = 7604,
  [SMALL_STATE(171)] = 7629,
  [SMALL_STATE(172)] = 7652,
  [SMALL_STATE(173)] = 7675,
  [SMALL_STATE(174)] = 7698,
  [SMALL_STATE(175)] = 7727,
  [SMALL_STATE(176)] = 7752,
  [SMALL_STATE(177)] = 7779,
  [SMALL_STATE(178)] = 7804,
  [SMALL_STATE(179)] = 7827,
  [SMALL_STATE(180)] = 7852,
  [SMALL_STATE(181)] = 7889,
  [SMALL_STATE(182)] = 7914,
  [SMALL_STATE(183)] = 7937,
  [SMALL_STATE(184)] = 7962,
  [SMALL_STATE(185)] = 7990,
  [SMALL_STATE(186)] = 8014,
  [SMALL_STATE(187)] = 8038,
  [SMALL_STATE(188)] = 8060,
  [SMALL_STATE(189)] = 8094,
  [SMALL_STATE(190)] = 8116,
  [SMALL_STATE(191)] = 8150,
  [SMALL_STATE(192)] = 8172,
  [SMALL_STATE(193)] = 8206,
  [SMALL_STATE(194)] = 8240,
  [SMALL_STATE(195)] = 8264,
  [SMALL_STATE(196)] = 8298,
  [SMALL_STATE(197)] = 8334,
  [SMALL_STATE(198)] = 8362,
  [SMALL_STATE(199)] = 8386,
  [SMALL_STATE(200)] = 8420,
  [SMALL_STATE(201)] = 8448,
  [SMALL_STATE(202)] = 8482,
  [SMALL_STATE(203)] = 8506,
  [SMALL_STATE(204)] = 8540,
  [SMALL_STATE(205)] = 8568,
  [SMALL_STATE(206)] = 8591,
  [SMALL_STATE(207)] = 8610,
  [SMALL_STATE(208)] = 8633,
  [SMALL_STATE(209)] = 8656,
  [SMALL_STATE(210)] = 8679,
  [SMALL_STATE(211)] = 8702,
  [SMALL_STATE(212)] = 8733,
  [SMALL_STATE(213)] = 8762,
  [SMALL_STATE(214)] = 8781,
  [SMALL_STATE(215)] = 8812,
  [SMALL_STATE(216)] = 8840,
  [SMALL_STATE(217)] = 8868,
  [SMALL_STATE(218)] = 8889,
  [SMALL_STATE(219)] = 8912,
  [SMALL_STATE(220)] = 8933,
  [SMALL_STATE(221)] = 8954,
  [SMALL_STATE(222)] = 8975,
  [SMALL_STATE(223)] = 9000,
  [SMALL_STATE(224)] = 9021,
  [SMALL_STATE(225)] = 9042,
  [SMALL_STATE(226)] = 9065,
  [SMALL_STATE(227)] = 9086,
  [SMALL_STATE(228)] = 9101,
  [SMALL_STATE(229)] = 9124,
  [SMALL_STATE(230)] = 9147,
  [SMALL_STATE(231)] = 9170,
  [SMALL_STATE(232)] = 9191,
  [SMALL_STATE(233)] = 9212,
  [SMALL_STATE(234)] = 9227,
  [SMALL_STATE(235)] = 9250,
  [SMALL_STATE(236)] = 9273,
  [SMALL_STATE(237)] = 9294,
  [SMALL_STATE(238)] = 9312,
  [SMALL_STATE(239)] = 9340,
  [SMALL_STATE(240)] = 9364,
  [SMALL_STATE(241)] = 9390,
  [SMALL_STATE(242)] = 9410,
  [SMALL_STATE(243)] = 9434,
  [SMALL_STATE(244)] = 9454,
  [SMALL_STATE(245)] = 9470,
  [SMALL_STATE(246)] = 9494,
  [SMALL_STATE(247)] = 9514,
  [SMALL_STATE(248)] = 9538,
  [SMALL_STATE(249)] = 9562,
  [SMALL_STATE(250)] = 9584,
  [SMALL_STATE(251)] = 9608,
  [SMALL_STATE(252)] = 9626,
  [SMALL_STATE(253)] = 9650,
  [SMALL_STATE(254)] = 9670,
  [SMALL_STATE(255)] = 9688,
  [SMALL_STATE(256)] = 9710,
  [SMALL_STATE(257)] = 9734,
  [SMALL_STATE(258)] = 9747,
  [SMALL_STATE(259)] = 9764,
  [SMALL_STATE(260)] = 9777,
  [SMALL_STATE(261)] = 9790,
  [SMALL_STATE(262)] = 9811,
  [SMALL_STATE(263)] = 9824,
  [SMALL_STATE(264)] = 9843,
  [SMALL_STATE(265)] = 9858,
  [SMALL_STATE(266)] = 9873,
  [SMALL_STATE(267)] = 9888,
  [SMALL_STATE(268)] = 9901,
  [SMALL_STATE(269)] = 9914,
  [SMALL_STATE(270)] = 9935,
  [SMALL_STATE(271)] = 9948,
  [SMALL_STATE(272)] = 9967,
  [SMALL_STATE(273)] = 9989,
  [SMALL_STATE(274)] = 10001,
  [SMALL_STATE(275)] = 10013,
  [SMALL_STATE(276)] = 10025,
  [SMALL_STATE(277)] = 10039,
  [SMALL_STATE(278)] = 10061,
  [SMALL_STATE(279)] = 10075,
  [SMALL_STATE(280)] = 10091,
  [SMALL_STATE(281)] = 10105,
  [SMALL_STATE(282)] = 10123,
  [SMALL_STATE(283)] = 10137,
  [SMALL_STATE(284)] = 10155,
  [SMALL_STATE(285)] = 10171,
  [SMALL_STATE(286)] = 10189,
  [SMALL_STATE(287)] = 10207,
  [SMALL_STATE(288)] = 10225,
  [SMALL_STATE(289)] = 10241,
  [SMALL_STATE(290)] = 10255,
  [SMALL_STATE(291)] = 10269,
  [SMALL_STATE(292)] = 10283,
  [SMALL_STATE(293)] = 10295,
  [SMALL_STATE(294)] = 10313,
  [SMALL_STATE(295)] = 10331,
  [SMALL_STATE(296)] = 10343,
  [SMALL_STATE(297)] = 10361,
  [SMALL_STATE(298)] = 10383,
  [SMALL_STATE(299)] = 10395,
  [SMALL_STATE(300)] = 10411,
  [SMALL_STATE(301)] = 10425,
  [SMALL_STATE(302)] = 10443,
  [SMALL_STATE(303)] = 10459,
  [SMALL_STATE(304)] = 10477,
  [SMALL_STATE(305)] = 10495,
  [SMALL_STATE(306)] = 10517,
  [SMALL_STATE(307)] = 10535,
  [SMALL_STATE(308)] = 10547,
  [SMALL_STATE(309)] = 10565,
  [SMALL_STATE(310)] = 10587,
  [SMALL_STATE(311)] = 10603,
  [SMALL_STATE(312)] = 10621,
  [SMALL_STATE(313)] = 10633,
  [SMALL_STATE(314)] = 10651,
  [SMALL_STATE(315)] = 10669,
  [SMALL_STATE(316)] = 10685,
  [SMALL_STATE(317)] = 10703,
  [SMALL_STATE(318)] = 10723,
  [SMALL_STATE(319)] = 10743,
  [SMALL_STATE(320)] = 10759,
  [SMALL_STATE(321)] = 10774,
  [SMALL_STATE(322)] = 10789,
  [SMALL_STATE(323)] = 10804,
  [SMALL_STATE(324)] = 10819,
  [SMALL_STATE(325)] = 10834,
  [SMALL_STATE(326)] = 10853,
  [SMALL_STATE(327)] = 10868,
  [SMALL_STATE(328)] = 10883,
  [SMALL_STATE(329)] = 10896,
  [SMALL_STATE(330)] = 10911,
  [SMALL_STATE(331)] = 10926,
  [SMALL_STATE(332)] = 10943,
  [SMALL_STATE(333)] = 10960,
  [SMALL_STATE(334)] = 10975,
  [SMALL_STATE(335)] = 10986,
  [SMALL_STATE(336)] = 11001,
  [SMALL_STATE(337)] = 11018,
  [SMALL_STATE(338)] = 11033,
  [SMALL_STATE(339)] = 11048,
  [SMALL_STATE(340)] = 11063,
  [SMALL_STATE(341)] = 11078,
  [SMALL_STATE(342)] = 11093,
  [SMALL_STATE(343)] = 11108,
  [SMALL_STATE(344)] = 11119,
  [SMALL_STATE(345)] = 11134,
  [SMALL_STATE(346)] = 11151,
  [SMALL_STATE(347)] = 11168,
  [SMALL_STATE(348)] = 11183,
  [SMALL_STATE(349)] = 11198,
  [SMALL_STATE(350)] = 11213,
  [SMALL_STATE(351)] = 11226,
  [SMALL_STATE(352)] = 11241,
  [SMALL_STATE(353)] = 11252,
  [SMALL_STATE(354)] = 11267,
  [SMALL_STATE(355)] = 11282,
  [SMALL_STATE(356)] = 11297,
  [SMALL_STATE(357)] = 11308,
  [SMALL_STATE(358)] = 11321,
  [SMALL_STATE(359)] = 11336,
  [SMALL_STATE(360)] = 11351,
  [SMALL_STATE(361)] = 11366,
  [SMALL_STATE(362)] = 11381,
  [SMALL_STATE(363)] = 11400,
  [SMALL_STATE(364)] = 11415,
  [SMALL_STATE(365)] = 11430,
  [SMALL_STATE(366)] = 11445,
  [SMALL_STATE(367)] = 11462,
  [SMALL_STATE(368)] = 11477,
  [SMALL_STATE(369)] = 11492,
  [SMALL_STATE(370)] = 11511,
  [SMALL_STATE(371)] = 11526,
  [SMALL_STATE(372)] = 11541,
  [SMALL_STATE(373)] = 11556,
  [SMALL_STATE(374)] = 11573,
  [SMALL_STATE(375)] = 11588,
  [SMALL_STATE(376)] = 11599,
  [SMALL_STATE(377)] = 11614,
  [SMALL_STATE(378)] = 11629,
  [SMALL_STATE(379)] = 11644,
  [SMALL_STATE(380)] = 11661,
  [SMALL_STATE(381)] = 11674,
  [SMALL_STATE(382)] = 11693,
  [SMALL_STATE(383)] = 11708,
  [SMALL_STATE(384)] = 11723,
  [SMALL_STATE(385)] = 11738,
  [SMALL_STATE(386)] = 11753,
  [SMALL_STATE(387)] = 11768,
  [SMALL_STATE(388)] = 11783,
  [SMALL_STATE(389)] = 11798,
  [SMALL_STATE(390)] = 11813,
  [SMALL_STATE(391)] = 11828,
  [SMALL_STATE(392)] = 11843,
  [SMALL_STATE(393)] = 11856,
  [SMALL_STATE(394)] = 11875,
  [SMALL_STATE(395)] = 11890,
  [SMALL_STATE(396)] = 11905,
  [SMALL_STATE(397)] = 11920,
  [SMALL_STATE(398)] = 11931,
  [SMALL_STATE(399)] = 11946,
  [SMALL_STATE(400)] = 11961,
  [SMALL_STATE(401)] = 11976,
  [SMALL_STATE(402)] = 11991,
  [SMALL_STATE(403)] = 12006,
  [SMALL_STATE(404)] = 12017,
  [SMALL_STATE(405)] = 12036,
  [SMALL_STATE(406)] = 12047,
  [SMALL_STATE(407)] = 12062,
  [SMALL_STATE(408)] = 12077,
  [SMALL_STATE(409)] = 12092,
  [SMALL_STATE(410)] = 12107,
  [SMALL_STATE(411)] = 12122,
  [SMALL_STATE(412)] = 12133,
  [SMALL_STATE(413)] = 12148,
  [SMALL_STATE(414)] = 12163,
  [SMALL_STATE(415)] = 12178,
  [SMALL_STATE(416)] = 12193,
  [SMALL_STATE(417)] = 12208,
  [SMALL_STATE(418)] = 12227,
  [SMALL_STATE(419)] = 12240,
  [SMALL_STATE(420)] = 12255,
  [SMALL_STATE(421)] = 12268,
  [SMALL_STATE(422)] = 12283,
  [SMALL_STATE(423)] = 12298,
  [SMALL_STATE(424)] = 12313,
  [SMALL_STATE(425)] = 12327,
  [SMALL_STATE(426)] = 12339,
  [SMALL_STATE(427)] = 12351,
  [SMALL_STATE(428)] = 12363,
  [SMALL_STATE(429)] = 12375,
  [SMALL_STATE(430)] = 12387,
  [SMALL_STATE(431)] = 12397,
  [SMALL_STATE(432)] = 12407,
  [SMALL_STATE(433)] = 12417,
  [SMALL_STATE(434)] = 12431,
  [SMALL_STATE(435)] = 12443,
  [SMALL_STATE(436)] = 12453,
  [SMALL_STATE(437)] = 12469,
  [SMALL_STATE(438)] = 12483,
  [SMALL_STATE(439)] = 12495,
  [SMALL_STATE(440)] = 12507,
  [SMALL_STATE(441)] = 12521,
  [SMALL_STATE(442)] = 12531,
  [SMALL_STATE(443)] = 12547,
  [SMALL_STATE(444)] = 12561,
  [SMALL_STATE(445)] = 12571,
  [SMALL_STATE(446)] = 12585,
  [SMALL_STATE(447)] = 12597,
  [SMALL_STATE(448)] = 12613,
  [SMALL_STATE(449)] = 12627,
  [SMALL_STATE(450)] = 12639,
  [SMALL_STATE(451)] = 12655,
  [SMALL_STATE(452)] = 12665,
  [SMALL_STATE(453)] = 12681,
  [SMALL_STATE(454)] = 12693,
  [SMALL_STATE(455)] = 12709,
  [SMALL_STATE(456)] = 12723,
  [SMALL_STATE(457)] = 12739,
  [SMALL_STATE(458)] = 12751,
  [SMALL_STATE(459)] = 12767,
  [SMALL_STATE(460)] = 12777,
  [SMALL_STATE(461)] = 12787,
  [SMALL_STATE(462)] = 12801,
  [SMALL_STATE(463)] = 12813,
  [SMALL_STATE(464)] = 12825,
  [SMALL_STATE(465)] = 12839,
  [SMALL_STATE(466)] = 12852,
  [SMALL_STATE(467)] = 12861,
  [SMALL_STATE(468)] = 12870,
  [SMALL_STATE(469)] = 12883,
  [SMALL_STATE(470)] = 12894,
  [SMALL_STATE(471)] = 12903,
  [SMALL_STATE(472)] = 12912,
  [SMALL_STATE(473)] = 12925,
  [SMALL_STATE(474)] = 12936,
  [SMALL_STATE(475)] = 12949,
  [SMALL_STATE(476)] = 12962,
  [SMALL_STATE(477)] = 12973,
  [SMALL_STATE(478)] = 12982,
  [SMALL_STATE(479)] = 12995,
  [SMALL_STATE(480)] = 13006,
  [SMALL_STATE(481)] = 13019,
  [SMALL_STATE(482)] = 13030,
  [SMALL_STATE(483)] = 13043,
  [SMALL_STATE(484)] = 13056,
  [SMALL_STATE(485)] = 13065,
  [SMALL_STATE(486)] = 13076,
  [SMALL_STATE(487)] = 13089,
  [SMALL_STATE(488)] = 13102,
  [SMALL_STATE(489)] = 13115,
  [SMALL_STATE(490)] = 13124,
  [SMALL_STATE(491)] = 13137,
  [SMALL_STATE(492)] = 13148,
  [SMALL_STATE(493)] = 13161,
  [SMALL_STATE(494)] = 13170,
  [SMALL_STATE(495)] = 13183,
  [SMALL_STATE(496)] = 13196,
  [SMALL_STATE(497)] = 13207,
  [SMALL_STATE(498)] = 13220,
  [SMALL_STATE(499)] = 13233,
  [SMALL_STATE(500)] = 13246,
  [SMALL_STATE(501)] = 13257,
  [SMALL_STATE(502)] = 13268,
  [SMALL_STATE(503)] = 13281,
  [SMALL_STATE(504)] = 13292,
  [SMALL_STATE(505)] = 13305,
  [SMALL_STATE(506)] = 13318,
  [SMALL_STATE(507)] = 13327,
  [SMALL_STATE(508)] = 13340,
  [SMALL_STATE(509)] = 13351,
  [SMALL_STATE(510)] = 13364,
  [SMALL_STATE(511)] = 13377,
  [SMALL_STATE(512)] = 13390,
  [SMALL_STATE(513)] = 13403,
  [SMALL_STATE(514)] = 13416,
  [SMALL_STATE(515)] = 13429,
  [SMALL_STATE(516)] = 13442,
  [SMALL_STATE(517)] = 13455,
  [SMALL_STATE(518)] = 13466,
  [SMALL_STATE(519)] = 13475,
  [SMALL_STATE(520)] = 13488,
  [SMALL_STATE(521)] = 13501,
  [SMALL_STATE(522)] = 13514,
  [SMALL_STATE(523)] = 13527,
  [SMALL_STATE(524)] = 13540,
  [SMALL_STATE(525)] = 13551,
  [SMALL_STATE(526)] = 13560,
  [SMALL_STATE(527)] = 13573,
  [SMALL_STATE(528)] = 13586,
  [SMALL_STATE(529)] = 13599,
  [SMALL_STATE(530)] = 13612,
  [SMALL_STATE(531)] = 13623,
  [SMALL_STATE(532)] = 13636,
  [SMALL_STATE(533)] = 13645,
  [SMALL_STATE(534)] = 13658,
  [SMALL_STATE(535)] = 13671,
  [SMALL_STATE(536)] = 13684,
  [SMALL_STATE(537)] = 13697,
  [SMALL_STATE(538)] = 13710,
  [SMALL_STATE(539)] = 13719,
  [SMALL_STATE(540)] = 13728,
  [SMALL_STATE(541)] = 13737,
  [SMALL_STATE(542)] = 13750,
  [SMALL_STATE(543)] = 13759,
  [SMALL_STATE(544)] = 13772,
  [SMALL_STATE(545)] = 13785,
  [SMALL_STATE(546)] = 13794,
  [SMALL_STATE(547)] = 13805,
  [SMALL_STATE(548)] = 13816,
  [SMALL_STATE(549)] = 13827,
  [SMALL_STATE(550)] = 13840,
  [SMALL_STATE(551)] = 13853,
  [SMALL_STATE(552)] = 13861,
  [SMALL_STATE(553)] = 13871,
  [SMALL_STATE(554)] = 13879,
  [SMALL_STATE(555)] = 13887,
  [SMALL_STATE(556)] = 13897,
  [SMALL_STATE(557)] = 13905,
  [SMALL_STATE(558)] = 13915,
  [SMALL_STATE(559)] = 13923,
  [SMALL_STATE(560)] = 13933,
  [SMALL_STATE(561)] = 13943,
  [SMALL_STATE(562)] = 13953,
  [SMALL_STATE(563)] = 13963,
  [SMALL_STATE(564)] = 13973,
  [SMALL_STATE(565)] = 13981,
  [SMALL_STATE(566)] = 13991,
  [SMALL_STATE(567)] = 13999,
  [SMALL_STATE(568)] = 14007,
  [SMALL_STATE(569)] = 14017,
  [SMALL_STATE(570)] = 14027,
  [SMALL_STATE(571)] = 14037,
  [SMALL_STATE(572)] = 14047,
  [SMALL_STATE(573)] = 14055,
  [SMALL_STATE(574)] = 14065,
  [SMALL_STATE(575)] = 14075,
  [SMALL_STATE(576)] = 14085,
  [SMALL_STATE(577)] = 14093,
  [SMALL_STATE(578)] = 14101,
  [SMALL_STATE(579)] = 14109,
  [SMALL_STATE(580)] = 14117,
  [SMALL_STATE(581)] = 14127,
  [SMALL_STATE(582)] = 14137,
  [SMALL_STATE(583)] = 14147,
  [SMALL_STATE(584)] = 14157,
  [SMALL_STATE(585)] = 14167,
  [SMALL_STATE(586)] = 14175,
  [SMALL_STATE(587)] = 14185,
  [SMALL_STATE(588)] = 14195,
  [SMALL_STATE(589)] = 14203,
  [SMALL_STATE(590)] = 14211,
  [SMALL_STATE(591)] = 14219,
  [SMALL_STATE(592)] = 14227,
  [SMALL_STATE(593)] = 14235,
  [SMALL_STATE(594)] = 14243,
  [SMALL_STATE(595)] = 14253,
  [SMALL_STATE(596)] = 14263,
  [SMALL_STATE(597)] = 14273,
  [SMALL_STATE(598)] = 14281,
  [SMALL_STATE(599)] = 14291,
  [SMALL_STATE(600)] = 14301,
  [SMALL_STATE(601)] = 14309,
  [SMALL_STATE(602)] = 14317,
  [SMALL_STATE(603)] = 14325,
  [SMALL_STATE(604)] = 14333,
  [SMALL_STATE(605)] = 14341,
  [SMALL_STATE(606)] = 14351,
  [SMALL_STATE(607)] = 14361,
  [SMALL_STATE(608)] = 14371,
  [SMALL_STATE(609)] = 14379,
  [SMALL_STATE(610)] = 14387,
  [SMALL_STATE(611)] = 14397,
  [SMALL_STATE(612)] = 14405,
  [SMALL_STATE(613)] = 14413,
  [SMALL_STATE(614)] = 14423,
  [SMALL_STATE(615)] = 14433,
  [SMALL_STATE(616)] = 14441,
  [SMALL_STATE(617)] = 14448,
  [SMALL_STATE(618)] = 14455,
  [SMALL_STATE(619)] = 14462,
  [SMALL_STATE(620)] = 14469,
  [SMALL_STATE(621)] = 14476,
  [SMALL_STATE(622)] = 14483,
  [SMALL_STATE(623)] = 14490,
  [SMALL_STATE(624)] = 14497,
  [SMALL_STATE(625)] = 14504,
  [SMALL_STATE(626)] = 14511,
  [SMALL_STATE(627)] = 14518,
  [SMALL_STATE(628)] = 14525,
  [SMALL_STATE(629)] = 14532,
  [SMALL_STATE(630)] = 14539,
  [SMALL_STATE(631)] = 14546,
  [SMALL_STATE(632)] = 14553,
  [SMALL_STATE(633)] = 14560,
  [SMALL_STATE(634)] = 14567,
  [SMALL_STATE(635)] = 14574,
  [SMALL_STATE(636)] = 14581,
  [SMALL_STATE(637)] = 14588,
  [SMALL_STATE(638)] = 14595,
  [SMALL_STATE(639)] = 14602,
  [SMALL_STATE(640)] = 14609,
  [SMALL_STATE(641)] = 14616,
  [SMALL_STATE(642)] = 14623,
  [SMALL_STATE(643)] = 14630,
  [SMALL_STATE(644)] = 14637,
  [SMALL_STATE(645)] = 14644,
  [SMALL_STATE(646)] = 14651,
  [SMALL_STATE(647)] = 14658,
  [SMALL_STATE(648)] = 14665,
  [SMALL_STATE(649)] = 14672,
  [SMALL_STATE(650)] = 14679,
  [SMALL_STATE(651)] = 14686,
  [SMALL_STATE(652)] = 14693,
  [SMALL_STATE(653)] = 14700,
  [SMALL_STATE(654)] = 14707,
  [SMALL_STATE(655)] = 14714,
  [SMALL_STATE(656)] = 14721,
  [SMALL_STATE(657)] = 14728,
  [SMALL_STATE(658)] = 14735,
  [SMALL_STATE(659)] = 14742,
  [SMALL_STATE(660)] = 14749,
  [SMALL_STATE(661)] = 14756,
  [SMALL_STATE(662)] = 14763,
  [SMALL_STATE(663)] = 14770,
  [SMALL_STATE(664)] = 14777,
  [SMALL_STATE(665)] = 14784,
  [SMALL_STATE(666)] = 14791,
  [SMALL_STATE(667)] = 14798,
  [SMALL_STATE(668)] = 14805,
  [SMALL_STATE(669)] = 14812,
  [SMALL_STATE(670)] = 14819,
  [SMALL_STATE(671)] = 14826,
  [SMALL_STATE(672)] = 14833,
  [SMALL_STATE(673)] = 14840,
  [SMALL_STATE(674)] = 14847,
  [SMALL_STATE(675)] = 14854,
  [SMALL_STATE(676)] = 14861,
  [SMALL_STATE(677)] = 14868,
  [SMALL_STATE(678)] = 14875,
  [SMALL_STATE(679)] = 14882,
  [SMALL_STATE(680)] = 14889,
  [SMALL_STATE(681)] = 14896,
  [SMALL_STATE(682)] = 14903,
  [SMALL_STATE(683)] = 14910,
  [SMALL_STATE(684)] = 14917,
  [SMALL_STATE(685)] = 14924,
  [SMALL_STATE(686)] = 14931,
  [SMALL_STATE(687)] = 14938,
  [SMALL_STATE(688)] = 14945,
  [SMALL_STATE(689)] = 14952,
  [SMALL_STATE(690)] = 14959,
  [SMALL_STATE(691)] = 14966,
  [SMALL_STATE(692)] = 14973,
  [SMALL_STATE(693)] = 14980,
  [SMALL_STATE(694)] = 14987,
  [SMALL_STATE(695)] = 14994,
  [SMALL_STATE(696)] = 15001,
  [SMALL_STATE(697)] = 15008,
  [SMALL_STATE(698)] = 15015,
  [SMALL_STATE(699)] = 15022,
  [SMALL_STATE(700)] = 15029,
  [SMALL_STATE(701)] = 15036,
  [SMALL_STATE(702)] = 15043,
  [SMALL_STATE(703)] = 15050,
  [SMALL_STATE(704)] = 15057,
  [SMALL_STATE(705)] = 15064,
  [SMALL_STATE(706)] = 15071,
  [SMALL_STATE(707)] = 15078,
  [SMALL_STATE(708)] = 15085,
  [SMALL_STATE(709)] = 15092,
  [SMALL_STATE(710)] = 15099,
  [SMALL_STATE(711)] = 15106,
  [SMALL_STATE(712)] = 15113,
  [SMALL_STATE(713)] = 15120,
  [SMALL_STATE(714)] = 15127,
  [SMALL_STATE(715)] = 15134,
  [SMALL_STATE(716)] = 15141,
  [SMALL_STATE(717)] = 15148,
  [SMALL_STATE(718)] = 15155,
  [SMALL_STATE(719)] = 15162,
  [SMALL_STATE(720)] = 15169,
  [SMALL_STATE(721)] = 15176,
  [SMALL_STATE(722)] = 15183,
  [SMALL_STATE(723)] = 15190,
  [SMALL_STATE(724)] = 15197,
  [SMALL_STATE(725)] = 15204,
  [SMALL_STATE(726)] = 15211,
  [SMALL_STATE(727)] = 15218,
  [SMALL_STATE(728)] = 15225,
  [SMALL_STATE(729)] = 15232,
  [SMALL_STATE(730)] = 15239,
  [SMALL_STATE(731)] = 15246,
  [SMALL_STATE(732)] = 15253,
  [SMALL_STATE(733)] = 15260,
  [SMALL_STATE(734)] = 15267,
  [SMALL_STATE(735)] = 15274,
  [SMALL_STATE(736)] = 15281,
  [SMALL_STATE(737)] = 15288,
  [SMALL_STATE(738)] = 15295,
  [SMALL_STATE(739)] = 15302,
  [SMALL_STATE(740)] = 15309,
  [SMALL_STATE(741)] = 15316,
  [SMALL_STATE(742)] = 15323,
  [SMALL_STATE(743)] = 15330,
  [SMALL_STATE(744)] = 15337,
  [SMALL_STATE(745)] = 15344,
  [SMALL_STATE(746)] = 15351,
  [SMALL_STATE(747)] = 15358,
  [SMALL_STATE(748)] = 15365,
  [SMALL_STATE(749)] = 15372,
  [SMALL_STATE(750)] = 15379,
  [SMALL_STATE(751)] = 15386,
  [SMALL_STATE(752)] = 15393,
  [SMALL_STATE(753)] = 15400,
  [SMALL_STATE(754)] = 15407,
  [SMALL_STATE(755)] = 15414,
  [SMALL_STATE(756)] = 15421,
  [SMALL_STATE(757)] = 15428,
  [SMALL_STATE(758)] = 15435,
  [SMALL_STATE(759)] = 15442,
  [SMALL_STATE(760)] = 15449,
  [SMALL_STATE(761)] = 15456,
  [SMALL_STATE(762)] = 15463,
  [SMALL_STATE(763)] = 15470,
  [SMALL_STATE(764)] = 15477,
  [SMALL_STATE(765)] = 15484,
  [SMALL_STATE(766)] = 15491,
  [SMALL_STATE(767)] = 15498,
  [SMALL_STATE(768)] = 15505,
  [SMALL_STATE(769)] = 15512,
  [SMALL_STATE(770)] = 15519,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumName, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumName, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_globalAccumName, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_globalAccumName, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declStmts, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declStmts, 1),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(264),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(238),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(760),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(307),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(295),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(274),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(275),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(278),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(759),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(758),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(757),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(755),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(754),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(422),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declStmts_repeat1, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2), SHIFT_REPEAT(8),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_localAccumName, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_localAccumName, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 4),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real, 4),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 3),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expr, 3), REDUCE(sym_setBagExpr, 3),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_expr, 3), REDUCE(sym_setBagExpr, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 4),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 4),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setBagExpr, 3),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setBagExpr, 3),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expr, 1), REDUCE(sym_setBagExpr, 1),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_expr, 1), REDUCE(sym_setBagExpr, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringLiteral, 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringLiteral, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 1),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringLiteral, 3),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringLiteral, 3),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typedefs_repeat1, 2), SHIFT_REPEAT(762),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typedefs_repeat1, 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_typedefs_repeat1, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedefs, 1),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typedefs, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(30),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(30),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 2),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(33),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(33),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(35),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(35),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(37),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(37),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(46),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 3),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 3),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expr, 3), SHIFT(206),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_expr, 3), SHIFT(206),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(62),
  [365] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(62),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(82),
  [411] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(82),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(109),
  [463] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(109),
  [466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(110),
  [469] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(110),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(115),
  [491] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(115),
  [494] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(116),
  [497] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(116),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [506] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(119),
  [509] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(119),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [526] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_queryBodyStmts_repeat1, 2), SHIFT_REPEAT(63),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_queryBodyStmts_repeat1, 2),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_queryBodyStmts_repeat1, 2), SHIFT_REPEAT(43),
  [534] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_queryBodyStmts_repeat1, 2), SHIFT_REPEAT(52),
  [537] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_queryBodyStmts_repeat1, 2), SHIFT_REPEAT(100),
  [540] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_queryBodyStmts_repeat1, 2), SHIFT_REPEAT(43),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBodyStmts, 1),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [555] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(129),
  [558] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(129),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldName, 1),
  [603] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym_expr, 1), REDUCE(sym_setBagExpr, 1), REDUCE(sym_tableName, 1),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [613] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(155),
  [616] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(155),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printExpr, 1),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gAccumAccumStmt, 3),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argList, 1),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignStmt, 3),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vSetProj, 1),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignStmt, 5),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [663] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(185),
  [666] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(185),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argList_repeat1, 2),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [673] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(189),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_CREATE_VERTEX_repeat1, 5),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [698] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(205),
  [701] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(205),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mathOperator, 1),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mathOperator, 1),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [712] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_atomicVertexType, 1), REDUCE(sym_name, 1),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnStmt, 2),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparisonOperator, 1),
  [727] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparisonOperator, 1),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [737] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_atomicEdgeType, 1), REDUCE(sym_name, 1),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [744] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(221),
  [747] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(221),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [762] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(231),
  [765] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(231),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [772] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(236),
  [775] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(236),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stepVertexTypes_repeat1, 2),
  [780] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stepVertexTypes_repeat1, 2), SHIFT_REPEAT(229),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsqlSelectBlock, 2),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [789] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_seed, 1), REDUCE(sym_name, 1),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [794] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [796] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_queryBodyStmts_repeat1, 2),
  [798] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(246),
  [801] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(246),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepVertexTypes, 3),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepVertexTypes, 2),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 4),
  [816] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_paramName, 1), REDUCE(sym_vertexType, 1),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertexSetType, 1),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseType, 1),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertexSetName, 1),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setBagExpr, 1),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 7),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertexAlias, 1),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseType, 1, .production_id = 3),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumType, 9),
  [845] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumType, 9),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 9),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumType, 1),
  [857] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumType, 1),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumType, 10),
  [863] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumType, 10),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumType, 11),
  [869] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumType, 11),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumType, 4, .production_id = 5),
  [885] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumType, 4, .production_id = 5),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumType, 4),
  [889] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumType, 4),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumType, 6),
  [893] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumType, 6),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseType, 4),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseType, 1, .production_id = 2),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 5),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepVertexTypes, 1),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepVertexSet, 1),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pathPattern, 1),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [923] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(303),
  [926] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(303),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 6),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [941] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseType, 1, .production_id = 1),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 8),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pathPattern_repeat1, 2),
  [957] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pathPattern_repeat1, 2), SHIFT_REPEAT(646),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [962] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomicVertexType, 1),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [968] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(456),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsqlSelectBlock, 3),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pathPattern, 2),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 10),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simpleSet, 1),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vExprSet, 4),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fromClause, 2),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepEdgeTypes, 2),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomicEdgeType, 1),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1003] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fromClause_repeat1, 2), SHIFT_REPEAT(149),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fromClause_repeat1, 2),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepVertexSet, 3),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsqlSelectBlock, 5),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tupleType, 1),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simpleSet, 3),
  [1028] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_simpleSet, 3), SHIFT(269),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fromClause, 3),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printStmt, 3),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsqlSelectBlock, 4),
  [1043] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepVertexSet, 2),
  [1045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gsqlSelectBlock_repeat1, 2),
  [1047] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gsqlSelectBlock_repeat1, 2), SHIFT_REPEAT(710),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printStmt, 2),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1056] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_printStmt_repeat1, 2), SHIFT_REPEAT(50),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_printStmt_repeat1, 2),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [1063] = {.entry = {.count = 1, .reusable = false}}, SHIFT(722),
  [1065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vExprSet, 5),
  [1067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pathPattern_repeat1, 6),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 11),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonKey, 1),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 12),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepEdgeTypes, 3),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vSetVarDeclStmt, 6),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1095] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_condition, 3), SHIFT(69),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accumType_repeat1, 2),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_paramName, 1), REDUCE(sym_edgeType, 1),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edgeSetType, 1),
  [1109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [1111] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stringLiteral_repeat1, 2),
  [1115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stringLiteral_repeat1, 2), SHIFT_REPEAT(436),
  [1118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stringLiteral_repeat1, 2), SHIFT_REPEAT(436),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stepEdgeTypes_repeat1, 2),
  [1123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stepEdgeTypes_repeat1, 2), SHIFT_REPEAT(230),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_condition, 3), SHIFT(77),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printStmt, 4),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [1139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [1145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_VERTEX, 8, .production_id = 4),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [1151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printExpr, 3),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dmlSubStmtList, 2),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterList, 2),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dmlSubStmtList_repeat1, 2), SHIFT_REPEAT(222),
  [1168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dmlSubStmtList_repeat1, 2),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumDeclStmt, 2),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphName, 1),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseDeclStmt, 2),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumDeclStmt, 3),
  [1190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dmlSubStmtList, 1),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_whereClause, 2),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [1210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [1212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printStmt, 5),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vSetVarDeclStmt, 3),
  [1218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_VERTEX, 7, .production_id = 4),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumDeclStmt, 6),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterType, 4),
  [1228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returns, 4),
  [1230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterList, 5),
  [1232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameterList_repeat1, 3),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertexType, 1),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tupleFields_repeat1, 2), SHIFT_REPEAT(148),
  [1249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tupleFields_repeat1, 2),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterType, 1),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_condition, 3), SHIFT(67),
  [1264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseDeclStmt, 3),
  [1266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paramName, 1),
  [1268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_VERTEX, 6, .production_id = 4),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumDeclStmt, 4),
  [1276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_perClauseV2_repeat1, 2),
  [1278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_perClauseV2_repeat1, 2), SHIFT_REPEAT(271),
  [1281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argList, 2),
  [1283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_condition, 3), SHIFT(72),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filePath, 1),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accumDeclStmt_repeat1, 2),
  [1300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accumDeclStmt_repeat1, 2), SHIFT_REPEAT(573),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_VERTEX, 10, .production_id = 4),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_paramName, 1), REDUCE(sym_vertexSetName, 1),
  [1314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseDeclStmt, 4),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_baseDeclStmt_repeat1, 2),
  [1320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseDeclStmt_repeat1, 2), SHIFT_REPEAT(463),
  [1323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterType, 3),
  [1325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterList, 3),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_CREATE_VERTEX_repeat1, 2),
  [1331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_CREATE_VERTEX_repeat1, 2), SHIFT_REPEAT(446),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tupleFields, 2),
  [1338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumDeclStmt, 5),
  [1340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argList_repeat1, 2), SHIFT_REPEAT(101),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_VERTEX, 11, .production_id = 4),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [1353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dmlSubStmt, 1),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseDeclStmt, 5),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_queryBodyIfStmt_repeat1, 5), SHIFT(135),
  [1364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_queryBodyIfStmt_repeat1, 5), SHIFT(647),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterList, 4),
  [1371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameterList_repeat1, 2),
  [1373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameterList_repeat1, 2), SHIFT_REPEAT(147),
  [1376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_CREATE_VERTEX_repeat1, 3),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tupleFields, 3),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_queryBodyIfStmt_repeat1, 2), SHIFT_REPEAT(721),
  [1389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_queryBodyIfStmt_repeat1, 2),
  [1391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vExprSet_repeat1, 2), SHIFT_REPEAT(76),
  [1394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vExprSet_repeat1, 2),
  [1396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seedSet_repeat1, 2),
  [1398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seedSet_repeat1, 2), SHIFT_REPEAT(199),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accumType_repeat1, 2), SHIFT_REPEAT(401),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectVertParams, 11),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomicEdgePattern, 1),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 13),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postAccumClause, 3),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_VERTEX, 13, .production_id = 4),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accumType_repeat1, 3),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_queryBodyIfStmt_repeat1, 5),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createQuery, 4),
  [1452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 14),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_VERTEX, 14, .production_id = 4),
  [1458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementType, 1),
  [1460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 15),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_perClauseV2, 4),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 16),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomicEdgePattern, 2),
  [1480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_perClauseV2, 5),
  [1482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementType, 2),
  [1484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepEdgeSet, 1),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 17),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed, 1),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepEdgeTypes, 1),
  [1498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectVertParams, 16),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tupleFields_repeat1, 3),
  [1504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accumDeclStmt_repeat1, 4),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vSetProj, 3),
  [1512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_baseDeclStmt_repeat1, 4),
  [1514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumClause, 3),
  [1516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_vertexAlias, 1), REDUCE(sym_edgeAlias, 1),
  [1519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 1),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_id_name_type, 3),
  [1525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameterList_repeat1, 5),
  [1527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed, 2),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printStmt, 6),
  [1533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBodyIfStmt, 6),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1539] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_paramName, 1), REDUCE(sym_varName, 1),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 6),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_columnId, 2),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simpleSize, 1),
  [1572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seedSet, 3),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fileDeclStmt, 5),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBodyIfStmt, 5),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepEdgeSet, 3),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pathEdgePattern, 3),
  [1598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntaxName, 1),
  [1600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBodyIfStmt, 8),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seedSet, 4),
  [1612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsqlSelectClause, 4),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 19),
  [1624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seedSet, 2),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1640] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_fileVar, 1), REDUCE(sym_paramName, 1),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pathEdgePattern, 1),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attrName, 1),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 18),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edgeAlias, 1),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepEdgeSet, 2),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printStmt, 7),
  [1693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBody, 3),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1699] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [1703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [1717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBodyIfStmt, 7),
  [1719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBody, 2),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [1727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fileVar, 1),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectStmt, 1),
  [1751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBodyStmt, 1),
  [1753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declStmt, 1),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBody, 1),
  [1759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryName, 1),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
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
