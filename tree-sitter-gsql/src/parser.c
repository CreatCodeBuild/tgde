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
#define STATE_COUNT 770
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 234
#define ALIAS_COUNT 5
#define TOKEN_COUNT 117
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
  anon_sym_SET = 114,
  anon_sym_BAG = 115,
  anon_sym_FILE = 116,
  sym_source_file = 117,
  sym_createQuery = 118,
  sym_createSignature = 119,
  sym_returns = 120,
  sym_parameterList = 121,
  sym_syntaxName = 122,
  sym_queryBody = 123,
  sym_typedefs = 124,
  sym_typedef = 125,
  sym_tupleFields = 126,
  sym_declStmts = 127,
  sym_declStmt = 128,
  sym_queryBodyStmts = 129,
  sym_queryBodyStmt = 130,
  sym_constant = 131,
  sym_mathOperator = 132,
  sym_condition = 133,
  sym_comparisonOperator = 134,
  sym_pathPattern = 135,
  sym_pathEdgePattern = 136,
  sym_atomicEdgePattern = 137,
  sym_CREATE_VERTEX = 138,
  sym_primary_id_name_type = 139,
  sym_accumDeclStmt = 140,
  sym_localAccumName = 141,
  sym_globalAccumName = 142,
  sym_accumType = 143,
  sym_elementType = 144,
  sym_gAccumAccumStmt = 145,
  sym_assignStmt = 146,
  sym_argList = 147,
  sym_queryBodyIfStmt = 148,
  sym_simpleSize = 149,
  sym_baseDeclStmt = 150,
  sym_fileDeclStmt = 151,
  sym_fileVar = 152,
  sym_vSetVarDeclStmt = 153,
  sym_simpleSet = 154,
  sym_seedSet = 155,
  sym_seed = 156,
  sym_selectVertParams = 157,
  sym_columnId = 158,
  sym_expr = 159,
  sym_setBagExpr = 160,
  sym_printStmt = 161,
  sym_printExpr = 162,
  sym_vExprSet = 163,
  sym_vSetProj = 164,
  sym_jsonKey = 165,
  sym_returnStmt = 166,
  sym_selectStmt = 167,
  sym_gsqlSelectBlock = 168,
  sym_gsqlSelectClause = 169,
  sym_tableName = 170,
  sym_fromClause = 171,
  sym_stepEdgeSet = 172,
  sym_stepVertexSet = 173,
  sym_alias = 174,
  sym_vertexAlias = 175,
  sym_edgeAlias = 176,
  sym_stepEdgeTypes = 177,
  sym_atomicEdgeType = 178,
  sym_edgeSetType = 179,
  sym_stepVertexTypes = 180,
  sym_atomicVertexType = 181,
  sym_vertexSetType = 182,
  sym_whereClause = 183,
  sym_accumClause = 184,
  sym_postAccumClause = 185,
  sym_perClauseV2 = 186,
  sym_dmlSubStmtList = 187,
  sym_dmlSubStmt = 188,
  sym_stringLiteral = 189,
  sym_integer = 190,
  sym_real = 191,
  sym_numeric = 192,
  sym_name = 193,
  sym_graphName = 194,
  sym_queryName = 195,
  sym_paramName = 196,
  sym_vertexType = 197,
  sym_edgeType = 198,
  sym_accumName = 199,
  sym_vertexSetName = 200,
  sym_attrName = 201,
  sym_varName = 202,
  sym_tupleType = 203,
  sym_fieldName = 204,
  sym_filePath = 205,
  sym_type = 206,
  sym_baseType = 207,
  sym_parameterType = 208,
  aux_sym_source_file_repeat1 = 209,
  aux_sym_parameterList_repeat1 = 210,
  aux_sym_typedefs_repeat1 = 211,
  aux_sym_tupleFields_repeat1 = 212,
  aux_sym_declStmts_repeat1 = 213,
  aux_sym_queryBodyStmts_repeat1 = 214,
  aux_sym_pathPattern_repeat1 = 215,
  aux_sym_CREATE_VERTEX_repeat1 = 216,
  aux_sym_accumDeclStmt_repeat1 = 217,
  aux_sym_accumType_repeat1 = 218,
  aux_sym_argList_repeat1 = 219,
  aux_sym_queryBodyIfStmt_repeat1 = 220,
  aux_sym_baseDeclStmt_repeat1 = 221,
  aux_sym_seedSet_repeat1 = 222,
  aux_sym_printStmt_repeat1 = 223,
  aux_sym_vExprSet_repeat1 = 224,
  aux_sym_gsqlSelectBlock_repeat1 = 225,
  aux_sym_fromClause_repeat1 = 226,
  aux_sym_stepEdgeTypes_repeat1 = 227,
  aux_sym_stepVertexTypes_repeat1 = 228,
  aux_sym_perClauseV2_repeat1 = 229,
  aux_sym_dmlSubStmtList_repeat1 = 230,
  aux_sym_stringLiteral_repeat1 = 231,
  aux_sym_integer_repeat1 = 232,
  aux_sym_name_repeat1 = 233,
  anon_alias_sym_CREATE = 234,
  anon_alias_sym_DOUBLE = 235,
  anon_alias_sym_FLOAT = 236,
  anon_alias_sym_INT = 237,
  anon_alias_sym_string = 238,
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
  [aux_sym_baseType_token1] = "BOOL",
  [aux_sym_baseType_token2] = "EDGE",
  [aux_sym_baseType_token3] = "JSONOBJECT",
  [aux_sym_baseType_token4] = "JSONARRAY",
  [aux_sym_baseType_token5] = "DATETIME",
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
      if (eof) ADVANCE(447);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\r') SKIP(444)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '"') ADVANCE(557);
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '$') ADVANCE(540);
      if (lookahead == '%') ADVANCE(476);
      if (lookahead == '&') ADVANCE(483);
      if (lookahead == '\'') ADVANCE(541);
      if (lookahead == '(') ADVANCE(455);
      if (lookahead == ')') ADVANCE(456);
      if (lookahead == '*') ADVANCE(474);
      if (lookahead == '+') ADVANCE(478);
      if (lookahead == ',') ADVANCE(464);
      if (lookahead == '-') ADVANCE(480);
      if (lookahead == '.') ADVANCE(526);
      if (lookahead == '/') ADVANCE(475);
      if (lookahead == ':') ADVANCE(552);
      if (lookahead == ';') ADVANCE(465);
      if (lookahead == '<') ADVANCE(469);
      if (lookahead == '=') ADVANCE(463);
      if (lookahead == '>') ADVANCE(471);
      if (lookahead == '@') ADVANCE(507);
      if (lookahead == 'A') ADVANCE(622);
      if (lookahead == 'B') ADVANCE(664);
      if (lookahead == 'D') ADVANCE(628);
      if (lookahead == 'E') ADVANCE(635);
      if (lookahead == 'F') ADVANCE(631);
      if (lookahead == 'H') ADVANCE(636);
      if (lookahead == 'I') ADVANCE(648);
      if (lookahead == 'J') ADVANCE(672);
      if (lookahead == 'L') ADVANCE(654);
      if (lookahead == 'M') ADVANCE(633);
      if (lookahead == 'N') ADVANCE(666);
      if (lookahead == 'O') ADVANCE(625);
      if (lookahead == 'P') ADVANCE(638);
      if (lookahead == 'R') ADVANCE(641);
      if (lookahead == 'S') ADVANCE(627);
      if (lookahead == 'T') ADVANCE(651);
      if (lookahead == 'U') ADVANCE(661);
      if (lookahead == 'V') ADVANCE(639);
      if (lookahead == 'W') ADVANCE(620);
      if (lookahead == '[') ADVANCE(546);
      if (lookahead == '\\') ADVANCE(88);
      if (lookahead == ']') ADVANCE(547);
      if (lookahead == '_') ADVANCE(535);
      if (lookahead == 'a') ADVANCE(600);
      if (lookahead == 'b') ADVANCE(606);
      if (lookahead == 'd') ADVANCE(568);
      if (lookahead == 'e') ADVANCE(575);
      if (lookahead == 'f') ADVANCE(571);
      if (lookahead == 'h') ADVANCE(576);
      if (lookahead == 'i') ADVANCE(589);
      if (lookahead == 'j') ADVANCE(614);
      if (lookahead == 'l') ADVANCE(595);
      if (lookahead == 'm') ADVANCE(573);
      if (lookahead == 'n') ADVANCE(608);
      if (lookahead == 'p') ADVANCE(578);
      if (lookahead == 'r') ADVANCE(582);
      if (lookahead == 's') ADVANCE(579);
      if (lookahead == 't') ADVANCE(592);
      if (lookahead == 'u') ADVANCE(603);
      if (lookahead == 'v') ADVANCE(580);
      if (lookahead == 'w') ADVANCE(593);
      if (lookahead == '{') ADVANCE(448);
      if (lookahead == '|') ADVANCE(484);
      if (lookahead == '}') ADVANCE(449);
      if (('C' <= lookahead && lookahead <= 'Z')) ADVANCE(618);
      if (('c' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(566);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(400)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(401)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(402)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(403)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(404)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(405)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(406)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(407)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(408)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(409)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(410)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(411)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(412)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(413)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(414)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(415)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(416)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(417)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(418)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(419)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(420)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(421)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(422)
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(423)
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(424)
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(425)
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(426)
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(427)
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(428)
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(429)
      END_STATE();
    case 31:
      if (lookahead == '\n') SKIP(430)
      END_STATE();
    case 32:
      if (lookahead == '\n') SKIP(431)
      END_STATE();
    case 33:
      if (lookahead == '\n') SKIP(432)
      END_STATE();
    case 34:
      if (lookahead == '\n') SKIP(433)
      END_STATE();
    case 35:
      if (lookahead == '\n') SKIP(434)
      END_STATE();
    case 36:
      if (lookahead == '\n') SKIP(435)
      END_STATE();
    case 37:
      if (lookahead == '"') ADVANCE(501);
      END_STATE();
    case 38:
      if (lookahead == '"') ADVANCE(504);
      END_STATE();
    case 39:
      if (lookahead == '"') ADVANCE(502);
      END_STATE();
    case 40:
      if (lookahead == '*') ADVANCE(42);
      if (lookahead == '/') ADVANCE(496);
      END_STATE();
    case 41:
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '/') ADVANCE(495);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == '*') ADVANCE(41);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == '*') ADVANCE(537);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(164);
      END_STATE();
    case 45:
      if (lookahead == '<') ADVANCE(481);
      END_STATE();
    case 46:
      if (lookahead == '=') ADVANCE(494);
      END_STATE();
    case 47:
      if (lookahead == '=') ADVANCE(525);
      END_STATE();
    case 48:
      if (lookahead == '=') ADVANCE(493);
      END_STATE();
    case 49:
      if (lookahead == '>') ADVANCE(482);
      END_STATE();
    case 50:
      if (lookahead == '@') ADVANCE(508);
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
          lookahead == 'o') ADVANCE(304);
      END_STATE();
    case 54:
      if (lookahead == 'D') ADVANCE(489);
      END_STATE();
    case 55:
      if (lookahead == 'D') ADVANCE(489);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(536);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(80);
      if (lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(553);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(553);
      if (lookahead == 'e') ADVANCE(543);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(87);
      if (lookahead == 'e') ADVANCE(310);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(683);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(85);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(328);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(78);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(82);
      END_STATE();
    case 64:
      if (lookahead == 'G') ADVANCE(682);
      END_STATE();
    case 65:
      if (lookahead == 'H') ADVANCE(458);
      END_STATE();
    case 66:
      if (lookahead == 'H') ADVANCE(63);
      END_STATE();
    case 67:
      if (lookahead == 'I') ADVANCE(459);
      END_STATE();
    case 68:
      if (lookahead == 'I') ADVANCE(69);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(305);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(303);
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
          lookahead == 's') ADVANCE(545);
      END_STATE();
    case 72:
      if (lookahead == 'N') ADVANCE(54);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(545);
      END_STATE();
    case 73:
      if (lookahead == 'N') ADVANCE(83);
      END_STATE();
    case 74:
      if (lookahead == 'O') ADVANCE(77);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(270);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(271);
      END_STATE();
    case 75:
      if (lookahead == 'P') ADVANCE(65);
      END_STATE();
    case 76:
      if (lookahead == 'R') ADVANCE(490);
      END_STATE();
    case 77:
      if (lookahead == 'R') ADVANCE(457);
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
      if (lookahead == 'S') ADVANCE(461);
      END_STATE();
    case 84:
      if (lookahead == 'T') ADVANCE(51);
      END_STATE();
    case 85:
      if (lookahead == 'T') ADVANCE(681);
      END_STATE();
    case 86:
      if (lookahead == 'T') ADVANCE(90);
      END_STATE();
    case 87:
      if (lookahead == 'T') ADVANCE(90);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(263);
      END_STATE();
    case 88:
      if (lookahead == 'U') ADVANCE(443);
      if (lookahead == 'u') ADVANCE(439);
      if (lookahead == 'x') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(565);
      if (lookahead != 0) ADVANCE(563);
      END_STATE();
    case 89:
      if (lookahead == 'U') ADVANCE(62);
      END_STATE();
    case 90:
      if (lookahead == 'U') ADVANCE(79);
      END_STATE();
    case 91:
      if (lookahead == 'X') ADVANCE(460);
      END_STATE();
    case 92:
      if (lookahead == 'Y') ADVANCE(70);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(157);
      END_STATE();
    case 93:
      if (lookahead == 'Y') ADVANCE(454);
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
      if (lookahead == 'e') ADVANCE(503);
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
          lookahead == 'e') ADVANCE(316);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(347);
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
          lookahead == ' ') ADVANCE(561);
      if (lookahead == '\n') SKIP(434)
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '"') ADVANCE(557);
      if (lookahead == '#') ADVANCE(562);
      if (lookahead == '/') ADVANCE(558);
      if (lookahead == '\\') ADVANCE(88);
      if (lookahead != 0) ADVANCE(562);
      END_STATE();
    case 146:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(362);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(238);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(348);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(378);
      END_STATE();
    case 147:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(270);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(271);
      END_STATE();
    case 148:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(398);
      END_STATE();
    case 149:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(315);
      END_STATE();
    case 150:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 151:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(361);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 152:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(380);
      END_STATE();
    case 153:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(321);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 154:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(351);
      END_STATE();
    case 155:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 156:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(319);
      END_STATE();
    case 157:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(365);
      END_STATE();
    case 158:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(369);
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
          lookahead == 'b') ADVANCE(257);
      END_STATE();
    case 167:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(392);
      END_STATE();
    case 168:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(268);
      END_STATE();
    case 169:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(521);
      END_STATE();
    case 170:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(506);
      END_STATE();
    case 171:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(520);
      END_STATE();
    case 172:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(336);
      END_STATE();
    case 173:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(174);
      END_STATE();
    case 174:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(382);
      END_STATE();
    case 175:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(383);
      END_STATE();
    case 176:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(384);
      END_STATE();
    case 177:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(353);
      END_STATE();
    case 178:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(385);
      END_STATE();
    case 179:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(386);
      END_STATE();
    case 180:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(355);
      END_STATE();
    case 181:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(388);
      END_STATE();
    case 182:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(389);
      END_STATE();
    case 183:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(390);
      END_STATE();
    case 184:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(391);
      END_STATE();
    case 185:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(360);
      END_STATE();
    case 186:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(359);
      END_STATE();
    case 187:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(217);
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
          lookahead == 'c') ADVANCE(178);
      END_STATE();
    case 191:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(179);
      END_STATE();
    case 192:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(181);
      END_STATE();
    case 193:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(182);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(545);
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
          lookahead == 'c') ADVANCE(308);
      END_STATE();
    case 197:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(241);
      END_STATE();
    case 198:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(530);
      END_STATE();
    case 199:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(453);
      END_STATE();
    case 200:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(505);
      END_STATE();
    case 201:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(213);
      END_STATE();
    case 202:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 203:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(316);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(347);
      END_STATE();
    case 204:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(316);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(255);
      END_STATE();
    case 205:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(677);
      END_STATE();
    case 206:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(529);
      END_STATE();
    case 207:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(531);
      END_STATE();
    case 208:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(472);
      END_STATE();
    case 209:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(473);
      END_STATE();
    case 210:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(395);
      END_STATE();
    case 211:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(543);
      END_STATE();
    case 212:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(512);
      END_STATE();
    case 213:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 214:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(680);
      END_STATE();
    case 215:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(467);
      END_STATE();
    case 216:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(450);
      END_STATE();
    case 217:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(452);
      END_STATE();
    case 218:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 219:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 220:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 221:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 222:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 223:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(310);
      END_STATE();
    case 224:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 225:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 226:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(364);
      END_STATE();
    case 227:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 228:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 229:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(344);
      END_STATE();
    case 230:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 231:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 232:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 233:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 234:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 235:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(332);
      END_STATE();
    case 236:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(466);
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
          lookahead == 'g') ADVANCE(513);
      END_STATE();
    case 240:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(514);
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
          lookahead == 'r') ADVANCE(387);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(312);
      END_STATE();
    case 244:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(499);
      END_STATE();
    case 245:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(222);
      END_STATE();
    case 246:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(222);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(356);
      END_STATE();
    case 247:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(296);
      END_STATE();
    case 248:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(285);
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
          lookahead == 'i') ADVANCE(306);
      END_STATE();
    case 252:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(293);
      END_STATE();
    case 253:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 254:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(295);
      END_STATE();
    case 255:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(284);
      END_STATE();
    case 256:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(348);
      END_STATE();
    case 257:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(231);
      END_STATE();
    case 258:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(676);
      END_STATE();
    case 259:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(488);
      END_STATE();
    case 260:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(305);
      END_STATE();
    case 261:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(305);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(303);
      END_STATE();
    case 262:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(207);
      END_STATE();
    case 263:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(155);
      END_STATE();
    case 264:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(225);
      END_STATE();
    case 265:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(225);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(160);
      END_STATE();
    case 266:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(259);
      END_STATE();
    case 267:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(354);
      END_STATE();
    case 268:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(212);
      END_STATE();
    case 269:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(215);
      END_STATE();
    case 270:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(345);
      END_STATE();
    case 271:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(372);
      END_STATE();
    case 272:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(233);
      END_STATE();
    case 273:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(550);
      END_STATE();
    case 274:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(517);
      END_STATE();
    case 275:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(518);
      END_STATE();
    case 276:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(523);
      END_STATE();
    case 277:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(509);
      END_STATE();
    case 278:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(519);
      END_STATE();
    case 279:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(522);
      END_STATE();
    case 280:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(554);
      END_STATE();
    case 281:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(555);
      END_STATE();
    case 282:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(516);
      END_STATE();
    case 283:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(313);
      END_STATE();
    case 284:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(156);
      END_STATE();
    case 285:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(214);
      END_STATE();
    case 286:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(314);
      END_STATE();
    case 287:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(161);
      END_STATE();
    case 288:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(486);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(487);
      END_STATE();
    case 289:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 290:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(528);
      END_STATE();
    case 291:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(532);
      END_STATE();
    case 292:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(548);
      END_STATE();
    case 293:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(239);
      END_STATE();
    case 294:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(379);
      END_STATE();
    case 295:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(240);
      END_STATE();
    case 296:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(352);
      END_STATE();
    case 297:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(358);
      END_STATE();
    case 298:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(304);
      END_STATE();
    case 299:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(378);
      END_STATE();
    case 300:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(350);
      END_STATE();
    case 301:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(350);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(266);
      END_STATE();
    case 302:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(289);
      END_STATE();
    case 303:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(273);
      END_STATE();
    case 304:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(258);
      END_STATE();
    case 305:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 306:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(291);
      END_STATE();
    case 307:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(283);
      END_STATE();
    case 308:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(286);
      END_STATE();
    case 309:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(150);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(159);
      END_STATE();
    case 310:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(263);
      END_STATE();
    case 311:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(218);
      END_STATE();
    case 312:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(269);
      END_STATE();
    case 313:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(326);
      END_STATE();
    case 314:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(329);
      END_STATE();
    case 315:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(162);
      END_STATE();
    case 316:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(556);
      END_STATE();
    case 317:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(539);
      END_STATE();
    case 318:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(451);
      END_STATE();
    case 319:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(399);
      END_STATE();
    case 320:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 321:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(320);
      END_STATE();
    case 322:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(249);
      END_STATE();
    case 323:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(292);
      END_STATE();
    case 324:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 325:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 326:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(229);
      END_STATE();
    case 327:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(368);
      END_STATE();
    case 328:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 329:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 330:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(349);
      END_STATE();
    case 331:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(254);
      END_STATE();
    case 332:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(371);
      END_STATE();
    case 333:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(545);
      END_STATE();
    case 334:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(169);
      END_STATE();
    case 335:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(534);
      END_STATE();
    case 336:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(393);
      END_STATE();
    case 337:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(500);
      END_STATE();
    case 338:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(524);
      END_STATE();
    case 339:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(515);
      END_STATE();
    case 340:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(302);
      END_STATE();
    case 341:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(377);
      END_STATE();
    case 342:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(206);
      END_STATE();
    case 343:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(171);
      END_STATE();
    case 344:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(338);
      END_STATE();
    case 345:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(209);
      END_STATE();
    case 346:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(339);
      END_STATE();
    case 347:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(357);
      END_STATE();
    case 348:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(366);
      END_STATE();
    case 349:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(234);
      END_STATE();
    case 350:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(485);
      END_STATE();
    case 351:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(511);
      END_STATE();
    case 352:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(542);
      END_STATE();
    case 353:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(549);
      END_STATE();
    case 354:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(498);
      END_STATE();
    case 355:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(678);
      END_STATE();
    case 356:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(244);
      END_STATE();
    case 357:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(44);
      END_STATE();
    case 358:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(510);
      END_STATE();
    case 359:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(533);
      END_STATE();
    case 360:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(394);
      END_STATE();
    case 361:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(253);
      END_STATE();
    case 362:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(226);
      END_STATE();
    case 363:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(381);
      END_STATE();
    case 364:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(248);
      END_STATE();
    case 365:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(337);
      END_STATE();
    case 366:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(322);
      END_STATE();
    case 367:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(328);
      END_STATE();
    case 368:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(210);
      END_STATE();
    case 369:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(216);
      END_STATE();
    case 370:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(221);
      END_STATE();
    case 371:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(220);
      END_STATE();
    case 372:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(228);
      END_STATE();
    case 373:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(157);
      END_STATE();
    case 374:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(230);
      END_STATE();
    case 375:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(331);
      END_STATE();
    case 376:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(160);
      END_STATE();
    case 377:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(163);
      END_STATE();
    case 378:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(168);
      END_STATE();
    case 379:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(335);
      END_STATE();
    case 380:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(267);
      END_STATE();
    case 381:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(323);
      END_STATE();
    case 382:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(274);
      END_STATE();
    case 383:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(275);
      END_STATE();
    case 384:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(276);
      END_STATE();
    case 385:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(277);
      END_STATE();
    case 386:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(278);
      END_STATE();
    case 387:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(208);
      END_STATE();
    case 388:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(279);
      END_STATE();
    case 389:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(280);
      END_STATE();
    case 390:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(281);
      END_STATE();
    case 391:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(282);
      END_STATE();
    case 392:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(370);
      END_STATE();
    case 393:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(544);
      END_STATE();
    case 394:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(235);
      END_STATE();
    case 395:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(497);
      END_STATE();
    case 396:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(538);
      END_STATE();
    case 397:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(536);
      END_STATE();
    case 398:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(679);
      END_STATE();
    case 399:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(100);
      END_STATE();
    case 400:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(400)
      if (lookahead == '\r') SKIP(1)
      if (lookahead == '"') ADVANCE(124);
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '%') ADVANCE(476);
      if (lookahead == '&') ADVANCE(483);
      if (lookahead == '(') ADVANCE(455);
      if (lookahead == ')') ADVANCE(456);
      if (lookahead == '*') ADVANCE(474);
      if (lookahead == '+') ADVANCE(477);
      if (lookahead == ',') ADVANCE(464);
      if (lookahead == '-') ADVANCE(479);
      if (lookahead == '.') ADVANCE(526);
      if (lookahead == '/') ADVANCE(475);
      if (lookahead == ';') ADVANCE(465);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '=') ADVANCE(462);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == 'B') ADVANCE(664);
      if (lookahead == 'D') ADVANCE(629);
      if (lookahead == 'E') ADVANCE(634);
      if (lookahead == 'F') ADVANCE(655);
      if (lookahead == 'H') ADVANCE(636);
      if (lookahead == 'I') ADVANCE(649);
      if (lookahead == 'J') ADVANCE(672);
      if (lookahead == 'L') ADVANCE(654);
      if (lookahead == 'M') ADVANCE(632);
      if (lookahead == 'O') ADVANCE(670);
      if (lookahead == 'P') ADVANCE(667);
      if (lookahead == 'R') ADVANCE(641);
      if (lookahead == 'S') ADVANCE(645);
      if (lookahead == 'T') ADVANCE(675);
      if (lookahead == 'V') ADVANCE(639);
      if (lookahead == '_') ADVANCE(535);
      if (lookahead == 'b') ADVANCE(606);
      if (lookahead == 'd') ADVANCE(569);
      if (lookahead == 'e') ADVANCE(574);
      if (lookahead == 'f') ADVANCE(596);
      if (lookahead == 'h') ADVANCE(576);
      if (lookahead == 'i') ADVANCE(590);
      if (lookahead == 'j') ADVANCE(614);
      if (lookahead == 'l') ADVANCE(595);
      if (lookahead == 'm') ADVANCE(572);
      if (lookahead == 'o') ADVANCE(612);
      if (lookahead == 'p') ADVANCE(609);
      if (lookahead == 'r') ADVANCE(582);
      if (lookahead == 's') ADVANCE(586);
      if (lookahead == 't') ADVANCE(617);
      if (lookahead == 'v') ADVANCE(580);
      if (lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(618);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 401:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(401)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == ')') ADVANCE(456);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == ',') ADVANCE(464);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == ':') ADVANCE(552);
      if (lookahead == '>') ADVANCE(470);
      if (lookahead == 'B') ADVANCE(664);
      if (lookahead == 'D') ADVANCE(629);
      if (lookahead == 'E') ADVANCE(634);
      if (lookahead == 'F') ADVANCE(655);
      if (lookahead == 'H') ADVANCE(636);
      if (lookahead == 'I') ADVANCE(649);
      if (lookahead == 'J') ADVANCE(672);
      if (lookahead == 'L') ADVANCE(654);
      if (lookahead == 'M') ADVANCE(632);
      if (lookahead == 'O') ADVANCE(670);
      if (lookahead == 'P') ADVANCE(667);
      if (lookahead == 'R') ADVANCE(641);
      if (lookahead == 'S') ADVANCE(645);
      if (lookahead == 'V') ADVANCE(639);
      if (lookahead == '_') ADVANCE(535);
      if (lookahead == 'b') ADVANCE(606);
      if (lookahead == 'd') ADVANCE(569);
      if (lookahead == 'e') ADVANCE(574);
      if (lookahead == 'f') ADVANCE(596);
      if (lookahead == 'h') ADVANCE(576);
      if (lookahead == 'i') ADVANCE(590);
      if (lookahead == 'j') ADVANCE(614);
      if (lookahead == 'l') ADVANCE(595);
      if (lookahead == 'm') ADVANCE(572);
      if (lookahead == 'o') ADVANCE(612);
      if (lookahead == 'p') ADVANCE(609);
      if (lookahead == 'r') ADVANCE(582);
      if (lookahead == 's') ADVANCE(586);
      if (lookahead == 'v') ADVANCE(580);
      if (lookahead == '|') ADVANCE(484);
      if (lookahead == '}') ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(618);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 402:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(402)
      if (lookahead == '\r') SKIP(3)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '%') ADVANCE(476);
      if (lookahead == '&') ADVANCE(483);
      if (lookahead == '\'') ADVANCE(541);
      if (lookahead == ')') ADVANCE(456);
      if (lookahead == '*') ADVANCE(474);
      if (lookahead == '+') ADVANCE(477);
      if (lookahead == ',') ADVANCE(464);
      if (lookahead == '-') ADVANCE(479);
      if (lookahead == '.') ADVANCE(526);
      if (lookahead == '/') ADVANCE(475);
      if (lookahead == ';') ADVANCE(465);
      if (lookahead == '<') ADVANCE(469);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(471);
      if (lookahead == 'A') ADVANCE(72);
      if (lookahead == 'O') ADVANCE(76);
      if (lookahead == '[') ADVANCE(546);
      if (lookahead == ']') ADVANCE(547);
      if (lookahead == 'a') ADVANCE(333);
      if (lookahead == '|') ADVANCE(484);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(288);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(300);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(204);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(242);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(566);
      END_STATE();
    case 403:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(403)
      if (lookahead == '\r') SKIP(4)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '%') ADVANCE(476);
      if (lookahead == '&') ADVANCE(483);
      if (lookahead == '\'') ADVANCE(541);
      if (lookahead == ')') ADVANCE(456);
      if (lookahead == '*') ADVANCE(474);
      if (lookahead == '+') ADVANCE(477);
      if (lookahead == ',') ADVANCE(464);
      if (lookahead == '-') ADVANCE(479);
      if (lookahead == '/') ADVANCE(475);
      if (lookahead == ';') ADVANCE(465);
      if (lookahead == '<') ADVANCE(469);
      if (lookahead == '=') ADVANCE(463);
      if (lookahead == '>') ADVANCE(471);
      if (lookahead == 'A') ADVANCE(72);
      if (lookahead == 'O') ADVANCE(76);
      if (lookahead == '[') ADVANCE(546);
      if (lookahead == ']') ADVANCE(547);
      if (lookahead == 'a') ADVANCE(333);
      if (lookahead == '|') ADVANCE(484);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(288);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(300);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(202);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(242);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(245);
      END_STATE();
    case 404:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(404)
      if (lookahead == '\r') SKIP(5)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '%') ADVANCE(476);
      if (lookahead == '&') ADVANCE(483);
      if (lookahead == '\'') ADVANCE(541);
      if (lookahead == '*') ADVANCE(474);
      if (lookahead == '+') ADVANCE(477);
      if (lookahead == '-') ADVANCE(479);
      if (lookahead == '.') ADVANCE(526);
      if (lookahead == '/') ADVANCE(475);
      if (lookahead == ';') ADVANCE(465);
      if (lookahead == '<') ADVANCE(469);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(471);
      if (lookahead == 'A') ADVANCE(623);
      if (lookahead == 'I') ADVANCE(660);
      if (lookahead == 'N') ADVANCE(666);
      if (lookahead == 'O') ADVANCE(625);
      if (lookahead == 'T') ADVANCE(665);
      if (lookahead == '_') ADVANCE(535);
      if (lookahead == 'i') ADVANCE(602);
      if (lookahead == 'n') ADVANCE(608);
      if (lookahead == 't') ADVANCE(607);
      if (lookahead == '|') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(566);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(618);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 405:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(405)
      if (lookahead == '\r') SKIP(6)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '%') ADVANCE(476);
      if (lookahead == '&') ADVANCE(483);
      if (lookahead == '\'') ADVANCE(541);
      if (lookahead == '*') ADVANCE(474);
      if (lookahead == '+') ADVANCE(477);
      if (lookahead == '-') ADVANCE(479);
      if (lookahead == '.') ADVANCE(526);
      if (lookahead == '/') ADVANCE(475);
      if (lookahead == ';') ADVANCE(465);
      if (lookahead == '<') ADVANCE(469);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(471);
      if (lookahead == 'A') ADVANCE(623);
      if (lookahead == 'I') ADVANCE(660);
      if (lookahead == 'N') ADVANCE(666);
      if (lookahead == 'O') ADVANCE(625);
      if (lookahead == 'P') ADVANCE(637);
      if (lookahead == '_') ADVANCE(535);
      if (lookahead == 'i') ADVANCE(602);
      if (lookahead == 'n') ADVANCE(608);
      if (lookahead == 'p') ADVANCE(577);
      if (lookahead == '|') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(566);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(618);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 406:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(406)
      if (lookahead == '\r') SKIP(7)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '%') ADVANCE(476);
      if (lookahead == '&') ADVANCE(483);
      if (lookahead == '\'') ADVANCE(541);
      if (lookahead == ')') ADVANCE(456);
      if (lookahead == '*') ADVANCE(474);
      if (lookahead == '+') ADVANCE(477);
      if (lookahead == '-') ADVANCE(479);
      if (lookahead == '.') ADVANCE(526);
      if (lookahead == '/') ADVANCE(475);
      if (lookahead == '<') ADVANCE(469);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(471);
      if (lookahead == 'A') ADVANCE(623);
      if (lookahead == 'I') ADVANCE(660);
      if (lookahead == 'N') ADVANCE(666);
      if (lookahead == 'O') ADVANCE(625);
      if (lookahead == '_') ADVANCE(535);
      if (lookahead == 'i') ADVANCE(602);
      if (lookahead == 'n') ADVANCE(608);
      if (lookahead == '|') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(566);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(618);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 407:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(407)
      if (lookahead == '\r') SKIP(8)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '%') ADVANCE(476);
      if (lookahead == '&') ADVANCE(483);
      if (lookahead == '\'') ADVANCE(541);
      if (lookahead == '*') ADVANCE(474);
      if (lookahead == '+') ADVANCE(477);
      if (lookahead == '-') ADVANCE(479);
      if (lookahead == '.') ADVANCE(526);
      if (lookahead == '/') ADVANCE(475);
      if (lookahead == '<') ADVANCE(469);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(471);
      if (lookahead == 'A') ADVANCE(623);
      if (lookahead == 'I') ADVANCE(660);
      if (lookahead == 'N') ADVANCE(666);
      if (lookahead == 'O') ADVANCE(625);
      if (lookahead == 'T') ADVANCE(650);
      if (lookahead == '_') ADVANCE(535);
      if (lookahead == 'i') ADVANCE(602);
      if (lookahead == 'n') ADVANCE(608);
      if (lookahead == 't') ADVANCE(591);
      if (lookahead == '|') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(566);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(618);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 408:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(408)
      if (lookahead == '\r') SKIP(9)
      if (lookahead == '"') ADVANCE(557);
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '$') ADVANCE(540);
      if (lookahead == '%') ADVANCE(476);
      if (lookahead == '&') ADVANCE(483);
      if (lookahead == '\'') ADVANCE(541);
      if (lookahead == '(') ADVANCE(455);
      if (lookahead == ')') ADVANCE(456);
      if (lookahead == '*') ADVANCE(474);
      if (lookahead == '+') ADVANCE(478);
      if (lookahead == ',') ADVANCE(464);
      if (lookahead == '-') ADVANCE(479);
      if (lookahead == '.') ADVANCE(526);
      if (lookahead == '/') ADVANCE(475);
      if (lookahead == ':') ADVANCE(552);
      if (lookahead == ';') ADVANCE(465);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '=') ADVANCE(462);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == '@') ADVANCE(507);
      if (lookahead == ']') ADVANCE(547);
      if (lookahead == '_') ADVANCE(535);
      if (lookahead == '{') ADVANCE(448);
      if (lookahead == '|') ADVANCE(484);
      if (lookahead == '}') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(566);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(618);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 409:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(409)
      if (lookahead == '\r') SKIP(10)
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == 'B') ADVANCE(664);
      if (lookahead == 'D') ADVANCE(629);
      if (lookahead == 'E') ADVANCE(634);
      if (lookahead == 'F') ADVANCE(657);
      if (lookahead == 'H') ADVANCE(636);
      if (lookahead == 'I') ADVANCE(662);
      if (lookahead == 'J') ADVANCE(672);
      if (lookahead == 'L') ADVANCE(654);
      if (lookahead == 'M') ADVANCE(632);
      if (lookahead == 'O') ADVANCE(670);
      if (lookahead == 'S') ADVANCE(646);
      if (lookahead == 'V') ADVANCE(639);
      if (lookahead == '_') ADVANCE(535);
      if (lookahead == 'b') ADVANCE(606);
      if (lookahead == 'd') ADVANCE(569);
      if (lookahead == 'e') ADVANCE(574);
      if (lookahead == 'f') ADVANCE(598);
      if (lookahead == 'h') ADVANCE(576);
      if (lookahead == 'i') ADVANCE(604);
      if (lookahead == 'j') ADVANCE(614);
      if (lookahead == 'l') ADVANCE(595);
      if (lookahead == 'm') ADVANCE(572);
      if (lookahead == 'o') ADVANCE(612);
      if (lookahead == 's') ADVANCE(587);
      if (lookahead == 'v') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(566);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(618);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 410:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(410)
      if (lookahead == '\r') SKIP(11)
      if (lookahead == '"') ADVANCE(557);
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '(') ADVANCE(455);
      if (lookahead == '-') ADVANCE(479);
      if (lookahead == '.') ADVANCE(526);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '@') ADVANCE(50);
      if (lookahead == 'F') ADVANCE(630);
      if (lookahead == 'T') ADVANCE(668);
      if (lookahead == '_') ADVANCE(535);
      if (lookahead == 'f') ADVANCE(570);
      if (lookahead == 't') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(566);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(618);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 411:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(411)
      if (lookahead == '\r') SKIP(12)
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '%') ADVANCE(476);
      if (lookahead == '&') ADVANCE(483);
      if (lookahead == '\'') ADVANCE(541);
      if (lookahead == '*') ADVANCE(474);
      if (lookahead == '+') ADVANCE(477);
      if (lookahead == ',') ADVANCE(464);
      if (lookahead == '-') ADVANCE(479);
      if (lookahead == '.') ADVANCE(526);
      if (lookahead == '/') ADVANCE(475);
      if (lookahead == ';') ADVANCE(465);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == 'A') ADVANCE(671);
      if (lookahead == 'T') ADVANCE(665);
      if (lookahead == 'W') ADVANCE(652);
      if (lookahead == '[') ADVANCE(546);
      if (lookahead == '_') ADVANCE(535);
      if (lookahead == 'a') ADVANCE(613);
      if (lookahead == 't') ADVANCE(607);
      if (lookahead == 'w') ADVANCE(593);
      if (lookahead == '|') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(566);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(618);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 412:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(412)
      if (lookahead == '\r') SKIP(13)
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '%') ADVANCE(476);
      if (lookahead == '&') ADVANCE(483);
      if (lookahead == '\'') ADVANCE(541);
      if (lookahead == '*') ADVANCE(474);
      if (lookahead == '+') ADVANCE(477);
      if (lookahead == '-') ADVANCE(479);
      if (lookahead == '.') ADVANCE(526);
      if (lookahead == '/') ADVANCE(475);
      if (lookahead == ';') ADVANCE(465);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == 'A') ADVANCE(623);
      if (lookahead == 'O') ADVANCE(625);
      if (lookahead == 'T') ADVANCE(665);
      if (lookahead == '_') ADVANCE(535);
      if (lookahead == 't') ADVANCE(607);
      if (lookahead == '|') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(566);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(618);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 413:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(413)
      if (lookahead == '\r') SKIP(14)
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '%') ADVANCE(476);
      if (lookahead == '&') ADVANCE(483);
      if (lookahead == '\'') ADVANCE(541);
      if (lookahead == '*') ADVANCE(474);
      if (lookahead == '+') ADVANCE(477);
      if (lookahead == '-') ADVANCE(479);
      if (lookahead == '.') ADVANCE(526);
      if (lookahead == '/') ADVANCE(475);
      if (lookahead == ';') ADVANCE(465);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == 'A') ADVANCE(623);
      if (lookahead == 'O') ADVANCE(625);
      if (lookahead == 'P') ADVANCE(637);
      if (lookahead == '_') ADVANCE(535);
      if (lookahead == 'p') ADVANCE(577);
      if (lookahead == '|') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(566);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(618);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 414:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(414)
      if (lookahead == '\r') SKIP(15)
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '%') ADVANCE(476);
      if (lookahead == '&') ADVANCE(483);
      if (lookahead == '\'') ADVANCE(541);
      if (lookahead == '*') ADVANCE(474);
      if (lookahead == '+') ADVANCE(477);
      if (lookahead == ',') ADVANCE(464);
      if (lookahead == '-') ADVANCE(479);
      if (lookahead == '.') ADVANCE(526);
      if (lookahead == '/') ADVANCE(475);
      if (lookahead == ';') ADVANCE(465);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == 'P') ADVANCE(637);
      if (lookahead == '_') ADVANCE(535);
      if (lookahead == 'p') ADVANCE(577);
      if (lookahead == '|') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(566);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(618);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 415:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(415)
      if (lookahead == '\r') SKIP(16)
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '%') ADVANCE(476);
      if (lookahead == '&') ADVANCE(483);
      if (lookahead == '\'') ADVANCE(541);
      if (lookahead == ')') ADVANCE(456);
      if (lookahead == '*') ADVANCE(474);
      if (lookahead == '+') ADVANCE(477);
      if (lookahead == '-') ADVANCE(479);
      if (lookahead == '.') ADVANCE(526);
      if (lookahead == '/') ADVANCE(475);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == 'A') ADVANCE(623);
      if (lookahead == 'O') ADVANCE(625);
      if (lookahead == '_') ADVANCE(535);
      if (lookahead == '|') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(566);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(618);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 416:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(416)
      if (lookahead == '\r') SKIP(17)
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == 'E') ADVANCE(656);
      if (lookahead == 'I') ADVANCE(647);
      if (lookahead == 'P') ADVANCE(667);
      if (lookahead == 'R') ADVANCE(641);
      if (lookahead == '_') ADVANCE(535);
      if (lookahead == 'e') ADVANCE(597);
      if (lookahead == 'i') ADVANCE(588);
      if (lookahead == 'p') ADVANCE(609);
      if (lookahead == 'r') ADVANCE(582);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(618);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 417:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(417)
      if (lookahead == '\r') SKIP(18)
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '%') ADVANCE(476);
      if (lookahead == '&') ADVANCE(483);
      if (lookahead == '\'') ADVANCE(541);
      if (lookahead == '*') ADVANCE(474);
      if (lookahead == '+') ADVANCE(477);
      if (lookahead == ',') ADVANCE(464);
      if (lookahead == '-') ADVANCE(479);
      if (lookahead == '.') ADVANCE(526);
      if (lookahead == '/') ADVANCE(475);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == 'A') ADVANCE(671);
      if (lookahead == ']') ADVANCE(547);
      if (lookahead == '_') ADVANCE(535);
      if (lookahead == 'a') ADVANCE(613);
      if (lookahead == '|') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(566);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(618);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 418:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(418)
      if (lookahead == '\r') SKIP(19)
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '%') ADVANCE(476);
      if (lookahead == '&') ADVANCE(483);
      if (lookahead == '\'') ADVANCE(541);
      if (lookahead == '*') ADVANCE(474);
      if (lookahead == '+') ADVANCE(477);
      if (lookahead == '-') ADVANCE(479);
      if (lookahead == '.') ADVANCE(526);
      if (lookahead == '/') ADVANCE(475);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == 'A') ADVANCE(623);
      if (lookahead == 'O') ADVANCE(625);
      if (lookahead == 'T') ADVANCE(650);
      if (lookahead == '_') ADVANCE(535);
      if (lookahead == 't') ADVANCE(591);
      if (lookahead == '|') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(566);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(618);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 419:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(419)
      if (lookahead == '\r') SKIP(20)
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == 'I') ADVANCE(647);
      if (lookahead == 'P') ADVANCE(667);
      if (lookahead == 'R') ADVANCE(641);
      if (lookahead == '_') ADVANCE(535);
      if (lookahead == 'i') ADVANCE(588);
      if (lookahead == 'p') ADVANCE(609);
      if (lookahead == 'r') ADVANCE(582);
      if (lookahead == '}') ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(618);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 420:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(420)
      if (lookahead == '\r') SKIP(21)
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '(') ADVANCE(455);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == ':') ADVANCE(552);
      if (lookahead == '<') ADVANCE(468);
      if (lookahead == '@') ADVANCE(50);
      if (lookahead == 'A') ADVANCE(658);
      if (lookahead == '_') ADVANCE(535);
      if (lookahead == 'a') ADVANCE(599);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(618);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 421:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(421)
      if (lookahead == '\r') SKIP(22)
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == ')') ADVANCE(456);
      if (lookahead == ',') ADVANCE(464);
      if (lookahead == '-') ADVANCE(479);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == ':') ADVANCE(552);
      if (lookahead == ';') ADVANCE(465);
      if (lookahead == '<') ADVANCE(468);
      if (lookahead == '>') ADVANCE(470);
      if (lookahead == '@') ADVANCE(507);
      if (lookahead == 'B') ADVANCE(53);
      if (lookahead == 'F') ADVANCE(68);
      if (lookahead == 'Q') ADVANCE(89);
      if (lookahead == 'S') ADVANCE(61);
      if (lookahead == 'W') ADVANCE(66);
      if (lookahead == 'b') ADVANCE(298);
      if (lookahead == 'f') ADVANCE(261);
      if (lookahead == 's') ADVANCE(367);
      if (lookahead == '|') ADVANCE(484);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(343);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(307);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(146);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(197);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(297);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(340);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(318);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(202);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(219);
      END_STATE();
    case 422:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(422)
      if (lookahead == '\r') SKIP(23)
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == 'B') ADVANCE(664);
      if (lookahead == 'D') ADVANCE(629);
      if (lookahead == 'E') ADVANCE(634);
      if (lookahead == 'F') ADVANCE(657);
      if (lookahead == 'I') ADVANCE(662);
      if (lookahead == 'J') ADVANCE(672);
      if (lookahead == 'S') ADVANCE(674);
      if (lookahead == 'V') ADVANCE(639);
      if (lookahead == '_') ADVANCE(535);
      if (lookahead == 'b') ADVANCE(606);
      if (lookahead == 'd') ADVANCE(569);
      if (lookahead == 'e') ADVANCE(574);
      if (lookahead == 'f') ADVANCE(598);
      if (lookahead == 'i') ADVANCE(604);
      if (lookahead == 'j') ADVANCE(614);
      if (lookahead == 's') ADVANCE(616);
      if (lookahead == 'v') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(566);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(618);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 423:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(423)
      if (lookahead == '\r') SKIP(24)
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '@') ADVANCE(50);
      if (lookahead == 'A') ADVANCE(658);
      if (lookahead == 'S') ADVANCE(643);
      if (lookahead == '_') ADVANCE(535);
      if (lookahead == 'a') ADVANCE(599);
      if (lookahead == 's') ADVANCE(584);
      if (lookahead == '}') ADVANCE(449);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(618);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 424:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(424)
      if (lookahead == '\r') SKIP(25)
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == ')') ADVANCE(456);
      if (lookahead == ',') ADVANCE(464);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == ':') ADVANCE(552);
      if (lookahead == '<') ADVANCE(468);
      if (lookahead == '>') ADVANCE(470);
      if (lookahead == '_') ADVANCE(535);
      if (lookahead == '|') ADVANCE(484);
      if (lookahead == '}') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(566);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(618);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 425:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(425)
      if (lookahead == '\r') SKIP(26)
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '(') ADVANCE(455);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == 'S') ADVANCE(644);
      if (lookahead == '_') ADVANCE(535);
      if (lookahead == 's') ADVANCE(585);
      if (lookahead == '{') ADVANCE(448);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(618);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 426:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(426)
      if (lookahead == '\r') SKIP(27)
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == ',') ADVANCE(464);
      if (lookahead == '-') ADVANCE(479);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == ':') ADVANCE(552);
      if (lookahead == ';') ADVANCE(465);
      if (lookahead == 'P') ADVANCE(637);
      if (lookahead == 'W') ADVANCE(621);
      if (lookahead == '_') ADVANCE(535);
      if (lookahead == 'p') ADVANCE(577);
      if (lookahead == '|') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(566);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(618);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 427:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(427)
      if (lookahead == '\r') SKIP(28)
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '(') ADVANCE(455);
      if (lookahead == ')') ADVANCE(456);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == ';') ADVANCE(465);
      if (lookahead == '=') ADVANCE(462);
      if (lookahead == 'I') ADVANCE(663);
      if (lookahead == 'M') ADVANCE(653);
      if (lookahead == 'U') ADVANCE(661);
      if (lookahead == '_') ADVANCE(535);
      if (lookahead == 'i') ADVANCE(605);
      if (lookahead == 'm') ADVANCE(594);
      if (lookahead == 'u') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(566);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(618);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 428:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(428)
      if (lookahead == '\r') SKIP(29)
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == ',') ADVANCE(464);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == ';') ADVANCE(465);
      if (lookahead == 'T') ADVANCE(665);
      if (lookahead == 'W') ADVANCE(652);
      if (lookahead == '_') ADVANCE(535);
      if (lookahead == 't') ADVANCE(607);
      if (lookahead == 'w') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(566);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(618);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 429:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(429)
      if (lookahead == '\r') SKIP(30)
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == ')') ADVANCE(456);
      if (lookahead == ',') ADVANCE(464);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == 'A') ADVANCE(673);
      if (lookahead == 'D') ADVANCE(642);
      if (lookahead == '_') ADVANCE(535);
      if (lookahead == 'a') ADVANCE(615);
      if (lookahead == 'd') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(566);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(618);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 430:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(430)
      if (lookahead == '\r') SKIP(31)
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == 'A') ADVANCE(624);
      if (lookahead == 'R') ADVANCE(619);
      if (lookahead == 'S') ADVANCE(626);
      if (lookahead == '_') ADVANCE(535);
      if (lookahead == '{') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(566);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(618);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 431:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(431)
      if (lookahead == '\r') SKIP(32)
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == ')') ADVANCE(456);
      if (lookahead == ',') ADVANCE(464);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == 'D') ADVANCE(640);
      if (lookahead == '_') ADVANCE(535);
      if (lookahead == 'd') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(566);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(618);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 432:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(432)
      if (lookahead == '\r') SKIP(33)
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == 'F') ADVANCE(669);
      if (lookahead == '_') ADVANCE(535);
      if (lookahead == 'f') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(566);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(618);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 433:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(433)
      if (lookahead == '\r') SKIP(34)
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(299);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(260);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(297);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(375);
      END_STATE();
    case 434:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(434)
      if (lookahead == '\r') SKIP(35)
      if (lookahead == '"') ADVANCE(557);
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(88);
      END_STATE();
    case 435:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(435)
      if (lookahead == '\r') SKIP(36)
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == 'E') ADVANCE(659);
      if (lookahead == 'I') ADVANCE(647);
      if (lookahead == 'P') ADVANCE(667);
      if (lookahead == 'R') ADVANCE(641);
      if (lookahead == '_') ADVANCE(535);
      if (lookahead == 'e') ADVANCE(601);
      if (lookahead == 'i') ADVANCE(588);
      if (lookahead == 'p') ADVANCE(609);
      if (lookahead == 'r') ADVANCE(582);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(618);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 436:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(563);
      END_STATE();
    case 437:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(436);
      END_STATE();
    case 438:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(437);
      END_STATE();
    case 439:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(438);
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
      if (eof) ADVANCE(447);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 445:
      if (eof) ADVANCE(447);
      if (lookahead == '\n') SKIP(446)
      END_STATE();
    case 446:
      if (eof) ADVANCE(447);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(446)
      if (lookahead == '\r') SKIP(445)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '"') ADVANCE(557);
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '%') ADVANCE(476);
      if (lookahead == '&') ADVANCE(483);
      if (lookahead == '\'') ADVANCE(541);
      if (lookahead == ')') ADVANCE(456);
      if (lookahead == '*') ADVANCE(474);
      if (lookahead == '+') ADVANCE(478);
      if (lookahead == ',') ADVANCE(464);
      if (lookahead == '-') ADVANCE(479);
      if (lookahead == '.') ADVANCE(526);
      if (lookahead == '/') ADVANCE(475);
      if (lookahead == ':') ADVANCE(552);
      if (lookahead == ';') ADVANCE(465);
      if (lookahead == '<') ADVANCE(469);
      if (lookahead == '=') ADVANCE(463);
      if (lookahead == '>') ADVANCE(471);
      if (lookahead == 'A') ADVANCE(71);
      if (lookahead == 'F') ADVANCE(74);
      if (lookahead == 'G') ADVANCE(81);
      if (lookahead == 'O') ADVANCE(76);
      if (lookahead == 'P') ADVANCE(203);
      if (lookahead == 'Q') ADVANCE(89);
      if (lookahead == 'R') ADVANCE(59);
      if (lookahead == 'S') ADVANCE(92);
      if (lookahead == '[') ADVANCE(546);
      if (lookahead == ']') ADVANCE(547);
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 'f') ADVANCE(147);
      if (lookahead == 'p') ADVANCE(128);
      if (lookahead == 'r') ADVANCE(223);
      if (lookahead == 's') ADVANCE(373);
      if (lookahead == '{') ADVANCE(448);
      if (lookahead == '|') ADVANCE(484);
      if (lookahead == '}') ADVANCE(449);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(325);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(256);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(288);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(301);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(243);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(566);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_createSignature_token1);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_createSignature_token2);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_createSignature_token3);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_createSignature_token4);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_QUERY);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_FOR);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_GRAPH);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_API);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_SYNTAX);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_RETURNS);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(493);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_typedef_token1);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_typedef_token2);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(481);
      if (lookahead == '=') ADVANCE(491);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(492);
      if (lookahead == '>') ADVANCE(482);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_constant_token2);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(42);
      if (lookahead == '/') ADVANCE(496);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(525);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(551);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_condition_token2);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_condition_token3);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_condition_token4);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(496);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_CREATE_VERTEX_token1);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_CREATE_VERTEX_token2);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_CREATE_VERTEX_token3);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_CREATE_VERTEX_token4);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_DQUOTEnone_DQUOTE);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_DQUOTEoutdegree_by_edgetype_DQUOTE);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_primary_id_as_attribute);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_DQUOTEtrue_DQUOTE);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_primary_id_name_type_token1);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_accumDeclStmt_token1);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(508);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_accumType_token1);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_accumType_token2);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_accumType_token3);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_accumType_token4);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_accumType_token5);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_accumType_token5);
      if (lookahead == ' ') ADVANCE(196);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_accumType_token6);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_accumType_token7);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_accumType_token8);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_accumType_token9);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_accumType_token10);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_accumType_token11);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_accumType_token12);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_accumType_token13);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_accumType_token14);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_elementType_token1);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_queryBodyIfStmt_token1);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_queryBodyIfStmt_token2);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_queryBodyIfStmt_token3);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_queryBodyIfStmt_token4);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_fileDeclStmt_token1);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_simpleSet_token1);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_simpleSet_token2);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_simpleSet_token3);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_seed_token1);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_DOT_STAR);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_seed_token2);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_selectVertParams_token1);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_printStmt_token1);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_printStmt_token2);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_printStmt_token3);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_printExpr_token1);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_returnStmt_token1);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_gsqlSelectClause_token1);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_fromClause_token1);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_WHERE);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_accumClause_token1);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_postAccumClause_token1);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_perClauseV2_token1);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_stringLiteral_token1);
      if (lookahead == '*') ADVANCE(560);
      if (lookahead == '/') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(562);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_stringLiteral_token1);
      if (lookahead == '*') ADVANCE(559);
      if (lookahead == '/') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(560);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_stringLiteral_token1);
      if (lookahead == '*') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(560);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_stringLiteral_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(561);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '#') ADVANCE(562);
      if (lookahead == '/') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(562);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_stringLiteral_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(562);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(563);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_name_token1);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(362);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(238);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(378);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(362);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(378);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(270);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(270);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(262);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(305);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(303);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(309);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(309);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(294);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(241);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(241);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(342);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(316);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(265);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(151);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(287);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(363);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(334);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(376);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(151);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(287);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(376);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(328);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(287);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(527);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(527);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(486);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(487);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(527);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(358);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(224);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(224);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(94);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(387);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(311);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(222);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(294);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(341);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(262);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(305);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(342);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(305);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(397);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(397);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(545);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(486);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(487);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(251);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(358);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(374);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(304);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(350);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(387);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(303);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(545);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(302);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(171);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(328);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(311);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_name_token2);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E') ADVANCE(86);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'H') ADVANCE(56);
      if (lookahead == 'h') ADVANCE(222);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'H') ADVANCE(63);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'N') ADVANCE(55);
      if (lookahead == 'P') ADVANCE(67);
      if (lookahead == 'n') ADVANCE(397);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(545);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'N') ADVANCE(54);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'P') ADVANCE(67);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'R') ADVANCE(490);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'Y') ADVANCE(70);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'Y') ADVANCE(70);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(265);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(151);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(287);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(362);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(238);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(378);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(362);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(378);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(270);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(270);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(262);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(305);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(303);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(309);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(309);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(294);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(241);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(241);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(342);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(316);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(363);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(334);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(376);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(151);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(287);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(376);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(328);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(287);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(527);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(527);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(486);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(487);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(527);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(358);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(224);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(224);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(94);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(387);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(311);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(222);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(294);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(341);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(262);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(305);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(342);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(305);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(397);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(486);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(487);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(251);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(358);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(374);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(304);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(350);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(387);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(303);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(545);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(302);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(171);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(328);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(311);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_baseType_token1);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_baseType_token2);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_baseType_token3);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_baseType_token4);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_baseType_token5);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_SET);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_BAG);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_FILE);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 446},
  [2] = {.lex_state = 400},
  [3] = {.lex_state = 401},
  [4] = {.lex_state = 446},
  [5] = {.lex_state = 446},
  [6] = {.lex_state = 402},
  [7] = {.lex_state = 402},
  [8] = {.lex_state = 402},
  [9] = {.lex_state = 402},
  [10] = {.lex_state = 402},
  [11] = {.lex_state = 402},
  [12] = {.lex_state = 402},
  [13] = {.lex_state = 401},
  [14] = {.lex_state = 402},
  [15] = {.lex_state = 401},
  [16] = {.lex_state = 403},
  [17] = {.lex_state = 402},
  [18] = {.lex_state = 402},
  [19] = {.lex_state = 402},
  [20] = {.lex_state = 402},
  [21] = {.lex_state = 402},
  [22] = {.lex_state = 402},
  [23] = {.lex_state = 402},
  [24] = {.lex_state = 402},
  [25] = {.lex_state = 402},
  [26] = {.lex_state = 402},
  [27] = {.lex_state = 404},
  [28] = {.lex_state = 405},
  [29] = {.lex_state = 404},
  [30] = {.lex_state = 405},
  [31] = {.lex_state = 404},
  [32] = {.lex_state = 405},
  [33] = {.lex_state = 400},
  [34] = {.lex_state = 406},
  [35] = {.lex_state = 407},
  [36] = {.lex_state = 406},
  [37] = {.lex_state = 400},
  [38] = {.lex_state = 407},
  [39] = {.lex_state = 407},
  [40] = {.lex_state = 406},
  [41] = {.lex_state = 400},
  [42] = {.lex_state = 408},
  [43] = {.lex_state = 408},
  [44] = {.lex_state = 408},
  [45] = {.lex_state = 409},
  [46] = {.lex_state = 401},
  [47] = {.lex_state = 409},
  [48] = {.lex_state = 409},
  [49] = {.lex_state = 409},
  [50] = {.lex_state = 402},
  [51] = {.lex_state = 410},
  [52] = {.lex_state = 402},
  [53] = {.lex_state = 410},
  [54] = {.lex_state = 402},
  [55] = {.lex_state = 402},
  [56] = {.lex_state = 402},
  [57] = {.lex_state = 402},
  [58] = {.lex_state = 402},
  [59] = {.lex_state = 402},
  [60] = {.lex_state = 410},
  [61] = {.lex_state = 410},
  [62] = {.lex_state = 402},
  [63] = {.lex_state = 410},
  [64] = {.lex_state = 410},
  [65] = {.lex_state = 411},
  [66] = {.lex_state = 411},
  [67] = {.lex_state = 410},
  [68] = {.lex_state = 410},
  [69] = {.lex_state = 410},
  [70] = {.lex_state = 410},
  [71] = {.lex_state = 410},
  [72] = {.lex_state = 402},
  [73] = {.lex_state = 409},
  [74] = {.lex_state = 409},
  [75] = {.lex_state = 402},
  [76] = {.lex_state = 402},
  [77] = {.lex_state = 409},
  [78] = {.lex_state = 410},
  [79] = {.lex_state = 410},
  [80] = {.lex_state = 410},
  [81] = {.lex_state = 410},
  [82] = {.lex_state = 411},
  [83] = {.lex_state = 410},
  [84] = {.lex_state = 410},
  [85] = {.lex_state = 410},
  [86] = {.lex_state = 410},
  [87] = {.lex_state = 410},
  [88] = {.lex_state = 410},
  [89] = {.lex_state = 410},
  [90] = {.lex_state = 410},
  [91] = {.lex_state = 410},
  [92] = {.lex_state = 410},
  [93] = {.lex_state = 410},
  [94] = {.lex_state = 410},
  [95] = {.lex_state = 410},
  [96] = {.lex_state = 410},
  [97] = {.lex_state = 410},
  [98] = {.lex_state = 410},
  [99] = {.lex_state = 410},
  [100] = {.lex_state = 410},
  [101] = {.lex_state = 410},
  [102] = {.lex_state = 410},
  [103] = {.lex_state = 410},
  [104] = {.lex_state = 410},
  [105] = {.lex_state = 410},
  [106] = {.lex_state = 412},
  [107] = {.lex_state = 413},
  [108] = {.lex_state = 413},
  [109] = {.lex_state = 413},
  [110] = {.lex_state = 412},
  [111] = {.lex_state = 412},
  [112] = {.lex_state = 414},
  [113] = {.lex_state = 415},
  [114] = {.lex_state = 415},
  [115] = {.lex_state = 416},
  [116] = {.lex_state = 416},
  [117] = {.lex_state = 400},
  [118] = {.lex_state = 414},
  [119] = {.lex_state = 417},
  [120] = {.lex_state = 414},
  [121] = {.lex_state = 418},
  [122] = {.lex_state = 417},
  [123] = {.lex_state = 415},
  [124] = {.lex_state = 418},
  [125] = {.lex_state = 418},
  [126] = {.lex_state = 417},
  [127] = {.lex_state = 419},
  [128] = {.lex_state = 419},
  [129] = {.lex_state = 419},
  [130] = {.lex_state = 419},
  [131] = {.lex_state = 420},
  [132] = {.lex_state = 421},
  [133] = {.lex_state = 421},
  [134] = {.lex_state = 419},
  [135] = {.lex_state = 421},
  [136] = {.lex_state = 419},
  [137] = {.lex_state = 435},
  [138] = {.lex_state = 419},
  [139] = {.lex_state = 421},
  [140] = {.lex_state = 419},
  [141] = {.lex_state = 420},
  [142] = {.lex_state = 419},
  [143] = {.lex_state = 435},
  [144] = {.lex_state = 422},
  [145] = {.lex_state = 422},
  [146] = {.lex_state = 422},
  [147] = {.lex_state = 422},
  [148] = {.lex_state = 402},
  [149] = {.lex_state = 420},
  [150] = {.lex_state = 402},
  [151] = {.lex_state = 420},
  [152] = {.lex_state = 402},
  [153] = {.lex_state = 402},
  [154] = {.lex_state = 421},
  [155] = {.lex_state = 420},
  [156] = {.lex_state = 422},
  [157] = {.lex_state = 422},
  [158] = {.lex_state = 422},
  [159] = {.lex_state = 421},
  [160] = {.lex_state = 402},
  [161] = {.lex_state = 402},
  [162] = {.lex_state = 402},
  [163] = {.lex_state = 402},
  [164] = {.lex_state = 402},
  [165] = {.lex_state = 402},
  [166] = {.lex_state = 400},
  [167] = {.lex_state = 402},
  [168] = {.lex_state = 402},
  [169] = {.lex_state = 400},
  [170] = {.lex_state = 402},
  [171] = {.lex_state = 402},
  [172] = {.lex_state = 400},
  [173] = {.lex_state = 402},
  [174] = {.lex_state = 423},
  [175] = {.lex_state = 402},
  [176] = {.lex_state = 402},
  [177] = {.lex_state = 402},
  [178] = {.lex_state = 402},
  [179] = {.lex_state = 402},
  [180] = {.lex_state = 402},
  [181] = {.lex_state = 402},
  [182] = {.lex_state = 402},
  [183] = {.lex_state = 402},
  [184] = {.lex_state = 446},
  [185] = {.lex_state = 424},
  [186] = {.lex_state = 424},
  [187] = {.lex_state = 446},
  [188] = {.lex_state = 425},
  [189] = {.lex_state = 446},
  [190] = {.lex_state = 446},
  [191] = {.lex_state = 400},
  [192] = {.lex_state = 426},
  [193] = {.lex_state = 423},
  [194] = {.lex_state = 446},
  [195] = {.lex_state = 446},
  [196] = {.lex_state = 400},
  [197] = {.lex_state = 426},
  [198] = {.lex_state = 426},
  [199] = {.lex_state = 424},
  [200] = {.lex_state = 446},
  [201] = {.lex_state = 400},
  [202] = {.lex_state = 400},
  [203] = {.lex_state = 427},
  [204] = {.lex_state = 420},
  [205] = {.lex_state = 408},
  [206] = {.lex_state = 427},
  [207] = {.lex_state = 400},
  [208] = {.lex_state = 427},
  [209] = {.lex_state = 426},
  [210] = {.lex_state = 408},
  [211] = {.lex_state = 400},
  [212] = {.lex_state = 400},
  [213] = {.lex_state = 410},
  [214] = {.lex_state = 410},
  [215] = {.lex_state = 408},
  [216] = {.lex_state = 408},
  [217] = {.lex_state = 428},
  [218] = {.lex_state = 428},
  [219] = {.lex_state = 421},
  [220] = {.lex_state = 429},
  [221] = {.lex_state = 408},
  [222] = {.lex_state = 429},
  [223] = {.lex_state = 408},
  [224] = {.lex_state = 421},
  [225] = {.lex_state = 408},
  [226] = {.lex_state = 408},
  [227] = {.lex_state = 408},
  [228] = {.lex_state = 429},
  [229] = {.lex_state = 408},
  [230] = {.lex_state = 430},
  [231] = {.lex_state = 428},
  [232] = {.lex_state = 408},
  [233] = {.lex_state = 430},
  [234] = {.lex_state = 424},
  [235] = {.lex_state = 408},
  [236] = {.lex_state = 430},
  [237] = {.lex_state = 421},
  [238] = {.lex_state = 408},
  [239] = {.lex_state = 424},
  [240] = {.lex_state = 408},
  [241] = {.lex_state = 431},
  [242] = {.lex_state = 431},
  [243] = {.lex_state = 431},
  [244] = {.lex_state = 408},
  [245] = {.lex_state = 408},
  [246] = {.lex_state = 408},
  [247] = {.lex_state = 421},
  [248] = {.lex_state = 421},
  [249] = {.lex_state = 400},
  [250] = {.lex_state = 408},
  [251] = {.lex_state = 408},
  [252] = {.lex_state = 416},
  [253] = {.lex_state = 408},
  [254] = {.lex_state = 408},
  [255] = {.lex_state = 421},
  [256] = {.lex_state = 408},
  [257] = {.lex_state = 424},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 408},
  [260] = {.lex_state = 408},
  [261] = {.lex_state = 408},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 421},
  [264] = {.lex_state = 421},
  [265] = {.lex_state = 419},
  [266] = {.lex_state = 435},
  [267] = {.lex_state = 408},
  [268] = {.lex_state = 427},
  [269] = {.lex_state = 421},
  [270] = {.lex_state = 408},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 421},
  [273] = {.lex_state = 446},
  [274] = {.lex_state = 408},
  [275] = {.lex_state = 408},
  [276] = {.lex_state = 408},
  [277] = {.lex_state = 424},
  [278] = {.lex_state = 421},
  [279] = {.lex_state = 408},
  [280] = {.lex_state = 424},
  [281] = {.lex_state = 424},
  [282] = {.lex_state = 421},
  [283] = {.lex_state = 446},
  [284] = {.lex_state = 421},
  [285] = {.lex_state = 421},
  [286] = {.lex_state = 424},
  [287] = {.lex_state = 432},
  [288] = {.lex_state = 408},
  [289] = {.lex_state = 408},
  [290] = {.lex_state = 421},
  [291] = {.lex_state = 446},
  [292] = {.lex_state = 408},
  [293] = {.lex_state = 446},
  [294] = {.lex_state = 432},
  [295] = {.lex_state = 408},
  [296] = {.lex_state = 421},
  [297] = {.lex_state = 408},
  [298] = {.lex_state = 432},
  [299] = {.lex_state = 408},
  [300] = {.lex_state = 446},
  [301] = {.lex_state = 408},
  [302] = {.lex_state = 421},
  [303] = {.lex_state = 421},
  [304] = {.lex_state = 421},
  [305] = {.lex_state = 421},
  [306] = {.lex_state = 421},
  [307] = {.lex_state = 421},
  [308] = {.lex_state = 408},
  [309] = {.lex_state = 421},
  [310] = {.lex_state = 408},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 408},
  [313] = {.lex_state = 446},
  [314] = {.lex_state = 408},
  [315] = {.lex_state = 424},
  [316] = {.lex_state = 446},
  [317] = {.lex_state = 446},
  [318] = {.lex_state = 408},
  [319] = {.lex_state = 408},
  [320] = {.lex_state = 408},
  [321] = {.lex_state = 408},
  [322] = {.lex_state = 408},
  [323] = {.lex_state = 408},
  [324] = {.lex_state = 408},
  [325] = {.lex_state = 408},
  [326] = {.lex_state = 408},
  [327] = {.lex_state = 408},
  [328] = {.lex_state = 408},
  [329] = {.lex_state = 408},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 408},
  [332] = {.lex_state = 427},
  [333] = {.lex_state = 408},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 408},
  [336] = {.lex_state = 408},
  [337] = {.lex_state = 408},
  [338] = {.lex_state = 408},
  [339] = {.lex_state = 408},
  [340] = {.lex_state = 446},
  [341] = {.lex_state = 401},
  [342] = {.lex_state = 408},
  [343] = {.lex_state = 408},
  [344] = {.lex_state = 408},
  [345] = {.lex_state = 421},
  [346] = {.lex_state = 421},
  [347] = {.lex_state = 408},
  [348] = {.lex_state = 408},
  [349] = {.lex_state = 408},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 408},
  [352] = {.lex_state = 408},
  [353] = {.lex_state = 408},
  [354] = {.lex_state = 408},
  [355] = {.lex_state = 433},
  [356] = {.lex_state = 408},
  [357] = {.lex_state = 408},
  [358] = {.lex_state = 427},
  [359] = {.lex_state = 427},
  [360] = {.lex_state = 408},
  [361] = {.lex_state = 421},
  [362] = {.lex_state = 408},
  [363] = {.lex_state = 427},
  [364] = {.lex_state = 408},
  [365] = {.lex_state = 408},
  [366] = {.lex_state = 408},
  [367] = {.lex_state = 408},
  [368] = {.lex_state = 408},
  [369] = {.lex_state = 408},
  [370] = {.lex_state = 408},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 446},
  [373] = {.lex_state = 408},
  [374] = {.lex_state = 408},
  [375] = {.lex_state = 408},
  [376] = {.lex_state = 446},
  [377] = {.lex_state = 408},
  [378] = {.lex_state = 446},
  [379] = {.lex_state = 446},
  [380] = {.lex_state = 408},
  [381] = {.lex_state = 408},
  [382] = {.lex_state = 421},
  [383] = {.lex_state = 408},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 408},
  [386] = {.lex_state = 446},
  [387] = {.lex_state = 408},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 408},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 408},
  [392] = {.lex_state = 408},
  [393] = {.lex_state = 408},
  [394] = {.lex_state = 421},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 408},
  [397] = {.lex_state = 408},
  [398] = {.lex_state = 446},
  [399] = {.lex_state = 408},
  [400] = {.lex_state = 408},
  [401] = {.lex_state = 446},
  [402] = {.lex_state = 421},
  [403] = {.lex_state = 408},
  [404] = {.lex_state = 421},
  [405] = {.lex_state = 446},
  [406] = {.lex_state = 446},
  [407] = {.lex_state = 408},
  [408] = {.lex_state = 408},
  [409] = {.lex_state = 408},
  [410] = {.lex_state = 446},
  [411] = {.lex_state = 408},
  [412] = {.lex_state = 408},
  [413] = {.lex_state = 408},
  [414] = {.lex_state = 421},
  [415] = {.lex_state = 408},
  [416] = {.lex_state = 408},
  [417] = {.lex_state = 408},
  [418] = {.lex_state = 421},
  [419] = {.lex_state = 446},
  [420] = {.lex_state = 408},
  [421] = {.lex_state = 408},
  [422] = {.lex_state = 408},
  [423] = {.lex_state = 421},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 401},
  [427] = {.lex_state = 401},
  [428] = {.lex_state = 427},
  [429] = {.lex_state = 400},
  [430] = {.lex_state = 145},
  [431] = {.lex_state = 421},
  [432] = {.lex_state = 446},
  [433] = {.lex_state = 145},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 421},
  [436] = {.lex_state = 446},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 408},
  [440] = {.lex_state = 421},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 400},
  [443] = {.lex_state = 400},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 446},
  [446] = {.lex_state = 145},
  [447] = {.lex_state = 446},
  [448] = {.lex_state = 427},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 446},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 408},
  [453] = {.lex_state = 400},
  [454] = {.lex_state = 421},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 408},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 408},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 446},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 427},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 408},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 400},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 401},
  [479] = {.lex_state = 446},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 446},
  [484] = {.lex_state = 400},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 400},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 446},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 401},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 401},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 400},
  [518] = {.lex_state = 421},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 401},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 401},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 446},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 408},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 408},
  [541] = {.lex_state = 400},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 401},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 401},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 446},
  [555] = {.lex_state = 446},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 400},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 446},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 401},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 446},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 446},
  [591] = {.lex_state = 400},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 401},
  [598] = {.lex_state = 446},
  [599] = {.lex_state = 400},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 401},
  [604] = {.lex_state = 446},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 446},
  [609] = {.lex_state = 446},
  [610] = {.lex_state = 402},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 446},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 400},
  [615] = {.lex_state = 400},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 446},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 400},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
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
  [636] = {.lex_state = 400},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 400},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 400},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 446},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 400},
  [656] = {.lex_state = 400},
  [657] = {.lex_state = 446},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 400},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 446},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 401},
  [678] = {.lex_state = 0},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 400},
  [685] = {.lex_state = 400},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 446},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 0},
  [694] = {.lex_state = 401},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 401},
  [699] = {.lex_state = 400},
  [700] = {.lex_state = 400},
  [701] = {.lex_state = 401},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 446},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 401},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 400},
  [712] = {.lex_state = 446},
  [713] = {.lex_state = 401},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 446},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 401},
  [720] = {.lex_state = 401},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 446},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 0},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 401},
  [735] = {.lex_state = 401},
  [736] = {.lex_state = 401},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 0},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 0},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 0},
  [745] = {.lex_state = 446},
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
  [762] = {.lex_state = 0},
  [763] = {.lex_state = 446},
  [764] = {.lex_state = 0},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 0},
  [767] = {.lex_state = 446},
  [768] = {.lex_state = 446},
  [769] = {.lex_state = 0},
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
  },
  [1] = {
    [sym_source_file] = STATE(732),
    [sym_createQuery] = STATE(273),
    [sym_createSignature] = STATE(769),
    [sym_CREATE_VERTEX] = STATE(273),
    [aux_sym_source_file_repeat1] = STATE(273),
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
    STATE(13), 1,
      aux_sym_declStmts_repeat1,
    STATE(37), 1,
      aux_sym_typedefs_repeat1,
    STATE(129), 1,
      sym_declStmts,
    STATE(138), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(268), 1,
      sym_name,
    STATE(456), 1,
      sym_baseType,
    STATE(459), 1,
      sym_accumType,
    STATE(599), 1,
      sym_vertexSetName,
    STATE(600), 1,
      sym_gsqlSelectClause,
    STATE(746), 1,
      sym_gsqlSelectBlock,
    STATE(749), 1,
      sym_queryBodyStmt,
    STATE(751), 1,
      sym_queryBodyStmts,
    STATE(752), 1,
      sym_declStmt,
    STATE(753), 1,
      sym_typedef,
    STATE(754), 1,
      sym_queryBody,
    ACTIONS(45), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(748), 3,
      sym_accumDeclStmt,
      sym_baseDeclStmt,
      sym_fileDeclStmt,
    STATE(747), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
    ACTIONS(21), 6,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
  [130] = 34,
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
    STATE(13), 1,
      aux_sym_declStmts_repeat1,
    STATE(138), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(140), 1,
      sym_declStmts,
    STATE(268), 1,
      sym_name,
    STATE(456), 1,
      sym_baseType,
    STATE(459), 1,
      sym_accumType,
    STATE(599), 1,
      sym_vertexSetName,
    STATE(600), 1,
      sym_gsqlSelectClause,
    STATE(740), 1,
      sym_queryBodyStmts,
    STATE(746), 1,
      sym_gsqlSelectBlock,
    STATE(749), 1,
      sym_queryBodyStmt,
    STATE(752), 1,
      sym_declStmt,
    ACTIONS(45), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(748), 3,
      sym_accumDeclStmt,
      sym_baseDeclStmt,
      sym_fileDeclStmt,
    STATE(747), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
    ACTIONS(21), 6,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
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
    STATE(7), 1,
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
  [377] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      aux_sym_integer_token1,
    STATE(7), 1,
      aux_sym_integer_repeat1,
    ACTIONS(65), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(63), 28,
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
  [422] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      aux_sym_integer_token1,
    ACTIONS(74), 1,
      anon_sym_DOT,
    STATE(7), 1,
      aux_sym_integer_repeat1,
    ACTIONS(72), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(70), 27,
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
  [469] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      aux_sym_integer_token1,
    STATE(7), 1,
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
  [513] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      aux_sym_integer_token1,
    STATE(7), 1,
      aux_sym_integer_repeat1,
    ACTIONS(82), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(80), 27,
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
  [557] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      aux_sym_integer_token1,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    ACTIONS(86), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(84), 27,
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
  [601] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      aux_sym_integer_token1,
    STATE(7), 1,
      aux_sym_integer_repeat1,
    ACTIONS(86), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(84), 27,
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
  [645] = 22,
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
    STATE(15), 1,
      aux_sym_declStmts_repeat1,
    STATE(456), 1,
      sym_baseType,
    STATE(459), 1,
      sym_accumType,
    STATE(752), 1,
      sym_declStmt,
    ACTIONS(92), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(748), 3,
      sym_accumDeclStmt,
      sym_baseDeclStmt,
      sym_fileDeclStmt,
    ACTIONS(90), 4,
      aux_sym_queryBodyIfStmt_token1,
      anon_sym__,
      aux_sym_printStmt_token1,
      aux_sym_returnStmt_token1,
    ACTIONS(21), 6,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
  [723] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      aux_sym_integer_token1,
    STATE(12), 1,
      aux_sym_integer_repeat1,
    ACTIONS(82), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(80), 27,
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
  [767] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      aux_sym_CREATE_VERTEX_token1,
    ACTIONS(99), 1,
      aux_sym_accumDeclStmt_token1,
    ACTIONS(102), 1,
      aux_sym_accumType_token1,
    ACTIONS(105), 1,
      aux_sym_accumType_token2,
    ACTIONS(108), 1,
      aux_sym_accumType_token3,
    ACTIONS(111), 1,
      aux_sym_accumType_token4,
    ACTIONS(117), 1,
      aux_sym_accumType_token7,
    ACTIONS(120), 1,
      aux_sym_accumType_token8,
    ACTIONS(123), 1,
      aux_sym_accumType_token9,
    ACTIONS(126), 1,
      aux_sym_accumType_token10,
    ACTIONS(129), 1,
      aux_sym_accumType_token13,
    ACTIONS(132), 1,
      aux_sym_accumType_token14,
    ACTIONS(137), 1,
      aux_sym_fileDeclStmt_token1,
    STATE(15), 1,
      aux_sym_declStmts_repeat1,
    STATE(456), 1,
      sym_baseType,
    STATE(459), 1,
      sym_accumType,
    STATE(752), 1,
      sym_declStmt,
    ACTIONS(140), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(748), 3,
      sym_accumDeclStmt,
      sym_baseDeclStmt,
      sym_fileDeclStmt,
    ACTIONS(135), 4,
      aux_sym_queryBodyIfStmt_token1,
      anon_sym__,
      aux_sym_printStmt_token1,
      aux_sym_returnStmt_token1,
    ACTIONS(114), 6,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
  [845] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(142), 28,
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
    ACTIONS(161), 3,
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
    ACTIONS(166), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(164), 27,
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
  [1078] = 3,
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
  [1116] = 3,
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
  [1154] = 3,
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
  [1192] = 3,
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
  [1230] = 3,
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
  [1268] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(27), 1,
      aux_sym_name_repeat1,
    ACTIONS(192), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(195), 2,
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
  [1311] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(32), 1,
      aux_sym_name_repeat1,
    ACTIONS(202), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(204), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(200), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(198), 21,
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
    STATE(27), 1,
      aux_sym_name_repeat1,
    ACTIONS(210), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(212), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(208), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(206), 21,
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
    STATE(30), 1,
      aux_sym_name_repeat1,
    ACTIONS(214), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(217), 2,
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
  [1440] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(29), 1,
      aux_sym_name_repeat1,
    ACTIONS(220), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(222), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(200), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(198), 21,
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
    STATE(30), 1,
      aux_sym_name_repeat1,
    ACTIONS(224), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(226), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(208), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(206), 21,
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
    STATE(753), 1,
      sym_typedef,
    ACTIONS(233), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(231), 23,
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
  [1610] = 6,
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
    ACTIONS(208), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(206), 20,
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
  [1652] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(34), 1,
      aux_sym_name_repeat1,
    ACTIONS(245), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(247), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(208), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(206), 20,
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
  [1694] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_typedef_token1,
    STATE(33), 1,
      aux_sym_typedefs_repeat1,
    STATE(753), 1,
      sym_typedef,
    ACTIONS(251), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(249), 23,
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
  [1736] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(38), 1,
      aux_sym_name_repeat1,
    ACTIONS(253), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(256), 2,
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
    ACTIONS(200), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(198), 20,
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
  [1820] = 6,
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
    ACTIONS(200), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(198), 20,
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
  [1862] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(231), 24,
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
  [1896] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(44), 1,
      aux_sym_name_repeat1,
    ACTIONS(208), 2,
      anon_sym_SLASH,
      anon_sym_PLUS,
    ACTIONS(267), 4,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(206), 19,
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
  [1934] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(42), 1,
      aux_sym_name_repeat1,
    ACTIONS(200), 2,
      anon_sym_SLASH,
      anon_sym_PLUS,
    ACTIONS(269), 4,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(198), 19,
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
  [1972] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(44), 1,
      aux_sym_name_repeat1,
    ACTIONS(190), 2,
      anon_sym_SLASH,
      anon_sym_PLUS,
    ACTIONS(271), 4,
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
  [2010] = 19,
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
    ACTIONS(274), 1,
      aux_sym_accumType_token5,
    ACTIONS(276), 1,
      anon_sym__,
    STATE(418), 1,
      sym_name,
    STATE(735), 1,
      sym_type,
    ACTIONS(278), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(431), 3,
      sym_accumType,
      sym_tupleType,
      sym_baseType,
    ACTIONS(21), 5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
  [2075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(135), 23,
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
  [2108] = 19,
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
    ACTIONS(274), 1,
      aux_sym_accumType_token5,
    STATE(418), 1,
      sym_name,
    STATE(607), 1,
      sym_type,
    ACTIONS(45), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(431), 3,
      sym_accumType,
      sym_tupleType,
      sym_baseType,
    ACTIONS(21), 5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
  [2173] = 19,
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
    ACTIONS(274), 1,
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
    STATE(418), 1,
      sym_name,
    STATE(474), 1,
      sym_type,
    ACTIONS(290), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(431), 3,
      sym_accumType,
      sym_tupleType,
      sym_baseType,
    ACTIONS(292), 5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
  [2238] = 17,
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
    ACTIONS(276), 1,
      anon_sym__,
    STATE(418), 1,
      sym_name,
    ACTIONS(278), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(698), 3,
      sym_accumType,
      sym_tupleType,
      sym_baseType,
    ACTIONS(21), 6,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
  [2298] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_SLASH,
    ACTIONS(302), 1,
      aux_sym_condition_token1,
    ACTIONS(304), 1,
      aux_sym_condition_token2,
    ACTIONS(306), 1,
      aux_sym_condition_token3,
    STATE(100), 1,
      sym_comparisonOperator,
    STATE(105), 1,
      sym_mathOperator,
    ACTIONS(296), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(294), 4,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_printStmt_token3,
    ACTIONS(308), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(298), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [2346] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(316), 1,
      anon_sym_AT_AT,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(320), 1,
      anon_sym__,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      aux_sym_integer_token1,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(19), 1,
      sym_globalAccumName,
    STATE(152), 1,
      sym_expr,
    STATE(153), 1,
      sym_name,
    STATE(378), 1,
      sym_vExprSet,
    STATE(436), 1,
      sym_printExpr,
    STATE(445), 1,
      sym_tableName,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(326), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(18), 2,
      sym_integer,
      sym_real,
    STATE(21), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(25), 2,
      sym_constant,
      sym_setBagExpr,
  [2412] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_SLASH,
    ACTIONS(306), 1,
      aux_sym_condition_token3,
    ACTIONS(328), 1,
      aux_sym_condition_token1,
    ACTIONS(330), 1,
      aux_sym_condition_token2,
    STATE(86), 1,
      sym_comparisonOperator,
    STATE(103), 1,
      sym_mathOperator,
    ACTIONS(296), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(294), 4,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_perClauseV2_token1,
    ACTIONS(308), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(298), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [2460] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(316), 1,
      anon_sym_AT_AT,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(320), 1,
      anon_sym__,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      aux_sym_integer_token1,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(19), 1,
      sym_globalAccumName,
    STATE(152), 1,
      sym_expr,
    STATE(153), 1,
      sym_name,
    STATE(376), 1,
      sym_printExpr,
    STATE(378), 1,
      sym_vExprSet,
    STATE(445), 1,
      sym_tableName,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(326), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(18), 2,
      sym_integer,
      sym_real,
    STATE(21), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(25), 2,
      sym_constant,
      sym_setBagExpr,
  [2526] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_SLASH,
    ACTIONS(306), 1,
      aux_sym_condition_token3,
    ACTIONS(332), 1,
      aux_sym_condition_token1,
    ACTIONS(334), 1,
      aux_sym_condition_token2,
    STATE(90), 1,
      sym_mathOperator,
    STATE(92), 1,
      sym_comparisonOperator,
    ACTIONS(296), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(294), 3,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_queryBodyIfStmt_token2,
    ACTIONS(308), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(298), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [2573] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_DOT,
    ACTIONS(161), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(158), 19,
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
  [2606] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_SLASH,
    STATE(103), 1,
      sym_mathOperator,
    ACTIONS(340), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(342), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(338), 11,
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
  [2643] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_SLASH,
    ACTIONS(306), 1,
      aux_sym_condition_token3,
    ACTIONS(348), 1,
      aux_sym_condition_token1,
    ACTIONS(350), 1,
      aux_sym_condition_token2,
    STATE(95), 1,
      sym_comparisonOperator,
    STATE(97), 1,
      sym_mathOperator,
    ACTIONS(296), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(294), 3,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
    ACTIONS(308), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(298), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [2690] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_SLASH,
    STATE(105), 1,
      sym_mathOperator,
    ACTIONS(340), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(342), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(338), 11,
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
  [2727] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_DOT,
    ACTIONS(161), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(158), 19,
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
  [2760] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      aux_sym_integer_token1,
    ACTIONS(354), 1,
      anon_sym_AT_AT,
    ACTIONS(356), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(19), 1,
      sym_globalAccumName,
    STATE(52), 1,
      sym_expr,
    STATE(55), 1,
      sym_name,
    STATE(457), 1,
      sym_condition,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(358), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(18), 2,
      sym_integer,
      sym_real,
    STATE(21), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(25), 2,
      sym_constant,
      sym_setBagExpr,
  [2820] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      aux_sym_integer_token1,
    ACTIONS(360), 1,
      anon_sym_AT_AT,
    ACTIONS(362), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(19), 1,
      sym_globalAccumName,
    STATE(54), 1,
      sym_expr,
    STATE(76), 1,
      sym_name,
    STATE(470), 1,
      sym_condition,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(364), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(18), 2,
      sym_integer,
      sym_real,
    STATE(21), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(25), 2,
      sym_constant,
      sym_setBagExpr,
  [2880] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_SLASH,
    STATE(90), 1,
      sym_mathOperator,
    ACTIONS(340), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(342), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(338), 10,
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
  [2916] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      aux_sym_integer_token1,
    ACTIONS(366), 1,
      anon_sym_AT_AT,
    ACTIONS(368), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(19), 1,
      sym_globalAccumName,
    STATE(167), 1,
      sym_name,
    STATE(171), 1,
      sym_expr,
    STATE(568), 1,
      sym_vSetProj,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(370), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(18), 2,
      sym_integer,
      sym_real,
    STATE(21), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(25), 2,
      sym_constant,
      sym_setBagExpr,
  [2976] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      aux_sym_integer_token1,
    ACTIONS(372), 1,
      anon_sym_AT_AT,
    ACTIONS(374), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(19), 1,
      sym_globalAccumName,
    STATE(57), 1,
      sym_expr,
    STATE(72), 1,
      sym_name,
    STATE(519), 1,
      sym_condition,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(376), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(18), 2,
      sym_integer,
      sym_real,
    STATE(21), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(25), 2,
      sym_constant,
      sym_setBagExpr,
  [3036] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_SLASH,
    STATE(82), 1,
      aux_sym_name_repeat1,
    ACTIONS(378), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(380), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(198), 16,
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
  [3072] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_SLASH,
    STATE(66), 1,
      aux_sym_name_repeat1,
    ACTIONS(382), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(385), 2,
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
  [3108] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      aux_sym_integer_token1,
    ACTIONS(388), 1,
      anon_sym_AT_AT,
    ACTIONS(390), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(19), 1,
      sym_globalAccumName,
    STATE(50), 1,
      sym_expr,
    STATE(59), 1,
      sym_name,
    STATE(437), 1,
      sym_condition,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(392), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(18), 2,
      sym_integer,
      sym_real,
    STATE(21), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(25), 2,
      sym_constant,
      sym_setBagExpr,
  [3168] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      aux_sym_integer_token1,
    ACTIONS(394), 1,
      anon_sym_AT_AT,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(19), 1,
      sym_globalAccumName,
    STATE(166), 1,
      sym_name,
    STATE(169), 1,
      sym_expr,
    STATE(731), 1,
      sym_argList,
    ACTIONS(45), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(18), 2,
      sym_integer,
      sym_real,
    STATE(21), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(25), 2,
      sym_constant,
      sym_setBagExpr,
  [3228] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      aux_sym_integer_token1,
    ACTIONS(354), 1,
      anon_sym_AT_AT,
    ACTIONS(356), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(19), 1,
      sym_globalAccumName,
    STATE(52), 1,
      sym_expr,
    STATE(55), 1,
      sym_name,
    STATE(441), 1,
      sym_condition,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(358), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(18), 2,
      sym_integer,
      sym_real,
    STATE(21), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(25), 2,
      sym_constant,
      sym_setBagExpr,
  [3288] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      aux_sym_integer_token1,
    ACTIONS(366), 1,
      anon_sym_AT_AT,
    ACTIONS(368), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(19), 1,
      sym_globalAccumName,
    STATE(167), 1,
      sym_name,
    STATE(171), 1,
      sym_expr,
    STATE(527), 1,
      sym_vSetProj,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(370), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(18), 2,
      sym_integer,
      sym_real,
    STATE(21), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(25), 2,
      sym_constant,
      sym_setBagExpr,
  [3348] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      aux_sym_integer_token1,
    ACTIONS(360), 1,
      anon_sym_AT_AT,
    ACTIONS(362), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(19), 1,
      sym_globalAccumName,
    STATE(54), 1,
      sym_expr,
    STATE(76), 1,
      sym_name,
    STATE(525), 1,
      sym_condition,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(364), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(18), 2,
      sym_integer,
      sym_real,
    STATE(21), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(25), 2,
      sym_constant,
      sym_setBagExpr,
  [3408] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_DOT,
    ACTIONS(161), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(158), 18,
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
  [3440] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(74), 1,
      aux_sym_name_repeat1,
    ACTIONS(398), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(400), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(206), 17,
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
  [3474] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(74), 1,
      aux_sym_name_repeat1,
    ACTIONS(402), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(405), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(188), 17,
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
  [3508] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_SLASH,
    STATE(97), 1,
      sym_mathOperator,
    ACTIONS(340), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(342), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(338), 10,
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
  [3544] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(161), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(158), 18,
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
  [3576] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(73), 1,
      aux_sym_name_repeat1,
    ACTIONS(410), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(412), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(198), 17,
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
  [3610] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      aux_sym_integer_token1,
    ACTIONS(360), 1,
      anon_sym_AT_AT,
    ACTIONS(362), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(19), 1,
      sym_globalAccumName,
    STATE(54), 1,
      sym_expr,
    STATE(76), 1,
      sym_name,
    STATE(536), 1,
      sym_condition,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(364), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(18), 2,
      sym_integer,
      sym_real,
    STATE(21), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(25), 2,
      sym_constant,
      sym_setBagExpr,
  [3670] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      aux_sym_integer_token1,
    ACTIONS(372), 1,
      anon_sym_AT_AT,
    ACTIONS(374), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(19), 1,
      sym_globalAccumName,
    STATE(57), 1,
      sym_expr,
    STATE(72), 1,
      sym_name,
    STATE(465), 1,
      sym_condition,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(376), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(18), 2,
      sym_integer,
      sym_real,
    STATE(21), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(25), 2,
      sym_constant,
      sym_setBagExpr,
  [3730] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      aux_sym_integer_token1,
    ACTIONS(360), 1,
      anon_sym_AT_AT,
    ACTIONS(362), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(19), 1,
      sym_globalAccumName,
    STATE(54), 1,
      sym_expr,
    STATE(76), 1,
      sym_name,
    STATE(508), 1,
      sym_condition,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(364), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(18), 2,
      sym_integer,
      sym_real,
    STATE(21), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(25), 2,
      sym_constant,
      sym_setBagExpr,
  [3790] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      aux_sym_integer_token1,
    ACTIONS(388), 1,
      anon_sym_AT_AT,
    ACTIONS(390), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(19), 1,
      sym_globalAccumName,
    STATE(50), 1,
      sym_expr,
    STATE(59), 1,
      sym_name,
    STATE(455), 1,
      sym_condition,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(392), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(18), 2,
      sym_integer,
      sym_real,
    STATE(21), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(25), 2,
      sym_constant,
      sym_setBagExpr,
  [3850] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_SLASH,
    STATE(66), 1,
      aux_sym_name_repeat1,
    ACTIONS(414), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(416), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(206), 16,
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
  [3886] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      aux_sym_integer_token1,
    ACTIONS(388), 1,
      anon_sym_AT_AT,
    ACTIONS(390), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(19), 1,
      sym_globalAccumName,
    STATE(50), 1,
      sym_expr,
    STATE(59), 1,
      sym_name,
    STATE(444), 1,
      sym_condition,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(392), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(18), 2,
      sym_integer,
      sym_real,
    STATE(21), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(25), 2,
      sym_constant,
      sym_setBagExpr,
  [3946] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      aux_sym_integer_token1,
    ACTIONS(418), 1,
      anon_sym_AT_AT,
    ACTIONS(420), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(19), 1,
      sym_globalAccumName,
    STATE(175), 1,
      sym_name,
    STATE(181), 1,
      sym_expr,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(422), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(18), 2,
      sym_integer,
      sym_real,
    STATE(21), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(25), 2,
      sym_constant,
      sym_setBagExpr,
  [4003] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      aux_sym_integer_token1,
    ACTIONS(418), 1,
      anon_sym_AT_AT,
    ACTIONS(420), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(19), 1,
      sym_globalAccumName,
    STATE(175), 1,
      sym_name,
    STATE(182), 1,
      sym_expr,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(422), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(18), 2,
      sym_integer,
      sym_real,
    STATE(21), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(25), 2,
      sym_constant,
      sym_setBagExpr,
  [4060] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      aux_sym_integer_token1,
    ACTIONS(424), 1,
      anon_sym_AT_AT,
    ACTIONS(426), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(19), 1,
      sym_globalAccumName,
    STATE(161), 1,
      sym_expr,
    STATE(163), 1,
      sym_name,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(428), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(18), 2,
      sym_integer,
      sym_real,
    STATE(21), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(25), 2,
      sym_constant,
      sym_setBagExpr,
  [4117] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      aux_sym_integer_token1,
    ACTIONS(394), 1,
      anon_sym_AT_AT,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(19), 1,
      sym_globalAccumName,
    STATE(166), 1,
      sym_name,
    STATE(212), 1,
      sym_expr,
    ACTIONS(45), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(18), 2,
      sym_integer,
      sym_real,
    STATE(21), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(25), 2,
      sym_constant,
      sym_setBagExpr,
  [4174] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      aux_sym_integer_token1,
    ACTIONS(430), 1,
      anon_sym_AT_AT,
    ACTIONS(432), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(19), 1,
      sym_globalAccumName,
    STATE(160), 1,
      sym_name,
    STATE(164), 1,
      sym_expr,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(434), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(18), 2,
      sym_integer,
      sym_real,
    STATE(21), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(25), 2,
      sym_constant,
      sym_setBagExpr,
  [4231] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      aux_sym_integer_token1,
    ACTIONS(394), 1,
      anon_sym_AT_AT,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(19), 1,
      sym_globalAccumName,
    STATE(166), 1,
      sym_name,
    STATE(196), 1,
      sym_expr,
    ACTIONS(45), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(18), 2,
      sym_integer,
      sym_real,
    STATE(21), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(25), 2,
      sym_constant,
      sym_setBagExpr,
  [4288] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      aux_sym_integer_token1,
    ACTIONS(360), 1,
      anon_sym_AT_AT,
    ACTIONS(362), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(19), 1,
      sym_globalAccumName,
    STATE(62), 1,
      sym_expr,
    STATE(76), 1,
      sym_name,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(364), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(18), 2,
      sym_integer,
      sym_real,
    STATE(21), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(25), 2,
      sym_constant,
      sym_setBagExpr,
  [4345] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      aux_sym_integer_token1,
    ACTIONS(436), 1,
      anon_sym_AT_AT,
    ACTIONS(438), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(19), 1,
      sym_globalAccumName,
    STATE(170), 1,
      sym_expr,
    STATE(180), 1,
      sym_name,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(440), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(18), 2,
      sym_integer,
      sym_real,
    STATE(21), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(25), 2,
      sym_constant,
      sym_setBagExpr,
  [4402] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      aux_sym_integer_token1,
    ACTIONS(436), 1,
      anon_sym_AT_AT,
    ACTIONS(438), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(19), 1,
      sym_globalAccumName,
    STATE(179), 1,
      sym_expr,
    STATE(180), 1,
      sym_name,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(440), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(18), 2,
      sym_integer,
      sym_real,
    STATE(21), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(25), 2,
      sym_constant,
      sym_setBagExpr,
  [4459] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      aux_sym_integer_token1,
    ACTIONS(442), 1,
      anon_sym_AT_AT,
    ACTIONS(444), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(19), 1,
      sym_globalAccumName,
    STATE(176), 1,
      sym_expr,
    STATE(178), 1,
      sym_name,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(446), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(18), 2,
      sym_integer,
      sym_real,
    STATE(21), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(25), 2,
      sym_constant,
      sym_setBagExpr,
  [4516] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      aux_sym_integer_token1,
    ACTIONS(418), 1,
      anon_sym_AT_AT,
    ACTIONS(420), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(19), 1,
      sym_globalAccumName,
    STATE(175), 1,
      sym_name,
    STATE(177), 1,
      sym_expr,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(422), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(18), 2,
      sym_integer,
      sym_real,
    STATE(21), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(25), 2,
      sym_constant,
      sym_setBagExpr,
  [4573] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      aux_sym_integer_token1,
    ACTIONS(442), 1,
      anon_sym_AT_AT,
    ACTIONS(444), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(19), 1,
      sym_globalAccumName,
    STATE(173), 1,
      sym_expr,
    STATE(178), 1,
      sym_name,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(446), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(18), 2,
      sym_integer,
      sym_real,
    STATE(21), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(25), 2,
      sym_constant,
      sym_setBagExpr,
  [4630] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      aux_sym_integer_token1,
    ACTIONS(394), 1,
      anon_sym_AT_AT,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(19), 1,
      sym_globalAccumName,
    STATE(166), 1,
      sym_name,
    STATE(191), 1,
      sym_expr,
    ACTIONS(45), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(18), 2,
      sym_integer,
      sym_real,
    STATE(21), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(25), 2,
      sym_constant,
      sym_setBagExpr,
  [4687] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      aux_sym_integer_token1,
    ACTIONS(372), 1,
      anon_sym_AT_AT,
    ACTIONS(374), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(19), 1,
      sym_globalAccumName,
    STATE(72), 1,
      sym_name,
    STATE(75), 1,
      sym_expr,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(376), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(18), 2,
      sym_integer,
      sym_real,
    STATE(21), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(25), 2,
      sym_constant,
      sym_setBagExpr,
  [4744] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      aux_sym_integer_token1,
    ACTIONS(394), 1,
      anon_sym_AT_AT,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(19), 1,
      sym_globalAccumName,
    STATE(166), 1,
      sym_name,
    STATE(172), 1,
      sym_expr,
    ACTIONS(45), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(18), 2,
      sym_integer,
      sym_real,
    STATE(21), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(25), 2,
      sym_constant,
      sym_setBagExpr,
  [4801] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      aux_sym_integer_token1,
    ACTIONS(418), 1,
      anon_sym_AT_AT,
    ACTIONS(420), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(19), 1,
      sym_globalAccumName,
    STATE(175), 1,
      sym_name,
    STATE(183), 1,
      sym_expr,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(422), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(18), 2,
      sym_integer,
      sym_real,
    STATE(21), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(25), 2,
      sym_constant,
      sym_setBagExpr,
  [4858] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      aux_sym_integer_token1,
    ACTIONS(430), 1,
      anon_sym_AT_AT,
    ACTIONS(432), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(19), 1,
      sym_globalAccumName,
    STATE(160), 1,
      sym_name,
    STATE(162), 1,
      sym_expr,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(434), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(18), 2,
      sym_integer,
      sym_real,
    STATE(21), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(25), 2,
      sym_constant,
      sym_setBagExpr,
  [4915] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      aux_sym_integer_token1,
    ACTIONS(366), 1,
      anon_sym_AT_AT,
    ACTIONS(368), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(19), 1,
      sym_globalAccumName,
    STATE(167), 1,
      sym_name,
    STATE(168), 1,
      sym_expr,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(370), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(18), 2,
      sym_integer,
      sym_real,
    STATE(21), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(25), 2,
      sym_constant,
      sym_setBagExpr,
  [4972] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(316), 1,
      anon_sym_AT_AT,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(320), 1,
      anon_sym__,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      aux_sym_integer_token1,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(19), 1,
      sym_globalAccumName,
    STATE(148), 1,
      sym_expr,
    STATE(150), 1,
      sym_name,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(326), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(18), 2,
      sym_integer,
      sym_real,
    STATE(21), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(25), 2,
      sym_constant,
      sym_setBagExpr,
  [5029] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      aux_sym_integer_token1,
    ACTIONS(354), 1,
      anon_sym_AT_AT,
    ACTIONS(356), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(19), 1,
      sym_globalAccumName,
    STATE(55), 1,
      sym_name,
    STATE(56), 1,
      sym_expr,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(358), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(18), 2,
      sym_integer,
      sym_real,
    STATE(21), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(25), 2,
      sym_constant,
      sym_setBagExpr,
  [5086] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      aux_sym_integer_token1,
    ACTIONS(424), 1,
      anon_sym_AT_AT,
    ACTIONS(426), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(19), 1,
      sym_globalAccumName,
    STATE(163), 1,
      sym_name,
    STATE(165), 1,
      sym_expr,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(428), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(18), 2,
      sym_integer,
      sym_real,
    STATE(21), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(25), 2,
      sym_constant,
      sym_setBagExpr,
  [5143] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      aux_sym_integer_token1,
    ACTIONS(388), 1,
      anon_sym_AT_AT,
    ACTIONS(390), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(19), 1,
      sym_globalAccumName,
    STATE(58), 1,
      sym_expr,
    STATE(59), 1,
      sym_name,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(392), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(18), 2,
      sym_integer,
      sym_real,
    STATE(21), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(25), 2,
      sym_constant,
      sym_setBagExpr,
  [5200] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_SLASH,
    STATE(110), 1,
      aux_sym_name_repeat1,
    ACTIONS(448), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(450), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(198), 14,
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
  [5234] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_SLASH,
    STATE(108), 1,
      aux_sym_name_repeat1,
    ACTIONS(452), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(454), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(206), 14,
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
  [5268] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_SLASH,
    STATE(108), 1,
      aux_sym_name_repeat1,
    ACTIONS(456), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(459), 2,
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
  [5302] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_SLASH,
    STATE(107), 1,
      aux_sym_name_repeat1,
    ACTIONS(462), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(464), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(198), 14,
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
  [5336] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_SLASH,
    STATE(111), 1,
      aux_sym_name_repeat1,
    ACTIONS(466), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(468), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(206), 14,
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
  [5370] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_SLASH,
    STATE(111), 1,
      aux_sym_name_repeat1,
    ACTIONS(470), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(473), 2,
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
  [5404] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_SLASH,
    STATE(118), 1,
      aux_sym_name_repeat1,
    ACTIONS(476), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(478), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(206), 13,
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
  [5437] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_SLASH,
    ACTIONS(483), 1,
      aux_sym_name_token2,
    STATE(113), 1,
      aux_sym_name_repeat1,
    ACTIONS(480), 3,
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
  [5470] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_SLASH,
    ACTIONS(488), 1,
      aux_sym_name_token2,
    STATE(123), 1,
      aux_sym_name_repeat1,
    ACTIONS(486), 3,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
    ACTIONS(198), 13,
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
  [5503] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(495), 1,
      anon_sym__,
    ACTIONS(498), 1,
      aux_sym_printStmt_token1,
    ACTIONS(501), 1,
      aux_sym_returnStmt_token1,
    STATE(115), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(268), 1,
      sym_name,
    STATE(599), 1,
      sym_vertexSetName,
    STATE(600), 1,
      sym_gsqlSelectClause,
    STATE(674), 1,
      sym_queryBodyStmt,
    STATE(746), 1,
      sym_gsqlSelectBlock,
    ACTIONS(493), 2,
      aux_sym_queryBodyIfStmt_token3,
      aux_sym_queryBodyIfStmt_token4,
    ACTIONS(504), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(747), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [5552] = 14,
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
    STATE(115), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(268), 1,
      sym_name,
    STATE(599), 1,
      sym_vertexSetName,
    STATE(600), 1,
      sym_gsqlSelectClause,
    STATE(674), 1,
      sym_queryBodyStmt,
    STATE(746), 1,
      sym_gsqlSelectBlock,
    ACTIONS(45), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(507), 2,
      aux_sym_queryBodyIfStmt_token3,
      aux_sym_queryBodyIfStmt_token4,
    STATE(747), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [5601] = 14,
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
    STATE(686), 2,
      sym_accumType,
      sym_baseType,
    ACTIONS(21), 6,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
  [5650] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_SLASH,
    STATE(118), 1,
      aux_sym_name_repeat1,
    ACTIONS(509), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(512), 2,
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
  [5683] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_SLASH,
    STATE(122), 1,
      aux_sym_name_repeat1,
    ACTIONS(515), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(517), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(198), 13,
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
  [5716] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_SLASH,
    STATE(112), 1,
      aux_sym_name_repeat1,
    ACTIONS(519), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(521), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(198), 13,
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
  [5749] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_SLASH,
    STATE(121), 1,
      aux_sym_name_repeat1,
    ACTIONS(523), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(526), 2,
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
  [5782] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_SLASH,
    STATE(126), 1,
      aux_sym_name_repeat1,
    ACTIONS(529), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(531), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(206), 13,
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
  [5815] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_SLASH,
    ACTIONS(535), 1,
      aux_sym_name_token2,
    STATE(113), 1,
      aux_sym_name_repeat1,
    ACTIONS(533), 3,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
    ACTIONS(206), 13,
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
  [5848] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_SLASH,
    STATE(125), 1,
      aux_sym_name_repeat1,
    ACTIONS(537), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(539), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(198), 13,
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
  [5881] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_SLASH,
    STATE(121), 1,
      aux_sym_name_repeat1,
    ACTIONS(541), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(543), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(206), 13,
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
  [5914] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_SLASH,
    STATE(126), 1,
      aux_sym_name_repeat1,
    ACTIONS(545), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(548), 2,
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
  [5947] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(41), 1,
      aux_sym_printStmt_token1,
    ACTIONS(43), 1,
      aux_sym_returnStmt_token1,
    ACTIONS(551), 1,
      aux_sym_queryBodyIfStmt_token1,
    STATE(143), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(268), 1,
      sym_name,
    STATE(599), 1,
      sym_vertexSetName,
    STATE(600), 1,
      sym_gsqlSelectClause,
    STATE(663), 1,
      sym_queryBodyStmts,
    STATE(688), 1,
      sym_queryBodyStmt,
    STATE(746), 1,
      sym_gsqlSelectBlock,
    ACTIONS(45), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(747), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [5995] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(493), 1,
      anon_sym_RBRACE,
    ACTIONS(495), 1,
      anon_sym__,
    ACTIONS(498), 1,
      aux_sym_printStmt_token1,
    ACTIONS(501), 1,
      aux_sym_returnStmt_token1,
    STATE(128), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(268), 1,
      sym_name,
    STATE(599), 1,
      sym_vertexSetName,
    STATE(600), 1,
      sym_gsqlSelectClause,
    STATE(746), 1,
      sym_gsqlSelectBlock,
    STATE(749), 1,
      sym_queryBodyStmt,
    ACTIONS(504), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(747), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [6043] = 14,
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
    STATE(138), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(268), 1,
      sym_name,
    STATE(599), 1,
      sym_vertexSetName,
    STATE(600), 1,
      sym_gsqlSelectClause,
    STATE(740), 1,
      sym_queryBodyStmts,
    STATE(746), 1,
      sym_gsqlSelectBlock,
    STATE(749), 1,
      sym_queryBodyStmt,
    ACTIONS(45), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(747), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [6091] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(41), 1,
      aux_sym_printStmt_token1,
    ACTIONS(43), 1,
      aux_sym_returnStmt_token1,
    ACTIONS(551), 1,
      aux_sym_queryBodyIfStmt_token1,
    STATE(143), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(268), 1,
      sym_name,
    STATE(599), 1,
      sym_vertexSetName,
    STATE(600), 1,
      sym_gsqlSelectClause,
    STATE(679), 1,
      sym_queryBodyStmts,
    STATE(688), 1,
      sym_queryBodyStmt,
    STATE(746), 1,
      sym_gsqlSelectBlock,
    ACTIONS(45), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(747), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [6139] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_LPAREN,
    ACTIONS(555), 1,
      anon_sym_LT,
    ACTIONS(557), 1,
      anon_sym_AT_AT,
    ACTIONS(559), 1,
      anon_sym__,
    ACTIONS(561), 1,
      aux_sym_seed_token1,
    ACTIONS(563), 1,
      anon_sym_COLON,
    STATE(341), 1,
      sym_edgeSetType,
    STATE(426), 1,
      sym_name,
    STATE(514), 1,
      sym_atomicEdgeType,
    STATE(576), 1,
      sym_atomicEdgePattern,
    STATE(577), 1,
      sym_stepEdgeTypes,
    STATE(660), 1,
      sym_pathEdgePattern,
    STATE(673), 1,
      sym_stepEdgeSet,
    ACTIONS(278), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(427), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_edgeType,
  [6191] = 13,
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
    ACTIONS(565), 1,
      anon_sym_RPAREN,
    ACTIONS(567), 1,
      anon_sym_LT,
    ACTIONS(571), 1,
      anon_sym_FILE,
    STATE(399), 1,
      sym_parameterType,
    STATE(540), 1,
      sym_baseType,
    STATE(692), 1,
      sym_parameterList,
    ACTIONS(569), 2,
      anon_sym_SET,
      anon_sym_BAG,
    ACTIONS(21), 6,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
  [6237] = 13,
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
    ACTIONS(567), 1,
      anon_sym_LT,
    ACTIONS(571), 1,
      anon_sym_FILE,
    ACTIONS(573), 1,
      anon_sym_RPAREN,
    STATE(399), 1,
      sym_parameterType,
    STATE(540), 1,
      sym_baseType,
    STATE(724), 1,
      sym_parameterList,
    ACTIONS(569), 2,
      anon_sym_SET,
      anon_sym_BAG,
    ACTIONS(21), 6,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
  [6283] = 14,
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
    STATE(116), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(268), 1,
      sym_name,
    STATE(558), 1,
      sym_queryBodyStmts,
    STATE(599), 1,
      sym_vertexSetName,
    STATE(600), 1,
      sym_gsqlSelectClause,
    STATE(674), 1,
      sym_queryBodyStmt,
    STATE(746), 1,
      sym_gsqlSelectBlock,
    ACTIONS(45), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(747), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [6331] = 13,
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
    ACTIONS(567), 1,
      anon_sym_LT,
    ACTIONS(571), 1,
      anon_sym_FILE,
    ACTIONS(575), 1,
      anon_sym_RPAREN,
    STATE(399), 1,
      sym_parameterType,
    STATE(540), 1,
      sym_baseType,
    STATE(706), 1,
      sym_parameterList,
    ACTIONS(569), 2,
      anon_sym_SET,
      anon_sym_BAG,
    ACTIONS(21), 6,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
  [6377] = 14,
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
    STATE(116), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(268), 1,
      sym_name,
    STATE(524), 1,
      sym_queryBodyStmts,
    STATE(599), 1,
      sym_vertexSetName,
    STATE(600), 1,
      sym_gsqlSelectClause,
    STATE(674), 1,
      sym_queryBodyStmt,
    STATE(746), 1,
      sym_gsqlSelectBlock,
    ACTIONS(45), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(747), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [6425] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(493), 1,
      aux_sym_queryBodyIfStmt_token4,
    ACTIONS(495), 1,
      anon_sym__,
    ACTIONS(498), 1,
      aux_sym_printStmt_token1,
    ACTIONS(501), 1,
      aux_sym_returnStmt_token1,
    STATE(137), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(268), 1,
      sym_name,
    STATE(599), 1,
      sym_vertexSetName,
    STATE(600), 1,
      sym_gsqlSelectClause,
    STATE(688), 1,
      sym_queryBodyStmt,
    STATE(746), 1,
      sym_gsqlSelectBlock,
    ACTIONS(504), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(747), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [6473] = 14,
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
    ACTIONS(507), 1,
      anon_sym_RBRACE,
    STATE(128), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(268), 1,
      sym_name,
    STATE(599), 1,
      sym_vertexSetName,
    STATE(600), 1,
      sym_gsqlSelectClause,
    STATE(746), 1,
      sym_gsqlSelectBlock,
    STATE(749), 1,
      sym_queryBodyStmt,
    ACTIONS(45), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(747), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [6521] = 13,
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
    ACTIONS(567), 1,
      anon_sym_LT,
    ACTIONS(571), 1,
      anon_sym_FILE,
    ACTIONS(577), 1,
      anon_sym_RPAREN,
    STATE(399), 1,
      sym_parameterType,
    STATE(540), 1,
      sym_baseType,
    STATE(737), 1,
      sym_parameterList,
    ACTIONS(569), 2,
      anon_sym_SET,
      anon_sym_BAG,
    ACTIONS(21), 6,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
  [6567] = 14,
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
    STATE(138), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(268), 1,
      sym_name,
    STATE(599), 1,
      sym_vertexSetName,
    STATE(600), 1,
      sym_gsqlSelectClause,
    STATE(729), 1,
      sym_queryBodyStmts,
    STATE(746), 1,
      sym_gsqlSelectBlock,
    STATE(749), 1,
      sym_queryBodyStmt,
    ACTIONS(45), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(747), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [6615] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_LPAREN,
    ACTIONS(555), 1,
      anon_sym_LT,
    ACTIONS(557), 1,
      anon_sym_AT_AT,
    ACTIONS(559), 1,
      anon_sym__,
    ACTIONS(561), 1,
      aux_sym_seed_token1,
    ACTIONS(563), 1,
      anon_sym_COLON,
    STATE(426), 1,
      sym_name,
    STATE(514), 1,
      sym_atomicEdgeType,
    STATE(521), 1,
      sym_edgeSetType,
    STATE(576), 1,
      sym_atomicEdgePattern,
    STATE(577), 1,
      sym_stepEdgeTypes,
    STATE(673), 1,
      sym_stepEdgeSet,
    STATE(675), 1,
      sym_pathEdgePattern,
    ACTIONS(278), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(427), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_edgeType,
  [6667] = 14,
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
    STATE(116), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(268), 1,
      sym_name,
    STATE(509), 1,
      sym_queryBodyStmts,
    STATE(599), 1,
      sym_vertexSetName,
    STATE(600), 1,
      sym_gsqlSelectClause,
    STATE(674), 1,
      sym_queryBodyStmt,
    STATE(746), 1,
      sym_gsqlSelectBlock,
    ACTIONS(45), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(747), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [6715] = 14,
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
    ACTIONS(507), 1,
      aux_sym_queryBodyIfStmt_token4,
    STATE(137), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(268), 1,
      sym_name,
    STATE(599), 1,
      sym_vertexSetName,
    STATE(600), 1,
      sym_gsqlSelectClause,
    STATE(688), 1,
      sym_queryBodyStmt,
    STATE(746), 1,
      sym_gsqlSelectBlock,
    ACTIONS(45), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(747), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [6763] = 12,
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
    ACTIONS(579), 1,
      aux_sym_accumType_token5,
    STATE(418), 1,
      sym_name,
    STATE(733), 1,
      sym_elementType,
    ACTIONS(45), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(603), 2,
      sym_tupleType,
      sym_baseType,
    ACTIONS(21), 5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
  [6806] = 12,
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
    ACTIONS(276), 1,
      anon_sym__,
    ACTIONS(579), 1,
      aux_sym_accumType_token5,
    STATE(418), 1,
      sym_name,
    STATE(735), 1,
      sym_elementType,
    ACTIONS(278), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(603), 2,
      sym_tupleType,
      sym_baseType,
    ACTIONS(21), 5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
  [6849] = 12,
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
    ACTIONS(581), 1,
      anon_sym__,
    STATE(159), 1,
      sym_name,
    STATE(207), 1,
      sym_fieldName,
    STATE(389), 1,
      sym_baseType,
    STATE(719), 1,
      sym_tupleFields,
    ACTIONS(583), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(21), 6,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
  [6892] = 11,
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
    ACTIONS(581), 1,
      anon_sym__,
    STATE(159), 1,
      sym_name,
    STATE(202), 1,
      sym_fieldName,
    STATE(353), 1,
      sym_baseType,
    ACTIONS(583), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(21), 6,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
  [6932] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_SLASH,
    STATE(102), 1,
      sym_mathOperator,
    ACTIONS(338), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
    ACTIONS(342), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [6960] = 14,
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
    STATE(269), 1,
      sym_name,
    STATE(304), 1,
      sym_vertexSetType,
    STATE(305), 1,
      sym_stepVertexSet,
    STATE(306), 1,
      sym_stepVertexTypes,
    STATE(307), 1,
      sym_atomicVertexType,
    STATE(382), 1,
      sym_pathPattern,
    ACTIONS(595), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(264), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexType,
  [7006] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_SLASH,
    ACTIONS(597), 1,
      anon_sym_DOT,
    ACTIONS(158), 14,
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
  [7032] = 14,
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
    STATE(269), 1,
      sym_name,
    STATE(304), 1,
      sym_vertexSetType,
    STATE(305), 1,
      sym_stepVertexSet,
    STATE(306), 1,
      sym_stepVertexTypes,
    STATE(307), 1,
      sym_atomicVertexType,
    STATE(454), 1,
      sym_pathPattern,
    ACTIONS(595), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(264), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexType,
  [7078] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_SLASH,
    ACTIONS(601), 1,
      aux_sym_printExpr_token1,
    ACTIONS(603), 1,
      anon_sym_LBRACK,
    STATE(102), 1,
      sym_mathOperator,
    ACTIONS(599), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
    ACTIONS(298), 8,
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
    ACTIONS(161), 1,
      anon_sym_SLASH,
    ACTIONS(597), 1,
      anon_sym_DOT,
    ACTIONS(605), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
    ACTIONS(158), 10,
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
  [7138] = 11,
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
    ACTIONS(567), 1,
      anon_sym_LT,
    ACTIONS(571), 1,
      anon_sym_FILE,
    STATE(377), 1,
      sym_parameterType,
    STATE(540), 1,
      sym_baseType,
    ACTIONS(569), 2,
      anon_sym_SET,
      anon_sym_BAG,
    ACTIONS(21), 6,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
  [7178] = 13,
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
    STATE(269), 1,
      sym_name,
    STATE(304), 1,
      sym_vertexSetType,
    STATE(306), 1,
      sym_stepVertexTypes,
    STATE(307), 1,
      sym_atomicVertexType,
    STATE(404), 1,
      sym_stepVertexSet,
    ACTIONS(595), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(264), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexType,
  [7221] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(156), 1,
      aux_sym_name_repeat1,
    ACTIONS(609), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(612), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(188), 10,
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
  [7248] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(156), 1,
      aux_sym_name_repeat1,
    ACTIONS(615), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(617), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(206), 10,
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
  [7275] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(157), 1,
      aux_sym_name_repeat1,
    ACTIONS(619), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(621), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(198), 10,
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
  [7302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 15,
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
  [7323] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_SLASH,
    ACTIONS(625), 1,
      anon_sym_DOT,
    ACTIONS(158), 12,
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
  [7347] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_SLASH,
    STATE(104), 1,
      sym_mathOperator,
    ACTIONS(627), 4,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_perClauseV2_token1,
    ACTIONS(298), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7373] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_SLASH,
    STATE(88), 1,
      sym_mathOperator,
    ACTIONS(627), 4,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_printStmt_token3,
    ACTIONS(298), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7399] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_SLASH,
    ACTIONS(629), 1,
      anon_sym_DOT,
    ACTIONS(158), 12,
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
  [7423] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_SLASH,
    STATE(88), 1,
      sym_mathOperator,
    ACTIONS(338), 4,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_printStmt_token3,
    ACTIONS(342), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7449] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_SLASH,
    STATE(104), 1,
      sym_mathOperator,
    ACTIONS(338), 4,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_perClauseV2_token1,
    ACTIONS(342), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7475] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_SLASH,
    ACTIONS(631), 1,
      anon_sym_DOT,
    ACTIONS(158), 11,
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
  [7498] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_SLASH,
    ACTIONS(633), 1,
      anon_sym_DOT,
    ACTIONS(158), 11,
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
  [7521] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_SLASH,
    STATE(101), 1,
      sym_mathOperator,
    ACTIONS(338), 3,
      anon_sym_COMMA,
      aux_sym_printExpr_token1,
      anon_sym_RBRACK,
    ACTIONS(342), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7546] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_SLASH,
    ACTIONS(635), 1,
      anon_sym_RPAREN,
    ACTIONS(637), 1,
      anon_sym_COMMA,
    STATE(98), 1,
      sym_mathOperator,
    STATE(506), 1,
      aux_sym_argList_repeat1,
    ACTIONS(298), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7575] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_SLASH,
    STATE(91), 1,
      sym_mathOperator,
    ACTIONS(338), 3,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_queryBodyIfStmt_token2,
    ACTIONS(342), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7600] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_SLASH,
    ACTIONS(641), 1,
      aux_sym_printExpr_token1,
    STATE(101), 1,
      sym_mathOperator,
    ACTIONS(639), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(298), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7627] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_SLASH,
    STATE(98), 1,
      sym_mathOperator,
    ACTIONS(338), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(342), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7652] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_SLASH,
    STATE(93), 1,
      sym_mathOperator,
    ACTIONS(627), 3,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
    ACTIONS(298), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7677] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_AT_AT,
    ACTIONS(643), 1,
      anon_sym_RBRACE,
    ACTIONS(645), 1,
      anon_sym__,
    ACTIONS(647), 1,
      aux_sym_seed_token1,
    ACTIONS(649), 1,
      aux_sym_seed_token2,
    STATE(529), 1,
      sym_name,
    STATE(535), 1,
      sym_seed,
    STATE(709), 1,
      sym_vertexType,
    ACTIONS(278), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(551), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexSetName,
  [7714] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_SLASH,
    ACTIONS(651), 1,
      anon_sym_DOT,
    ACTIONS(158), 11,
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
  [7737] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_SLASH,
    STATE(93), 1,
      sym_mathOperator,
    ACTIONS(338), 3,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
    ACTIONS(342), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7762] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_SLASH,
    STATE(99), 1,
      sym_mathOperator,
    ACTIONS(653), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
    ACTIONS(298), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7787] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_SLASH,
    ACTIONS(655), 1,
      anon_sym_DOT,
    ACTIONS(158), 11,
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
  [7810] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_SLASH,
    STATE(91), 1,
      sym_mathOperator,
    ACTIONS(627), 3,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_queryBodyIfStmt_token2,
    ACTIONS(298), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7835] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_SLASH,
    ACTIONS(657), 1,
      anon_sym_DOT,
    ACTIONS(158), 11,
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
  [7858] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_SLASH,
    STATE(99), 1,
      sym_mathOperator,
    ACTIONS(659), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
    ACTIONS(298), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7883] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_SLASH,
    STATE(99), 1,
      sym_mathOperator,
    ACTIONS(661), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
    ACTIONS(298), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7908] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_SLASH,
    STATE(99), 1,
      sym_mathOperator,
    ACTIONS(338), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
    ACTIONS(342), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7933] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      aux_sym_integer_token1,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(578), 1,
      sym_constant,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(18), 2,
      sym_integer,
      sym_real,
    STATE(21), 2,
      sym_stringLiteral,
      sym_numeric,
  [7967] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(185), 1,
      aux_sym_name_repeat1,
    ACTIONS(663), 4,
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
  [7989] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(199), 1,
      aux_sym_name_repeat1,
    ACTIONS(666), 4,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(198), 7,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_DOT_STAR,
      anon_sym_COLON,
  [8011] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      aux_sym_integer_token1,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(589), 1,
      sym_constant,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(18), 2,
      sym_integer,
      sym_real,
    STATE(21), 2,
      sym_stringLiteral,
      sym_numeric,
  [8045] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_LBRACE,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    ACTIONS(672), 1,
      anon_sym__,
    ACTIONS(674), 1,
      aux_sym_gsqlSelectClause_token1,
    STATE(268), 1,
      sym_name,
    STATE(332), 1,
      sym_vertexSetName,
    STATE(463), 1,
      sym_simpleSet,
    STATE(600), 1,
      sym_gsqlSelectClause,
    ACTIONS(676), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(726), 2,
      sym_seedSet,
      sym_gsqlSelectBlock,
  [8081] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      aux_sym_integer_token1,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(531), 1,
      sym_constant,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(18), 2,
      sym_integer,
      sym_real,
    STATE(21), 2,
      sym_stringLiteral,
      sym_numeric,
  [8115] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      aux_sym_integer_token1,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(468), 1,
      sym_constant,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(18), 2,
      sym_integer,
      sym_real,
    STATE(21), 2,
      sym_stringLiteral,
      sym_numeric,
  [8149] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_SLASH,
    STATE(98), 1,
      sym_mathOperator,
    ACTIONS(678), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(298), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [8173] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(198), 1,
      aux_sym_name_repeat1,
    ACTIONS(680), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(682), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(198), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [8197] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_AT_AT,
    ACTIONS(645), 1,
      anon_sym__,
    ACTIONS(647), 1,
      aux_sym_seed_token1,
    ACTIONS(649), 1,
      aux_sym_seed_token2,
    STATE(529), 1,
      sym_name,
    STATE(587), 1,
      sym_seed,
    STATE(709), 1,
      sym_vertexType,
    ACTIONS(278), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(551), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexSetName,
  [8231] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      aux_sym_integer_token1,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(480), 1,
      sym_constant,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(18), 2,
      sym_integer,
      sym_real,
    STATE(21), 2,
      sym_stringLiteral,
      sym_numeric,
  [8265] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      aux_sym_integer_token1,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(575), 1,
      sym_constant,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(18), 2,
      sym_integer,
      sym_real,
    STATE(21), 2,
      sym_stringLiteral,
      sym_numeric,
  [8299] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_SLASH,
    STATE(98), 1,
      sym_mathOperator,
    ACTIONS(684), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(298), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [8323] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(197), 1,
      aux_sym_name_repeat1,
    ACTIONS(686), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(689), 2,
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
  [8347] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(197), 1,
      aux_sym_name_repeat1,
    ACTIONS(692), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(694), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(206), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [8371] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(185), 1,
      aux_sym_name_repeat1,
    ACTIONS(696), 4,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(206), 7,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_DOT_STAR,
      anon_sym_COLON,
  [8393] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      aux_sym_integer_token1,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    STATE(538), 1,
      sym_constant,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(18), 2,
      sym_integer,
      sym_real,
    STATE(21), 2,
      sym_stringLiteral,
      sym_numeric,
  [8427] = 7,
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
    STATE(701), 1,
      sym_baseType,
    ACTIONS(21), 6,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
  [8454] = 7,
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
    STATE(597), 1,
      sym_baseType,
    ACTIONS(21), 6,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
  [8481] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(206), 1,
      aux_sym_name_repeat1,
    ACTIONS(698), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(700), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(198), 6,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [8504] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_AT_AT,
    ACTIONS(561), 1,
      aux_sym_seed_token1,
    ACTIONS(702), 1,
      anon_sym__,
    STATE(426), 1,
      sym_name,
    STATE(521), 1,
      sym_edgeSetType,
    STATE(563), 1,
      sym_atomicEdgeType,
    ACTIONS(45), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(427), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_edgeType,
  [8535] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_LBRACE,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    STATE(268), 1,
      sym_name,
    STATE(332), 1,
      sym_vertexSetName,
    STATE(428), 1,
      sym_simpleSet,
    STATE(600), 1,
      sym_gsqlSelectClause,
    STATE(672), 2,
      sym_seedSet,
      sym_gsqlSelectBlock,
    ACTIONS(672), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [8566] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(208), 1,
      aux_sym_name_repeat1,
    ACTIONS(704), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(706), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(206), 6,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [8589] = 7,
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
    STATE(478), 1,
      sym_baseType,
    ACTIONS(21), 6,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
  [8616] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(208), 1,
      aux_sym_name_repeat1,
    ACTIONS(708), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(711), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(188), 6,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [8639] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(198), 1,
      aux_sym_name_repeat1,
    ACTIONS(680), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(682), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(714), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [8662] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      anon_sym_DASH,
    ACTIONS(719), 1,
      aux_sym_integer_token1,
    STATE(545), 1,
      aux_sym_integer_repeat1,
    STATE(642), 1,
      sym_simpleSize,
    STATE(680), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(681), 3,
      sym_integer,
      sym_paramName,
      sym_varName,
  [8691] = 7,
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
    STATE(720), 1,
      sym_baseType,
    ACTIONS(21), 6,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
  [8718] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_SLASH,
    ACTIONS(721), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      sym_mathOperator,
    ACTIONS(298), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [8741] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(723), 9,
      anon_sym_LPAREN,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      anon_sym_DASH,
      anon_sym_AT_AT,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_DQUOTE,
      aux_sym_integer_token1,
  [8760] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(727), 9,
      anon_sym_LPAREN,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      anon_sym_DASH,
      anon_sym_AT_AT,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_DQUOTE,
      aux_sym_integer_token1,
  [8779] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_AT_AT,
    STATE(451), 1,
      sym_dmlSubStmt,
    STATE(591), 1,
      sym_name,
    STATE(593), 1,
      sym_dmlSubStmtList,
    STATE(694), 1,
      sym_globalAccumName,
    STATE(495), 2,
      sym_gAccumAccumStmt,
      sym_assignStmt,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [8807] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_AT_AT,
    STATE(451), 1,
      sym_dmlSubStmt,
    STATE(586), 1,
      sym_dmlSubStmtList,
    STATE(591), 1,
      sym_name,
    STATE(694), 1,
      sym_globalAccumName,
    STATE(495), 2,
      sym_gAccumAccumStmt,
      sym_assignStmt,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [8835] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(217), 1,
      aux_sym_name_repeat1,
    ACTIONS(731), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(734), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(188), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
  [8856] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(231), 1,
      aux_sym_name_repeat1,
    ACTIONS(737), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(739), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(198), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
  [8877] = 2,
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
  [8892] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(228), 1,
      aux_sym_name_repeat1,
    ACTIONS(741), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(743), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(206), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_accumType_token11,
      aux_sym_accumType_token12,
  [8913] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_AT_AT,
    STATE(426), 1,
      sym_name,
    STATE(526), 1,
      sym_edgeSetType,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(427), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_edgeType,
  [8936] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(220), 1,
      aux_sym_name_repeat1,
    ACTIONS(745), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(747), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(198), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_accumType_token11,
      aux_sym_accumType_token12,
  [8957] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    STATE(714), 1,
      sym_name,
    STATE(512), 2,
      sym_stringLiteral,
      sym_paramName,
    STATE(715), 2,
      sym_fileVar,
      sym_filePath,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [8980] = 2,
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
  [8995] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    STATE(714), 1,
      sym_name,
    STATE(512), 2,
      sym_stringLiteral,
      sym_paramName,
    STATE(661), 2,
      sym_fileVar,
      sym_filePath,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9018] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_AT_AT,
    STATE(263), 1,
      sym_vertexSetType,
    STATE(269), 1,
      sym_name,
    ACTIONS(749), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(264), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexType,
  [9041] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    STATE(714), 1,
      sym_name,
    STATE(512), 2,
      sym_stringLiteral,
      sym_paramName,
    STATE(695), 2,
      sym_fileVar,
      sym_filePath,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9064] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(228), 1,
      aux_sym_name_repeat1,
    ACTIONS(751), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(754), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(188), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_accumType_token11,
      aux_sym_accumType_token12,
  [9085] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_AT_AT,
    STATE(255), 1,
      sym_vertexSetType,
    STATE(269), 1,
      sym_name,
    ACTIONS(749), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(264), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexType,
  [9108] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      aux_sym_name_token2,
    STATE(230), 1,
      aux_sym_name_repeat1,
    ACTIONS(757), 3,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
    ACTIONS(188), 4,
      anon_sym_LBRACE,
      anon_sym_API,
      anon_sym_SYNTAX,
      anon_sym_RETURNS,
  [9129] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(217), 1,
      aux_sym_name_repeat1,
    ACTIONS(763), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(765), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(206), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
  [9150] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_AT_AT,
    STATE(475), 1,
      sym_dmlSubStmt,
    STATE(591), 1,
      sym_name,
    STATE(694), 1,
      sym_globalAccumName,
    STATE(495), 2,
      sym_gAccumAccumStmt,
      sym_assignStmt,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9175] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      aux_sym_name_token2,
    STATE(236), 1,
      aux_sym_name_repeat1,
    ACTIONS(767), 3,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
    ACTIONS(198), 4,
      anon_sym_LBRACE,
      anon_sym_API,
      anon_sym_SYNTAX,
      anon_sym_RETURNS,
  [9196] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_PIPE,
    STATE(199), 1,
      aux_sym_name_repeat1,
    ACTIONS(771), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COLON,
    ACTIONS(666), 4,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9217] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    STATE(714), 1,
      sym_name,
    STATE(512), 2,
      sym_stringLiteral,
      sym_paramName,
    STATE(676), 2,
      sym_fileVar,
      sym_filePath,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9240] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      aux_sym_name_token2,
    STATE(230), 1,
      aux_sym_name_repeat1,
    ACTIONS(774), 3,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
    ACTIONS(206), 4,
      anon_sym_LBRACE,
      anon_sym_API,
      anon_sym_SYNTAX,
      anon_sym_RETURNS,
  [9261] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_SEMI,
    ACTIONS(780), 1,
      anon_sym_WHERE,
    ACTIONS(782), 1,
      aux_sym_perClauseV2_token1,
    STATE(311), 1,
      sym_whereClause,
    STATE(395), 1,
      sym_accumClause,
    STATE(604), 1,
      sym_perClauseV2,
    STATE(371), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [9287] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      anon_sym_AT_AT,
    STATE(262), 1,
      sym_globalAccumName,
    STATE(271), 1,
      sym_setBagExpr,
    STATE(334), 1,
      sym_name,
    ACTIONS(432), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9311] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_DOT_STAR,
    STATE(199), 1,
      aux_sym_name_repeat1,
    ACTIONS(784), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(666), 4,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9331] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(436), 1,
      anon_sym_AT_AT,
    STATE(262), 1,
      sym_globalAccumName,
    STATE(271), 1,
      sym_setBagExpr,
    STATE(424), 1,
      sym_name,
    ACTIONS(438), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9355] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(241), 1,
      aux_sym_name_repeat1,
    ACTIONS(787), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(790), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(188), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_CREATE_VERTEX_token2,
  [9375] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(241), 1,
      aux_sym_name_repeat1,
    ACTIONS(793), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(795), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(206), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_CREATE_VERTEX_token2,
  [9395] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(242), 1,
      aux_sym_name_repeat1,
    ACTIONS(797), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(799), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(198), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_CREATE_VERTEX_token2,
  [9415] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    STATE(476), 1,
      sym_name,
    STATE(716), 1,
      sym_filePath,
    STATE(512), 2,
      sym_stringLiteral,
      sym_paramName,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9437] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      anon_sym_AT_AT,
    STATE(258), 1,
      sym_setBagExpr,
    STATE(262), 1,
      sym_globalAccumName,
    STATE(334), 1,
      sym_name,
    ACTIONS(432), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9461] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_AT_AT,
    STATE(262), 1,
      sym_globalAccumName,
    STATE(271), 1,
      sym_setBagExpr,
    STATE(330), 1,
      sym_name,
    ACTIONS(426), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9485] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_PIPE,
    STATE(248), 1,
      aux_sym_stepVertexTypes_repeat1,
    ACTIONS(801), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [9503] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      anon_sym_PIPE,
    STATE(248), 1,
      aux_sym_stepVertexTypes_repeat1,
    ACTIONS(805), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [9521] = 9,
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
    STATE(585), 1,
      sym_accumType,
  [9549] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(442), 1,
      anon_sym_AT_AT,
    STATE(262), 1,
      sym_globalAccumName,
    STATE(271), 1,
      sym_setBagExpr,
    STATE(462), 1,
      sym_name,
    ACTIONS(444), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9573] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(436), 1,
      anon_sym_AT_AT,
    STATE(258), 1,
      sym_setBagExpr,
    STATE(262), 1,
      sym_globalAccumName,
    STATE(424), 1,
      sym_name,
    ACTIONS(438), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9597] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(493), 6,
      aux_sym_queryBodyIfStmt_token1,
      aux_sym_queryBodyIfStmt_token3,
      aux_sym_queryBodyIfStmt_token4,
      anon_sym__,
      aux_sym_printStmt_token1,
      aux_sym_returnStmt_token1,
  [9613] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(442), 1,
      anon_sym_AT_AT,
    STATE(258), 1,
      sym_setBagExpr,
    STATE(262), 1,
      sym_globalAccumName,
    STATE(462), 1,
      sym_name,
    ACTIONS(444), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9637] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_AT_AT,
    STATE(258), 1,
      sym_setBagExpr,
    STATE(262), 1,
      sym_globalAccumName,
    STATE(330), 1,
      sym_name,
    ACTIONS(426), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9661] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_PIPE,
    STATE(247), 1,
      aux_sym_stepVertexTypes_repeat1,
    ACTIONS(812), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [9679] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    STATE(476), 1,
      sym_name,
    STATE(671), 1,
      sym_filePath,
    STATE(512), 2,
      sym_stringLiteral,
      sym_paramName,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9701] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      anon_sym_LT,
    ACTIONS(814), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9716] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 7,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_queryBodyIfStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_perClauseV2_token1,
  [9729] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    STATE(268), 1,
      sym_name,
    STATE(359), 1,
      sym_simpleSet,
    STATE(363), 1,
      sym_vertexSetName,
    ACTIONS(672), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9750] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(42), 1,
      aux_sym_name_repeat1,
    ACTIONS(771), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
    ACTIONS(269), 4,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9767] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    STATE(268), 1,
      sym_name,
    STATE(363), 1,
      sym_vertexSetName,
    STATE(448), 1,
      sym_simpleSet,
    ACTIONS(672), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 7,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_queryBodyIfStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_perClauseV2_token1,
  [9801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [9814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [9827] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(493), 5,
      anon_sym_RBRACE,
      aux_sym_queryBodyIfStmt_token1,
      anon_sym__,
      aux_sym_printStmt_token1,
      aux_sym_returnStmt_token1,
  [9842] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(493), 5,
      aux_sym_queryBodyIfStmt_token1,
      aux_sym_queryBodyIfStmt_token4,
      anon_sym__,
      aux_sym_printStmt_token1,
      aux_sym_returnStmt_token1,
  [9857] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(494), 1,
      sym_alias,
    STATE(595), 1,
      sym_name,
    STATE(596), 2,
      sym_vertexAlias,
      sym_edgeAlias,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [9889] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [9902] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(595), 1,
      sym_name,
    STATE(613), 1,
      sym_alias,
    STATE(596), 2,
      sym_vertexAlias,
      sym_edgeAlias,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 7,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_queryBodyIfStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_perClauseV2_token1,
  [9934] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_AT,
    ACTIONS(829), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token2,
      anon_sym_AT_AT,
  [9948] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      aux_sym_createSignature_token1,
    ACTIONS(833), 1,
      ts_builtin_sym_end,
    STATE(769), 1,
      sym_createSignature,
    STATE(313), 3,
      sym_createQuery,
      sym_CREATE_VERTEX,
      aux_sym_source_file_repeat1,
  [9966] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym_localAccumName,
    STATE(26), 1,
      sym_name,
    ACTIONS(320), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9984] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_AT,
    STATE(23), 2,
      sym_localAccumName,
      sym_name,
    ACTIONS(444), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10000] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym_localAccumName,
    STATE(26), 1,
      sym_name,
    ACTIONS(362), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10030] = 3,
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
  [10044] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_AT,
    STATE(23), 2,
      sym_localAccumName,
      sym_name,
    ACTIONS(432), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10072] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10084] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      anon_sym_AT,
    ACTIONS(853), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token2,
      anon_sym_AT_AT,
  [10098] = 7,
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
    STATE(500), 1,
      sym_returns,
  [10120] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_DASH,
    STATE(302), 1,
      aux_sym_pathPattern_repeat1,
    ACTIONS(867), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [10136] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      aux_sym_fromClause_token1,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [10148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10160] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      aux_sym_fromClause_token1,
    STATE(298), 1,
      aux_sym_name_repeat1,
    ACTIONS(873), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(875), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10178] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym_localAccumName,
    STATE(26), 1,
      sym_name,
    ACTIONS(426), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10196] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_AT,
    STATE(23), 2,
      sym_localAccumName,
      sym_name,
    ACTIONS(438), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10212] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      anon_sym_AT,
    ACTIONS(881), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token2,
      anon_sym_AT_AT,
  [10226] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_RETURNS,
    ACTIONS(885), 1,
      anon_sym_LBRACE,
    ACTIONS(887), 1,
      anon_sym_FOR,
    ACTIONS(889), 1,
      anon_sym_API,
    ACTIONS(891), 1,
      anon_sym_SYNTAX,
    STATE(528), 1,
      sym_returns,
  [10248] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym_localAccumName,
    STATE(26), 1,
      sym_name,
    ACTIONS(368), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10266] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(717), 1,
      anon_sym_DASH,
    ACTIONS(719), 1,
      aux_sym_integer_token1,
    STATE(545), 1,
      aux_sym_integer_repeat1,
    STATE(640), 2,
      sym_stringLiteral,
      sym_integer,
  [10286] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      aux_sym_fromClause_token1,
    STATE(287), 1,
      aux_sym_name_repeat1,
    ACTIONS(895), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(897), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10304] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym_localAccumName,
    STATE(26), 1,
      sym_name,
    ACTIONS(420), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10322] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 1,
      anon_sym_AT,
    ACTIONS(901), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token2,
      anon_sym_AT_AT,
  [10336] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      anon_sym_DOLLAR,
    STATE(635), 2,
      sym_columnId,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10352] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      aux_sym_fromClause_token1,
    STATE(298), 1,
      aux_sym_name_repeat1,
    ACTIONS(907), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(910), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10370] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym_localAccumName,
    STATE(26), 1,
      sym_name,
    ACTIONS(390), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10388] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_RETURNS,
    ACTIONS(915), 1,
      anon_sym_LBRACE,
    ACTIONS(917), 1,
      anon_sym_FOR,
    ACTIONS(919), 1,
      anon_sym_API,
    ACTIONS(921), 1,
      anon_sym_SYNTAX,
    STATE(477), 1,
      sym_returns,
  [10410] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(923), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym_localAccumName,
    STATE(26), 1,
      sym_name,
    ACTIONS(374), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10428] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 1,
      anon_sym_DASH,
    STATE(302), 1,
      aux_sym_pathPattern_repeat1,
    ACTIONS(925), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [10444] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_AT,
    ACTIONS(930), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token2,
      anon_sym_AT_AT,
  [10458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(934), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [10470] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_DASH,
    STATE(284), 1,
      aux_sym_pathPattern_repeat1,
    ACTIONS(936), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [10486] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(940), 1,
      anon_sym_COLON,
    ACTIONS(938), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [10500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(942), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [10512] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      anon_sym_AT,
    STATE(23), 2,
      sym_localAccumName,
      sym_name,
    ACTIONS(426), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10528] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(946), 1,
      anon_sym_AT,
    ACTIONS(944), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token2,
      anon_sym_AT_AT,
  [10542] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym_localAccumName,
    STATE(26), 1,
      sym_name,
    ACTIONS(438), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10560] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      aux_sym_perClauseV2_token1,
    ACTIONS(948), 1,
      anon_sym_SEMI,
    STATE(390), 1,
      sym_accumClause,
    STATE(604), 1,
      sym_perClauseV2,
    STATE(388), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [10580] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym_localAccumName,
    STATE(26), 1,
      sym_name,
    ACTIONS(444), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10598] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(950), 1,
      ts_builtin_sym_end,
    ACTIONS(952), 1,
      aux_sym_createSignature_token1,
    STATE(769), 1,
      sym_createSignature,
    STATE(313), 3,
      sym_createQuery,
      sym_CREATE_VERTEX,
      aux_sym_source_file_repeat1,
  [10616] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym_localAccumName,
    STATE(26), 1,
      sym_name,
    ACTIONS(432), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(955), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10646] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_RETURNS,
    ACTIONS(957), 1,
      anon_sym_LBRACE,
    ACTIONS(959), 1,
      anon_sym_FOR,
    ACTIONS(961), 1,
      anon_sym_API,
    ACTIONS(963), 1,
      anon_sym_SYNTAX,
    STATE(487), 1,
      sym_returns,
  [10668] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_RETURNS,
    ACTIONS(965), 1,
      anon_sym_LBRACE,
    ACTIONS(967), 1,
      anon_sym_FOR,
    ACTIONS(969), 1,
      anon_sym_API,
    ACTIONS(971), 1,
      anon_sym_SYNTAX,
    STATE(469), 1,
      sym_returns,
  [10690] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(973), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym_localAccumName,
    STATE(26), 1,
      sym_name,
    ACTIONS(356), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10708] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(975), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym_localAccumName,
    STATE(26), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10726] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(16), 1,
      sym_accumName,
    ACTIONS(390), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10741] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(285), 1,
      sym_name,
    STATE(346), 1,
      sym_vertexAlias,
    ACTIONS(749), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10756] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(764), 1,
      sym_queryName,
    STATE(765), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10771] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(16), 1,
      sym_accumName,
    ACTIONS(438), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10786] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(689), 1,
      sym_syntaxName,
    STATE(702), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10801] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(744), 1,
      sym_queryName,
    STATE(765), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10816] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(372), 1,
      sym_graphName,
    STATE(447), 1,
      sym_name,
    ACTIONS(977), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10831] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(16), 1,
      sym_accumName,
    ACTIONS(420), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10846] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(16), 1,
      sym_accumName,
    ACTIONS(320), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10861] = 4,
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
  [10876] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(979), 1,
      anon_sym_DOT,
    ACTIONS(820), 4,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_perClauseV2_token1,
  [10889] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(741), 1,
      sym_name,
    STATE(742), 1,
      sym_fileVar,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10904] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(981), 1,
      anon_sym_EQ,
    ACTIONS(983), 4,
      anon_sym_SEMI,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [10917] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(418), 1,
      sym_name,
    STATE(683), 1,
      sym_tupleType,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10932] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(985), 1,
      anon_sym_DOT,
    ACTIONS(820), 4,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_printStmt_token3,
  [10945] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(573), 1,
      sym_name,
    STATE(677), 1,
      sym_vertexType,
    ACTIONS(276), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10960] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(647), 1,
      sym_edgeAlias,
    STATE(658), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10975] = 4,
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
  [10990] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(5), 1,
      sym_accumName,
    ACTIONS(356), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11005] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(410), 1,
      sym_name,
    STATE(566), 1,
      sym_jsonKey,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(987), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
  [11031] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(991), 1,
      anon_sym_GT,
    ACTIONS(993), 1,
      anon_sym_PIPE,
    STATE(434), 1,
      aux_sym_stepEdgeTypes_repeat1,
    ACTIONS(989), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [11048] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(702), 1,
      sym_name,
    STATE(703), 1,
      sym_syntaxName,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11063] = 4,
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
  [11078] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(16), 1,
      sym_accumName,
    ACTIONS(426), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11093] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(995), 1,
      anon_sym_COMMA,
    STATE(345), 1,
      aux_sym_fromClause_repeat1,
    ACTIONS(998), 3,
      anon_sym_SEMI,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [11108] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1000), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [11119] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(739), 1,
      sym_queryName,
    STATE(765), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11134] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(16), 1,
      sym_accumName,
    ACTIONS(362), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11149] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(159), 1,
      sym_name,
    STATE(402), 1,
      sym_fieldName,
    ACTIONS(1002), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11164] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      aux_sym_perClauseV2_token1,
    ACTIONS(1004), 1,
      anon_sym_SEMI,
    STATE(712), 1,
      sym_perClauseV2,
    STATE(384), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [11181] = 4,
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
  [11196] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(573), 1,
      sym_name,
    STATE(736), 1,
      sym_vertexType,
    ACTIONS(276), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11211] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(159), 1,
      sym_name,
    STATE(597), 1,
      sym_fieldName,
    ACTIONS(276), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11226] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(419), 1,
      sym_graphName,
    STATE(447), 1,
      sym_name,
    ACTIONS(977), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11241] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1008), 1,
      aux_sym_accumType_token5,
    ACTIONS(1006), 4,
      aux_sym_accumType_token2,
      aux_sym_accumType_token3,
      aux_sym_accumType_token4,
      aux_sym_accumType_token6,
  [11254] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(620), 1,
      sym_syntaxName,
    STATE(702), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11269] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(617), 1,
      sym_syntaxName,
    STATE(702), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1010), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [11295] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1010), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(1012), 3,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [11308] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(418), 1,
      sym_name,
    STATE(713), 1,
      sym_tupleType,
    ACTIONS(276), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1015), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [11334] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(618), 1,
      sym_syntaxName,
    STATE(702), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(983), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [11360] = 4,
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
  [11375] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(219), 1,
      sym_accumName,
    STATE(224), 1,
      sym_name,
    ACTIONS(749), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11390] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(667), 1,
      sym_syntaxName,
    STATE(702), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11405] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(5), 1,
      sym_accumName,
    ACTIONS(362), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11420] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(386), 1,
      sym_graphName,
    STATE(447), 1,
      sym_name,
    ACTIONS(977), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11435] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(623), 1,
      sym_syntaxName,
    STATE(702), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11450] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(16), 1,
      sym_accumName,
    ACTIONS(368), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11465] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      aux_sym_perClauseV2_token1,
    ACTIONS(948), 1,
      anon_sym_SEMI,
    STATE(712), 1,
      sym_perClauseV2,
    STATE(384), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [11482] = 6,
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
    STATE(500), 1,
      sym_returns,
  [11501] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(644), 1,
      sym_syntaxName,
    STATE(702), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11516] = 4,
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
  [11531] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(626), 1,
      sym_syntaxName,
    STATE(702), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11546] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1017), 1,
      anon_sym_COMMA,
    ACTIONS(1019), 1,
      anon_sym_SEMI,
    ACTIONS(1021), 1,
      aux_sym_printStmt_token2,
    ACTIONS(1023), 1,
      aux_sym_printStmt_token3,
    STATE(405), 1,
      aux_sym_printStmt_repeat1,
  [11565] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(476), 1,
      sym_name,
    STATE(484), 1,
      sym_paramName,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11580] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      aux_sym_printExpr_token1,
    ACTIONS(599), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
  [11593] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_RETURNS,
    ACTIONS(1025), 1,
      anon_sym_LBRACE,
    ACTIONS(1027), 1,
      anon_sym_API,
    ACTIONS(1029), 1,
      anon_sym_SYNTAX,
    STATE(515), 1,
      sym_returns,
  [11612] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(630), 1,
      sym_syntaxName,
    STATE(702), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11627] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(16), 1,
      sym_accumName,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11642] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1031), 1,
      anon_sym_COMMA,
    STATE(394), 1,
      aux_sym_fromClause_repeat1,
    ACTIONS(1033), 3,
      anon_sym_SEMI,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [11657] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(16), 1,
      sym_accumName,
    ACTIONS(356), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11672] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1035), 1,
      anon_sym_SEMI,
    ACTIONS(1037), 1,
      aux_sym_perClauseV2_token1,
    STATE(712), 1,
      sym_perClauseV2,
    STATE(384), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [11689] = 4,
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
  [11704] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_RETURNS,
    ACTIONS(957), 1,
      anon_sym_LBRACE,
    ACTIONS(961), 1,
      anon_sym_API,
    ACTIONS(963), 1,
      anon_sym_SYNTAX,
    STATE(487), 1,
      sym_returns,
  [11723] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(573), 1,
      sym_name,
    STATE(727), 1,
      sym_vertexType,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11738] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      aux_sym_perClauseV2_token1,
    ACTIONS(1040), 1,
      anon_sym_SEMI,
    STATE(712), 1,
      sym_perClauseV2,
    STATE(384), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [11755] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(159), 1,
      sym_name,
    STATE(478), 1,
      sym_fieldName,
    ACTIONS(276), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11770] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      aux_sym_perClauseV2_token1,
    ACTIONS(1040), 1,
      anon_sym_SEMI,
    STATE(712), 1,
      sym_perClauseV2,
    STATE(350), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [11787] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(285), 1,
      sym_name,
    STATE(361), 1,
      sym_vertexAlias,
    ACTIONS(749), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11802] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(285), 1,
      sym_name,
    STATE(708), 1,
      sym_vertexAlias,
    ACTIONS(1042), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11817] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(725), 1,
      sym_queryName,
    STATE(765), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11832] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1031), 1,
      anon_sym_COMMA,
    STATE(345), 1,
      aux_sym_fromClause_repeat1,
    ACTIONS(1044), 3,
      anon_sym_SEMI,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [11847] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      aux_sym_perClauseV2_token1,
    ACTIONS(948), 1,
      anon_sym_SEMI,
    STATE(712), 1,
      sym_perClauseV2,
    STATE(388), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [11864] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(379), 1,
      sym_graphName,
    STATE(447), 1,
      sym_name,
    ACTIONS(977), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11879] = 4,
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
  [11894] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_RETURNS,
    ACTIONS(1046), 1,
      anon_sym_LBRACE,
    ACTIONS(1048), 1,
      anon_sym_API,
    ACTIONS(1050), 1,
      anon_sym_SYNTAX,
    STATE(548), 1,
      sym_returns,
  [11913] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(453), 1,
      sym_paramName,
    STATE(476), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11928] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(634), 1,
      sym_syntaxName,
    STATE(702), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1052), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
  [11954] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1054), 1,
      anon_sym_RPAREN,
    ACTIONS(1056), 1,
      anon_sym_COMMA,
    STATE(523), 1,
      aux_sym_accumType_repeat1,
    ACTIONS(1058), 2,
      aux_sym_accumType_token11,
      aux_sym_accumType_token12,
  [11971] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(5), 1,
      sym_accumName,
    ACTIONS(320), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1060), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [11997] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1017), 1,
      anon_sym_COMMA,
    ACTIONS(1062), 1,
      anon_sym_SEMI,
    ACTIONS(1064), 1,
      aux_sym_printStmt_token2,
    ACTIONS(1066), 1,
      aux_sym_printStmt_token3,
    STATE(406), 1,
      aux_sym_printStmt_repeat1,
  [12016] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1068), 1,
      anon_sym_COMMA,
    STATE(406), 1,
      aux_sym_printStmt_repeat1,
    ACTIONS(1071), 3,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
  [12031] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(654), 1,
      sym_syntaxName,
    STATE(702), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12046] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(410), 1,
      sym_name,
    STATE(432), 1,
      sym_jsonKey,
    ACTIONS(1073), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12061] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(159), 1,
      sym_name,
    STATE(440), 1,
      sym_fieldName,
    ACTIONS(1002), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      anon_sym_RBRACK,
  [12087] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(16), 1,
      sym_accumName,
    ACTIONS(444), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12102] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(658), 1,
      sym_name,
    STATE(659), 1,
      sym_edgeAlias,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12117] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(16), 1,
      sym_accumName,
    ACTIONS(374), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12132] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1077), 1,
      aux_sym_elementType_token1,
    ACTIONS(814), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token2,
  [12145] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(655), 1,
      sym_attrName,
    STATE(656), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12160] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(16), 1,
      sym_accumName,
    ACTIONS(432), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12175] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(637), 1,
      sym_syntaxName,
    STATE(702), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1079), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token2,
  [12201] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_RETURNS,
    ACTIONS(1081), 1,
      anon_sym_LBRACE,
    ACTIONS(1083), 1,
      anon_sym_API,
    ACTIONS(1085), 1,
      anon_sym_SYNTAX,
    STATE(534), 1,
      sym_returns,
  [12220] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(398), 1,
      sym_graphName,
    STATE(447), 1,
      sym_name,
    ACTIONS(977), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12235] = 4,
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
  [12250] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(219), 1,
      sym_accumName,
    STATE(224), 1,
      sym_name,
    ACTIONS(276), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12265] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1087), 1,
      aux_sym_createSignature_token2,
    ACTIONS(1089), 1,
      aux_sym_createSignature_token4,
    ACTIONS(1091), 1,
      anon_sym_QUERY,
    ACTIONS(1093), 1,
      aux_sym_CREATE_VERTEX_token1,
  [12281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1095), 1,
      anon_sym_DOT,
    ACTIONS(820), 3,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_queryBodyIfStmt_token2,
  [12293] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1097), 1,
      anon_sym_COMMA,
    STATE(461), 1,
      aux_sym_dmlSubStmtList_repeat1,
    ACTIONS(1099), 2,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
  [12307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1101), 4,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_COLON,
  [12317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1104), 4,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_COLON,
  [12327] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1106), 1,
      anon_sym_SEMI,
    ACTIONS(1108), 3,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [12339] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1110), 1,
      anon_sym_EQ,
    ACTIONS(1112), 1,
      anon_sym_COMMA,
    ACTIONS(1114), 1,
      anon_sym_SEMI,
    STATE(499), 1,
      aux_sym_accumDeclStmt_repeat1,
  [12355] = 5,
    ACTIONS(1116), 1,
      sym_comment,
    ACTIONS(1118), 1,
      anon_sym_DQUOTE,
    ACTIONS(1120), 1,
      aux_sym_stringLiteral_token1,
    ACTIONS(1123), 1,
      sym_escape_sequence,
    STATE(430), 1,
      aux_sym_stringLiteral_repeat1,
  [12371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1126), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token2,
  [12381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1128), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
  [12391] = 5,
    ACTIONS(1116), 1,
      sym_comment,
    ACTIONS(1130), 1,
      anon_sym_DQUOTE,
    ACTIONS(1132), 1,
      aux_sym_stringLiteral_token1,
    ACTIONS(1134), 1,
      sym_escape_sequence,
    STATE(430), 1,
      aux_sym_stringLiteral_repeat1,
  [12407] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(993), 1,
      anon_sym_PIPE,
    STATE(438), 1,
      aux_sym_stepEdgeTypes_repeat1,
    ACTIONS(1136), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [12421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1138), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token2,
  [12431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1071), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
  [12441] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1140), 1,
      anon_sym_SEMI,
    ACTIONS(1144), 1,
      aux_sym_printStmt_token3,
    ACTIONS(1142), 2,
      anon_sym_AND,
      anon_sym_OR,
  [12455] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1148), 1,
      anon_sym_PIPE,
    STATE(438), 1,
      aux_sym_stepEdgeTypes_repeat1,
    ACTIONS(1146), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [12469] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(48), 1,
      sym_name,
    ACTIONS(1151), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12481] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1153), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(1155), 2,
      aux_sym_accumType_token11,
      aux_sym_accumType_token12,
  [12493] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1157), 2,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
    ACTIONS(1159), 2,
      anon_sym_AND,
      anon_sym_OR,
  [12505] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 1,
      anon_sym_EQ,
    ACTIONS(1163), 1,
      anon_sym_COMMA,
    ACTIONS(1165), 1,
      anon_sym_SEMI,
    STATE(464), 1,
      aux_sym_baseDeclStmt_repeat1,
  [12521] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1112), 1,
      anon_sym_COMMA,
    ACTIONS(1167), 1,
      anon_sym_EQ,
    ACTIONS(1169), 1,
      anon_sym_SEMI,
    STATE(497), 1,
      aux_sym_accumDeclStmt_repeat1,
  [12537] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 2,
      anon_sym_SEMI,
      aux_sym_printStmt_token3,
    ACTIONS(1171), 2,
      anon_sym_AND,
      anon_sym_OR,
  [12549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
  [12559] = 5,
    ACTIONS(1116), 1,
      sym_comment,
    ACTIONS(1174), 1,
      anon_sym_DQUOTE,
    ACTIONS(1176), 1,
      aux_sym_stringLiteral_token1,
    ACTIONS(1178), 1,
      sym_escape_sequence,
    STATE(433), 1,
      aux_sym_stringLiteral_repeat1,
  [12575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1180), 4,
      anon_sym_LBRACE,
      anon_sym_API,
      anon_sym_SYNTAX,
      anon_sym_RETURNS,
  [12585] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1182), 1,
      anon_sym_RPAREN,
    ACTIONS(1108), 3,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [12597] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1184), 1,
      anon_sym_LT,
    ACTIONS(814), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_CREATE_VERTEX_token2,
  [12609] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1188), 1,
      aux_sym_CREATE_VERTEX_token4,
    ACTIONS(1190), 1,
      anon_sym_primary_id_as_attribute,
    ACTIONS(1186), 2,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
  [12623] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1097), 1,
      anon_sym_COMMA,
    STATE(425), 1,
      aux_sym_dmlSubStmtList_repeat1,
    ACTIONS(1192), 2,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
  [12637] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(47), 1,
      sym_name,
    ACTIONS(1151), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12649] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1194), 1,
      anon_sym_RPAREN,
    ACTIONS(1196), 1,
      anon_sym_EQ,
    ACTIONS(1198), 1,
      anon_sym_COMMA,
    STATE(472), 1,
      aux_sym_parameterList_repeat1,
  [12665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(998), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [12675] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1200), 1,
      anon_sym_SEMI,
    ACTIONS(1202), 1,
      aux_sym_printStmt_token3,
    ACTIONS(1142), 2,
      anon_sym_AND,
      anon_sym_OR,
  [12689] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(442), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12701] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 2,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
    ACTIONS(1204), 2,
      anon_sym_AND,
      anon_sym_OR,
  [12713] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(488), 1,
      sym_name,
    ACTIONS(39), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12725] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_AT_AT,
    ACTIONS(1207), 1,
      anon_sym_AT,
    STATE(443), 2,
      sym_localAccumName,
      sym_globalAccumName,
  [12739] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1211), 1,
      aux_sym_CREATE_VERTEX_token4,
    ACTIONS(1213), 1,
      anon_sym_primary_id_as_attribute,
    ACTIONS(1209), 2,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
  [12753] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1215), 1,
      anon_sym_COMMA,
    STATE(461), 1,
      aux_sym_dmlSubStmtList_repeat1,
    ACTIONS(1218), 2,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
  [12767] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1220), 1,
      anon_sym_DOT,
    ACTIONS(820), 3,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
  [12779] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1222), 1,
      anon_sym_SEMI,
    ACTIONS(1108), 3,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [12791] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1163), 1,
      anon_sym_COMMA,
    ACTIONS(1224), 1,
      anon_sym_SEMI,
    STATE(466), 1,
      aux_sym_baseDeclStmt_repeat1,
  [12804] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1226), 1,
      anon_sym_RPAREN,
    ACTIONS(1228), 2,
      anon_sym_AND,
      anon_sym_OR,
  [12815] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1230), 1,
      anon_sym_COMMA,
    ACTIONS(1233), 1,
      anon_sym_SEMI,
    STATE(466), 1,
      aux_sym_baseDeclStmt_repeat1,
  [12828] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_COMMA,
    ACTIONS(61), 1,
      aux_sym_integer_token1,
    STATE(7), 1,
      aux_sym_integer_repeat1,
  [12841] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1163), 1,
      anon_sym_COMMA,
    ACTIONS(1235), 1,
      anon_sym_SEMI,
    STATE(516), 1,
      aux_sym_baseDeclStmt_repeat1,
  [12854] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 1,
      anon_sym_LBRACE,
    ACTIONS(889), 1,
      anon_sym_API,
    ACTIONS(891), 1,
      anon_sym_SYNTAX,
  [12867] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1239), 1,
      aux_sym_queryBodyIfStmt_token2,
    ACTIONS(1237), 2,
      anon_sym_AND,
      anon_sym_OR,
  [12878] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1241), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12887] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1198), 1,
      anon_sym_COMMA,
    ACTIONS(1243), 1,
      anon_sym_RPAREN,
    STATE(507), 1,
      aux_sym_parameterList_repeat1,
  [12900] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1245), 1,
      anon_sym_RPAREN,
    ACTIONS(1247), 1,
      anon_sym_COMMA,
    STATE(473), 1,
      aux_sym_perClauseV2_repeat1,
  [12913] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1252), 1,
      aux_sym_CREATE_VERTEX_token2,
    ACTIONS(1250), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [12924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1218), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
  [12933] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1254), 3,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_COMMA,
  [12942] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(965), 1,
      anon_sym_LBRACE,
    ACTIONS(969), 1,
      anon_sym_API,
    ACTIONS(971), 1,
      anon_sym_SYNTAX,
  [12955] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1256), 1,
      anon_sym_COMMA,
    ACTIONS(1258), 1,
      anon_sym_GT,
    STATE(547), 1,
      aux_sym_tupleFields_repeat1,
  [12968] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1260), 1,
      aux_sym_CREATE_VERTEX_token3,
    ACTIONS(1186), 2,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
  [12979] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1112), 1,
      anon_sym_COMMA,
    ACTIONS(1262), 1,
      anon_sym_SEMI,
    STATE(546), 1,
      aux_sym_accumDeclStmt_repeat1,
  [12992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1264), 3,
      anon_sym_LBRACE,
      anon_sym_API,
      anon_sym_SYNTAX,
  [13001] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_RPAREN,
    ACTIONS(1266), 1,
      anon_sym_COMMA,
    STATE(482), 1,
      aux_sym_argList_repeat1,
  [13014] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1271), 1,
      anon_sym_primary_id_as_attribute,
    ACTIONS(1269), 2,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
  [13025] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1275), 1,
      anon_sym_EQ,
    ACTIONS(1273), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13036] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1198), 1,
      anon_sym_COMMA,
    ACTIONS(1277), 1,
      anon_sym_RPAREN,
    STATE(507), 1,
      aux_sym_parameterList_repeat1,
  [13049] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1279), 1,
      aux_sym_queryBodyIfStmt_token3,
    ACTIONS(1281), 1,
      aux_sym_queryBodyIfStmt_token4,
    STATE(539), 1,
      aux_sym_queryBodyIfStmt_repeat1,
  [13062] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1025), 1,
      anon_sym_LBRACE,
    ACTIONS(1027), 1,
      anon_sym_API,
    ACTIONS(1029), 1,
      anon_sym_SYNTAX,
  [13075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1283), 1,
      anon_sym_EQ,
    ACTIONS(1233), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13086] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(955), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_CREATE_VERTEX_token2,
  [13095] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1285), 1,
      anon_sym_COMMA,
    ACTIONS(1287), 1,
      anon_sym_RBRACK,
    STATE(533), 1,
      aux_sym_vExprSet_repeat1,
  [13108] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1112), 1,
      anon_sym_COMMA,
    ACTIONS(1262), 1,
      anon_sym_SEMI,
    STATE(542), 1,
      aux_sym_accumDeclStmt_repeat1,
  [13121] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1289), 1,
      anon_sym_RPAREN,
    ACTIONS(1291), 1,
      anon_sym_COMMA,
    STATE(492), 1,
      aux_sym_CREATE_VERTEX_repeat1,
  [13134] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1296), 1,
      anon_sym_primary_id_as_attribute,
    ACTIONS(1294), 2,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
  [13145] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1298), 1,
      anon_sym_RPAREN,
    ACTIONS(1300), 1,
      anon_sym_COMMA,
    STATE(511), 1,
      aux_sym_perClauseV2_repeat1,
  [13158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1302), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
  [13167] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1304), 1,
      anon_sym_RPAREN,
    ACTIONS(1306), 1,
      anon_sym_COMMA,
    STATE(530), 1,
      aux_sym_CREATE_VERTEX_repeat1,
  [13180] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1112), 1,
      anon_sym_COMMA,
    ACTIONS(1114), 1,
      anon_sym_SEMI,
    STATE(542), 1,
      aux_sym_accumDeclStmt_repeat1,
  [13193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_CREATE_VERTEX_token2,
  [13202] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1112), 1,
      anon_sym_COMMA,
    ACTIONS(1308), 1,
      anon_sym_SEMI,
    STATE(542), 1,
      aux_sym_accumDeclStmt_repeat1,
  [13215] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      anon_sym_LBRACE,
    ACTIONS(961), 1,
      anon_sym_API,
    ACTIONS(963), 1,
      anon_sym_SYNTAX,
  [13228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_CREATE_VERTEX_token2,
  [13237] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1310), 1,
      anon_sym_COMMA,
    ACTIONS(1313), 1,
      anon_sym_GT,
    STATE(502), 1,
      aux_sym_tupleFields_repeat1,
  [13250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_CREATE_VERTEX_token2,
  [13259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_CREATE_VERTEX_token2,
  [13268] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1315), 1,
      anon_sym_RBRACE,
    ACTIONS(1317), 1,
      anon_sym_COMMA,
    STATE(505), 1,
      aux_sym_seedSet_repeat1,
  [13281] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_COMMA,
    ACTIONS(1320), 1,
      anon_sym_RPAREN,
    STATE(482), 1,
      aux_sym_argList_repeat1,
  [13294] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1322), 1,
      anon_sym_RPAREN,
    ACTIONS(1324), 1,
      anon_sym_COMMA,
    STATE(507), 1,
      aux_sym_parameterList_repeat1,
  [13307] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      aux_sym_queryBodyIfStmt_token2,
    ACTIONS(1327), 2,
      anon_sym_AND,
      anon_sym_OR,
  [13318] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1330), 1,
      aux_sym_queryBodyIfStmt_token3,
    ACTIONS(1332), 1,
      aux_sym_queryBodyIfStmt_token4,
    STATE(486), 1,
      aux_sym_queryBodyIfStmt_repeat1,
  [13331] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1334), 1,
      anon_sym_RBRACE,
    ACTIONS(1336), 1,
      anon_sym_COMMA,
    STATE(505), 1,
      aux_sym_seedSet_repeat1,
  [13344] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1300), 1,
      anon_sym_COMMA,
    ACTIONS(1338), 1,
      anon_sym_RPAREN,
    STATE(473), 1,
      aux_sym_perClauseV2_repeat1,
  [13357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1340), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13366] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1344), 1,
      anon_sym_DOT,
    ACTIONS(1342), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [13377] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1348), 1,
      anon_sym_GT,
    ACTIONS(1346), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [13388] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1081), 1,
      anon_sym_LBRACE,
    ACTIONS(1083), 1,
      anon_sym_API,
    ACTIONS(1085), 1,
      anon_sym_SYNTAX,
  [13401] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1163), 1,
      anon_sym_COMMA,
    ACTIONS(1350), 1,
      anon_sym_SEMI,
    STATE(466), 1,
      aux_sym_baseDeclStmt_repeat1,
  [13414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1006), 3,
      aux_sym_accumType_token2,
      aux_sym_accumType_token3,
      aux_sym_accumType_token4,
  [13423] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1352), 1,
      aux_sym_elementType_token1,
    ACTIONS(814), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [13434] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_RPAREN,
    ACTIONS(1354), 2,
      anon_sym_AND,
      anon_sym_OR,
  [13445] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1357), 1,
      anon_sym_DOT,
    ACTIONS(1359), 1,
      aux_sym_integer_token1,
    STATE(6), 1,
      aux_sym_integer_repeat1,
  [13458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(991), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COLON,
  [13467] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1056), 1,
      anon_sym_COMMA,
    ACTIONS(1361), 1,
      anon_sym_RPAREN,
    STATE(543), 1,
      aux_sym_accumType_repeat1,
  [13480] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1056), 1,
      anon_sym_COMMA,
    ACTIONS(1361), 1,
      anon_sym_RPAREN,
    STATE(544), 1,
      aux_sym_accumType_repeat1,
  [13493] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1363), 1,
      aux_sym_queryBodyIfStmt_token3,
    ACTIONS(1366), 1,
      aux_sym_queryBodyIfStmt_token4,
    STATE(486), 1,
      aux_sym_queryBodyIfStmt_repeat1,
  [13506] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1369), 1,
      aux_sym_queryBodyIfStmt_token2,
    ACTIONS(1237), 2,
      anon_sym_AND,
      anon_sym_OR,
  [13517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1146), 3,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COLON,
  [13526] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1285), 1,
      anon_sym_COMMA,
    ACTIONS(1371), 1,
      anon_sym_RBRACK,
    STATE(490), 1,
      aux_sym_vExprSet_repeat1,
  [13539] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      anon_sym_LBRACE,
    ACTIONS(861), 1,
      anon_sym_API,
    ACTIONS(863), 1,
      anon_sym_SYNTAX,
  [13552] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1376), 1,
      anon_sym_DOT_STAR,
    ACTIONS(1373), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [13563] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1306), 1,
      anon_sym_COMMA,
    ACTIONS(1378), 1,
      anon_sym_RPAREN,
    STATE(492), 1,
      aux_sym_CREATE_VERTEX_repeat1,
  [13576] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1112), 1,
      anon_sym_COMMA,
    ACTIONS(1308), 1,
      anon_sym_SEMI,
    STATE(491), 1,
      aux_sym_accumDeclStmt_repeat1,
  [13589] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1382), 1,
      aux_sym_CREATE_VERTEX_token3,
    ACTIONS(1380), 2,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
  [13600] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1384), 1,
      anon_sym_COMMA,
    ACTIONS(1387), 1,
      anon_sym_RBRACK,
    STATE(533), 1,
      aux_sym_vExprSet_repeat1,
  [13613] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1046), 1,
      anon_sym_LBRACE,
    ACTIONS(1048), 1,
      anon_sym_API,
    ACTIONS(1050), 1,
      anon_sym_SYNTAX,
  [13626] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1336), 1,
      anon_sym_COMMA,
    ACTIONS(1389), 1,
      anon_sym_RBRACE,
    STATE(510), 1,
      aux_sym_seedSet_repeat1,
  [13639] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1391), 1,
      aux_sym_queryBodyIfStmt_token2,
    ACTIONS(1237), 2,
      anon_sym_AND,
      anon_sym_OR,
  [13650] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1393), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [13659] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1198), 1,
      anon_sym_COMMA,
    ACTIONS(1395), 1,
      anon_sym_RPAREN,
    STATE(485), 1,
      aux_sym_parameterList_repeat1,
  [13672] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1397), 1,
      aux_sym_queryBodyIfStmt_token3,
    ACTIONS(1400), 1,
      aux_sym_queryBodyIfStmt_token4,
    STATE(539), 1,
      aux_sym_queryBodyIfStmt_repeat1,
  [13685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1402), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [13694] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1404), 1,
      anon_sym_EQ,
    ACTIONS(1406), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13705] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1406), 1,
      anon_sym_SEMI,
    ACTIONS(1408), 1,
      anon_sym_COMMA,
    STATE(542), 1,
      aux_sym_accumDeclStmt_repeat1,
  [13718] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1056), 1,
      anon_sym_COMMA,
    ACTIONS(1411), 1,
      anon_sym_RPAREN,
    STATE(544), 1,
      aux_sym_accumType_repeat1,
  [13731] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1153), 1,
      anon_sym_RPAREN,
    ACTIONS(1413), 1,
      anon_sym_COMMA,
    STATE(544), 1,
      aux_sym_accumType_repeat1,
  [13744] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      aux_sym_integer_token1,
    ACTIONS(70), 1,
      anon_sym_COMMA,
    STATE(7), 1,
      aux_sym_integer_repeat1,
  [13757] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1112), 1,
      anon_sym_COMMA,
    ACTIONS(1416), 1,
      anon_sym_SEMI,
    STATE(542), 1,
      aux_sym_accumDeclStmt_repeat1,
  [13770] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1256), 1,
      anon_sym_COMMA,
    ACTIONS(1418), 1,
      anon_sym_GT,
    STATE(502), 1,
      aux_sym_tupleFields_repeat1,
  [13783] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1420), 1,
      anon_sym_LBRACE,
    ACTIONS(1422), 1,
      anon_sym_API,
    ACTIONS(1424), 1,
      anon_sym_SYNTAX,
  [13796] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1426), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [13804] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1428), 1,
      aux_sym_integer_token1,
    STATE(467), 1,
      aux_sym_integer_repeat1,
  [13814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1430), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [13822] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1420), 1,
      anon_sym_LBRACE,
    ACTIONS(1424), 1,
      anon_sym_SYNTAX,
  [13832] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    STATE(631), 1,
      sym_stringLiteral,
  [13842] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1432), 2,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
  [13850] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1434), 2,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
  [13858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1436), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13866] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1438), 1,
      anon_sym_LPAREN,
    STATE(582), 1,
      sym_selectVertParams,
  [13876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1440), 2,
      aux_sym_queryBodyIfStmt_token3,
      aux_sym_queryBodyIfStmt_token4,
  [13884] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    STATE(628), 1,
      sym_stringLiteral,
  [13894] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1442), 2,
      anon_sym_DQUOTEnone_DQUOTE,
      anon_sym_DQUOTEoutdegree_by_edgetype_DQUOTE,
  [13902] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    STATE(627), 1,
      sym_stringLiteral,
  [13912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1444), 2,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
  [13920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1446), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [13928] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    STATE(632), 1,
      sym_stringLiteral,
  [13938] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1448), 1,
      anon_sym_LBRACE,
    ACTIONS(1450), 1,
      anon_sym_SYNTAX,
  [13948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1452), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13956] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1454), 1,
      anon_sym_LBRACE,
    ACTIONS(1456), 1,
      anon_sym_SYNTAX,
  [13966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1387), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13974] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1458), 1,
      aux_sym_integer_token1,
    STATE(10), 1,
      aux_sym_integer_repeat1,
  [13984] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    STATE(624), 1,
      sym_stringLiteral,
  [13994] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1046), 1,
      anon_sym_LBRACE,
    ACTIONS(1050), 1,
      anon_sym_SYNTAX,
  [14004] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    STATE(666), 1,
      sym_stringLiteral,
  [14014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1376), 2,
      anon_sym_RPAREN,
      anon_sym_GT,
  [14022] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1460), 1,
      anon_sym_LBRACE,
    ACTIONS(1462), 1,
      anon_sym_SYNTAX,
  [14032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1464), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1466), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [14048] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1468), 1,
      anon_sym_RPAREN,
    ACTIONS(1470), 1,
      anon_sym_COLON,
  [14058] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1472), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14066] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1474), 1,
      anon_sym_LBRACE,
    ACTIONS(1476), 1,
      anon_sym_SYNTAX,
  [14076] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1081), 1,
      anon_sym_LBRACE,
    ACTIONS(1085), 1,
      anon_sym_SYNTAX,
  [14086] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1478), 2,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
  [14094] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1480), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [14102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    STATE(638), 1,
      sym_stringLiteral,
  [14112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1482), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [14120] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_AT_AT,
    STATE(429), 1,
      sym_globalAccumName,
  [14130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1484), 2,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
  [14138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1315), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [14146] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      aux_sym_integer_token1,
    STATE(12), 1,
      aux_sym_integer_repeat1,
  [14156] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1486), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14164] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1488), 1,
      aux_sym_condition_token1,
    ACTIONS(1490), 1,
      aux_sym_condition_token4,
  [14174] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1492), 1,
      anon_sym_EQ,
    ACTIONS(1494), 1,
      anon_sym_DOT,
  [14184] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(975), 1,
      anon_sym_AT,
    STATE(541), 1,
      sym_localAccumName,
  [14194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1496), 2,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
  [14202] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    STATE(651), 1,
      sym_stringLiteral,
  [14212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1498), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1501), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1503), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [14236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1294), 2,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
  [14244] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1505), 1,
      anon_sym_LPAREN,
    ACTIONS(1507), 1,
      anon_sym_EQ,
  [14254] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1509), 1,
      aux_sym_fromClause_token1,
    STATE(237), 1,
      sym_fromClause,
  [14264] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      anon_sym_LBRACE,
    ACTIONS(963), 1,
      anon_sym_SYNTAX,
  [14274] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1025), 1,
      anon_sym_LBRACE,
    ACTIONS(1029), 1,
      anon_sym_SYNTAX,
  [14284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1511), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [14292] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1513), 1,
      aux_sym_accumClause_token1,
    ACTIONS(1515), 1,
      aux_sym_postAccumClause_token1,
  [14302] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    STATE(645), 1,
      sym_stringLiteral,
  [14312] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      anon_sym_DOLLAR,
    STATE(646), 1,
      sym_columnId,
  [14322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1517), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1269), 2,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
  [14338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1519), 2,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
  [14346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1521), 1,
      aux_sym_primary_id_name_type_token1,
    STATE(496), 1,
      sym_primary_id_name_type,
  [14356] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    STATE(687), 1,
      sym_stringLiteral,
  [14366] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1523), 1,
      aux_sym_createSignature_token4,
    ACTIONS(1525), 1,
      anon_sym_QUERY,
  [14376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1245), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1527), 2,
      anon_sym_DQUOTEnone_DQUOTE,
      anon_sym_DQUOTEoutdegree_by_edgetype_DQUOTE,
  [14392] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1529), 1,
      anon_sym_EQ,
  [14399] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1531), 1,
      anon_sym_LPAREN,
  [14406] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1533), 1,
      anon_sym_LBRACE,
  [14413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1474), 1,
      anon_sym_LBRACE,
  [14420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1535), 1,
      aux_sym_selectVertParams_token1,
  [14427] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1537), 1,
      anon_sym_LBRACE,
  [14434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1539), 1,
      anon_sym_DQUOTEtrue_DQUOTE,
  [14441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1541), 1,
      anon_sym_RPAREN,
  [14448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1460), 1,
      anon_sym_LBRACE,
  [14455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1543), 1,
      anon_sym_RPAREN,
  [14462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1545), 1,
      aux_sym_constant_token1,
  [14469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1454), 1,
      anon_sym_LBRACE,
  [14476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1547), 1,
      anon_sym_RPAREN,
  [14483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1549), 1,
      anon_sym_COMMA,
  [14490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1551), 1,
      anon_sym_LPAREN,
  [14497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1448), 1,
      anon_sym_LBRACE,
  [14504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1553), 1,
      anon_sym_RPAREN,
  [14511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1555), 1,
      anon_sym_RPAREN,
  [14518] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1557), 1,
      anon_sym_LPAREN,
  [14525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1420), 1,
      anon_sym_LBRACE,
  [14532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1559), 1,
      anon_sym_COMMA,
  [14539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1561), 1,
      anon_sym_DQUOTEtrue_DQUOTE,
  [14546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1046), 1,
      anon_sym_LBRACE,
  [14553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1563), 1,
      anon_sym_RPAREN,
  [14560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1565), 1,
      anon_sym_LPAREN,
  [14567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1567), 1,
      anon_sym_COMMA,
  [14574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1569), 1,
      anon_sym_EQ,
  [14581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1571), 1,
      anon_sym_COMMA,
  [14588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1573), 1,
      anon_sym_LPAREN,
  [14595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1081), 1,
      anon_sym_LBRACE,
  [14602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1575), 1,
      anon_sym_RPAREN,
  [14609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1577), 1,
      anon_sym_COMMA,
  [14616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1579), 1,
      anon_sym_RPAREN,
  [14623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1581), 1,
      anon_sym_RPAREN,
  [14630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1583), 1,
      anon_sym_SEMI,
  [14637] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1585), 1,
      anon_sym_EQ,
  [14644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1587), 1,
      anon_sym_RPAREN,
  [14651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1589), 1,
      anon_sym_GRAPH,
  [14658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1591), 1,
      anon_sym_LPAREN,
  [14665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1025), 1,
      anon_sym_LBRACE,
  [14672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1593), 1,
      anon_sym_EQ,
  [14679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1595), 1,
      anon_sym_EQ,
  [14686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1597), 1,
      anon_sym_DASH,
  [14693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1599), 1,
      anon_sym_RPAREN,
  [14700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1601), 1,
      anon_sym_RPAREN,
  [14707] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1603), 1,
      anon_sym_RPAREN,
  [14714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1605), 1,
      anon_sym_SEMI,
  [14721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1607), 1,
      aux_sym_queryBodyIfStmt_token1,
  [14728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1609), 1,
      aux_sym_queryBodyIfStmt_token4,
  [14735] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1611), 1,
      anon_sym_SEMI,
  [14742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1613), 1,
      anon_sym_DQUOTEtrue_DQUOTE,
  [14749] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1615), 1,
      anon_sym_RPAREN,
  [14756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      anon_sym_LBRACE,
  [14763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1617), 1,
      anon_sym_LPAREN,
  [14770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1619), 1,
      anon_sym_GRAPH,
  [14777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1621), 1,
      anon_sym_SEMI,
  [14784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1623), 1,
      anon_sym_COMMA,
  [14791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1106), 1,
      anon_sym_SEMI,
  [14798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1625), 1,
      anon_sym_RPAREN,
  [14805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1627), 1,
      anon_sym_SEMI,
  [14812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1629), 1,
      anon_sym_RPAREN,
  [14819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1631), 1,
      anon_sym_SEMI,
  [14826] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1633), 1,
      anon_sym_GT,
  [14833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1635), 1,
      anon_sym_SEMI,
  [14840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1637), 1,
      aux_sym_queryBodyIfStmt_token4,
  [14847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1639), 1,
      anon_sym_COMMA,
  [14854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1642), 1,
      anon_sym_COMMA,
  [14861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1644), 1,
      anon_sym_LPAREN,
  [14868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1646), 1,
      anon_sym_SEMI,
  [14875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1648), 1,
      anon_sym_EQ,
  [14882] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1650), 1,
      anon_sym_DQUOTEtrue_DQUOTE,
  [14889] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1652), 1,
      anon_sym_RPAREN,
  [14896] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1654), 1,
      anon_sym_RPAREN,
  [14903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1656), 1,
      anon_sym_SEMI,
  [14910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      anon_sym_LBRACE,
  [14917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1658), 1,
      anon_sym_LPAREN,
  [14924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1660), 1,
      anon_sym_GRAPH,
  [14931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1662), 1,
      anon_sym_RPAREN,
  [14938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1664), 1,
      anon_sym_SEMI,
  [14945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1666), 1,
      anon_sym_PLUS_EQ,
  [14952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1200), 1,
      anon_sym_SEMI,
  [14959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1668), 1,
      anon_sym_SEMI,
  [14966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1670), 1,
      anon_sym_SEMI,
  [14973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1672), 1,
      anon_sym_GT,
  [14980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1674), 1,
      anon_sym_EQ,
  [14987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1676), 1,
      anon_sym_EQ,
  [14994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1678), 1,
      anon_sym_GT,
  [15001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1680), 1,
      anon_sym_LBRACE,
  [15008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 1,
      anon_sym_LBRACE,
  [15015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1682), 1,
      anon_sym_LPAREN,
  [15022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1684), 1,
      anon_sym_GRAPH,
  [15029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_RPAREN,
  [15036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      aux_sym_gsqlSelectClause_token1,
  [15043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1686), 1,
      aux_sym_fromClause_token1,
  [15050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1688), 1,
      anon_sym_DOT_STAR,
  [15057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1690), 1,
      anon_sym_SEMI,
  [15064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1692), 1,
      anon_sym_EQ,
  [15071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1515), 1,
      aux_sym_postAccumClause_token1,
  [15078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1694), 1,
      anon_sym_GT,
  [15085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1696), 1,
      anon_sym_SEMI,
  [15092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1140), 1,
      anon_sym_SEMI,
  [15099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1699), 1,
      anon_sym_RPAREN,
  [15106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1701), 1,
      aux_sym_condition_token4,
  [15113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1703), 1,
      anon_sym_LPAREN,
  [15120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1705), 1,
      anon_sym_GT,
  [15127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1707), 1,
      anon_sym_GT,
  [15134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1709), 1,
      anon_sym_LPAREN,
  [15141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1711), 1,
      anon_sym_LPAREN,
  [15148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1713), 1,
      anon_sym_GRAPH,
  [15155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_RPAREN,
  [15162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1715), 1,
      anon_sym_LPAREN,
  [15169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1222), 1,
      anon_sym_SEMI,
  [15176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1717), 1,
      anon_sym_RPAREN,
  [15183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1719), 1,
      anon_sym_LPAREN,
  [15190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1721), 1,
      anon_sym_RBRACE,
  [15197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1723), 1,
      aux_sym_condition_token2,
  [15204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1725), 1,
      anon_sym_RPAREN,
  [15211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1727), 1,
      ts_builtin_sym_end,
  [15218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1729), 1,
      anon_sym_COMMA,
  [15225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1731), 1,
      anon_sym_GT,
  [15232] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1733), 1,
      anon_sym_GT,
  [15239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1735), 1,
      anon_sym_GT,
  [15246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_RPAREN,
  [15253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1737), 1,
      anon_sym_LT,
  [15260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1739), 1,
      anon_sym_LPAREN,
  [15267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1741), 1,
      anon_sym_RBRACE,
  [15274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1743), 1,
      anon_sym_LPAREN,
  [15281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1745), 1,
      anon_sym_LPAREN,
  [15288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1747), 1,
      anon_sym_LT,
  [15295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1749), 1,
      anon_sym_LPAREN,
  [15302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1751), 1,
      anon_sym_QUERY,
  [15309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1753), 1,
      anon_sym_SEMI,
  [15316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1755), 1,
      anon_sym_SEMI,
  [15323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1757), 1,
      anon_sym_SEMI,
  [15330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1759), 1,
      anon_sym_SEMI,
  [15337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1761), 1,
      aux_sym_condition_token2,
  [15344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1763), 1,
      anon_sym_RBRACE,
  [15351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1765), 1,
      anon_sym_SEMI,
  [15358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1767), 1,
      anon_sym_SEMI,
  [15365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1769), 1,
      anon_sym_RBRACE,
  [15372] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1771), 1,
      aux_sym_condition_token2,
  [15379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1773), 1,
      anon_sym_LT,
  [15386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1775), 1,
      anon_sym_LT,
  [15393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1777), 1,
      anon_sym_LT,
  [15400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1779), 1,
      anon_sym_LT,
  [15407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1781), 1,
      aux_sym_condition_token2,
  [15414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1783), 1,
      anon_sym_LT,
  [15421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1785), 1,
      anon_sym_LT,
  [15428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1787), 1,
      aux_sym_typedef_token2,
  [15435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1789), 1,
      anon_sym_LPAREN,
  [15442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1791), 1,
      anon_sym_LPAREN,
  [15449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1793), 1,
      anon_sym_LPAREN,
  [15456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1795), 1,
      anon_sym_QUERY,
  [15463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1797), 1,
      aux_sym_createSignature_token3,
  [15470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1799), 1,
      anon_sym_LBRACE,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 130,
  [SMALL_STATE(4)] = 245,
  [SMALL_STATE(5)] = 288,
  [SMALL_STATE(6)] = 330,
  [SMALL_STATE(7)] = 377,
  [SMALL_STATE(8)] = 422,
  [SMALL_STATE(9)] = 469,
  [SMALL_STATE(10)] = 513,
  [SMALL_STATE(11)] = 557,
  [SMALL_STATE(12)] = 601,
  [SMALL_STATE(13)] = 645,
  [SMALL_STATE(14)] = 723,
  [SMALL_STATE(15)] = 767,
  [SMALL_STATE(16)] = 845,
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
  [SMALL_STATE(42)] = 1896,
  [SMALL_STATE(43)] = 1934,
  [SMALL_STATE(44)] = 1972,
  [SMALL_STATE(45)] = 2010,
  [SMALL_STATE(46)] = 2075,
  [SMALL_STATE(47)] = 2108,
  [SMALL_STATE(48)] = 2173,
  [SMALL_STATE(49)] = 2238,
  [SMALL_STATE(50)] = 2298,
  [SMALL_STATE(51)] = 2346,
  [SMALL_STATE(52)] = 2412,
  [SMALL_STATE(53)] = 2460,
  [SMALL_STATE(54)] = 2526,
  [SMALL_STATE(55)] = 2573,
  [SMALL_STATE(56)] = 2606,
  [SMALL_STATE(57)] = 2643,
  [SMALL_STATE(58)] = 2690,
  [SMALL_STATE(59)] = 2727,
  [SMALL_STATE(60)] = 2760,
  [SMALL_STATE(61)] = 2820,
  [SMALL_STATE(62)] = 2880,
  [SMALL_STATE(63)] = 2916,
  [SMALL_STATE(64)] = 2976,
  [SMALL_STATE(65)] = 3036,
  [SMALL_STATE(66)] = 3072,
  [SMALL_STATE(67)] = 3108,
  [SMALL_STATE(68)] = 3168,
  [SMALL_STATE(69)] = 3228,
  [SMALL_STATE(70)] = 3288,
  [SMALL_STATE(71)] = 3348,
  [SMALL_STATE(72)] = 3408,
  [SMALL_STATE(73)] = 3440,
  [SMALL_STATE(74)] = 3474,
  [SMALL_STATE(75)] = 3508,
  [SMALL_STATE(76)] = 3544,
  [SMALL_STATE(77)] = 3576,
  [SMALL_STATE(78)] = 3610,
  [SMALL_STATE(79)] = 3670,
  [SMALL_STATE(80)] = 3730,
  [SMALL_STATE(81)] = 3790,
  [SMALL_STATE(82)] = 3850,
  [SMALL_STATE(83)] = 3886,
  [SMALL_STATE(84)] = 3946,
  [SMALL_STATE(85)] = 4003,
  [SMALL_STATE(86)] = 4060,
  [SMALL_STATE(87)] = 4117,
  [SMALL_STATE(88)] = 4174,
  [SMALL_STATE(89)] = 4231,
  [SMALL_STATE(90)] = 4288,
  [SMALL_STATE(91)] = 4345,
  [SMALL_STATE(92)] = 4402,
  [SMALL_STATE(93)] = 4459,
  [SMALL_STATE(94)] = 4516,
  [SMALL_STATE(95)] = 4573,
  [SMALL_STATE(96)] = 4630,
  [SMALL_STATE(97)] = 4687,
  [SMALL_STATE(98)] = 4744,
  [SMALL_STATE(99)] = 4801,
  [SMALL_STATE(100)] = 4858,
  [SMALL_STATE(101)] = 4915,
  [SMALL_STATE(102)] = 4972,
  [SMALL_STATE(103)] = 5029,
  [SMALL_STATE(104)] = 5086,
  [SMALL_STATE(105)] = 5143,
  [SMALL_STATE(106)] = 5200,
  [SMALL_STATE(107)] = 5234,
  [SMALL_STATE(108)] = 5268,
  [SMALL_STATE(109)] = 5302,
  [SMALL_STATE(110)] = 5336,
  [SMALL_STATE(111)] = 5370,
  [SMALL_STATE(112)] = 5404,
  [SMALL_STATE(113)] = 5437,
  [SMALL_STATE(114)] = 5470,
  [SMALL_STATE(115)] = 5503,
  [SMALL_STATE(116)] = 5552,
  [SMALL_STATE(117)] = 5601,
  [SMALL_STATE(118)] = 5650,
  [SMALL_STATE(119)] = 5683,
  [SMALL_STATE(120)] = 5716,
  [SMALL_STATE(121)] = 5749,
  [SMALL_STATE(122)] = 5782,
  [SMALL_STATE(123)] = 5815,
  [SMALL_STATE(124)] = 5848,
  [SMALL_STATE(125)] = 5881,
  [SMALL_STATE(126)] = 5914,
  [SMALL_STATE(127)] = 5947,
  [SMALL_STATE(128)] = 5995,
  [SMALL_STATE(129)] = 6043,
  [SMALL_STATE(130)] = 6091,
  [SMALL_STATE(131)] = 6139,
  [SMALL_STATE(132)] = 6191,
  [SMALL_STATE(133)] = 6237,
  [SMALL_STATE(134)] = 6283,
  [SMALL_STATE(135)] = 6331,
  [SMALL_STATE(136)] = 6377,
  [SMALL_STATE(137)] = 6425,
  [SMALL_STATE(138)] = 6473,
  [SMALL_STATE(139)] = 6521,
  [SMALL_STATE(140)] = 6567,
  [SMALL_STATE(141)] = 6615,
  [SMALL_STATE(142)] = 6667,
  [SMALL_STATE(143)] = 6715,
  [SMALL_STATE(144)] = 6763,
  [SMALL_STATE(145)] = 6806,
  [SMALL_STATE(146)] = 6849,
  [SMALL_STATE(147)] = 6892,
  [SMALL_STATE(148)] = 6932,
  [SMALL_STATE(149)] = 6960,
  [SMALL_STATE(150)] = 7006,
  [SMALL_STATE(151)] = 7032,
  [SMALL_STATE(152)] = 7078,
  [SMALL_STATE(153)] = 7110,
  [SMALL_STATE(154)] = 7138,
  [SMALL_STATE(155)] = 7178,
  [SMALL_STATE(156)] = 7221,
  [SMALL_STATE(157)] = 7248,
  [SMALL_STATE(158)] = 7275,
  [SMALL_STATE(159)] = 7302,
  [SMALL_STATE(160)] = 7323,
  [SMALL_STATE(161)] = 7347,
  [SMALL_STATE(162)] = 7373,
  [SMALL_STATE(163)] = 7399,
  [SMALL_STATE(164)] = 7423,
  [SMALL_STATE(165)] = 7449,
  [SMALL_STATE(166)] = 7475,
  [SMALL_STATE(167)] = 7498,
  [SMALL_STATE(168)] = 7521,
  [SMALL_STATE(169)] = 7546,
  [SMALL_STATE(170)] = 7575,
  [SMALL_STATE(171)] = 7600,
  [SMALL_STATE(172)] = 7627,
  [SMALL_STATE(173)] = 7652,
  [SMALL_STATE(174)] = 7677,
  [SMALL_STATE(175)] = 7714,
  [SMALL_STATE(176)] = 7737,
  [SMALL_STATE(177)] = 7762,
  [SMALL_STATE(178)] = 7787,
  [SMALL_STATE(179)] = 7810,
  [SMALL_STATE(180)] = 7835,
  [SMALL_STATE(181)] = 7858,
  [SMALL_STATE(182)] = 7883,
  [SMALL_STATE(183)] = 7908,
  [SMALL_STATE(184)] = 7933,
  [SMALL_STATE(185)] = 7967,
  [SMALL_STATE(186)] = 7989,
  [SMALL_STATE(187)] = 8011,
  [SMALL_STATE(188)] = 8045,
  [SMALL_STATE(189)] = 8081,
  [SMALL_STATE(190)] = 8115,
  [SMALL_STATE(191)] = 8149,
  [SMALL_STATE(192)] = 8173,
  [SMALL_STATE(193)] = 8197,
  [SMALL_STATE(194)] = 8231,
  [SMALL_STATE(195)] = 8265,
  [SMALL_STATE(196)] = 8299,
  [SMALL_STATE(197)] = 8323,
  [SMALL_STATE(198)] = 8347,
  [SMALL_STATE(199)] = 8371,
  [SMALL_STATE(200)] = 8393,
  [SMALL_STATE(201)] = 8427,
  [SMALL_STATE(202)] = 8454,
  [SMALL_STATE(203)] = 8481,
  [SMALL_STATE(204)] = 8504,
  [SMALL_STATE(205)] = 8535,
  [SMALL_STATE(206)] = 8566,
  [SMALL_STATE(207)] = 8589,
  [SMALL_STATE(208)] = 8616,
  [SMALL_STATE(209)] = 8639,
  [SMALL_STATE(210)] = 8662,
  [SMALL_STATE(211)] = 8691,
  [SMALL_STATE(212)] = 8718,
  [SMALL_STATE(213)] = 8741,
  [SMALL_STATE(214)] = 8760,
  [SMALL_STATE(215)] = 8779,
  [SMALL_STATE(216)] = 8807,
  [SMALL_STATE(217)] = 8835,
  [SMALL_STATE(218)] = 8856,
  [SMALL_STATE(219)] = 8877,
  [SMALL_STATE(220)] = 8892,
  [SMALL_STATE(221)] = 8913,
  [SMALL_STATE(222)] = 8936,
  [SMALL_STATE(223)] = 8957,
  [SMALL_STATE(224)] = 8980,
  [SMALL_STATE(225)] = 8995,
  [SMALL_STATE(226)] = 9018,
  [SMALL_STATE(227)] = 9041,
  [SMALL_STATE(228)] = 9064,
  [SMALL_STATE(229)] = 9085,
  [SMALL_STATE(230)] = 9108,
  [SMALL_STATE(231)] = 9129,
  [SMALL_STATE(232)] = 9150,
  [SMALL_STATE(233)] = 9175,
  [SMALL_STATE(234)] = 9196,
  [SMALL_STATE(235)] = 9217,
  [SMALL_STATE(236)] = 9240,
  [SMALL_STATE(237)] = 9261,
  [SMALL_STATE(238)] = 9287,
  [SMALL_STATE(239)] = 9311,
  [SMALL_STATE(240)] = 9331,
  [SMALL_STATE(241)] = 9355,
  [SMALL_STATE(242)] = 9375,
  [SMALL_STATE(243)] = 9395,
  [SMALL_STATE(244)] = 9415,
  [SMALL_STATE(245)] = 9437,
  [SMALL_STATE(246)] = 9461,
  [SMALL_STATE(247)] = 9485,
  [SMALL_STATE(248)] = 9503,
  [SMALL_STATE(249)] = 9521,
  [SMALL_STATE(250)] = 9549,
  [SMALL_STATE(251)] = 9573,
  [SMALL_STATE(252)] = 9597,
  [SMALL_STATE(253)] = 9613,
  [SMALL_STATE(254)] = 9637,
  [SMALL_STATE(255)] = 9661,
  [SMALL_STATE(256)] = 9679,
  [SMALL_STATE(257)] = 9701,
  [SMALL_STATE(258)] = 9716,
  [SMALL_STATE(259)] = 9729,
  [SMALL_STATE(260)] = 9750,
  [SMALL_STATE(261)] = 9767,
  [SMALL_STATE(262)] = 9788,
  [SMALL_STATE(263)] = 9801,
  [SMALL_STATE(264)] = 9814,
  [SMALL_STATE(265)] = 9827,
  [SMALL_STATE(266)] = 9842,
  [SMALL_STATE(267)] = 9857,
  [SMALL_STATE(268)] = 9876,
  [SMALL_STATE(269)] = 9889,
  [SMALL_STATE(270)] = 9902,
  [SMALL_STATE(271)] = 9921,
  [SMALL_STATE(272)] = 9934,
  [SMALL_STATE(273)] = 9948,
  [SMALL_STATE(274)] = 9966,
  [SMALL_STATE(275)] = 9984,
  [SMALL_STATE(276)] = 10000,
  [SMALL_STATE(277)] = 10018,
  [SMALL_STATE(278)] = 10030,
  [SMALL_STATE(279)] = 10044,
  [SMALL_STATE(280)] = 10060,
  [SMALL_STATE(281)] = 10072,
  [SMALL_STATE(282)] = 10084,
  [SMALL_STATE(283)] = 10098,
  [SMALL_STATE(284)] = 10120,
  [SMALL_STATE(285)] = 10136,
  [SMALL_STATE(286)] = 10148,
  [SMALL_STATE(287)] = 10160,
  [SMALL_STATE(288)] = 10178,
  [SMALL_STATE(289)] = 10196,
  [SMALL_STATE(290)] = 10212,
  [SMALL_STATE(291)] = 10226,
  [SMALL_STATE(292)] = 10248,
  [SMALL_STATE(293)] = 10266,
  [SMALL_STATE(294)] = 10286,
  [SMALL_STATE(295)] = 10304,
  [SMALL_STATE(296)] = 10322,
  [SMALL_STATE(297)] = 10336,
  [SMALL_STATE(298)] = 10352,
  [SMALL_STATE(299)] = 10370,
  [SMALL_STATE(300)] = 10388,
  [SMALL_STATE(301)] = 10410,
  [SMALL_STATE(302)] = 10428,
  [SMALL_STATE(303)] = 10444,
  [SMALL_STATE(304)] = 10458,
  [SMALL_STATE(305)] = 10470,
  [SMALL_STATE(306)] = 10486,
  [SMALL_STATE(307)] = 10500,
  [SMALL_STATE(308)] = 10512,
  [SMALL_STATE(309)] = 10528,
  [SMALL_STATE(310)] = 10542,
  [SMALL_STATE(311)] = 10560,
  [SMALL_STATE(312)] = 10580,
  [SMALL_STATE(313)] = 10598,
  [SMALL_STATE(314)] = 10616,
  [SMALL_STATE(315)] = 10634,
  [SMALL_STATE(316)] = 10646,
  [SMALL_STATE(317)] = 10668,
  [SMALL_STATE(318)] = 10690,
  [SMALL_STATE(319)] = 10708,
  [SMALL_STATE(320)] = 10726,
  [SMALL_STATE(321)] = 10741,
  [SMALL_STATE(322)] = 10756,
  [SMALL_STATE(323)] = 10771,
  [SMALL_STATE(324)] = 10786,
  [SMALL_STATE(325)] = 10801,
  [SMALL_STATE(326)] = 10816,
  [SMALL_STATE(327)] = 10831,
  [SMALL_STATE(328)] = 10846,
  [SMALL_STATE(329)] = 10861,
  [SMALL_STATE(330)] = 10876,
  [SMALL_STATE(331)] = 10889,
  [SMALL_STATE(332)] = 10904,
  [SMALL_STATE(333)] = 10917,
  [SMALL_STATE(334)] = 10932,
  [SMALL_STATE(335)] = 10945,
  [SMALL_STATE(336)] = 10960,
  [SMALL_STATE(337)] = 10975,
  [SMALL_STATE(338)] = 10990,
  [SMALL_STATE(339)] = 11005,
  [SMALL_STATE(340)] = 11020,
  [SMALL_STATE(341)] = 11031,
  [SMALL_STATE(342)] = 11048,
  [SMALL_STATE(343)] = 11063,
  [SMALL_STATE(344)] = 11078,
  [SMALL_STATE(345)] = 11093,
  [SMALL_STATE(346)] = 11108,
  [SMALL_STATE(347)] = 11119,
  [SMALL_STATE(348)] = 11134,
  [SMALL_STATE(349)] = 11149,
  [SMALL_STATE(350)] = 11164,
  [SMALL_STATE(351)] = 11181,
  [SMALL_STATE(352)] = 11196,
  [SMALL_STATE(353)] = 11211,
  [SMALL_STATE(354)] = 11226,
  [SMALL_STATE(355)] = 11241,
  [SMALL_STATE(356)] = 11254,
  [SMALL_STATE(357)] = 11269,
  [SMALL_STATE(358)] = 11284,
  [SMALL_STATE(359)] = 11295,
  [SMALL_STATE(360)] = 11308,
  [SMALL_STATE(361)] = 11323,
  [SMALL_STATE(362)] = 11334,
  [SMALL_STATE(363)] = 11349,
  [SMALL_STATE(364)] = 11360,
  [SMALL_STATE(365)] = 11375,
  [SMALL_STATE(366)] = 11390,
  [SMALL_STATE(367)] = 11405,
  [SMALL_STATE(368)] = 11420,
  [SMALL_STATE(369)] = 11435,
  [SMALL_STATE(370)] = 11450,
  [SMALL_STATE(371)] = 11465,
  [SMALL_STATE(372)] = 11482,
  [SMALL_STATE(373)] = 11501,
  [SMALL_STATE(374)] = 11516,
  [SMALL_STATE(375)] = 11531,
  [SMALL_STATE(376)] = 11546,
  [SMALL_STATE(377)] = 11565,
  [SMALL_STATE(378)] = 11580,
  [SMALL_STATE(379)] = 11593,
  [SMALL_STATE(380)] = 11612,
  [SMALL_STATE(381)] = 11627,
  [SMALL_STATE(382)] = 11642,
  [SMALL_STATE(383)] = 11657,
  [SMALL_STATE(384)] = 11672,
  [SMALL_STATE(385)] = 11689,
  [SMALL_STATE(386)] = 11704,
  [SMALL_STATE(387)] = 11723,
  [SMALL_STATE(388)] = 11738,
  [SMALL_STATE(389)] = 11755,
  [SMALL_STATE(390)] = 11770,
  [SMALL_STATE(391)] = 11787,
  [SMALL_STATE(392)] = 11802,
  [SMALL_STATE(393)] = 11817,
  [SMALL_STATE(394)] = 11832,
  [SMALL_STATE(395)] = 11847,
  [SMALL_STATE(396)] = 11864,
  [SMALL_STATE(397)] = 11879,
  [SMALL_STATE(398)] = 11894,
  [SMALL_STATE(399)] = 11913,
  [SMALL_STATE(400)] = 11928,
  [SMALL_STATE(401)] = 11943,
  [SMALL_STATE(402)] = 11954,
  [SMALL_STATE(403)] = 11971,
  [SMALL_STATE(404)] = 11986,
  [SMALL_STATE(405)] = 11997,
  [SMALL_STATE(406)] = 12016,
  [SMALL_STATE(407)] = 12031,
  [SMALL_STATE(408)] = 12046,
  [SMALL_STATE(409)] = 12061,
  [SMALL_STATE(410)] = 12076,
  [SMALL_STATE(411)] = 12087,
  [SMALL_STATE(412)] = 12102,
  [SMALL_STATE(413)] = 12117,
  [SMALL_STATE(414)] = 12132,
  [SMALL_STATE(415)] = 12145,
  [SMALL_STATE(416)] = 12160,
  [SMALL_STATE(417)] = 12175,
  [SMALL_STATE(418)] = 12190,
  [SMALL_STATE(419)] = 12201,
  [SMALL_STATE(420)] = 12220,
  [SMALL_STATE(421)] = 12235,
  [SMALL_STATE(422)] = 12250,
  [SMALL_STATE(423)] = 12265,
  [SMALL_STATE(424)] = 12281,
  [SMALL_STATE(425)] = 12293,
  [SMALL_STATE(426)] = 12307,
  [SMALL_STATE(427)] = 12317,
  [SMALL_STATE(428)] = 12327,
  [SMALL_STATE(429)] = 12339,
  [SMALL_STATE(430)] = 12355,
  [SMALL_STATE(431)] = 12371,
  [SMALL_STATE(432)] = 12381,
  [SMALL_STATE(433)] = 12391,
  [SMALL_STATE(434)] = 12407,
  [SMALL_STATE(435)] = 12421,
  [SMALL_STATE(436)] = 12431,
  [SMALL_STATE(437)] = 12441,
  [SMALL_STATE(438)] = 12455,
  [SMALL_STATE(439)] = 12469,
  [SMALL_STATE(440)] = 12481,
  [SMALL_STATE(441)] = 12493,
  [SMALL_STATE(442)] = 12505,
  [SMALL_STATE(443)] = 12521,
  [SMALL_STATE(444)] = 12537,
  [SMALL_STATE(445)] = 12549,
  [SMALL_STATE(446)] = 12559,
  [SMALL_STATE(447)] = 12575,
  [SMALL_STATE(448)] = 12585,
  [SMALL_STATE(449)] = 12597,
  [SMALL_STATE(450)] = 12609,
  [SMALL_STATE(451)] = 12623,
  [SMALL_STATE(452)] = 12637,
  [SMALL_STATE(453)] = 12649,
  [SMALL_STATE(454)] = 12665,
  [SMALL_STATE(455)] = 12675,
  [SMALL_STATE(456)] = 12689,
  [SMALL_STATE(457)] = 12701,
  [SMALL_STATE(458)] = 12713,
  [SMALL_STATE(459)] = 12725,
  [SMALL_STATE(460)] = 12739,
  [SMALL_STATE(461)] = 12753,
  [SMALL_STATE(462)] = 12767,
  [SMALL_STATE(463)] = 12779,
  [SMALL_STATE(464)] = 12791,
  [SMALL_STATE(465)] = 12804,
  [SMALL_STATE(466)] = 12815,
  [SMALL_STATE(467)] = 12828,
  [SMALL_STATE(468)] = 12841,
  [SMALL_STATE(469)] = 12854,
  [SMALL_STATE(470)] = 12867,
  [SMALL_STATE(471)] = 12878,
  [SMALL_STATE(472)] = 12887,
  [SMALL_STATE(473)] = 12900,
  [SMALL_STATE(474)] = 12913,
  [SMALL_STATE(475)] = 12924,
  [SMALL_STATE(476)] = 12933,
  [SMALL_STATE(477)] = 12942,
  [SMALL_STATE(478)] = 12955,
  [SMALL_STATE(479)] = 12968,
  [SMALL_STATE(480)] = 12979,
  [SMALL_STATE(481)] = 12992,
  [SMALL_STATE(482)] = 13001,
  [SMALL_STATE(483)] = 13014,
  [SMALL_STATE(484)] = 13025,
  [SMALL_STATE(485)] = 13036,
  [SMALL_STATE(486)] = 13049,
  [SMALL_STATE(487)] = 13062,
  [SMALL_STATE(488)] = 13075,
  [SMALL_STATE(489)] = 13086,
  [SMALL_STATE(490)] = 13095,
  [SMALL_STATE(491)] = 13108,
  [SMALL_STATE(492)] = 13121,
  [SMALL_STATE(493)] = 13134,
  [SMALL_STATE(494)] = 13145,
  [SMALL_STATE(495)] = 13158,
  [SMALL_STATE(496)] = 13167,
  [SMALL_STATE(497)] = 13180,
  [SMALL_STATE(498)] = 13193,
  [SMALL_STATE(499)] = 13202,
  [SMALL_STATE(500)] = 13215,
  [SMALL_STATE(501)] = 13228,
  [SMALL_STATE(502)] = 13237,
  [SMALL_STATE(503)] = 13250,
  [SMALL_STATE(504)] = 13259,
  [SMALL_STATE(505)] = 13268,
  [SMALL_STATE(506)] = 13281,
  [SMALL_STATE(507)] = 13294,
  [SMALL_STATE(508)] = 13307,
  [SMALL_STATE(509)] = 13318,
  [SMALL_STATE(510)] = 13331,
  [SMALL_STATE(511)] = 13344,
  [SMALL_STATE(512)] = 13357,
  [SMALL_STATE(513)] = 13366,
  [SMALL_STATE(514)] = 13377,
  [SMALL_STATE(515)] = 13388,
  [SMALL_STATE(516)] = 13401,
  [SMALL_STATE(517)] = 13414,
  [SMALL_STATE(518)] = 13423,
  [SMALL_STATE(519)] = 13434,
  [SMALL_STATE(520)] = 13445,
  [SMALL_STATE(521)] = 13458,
  [SMALL_STATE(522)] = 13467,
  [SMALL_STATE(523)] = 13480,
  [SMALL_STATE(524)] = 13493,
  [SMALL_STATE(525)] = 13506,
  [SMALL_STATE(526)] = 13517,
  [SMALL_STATE(527)] = 13526,
  [SMALL_STATE(528)] = 13539,
  [SMALL_STATE(529)] = 13552,
  [SMALL_STATE(530)] = 13563,
  [SMALL_STATE(531)] = 13576,
  [SMALL_STATE(532)] = 13589,
  [SMALL_STATE(533)] = 13600,
  [SMALL_STATE(534)] = 13613,
  [SMALL_STATE(535)] = 13626,
  [SMALL_STATE(536)] = 13639,
  [SMALL_STATE(537)] = 13650,
  [SMALL_STATE(538)] = 13659,
  [SMALL_STATE(539)] = 13672,
  [SMALL_STATE(540)] = 13685,
  [SMALL_STATE(541)] = 13694,
  [SMALL_STATE(542)] = 13705,
  [SMALL_STATE(543)] = 13718,
  [SMALL_STATE(544)] = 13731,
  [SMALL_STATE(545)] = 13744,
  [SMALL_STATE(546)] = 13757,
  [SMALL_STATE(547)] = 13770,
  [SMALL_STATE(548)] = 13783,
  [SMALL_STATE(549)] = 13796,
  [SMALL_STATE(550)] = 13804,
  [SMALL_STATE(551)] = 13814,
  [SMALL_STATE(552)] = 13822,
  [SMALL_STATE(553)] = 13832,
  [SMALL_STATE(554)] = 13842,
  [SMALL_STATE(555)] = 13850,
  [SMALL_STATE(556)] = 13858,
  [SMALL_STATE(557)] = 13866,
  [SMALL_STATE(558)] = 13876,
  [SMALL_STATE(559)] = 13884,
  [SMALL_STATE(560)] = 13894,
  [SMALL_STATE(561)] = 13902,
  [SMALL_STATE(562)] = 13912,
  [SMALL_STATE(563)] = 13920,
  [SMALL_STATE(564)] = 13928,
  [SMALL_STATE(565)] = 13938,
  [SMALL_STATE(566)] = 13948,
  [SMALL_STATE(567)] = 13956,
  [SMALL_STATE(568)] = 13966,
  [SMALL_STATE(569)] = 13974,
  [SMALL_STATE(570)] = 13984,
  [SMALL_STATE(571)] = 13994,
  [SMALL_STATE(572)] = 14004,
  [SMALL_STATE(573)] = 14014,
  [SMALL_STATE(574)] = 14022,
  [SMALL_STATE(575)] = 14032,
  [SMALL_STATE(576)] = 14040,
  [SMALL_STATE(577)] = 14048,
  [SMALL_STATE(578)] = 14058,
  [SMALL_STATE(579)] = 14066,
  [SMALL_STATE(580)] = 14076,
  [SMALL_STATE(581)] = 14086,
  [SMALL_STATE(582)] = 14094,
  [SMALL_STATE(583)] = 14102,
  [SMALL_STATE(584)] = 14112,
  [SMALL_STATE(585)] = 14120,
  [SMALL_STATE(586)] = 14130,
  [SMALL_STATE(587)] = 14138,
  [SMALL_STATE(588)] = 14146,
  [SMALL_STATE(589)] = 14156,
  [SMALL_STATE(590)] = 14164,
  [SMALL_STATE(591)] = 14174,
  [SMALL_STATE(592)] = 14184,
  [SMALL_STATE(593)] = 14194,
  [SMALL_STATE(594)] = 14202,
  [SMALL_STATE(595)] = 14212,
  [SMALL_STATE(596)] = 14220,
  [SMALL_STATE(597)] = 14228,
  [SMALL_STATE(598)] = 14236,
  [SMALL_STATE(599)] = 14244,
  [SMALL_STATE(600)] = 14254,
  [SMALL_STATE(601)] = 14264,
  [SMALL_STATE(602)] = 14274,
  [SMALL_STATE(603)] = 14284,
  [SMALL_STATE(604)] = 14292,
  [SMALL_STATE(605)] = 14302,
  [SMALL_STATE(606)] = 14312,
  [SMALL_STATE(607)] = 14322,
  [SMALL_STATE(608)] = 14330,
  [SMALL_STATE(609)] = 14338,
  [SMALL_STATE(610)] = 14346,
  [SMALL_STATE(611)] = 14356,
  [SMALL_STATE(612)] = 14366,
  [SMALL_STATE(613)] = 14376,
  [SMALL_STATE(614)] = 14384,
  [SMALL_STATE(615)] = 14392,
  [SMALL_STATE(616)] = 14399,
  [SMALL_STATE(617)] = 14406,
  [SMALL_STATE(618)] = 14413,
  [SMALL_STATE(619)] = 14420,
  [SMALL_STATE(620)] = 14427,
  [SMALL_STATE(621)] = 14434,
  [SMALL_STATE(622)] = 14441,
  [SMALL_STATE(623)] = 14448,
  [SMALL_STATE(624)] = 14455,
  [SMALL_STATE(625)] = 14462,
  [SMALL_STATE(626)] = 14469,
  [SMALL_STATE(627)] = 14476,
  [SMALL_STATE(628)] = 14483,
  [SMALL_STATE(629)] = 14490,
  [SMALL_STATE(630)] = 14497,
  [SMALL_STATE(631)] = 14504,
  [SMALL_STATE(632)] = 14511,
  [SMALL_STATE(633)] = 14518,
  [SMALL_STATE(634)] = 14525,
  [SMALL_STATE(635)] = 14532,
  [SMALL_STATE(636)] = 14539,
  [SMALL_STATE(637)] = 14546,
  [SMALL_STATE(638)] = 14553,
  [SMALL_STATE(639)] = 14560,
  [SMALL_STATE(640)] = 14567,
  [SMALL_STATE(641)] = 14574,
  [SMALL_STATE(642)] = 14581,
  [SMALL_STATE(643)] = 14588,
  [SMALL_STATE(644)] = 14595,
  [SMALL_STATE(645)] = 14602,
  [SMALL_STATE(646)] = 14609,
  [SMALL_STATE(647)] = 14616,
  [SMALL_STATE(648)] = 14623,
  [SMALL_STATE(649)] = 14630,
  [SMALL_STATE(650)] = 14637,
  [SMALL_STATE(651)] = 14644,
  [SMALL_STATE(652)] = 14651,
  [SMALL_STATE(653)] = 14658,
  [SMALL_STATE(654)] = 14665,
  [SMALL_STATE(655)] = 14672,
  [SMALL_STATE(656)] = 14679,
  [SMALL_STATE(657)] = 14686,
  [SMALL_STATE(658)] = 14693,
  [SMALL_STATE(659)] = 14700,
  [SMALL_STATE(660)] = 14707,
  [SMALL_STATE(661)] = 14714,
  [SMALL_STATE(662)] = 14721,
  [SMALL_STATE(663)] = 14728,
  [SMALL_STATE(664)] = 14735,
  [SMALL_STATE(665)] = 14742,
  [SMALL_STATE(666)] = 14749,
  [SMALL_STATE(667)] = 14756,
  [SMALL_STATE(668)] = 14763,
  [SMALL_STATE(669)] = 14770,
  [SMALL_STATE(670)] = 14777,
  [SMALL_STATE(671)] = 14784,
  [SMALL_STATE(672)] = 14791,
  [SMALL_STATE(673)] = 14798,
  [SMALL_STATE(674)] = 14805,
  [SMALL_STATE(675)] = 14812,
  [SMALL_STATE(676)] = 14819,
  [SMALL_STATE(677)] = 14826,
  [SMALL_STATE(678)] = 14833,
  [SMALL_STATE(679)] = 14840,
  [SMALL_STATE(680)] = 14847,
  [SMALL_STATE(681)] = 14854,
  [SMALL_STATE(682)] = 14861,
  [SMALL_STATE(683)] = 14868,
  [SMALL_STATE(684)] = 14875,
  [SMALL_STATE(685)] = 14882,
  [SMALL_STATE(686)] = 14889,
  [SMALL_STATE(687)] = 14896,
  [SMALL_STATE(688)] = 14903,
  [SMALL_STATE(689)] = 14910,
  [SMALL_STATE(690)] = 14917,
  [SMALL_STATE(691)] = 14924,
  [SMALL_STATE(692)] = 14931,
  [SMALL_STATE(693)] = 14938,
  [SMALL_STATE(694)] = 14945,
  [SMALL_STATE(695)] = 14952,
  [SMALL_STATE(696)] = 14959,
  [SMALL_STATE(697)] = 14966,
  [SMALL_STATE(698)] = 14973,
  [SMALL_STATE(699)] = 14980,
  [SMALL_STATE(700)] = 14987,
  [SMALL_STATE(701)] = 14994,
  [SMALL_STATE(702)] = 15001,
  [SMALL_STATE(703)] = 15008,
  [SMALL_STATE(704)] = 15015,
  [SMALL_STATE(705)] = 15022,
  [SMALL_STATE(706)] = 15029,
  [SMALL_STATE(707)] = 15036,
  [SMALL_STATE(708)] = 15043,
  [SMALL_STATE(709)] = 15050,
  [SMALL_STATE(710)] = 15057,
  [SMALL_STATE(711)] = 15064,
  [SMALL_STATE(712)] = 15071,
  [SMALL_STATE(713)] = 15078,
  [SMALL_STATE(714)] = 15085,
  [SMALL_STATE(715)] = 15092,
  [SMALL_STATE(716)] = 15099,
  [SMALL_STATE(717)] = 15106,
  [SMALL_STATE(718)] = 15113,
  [SMALL_STATE(719)] = 15120,
  [SMALL_STATE(720)] = 15127,
  [SMALL_STATE(721)] = 15134,
  [SMALL_STATE(722)] = 15141,
  [SMALL_STATE(723)] = 15148,
  [SMALL_STATE(724)] = 15155,
  [SMALL_STATE(725)] = 15162,
  [SMALL_STATE(726)] = 15169,
  [SMALL_STATE(727)] = 15176,
  [SMALL_STATE(728)] = 15183,
  [SMALL_STATE(729)] = 15190,
  [SMALL_STATE(730)] = 15197,
  [SMALL_STATE(731)] = 15204,
  [SMALL_STATE(732)] = 15211,
  [SMALL_STATE(733)] = 15218,
  [SMALL_STATE(734)] = 15225,
  [SMALL_STATE(735)] = 15232,
  [SMALL_STATE(736)] = 15239,
  [SMALL_STATE(737)] = 15246,
  [SMALL_STATE(738)] = 15253,
  [SMALL_STATE(739)] = 15260,
  [SMALL_STATE(740)] = 15267,
  [SMALL_STATE(741)] = 15274,
  [SMALL_STATE(742)] = 15281,
  [SMALL_STATE(743)] = 15288,
  [SMALL_STATE(744)] = 15295,
  [SMALL_STATE(745)] = 15302,
  [SMALL_STATE(746)] = 15309,
  [SMALL_STATE(747)] = 15316,
  [SMALL_STATE(748)] = 15323,
  [SMALL_STATE(749)] = 15330,
  [SMALL_STATE(750)] = 15337,
  [SMALL_STATE(751)] = 15344,
  [SMALL_STATE(752)] = 15351,
  [SMALL_STATE(753)] = 15358,
  [SMALL_STATE(754)] = 15365,
  [SMALL_STATE(755)] = 15372,
  [SMALL_STATE(756)] = 15379,
  [SMALL_STATE(757)] = 15386,
  [SMALL_STATE(758)] = 15393,
  [SMALL_STATE(759)] = 15400,
  [SMALL_STATE(760)] = 15407,
  [SMALL_STATE(761)] = 15414,
  [SMALL_STATE(762)] = 15421,
  [SMALL_STATE(763)] = 15428,
  [SMALL_STATE(764)] = 15435,
  [SMALL_STATE(765)] = 15442,
  [SMALL_STATE(766)] = 15449,
  [SMALL_STATE(767)] = 15456,
  [SMALL_STATE(768)] = 15463,
  [SMALL_STATE(769)] = 15470,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumName, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumName, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_globalAccumName, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_globalAccumName, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2), SHIFT_REPEAT(7),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 4),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real, 4),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 2),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 3),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declStmts, 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declStmts, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(257),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(249),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(762),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(277),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(280),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(281),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(286),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(290),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(761),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(759),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(758),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(757),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(756),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(331),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declStmts_repeat1, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_localAccumName, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_localAccumName, 2),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expr, 3), REDUCE(sym_setBagExpr, 3),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_expr, 3), REDUCE(sym_setBagExpr, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric, 1),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expr, 1), REDUCE(sym_setBagExpr, 1),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_expr, 1), REDUCE(sym_setBagExpr, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 4),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 4),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringLiteral, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringLiteral, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setBagExpr, 3),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setBagExpr, 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringLiteral, 3),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringLiteral, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(27),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(27),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 2),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(30),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(30),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typedefs_repeat1, 2), SHIFT_REPEAT(763),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typedefs_repeat1, 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_typedefs_repeat1, 2),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(34),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(34),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedefs, 1),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typedefs, 1),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(38),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(38),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(44),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 3),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 3),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expr, 3), SHIFT(213),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_expr, 3), SHIFT(213),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(66),
  [385] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(66),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(74),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(74),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(108),
  [459] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(108),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [470] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(111),
  [473] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(111),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(113),
  [483] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(113),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_queryBodyStmts_repeat1, 2), SHIFT_REPEAT(78),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_queryBodyStmts_repeat1, 2),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_queryBodyStmts_repeat1, 2), SHIFT_REPEAT(43),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_queryBodyStmts_repeat1, 2), SHIFT_REPEAT(53),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_queryBodyStmts_repeat1, 2), SHIFT_REPEAT(87),
  [504] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_queryBodyStmts_repeat1, 2), SHIFT_REPEAT(43),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBodyStmts, 1),
  [509] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(118),
  [512] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(118),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [523] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(121),
  [526] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(121),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [545] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(126),
  [548] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(126),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printExpr, 1),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [605] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym_expr, 1), REDUCE(sym_setBagExpr, 1), REDUCE(sym_tableName, 1),
  [609] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(156),
  [612] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(156),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldName, 1),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argList, 1),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vSetProj, 1),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignStmt, 5),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gAccumAccumStmt, 3),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignStmt, 3),
  [663] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(185),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argList_repeat1, 2),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_CREATE_VERTEX_repeat1, 5),
  [686] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(197),
  [689] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(197),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [708] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(208),
  [711] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(208),
  [714] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_atomicVertexType, 1), REDUCE(sym_name, 1),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnStmt, 2),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mathOperator, 1),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mathOperator, 1),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparisonOperator, 1),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparisonOperator, 1),
  [731] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(217),
  [734] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(217),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [751] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(228),
  [754] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(228),
  [757] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(230),
  [760] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(230),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [771] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_atomicEdgeType, 1), REDUCE(sym_name, 1),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsqlSelectBlock, 2),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [784] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_seed, 1), REDUCE(sym_name, 1),
  [787] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(241),
  [790] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(241),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepVertexTypes, 3),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stepVertexTypes_repeat1, 2),
  [807] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stepVertexTypes_repeat1, 2), SHIFT_REPEAT(226),
  [810] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_queryBodyStmts_repeat1, 2),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepVertexTypes, 2),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseType, 1),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 4),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setBagExpr, 1),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertexSetType, 1),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertexSetName, 1),
  [826] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_paramName, 1), REDUCE(sym_vertexType, 1),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumType, 6),
  [831] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumType, 6),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseType, 1, .production_id = 1),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumType, 4, .production_id = 5),
  [845] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumType, 4, .production_id = 5),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseType, 1, .production_id = 2),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseType, 1, .production_id = 3),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumType, 4),
  [855] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumType, 4),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 8),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pathPattern, 2),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertexAlias, 1),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumType, 1),
  [883] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumType, 1),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 7),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumType, 9),
  [903] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumType, 9),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [907] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(298),
  [910] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(298),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 5),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pathPattern_repeat1, 2),
  [927] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pathPattern_repeat1, 2), SHIFT_REPEAT(682),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumType, 10),
  [932] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumType, 10),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomicVertexType, 1),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pathPattern, 1),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepVertexSet, 1),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepVertexTypes, 1),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumType, 11),
  [946] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumType, 11),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsqlSelectBlock, 3),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [952] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(423),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseType, 4),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 9),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 6),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simpleSet, 1),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vExprSet, 4),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepEdgeTypes, 2),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomicEdgeType, 1),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [995] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fromClause_repeat1, 2), SHIFT_REPEAT(151),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fromClause_repeat1, 2),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepVertexSet, 3),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsqlSelectBlock, 5),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [1008] = {.entry = {.count = 1, .reusable = false}}, SHIFT(734),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simpleSet, 3),
  [1012] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_simpleSet, 3), SHIFT(259),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepVertexSet, 2),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printStmt, 2),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 10),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fromClause, 2),
  [1035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gsqlSelectBlock_repeat1, 2),
  [1037] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gsqlSelectBlock_repeat1, 2), SHIFT_REPEAT(728),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsqlSelectBlock, 4),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fromClause, 3),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 12),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vExprSet, 5),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pathPattern_repeat1, 6),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printStmt, 3),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1068] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_printStmt_repeat1, 2), SHIFT_REPEAT(51),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_printStmt_repeat1, 2),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonKey, 1),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tupleType, 1),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 11),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dmlSubStmtList, 2),
  [1101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_paramName, 1), REDUCE(sym_edgeType, 1),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edgeSetType, 1),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vSetVarDeclStmt, 6),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumDeclStmt, 3),
  [1116] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stringLiteral_repeat1, 2),
  [1120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stringLiteral_repeat1, 2), SHIFT_REPEAT(430),
  [1123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stringLiteral_repeat1, 2), SHIFT_REPEAT(430),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printExpr, 3),
  [1130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepEdgeTypes, 3),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printStmt, 4),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stepEdgeTypes_repeat1, 2),
  [1148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stepEdgeTypes_repeat1, 2), SHIFT_REPEAT(221),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accumType_repeat1, 2),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_whereClause, 2),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseDeclStmt, 2),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumDeclStmt, 2),
  [1171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_condition, 3), SHIFT(83),
  [1174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [1180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphName, 1),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_VERTEX, 6, .production_id = 4),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [1192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dmlSubStmtList, 1),
  [1194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterList, 2),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printStmt, 5),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_condition, 3), SHIFT(60),
  [1207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [1209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_VERTEX, 7, .production_id = 4),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dmlSubStmtList_repeat1, 2), SHIFT_REPEAT(232),
  [1218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dmlSubStmtList_repeat1, 2),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vSetVarDeclStmt, 3),
  [1224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseDeclStmt, 3),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseDeclStmt_repeat1, 2), SHIFT_REPEAT(458),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_baseDeclStmt_repeat1, 2),
  [1235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseDeclStmt, 4),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterType, 3),
  [1243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterList, 3),
  [1245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_perClauseV2_repeat1, 2),
  [1247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_perClauseV2_repeat1, 2), SHIFT_REPEAT(270),
  [1250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_CREATE_VERTEX_repeat1, 3),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paramName, 1),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tupleFields, 2),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumDeclStmt, 5),
  [1264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returns, 4),
  [1266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argList_repeat1, 2), SHIFT_REPEAT(96),
  [1269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_VERTEX, 9, .production_id = 4),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameterList_repeat1, 3),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterList, 5),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_CREATE_VERTEX_repeat1, 2),
  [1291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_CREATE_VERTEX_repeat1, 2), SHIFT_REPEAT(439),
  [1294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_VERTEX, 10, .production_id = 4),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dmlSubStmt, 1),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumDeclStmt, 4),
  [1310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tupleFields_repeat1, 2), SHIFT_REPEAT(147),
  [1313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tupleFields_repeat1, 2),
  [1315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seedSet_repeat1, 2),
  [1317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seedSet_repeat1, 2), SHIFT_REPEAT(193),
  [1320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argList, 2),
  [1322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameterList_repeat1, 2),
  [1324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameterList_repeat1, 2), SHIFT_REPEAT(154),
  [1327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_condition, 3), SHIFT(80),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filePath, 1),
  [1342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectVertParams, 11),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomicEdgePattern, 1),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseDeclStmt, 5),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_condition, 3), SHIFT(64),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_queryBodyIfStmt_repeat1, 5), SHIFT(130),
  [1366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_queryBodyIfStmt_repeat1, 5), SHIFT(697),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_paramName, 1), REDUCE(sym_vertexSetName, 1),
  [1376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertexType, 1),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_VERTEX, 5, .production_id = 4),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vExprSet_repeat1, 2), SHIFT_REPEAT(63),
  [1387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vExprSet_repeat1, 2),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterType, 4),
  [1395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterList, 4),
  [1397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_queryBodyIfStmt_repeat1, 2), SHIFT_REPEAT(662),
  [1400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_queryBodyIfStmt_repeat1, 2),
  [1402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterType, 1),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accumDeclStmt_repeat1, 2),
  [1408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accumDeclStmt_repeat1, 2), SHIFT_REPEAT(592),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accumType_repeat1, 2), SHIFT_REPEAT(409),
  [1416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumDeclStmt, 6),
  [1418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tupleFields, 3),
  [1420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 13),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementType, 2),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed, 1),
  [1432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createQuery, 4),
  [1434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_VERTEX, 13, .production_id = 4),
  [1436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accumType_repeat1, 3),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_queryBodyIfStmt_repeat1, 5),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_VERTEX, 12, .production_id = 4),
  [1446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomicEdgePattern, 2),
  [1448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 14),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vSetProj, 3),
  [1454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 15),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 16),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accumDeclStmt_repeat1, 4),
  [1466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepEdgeTypes, 1),
  [1468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepEdgeSet, 1),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameterList_repeat1, 5),
  [1474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 17),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_perClauseV2, 4),
  [1480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed, 2),
  [1482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectVertParams, 16),
  [1484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postAccumClause, 3),
  [1486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_baseDeclStmt_repeat1, 4),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumClause, 3),
  [1498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_vertexAlias, 1), REDUCE(sym_edgeAlias, 1),
  [1501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 1),
  [1503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tupleFields_repeat1, 3),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementType, 1),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_id_name_type, 3),
  [1519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_perClauseV2, 5),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 18),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 19),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_columnId, 2),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepEdgeSet, 3),
  [1581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pathEdgePattern, 3),
  [1583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBodyIfStmt, 8),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attrName, 1),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edgeAlias, 1),
  [1601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepEdgeSet, 2),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printStmt, 7),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBodyIfStmt, 7),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seedSet, 4),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pathEdgePattern, 1),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printStmt, 6),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBodyIfStmt, 6),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1639] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_paramName, 1), REDUCE(sym_varName, 1),
  [1642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simpleSize, 1),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 6),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seedSet, 3),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fileDeclStmt, 5),
  [1670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBodyIfStmt, 5),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntaxName, 1),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsqlSelectClause, 4),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seedSet, 2),
  [1692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [1696] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_fileVar, 1), REDUCE(sym_paramName, 1),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [1719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBody, 3),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1727] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBody, 2),
  [1743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fileVar, 1),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectStmt, 1),
  [1755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBodyStmt, 1),
  [1757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declStmt, 1),
  [1759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBody, 1),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryName, 1),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
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
