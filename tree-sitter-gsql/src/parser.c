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
#define STATE_COUNT 897
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 265
#define ALIAS_COUNT 6
#define TOKEN_COUNT 135
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 19
#define PRODUCTION_ID_COUNT 7

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
  aux_sym_baseType_token7 = 106,
  anon_sym_SET = 107,
  anon_sym_BAG = 108,
  anon_sym_FILE = 109,
  aux_sym_CREATE_VERTEX_token1 = 110,
  aux_sym_CREATE_UNDIRECTED_EDGE_token1 = 111,
  aux_sym_CREATE_UNDIRECTED_EDGE_token2 = 112,
  aux_sym_CREATE_DIRECTED_EDGE_token1 = 113,
  aux_sym_CREATE_DIRECTED_EDGE_token2 = 114,
  aux_sym_CREATE_DIRECTED_EDGE_token3 = 115,
  aux_sym_WITH_token1 = 116,
  anon_sym_DQUOTEnone_DQUOTE = 117,
  aux_sym_WITH_token2 = 118,
  anon_sym_primary_id_as_attribute = 119,
  anon_sym_DQUOTEtrue_DQUOTE = 120,
  aux_sym_CREATE_GRAPH_token1 = 121,
  aux_sym_CREATE_GRAPH_token2 = 122,
  aux_sym_primary_id_name_type_token1 = 123,
  aux_sym_DROP_token1 = 124,
  aux_sym_DROP_token2 = 125,
  aux_sym_ADD_INDEX_token1 = 126,
  aux_sym_ADD_INDEX_token2 = 127,
  aux_sym_ADD_INDEX_token3 = 128,
  aux_sym_ADD_INDEX_token4 = 129,
  aux_sym_create_loading_job_token1 = 130,
  aux_sym_create_loading_job_token2 = 131,
  aux_sym_create_loading_job_token3 = 132,
  aux_sym_define_statement_token1 = 133,
  aux_sym_define_statement_token2 = 134,
  sym_source_file = 135,
  sym_createQuery = 136,
  sym_createSignature = 137,
  sym_returns = 138,
  sym_parameterList = 139,
  sym_syntaxName = 140,
  sym_queryBody = 141,
  sym_typedefs = 142,
  sym_typedef = 143,
  sym_tupleFields = 144,
  sym_declStmts = 145,
  sym_declStmt = 146,
  sym_queryBodyStmts = 147,
  sym_queryBodyStmt = 148,
  sym_constant = 149,
  sym_mathOperator = 150,
  sym_condition = 151,
  sym_comparisonOperator = 152,
  sym_pathPattern = 153,
  sym_pathEdgePattern = 154,
  sym_atomicEdgePattern = 155,
  sym_accumDeclStmt = 156,
  sym_localAccumName = 157,
  sym_globalAccumName = 158,
  sym_accumType = 159,
  sym_elementType = 160,
  sym_gAccumAccumStmt = 161,
  sym_assignStmt = 162,
  sym_argList = 163,
  sym_queryBodyIfStmt = 164,
  sym_simpleSize = 165,
  sym_baseDeclStmt = 166,
  sym_fileDeclStmt = 167,
  sym_fileVar = 168,
  sym_vSetVarDeclStmt = 169,
  sym_simpleSet = 170,
  sym_seedSet = 171,
  sym_seed = 172,
  sym_selectVertParams = 173,
  sym_columnId = 174,
  sym_expr = 175,
  sym_setBagExpr = 176,
  sym_printStmt = 177,
  sym_printExpr = 178,
  sym_vExprSet = 179,
  sym_vSetProj = 180,
  sym_jsonKey = 181,
  sym_returnStmt = 182,
  sym_selectStmt = 183,
  sym_gsqlSelectBlock = 184,
  sym_gsqlSelectClause = 185,
  sym_tableName = 186,
  sym_fromClause = 187,
  sym_stepEdgeSet = 188,
  sym_stepVertexSet = 189,
  sym_alias = 190,
  sym_vertexAlias = 191,
  sym_edgeAlias = 192,
  sym_stepEdgeTypes = 193,
  sym_atomicEdgeType = 194,
  sym_edgeSetType = 195,
  sym_stepVertexTypes = 196,
  sym_atomicVertexType = 197,
  sym_vertexSetType = 198,
  sym_whereClause = 199,
  sym_accumClause = 200,
  sym_postAccumClause = 201,
  sym_perClauseV2 = 202,
  sym_dmlSubStmtList = 203,
  sym_dmlSubStmt = 204,
  sym_stringLiteral = 205,
  sym_integer = 206,
  sym_real = 207,
  sym_numeric = 208,
  sym_name = 209,
  sym_graphName = 210,
  sym_queryName = 211,
  sym_paramName = 212,
  sym_vertexType = 213,
  sym_edgeType = 214,
  sym_accumName = 215,
  sym_vertexSetName = 216,
  sym_attrName = 217,
  sym_varName = 218,
  sym_tupleType = 219,
  sym_fieldName = 220,
  sym_filePath = 221,
  sym_type = 222,
  sym_baseType = 223,
  sym_parameterType = 224,
  sym_CREATE_VERTEX = 225,
  sym_CREATE_UNDIRECTED_EDGE = 226,
  sym_CREATE_DIRECTED_EDGE = 227,
  sym_WITH = 228,
  sym_CREATE_GRAPH = 229,
  sym_primary_id_name_type = 230,
  sym_DROP = 231,
  sym_ADD_INDEX = 232,
  sym_DROP_INDEX = 233,
  sym_create_loading_job = 234,
  sym_define_statement = 235,
  aux_sym_source_file_repeat1 = 236,
  aux_sym_parameterList_repeat1 = 237,
  aux_sym_typedefs_repeat1 = 238,
  aux_sym_tupleFields_repeat1 = 239,
  aux_sym_declStmts_repeat1 = 240,
  aux_sym_queryBodyStmts_repeat1 = 241,
  aux_sym_pathPattern_repeat1 = 242,
  aux_sym_accumDeclStmt_repeat1 = 243,
  aux_sym_accumType_repeat1 = 244,
  aux_sym_argList_repeat1 = 245,
  aux_sym_queryBodyIfStmt_repeat1 = 246,
  aux_sym_baseDeclStmt_repeat1 = 247,
  aux_sym_seedSet_repeat1 = 248,
  aux_sym_printStmt_repeat1 = 249,
  aux_sym_vExprSet_repeat1 = 250,
  aux_sym_gsqlSelectBlock_repeat1 = 251,
  aux_sym_fromClause_repeat1 = 252,
  aux_sym_stepEdgeTypes_repeat1 = 253,
  aux_sym_stepVertexTypes_repeat1 = 254,
  aux_sym_perClauseV2_repeat1 = 255,
  aux_sym_dmlSubStmtList_repeat1 = 256,
  aux_sym_stringLiteral_repeat1 = 257,
  aux_sym_integer_repeat1 = 258,
  aux_sym_name_repeat1 = 259,
  aux_sym_CREATE_VERTEX_repeat1 = 260,
  aux_sym_CREATE_UNDIRECTED_EDGE_repeat1 = 261,
  aux_sym_CREATE_UNDIRECTED_EDGE_repeat2 = 262,
  aux_sym_CREATE_GRAPH_repeat1 = 263,
  aux_sym_create_loading_job_repeat1 = 264,
  anon_alias_sym_CREATE = 265,
  anon_alias_sym_DOUBLE = 266,
  anon_alias_sym_FLOAT = 267,
  anon_alias_sym_INT = 268,
  anon_alias_sym_from = 269,
  anon_alias_sym_string = 270,
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
  [aux_sym_fromClause_token1] = "FROM",
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
  [aux_sym_baseType_token3] = "VERTEX",
  [aux_sym_baseType_token4] = "EDGE",
  [aux_sym_baseType_token5] = "JSONOBJECT",
  [aux_sym_baseType_token6] = "JSONARRAY",
  [aux_sym_baseType_token7] = "DATETIME",
  [anon_sym_SET] = "SET",
  [anon_sym_BAG] = "BAG",
  [anon_sym_FILE] = "FILE",
  [aux_sym_CREATE_VERTEX_token1] = "DEFAULT",
  [aux_sym_CREATE_UNDIRECTED_EDGE_token1] = "UNDIRECTED",
  [aux_sym_CREATE_UNDIRECTED_EDGE_token2] = "TO",
  [aux_sym_CREATE_DIRECTED_EDGE_token1] = "DIRECTED",
  [aux_sym_CREATE_DIRECTED_EDGE_token2] = "WITH",
  [aux_sym_CREATE_DIRECTED_EDGE_token3] = "REVERSE_EDGE",
  [aux_sym_WITH_token1] = "STATS",
  [anon_sym_DQUOTEnone_DQUOTE] = "\"none\"",
  [aux_sym_WITH_token2] = "OUTDEGREE_BY_EDGETYPE",
  [anon_sym_primary_id_as_attribute] = "primary_id_as_attribute",
  [anon_sym_DQUOTEtrue_DQUOTE] = "\"true\"",
  [aux_sym_CREATE_GRAPH_token1] = "GRAPH",
  [aux_sym_CREATE_GRAPH_token2] = "ADMIN",
  [aux_sym_primary_id_name_type_token1] = "PRIMARY_ID",
  [aux_sym_DROP_token1] = "DROP",
  [aux_sym_DROP_token2] = "ALL",
  [aux_sym_ADD_INDEX_token1] = "ALTER",
  [aux_sym_ADD_INDEX_token2] = "ADD",
  [aux_sym_ADD_INDEX_token3] = "INDEX",
  [aux_sym_ADD_INDEX_token4] = "ON",
  [aux_sym_create_loading_job_token1] = "LOADING",
  [aux_sym_create_loading_job_token2] = "JOB",
  [aux_sym_create_loading_job_token3] = "FOR",
  [aux_sym_define_statement_token1] = "DEFINE",
  [aux_sym_define_statement_token2] = "FILENAME",
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
  [sym_CREATE_VERTEX] = "CREATE_VERTEX",
  [sym_CREATE_UNDIRECTED_EDGE] = "CREATE_UNDIRECTED_EDGE",
  [sym_CREATE_DIRECTED_EDGE] = "CREATE_DIRECTED_EDGE",
  [sym_WITH] = "WITH",
  [sym_CREATE_GRAPH] = "CREATE_GRAPH",
  [sym_primary_id_name_type] = "primary_id_name_type",
  [sym_DROP] = "DROP",
  [sym_ADD_INDEX] = "ADD_INDEX",
  [sym_DROP_INDEX] = "DROP_INDEX",
  [sym_create_loading_job] = "create_loading_job",
  [sym_define_statement] = "define_statement",
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
  [aux_sym_CREATE_VERTEX_repeat1] = "CREATE_VERTEX_repeat1",
  [aux_sym_CREATE_UNDIRECTED_EDGE_repeat1] = "CREATE_UNDIRECTED_EDGE_repeat1",
  [aux_sym_CREATE_UNDIRECTED_EDGE_repeat2] = "CREATE_UNDIRECTED_EDGE_repeat2",
  [aux_sym_CREATE_GRAPH_repeat1] = "CREATE_GRAPH_repeat1",
  [aux_sym_create_loading_job_repeat1] = "create_loading_job_repeat1",
  [anon_alias_sym_CREATE] = "CREATE",
  [anon_alias_sym_DOUBLE] = "DOUBLE",
  [anon_alias_sym_FLOAT] = "FLOAT",
  [anon_alias_sym_INT] = "INT",
  [anon_alias_sym_from] = "from",
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
  [aux_sym_baseType_token7] = aux_sym_baseType_token7,
  [anon_sym_SET] = anon_sym_SET,
  [anon_sym_BAG] = anon_sym_BAG,
  [anon_sym_FILE] = anon_sym_FILE,
  [aux_sym_CREATE_VERTEX_token1] = aux_sym_CREATE_VERTEX_token1,
  [aux_sym_CREATE_UNDIRECTED_EDGE_token1] = aux_sym_CREATE_UNDIRECTED_EDGE_token1,
  [aux_sym_CREATE_UNDIRECTED_EDGE_token2] = aux_sym_CREATE_UNDIRECTED_EDGE_token2,
  [aux_sym_CREATE_DIRECTED_EDGE_token1] = aux_sym_CREATE_DIRECTED_EDGE_token1,
  [aux_sym_CREATE_DIRECTED_EDGE_token2] = aux_sym_CREATE_DIRECTED_EDGE_token2,
  [aux_sym_CREATE_DIRECTED_EDGE_token3] = aux_sym_CREATE_DIRECTED_EDGE_token3,
  [aux_sym_WITH_token1] = aux_sym_WITH_token1,
  [anon_sym_DQUOTEnone_DQUOTE] = anon_sym_DQUOTEnone_DQUOTE,
  [aux_sym_WITH_token2] = aux_sym_WITH_token2,
  [anon_sym_primary_id_as_attribute] = anon_sym_primary_id_as_attribute,
  [anon_sym_DQUOTEtrue_DQUOTE] = anon_sym_DQUOTEtrue_DQUOTE,
  [aux_sym_CREATE_GRAPH_token1] = anon_sym_GRAPH,
  [aux_sym_CREATE_GRAPH_token2] = aux_sym_CREATE_GRAPH_token2,
  [aux_sym_primary_id_name_type_token1] = aux_sym_primary_id_name_type_token1,
  [aux_sym_DROP_token1] = aux_sym_DROP_token1,
  [aux_sym_DROP_token2] = aux_sym_DROP_token2,
  [aux_sym_ADD_INDEX_token1] = aux_sym_ADD_INDEX_token1,
  [aux_sym_ADD_INDEX_token2] = aux_sym_ADD_INDEX_token2,
  [aux_sym_ADD_INDEX_token3] = aux_sym_ADD_INDEX_token3,
  [aux_sym_ADD_INDEX_token4] = aux_sym_ADD_INDEX_token4,
  [aux_sym_create_loading_job_token1] = aux_sym_create_loading_job_token1,
  [aux_sym_create_loading_job_token2] = aux_sym_create_loading_job_token2,
  [aux_sym_create_loading_job_token3] = anon_sym_FOR,
  [aux_sym_define_statement_token1] = aux_sym_define_statement_token1,
  [aux_sym_define_statement_token2] = aux_sym_define_statement_token2,
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
  [sym_CREATE_VERTEX] = sym_CREATE_VERTEX,
  [sym_CREATE_UNDIRECTED_EDGE] = sym_CREATE_UNDIRECTED_EDGE,
  [sym_CREATE_DIRECTED_EDGE] = sym_CREATE_DIRECTED_EDGE,
  [sym_WITH] = sym_WITH,
  [sym_CREATE_GRAPH] = sym_CREATE_GRAPH,
  [sym_primary_id_name_type] = sym_primary_id_name_type,
  [sym_DROP] = sym_DROP,
  [sym_ADD_INDEX] = sym_ADD_INDEX,
  [sym_DROP_INDEX] = sym_DROP_INDEX,
  [sym_create_loading_job] = sym_create_loading_job,
  [sym_define_statement] = sym_define_statement,
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
  [aux_sym_CREATE_VERTEX_repeat1] = aux_sym_CREATE_VERTEX_repeat1,
  [aux_sym_CREATE_UNDIRECTED_EDGE_repeat1] = aux_sym_CREATE_UNDIRECTED_EDGE_repeat1,
  [aux_sym_CREATE_UNDIRECTED_EDGE_repeat2] = aux_sym_CREATE_UNDIRECTED_EDGE_repeat2,
  [aux_sym_CREATE_GRAPH_repeat1] = aux_sym_CREATE_GRAPH_repeat1,
  [aux_sym_create_loading_job_repeat1] = aux_sym_create_loading_job_repeat1,
  [anon_alias_sym_CREATE] = anon_alias_sym_CREATE,
  [anon_alias_sym_DOUBLE] = anon_alias_sym_DOUBLE,
  [anon_alias_sym_FLOAT] = anon_alias_sym_FLOAT,
  [anon_alias_sym_INT] = anon_alias_sym_INT,
  [anon_alias_sym_from] = anon_alias_sym_from,
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
  [aux_sym_baseType_token7] = {
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
  [aux_sym_CREATE_VERTEX_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_CREATE_UNDIRECTED_EDGE_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_CREATE_UNDIRECTED_EDGE_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_CREATE_DIRECTED_EDGE_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_CREATE_DIRECTED_EDGE_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_CREATE_DIRECTED_EDGE_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_WITH_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEnone_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_WITH_token2] = {
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
  [aux_sym_CREATE_GRAPH_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_CREATE_GRAPH_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_primary_id_name_type_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_DROP_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_DROP_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_ADD_INDEX_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_ADD_INDEX_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_ADD_INDEX_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_ADD_INDEX_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_create_loading_job_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_create_loading_job_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_create_loading_job_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_define_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_define_statement_token2] = {
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
  [sym_CREATE_VERTEX] = {
    .visible = true,
    .named = true,
  },
  [sym_CREATE_UNDIRECTED_EDGE] = {
    .visible = true,
    .named = true,
  },
  [sym_CREATE_DIRECTED_EDGE] = {
    .visible = true,
    .named = true,
  },
  [sym_WITH] = {
    .visible = true,
    .named = true,
  },
  [sym_CREATE_GRAPH] = {
    .visible = true,
    .named = true,
  },
  [sym_primary_id_name_type] = {
    .visible = true,
    .named = true,
  },
  [sym_DROP] = {
    .visible = true,
    .named = true,
  },
  [sym_ADD_INDEX] = {
    .visible = true,
    .named = true,
  },
  [sym_DROP_INDEX] = {
    .visible = true,
    .named = true,
  },
  [sym_create_loading_job] = {
    .visible = true,
    .named = true,
  },
  [sym_define_statement] = {
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
  [aux_sym_CREATE_VERTEX_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_CREATE_UNDIRECTED_EDGE_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_CREATE_UNDIRECTED_EDGE_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_CREATE_GRAPH_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_create_loading_job_repeat1] = {
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
  [anon_alias_sym_from] = {
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
    [0] = anon_alias_sym_from,
  },
  [6] = {
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
      if (eof) ADVANCE(523);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\r') SKIP(516)
      if (lookahead == '!') ADVANCE(49);
      if (lookahead == '"') ADVANCE(626);
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == '$') ADVANCE(608);
      if (lookahead == '%') ADVANCE(553);
      if (lookahead == '&') ADVANCE(560);
      if (lookahead == '\'') ADVANCE(609);
      if (lookahead == '(') ADVANCE(531);
      if (lookahead == ')') ADVANCE(532);
      if (lookahead == '*') ADVANCE(551);
      if (lookahead == '+') ADVANCE(555);
      if (lookahead == ',') ADVANCE(540);
      if (lookahead == '-') ADVANCE(557);
      if (lookahead == '.') ADVANCE(594);
      if (lookahead == '/') ADVANCE(552);
      if (lookahead == ':') ADVANCE(620);
      if (lookahead == ';') ADVANCE(541);
      if (lookahead == '<') ADVANCE(546);
      if (lookahead == '=') ADVANCE(539);
      if (lookahead == '>') ADVANCE(548);
      if (lookahead == '@') ADVANCE(575);
      if (lookahead == 'A') ADVANCE(701);
      if (lookahead == 'B') ADVANCE(750);
      if (lookahead == 'C') ADVANCE(755);
      if (lookahead == 'D') ADVANCE(712);
      if (lookahead == 'E') ADVANCE(716);
      if (lookahead == 'F') ADVANCE(709);
      if (lookahead == 'H') ADVANCE(717);
      if (lookahead == 'I') ADVANCE(730);
      if (lookahead == 'J') ADVANCE(762);
      if (lookahead == 'L') ADVANCE(736);
      if (lookahead == 'M') ADVANCE(711);
      if (lookahead == 'N') ADVANCE(754);
      if (lookahead == 'O') ADVANCE(705);
      if (lookahead == 'P') ADVANCE(719);
      if (lookahead == 'R') ADVANCE(721);
      if (lookahead == 'S') ADVANCE(707);
      if (lookahead == 'T') ADVANCE(733);
      if (lookahead == 'U') ADVANCE(739);
      if (lookahead == 'V') ADVANCE(722);
      if (lookahead == 'W') ADVANCE(699);
      if (lookahead == '[') ADVANCE(614);
      if (lookahead == '\\') ADVANCE(92);
      if (lookahead == ']') ADVANCE(615);
      if (lookahead == '_') ADVANCE(603);
      if (lookahead == 'a') ADVANCE(644);
      if (lookahead == 'b') ADVANCE(681);
      if (lookahead == 'c') ADVANCE(686);
      if (lookahead == 'd') ADVANCE(641);
      if (lookahead == 'e') ADVANCE(646);
      if (lookahead == 'f') ADVANCE(638);
      if (lookahead == 'h') ADVANCE(647);
      if (lookahead == 'i') ADVANCE(661);
      if (lookahead == 'j') ADVANCE(693);
      if (lookahead == 'l') ADVANCE(667);
      if (lookahead == 'm') ADVANCE(640);
      if (lookahead == 'n') ADVANCE(685);
      if (lookahead == 'o') ADVANCE(676);
      if (lookahead == 'p') ADVANCE(650);
      if (lookahead == 'r') ADVANCE(652);
      if (lookahead == 's') ADVANCE(648);
      if (lookahead == 't') ADVANCE(664);
      if (lookahead == 'u') ADVANCE(670);
      if (lookahead == 'v') ADVANCE(653);
      if (lookahead == 'w') ADVANCE(665);
      if (lookahead == '{') ADVANCE(524);
      if (lookahead == '|') ADVANCE(561);
      if (lookahead == '}') ADVANCE(525);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(697);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(635);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(468)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(469)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(470)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(471)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(472)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(473)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(474)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(475)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(476)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(477)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(478)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(479)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(480)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(481)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(482)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(483)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(484)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(485)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(486)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(487)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(488)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(489)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(490)
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(491)
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(492)
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(493)
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(494)
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(495)
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(496)
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(497)
      END_STATE();
    case 31:
      if (lookahead == '\n') SKIP(498)
      END_STATE();
    case 32:
      if (lookahead == '\n') SKIP(499)
      END_STATE();
    case 33:
      if (lookahead == '\n') SKIP(500)
      END_STATE();
    case 34:
      if (lookahead == '\n') SKIP(501)
      END_STATE();
    case 35:
      if (lookahead == '\n') SKIP(502)
      END_STATE();
    case 36:
      if (lookahead == '\n') SKIP(503)
      END_STATE();
    case 37:
      if (lookahead == '\n') SKIP(504)
      END_STATE();
    case 38:
      if (lookahead == '\n') SKIP(505)
      END_STATE();
    case 39:
      if (lookahead == '\n') SKIP(506)
      END_STATE();
    case 40:
      if (lookahead == '\n') SKIP(507)
      END_STATE();
    case 41:
      if (lookahead == '"') ADVANCE(783);
      END_STATE();
    case 42:
      if (lookahead == '"') ADVANCE(786);
      END_STATE();
    case 43:
      if (lookahead == '*') ADVANCE(45);
      if (lookahead == '/') ADVANCE(573);
      END_STATE();
    case 44:
      if (lookahead == '*') ADVANCE(44);
      if (lookahead == '/') ADVANCE(572);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == '*') ADVANCE(44);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 46:
      if (lookahead == '*') ADVANCE(605);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(156);
      END_STATE();
    case 48:
      if (lookahead == '<') ADVANCE(558);
      END_STATE();
    case 49:
      if (lookahead == '=') ADVANCE(571);
      END_STATE();
    case 50:
      if (lookahead == '=') ADVANCE(593);
      END_STATE();
    case 51:
      if (lookahead == '=') ADVANCE(570);
      END_STATE();
    case 52:
      if (lookahead == '>') ADVANCE(559);
      END_STATE();
    case 53:
      if (lookahead == '@') ADVANCE(576);
      END_STATE();
    case 54:
      if (lookahead == 'A') ADVANCE(95);
      END_STATE();
    case 55:
      if (lookahead == 'A') ADVANCE(78);
      END_STATE();
    case 56:
      if (lookahead == 'A') ADVANCE(67);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(351);
      END_STATE();
    case 57:
      if (lookahead == 'D') ADVANCE(566);
      END_STATE();
    case 58:
      if (lookahead == 'D') ADVANCE(566);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(604);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(621);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(621);
      if (lookahead == 'e') ADVANCE(611);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(362);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(775);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(89);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(384);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(82);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(86);
      END_STATE();
    case 67:
      if (lookahead == 'G') ADVANCE(774);
      END_STATE();
    case 68:
      if (lookahead == 'H') ADVANCE(534);
      END_STATE();
    case 69:
      if (lookahead == 'H') ADVANCE(66);
      END_STATE();
    case 70:
      if (lookahead == 'I') ADVANCE(535);
      END_STATE();
    case 71:
      if (lookahead == 'I') ADVANCE(72);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(352);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(349);
      END_STATE();
    case 72:
      if (lookahead == 'L') ADVANCE(63);
      END_STATE();
    case 73:
      if (lookahead == 'N') ADVANCE(88);
      END_STATE();
    case 74:
      if (lookahead == 'N') ADVANCE(57);
      if (lookahead == 'P') ADVANCE(70);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(177);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(324);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(295);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(613);
      END_STATE();
    case 75:
      if (lookahead == 'N') ADVANCE(57);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(613);
      END_STATE();
    case 76:
      if (lookahead == 'N') ADVANCE(87);
      END_STATE();
    case 77:
      if (lookahead == 'O') ADVANCE(81);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(308);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(296);
      END_STATE();
    case 78:
      if (lookahead == 'P') ADVANCE(68);
      END_STATE();
    case 79:
      if (lookahead == 'R') ADVANCE(567);
      END_STATE();
    case 80:
      if (lookahead == 'R') ADVANCE(567);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(435);
      END_STATE();
    case 81:
      if (lookahead == 'R') ADVANCE(533);
      END_STATE();
    case 82:
      if (lookahead == 'R') ADVANCE(97);
      END_STATE();
    case 83:
      if (lookahead == 'R') ADVANCE(76);
      END_STATE();
    case 84:
      if (lookahead == 'R') ADVANCE(61);
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 85:
      if (lookahead == 'R') ADVANCE(55);
      END_STATE();
    case 86:
      if (lookahead == 'R') ADVANCE(60);
      END_STATE();
    case 87:
      if (lookahead == 'S') ADVANCE(537);
      END_STATE();
    case 88:
      if (lookahead == 'T') ADVANCE(54);
      END_STATE();
    case 89:
      if (lookahead == 'T') ADVANCE(773);
      END_STATE();
    case 90:
      if (lookahead == 'T') ADVANCE(94);
      END_STATE();
    case 91:
      if (lookahead == 'T') ADVANCE(94);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(300);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(249);
      END_STATE();
    case 92:
      if (lookahead == 'U') ADVANCE(515);
      if (lookahead == 'u') ADVANCE(511);
      if (lookahead == 'x') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(634);
      if (lookahead != 0) ADVANCE(632);
      END_STATE();
    case 93:
      if (lookahead == 'U') ADVANCE(65);
      END_STATE();
    case 94:
      if (lookahead == 'U') ADVANCE(83);
      END_STATE();
    case 95:
      if (lookahead == 'X') ADVANCE(536);
      END_STATE();
    case 96:
      if (lookahead == 'Y') ADVANCE(73);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(146);
      END_STATE();
    case 97:
      if (lookahead == 'Y') ADVANCE(530);
      END_STATE();
    case 98:
      if (lookahead == '_') ADVANCE(115);
      END_STATE();
    case 99:
      if (lookahead == '_') ADVANCE(106);
      END_STATE();
    case 100:
      if (lookahead == '_') ADVANCE(107);
      END_STATE();
    case 101:
      if (lookahead == '_') ADVANCE(159);
      END_STATE();
    case 102:
      if (lookahead == '_') ADVANCE(166);
      END_STATE();
    case 103:
      if (lookahead == '_') ADVANCE(283);
      END_STATE();
    case 104:
      if (lookahead == '_') ADVANCE(237);
      END_STATE();
    case 105:
      if (lookahead == '_') ADVANCE(258);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 109:
      if (lookahead == 'b') ADVANCE(129);
      END_STATE();
    case 110:
      if (lookahead == 'd') ADVANCE(99);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(785);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 117:
      if (lookahead == 'm') ADVANCE(108);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(114);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(371);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(405);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 124:
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 129:
      if (lookahead == 'u') ADVANCE(126);
      END_STATE();
    case 130:
      if (lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 131:
      if (lookahead == 'y') ADVANCE(98);
      END_STATE();
    case 132:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(630);
      if (lookahead == '\n') SKIP(505)
      if (lookahead == '\r') ADVANCE(631);
      if (lookahead == '"') ADVANCE(625);
      if (lookahead == '#') ADVANCE(631);
      if (lookahead == '/') ADVANCE(627);
      if (lookahead == '\\') ADVANCE(92);
      if (lookahead != 0) ADVANCE(631);
      END_STATE();
    case 133:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(308);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(296);
      END_STATE();
    case 134:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(464);
      END_STATE();
    case 135:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 136:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(368);
      END_STATE();
    case 137:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(421);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(285);
      END_STATE();
    case 138:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(444);
      END_STATE();
    case 139:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(444);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(343);
      END_STATE();
    case 140:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(360);
      END_STATE();
    case 141:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(377);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 142:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(180);
      END_STATE();
    case 143:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 144:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(411);
      END_STATE();
    case 145:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(374);
      END_STATE();
    case 146:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(425);
      END_STATE();
    case 147:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(423);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(261);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(381);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(442);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(350);
      END_STATE();
    case 148:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(323);
      END_STATE();
    case 149:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(429);
      END_STATE();
    case 150:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 151:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(183);
      END_STATE();
    case 152:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 153:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 154:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 155:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 156:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(191);
      END_STATE();
    case 157:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(293);
      END_STATE();
    case 158:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(797);
      END_STATE();
    case 159:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(467);
      END_STATE();
    case 160:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(457);
      END_STATE();
    case 161:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(306);
      END_STATE();
    case 162:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(589);
      END_STATE();
    case 163:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(574);
      END_STATE();
    case 164:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(588);
      END_STATE();
    case 165:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(167);
      END_STATE();
    case 166:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(396);
      END_STATE();
    case 167:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(445);
      END_STATE();
    case 168:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(446);
      END_STATE();
    case 169:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(448);
      END_STATE();
    case 170:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(449);
      END_STATE();
    case 171:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(413);
      END_STATE();
    case 172:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(450);
      END_STATE();
    case 173:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(452);
      END_STATE();
    case 174:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(415);
      END_STATE();
    case 175:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(358);
      END_STATE();
    case 176:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(453);
      END_STATE();
    case 177:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(454);
      END_STATE();
    case 178:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(455);
      END_STATE();
    case 179:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(420);
      END_STATE();
    case 180:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(221);
      END_STATE();
    case 181:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(419);
      END_STATE();
    case 182:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(168);
      END_STATE();
    case 183:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(169);
      END_STATE();
    case 184:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(170);
      END_STATE();
    case 185:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(172);
      END_STATE();
    case 186:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(432);
      END_STATE();
    case 187:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(173);
      END_STATE();
    case 188:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(433);
      END_STATE();
    case 189:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(176);
      END_STATE();
    case 190:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(177);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(324);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(295);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(613);
      END_STATE();
    case 191:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(178);
      END_STATE();
    case 192:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(194);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(436);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(164);
      END_STATE();
    case 193:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(268);
      END_STATE();
    case 194:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(793);
      END_STATE();
    case 195:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(598);
      END_STATE();
    case 196:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(529);
      END_STATE();
    case 197:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(789);
      END_STATE();
    case 198:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(779);
      END_STATE();
    case 199:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(777);
      END_STATE();
    case 200:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(292);
      END_STATE();
    case 201:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(217);
      END_STATE();
    case 202:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(233);
      END_STATE();
    case 203:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(229);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(578);
      END_STATE();
    case 204:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(269);
      END_STATE();
    case 205:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(270);
      END_STATE();
    case 206:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(287);
      END_STATE();
    case 207:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(769);
      END_STATE();
    case 208:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(597);
      END_STATE();
    case 209:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(599);
      END_STATE();
    case 210:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(549);
      END_STATE();
    case 211:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(550);
      END_STATE();
    case 212:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(460);
      END_STATE();
    case 213:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(611);
      END_STATE();
    case 214:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(526);
      END_STATE();
    case 215:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(799);
      END_STATE();
    case 216:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(580);
      END_STATE();
    case 217:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 218:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(772);
      END_STATE();
    case 219:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(362);
      END_STATE();
    case 220:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(543);
      END_STATE();
    case 221:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(528);
      END_STATE();
    case 222:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(800);
      END_STATE();
    case 223:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(781);
      END_STATE();
    case 224:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(784);
      END_STATE();
    case 225:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 226:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(371);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(405);
      END_STATE();
    case 227:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(371);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(289);
      END_STATE();
    case 228:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 229:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(461);
      END_STATE();
    case 230:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 231:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 232:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 233:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 234:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 235:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 236:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(462);
      END_STATE();
    case 237:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 238:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 239:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 240:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 241:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 242:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(372);
      END_STATE();
    case 243:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(426);
      END_STATE();
    case 244:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(402);
      END_STATE();
    case 245:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 246:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 247:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 248:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(340);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(250);
      END_STATE();
    case 249:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(387);
      END_STATE();
    case 250:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 251:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(422);
      END_STATE();
    case 252:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 253:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 254:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(404);
      END_STATE();
    case 255:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 256:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 257:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 258:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 259:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 260:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 261:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(139);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(162);
      END_STATE();
    case 262:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(542);
      END_STATE();
    case 263:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(138);
      END_STATE();
    case 264:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(281);
      END_STATE();
    case 265:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(581);
      END_STATE();
    case 266:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(796);
      END_STATE();
    case 267:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(582);
      END_STATE();
    case 268:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(207);
      END_STATE();
    case 269:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(223);
      END_STATE();
    case 270:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(251);
      END_STATE();
    case 271:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(380);
      END_STATE();
    case 272:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(780);
      END_STATE();
    case 273:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(787);
      END_STATE();
    case 274:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(239);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 275:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(239);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(102);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(451);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(365);
      END_STATE();
    case 276:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(238);
      END_STATE();
    case 277:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(238);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(417);
      END_STATE();
    case 278:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(339);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 279:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(322);
      END_STATE();
    case 280:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 281:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(343);
      END_STATE();
    case 282:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 283:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 284:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(355);
      END_STATE();
    case 285:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(335);
      END_STATE();
    case 286:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(333);
      END_STATE();
    case 287:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(337);
      END_STATE();
    case 288:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(338);
      END_STATE();
    case 289:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(321);
      END_STATE();
    case 290:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(341);
      END_STATE();
    case 291:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(406);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(350);
      END_STATE();
    case 292:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(391);
      END_STATE();
    case 293:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(253);
      END_STATE();
    case 294:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(767);
      END_STATE();
    case 295:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(791);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(242);
      END_STATE();
    case 296:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(248);
      END_STATE();
    case 297:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(565);
      END_STATE();
    case 298:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(352);
      END_STATE();
    case 299:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(352);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(349);
      END_STATE();
    case 300:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 301:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(209);
      END_STATE();
    case 302:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(235);
      END_STATE();
    case 303:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(235);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(151);
      END_STATE();
    case 304:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(297);
      END_STATE();
    case 305:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(414);
      END_STATE();
    case 306:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(216);
      END_STATE();
    case 307:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(220);
      END_STATE();
    case 308:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(403);
      END_STATE();
    case 309:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(255);
      END_STATE();
    case 310:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(618);
      END_STATE();
    case 311:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(585);
      END_STATE();
    case 312:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(586);
      END_STATE();
    case 313:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(591);
      END_STATE();
    case 314:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(577);
      END_STATE();
    case 315:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(587);
      END_STATE();
    case 316:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(590);
      END_STATE();
    case 317:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(584);
      END_STATE();
    case 318:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(622);
      END_STATE();
    case 319:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(623);
      END_STATE();
    case 320:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(366);
      END_STATE();
    case 321:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(145);
      END_STATE();
    case 322:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(218);
      END_STATE();
    case 323:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(222);
      END_STATE();
    case 324:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(286);
      END_STATE();
    case 325:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(367);
      END_STATE();
    case 326:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(152);
      END_STATE();
    case 327:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(563);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(564);
      END_STATE();
    case 328:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(795);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(527);
      END_STATE();
    case 329:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 330:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(596);
      END_STATE();
    case 331:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(600);
      END_STATE();
    case 332:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(616);
      END_STATE();
    case 333:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(788);
      END_STATE();
    case 334:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 335:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(265);
      END_STATE();
    case 336:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(443);
      END_STATE();
    case 337:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(266);
      END_STATE();
    case 338:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(267);
      END_STATE();
    case 339:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(410);
      END_STATE();
    case 340:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 341:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(412);
      END_STATE();
    case 342:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(416);
      END_STATE();
    case 343:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(215);
      END_STATE();
    case 344:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(351);
      END_STATE();
    case 345:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(442);
      END_STATE();
    case 346:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(778);
      END_STATE();
    case 347:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(409);
      END_STATE();
    case 348:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(409);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(304);
      END_STATE();
    case 349:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(310);
      END_STATE();
    case 350:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(359);
      END_STATE();
    case 351:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(294);
      END_STATE();
    case 352:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 353:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(329);
      END_STATE();
    case 354:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 355:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(331);
      END_STATE();
    case 356:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 357:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(320);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(228);
      END_STATE();
    case 358:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(325);
      END_STATE();
    case 359:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(790);
      END_STATE();
    case 360:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(273);
      END_STATE();
    case 361:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(135);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(150);
      END_STATE();
    case 362:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(300);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(249);
      END_STATE();
    case 363:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(232);
      END_STATE();
    case 364:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(224);
      END_STATE();
    case 365:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(307);
      END_STATE();
    case 366:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(382);
      END_STATE();
    case 367:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(385);
      END_STATE();
    case 368:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(153);
      END_STATE();
    case 369:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(228);
      END_STATE();
    case 370:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(798);
      END_STATE();
    case 371:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(624);
      END_STATE();
    case 372:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(792);
      END_STATE();
    case 373:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(607);
      END_STATE();
    case 374:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(465);
      END_STATE();
    case 375:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 376:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(280);
      END_STATE();
    case 377:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(375);
      END_STATE();
    case 378:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(332);
      END_STATE();
    case 379:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 380:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 381:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(246);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(428);
      END_STATE();
    case 382:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 383:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 384:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(285);
      END_STATE();
    case 385:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(254);
      END_STATE();
    case 386:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(427);
      END_STATE();
    case 387:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(407);
      END_STATE();
    case 388:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(408);
      END_STATE();
    case 389:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(288);
      END_STATE();
    case 390:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(434);
      END_STATE();
    case 391:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(259);
      END_STATE();
    case 392:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(613);
      END_STATE();
    case 393:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(162);
      END_STATE();
    case 394:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(602);
      END_STATE();
    case 395:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(782);
      END_STATE();
    case 396:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(458);
      END_STATE();
    case 397:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(592);
      END_STATE();
    case 398:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(583);
      END_STATE();
    case 399:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(441);
      END_STATE();
    case 400:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(353);
      END_STATE();
    case 401:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(208);
      END_STATE();
    case 402:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(397);
      END_STATE();
    case 403:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(211);
      END_STATE();
    case 404:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(398);
      END_STATE();
    case 405:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(418);
      END_STATE();
    case 406:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(428);
      END_STATE();
    case 407:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(231);
      END_STATE();
    case 408:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(256);
      END_STATE();
    case 409:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(562);
      END_STATE();
    case 410:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(766);
      END_STATE();
    case 411:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(579);
      END_STATE();
    case 412:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(610);
      END_STATE();
    case 413:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(617);
      END_STATE();
    case 414:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(776);
      END_STATE();
    case 415:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(770);
      END_STATE();
    case 416:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(578);
      END_STATE();
    case 417:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(272);
      END_STATE();
    case 418:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(47);
      END_STATE();
    case 419:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(601);
      END_STATE();
    case 420:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(459);
      END_STATE();
    case 421:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(282);
      END_STATE();
    case 422:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(466);
      END_STATE();
    case 423:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(243);
      END_STATE();
    case 424:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(447);
      END_STATE();
    case 425:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(395);
      END_STATE();
    case 426:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(279);
      END_STATE();
    case 427:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(212);
      END_STATE();
    case 428:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(376);
      END_STATE();
    case 429:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(214);
      END_STATE();
    case 430:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(384);
      END_STATE();
    case 431:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(241);
      END_STATE();
    case 432:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(245);
      END_STATE();
    case 433:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(247);
      END_STATE();
    case 434:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(236);
      END_STATE();
    case 435:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(202);
      END_STATE();
    case 436:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(242);
      END_STATE();
    case 437:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(146);
      END_STATE();
    case 438:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(389);
      END_STATE();
    case 439:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(260);
      END_STATE();
    case 440:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(151);
      END_STATE();
    case 441:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(154);
      END_STATE();
    case 442:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(161);
      END_STATE();
    case 443:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(394);
      END_STATE();
    case 444:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(305);
      END_STATE();
    case 445:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(311);
      END_STATE();
    case 446:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(312);
      END_STATE();
    case 447:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(378);
      END_STATE();
    case 448:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(313);
      END_STATE();
    case 449:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(314);
      END_STATE();
    case 450:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(315);
      END_STATE();
    case 451:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(210);
      END_STATE();
    case 452:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(316);
      END_STATE();
    case 453:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(317);
      END_STATE();
    case 454:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(318);
      END_STATE();
    case 455:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(319);
      END_STATE();
    case 456:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(435);
      END_STATE();
    case 457:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(431);
      END_STATE();
    case 458:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(612);
      END_STATE();
    case 459:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(257);
      END_STATE();
    case 460:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(768);
      END_STATE();
    case 461:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(794);
      END_STATE();
    case 462:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(606);
      END_STATE();
    case 463:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(604);
      END_STATE();
    case 464:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(771);
      END_STATE();
    case 465:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(103);
      END_STATE();
    case 466:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(364);
      END_STATE();
    case 467:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(105);
      END_STATE();
    case 468:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(468)
      if (lookahead == '\r') SKIP(1)
      if (lookahead == '"') ADVANCE(625);
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == '%') ADVANCE(553);
      if (lookahead == '&') ADVANCE(560);
      if (lookahead == '(') ADVANCE(531);
      if (lookahead == ')') ADVANCE(532);
      if (lookahead == '*') ADVANCE(551);
      if (lookahead == '+') ADVANCE(554);
      if (lookahead == ',') ADVANCE(540);
      if (lookahead == '-') ADVANCE(556);
      if (lookahead == '.') ADVANCE(594);
      if (lookahead == '/') ADVANCE(552);
      if (lookahead == ';') ADVANCE(541);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '=') ADVANCE(538);
      if (lookahead == '>') ADVANCE(52);
      if (lookahead == 'B') ADVANCE(750);
      if (lookahead == 'D') ADVANCE(713);
      if (lookahead == 'E') ADVANCE(715);
      if (lookahead == 'F') ADVANCE(737);
      if (lookahead == 'H') ADVANCE(717);
      if (lookahead == 'I') ADVANCE(731);
      if (lookahead == 'J') ADVANCE(762);
      if (lookahead == 'L') ADVANCE(736);
      if (lookahead == 'M') ADVANCE(710);
      if (lookahead == 'O') ADVANCE(760);
      if (lookahead == 'P') ADVANCE(756);
      if (lookahead == 'R') ADVANCE(721);
      if (lookahead == 'S') ADVANCE(727);
      if (lookahead == 'T') ADVANCE(765);
      if (lookahead == 'U') ADVANCE(738);
      if (lookahead == 'V') ADVANCE(722);
      if (lookahead == '_') ADVANCE(603);
      if (lookahead == 'b') ADVANCE(681);
      if (lookahead == 'd') ADVANCE(642);
      if (lookahead == 'e') ADVANCE(645);
      if (lookahead == 'f') ADVANCE(668);
      if (lookahead == 'h') ADVANCE(647);
      if (lookahead == 'i') ADVANCE(662);
      if (lookahead == 'j') ADVANCE(693);
      if (lookahead == 'l') ADVANCE(667);
      if (lookahead == 'm') ADVANCE(639);
      if (lookahead == 'o') ADVANCE(691);
      if (lookahead == 'p') ADVANCE(687);
      if (lookahead == 'r') ADVANCE(652);
      if (lookahead == 's') ADVANCE(658);
      if (lookahead == 't') ADVANCE(696);
      if (lookahead == 'u') ADVANCE(669);
      if (lookahead == 'v') ADVANCE(653);
      if (lookahead == '|') ADVANCE(561);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(697);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(635);
      END_STATE();
    case 469:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(469)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == '"') ADVANCE(125);
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == ')') ADVANCE(532);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == ',') ADVANCE(540);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == ':') ADVANCE(620);
      if (lookahead == '>') ADVANCE(547);
      if (lookahead == 'B') ADVANCE(750);
      if (lookahead == 'D') ADVANCE(713);
      if (lookahead == 'E') ADVANCE(715);
      if (lookahead == 'F') ADVANCE(737);
      if (lookahead == 'H') ADVANCE(717);
      if (lookahead == 'I') ADVANCE(731);
      if (lookahead == 'J') ADVANCE(762);
      if (lookahead == 'L') ADVANCE(736);
      if (lookahead == 'M') ADVANCE(710);
      if (lookahead == 'O') ADVANCE(760);
      if (lookahead == 'P') ADVANCE(756);
      if (lookahead == 'R') ADVANCE(721);
      if (lookahead == 'S') ADVANCE(727);
      if (lookahead == 'U') ADVANCE(738);
      if (lookahead == 'V') ADVANCE(722);
      if (lookahead == '_') ADVANCE(603);
      if (lookahead == 'b') ADVANCE(681);
      if (lookahead == 'd') ADVANCE(642);
      if (lookahead == 'e') ADVANCE(645);
      if (lookahead == 'f') ADVANCE(668);
      if (lookahead == 'h') ADVANCE(647);
      if (lookahead == 'i') ADVANCE(662);
      if (lookahead == 'j') ADVANCE(693);
      if (lookahead == 'l') ADVANCE(667);
      if (lookahead == 'm') ADVANCE(639);
      if (lookahead == 'o') ADVANCE(691);
      if (lookahead == 'p') ADVANCE(687);
      if (lookahead == 'r') ADVANCE(652);
      if (lookahead == 's') ADVANCE(658);
      if (lookahead == 'u') ADVANCE(669);
      if (lookahead == 'v') ADVANCE(653);
      if (lookahead == '|') ADVANCE(561);
      if (lookahead == '}') ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(697);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 470:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(470)
      if (lookahead == '\r') SKIP(3)
      if (lookahead == '!') ADVANCE(49);
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == '%') ADVANCE(553);
      if (lookahead == '&') ADVANCE(560);
      if (lookahead == '\'') ADVANCE(609);
      if (lookahead == ')') ADVANCE(532);
      if (lookahead == '*') ADVANCE(551);
      if (lookahead == '+') ADVANCE(554);
      if (lookahead == ',') ADVANCE(540);
      if (lookahead == '-') ADVANCE(556);
      if (lookahead == '.') ADVANCE(594);
      if (lookahead == '/') ADVANCE(552);
      if (lookahead == ';') ADVANCE(541);
      if (lookahead == '<') ADVANCE(546);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(548);
      if (lookahead == 'A') ADVANCE(75);
      if (lookahead == 'G') ADVANCE(85);
      if (lookahead == 'O') ADVANCE(79);
      if (lookahead == '[') ADVANCE(614);
      if (lookahead == ']') ADVANCE(615);
      if (lookahead == 'a') ADVANCE(392);
      if (lookahead == '|') ADVANCE(561);
      if (lookahead == '}') ADVANCE(525);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(230);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(327);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(347);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(227);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(274);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(635);
      END_STATE();
    case 471:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(471)
      if (lookahead == '\r') SKIP(4)
      if (lookahead == '!') ADVANCE(49);
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == '%') ADVANCE(553);
      if (lookahead == '&') ADVANCE(560);
      if (lookahead == '\'') ADVANCE(609);
      if (lookahead == ')') ADVANCE(532);
      if (lookahead == '*') ADVANCE(551);
      if (lookahead == '+') ADVANCE(554);
      if (lookahead == ',') ADVANCE(540);
      if (lookahead == '-') ADVANCE(556);
      if (lookahead == '/') ADVANCE(552);
      if (lookahead == ';') ADVANCE(541);
      if (lookahead == '<') ADVANCE(546);
      if (lookahead == '=') ADVANCE(539);
      if (lookahead == '>') ADVANCE(548);
      if (lookahead == 'A') ADVANCE(75);
      if (lookahead == 'O') ADVANCE(79);
      if (lookahead == '[') ADVANCE(614);
      if (lookahead == ']') ADVANCE(615);
      if (lookahead == 'a') ADVANCE(392);
      if (lookahead == '|') ADVANCE(561);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(327);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(347);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(225);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(274);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(276);
      END_STATE();
    case 472:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(472)
      if (lookahead == '\r') SKIP(5)
      if (lookahead == '!') ADVANCE(49);
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == '%') ADVANCE(553);
      if (lookahead == '&') ADVANCE(560);
      if (lookahead == '\'') ADVANCE(609);
      if (lookahead == '*') ADVANCE(551);
      if (lookahead == '+') ADVANCE(554);
      if (lookahead == '-') ADVANCE(556);
      if (lookahead == '.') ADVANCE(594);
      if (lookahead == '/') ADVANCE(552);
      if (lookahead == ';') ADVANCE(541);
      if (lookahead == '<') ADVANCE(546);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(548);
      if (lookahead == 'A') ADVANCE(702);
      if (lookahead == 'I') ADVANCE(744);
      if (lookahead == 'N') ADVANCE(754);
      if (lookahead == 'O') ADVANCE(704);
      if (lookahead == 'P') ADVANCE(718);
      if (lookahead == '_') ADVANCE(603);
      if (lookahead == 'i') ADVANCE(675);
      if (lookahead == 'n') ADVANCE(685);
      if (lookahead == 'p') ADVANCE(649);
      if (lookahead == '|') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(635);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(697);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 473:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(473)
      if (lookahead == '\r') SKIP(6)
      if (lookahead == '!') ADVANCE(49);
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == '%') ADVANCE(553);
      if (lookahead == '&') ADVANCE(560);
      if (lookahead == '\'') ADVANCE(609);
      if (lookahead == '*') ADVANCE(551);
      if (lookahead == '+') ADVANCE(554);
      if (lookahead == '-') ADVANCE(556);
      if (lookahead == '.') ADVANCE(594);
      if (lookahead == '/') ADVANCE(552);
      if (lookahead == ';') ADVANCE(541);
      if (lookahead == '<') ADVANCE(546);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(548);
      if (lookahead == 'A') ADVANCE(702);
      if (lookahead == 'I') ADVANCE(744);
      if (lookahead == 'N') ADVANCE(754);
      if (lookahead == 'O') ADVANCE(704);
      if (lookahead == 'T') ADVANCE(753);
      if (lookahead == '_') ADVANCE(603);
      if (lookahead == 'i') ADVANCE(675);
      if (lookahead == 'n') ADVANCE(685);
      if (lookahead == 't') ADVANCE(684);
      if (lookahead == '|') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(635);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(697);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 474:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(474)
      if (lookahead == '\r') SKIP(7)
      if (lookahead == '!') ADVANCE(49);
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == '%') ADVANCE(553);
      if (lookahead == '&') ADVANCE(560);
      if (lookahead == '\'') ADVANCE(609);
      if (lookahead == '*') ADVANCE(551);
      if (lookahead == '+') ADVANCE(554);
      if (lookahead == '-') ADVANCE(556);
      if (lookahead == '.') ADVANCE(594);
      if (lookahead == '/') ADVANCE(552);
      if (lookahead == '<') ADVANCE(546);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(548);
      if (lookahead == 'A') ADVANCE(702);
      if (lookahead == 'I') ADVANCE(744);
      if (lookahead == 'N') ADVANCE(754);
      if (lookahead == 'O') ADVANCE(704);
      if (lookahead == 'T') ADVANCE(732);
      if (lookahead == '_') ADVANCE(603);
      if (lookahead == 'i') ADVANCE(675);
      if (lookahead == 'n') ADVANCE(685);
      if (lookahead == 't') ADVANCE(663);
      if (lookahead == '|') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(635);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(697);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 475:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(475)
      if (lookahead == '\r') SKIP(8)
      if (lookahead == '!') ADVANCE(49);
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == '%') ADVANCE(553);
      if (lookahead == '&') ADVANCE(560);
      if (lookahead == '\'') ADVANCE(609);
      if (lookahead == ')') ADVANCE(532);
      if (lookahead == '*') ADVANCE(551);
      if (lookahead == '+') ADVANCE(554);
      if (lookahead == '-') ADVANCE(556);
      if (lookahead == '.') ADVANCE(594);
      if (lookahead == '/') ADVANCE(552);
      if (lookahead == '<') ADVANCE(546);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(548);
      if (lookahead == 'A') ADVANCE(702);
      if (lookahead == 'I') ADVANCE(744);
      if (lookahead == 'N') ADVANCE(754);
      if (lookahead == 'O') ADVANCE(704);
      if (lookahead == '_') ADVANCE(603);
      if (lookahead == 'i') ADVANCE(675);
      if (lookahead == 'n') ADVANCE(685);
      if (lookahead == '|') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(635);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(697);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 476:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(476)
      if (lookahead == '\r') SKIP(9)
      if (lookahead == '"') ADVANCE(625);
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == '$') ADVANCE(608);
      if (lookahead == '%') ADVANCE(553);
      if (lookahead == '&') ADVANCE(560);
      if (lookahead == '\'') ADVANCE(609);
      if (lookahead == '(') ADVANCE(531);
      if (lookahead == ')') ADVANCE(532);
      if (lookahead == '*') ADVANCE(551);
      if (lookahead == '+') ADVANCE(555);
      if (lookahead == ',') ADVANCE(540);
      if (lookahead == '-') ADVANCE(556);
      if (lookahead == '.') ADVANCE(594);
      if (lookahead == '/') ADVANCE(552);
      if (lookahead == ':') ADVANCE(620);
      if (lookahead == ';') ADVANCE(541);
      if (lookahead == '<') ADVANCE(545);
      if (lookahead == '=') ADVANCE(538);
      if (lookahead == '>') ADVANCE(52);
      if (lookahead == '@') ADVANCE(575);
      if (lookahead == ']') ADVANCE(615);
      if (lookahead == '_') ADVANCE(603);
      if (lookahead == '{') ADVANCE(524);
      if (lookahead == '|') ADVANCE(561);
      if (lookahead == '}') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(635);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(697);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 477:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(477)
      if (lookahead == '\r') SKIP(10)
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == ')') ADVANCE(532);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '=') ADVANCE(538);
      if (lookahead == 'B') ADVANCE(750);
      if (lookahead == 'D') ADVANCE(713);
      if (lookahead == 'E') ADVANCE(715);
      if (lookahead == 'F') ADVANCE(742);
      if (lookahead == 'H') ADVANCE(717);
      if (lookahead == 'I') ADVANCE(748);
      if (lookahead == 'J') ADVANCE(762);
      if (lookahead == 'L') ADVANCE(736);
      if (lookahead == 'M') ADVANCE(710);
      if (lookahead == 'O') ADVANCE(760);
      if (lookahead == 'S') ADVANCE(728);
      if (lookahead == 'U') ADVANCE(738);
      if (lookahead == 'V') ADVANCE(722);
      if (lookahead == '_') ADVANCE(603);
      if (lookahead == 'b') ADVANCE(681);
      if (lookahead == 'd') ADVANCE(642);
      if (lookahead == 'e') ADVANCE(645);
      if (lookahead == 'f') ADVANCE(673);
      if (lookahead == 'h') ADVANCE(647);
      if (lookahead == 'i') ADVANCE(679);
      if (lookahead == 'j') ADVANCE(693);
      if (lookahead == 'l') ADVANCE(667);
      if (lookahead == 'm') ADVANCE(639);
      if (lookahead == 'o') ADVANCE(691);
      if (lookahead == 's') ADVANCE(659);
      if (lookahead == 'u') ADVANCE(669);
      if (lookahead == 'v') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(635);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(697);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 478:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(478)
      if (lookahead == '\r') SKIP(11)
      if (lookahead == '"') ADVANCE(625);
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == '(') ADVANCE(531);
      if (lookahead == '-') ADVANCE(556);
      if (lookahead == '.') ADVANCE(594);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == 'F') ADVANCE(708);
      if (lookahead == 'T') ADVANCE(758);
      if (lookahead == '_') ADVANCE(603);
      if (lookahead == 'f') ADVANCE(637);
      if (lookahead == 't') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(635);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(697);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 479:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(479)
      if (lookahead == '\r') SKIP(12)
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == '%') ADVANCE(553);
      if (lookahead == '&') ADVANCE(560);
      if (lookahead == '\'') ADVANCE(609);
      if (lookahead == '*') ADVANCE(551);
      if (lookahead == '+') ADVANCE(554);
      if (lookahead == ',') ADVANCE(540);
      if (lookahead == '-') ADVANCE(556);
      if (lookahead == '.') ADVANCE(594);
      if (lookahead == '/') ADVANCE(552);
      if (lookahead == ';') ADVANCE(541);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '>') ADVANCE(52);
      if (lookahead == 'A') ADVANCE(761);
      if (lookahead == 'T') ADVANCE(753);
      if (lookahead == 'W') ADVANCE(734);
      if (lookahead == '[') ADVANCE(614);
      if (lookahead == '_') ADVANCE(603);
      if (lookahead == 'a') ADVANCE(692);
      if (lookahead == 't') ADVANCE(684);
      if (lookahead == 'w') ADVANCE(665);
      if (lookahead == '|') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(635);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(697);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 480:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(480)
      if (lookahead == '\r') SKIP(13)
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == '%') ADVANCE(553);
      if (lookahead == '&') ADVANCE(560);
      if (lookahead == '\'') ADVANCE(609);
      if (lookahead == '*') ADVANCE(551);
      if (lookahead == '+') ADVANCE(554);
      if (lookahead == '-') ADVANCE(556);
      if (lookahead == '.') ADVANCE(594);
      if (lookahead == '/') ADVANCE(552);
      if (lookahead == ';') ADVANCE(541);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '>') ADVANCE(52);
      if (lookahead == 'A') ADVANCE(702);
      if (lookahead == 'O') ADVANCE(704);
      if (lookahead == 'T') ADVANCE(753);
      if (lookahead == '_') ADVANCE(603);
      if (lookahead == 't') ADVANCE(684);
      if (lookahead == '|') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(635);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(697);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 481:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(481)
      if (lookahead == '\r') SKIP(14)
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == '%') ADVANCE(553);
      if (lookahead == '&') ADVANCE(560);
      if (lookahead == '\'') ADVANCE(609);
      if (lookahead == '*') ADVANCE(551);
      if (lookahead == '+') ADVANCE(554);
      if (lookahead == '-') ADVANCE(556);
      if (lookahead == '.') ADVANCE(594);
      if (lookahead == '/') ADVANCE(552);
      if (lookahead == ';') ADVANCE(541);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '>') ADVANCE(52);
      if (lookahead == 'A') ADVANCE(702);
      if (lookahead == 'O') ADVANCE(704);
      if (lookahead == 'P') ADVANCE(718);
      if (lookahead == '_') ADVANCE(603);
      if (lookahead == 'p') ADVANCE(649);
      if (lookahead == '|') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(635);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(697);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 482:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(482)
      if (lookahead == '\r') SKIP(15)
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(741);
      if (lookahead == 'I') ADVANCE(729);
      if (lookahead == 'P') ADVANCE(756);
      if (lookahead == 'R') ADVANCE(721);
      if (lookahead == '_') ADVANCE(603);
      if (lookahead == 'e') ADVANCE(672);
      if (lookahead == 'i') ADVANCE(660);
      if (lookahead == 'p') ADVANCE(687);
      if (lookahead == 'r') ADVANCE(652);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(697);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 483:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(483)
      if (lookahead == '\r') SKIP(16)
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == '%') ADVANCE(553);
      if (lookahead == '&') ADVANCE(560);
      if (lookahead == '\'') ADVANCE(609);
      if (lookahead == '*') ADVANCE(551);
      if (lookahead == '+') ADVANCE(554);
      if (lookahead == ',') ADVANCE(540);
      if (lookahead == '-') ADVANCE(556);
      if (lookahead == '.') ADVANCE(594);
      if (lookahead == '/') ADVANCE(552);
      if (lookahead == ';') ADVANCE(541);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '>') ADVANCE(52);
      if (lookahead == 'P') ADVANCE(718);
      if (lookahead == '_') ADVANCE(603);
      if (lookahead == 'p') ADVANCE(649);
      if (lookahead == '|') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(635);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(697);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 484:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(484)
      if (lookahead == '\r') SKIP(17)
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == '%') ADVANCE(553);
      if (lookahead == '&') ADVANCE(560);
      if (lookahead == '\'') ADVANCE(609);
      if (lookahead == ')') ADVANCE(532);
      if (lookahead == '*') ADVANCE(551);
      if (lookahead == '+') ADVANCE(554);
      if (lookahead == '-') ADVANCE(556);
      if (lookahead == '.') ADVANCE(594);
      if (lookahead == '/') ADVANCE(552);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '>') ADVANCE(52);
      if (lookahead == 'A') ADVANCE(702);
      if (lookahead == 'O') ADVANCE(704);
      if (lookahead == '_') ADVANCE(603);
      if (lookahead == '|') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(635);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(697);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 485:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(485)
      if (lookahead == '\r') SKIP(18)
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == '%') ADVANCE(553);
      if (lookahead == '&') ADVANCE(560);
      if (lookahead == '\'') ADVANCE(609);
      if (lookahead == '*') ADVANCE(551);
      if (lookahead == '+') ADVANCE(554);
      if (lookahead == ',') ADVANCE(540);
      if (lookahead == '-') ADVANCE(556);
      if (lookahead == '.') ADVANCE(594);
      if (lookahead == '/') ADVANCE(552);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '>') ADVANCE(52);
      if (lookahead == 'A') ADVANCE(761);
      if (lookahead == ']') ADVANCE(615);
      if (lookahead == '_') ADVANCE(603);
      if (lookahead == 'a') ADVANCE(692);
      if (lookahead == '|') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(635);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(697);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 486:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(486)
      if (lookahead == '\r') SKIP(19)
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == '%') ADVANCE(553);
      if (lookahead == '&') ADVANCE(560);
      if (lookahead == '\'') ADVANCE(609);
      if (lookahead == '*') ADVANCE(551);
      if (lookahead == '+') ADVANCE(554);
      if (lookahead == '-') ADVANCE(556);
      if (lookahead == '.') ADVANCE(594);
      if (lookahead == '/') ADVANCE(552);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '>') ADVANCE(52);
      if (lookahead == 'A') ADVANCE(702);
      if (lookahead == 'O') ADVANCE(704);
      if (lookahead == 'T') ADVANCE(732);
      if (lookahead == '_') ADVANCE(603);
      if (lookahead == 't') ADVANCE(663);
      if (lookahead == '|') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(635);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(697);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 487:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(487)
      if (lookahead == '\r') SKIP(20)
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == 'B') ADVANCE(750);
      if (lookahead == 'D') ADVANCE(713);
      if (lookahead == 'E') ADVANCE(715);
      if (lookahead == 'F') ADVANCE(742);
      if (lookahead == 'I') ADVANCE(748);
      if (lookahead == 'J') ADVANCE(762);
      if (lookahead == 'S') ADVANCE(764);
      if (lookahead == 'U') ADVANCE(738);
      if (lookahead == 'V') ADVANCE(722);
      if (lookahead == '_') ADVANCE(603);
      if (lookahead == 'b') ADVANCE(681);
      if (lookahead == 'd') ADVANCE(642);
      if (lookahead == 'e') ADVANCE(645);
      if (lookahead == 'f') ADVANCE(673);
      if (lookahead == 'i') ADVANCE(679);
      if (lookahead == 'j') ADVANCE(693);
      if (lookahead == 's') ADVANCE(695);
      if (lookahead == 'u') ADVANCE(669);
      if (lookahead == 'v') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(635);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(697);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 488:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(488)
      if (lookahead == '\r') SKIP(21)
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == 'I') ADVANCE(729);
      if (lookahead == 'P') ADVANCE(756);
      if (lookahead == 'R') ADVANCE(721);
      if (lookahead == '_') ADVANCE(603);
      if (lookahead == 'i') ADVANCE(660);
      if (lookahead == 'p') ADVANCE(687);
      if (lookahead == 'r') ADVANCE(652);
      if (lookahead == '}') ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(697);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 489:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(489)
      if (lookahead == '\r') SKIP(22)
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == '(') ADVANCE(531);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == ':') ADVANCE(620);
      if (lookahead == '<') ADVANCE(544);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == 'A') ADVANCE(743);
      if (lookahead == '_') ADVANCE(603);
      if (lookahead == 'a') ADVANCE(674);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(697);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 490:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(490)
      if (lookahead == '\r') SKIP(23)
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == 'A') ADVANCE(743);
      if (lookahead == 'S') ADVANCE(725);
      if (lookahead == '_') ADVANCE(603);
      if (lookahead == 'a') ADVANCE(674);
      if (lookahead == 's') ADVANCE(656);
      if (lookahead == '}') ADVANCE(525);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(697);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 491:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(491)
      if (lookahead == '\r') SKIP(24)
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == ',') ADVANCE(540);
      if (lookahead == '-') ADVANCE(556);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == ':') ADVANCE(620);
      if (lookahead == ';') ADVANCE(541);
      if (lookahead == 'P') ADVANCE(718);
      if (lookahead == 'W') ADVANCE(700);
      if (lookahead == '_') ADVANCE(603);
      if (lookahead == 'p') ADVANCE(649);
      if (lookahead == '|') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(635);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(697);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 492:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(492)
      if (lookahead == '\r') SKIP(25)
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == '(') ADVANCE(531);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == 'S') ADVANCE(726);
      if (lookahead == '_') ADVANCE(603);
      if (lookahead == 's') ADVANCE(657);
      if (lookahead == '{') ADVANCE(524);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(697);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 493:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(493)
      if (lookahead == '\r') SKIP(26)
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == ')') ADVANCE(532);
      if (lookahead == ',') ADVANCE(540);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == ':') ADVANCE(620);
      if (lookahead == '>') ADVANCE(547);
      if (lookahead == '_') ADVANCE(603);
      if (lookahead == '|') ADVANCE(561);
      if (lookahead == '}') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(635);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(697);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 494:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(494)
      if (lookahead == '\r') SKIP(27)
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == '(') ADVANCE(531);
      if (lookahead == ')') ADVANCE(532);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == ';') ADVANCE(541);
      if (lookahead == '=') ADVANCE(538);
      if (lookahead == 'I') ADVANCE(749);
      if (lookahead == 'M') ADVANCE(735);
      if (lookahead == 'U') ADVANCE(747);
      if (lookahead == '_') ADVANCE(603);
      if (lookahead == 'i') ADVANCE(680);
      if (lookahead == 'm') ADVANCE(666);
      if (lookahead == 'u') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(635);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(697);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 495:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(495)
      if (lookahead == '\r') SKIP(28)
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == ',') ADVANCE(540);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == ';') ADVANCE(541);
      if (lookahead == 'T') ADVANCE(753);
      if (lookahead == 'W') ADVANCE(734);
      if (lookahead == '_') ADVANCE(603);
      if (lookahead == 't') ADVANCE(684);
      if (lookahead == 'w') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(635);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(697);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 496:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(496)
      if (lookahead == '\r') SKIP(29)
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == 'A') ADVANCE(703);
      if (lookahead == 'R') ADVANCE(698);
      if (lookahead == 'S') ADVANCE(706);
      if (lookahead == '_') ADVANCE(603);
      if (lookahead == '{') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(635);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(697);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 497:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(497)
      if (lookahead == '\r') SKIP(30)
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == ')') ADVANCE(532);
      if (lookahead == ',') ADVANCE(540);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == 'A') ADVANCE(763);
      if (lookahead == 'D') ADVANCE(724);
      if (lookahead == '_') ADVANCE(603);
      if (lookahead == 'a') ADVANCE(694);
      if (lookahead == 'd') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(635);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(697);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 498:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(498)
      if (lookahead == '\r') SKIP(31)
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '=') ADVANCE(538);
      if (lookahead == 'D') ADVANCE(720);
      if (lookahead == '_') ADVANCE(603);
      if (lookahead == 'd') ADVANCE(651);
      if (lookahead == '}') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(635);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(697);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 499:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(499)
      if (lookahead == '\r') SKIP(32)
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == ')') ADVANCE(532);
      if (lookahead == ',') ADVANCE(540);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == 'D') ADVANCE(723);
      if (lookahead == '_') ADVANCE(603);
      if (lookahead == 'd') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(635);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(697);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 500:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(500)
      if (lookahead == '\r') SKIP(33)
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == 'A') ADVANCE(714);
      if (lookahead == 'D') ADVANCE(757);
      if (lookahead == '_') ADVANCE(603);
      if (lookahead == 'a') ADVANCE(643);
      if (lookahead == 'd') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(635);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(697);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 501:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(501)
      if (lookahead == '\r') SKIP(34)
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == 'T') ADVANCE(752);
      if (lookahead == '_') ADVANCE(603);
      if (lookahead == 't') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(635);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(697);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 502:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(502)
      if (lookahead == '\r') SKIP(35)
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == 'O') ADVANCE(745);
      if (lookahead == '_') ADVANCE(603);
      if (lookahead == 'o') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(635);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(697);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 503:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(503)
      if (lookahead == '\r') SKIP(36)
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == 'F') ADVANCE(751);
      if (lookahead == '_') ADVANCE(603);
      if (lookahead == 'f') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(635);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(697);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 504:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(504)
      if (lookahead == '\r') SKIP(37)
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(345);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(298);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(342);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(438);
      END_STATE();
    case 505:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(505)
      if (lookahead == '\r') SKIP(38)
      if (lookahead == '"') ADVANCE(625);
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(92);
      END_STATE();
    case 506:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(506)
      if (lookahead == '\r') SKIP(39)
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(746);
      if (lookahead == 'I') ADVANCE(729);
      if (lookahead == 'P') ADVANCE(756);
      if (lookahead == 'R') ADVANCE(721);
      if (lookahead == '_') ADVANCE(603);
      if (lookahead == 'e') ADVANCE(677);
      if (lookahead == 'i') ADVANCE(660);
      if (lookahead == 'p') ADVANCE(687);
      if (lookahead == 'r') ADVANCE(652);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(697);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 507:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(507)
      if (lookahead == '\r') SKIP(40)
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == 'F') ADVANCE(759);
      if (lookahead == '_') ADVANCE(603);
      if (lookahead == 'f') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(635);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(697);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 508:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(632);
      END_STATE();
    case 509:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(508);
      END_STATE();
    case 510:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(509);
      END_STATE();
    case 511:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(510);
      END_STATE();
    case 512:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(511);
      END_STATE();
    case 513:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(512);
      END_STATE();
    case 514:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(513);
      END_STATE();
    case 515:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(514);
      END_STATE();
    case 516:
      if (eof) ADVANCE(523);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 517:
      if (eof) ADVANCE(523);
      if (lookahead == '\n') SKIP(520)
      END_STATE();
    case 518:
      if (eof) ADVANCE(523);
      if (lookahead == '\n') SKIP(521)
      END_STATE();
    case 519:
      if (eof) ADVANCE(523);
      if (lookahead == '\n') SKIP(522)
      END_STATE();
    case 520:
      if (eof) ADVANCE(523);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(520)
      if (lookahead == '\r') SKIP(517)
      if (lookahead == '!') ADVANCE(49);
      if (lookahead == '"') ADVANCE(625);
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == '%') ADVANCE(553);
      if (lookahead == '&') ADVANCE(560);
      if (lookahead == '\'') ADVANCE(609);
      if (lookahead == ')') ADVANCE(532);
      if (lookahead == '*') ADVANCE(551);
      if (lookahead == '+') ADVANCE(555);
      if (lookahead == ',') ADVANCE(540);
      if (lookahead == '-') ADVANCE(556);
      if (lookahead == '.') ADVANCE(594);
      if (lookahead == '/') ADVANCE(552);
      if (lookahead == ':') ADVANCE(620);
      if (lookahead == ';') ADVANCE(541);
      if (lookahead == '<') ADVANCE(546);
      if (lookahead == '=') ADVANCE(539);
      if (lookahead == '>') ADVANCE(548);
      if (lookahead == 'A') ADVANCE(74);
      if (lookahead == 'F') ADVANCE(77);
      if (lookahead == 'O') ADVANCE(80);
      if (lookahead == 'P') ADVANCE(226);
      if (lookahead == 'Q') ADVANCE(93);
      if (lookahead == 'R') ADVANCE(62);
      if (lookahead == 'S') ADVANCE(96);
      if (lookahead == '[') ADVANCE(614);
      if (lookahead == ']') ADVANCE(615);
      if (lookahead == 'a') ADVANCE(190);
      if (lookahead == 'f') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(456);
      if (lookahead == 'p') ADVANCE(121);
      if (lookahead == 'r') ADVANCE(219);
      if (lookahead == 's') ADVANCE(437);
      if (lookahead == '{') ADVANCE(524);
      if (lookahead == '|') ADVANCE(561);
      if (lookahead == '}') ADVANCE(525);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(369);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(291);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(383);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(327);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(354);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(348);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(275);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(635);
      END_STATE();
    case 521:
      if (eof) ADVANCE(523);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(521)
      if (lookahead == '\r') SKIP(518)
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == '(') ADVANCE(531);
      if (lookahead == ')') ADVANCE(532);
      if (lookahead == ',') ADVANCE(540);
      if (lookahead == '-') ADVANCE(556);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == ':') ADVANCE(620);
      if (lookahead == ';') ADVANCE(541);
      if (lookahead == '<') ADVANCE(544);
      if (lookahead == '=') ADVANCE(538);
      if (lookahead == '>') ADVANCE(547);
      if (lookahead == '@') ADVANCE(575);
      if (lookahead == 'B') ADVANCE(56);
      if (lookahead == 'F') ADVANCE(71);
      if (lookahead == 'Q') ADVANCE(93);
      if (lookahead == 'S') ADVANCE(64);
      if (lookahead == 'W') ADVANCE(69);
      if (lookahead == 'b') ADVANCE(344);
      if (lookahead == 'f') ADVANCE(299);
      if (lookahead == 's') ADVANCE(430);
      if (lookahead == '|') ADVANCE(561);
      if (lookahead == '}') ADVANCE(525);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(192);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(357);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(147);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(193);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(383);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(334);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(400);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(356);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(328);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(225);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(346);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(278);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(234);
      END_STATE();
    case 522:
      if (eof) ADVANCE(523);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(522)
      if (lookahead == '\r') SKIP(519)
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == ';') ADVANCE(541);
      if (lookahead == 'A') ADVANCE(740);
      if (lookahead == 'C') ADVANCE(755);
      if (lookahead == 'D') ADVANCE(757);
      if (lookahead == '_') ADVANCE(603);
      if (lookahead == 'a') ADVANCE(671);
      if (lookahead == 'c') ADVANCE(686);
      if (lookahead == 'd') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(635);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(697);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_createSignature_token1);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_createSignature_token2);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_createSignature_token3);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_createSignature_token4);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_QUERY);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_FOR);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_GRAPH);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_API);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_SYNTAX);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_RETURNS);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(570);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_typedef_token1);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_typedef_token2);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(558);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(558);
      if (lookahead == '=') ADVANCE(568);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(569);
      if (lookahead == '>') ADVANCE(559);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_constant_token2);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(45);
      if (lookahead == '/') ADVANCE(573);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(593);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(619);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_condition_token2);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_condition_token3);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_condition_token4);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(573);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_accumDeclStmt_token1);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(576);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_accumType_token1);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_accumType_token2);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_accumType_token3);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_accumType_token4);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_accumType_token5);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_accumType_token5);
      if (lookahead == ' ') ADVANCE(175);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_accumType_token6);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_accumType_token7);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_accumType_token8);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_accumType_token9);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_accumType_token10);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_accumType_token11);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_accumType_token12);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_accumType_token13);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_accumType_token14);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_elementType_token1);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_queryBodyIfStmt_token1);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_queryBodyIfStmt_token2);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_queryBodyIfStmt_token3);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_queryBodyIfStmt_token4);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_fileDeclStmt_token1);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_simpleSet_token1);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_simpleSet_token2);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_simpleSet_token3);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_seed_token1);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_DOT_STAR);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_seed_token2);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_selectVertParams_token1);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_printStmt_token1);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_printStmt_token2);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_printStmt_token3);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_printExpr_token1);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_returnStmt_token1);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_gsqlSelectClause_token1);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_fromClause_token1);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_WHERE);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_accumClause_token1);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_postAccumClause_token1);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_perClauseV2_token1);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_stringLiteral_token1);
      if (lookahead == '*') ADVANCE(629);
      if (lookahead == '/') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(631);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_stringLiteral_token1);
      if (lookahead == '*') ADVANCE(628);
      if (lookahead == '/') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(629);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_stringLiteral_token1);
      if (lookahead == '*') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(629);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_stringLiteral_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(630);
      if (lookahead == '\r') ADVANCE(631);
      if (lookahead == '#') ADVANCE(631);
      if (lookahead == '/') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(631);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_stringLiteral_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(631);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(632);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(633);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_name_token1);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(308);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(308);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(301);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(352);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(370);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(349);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(361);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(361);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(336);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(423);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(261);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(442);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(350);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(423);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(442);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(194);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(194);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(436);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(463);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(613);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(268);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(268);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(401);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(303);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(137);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(326);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(371);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(290);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(424);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(309);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(440);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(137);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(326);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(440);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(384);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(326);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(595);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(595);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(563);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(564);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(595);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(416);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(239);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(239);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(778);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(451);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(363);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(238);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(336);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(399);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(301);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(352);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(339);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(339);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(284);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(436);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(401);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(352);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(463);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(563);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(564);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(795);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(284);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(416);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(439);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(351);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(370);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(778);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(409);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(228);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(290);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(350);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(451);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(349);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(613);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(353);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(164);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(384);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(363);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_name_token2);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E') ADVANCE(90);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'H') ADVANCE(59);
      if (lookahead == 'h') ADVANCE(238);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'H') ADVANCE(66);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'N') ADVANCE(58);
      if (lookahead == 'P') ADVANCE(70);
      if (lookahead == 'n') ADVANCE(463);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(194);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(436);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(613);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'N') ADVANCE(57);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'P') ADVANCE(70);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'R') ADVANCE(567);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'R') ADVANCE(567);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(795);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'Y') ADVANCE(73);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'Y') ADVANCE(73);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(303);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(137);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(326);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(308);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(308);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(301);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(352);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(370);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(349);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(361);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(361);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(336);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(423);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(261);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(442);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(350);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(423);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(442);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(194);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(268);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(268);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(401);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(371);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(290);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(424);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(309);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(440);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(137);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(326);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(440);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(384);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(326);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(595);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(595);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(563);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(564);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(595);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(416);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(239);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(239);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(778);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(451);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(363);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(238);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(336);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(399);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(301);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(352);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(339);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(339);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(284);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(436);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(401);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(352);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(463);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(563);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(564);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(795);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(284);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(416);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(439);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(351);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(370);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(778);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(409);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(228);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(290);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(350);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(451);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(349);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(613);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(353);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(164);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(384);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(363);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_baseType_token1);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_baseType_token2);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_baseType_token3);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_baseType_token4);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_baseType_token5);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_baseType_token6);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_baseType_token7);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_SET);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_BAG);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_FILE);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_CREATE_VERTEX_token1);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_CREATE_UNDIRECTED_EDGE_token1);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_CREATE_UNDIRECTED_EDGE_token2);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_CREATE_DIRECTED_EDGE_token1);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_CREATE_DIRECTED_EDGE_token2);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_CREATE_DIRECTED_EDGE_token3);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_WITH_token1);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_DQUOTEnone_DQUOTE);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_WITH_token2);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_primary_id_as_attribute);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_DQUOTEtrue_DQUOTE);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_CREATE_GRAPH_token1);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_CREATE_GRAPH_token2);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_primary_id_name_type_token1);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_DROP_token1);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_DROP_token2);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_ADD_INDEX_token1);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_ADD_INDEX_token2);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_ADD_INDEX_token3);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_ADD_INDEX_token4);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_create_loading_job_token1);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_create_loading_job_token2);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_create_loading_job_token3);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_define_statement_token1);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_define_statement_token2);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 468},
  [3] = {.lex_state = 469},
  [4] = {.lex_state = 520},
  [5] = {.lex_state = 520},
  [6] = {.lex_state = 470},
  [7] = {.lex_state = 469},
  [8] = {.lex_state = 469},
  [9] = {.lex_state = 470},
  [10] = {.lex_state = 470},
  [11] = {.lex_state = 471},
  [12] = {.lex_state = 470},
  [13] = {.lex_state = 470},
  [14] = {.lex_state = 470},
  [15] = {.lex_state = 470},
  [16] = {.lex_state = 470},
  [17] = {.lex_state = 470},
  [18] = {.lex_state = 470},
  [19] = {.lex_state = 470},
  [20] = {.lex_state = 470},
  [21] = {.lex_state = 470},
  [22] = {.lex_state = 470},
  [23] = {.lex_state = 470},
  [24] = {.lex_state = 470},
  [25] = {.lex_state = 470},
  [26] = {.lex_state = 470},
  [27] = {.lex_state = 472},
  [28] = {.lex_state = 468},
  [29] = {.lex_state = 468},
  [30] = {.lex_state = 473},
  [31] = {.lex_state = 472},
  [32] = {.lex_state = 472},
  [33] = {.lex_state = 473},
  [34] = {.lex_state = 473},
  [35] = {.lex_state = 474},
  [36] = {.lex_state = 475},
  [37] = {.lex_state = 474},
  [38] = {.lex_state = 475},
  [39] = {.lex_state = 475},
  [40] = {.lex_state = 474},
  [41] = {.lex_state = 468},
  [42] = {.lex_state = 476},
  [43] = {.lex_state = 476},
  [44] = {.lex_state = 476},
  [45] = {.lex_state = 477},
  [46] = {.lex_state = 477},
  [47] = {.lex_state = 477},
  [48] = {.lex_state = 477},
  [49] = {.lex_state = 469},
  [50] = {.lex_state = 477},
  [51] = {.lex_state = 477},
  [52] = {.lex_state = 477},
  [53] = {.lex_state = 477},
  [54] = {.lex_state = 478},
  [55] = {.lex_state = 470},
  [56] = {.lex_state = 478},
  [57] = {.lex_state = 470},
  [58] = {.lex_state = 477},
  [59] = {.lex_state = 470},
  [60] = {.lex_state = 470},
  [61] = {.lex_state = 470},
  [62] = {.lex_state = 470},
  [63] = {.lex_state = 477},
  [64] = {.lex_state = 470},
  [65] = {.lex_state = 477},
  [66] = {.lex_state = 477},
  [67] = {.lex_state = 470},
  [68] = {.lex_state = 470},
  [69] = {.lex_state = 470},
  [70] = {.lex_state = 478},
  [71] = {.lex_state = 470},
  [72] = {.lex_state = 478},
  [73] = {.lex_state = 479},
  [74] = {.lex_state = 478},
  [75] = {.lex_state = 479},
  [76] = {.lex_state = 478},
  [77] = {.lex_state = 478},
  [78] = {.lex_state = 479},
  [79] = {.lex_state = 478},
  [80] = {.lex_state = 478},
  [81] = {.lex_state = 478},
  [82] = {.lex_state = 470},
  [83] = {.lex_state = 478},
  [84] = {.lex_state = 478},
  [85] = {.lex_state = 478},
  [86] = {.lex_state = 478},
  [87] = {.lex_state = 478},
  [88] = {.lex_state = 478},
  [89] = {.lex_state = 478},
  [90] = {.lex_state = 478},
  [91] = {.lex_state = 478},
  [92] = {.lex_state = 478},
  [93] = {.lex_state = 478},
  [94] = {.lex_state = 478},
  [95] = {.lex_state = 478},
  [96] = {.lex_state = 478},
  [97] = {.lex_state = 478},
  [98] = {.lex_state = 478},
  [99] = {.lex_state = 478},
  [100] = {.lex_state = 478},
  [101] = {.lex_state = 478},
  [102] = {.lex_state = 478},
  [103] = {.lex_state = 478},
  [104] = {.lex_state = 478},
  [105] = {.lex_state = 478},
  [106] = {.lex_state = 478},
  [107] = {.lex_state = 478},
  [108] = {.lex_state = 478},
  [109] = {.lex_state = 478},
  [110] = {.lex_state = 478},
  [111] = {.lex_state = 478},
  [112] = {.lex_state = 480},
  [113] = {.lex_state = 468},
  [114] = {.lex_state = 480},
  [115] = {.lex_state = 481},
  [116] = {.lex_state = 480},
  [117] = {.lex_state = 481},
  [118] = {.lex_state = 481},
  [119] = {.lex_state = 482},
  [120] = {.lex_state = 483},
  [121] = {.lex_state = 484},
  [122] = {.lex_state = 485},
  [123] = {.lex_state = 485},
  [124] = {.lex_state = 482},
  [125] = {.lex_state = 484},
  [126] = {.lex_state = 486},
  [127] = {.lex_state = 521},
  [128] = {.lex_state = 483},
  [129] = {.lex_state = 486},
  [130] = {.lex_state = 484},
  [131] = {.lex_state = 483},
  [132] = {.lex_state = 521},
  [133] = {.lex_state = 485},
  [134] = {.lex_state = 521},
  [135] = {.lex_state = 521},
  [136] = {.lex_state = 486},
  [137] = {.lex_state = 487},
  [138] = {.lex_state = 488},
  [139] = {.lex_state = 488},
  [140] = {.lex_state = 487},
  [141] = {.lex_state = 488},
  [142] = {.lex_state = 488},
  [143] = {.lex_state = 488},
  [144] = {.lex_state = 488},
  [145] = {.lex_state = 506},
  [146] = {.lex_state = 487},
  [147] = {.lex_state = 489},
  [148] = {.lex_state = 488},
  [149] = {.lex_state = 489},
  [150] = {.lex_state = 506},
  [151] = {.lex_state = 488},
  [152] = {.lex_state = 488},
  [153] = {.lex_state = 487},
  [154] = {.lex_state = 521},
  [155] = {.lex_state = 470},
  [156] = {.lex_state = 487},
  [157] = {.lex_state = 489},
  [158] = {.lex_state = 470},
  [159] = {.lex_state = 470},
  [160] = {.lex_state = 487},
  [161] = {.lex_state = 487},
  [162] = {.lex_state = 521},
  [163] = {.lex_state = 470},
  [164] = {.lex_state = 489},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 489},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 470},
  [169] = {.lex_state = 470},
  [170] = {.lex_state = 470},
  [171] = {.lex_state = 470},
  [172] = {.lex_state = 470},
  [173] = {.lex_state = 470},
  [174] = {.lex_state = 470},
  [175] = {.lex_state = 470},
  [176] = {.lex_state = 470},
  [177] = {.lex_state = 521},
  [178] = {.lex_state = 470},
  [179] = {.lex_state = 470},
  [180] = {.lex_state = 468},
  [181] = {.lex_state = 468},
  [182] = {.lex_state = 470},
  [183] = {.lex_state = 470},
  [184] = {.lex_state = 521},
  [185] = {.lex_state = 468},
  [186] = {.lex_state = 521},
  [187] = {.lex_state = 470},
  [188] = {.lex_state = 521},
  [189] = {.lex_state = 521},
  [190] = {.lex_state = 521},
  [191] = {.lex_state = 490},
  [192] = {.lex_state = 470},
  [193] = {.lex_state = 470},
  [194] = {.lex_state = 470},
  [195] = {.lex_state = 470},
  [196] = {.lex_state = 470},
  [197] = {.lex_state = 521},
  [198] = {.lex_state = 470},
  [199] = {.lex_state = 520},
  [200] = {.lex_state = 521},
  [201] = {.lex_state = 491},
  [202] = {.lex_state = 520},
  [203] = {.lex_state = 468},
  [204] = {.lex_state = 468},
  [205] = {.lex_state = 492},
  [206] = {.lex_state = 520},
  [207] = {.lex_state = 468},
  [208] = {.lex_state = 493},
  [209] = {.lex_state = 468},
  [210] = {.lex_state = 490},
  [211] = {.lex_state = 520},
  [212] = {.lex_state = 493},
  [213] = {.lex_state = 520},
  [214] = {.lex_state = 491},
  [215] = {.lex_state = 520},
  [216] = {.lex_state = 493},
  [217] = {.lex_state = 468},
  [218] = {.lex_state = 491},
  [219] = {.lex_state = 468},
  [220] = {.lex_state = 468},
  [221] = {.lex_state = 521},
  [222] = {.lex_state = 520},
  [223] = {.lex_state = 521},
  [224] = {.lex_state = 521},
  [225] = {.lex_state = 494},
  [226] = {.lex_state = 476},
  [227] = {.lex_state = 521},
  [228] = {.lex_state = 521},
  [229] = {.lex_state = 521},
  [230] = {.lex_state = 521},
  [231] = {.lex_state = 491},
  [232] = {.lex_state = 478},
  [233] = {.lex_state = 476},
  [234] = {.lex_state = 521},
  [235] = {.lex_state = 489},
  [236] = {.lex_state = 494},
  [237] = {.lex_state = 468},
  [238] = {.lex_state = 521},
  [239] = {.lex_state = 494},
  [240] = {.lex_state = 478},
  [241] = {.lex_state = 522},
  [242] = {.lex_state = 522},
  [243] = {.lex_state = 522},
  [244] = {.lex_state = 476},
  [245] = {.lex_state = 476},
  [246] = {.lex_state = 495},
  [247] = {.lex_state = 476},
  [248] = {.lex_state = 496},
  [249] = {.lex_state = 497},
  [250] = {.lex_state = 497},
  [251] = {.lex_state = 476},
  [252] = {.lex_state = 496},
  [253] = {.lex_state = 497},
  [254] = {.lex_state = 476},
  [255] = {.lex_state = 495},
  [256] = {.lex_state = 521},
  [257] = {.lex_state = 476},
  [258] = {.lex_state = 476},
  [259] = {.lex_state = 476},
  [260] = {.lex_state = 521},
  [261] = {.lex_state = 496},
  [262] = {.lex_state = 476},
  [263] = {.lex_state = 476},
  [264] = {.lex_state = 495},
  [265] = {.lex_state = 493},
  [266] = {.lex_state = 468},
  [267] = {.lex_state = 498},
  [268] = {.lex_state = 499},
  [269] = {.lex_state = 499},
  [270] = {.lex_state = 476},
  [271] = {.lex_state = 482},
  [272] = {.lex_state = 476},
  [273] = {.lex_state = 521},
  [274] = {.lex_state = 521},
  [275] = {.lex_state = 476},
  [276] = {.lex_state = 476},
  [277] = {.lex_state = 476},
  [278] = {.lex_state = 476},
  [279] = {.lex_state = 498},
  [280] = {.lex_state = 521},
  [281] = {.lex_state = 521},
  [282] = {.lex_state = 476},
  [283] = {.lex_state = 498},
  [284] = {.lex_state = 499},
  [285] = {.lex_state = 493},
  [286] = {.lex_state = 476},
  [287] = {.lex_state = 476},
  [288] = {.lex_state = 476},
  [289] = {.lex_state = 521},
  [290] = {.lex_state = 500},
  [291] = {.lex_state = 521},
  [292] = {.lex_state = 520},
  [293] = {.lex_state = 476},
  [294] = {.lex_state = 476},
  [295] = {.lex_state = 521},
  [296] = {.lex_state = 520},
  [297] = {.lex_state = 476},
  [298] = {.lex_state = 500},
  [299] = {.lex_state = 521},
  [300] = {.lex_state = 476},
  [301] = {.lex_state = 500},
  [302] = {.lex_state = 488},
  [303] = {.lex_state = 476},
  [304] = {.lex_state = 506},
  [305] = {.lex_state = 520},
  [306] = {.lex_state = 476},
  [307] = {.lex_state = 494},
  [308] = {.lex_state = 476},
  [309] = {.lex_state = 476},
  [310] = {.lex_state = 501},
  [311] = {.lex_state = 476},
  [312] = {.lex_state = 521},
  [313] = {.lex_state = 501},
  [314] = {.lex_state = 476},
  [315] = {.lex_state = 501},
  [316] = {.lex_state = 520},
  [317] = {.lex_state = 521},
  [318] = {.lex_state = 520},
  [319] = {.lex_state = 476},
  [320] = {.lex_state = 521},
  [321] = {.lex_state = 521},
  [322] = {.lex_state = 502},
  [323] = {.lex_state = 520},
  [324] = {.lex_state = 476},
  [325] = {.lex_state = 520},
  [326] = {.lex_state = 521},
  [327] = {.lex_state = 476},
  [328] = {.lex_state = 503},
  [329] = {.lex_state = 507},
  [330] = {.lex_state = 521},
  [331] = {.lex_state = 476},
  [332] = {.lex_state = 503},
  [333] = {.lex_state = 476},
  [334] = {.lex_state = 476},
  [335] = {.lex_state = 520},
  [336] = {.lex_state = 503},
  [337] = {.lex_state = 502},
  [338] = {.lex_state = 521},
  [339] = {.lex_state = 507},
  [340] = {.lex_state = 476},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 520},
  [343] = {.lex_state = 476},
  [344] = {.lex_state = 476},
  [345] = {.lex_state = 520},
  [346] = {.lex_state = 476},
  [347] = {.lex_state = 476},
  [348] = {.lex_state = 520},
  [349] = {.lex_state = 521},
  [350] = {.lex_state = 476},
  [351] = {.lex_state = 476},
  [352] = {.lex_state = 502},
  [353] = {.lex_state = 476},
  [354] = {.lex_state = 468},
  [355] = {.lex_state = 476},
  [356] = {.lex_state = 507},
  [357] = {.lex_state = 476},
  [358] = {.lex_state = 476},
  [359] = {.lex_state = 476},
  [360] = {.lex_state = 476},
  [361] = {.lex_state = 476},
  [362] = {.lex_state = 476},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 520},
  [366] = {.lex_state = 520},
  [367] = {.lex_state = 476},
  [368] = {.lex_state = 476},
  [369] = {.lex_state = 520},
  [370] = {.lex_state = 476},
  [371] = {.lex_state = 476},
  [372] = {.lex_state = 476},
  [373] = {.lex_state = 476},
  [374] = {.lex_state = 476},
  [375] = {.lex_state = 476},
  [376] = {.lex_state = 476},
  [377] = {.lex_state = 520},
  [378] = {.lex_state = 520},
  [379] = {.lex_state = 476},
  [380] = {.lex_state = 476},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 476},
  [383] = {.lex_state = 521},
  [384] = {.lex_state = 521},
  [385] = {.lex_state = 520},
  [386] = {.lex_state = 476},
  [387] = {.lex_state = 476},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 476},
  [390] = {.lex_state = 476},
  [391] = {.lex_state = 476},
  [392] = {.lex_state = 476},
  [393] = {.lex_state = 476},
  [394] = {.lex_state = 476},
  [395] = {.lex_state = 476},
  [396] = {.lex_state = 476},
  [397] = {.lex_state = 520},
  [398] = {.lex_state = 476},
  [399] = {.lex_state = 476},
  [400] = {.lex_state = 476},
  [401] = {.lex_state = 494},
  [402] = {.lex_state = 494},
  [403] = {.lex_state = 476},
  [404] = {.lex_state = 494},
  [405] = {.lex_state = 476},
  [406] = {.lex_state = 476},
  [407] = {.lex_state = 476},
  [408] = {.lex_state = 476},
  [409] = {.lex_state = 476},
  [410] = {.lex_state = 521},
  [411] = {.lex_state = 476},
  [412] = {.lex_state = 476},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 476},
  [415] = {.lex_state = 520},
  [416] = {.lex_state = 469},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 476},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 476},
  [421] = {.lex_state = 476},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 476},
  [425] = {.lex_state = 476},
  [426] = {.lex_state = 494},
  [427] = {.lex_state = 476},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 521},
  [430] = {.lex_state = 476},
  [431] = {.lex_state = 521},
  [432] = {.lex_state = 476},
  [433] = {.lex_state = 521},
  [434] = {.lex_state = 476},
  [435] = {.lex_state = 476},
  [436] = {.lex_state = 520},
  [437] = {.lex_state = 476},
  [438] = {.lex_state = 476},
  [439] = {.lex_state = 520},
  [440] = {.lex_state = 476},
  [441] = {.lex_state = 476},
  [442] = {.lex_state = 476},
  [443] = {.lex_state = 476},
  [444] = {.lex_state = 476},
  [445] = {.lex_state = 476},
  [446] = {.lex_state = 504},
  [447] = {.lex_state = 476},
  [448] = {.lex_state = 476},
  [449] = {.lex_state = 520},
  [450] = {.lex_state = 476},
  [451] = {.lex_state = 476},
  [452] = {.lex_state = 520},
  [453] = {.lex_state = 476},
  [454] = {.lex_state = 476},
  [455] = {.lex_state = 520},
  [456] = {.lex_state = 476},
  [457] = {.lex_state = 476},
  [458] = {.lex_state = 476},
  [459] = {.lex_state = 476},
  [460] = {.lex_state = 476},
  [461] = {.lex_state = 520},
  [462] = {.lex_state = 520},
  [463] = {.lex_state = 476},
  [464] = {.lex_state = 476},
  [465] = {.lex_state = 476},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 520},
  [468] = {.lex_state = 476},
  [469] = {.lex_state = 520},
  [470] = {.lex_state = 520},
  [471] = {.lex_state = 521},
  [472] = {.lex_state = 476},
  [473] = {.lex_state = 476},
  [474] = {.lex_state = 476},
  [475] = {.lex_state = 476},
  [476] = {.lex_state = 476},
  [477] = {.lex_state = 520},
  [478] = {.lex_state = 476},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 520},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 521},
  [483] = {.lex_state = 132},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 469},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 494},
  [490] = {.lex_state = 476},
  [491] = {.lex_state = 476},
  [492] = {.lex_state = 468},
  [493] = {.lex_state = 469},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 520},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 132},
  [498] = {.lex_state = 476},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 520},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 468},
  [507] = {.lex_state = 520},
  [508] = {.lex_state = 520},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 476},
  [514] = {.lex_state = 476},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 494},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 468},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 520},
  [523] = {.lex_state = 476},
  [524] = {.lex_state = 476},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 476},
  [527] = {.lex_state = 494},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 476},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 476},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 521},
  [537] = {.lex_state = 520},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 476},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 476},
  [543] = {.lex_state = 476},
  [544] = {.lex_state = 132},
  [545] = {.lex_state = 520},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 468},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 476},
  [551] = {.lex_state = 476},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 469},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 476},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 469},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 476},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 521},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 476},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 468},
  [578] = {.lex_state = 476},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 468},
  [583] = {.lex_state = 476},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 468},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 521},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 476},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 476},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 469},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 469},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 476},
  [615] = {.lex_state = 469},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
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
  [632] = {.lex_state = 468},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 469},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 468},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 468},
  [647] = {.lex_state = 468},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 470},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 468},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 468},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 468},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 468},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 520},
  [668] = {.lex_state = 468},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 469},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 468},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 468},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 0},
  [678] = {.lex_state = 520},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 468},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 468},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 469},
  [691] = {.lex_state = 469},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 0},
  [694] = {.lex_state = 520},
  [695] = {.lex_state = 468},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 520},
  [699] = {.lex_state = 520},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 520},
  [703] = {.lex_state = 468},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 468},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 520},
  [711] = {.lex_state = 468},
  [712] = {.lex_state = 469},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 468},
  [717] = {.lex_state = 468},
  [718] = {.lex_state = 520},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 468},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 468},
  [723] = {.lex_state = 468},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 520},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 0},
  [729] = {.lex_state = 468},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 468},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 468},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 0},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 0},
  [739] = {.lex_state = 520},
  [740] = {.lex_state = 469},
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 0},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 0},
  [745] = {.lex_state = 0},
  [746] = {.lex_state = 468},
  [747] = {.lex_state = 468},
  [748] = {.lex_state = 0},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 0},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 0},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 520},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 470},
  [758] = {.lex_state = 0},
  [759] = {.lex_state = 0},
  [760] = {.lex_state = 468},
  [761] = {.lex_state = 468},
  [762] = {.lex_state = 0},
  [763] = {.lex_state = 0},
  [764] = {.lex_state = 0},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 0},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 469},
  [770] = {.lex_state = 520},
  [771] = {.lex_state = 469},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 470},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 0},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 0},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 0},
  [790] = {.lex_state = 468},
  [791] = {.lex_state = 468},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 470},
  [797] = {.lex_state = 0},
  [798] = {.lex_state = 0},
  [799] = {.lex_state = 0},
  [800] = {.lex_state = 520},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 469},
  [803] = {.lex_state = 0},
  [804] = {.lex_state = 0},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 469},
  [807] = {.lex_state = 0},
  [808] = {.lex_state = 520},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 0},
  [811] = {.lex_state = 469},
  [812] = {.lex_state = 0},
  [813] = {.lex_state = 0},
  [814] = {.lex_state = 0},
  [815] = {.lex_state = 0},
  [816] = {.lex_state = 470},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 0},
  [819] = {.lex_state = 0},
  [820] = {.lex_state = 469},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 468},
  [823] = {.lex_state = 520},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 0},
  [826] = {.lex_state = 0},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 0},
  [829] = {.lex_state = 469},
  [830] = {.lex_state = 0},
  [831] = {.lex_state = 0},
  [832] = {.lex_state = 520},
  [833] = {.lex_state = 469},
  [834] = {.lex_state = 0},
  [835] = {.lex_state = 0},
  [836] = {.lex_state = 470},
  [837] = {.lex_state = 0},
  [838] = {.lex_state = 0},
  [839] = {.lex_state = 0},
  [840] = {.lex_state = 0},
  [841] = {.lex_state = 0},
  [842] = {.lex_state = 0},
  [843] = {.lex_state = 0},
  [844] = {.lex_state = 469},
  [845] = {.lex_state = 469},
  [846] = {.lex_state = 0},
  [847] = {.lex_state = 469},
  [848] = {.lex_state = 469},
  [849] = {.lex_state = 520},
  [850] = {.lex_state = 0},
  [851] = {.lex_state = 0},
  [852] = {.lex_state = 0},
  [853] = {.lex_state = 0},
  [854] = {.lex_state = 0},
  [855] = {.lex_state = 0},
  [856] = {.lex_state = 0},
  [857] = {.lex_state = 0},
  [858] = {.lex_state = 0},
  [859] = {.lex_state = 0},
  [860] = {.lex_state = 521},
  [861] = {.lex_state = 521},
  [862] = {.lex_state = 0},
  [863] = {.lex_state = 0},
  [864] = {.lex_state = 0},
  [865] = {.lex_state = 0},
  [866] = {.lex_state = 0},
  [867] = {.lex_state = 520},
  [868] = {.lex_state = 0},
  [869] = {.lex_state = 0},
  [870] = {.lex_state = 0},
  [871] = {.lex_state = 0},
  [872] = {.lex_state = 0},
  [873] = {.lex_state = 0},
  [874] = {.lex_state = 0},
  [875] = {.lex_state = 0},
  [876] = {.lex_state = 520},
  [877] = {.lex_state = 0},
  [878] = {.lex_state = 0},
  [879] = {.lex_state = 0},
  [880] = {.lex_state = 0},
  [881] = {.lex_state = 0},
  [882] = {.lex_state = 0},
  [883] = {.lex_state = 0},
  [884] = {.lex_state = 0},
  [885] = {.lex_state = 0},
  [886] = {.lex_state = 0},
  [887] = {.lex_state = 0},
  [888] = {.lex_state = 0},
  [889] = {.lex_state = 0},
  [890] = {.lex_state = 520},
  [891] = {.lex_state = 0},
  [892] = {.lex_state = 0},
  [893] = {.lex_state = 520},
  [894] = {.lex_state = 520},
  [895] = {.lex_state = 0},
  [896] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym_createSignature_token1] = ACTIONS(1),
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
    [aux_sym_baseType_token7] = ACTIONS(1),
    [aux_sym_CREATE_VERTEX_token1] = ACTIONS(1),
    [aux_sym_CREATE_UNDIRECTED_EDGE_token2] = ACTIONS(1),
    [anon_sym_DQUOTEnone_DQUOTE] = ACTIONS(1),
    [aux_sym_DROP_token1] = ACTIONS(1),
    [aux_sym_ADD_INDEX_token1] = ACTIONS(1),
    [aux_sym_ADD_INDEX_token2] = ACTIONS(1),
    [aux_sym_ADD_INDEX_token4] = ACTIONS(1),
    [aux_sym_create_loading_job_token3] = ACTIONS(1),
    [aux_sym_define_statement_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(896),
    [sym_createQuery] = STATE(167),
    [sym_createSignature] = STATE(895),
    [sym_CREATE_VERTEX] = STATE(167),
    [sym_CREATE_UNDIRECTED_EDGE] = STATE(167),
    [sym_CREATE_DIRECTED_EDGE] = STATE(167),
    [sym_CREATE_GRAPH] = STATE(167),
    [sym_DROP] = STATE(167),
    [sym_ADD_INDEX] = STATE(167),
    [sym_DROP_INDEX] = STATE(167),
    [sym_create_loading_job] = STATE(167),
    [aux_sym_source_file_repeat1] = STATE(167),
    [aux_sym_createSignature_token1] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [aux_sym_DROP_token1] = ACTIONS(7),
    [aux_sym_ADD_INDEX_token1] = ACTIONS(9),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 39,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_typedef_token1,
    ACTIONS(13), 1,
      aux_sym_accumDeclStmt_token1,
    ACTIONS(15), 1,
      aux_sym_accumType_token1,
    ACTIONS(17), 1,
      aux_sym_accumType_token2,
    ACTIONS(19), 1,
      aux_sym_accumType_token3,
    ACTIONS(21), 1,
      aux_sym_accumType_token4,
    ACTIONS(25), 1,
      aux_sym_accumType_token7,
    ACTIONS(27), 1,
      aux_sym_accumType_token8,
    ACTIONS(29), 1,
      aux_sym_accumType_token9,
    ACTIONS(31), 1,
      aux_sym_accumType_token10,
    ACTIONS(33), 1,
      aux_sym_accumType_token13,
    ACTIONS(35), 1,
      aux_sym_accumType_token14,
    ACTIONS(37), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(39), 1,
      aux_sym_fileDeclStmt_token1,
    ACTIONS(41), 1,
      anon_sym__,
    ACTIONS(43), 1,
      aux_sym_printStmt_token1,
    ACTIONS(45), 1,
      aux_sym_returnStmt_token1,
    ACTIONS(49), 1,
      aux_sym_baseType_token3,
    STATE(3), 1,
      sym_typedefs,
    STATE(7), 1,
      aux_sym_declStmts_repeat1,
    STATE(28), 1,
      aux_sym_typedefs_repeat1,
    STATE(139), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(142), 1,
      sym_declStmts,
    STATE(307), 1,
      sym_name,
    STATE(531), 1,
      sym_baseType,
    STATE(534), 1,
      sym_accumType,
    STATE(673), 1,
      sym_vertexSetName,
    STATE(679), 1,
      sym_gsqlSelectClause,
    STATE(868), 1,
      sym_gsqlSelectBlock,
    STATE(871), 1,
      sym_queryBodyStmt,
    STATE(872), 1,
      sym_queryBodyStmts,
    STATE(873), 1,
      sym_declStmt,
    STATE(874), 1,
      sym_typedef,
    STATE(875), 1,
      sym_queryBody,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(870), 3,
      sym_accumDeclStmt,
      sym_baseDeclStmt,
      sym_fileDeclStmt,
    STATE(869), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
    ACTIONS(23), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [131] = 34,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_accumDeclStmt_token1,
    ACTIONS(15), 1,
      aux_sym_accumType_token1,
    ACTIONS(17), 1,
      aux_sym_accumType_token2,
    ACTIONS(19), 1,
      aux_sym_accumType_token3,
    ACTIONS(21), 1,
      aux_sym_accumType_token4,
    ACTIONS(25), 1,
      aux_sym_accumType_token7,
    ACTIONS(27), 1,
      aux_sym_accumType_token8,
    ACTIONS(29), 1,
      aux_sym_accumType_token9,
    ACTIONS(31), 1,
      aux_sym_accumType_token10,
    ACTIONS(33), 1,
      aux_sym_accumType_token13,
    ACTIONS(35), 1,
      aux_sym_accumType_token14,
    ACTIONS(37), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(39), 1,
      aux_sym_fileDeclStmt_token1,
    ACTIONS(41), 1,
      anon_sym__,
    ACTIONS(43), 1,
      aux_sym_printStmt_token1,
    ACTIONS(45), 1,
      aux_sym_returnStmt_token1,
    ACTIONS(49), 1,
      aux_sym_baseType_token3,
    STATE(7), 1,
      aux_sym_declStmts_repeat1,
    STATE(139), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(144), 1,
      sym_declStmts,
    STATE(307), 1,
      sym_name,
    STATE(531), 1,
      sym_baseType,
    STATE(534), 1,
      sym_accumType,
    STATE(673), 1,
      sym_vertexSetName,
    STATE(679), 1,
      sym_gsqlSelectClause,
    STATE(856), 1,
      sym_queryBodyStmts,
    STATE(868), 1,
      sym_gsqlSelectBlock,
    STATE(871), 1,
      sym_queryBodyStmt,
    STATE(873), 1,
      sym_declStmt,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(870), 3,
      sym_accumDeclStmt,
      sym_baseDeclStmt,
      sym_fileDeclStmt,
    STATE(869), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
    ACTIONS(23), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [247] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 5,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PLUS,
    ACTIONS(51), 30,
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
    ACTIONS(57), 5,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PLUS,
    ACTIONS(55), 29,
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
  [332] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      aux_sym_integer_token1,
    STATE(6), 1,
      aux_sym_integer_repeat1,
    ACTIONS(61), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(59), 28,
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
  [377] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_accumDeclStmt_token1,
    ACTIONS(15), 1,
      aux_sym_accumType_token1,
    ACTIONS(17), 1,
      aux_sym_accumType_token2,
    ACTIONS(19), 1,
      aux_sym_accumType_token3,
    ACTIONS(21), 1,
      aux_sym_accumType_token4,
    ACTIONS(25), 1,
      aux_sym_accumType_token7,
    ACTIONS(27), 1,
      aux_sym_accumType_token8,
    ACTIONS(29), 1,
      aux_sym_accumType_token9,
    ACTIONS(31), 1,
      aux_sym_accumType_token10,
    ACTIONS(33), 1,
      aux_sym_accumType_token13,
    ACTIONS(35), 1,
      aux_sym_accumType_token14,
    ACTIONS(39), 1,
      aux_sym_fileDeclStmt_token1,
    ACTIONS(49), 1,
      aux_sym_baseType_token3,
    STATE(8), 1,
      aux_sym_declStmts_repeat1,
    STATE(531), 1,
      sym_baseType,
    STATE(534), 1,
      sym_accumType,
    STATE(873), 1,
      sym_declStmt,
    ACTIONS(68), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(870), 3,
      sym_accumDeclStmt,
      sym_baseDeclStmt,
      sym_fileDeclStmt,
    ACTIONS(66), 4,
      aux_sym_queryBodyIfStmt_token1,
      anon_sym__,
      aux_sym_printStmt_token1,
      aux_sym_returnStmt_token1,
    ACTIONS(23), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [456] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      aux_sym_accumDeclStmt_token1,
    ACTIONS(73), 1,
      aux_sym_accumType_token1,
    ACTIONS(76), 1,
      aux_sym_accumType_token2,
    ACTIONS(79), 1,
      aux_sym_accumType_token3,
    ACTIONS(82), 1,
      aux_sym_accumType_token4,
    ACTIONS(88), 1,
      aux_sym_accumType_token7,
    ACTIONS(91), 1,
      aux_sym_accumType_token8,
    ACTIONS(94), 1,
      aux_sym_accumType_token9,
    ACTIONS(97), 1,
      aux_sym_accumType_token10,
    ACTIONS(100), 1,
      aux_sym_accumType_token13,
    ACTIONS(103), 1,
      aux_sym_accumType_token14,
    ACTIONS(108), 1,
      aux_sym_fileDeclStmt_token1,
    ACTIONS(113), 1,
      aux_sym_baseType_token3,
    STATE(8), 1,
      aux_sym_declStmts_repeat1,
    STATE(531), 1,
      sym_baseType,
    STATE(534), 1,
      sym_accumType,
    STATE(873), 1,
      sym_declStmt,
    ACTIONS(111), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(870), 3,
      sym_accumDeclStmt,
      sym_baseDeclStmt,
      sym_fileDeclStmt,
    ACTIONS(106), 4,
      aux_sym_queryBodyIfStmt_token1,
      anon_sym__,
      aux_sym_printStmt_token1,
      aux_sym_returnStmt_token1,
    ACTIONS(85), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [535] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(122), 1,
      aux_sym_integer_token1,
    STATE(6), 1,
      aux_sym_integer_repeat1,
    ACTIONS(118), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(116), 27,
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
    ACTIONS(122), 1,
      aux_sym_integer_token1,
    ACTIONS(128), 1,
      anon_sym_DOT,
    STATE(6), 1,
      aux_sym_integer_repeat1,
    ACTIONS(126), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(124), 27,
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
    ACTIONS(132), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(130), 28,
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
    ACTIONS(138), 1,
      aux_sym_integer_token1,
    STATE(14), 1,
      aux_sym_integer_repeat1,
    ACTIONS(136), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(134), 27,
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
  [713] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(140), 29,
      anon_sym_RBRACE,
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
      aux_sym_define_statement_token1,
  [753] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      aux_sym_integer_token1,
    STATE(6), 1,
      aux_sym_integer_repeat1,
    ACTIONS(146), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(144), 27,
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
  [797] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(148), 29,
      anon_sym_RBRACE,
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
      aux_sym_define_statement_token1,
  [837] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      aux_sym_integer_token1,
    STATE(6), 1,
      aux_sym_integer_repeat1,
    ACTIONS(136), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(134), 27,
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
  [881] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      aux_sym_integer_token1,
    STATE(6), 1,
      aux_sym_integer_repeat1,
    ACTIONS(154), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(152), 27,
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
  [925] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      aux_sym_integer_token1,
    STATE(17), 1,
      aux_sym_integer_repeat1,
    ACTIONS(146), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(144), 27,
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
  [969] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_SQUOTE,
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
  [1010] = 3,
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
  [1048] = 3,
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
  [1086] = 3,
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
  [1124] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 3,
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
  [1162] = 3,
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
  [1200] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(188), 27,
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
  [1238] = 3,
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
  [1276] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(32), 1,
      aux_sym_name_repeat1,
    ACTIONS(196), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(198), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(194), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(192), 21,
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
  [1319] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_typedef_token1,
    STATE(29), 1,
      aux_sym_typedefs_repeat1,
    STATE(874), 1,
      sym_typedef,
    ACTIONS(202), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(200), 24,
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
      aux_sym_baseType_token7,
  [1362] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      aux_sym_typedef_token1,
    STATE(29), 1,
      aux_sym_typedefs_repeat1,
    STATE(874), 1,
      sym_typedef,
    ACTIONS(209), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(207), 24,
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
      aux_sym_baseType_token7,
  [1405] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(34), 1,
      aux_sym_name_repeat1,
    ACTIONS(211), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(213), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(194), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(192), 21,
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
  [1448] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(31), 1,
      aux_sym_name_repeat1,
    ACTIONS(219), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(222), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(217), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(215), 21,
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
  [1491] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(31), 1,
      aux_sym_name_repeat1,
    ACTIONS(229), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(231), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(227), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(225), 21,
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
  [1534] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(33), 1,
      aux_sym_name_repeat1,
    ACTIONS(233), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(236), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(217), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(215), 21,
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
  [1577] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(33), 1,
      aux_sym_name_repeat1,
    ACTIONS(239), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(241), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(227), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(225), 21,
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
  [1620] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(40), 1,
      aux_sym_name_repeat1,
    ACTIONS(243), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(245), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(194), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(192), 20,
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
  [1662] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_name_repeat1,
    ACTIONS(247), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(250), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(217), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(215), 20,
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
  [1704] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(37), 1,
      aux_sym_name_repeat1,
    ACTIONS(253), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(256), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(217), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(215), 20,
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
  [1746] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(39), 1,
      aux_sym_name_repeat1,
    ACTIONS(259), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(261), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(194), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(192), 20,
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
  [1788] = 6,
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
    ACTIONS(227), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(225), 20,
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
  [1830] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(37), 1,
      aux_sym_name_repeat1,
    ACTIONS(267), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(269), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(227), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(225), 20,
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
  [1872] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(207), 25,
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
      aux_sym_baseType_token7,
  [1907] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(43), 1,
      aux_sym_name_repeat1,
    ACTIONS(227), 2,
      anon_sym_SLASH,
      anon_sym_PLUS,
    ACTIONS(271), 4,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(225), 20,
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
      anon_sym_DQUOTE,
  [1946] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(43), 1,
      aux_sym_name_repeat1,
    ACTIONS(217), 2,
      anon_sym_SLASH,
      anon_sym_PLUS,
    ACTIONS(273), 4,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(215), 20,
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
      anon_sym_DQUOTE,
  [1985] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(42), 1,
      aux_sym_name_repeat1,
    ACTIONS(194), 2,
      anon_sym_SLASH,
      anon_sym_PLUS,
    ACTIONS(276), 4,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(192), 20,
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
      anon_sym_DQUOTE,
  [2024] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym_accumType_token1,
    ACTIONS(25), 1,
      aux_sym_accumType_token7,
    ACTIONS(27), 1,
      aux_sym_accumType_token8,
    ACTIONS(29), 1,
      aux_sym_accumType_token9,
    ACTIONS(31), 1,
      aux_sym_accumType_token10,
    ACTIONS(33), 1,
      aux_sym_accumType_token13,
    ACTIONS(35), 1,
      aux_sym_accumType_token14,
    ACTIONS(278), 1,
      aux_sym_accumType_token2,
    ACTIONS(280), 1,
      aux_sym_accumType_token3,
    ACTIONS(282), 1,
      aux_sym_accumType_token4,
    ACTIONS(284), 1,
      aux_sym_accumType_token5,
    ACTIONS(286), 1,
      anon_sym__,
    ACTIONS(292), 1,
      aux_sym_baseType_token3,
    STATE(230), 1,
      sym_name,
    STATE(688), 1,
      sym_type,
    ACTIONS(288), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(229), 3,
      sym_accumType,
      sym_tupleType,
      sym_baseType,
    ACTIONS(290), 6,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [2090] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym_accumType_token1,
    ACTIONS(25), 1,
      aux_sym_accumType_token7,
    ACTIONS(27), 1,
      aux_sym_accumType_token8,
    ACTIONS(29), 1,
      aux_sym_accumType_token9,
    ACTIONS(31), 1,
      aux_sym_accumType_token10,
    ACTIONS(33), 1,
      aux_sym_accumType_token13,
    ACTIONS(35), 1,
      aux_sym_accumType_token14,
    ACTIONS(278), 1,
      aux_sym_accumType_token2,
    ACTIONS(280), 1,
      aux_sym_accumType_token3,
    ACTIONS(282), 1,
      aux_sym_accumType_token4,
    ACTIONS(284), 1,
      aux_sym_accumType_token5,
    ACTIONS(292), 1,
      aux_sym_baseType_token3,
    ACTIONS(294), 1,
      anon_sym__,
    STATE(230), 1,
      sym_name,
    STATE(848), 1,
      sym_type,
    ACTIONS(296), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(229), 3,
      sym_accumType,
      sym_tupleType,
      sym_baseType,
    ACTIONS(290), 6,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [2156] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym_accumType_token1,
    ACTIONS(25), 1,
      aux_sym_accumType_token7,
    ACTIONS(27), 1,
      aux_sym_accumType_token8,
    ACTIONS(29), 1,
      aux_sym_accumType_token9,
    ACTIONS(31), 1,
      aux_sym_accumType_token10,
    ACTIONS(33), 1,
      aux_sym_accumType_token13,
    ACTIONS(35), 1,
      aux_sym_accumType_token14,
    ACTIONS(278), 1,
      aux_sym_accumType_token2,
    ACTIONS(280), 1,
      aux_sym_accumType_token3,
    ACTIONS(282), 1,
      aux_sym_accumType_token4,
    ACTIONS(284), 1,
      aux_sym_accumType_token5,
    ACTIONS(292), 1,
      aux_sym_baseType_token3,
    ACTIONS(298), 1,
      anon_sym__,
    STATE(230), 1,
      sym_name,
    STATE(597), 1,
      sym_type,
    ACTIONS(300), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(229), 3,
      sym_accumType,
      sym_tupleType,
      sym_baseType,
    ACTIONS(290), 6,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [2222] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym_accumType_token1,
    ACTIONS(25), 1,
      aux_sym_accumType_token7,
    ACTIONS(27), 1,
      aux_sym_accumType_token8,
    ACTIONS(29), 1,
      aux_sym_accumType_token9,
    ACTIONS(31), 1,
      aux_sym_accumType_token10,
    ACTIONS(33), 1,
      aux_sym_accumType_token13,
    ACTIONS(35), 1,
      aux_sym_accumType_token14,
    ACTIONS(278), 1,
      aux_sym_accumType_token2,
    ACTIONS(280), 1,
      aux_sym_accumType_token3,
    ACTIONS(282), 1,
      aux_sym_accumType_token4,
    ACTIONS(284), 1,
      aux_sym_accumType_token5,
    ACTIONS(292), 1,
      aux_sym_baseType_token3,
    ACTIONS(298), 1,
      anon_sym__,
    STATE(230), 1,
      sym_name,
    STATE(634), 1,
      sym_type,
    ACTIONS(300), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(229), 3,
      sym_accumType,
      sym_tupleType,
      sym_baseType,
    ACTIONS(290), 6,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [2288] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(106), 24,
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
      aux_sym_baseType_token7,
  [2322] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym_accumType_token1,
    ACTIONS(25), 1,
      aux_sym_accumType_token7,
    ACTIONS(27), 1,
      aux_sym_accumType_token8,
    ACTIONS(29), 1,
      aux_sym_accumType_token9,
    ACTIONS(31), 1,
      aux_sym_accumType_token10,
    ACTIONS(33), 1,
      aux_sym_accumType_token13,
    ACTIONS(35), 1,
      aux_sym_accumType_token14,
    ACTIONS(41), 1,
      anon_sym__,
    ACTIONS(278), 1,
      aux_sym_accumType_token2,
    ACTIONS(280), 1,
      aux_sym_accumType_token3,
    ACTIONS(282), 1,
      aux_sym_accumType_token4,
    ACTIONS(284), 1,
      aux_sym_accumType_token5,
    ACTIONS(292), 1,
      aux_sym_baseType_token3,
    STATE(230), 1,
      sym_name,
    STATE(700), 1,
      sym_type,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(229), 3,
      sym_accumType,
      sym_tupleType,
      sym_baseType,
    ACTIONS(290), 6,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [2388] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym_accumType_token1,
    ACTIONS(25), 1,
      aux_sym_accumType_token7,
    ACTIONS(27), 1,
      aux_sym_accumType_token8,
    ACTIONS(29), 1,
      aux_sym_accumType_token9,
    ACTIONS(31), 1,
      aux_sym_accumType_token10,
    ACTIONS(33), 1,
      aux_sym_accumType_token13,
    ACTIONS(35), 1,
      aux_sym_accumType_token14,
    ACTIONS(278), 1,
      aux_sym_accumType_token2,
    ACTIONS(280), 1,
      aux_sym_accumType_token3,
    ACTIONS(282), 1,
      aux_sym_accumType_token4,
    ACTIONS(284), 1,
      aux_sym_accumType_token5,
    ACTIONS(292), 1,
      aux_sym_baseType_token3,
    ACTIONS(302), 1,
      anon_sym__,
    STATE(230), 1,
      sym_name,
    STATE(830), 1,
      sym_type,
    ACTIONS(304), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(229), 3,
      sym_accumType,
      sym_tupleType,
      sym_baseType,
    ACTIONS(290), 6,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [2454] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym_accumType_token1,
    ACTIONS(25), 1,
      aux_sym_accumType_token7,
    ACTIONS(27), 1,
      aux_sym_accumType_token8,
    ACTIONS(29), 1,
      aux_sym_accumType_token9,
    ACTIONS(31), 1,
      aux_sym_accumType_token10,
    ACTIONS(33), 1,
      aux_sym_accumType_token13,
    ACTIONS(35), 1,
      aux_sym_accumType_token14,
    ACTIONS(278), 1,
      aux_sym_accumType_token2,
    ACTIONS(280), 1,
      aux_sym_accumType_token3,
    ACTIONS(282), 1,
      aux_sym_accumType_token4,
    ACTIONS(284), 1,
      aux_sym_accumType_token5,
    ACTIONS(292), 1,
      aux_sym_baseType_token3,
    ACTIONS(306), 1,
      anon_sym__,
    STATE(230), 1,
      sym_name,
    STATE(466), 1,
      sym_type,
    ACTIONS(308), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(229), 3,
      sym_accumType,
      sym_tupleType,
      sym_baseType,
    ACTIONS(290), 6,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [2520] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym_accumType_token1,
    ACTIONS(25), 1,
      aux_sym_accumType_token7,
    ACTIONS(27), 1,
      aux_sym_accumType_token8,
    ACTIONS(29), 1,
      aux_sym_accumType_token9,
    ACTIONS(31), 1,
      aux_sym_accumType_token10,
    ACTIONS(33), 1,
      aux_sym_accumType_token13,
    ACTIONS(35), 1,
      aux_sym_accumType_token14,
    ACTIONS(278), 1,
      aux_sym_accumType_token2,
    ACTIONS(280), 1,
      aux_sym_accumType_token3,
    ACTIONS(282), 1,
      aux_sym_accumType_token4,
    ACTIONS(292), 1,
      aux_sym_baseType_token3,
    ACTIONS(294), 1,
      anon_sym__,
    STATE(230), 1,
      sym_name,
    ACTIONS(296), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(806), 3,
      sym_accumType,
      sym_tupleType,
      sym_baseType,
    ACTIONS(290), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [2581] = 20,
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
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(23), 1,
      sym_globalAccumName,
    STATE(159), 1,
      sym_expr,
    STATE(163), 1,
      sym_name,
    STATE(467), 1,
      sym_printExpr,
    STATE(470), 1,
      sym_vExprSet,
    STATE(495), 1,
      sym_tableName,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(326), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(20), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(22), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(24), 2,
      sym_integer,
      sym_real,
  [2647] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_SLASH,
    ACTIONS(336), 1,
      aux_sym_condition_token1,
    ACTIONS(338), 1,
      aux_sym_condition_token2,
    ACTIONS(340), 1,
      aux_sym_condition_token3,
    STATE(90), 1,
      sym_comparisonOperator,
    STATE(102), 1,
      sym_mathOperator,
    ACTIONS(330), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(328), 4,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_perClauseV2_token1,
    ACTIONS(342), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(332), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [2695] = 20,
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
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(23), 1,
      sym_globalAccumName,
    STATE(159), 1,
      sym_expr,
    STATE(163), 1,
      sym_name,
    STATE(470), 1,
      sym_vExprSet,
    STATE(495), 1,
      sym_tableName,
    STATE(507), 1,
      sym_printExpr,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(326), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(20), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(22), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(24), 2,
      sym_integer,
      sym_real,
  [2761] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_SLASH,
    ACTIONS(340), 1,
      aux_sym_condition_token3,
    ACTIONS(344), 1,
      aux_sym_condition_token1,
    ACTIONS(346), 1,
      aux_sym_condition_token2,
    STATE(91), 1,
      sym_mathOperator,
    STATE(95), 1,
      sym_comparisonOperator,
    ACTIONS(330), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(328), 4,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_printStmt_token3,
    ACTIONS(342), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(332), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [2809] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(348), 21,
      anon_sym_RPAREN,
      anon_sym_EQ,
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
      anon_sym__,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [2840] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_SLASH,
    ACTIONS(340), 1,
      aux_sym_condition_token3,
    ACTIONS(352), 1,
      aux_sym_condition_token1,
    ACTIONS(354), 1,
      aux_sym_condition_token2,
    STATE(93), 1,
      sym_mathOperator,
    STATE(111), 1,
      sym_comparisonOperator,
    ACTIONS(330), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(328), 3,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
    ACTIONS(342), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(332), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [2887] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_SLASH,
    ACTIONS(340), 1,
      aux_sym_condition_token3,
    ACTIONS(356), 1,
      aux_sym_condition_token1,
    ACTIONS(358), 1,
      aux_sym_condition_token2,
    STATE(89), 1,
      sym_comparisonOperator,
    STATE(103), 1,
      sym_mathOperator,
    ACTIONS(330), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(328), 3,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_queryBodyIfStmt_token2,
    ACTIONS(342), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(332), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [2934] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_SLASH,
    STATE(91), 1,
      sym_mathOperator,
    ACTIONS(362), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(364), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(360), 11,
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
  [2971] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_SLASH,
    STATE(102), 1,
      sym_mathOperator,
    ACTIONS(362), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(364), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(360), 11,
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
  [3008] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(65), 1,
      aux_sym_name_repeat1,
    ACTIONS(370), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(372), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(192), 18,
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
      aux_sym_baseType_token7,
  [3043] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(181), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(178), 19,
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
  [3076] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(66), 1,
      aux_sym_name_repeat1,
    ACTIONS(376), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(378), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(225), 18,
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
      aux_sym_baseType_token7,
  [3111] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(66), 1,
      aux_sym_name_repeat1,
    ACTIONS(380), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(383), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(215), 18,
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
      aux_sym_baseType_token7,
  [3146] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_DOT,
    ACTIONS(181), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(178), 19,
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
  [3179] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_DOT,
    ACTIONS(181), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(178), 18,
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
  [3211] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_SLASH,
    STATE(93), 1,
      sym_mathOperator,
    ACTIONS(362), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(364), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(360), 10,
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
  [3247] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
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
    ACTIONS(390), 1,
      anon_sym_AT_AT,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(23), 1,
      sym_globalAccumName,
    STATE(181), 1,
      sym_expr,
    STATE(185), 1,
      sym_name,
    STATE(843), 1,
      sym_argList,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(20), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(22), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(24), 2,
      sym_integer,
      sym_real,
  [3307] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_DOT,
    ACTIONS(181), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(178), 18,
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
  [3339] = 18,
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
    ACTIONS(394), 1,
      anon_sym_AT_AT,
    ACTIONS(396), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(23), 1,
      sym_globalAccumName,
    STATE(59), 1,
      sym_expr,
    STATE(71), 1,
      sym_name,
    STATE(599), 1,
      sym_condition,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(398), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(20), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(22), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(24), 2,
      sym_integer,
      sym_real,
  [3399] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_SLASH,
    STATE(75), 1,
      aux_sym_name_repeat1,
    ACTIONS(400), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(402), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(225), 16,
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
  [3435] = 18,
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
    ACTIONS(404), 1,
      anon_sym_AT_AT,
    ACTIONS(406), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(23), 1,
      sym_globalAccumName,
    STATE(60), 1,
      sym_expr,
    STATE(68), 1,
      sym_name,
    STATE(595), 1,
      sym_condition,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(408), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(20), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(22), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(24), 2,
      sym_integer,
      sym_real,
  [3495] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_SLASH,
    STATE(75), 1,
      aux_sym_name_repeat1,
    ACTIONS(410), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(413), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(215), 16,
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
  [3531] = 18,
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
    ACTIONS(416), 1,
      anon_sym_AT_AT,
    ACTIONS(418), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(23), 1,
      sym_globalAccumName,
    STATE(57), 1,
      sym_expr,
    STATE(67), 1,
      sym_name,
    STATE(545), 1,
      sym_condition,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(420), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(20), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(22), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(24), 2,
      sym_integer,
      sym_real,
  [3591] = 18,
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
    ACTIONS(404), 1,
      anon_sym_AT_AT,
    ACTIONS(406), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(23), 1,
      sym_globalAccumName,
    STATE(60), 1,
      sym_expr,
    STATE(68), 1,
      sym_name,
    STATE(609), 1,
      sym_condition,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(408), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(20), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(22), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(24), 2,
      sym_integer,
      sym_real,
  [3651] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_SLASH,
    STATE(73), 1,
      aux_sym_name_repeat1,
    ACTIONS(422), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(424), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(192), 16,
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
  [3687] = 18,
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
    ACTIONS(426), 1,
      anon_sym_AT_AT,
    ACTIONS(428), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(23), 1,
      sym_globalAccumName,
    STATE(55), 1,
      sym_expr,
    STATE(64), 1,
      sym_name,
    STATE(517), 1,
      sym_condition,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(430), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(20), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(22), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(24), 2,
      sym_integer,
      sym_real,
  [3747] = 18,
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
    ACTIONS(404), 1,
      anon_sym_AT_AT,
    ACTIONS(406), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(23), 1,
      sym_globalAccumName,
    STATE(60), 1,
      sym_expr,
    STATE(68), 1,
      sym_name,
    STATE(618), 1,
      sym_condition,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(408), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(20), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(22), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(24), 2,
      sym_integer,
      sym_real,
  [3807] = 18,
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
    ACTIONS(432), 1,
      anon_sym_AT_AT,
    ACTIONS(434), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(23), 1,
      sym_globalAccumName,
    STATE(174), 1,
      sym_expr,
    STATE(179), 1,
      sym_name,
    STATE(648), 1,
      sym_vSetProj,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(436), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(20), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(22), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(24), 2,
      sym_integer,
      sym_real,
  [3867] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_SLASH,
    STATE(103), 1,
      sym_mathOperator,
    ACTIONS(362), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(364), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(360), 10,
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
  [3903] = 18,
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
    ACTIONS(394), 1,
      anon_sym_AT_AT,
    ACTIONS(396), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(23), 1,
      sym_globalAccumName,
    STATE(59), 1,
      sym_expr,
    STATE(71), 1,
      sym_name,
    STATE(601), 1,
      sym_condition,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(398), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(20), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(22), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(24), 2,
      sym_integer,
      sym_real,
  [3963] = 18,
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
    ACTIONS(416), 1,
      anon_sym_AT_AT,
    ACTIONS(418), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(23), 1,
      sym_globalAccumName,
    STATE(57), 1,
      sym_expr,
    STATE(67), 1,
      sym_name,
    STATE(508), 1,
      sym_condition,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(420), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(20), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(22), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(24), 2,
      sym_integer,
      sym_real,
  [4023] = 18,
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
    ACTIONS(404), 1,
      anon_sym_AT_AT,
    ACTIONS(406), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(23), 1,
      sym_globalAccumName,
    STATE(60), 1,
      sym_expr,
    STATE(68), 1,
      sym_name,
    STATE(555), 1,
      sym_condition,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(408), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(20), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(22), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(24), 2,
      sym_integer,
      sym_real,
  [4083] = 18,
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
    ACTIONS(432), 1,
      anon_sym_AT_AT,
    ACTIONS(434), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(23), 1,
      sym_globalAccumName,
    STATE(174), 1,
      sym_expr,
    STATE(179), 1,
      sym_name,
    STATE(570), 1,
      sym_vSetProj,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(436), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(20), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(22), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(24), 2,
      sym_integer,
      sym_real,
  [4143] = 18,
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
    ACTIONS(416), 1,
      anon_sym_AT_AT,
    ACTIONS(418), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(23), 1,
      sym_globalAccumName,
    STATE(57), 1,
      sym_expr,
    STATE(67), 1,
      sym_name,
    STATE(537), 1,
      sym_condition,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(420), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(20), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(22), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(24), 2,
      sym_integer,
      sym_real,
  [4203] = 18,
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
    ACTIONS(426), 1,
      anon_sym_AT_AT,
    ACTIONS(428), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(23), 1,
      sym_globalAccumName,
    STATE(55), 1,
      sym_expr,
    STATE(64), 1,
      sym_name,
    STATE(521), 1,
      sym_condition,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(430), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(20), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(22), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(24), 2,
      sym_integer,
      sym_real,
  [4263] = 17,
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
    ACTIONS(438), 1,
      anon_sym_AT_AT,
    ACTIONS(440), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(23), 1,
      sym_globalAccumName,
    STATE(178), 1,
      sym_expr,
    STATE(182), 1,
      sym_name,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(442), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(20), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(22), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(24), 2,
      sym_integer,
      sym_real,
  [4320] = 17,
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
    ACTIONS(444), 1,
      anon_sym_AT_AT,
    ACTIONS(446), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(23), 1,
      sym_globalAccumName,
    STATE(168), 1,
      sym_expr,
    STATE(172), 1,
      sym_name,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(448), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(20), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(22), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(24), 2,
      sym_integer,
      sym_real,
  [4377] = 17,
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
    ACTIONS(416), 1,
      anon_sym_AT_AT,
    ACTIONS(418), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(23), 1,
      sym_globalAccumName,
    STATE(61), 1,
      sym_expr,
    STATE(67), 1,
      sym_name,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(420), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(20), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(22), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(24), 2,
      sym_integer,
      sym_real,
  [4434] = 17,
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
    ACTIONS(450), 1,
      anon_sym_AT_AT,
    ACTIONS(452), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(23), 1,
      sym_globalAccumName,
    STATE(175), 1,
      sym_name,
    STATE(176), 1,
      sym_expr,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(454), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(20), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(22), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(24), 2,
      sym_integer,
      sym_real,
  [4491] = 17,
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
    ACTIONS(394), 1,
      anon_sym_AT_AT,
    ACTIONS(396), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(23), 1,
      sym_globalAccumName,
    STATE(69), 1,
      sym_expr,
    STATE(71), 1,
      sym_name,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(398), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(20), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(22), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(24), 2,
      sym_integer,
      sym_real,
  [4548] = 17,
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
    ACTIONS(444), 1,
      anon_sym_AT_AT,
    ACTIONS(446), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(23), 1,
      sym_globalAccumName,
    STATE(171), 1,
      sym_expr,
    STATE(172), 1,
      sym_name,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(448), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(20), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(22), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(24), 2,
      sym_integer,
      sym_real,
  [4605] = 17,
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
    ACTIONS(456), 1,
      anon_sym_AT_AT,
    ACTIONS(458), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(23), 1,
      sym_globalAccumName,
    STATE(169), 1,
      sym_name,
    STATE(173), 1,
      sym_expr,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(460), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(20), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(22), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(24), 2,
      sym_integer,
      sym_real,
  [4662] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
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
    ACTIONS(390), 1,
      anon_sym_AT_AT,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(23), 1,
      sym_globalAccumName,
    STATE(185), 1,
      sym_name,
    STATE(203), 1,
      sym_expr,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(20), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(22), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(24), 2,
      sym_integer,
      sym_real,
  [4719] = 17,
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
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(23), 1,
      sym_globalAccumName,
    STATE(155), 1,
      sym_name,
    STATE(158), 1,
      sym_expr,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(326), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(20), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(22), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(24), 2,
      sym_integer,
      sym_real,
  [4776] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
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
    ACTIONS(390), 1,
      anon_sym_AT_AT,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(23), 1,
      sym_globalAccumName,
    STATE(185), 1,
      sym_name,
    STATE(207), 1,
      sym_expr,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(20), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(22), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(24), 2,
      sym_integer,
      sym_real,
  [4833] = 17,
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
    ACTIONS(456), 1,
      anon_sym_AT_AT,
    ACTIONS(458), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(23), 1,
      sym_globalAccumName,
    STATE(169), 1,
      sym_name,
    STATE(170), 1,
      sym_expr,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(460), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(20), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(22), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(24), 2,
      sym_integer,
      sym_real,
  [4890] = 17,
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
    ACTIONS(462), 1,
      anon_sym_AT_AT,
    ACTIONS(464), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(23), 1,
      sym_globalAccumName,
    STATE(183), 1,
      sym_name,
    STATE(192), 1,
      sym_expr,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(466), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(20), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(22), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(24), 2,
      sym_integer,
      sym_real,
  [4947] = 17,
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
    ACTIONS(438), 1,
      anon_sym_AT_AT,
    ACTIONS(440), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(23), 1,
      sym_globalAccumName,
    STATE(182), 1,
      sym_name,
    STATE(198), 1,
      sym_expr,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(442), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(20), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(22), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(24), 2,
      sym_integer,
      sym_real,
  [5004] = 17,
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
    ACTIONS(426), 1,
      anon_sym_AT_AT,
    ACTIONS(428), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(23), 1,
      sym_globalAccumName,
    STATE(62), 1,
      sym_expr,
    STATE(64), 1,
      sym_name,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(430), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(20), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(22), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(24), 2,
      sym_integer,
      sym_real,
  [5061] = 17,
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
    ACTIONS(404), 1,
      anon_sym_AT_AT,
    ACTIONS(406), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(23), 1,
      sym_globalAccumName,
    STATE(68), 1,
      sym_name,
    STATE(82), 1,
      sym_expr,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(408), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(20), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(22), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(24), 2,
      sym_integer,
      sym_real,
  [5118] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
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
    ACTIONS(390), 1,
      anon_sym_AT_AT,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(23), 1,
      sym_globalAccumName,
    STATE(180), 1,
      sym_expr,
    STATE(185), 1,
      sym_name,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(20), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(22), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(24), 2,
      sym_integer,
      sym_real,
  [5175] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
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
    ACTIONS(390), 1,
      anon_sym_AT_AT,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(23), 1,
      sym_globalAccumName,
    STATE(185), 1,
      sym_name,
    STATE(209), 1,
      sym_expr,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(20), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(22), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(24), 2,
      sym_integer,
      sym_real,
  [5232] = 17,
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
    ACTIONS(450), 1,
      anon_sym_AT_AT,
    ACTIONS(452), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(23), 1,
      sym_globalAccumName,
    STATE(175), 1,
      sym_name,
    STATE(193), 1,
      sym_expr,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(454), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(20), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(22), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(24), 2,
      sym_integer,
      sym_real,
  [5289] = 17,
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
    ACTIONS(432), 1,
      anon_sym_AT_AT,
    ACTIONS(434), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(23), 1,
      sym_globalAccumName,
    STATE(179), 1,
      sym_name,
    STATE(196), 1,
      sym_expr,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(436), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(20), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(22), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(24), 2,
      sym_integer,
      sym_real,
  [5346] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
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
    ACTIONS(390), 1,
      anon_sym_AT_AT,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(23), 1,
      sym_globalAccumName,
    STATE(185), 1,
      sym_name,
    STATE(237), 1,
      sym_expr,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(20), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(22), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(24), 2,
      sym_integer,
      sym_real,
  [5403] = 17,
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
    ACTIONS(450), 1,
      anon_sym_AT_AT,
    ACTIONS(452), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(23), 1,
      sym_globalAccumName,
    STATE(175), 1,
      sym_name,
    STATE(195), 1,
      sym_expr,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(454), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(20), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(22), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(24), 2,
      sym_integer,
      sym_real,
  [5460] = 17,
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
    ACTIONS(450), 1,
      anon_sym_AT_AT,
    ACTIONS(452), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(23), 1,
      sym_globalAccumName,
    STATE(175), 1,
      sym_name,
    STATE(194), 1,
      sym_expr,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(454), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(20), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(22), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(24), 2,
      sym_integer,
      sym_real,
  [5517] = 17,
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
    ACTIONS(462), 1,
      anon_sym_AT_AT,
    ACTIONS(464), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(23), 1,
      sym_globalAccumName,
    STATE(183), 1,
      sym_name,
    STATE(187), 1,
      sym_expr,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(466), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(20), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(22), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(24), 2,
      sym_integer,
      sym_real,
  [5574] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_SLASH,
    STATE(116), 1,
      aux_sym_name_repeat1,
    ACTIONS(468), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(470), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(192), 14,
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
  [5608] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym_accumType_token1,
    ACTIONS(25), 1,
      aux_sym_accumType_token7,
    ACTIONS(27), 1,
      aux_sym_accumType_token8,
    ACTIONS(29), 1,
      aux_sym_accumType_token9,
    ACTIONS(31), 1,
      aux_sym_accumType_token10,
    ACTIONS(33), 1,
      aux_sym_accumType_token13,
    ACTIONS(35), 1,
      aux_sym_accumType_token14,
    ACTIONS(278), 1,
      aux_sym_accumType_token2,
    ACTIONS(280), 1,
      aux_sym_accumType_token3,
    ACTIONS(282), 1,
      aux_sym_accumType_token4,
    ACTIONS(292), 1,
      aux_sym_baseType_token3,
    STATE(792), 2,
      sym_accumType,
      sym_baseType,
    ACTIONS(290), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [5658] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_SLASH,
    STATE(114), 1,
      aux_sym_name_repeat1,
    ACTIONS(472), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(475), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(215), 14,
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
  [5692] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_SLASH,
    STATE(117), 1,
      aux_sym_name_repeat1,
    ACTIONS(478), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(480), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(225), 14,
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
  [5726] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_SLASH,
    STATE(114), 1,
      aux_sym_name_repeat1,
    ACTIONS(482), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(484), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(225), 14,
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
  [5760] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_SLASH,
    STATE(117), 1,
      aux_sym_name_repeat1,
    ACTIONS(486), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(489), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(215), 14,
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
  [5794] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_SLASH,
    STATE(115), 1,
      aux_sym_name_repeat1,
    ACTIONS(492), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(494), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(192), 14,
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
  [5828] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(41), 1,
      anon_sym__,
    ACTIONS(43), 1,
      aux_sym_printStmt_token1,
    ACTIONS(45), 1,
      aux_sym_returnStmt_token1,
    STATE(124), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(307), 1,
      sym_name,
    STATE(673), 1,
      sym_vertexSetName,
    STATE(679), 1,
      sym_gsqlSelectClause,
    STATE(799), 1,
      sym_queryBodyStmt,
    STATE(868), 1,
      sym_gsqlSelectBlock,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(496), 2,
      aux_sym_queryBodyIfStmt_token3,
      aux_sym_queryBodyIfStmt_token4,
    STATE(869), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [5877] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_SLASH,
    STATE(120), 1,
      aux_sym_name_repeat1,
    ACTIONS(498), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(501), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(215), 13,
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
  [5910] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_SLASH,
    ACTIONS(506), 1,
      aux_sym_name_token2,
    STATE(125), 1,
      aux_sym_name_repeat1,
    ACTIONS(504), 3,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
    ACTIONS(192), 13,
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
  [5943] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_SLASH,
    STATE(123), 1,
      aux_sym_name_repeat1,
    ACTIONS(508), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(510), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(192), 13,
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
  [5976] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_SLASH,
    STATE(133), 1,
      aux_sym_name_repeat1,
    ACTIONS(512), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(514), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(225), 13,
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
  [6009] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(521), 1,
      anon_sym__,
    ACTIONS(524), 1,
      aux_sym_printStmt_token1,
    ACTIONS(527), 1,
      aux_sym_returnStmt_token1,
    STATE(124), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(307), 1,
      sym_name,
    STATE(673), 1,
      sym_vertexSetName,
    STATE(679), 1,
      sym_gsqlSelectClause,
    STATE(799), 1,
      sym_queryBodyStmt,
    STATE(868), 1,
      sym_gsqlSelectBlock,
    ACTIONS(519), 2,
      aux_sym_queryBodyIfStmt_token3,
      aux_sym_queryBodyIfStmt_token4,
    ACTIONS(530), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(869), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [6058] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_SLASH,
    ACTIONS(535), 1,
      aux_sym_name_token2,
    STATE(130), 1,
      aux_sym_name_repeat1,
    ACTIONS(533), 3,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
    ACTIONS(225), 13,
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
  [6091] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_SLASH,
    STATE(126), 1,
      aux_sym_name_repeat1,
    ACTIONS(537), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(540), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(215), 13,
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
  [6124] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_accumType_token2,
    ACTIONS(19), 1,
      aux_sym_accumType_token3,
    ACTIONS(21), 1,
      aux_sym_accumType_token4,
    ACTIONS(49), 1,
      aux_sym_baseType_token3,
    ACTIONS(543), 1,
      anon_sym_RPAREN,
    ACTIONS(545), 1,
      anon_sym_LT,
    ACTIONS(549), 1,
      anon_sym_FILE,
    STATE(368), 1,
      sym_parameterType,
    STATE(573), 1,
      sym_baseType,
    STATE(797), 1,
      sym_parameterList,
    ACTIONS(547), 2,
      anon_sym_SET,
      anon_sym_BAG,
    ACTIONS(23), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [6171] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_SLASH,
    STATE(131), 1,
      aux_sym_name_repeat1,
    ACTIONS(551), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(553), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(192), 13,
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
  [6204] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_SLASH,
    STATE(136), 1,
      aux_sym_name_repeat1,
    ACTIONS(555), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(557), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(192), 13,
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
  [6237] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_SLASH,
    ACTIONS(562), 1,
      aux_sym_name_token2,
    STATE(130), 1,
      aux_sym_name_repeat1,
    ACTIONS(559), 3,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
    ACTIONS(215), 13,
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
  [6270] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_SLASH,
    STATE(120), 1,
      aux_sym_name_repeat1,
    ACTIONS(565), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(567), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(225), 13,
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
  [6303] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_accumType_token2,
    ACTIONS(19), 1,
      aux_sym_accumType_token3,
    ACTIONS(21), 1,
      aux_sym_accumType_token4,
    ACTIONS(49), 1,
      aux_sym_baseType_token3,
    ACTIONS(545), 1,
      anon_sym_LT,
    ACTIONS(549), 1,
      anon_sym_FILE,
    ACTIONS(569), 1,
      anon_sym_RPAREN,
    STATE(368), 1,
      sym_parameterType,
    STATE(573), 1,
      sym_baseType,
    STATE(704), 1,
      sym_parameterList,
    ACTIONS(547), 2,
      anon_sym_SET,
      anon_sym_BAG,
    ACTIONS(23), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [6350] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_SLASH,
    STATE(133), 1,
      aux_sym_name_repeat1,
    ACTIONS(571), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(574), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(215), 13,
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
  [6383] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_accumType_token2,
    ACTIONS(19), 1,
      aux_sym_accumType_token3,
    ACTIONS(21), 1,
      aux_sym_accumType_token4,
    ACTIONS(49), 1,
      aux_sym_baseType_token3,
    ACTIONS(545), 1,
      anon_sym_LT,
    ACTIONS(549), 1,
      anon_sym_FILE,
    ACTIONS(577), 1,
      anon_sym_RPAREN,
    STATE(368), 1,
      sym_parameterType,
    STATE(573), 1,
      sym_baseType,
    STATE(853), 1,
      sym_parameterList,
    ACTIONS(547), 2,
      anon_sym_SET,
      anon_sym_BAG,
    ACTIONS(23), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [6430] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_accumType_token2,
    ACTIONS(19), 1,
      aux_sym_accumType_token3,
    ACTIONS(21), 1,
      aux_sym_accumType_token4,
    ACTIONS(49), 1,
      aux_sym_baseType_token3,
    ACTIONS(545), 1,
      anon_sym_LT,
    ACTIONS(549), 1,
      anon_sym_FILE,
    ACTIONS(579), 1,
      anon_sym_RPAREN,
    STATE(368), 1,
      sym_parameterType,
    STATE(573), 1,
      sym_baseType,
    STATE(817), 1,
      sym_parameterList,
    ACTIONS(547), 2,
      anon_sym_SET,
      anon_sym_BAG,
    ACTIONS(23), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [6477] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_SLASH,
    STATE(126), 1,
      aux_sym_name_repeat1,
    ACTIONS(581), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(583), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(225), 13,
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
  [6510] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      aux_sym_accumType_token2,
    ACTIONS(280), 1,
      aux_sym_accumType_token3,
    ACTIONS(282), 1,
      aux_sym_accumType_token4,
    ACTIONS(292), 1,
      aux_sym_baseType_token3,
    ACTIONS(294), 1,
      anon_sym__,
    ACTIONS(585), 1,
      aux_sym_accumType_token5,
    STATE(230), 1,
      sym_name,
    STATE(848), 1,
      sym_elementType,
    ACTIONS(296), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(690), 2,
      sym_tupleType,
      sym_baseType,
    ACTIONS(290), 6,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [6554] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym__,
    ACTIONS(43), 1,
      aux_sym_printStmt_token1,
    ACTIONS(45), 1,
      aux_sym_returnStmt_token1,
    ACTIONS(587), 1,
      aux_sym_queryBodyIfStmt_token1,
    STATE(145), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(307), 1,
      sym_name,
    STATE(673), 1,
      sym_vertexSetName,
    STATE(679), 1,
      sym_gsqlSelectClause,
    STATE(783), 1,
      sym_queryBodyStmts,
    STATE(813), 1,
      sym_queryBodyStmt,
    STATE(868), 1,
      sym_gsqlSelectBlock,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(869), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [6602] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(41), 1,
      anon_sym__,
    ACTIONS(43), 1,
      aux_sym_printStmt_token1,
    ACTIONS(45), 1,
      aux_sym_returnStmt_token1,
    ACTIONS(496), 1,
      anon_sym_RBRACE,
    STATE(143), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(307), 1,
      sym_name,
    STATE(673), 1,
      sym_vertexSetName,
    STATE(679), 1,
      sym_gsqlSelectClause,
    STATE(868), 1,
      sym_gsqlSelectBlock,
    STATE(871), 1,
      sym_queryBodyStmt,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(869), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [6650] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym__,
    ACTIONS(278), 1,
      aux_sym_accumType_token2,
    ACTIONS(280), 1,
      aux_sym_accumType_token3,
    ACTIONS(282), 1,
      aux_sym_accumType_token4,
    ACTIONS(292), 1,
      aux_sym_baseType_token3,
    ACTIONS(585), 1,
      aux_sym_accumType_token5,
    STATE(230), 1,
      sym_name,
    STATE(846), 1,
      sym_elementType,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(690), 2,
      sym_tupleType,
      sym_baseType,
    ACTIONS(290), 6,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [6694] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(41), 1,
      anon_sym__,
    ACTIONS(43), 1,
      aux_sym_printStmt_token1,
    ACTIONS(45), 1,
      aux_sym_returnStmt_token1,
    STATE(119), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(307), 1,
      sym_name,
    STATE(645), 1,
      sym_queryBodyStmts,
    STATE(673), 1,
      sym_vertexSetName,
    STATE(679), 1,
      sym_gsqlSelectClause,
    STATE(799), 1,
      sym_queryBodyStmt,
    STATE(868), 1,
      sym_gsqlSelectBlock,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(869), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [6742] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(41), 1,
      anon_sym__,
    ACTIONS(43), 1,
      aux_sym_printStmt_token1,
    ACTIONS(45), 1,
      aux_sym_returnStmt_token1,
    STATE(139), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(307), 1,
      sym_name,
    STATE(673), 1,
      sym_vertexSetName,
    STATE(679), 1,
      sym_gsqlSelectClause,
    STATE(856), 1,
      sym_queryBodyStmts,
    STATE(868), 1,
      sym_gsqlSelectBlock,
    STATE(871), 1,
      sym_queryBodyStmt,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(869), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [6790] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(519), 1,
      anon_sym_RBRACE,
    ACTIONS(521), 1,
      anon_sym__,
    ACTIONS(524), 1,
      aux_sym_printStmt_token1,
    ACTIONS(527), 1,
      aux_sym_returnStmt_token1,
    STATE(143), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(307), 1,
      sym_name,
    STATE(673), 1,
      sym_vertexSetName,
    STATE(679), 1,
      sym_gsqlSelectClause,
    STATE(868), 1,
      sym_gsqlSelectBlock,
    STATE(871), 1,
      sym_queryBodyStmt,
    ACTIONS(530), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(869), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [6838] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(41), 1,
      anon_sym__,
    ACTIONS(43), 1,
      aux_sym_printStmt_token1,
    ACTIONS(45), 1,
      aux_sym_returnStmt_token1,
    STATE(139), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(307), 1,
      sym_name,
    STATE(673), 1,
      sym_vertexSetName,
    STATE(679), 1,
      sym_gsqlSelectClause,
    STATE(841), 1,
      sym_queryBodyStmts,
    STATE(868), 1,
      sym_gsqlSelectBlock,
    STATE(871), 1,
      sym_queryBodyStmt,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(869), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [6886] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(41), 1,
      anon_sym__,
    ACTIONS(43), 1,
      aux_sym_printStmt_token1,
    ACTIONS(45), 1,
      aux_sym_returnStmt_token1,
    ACTIONS(496), 1,
      aux_sym_queryBodyIfStmt_token4,
    STATE(150), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(307), 1,
      sym_name,
    STATE(673), 1,
      sym_vertexSetName,
    STATE(679), 1,
      sym_gsqlSelectClause,
    STATE(813), 1,
      sym_queryBodyStmt,
    STATE(868), 1,
      sym_gsqlSelectBlock,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(869), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [6934] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_accumType_token2,
    ACTIONS(19), 1,
      aux_sym_accumType_token3,
    ACTIONS(21), 1,
      aux_sym_accumType_token4,
    ACTIONS(49), 1,
      aux_sym_baseType_token3,
    ACTIONS(589), 1,
      anon_sym__,
    STATE(162), 1,
      sym_name,
    STATE(219), 1,
      sym_fieldName,
    STATE(465), 1,
      sym_baseType,
    STATE(829), 1,
      sym_tupleFields,
    ACTIONS(591), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(23), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [6978] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_LPAREN,
    ACTIONS(595), 1,
      anon_sym_LT,
    ACTIONS(597), 1,
      anon_sym_AT_AT,
    ACTIONS(599), 1,
      anon_sym__,
    ACTIONS(601), 1,
      aux_sym_seed_token1,
    ACTIONS(603), 1,
      anon_sym_COLON,
    STATE(416), 1,
      sym_edgeSetType,
    STATE(485), 1,
      sym_name,
    STATE(611), 1,
      sym_atomicEdgeType,
    STATE(662), 1,
      sym_atomicEdgePattern,
    STATE(665), 1,
      sym_stepEdgeTypes,
    STATE(764), 1,
      sym_pathEdgePattern,
    STATE(779), 1,
      sym_stepEdgeSet,
    ACTIONS(296), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(493), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_edgeType,
  [7030] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(41), 1,
      anon_sym__,
    ACTIONS(43), 1,
      aux_sym_printStmt_token1,
    ACTIONS(45), 1,
      aux_sym_returnStmt_token1,
    STATE(119), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(307), 1,
      sym_name,
    STATE(619), 1,
      sym_queryBodyStmts,
    STATE(673), 1,
      sym_vertexSetName,
    STATE(679), 1,
      sym_gsqlSelectClause,
    STATE(799), 1,
      sym_queryBodyStmt,
    STATE(868), 1,
      sym_gsqlSelectBlock,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(869), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [7078] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_LPAREN,
    ACTIONS(595), 1,
      anon_sym_LT,
    ACTIONS(597), 1,
      anon_sym_AT_AT,
    ACTIONS(599), 1,
      anon_sym__,
    ACTIONS(601), 1,
      aux_sym_seed_token1,
    ACTIONS(603), 1,
      anon_sym_COLON,
    STATE(485), 1,
      sym_name,
    STATE(611), 1,
      sym_atomicEdgeType,
    STATE(615), 1,
      sym_edgeSetType,
    STATE(662), 1,
      sym_atomicEdgePattern,
    STATE(665), 1,
      sym_stepEdgeTypes,
    STATE(779), 1,
      sym_stepEdgeSet,
    STATE(780), 1,
      sym_pathEdgePattern,
    ACTIONS(296), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(493), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_edgeType,
  [7130] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(519), 1,
      aux_sym_queryBodyIfStmt_token4,
    ACTIONS(521), 1,
      anon_sym__,
    ACTIONS(524), 1,
      aux_sym_printStmt_token1,
    ACTIONS(527), 1,
      aux_sym_returnStmt_token1,
    STATE(150), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(307), 1,
      sym_name,
    STATE(673), 1,
      sym_vertexSetName,
    STATE(679), 1,
      sym_gsqlSelectClause,
    STATE(813), 1,
      sym_queryBodyStmt,
    STATE(868), 1,
      sym_gsqlSelectBlock,
    ACTIONS(530), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(869), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [7178] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym__,
    ACTIONS(43), 1,
      aux_sym_printStmt_token1,
    ACTIONS(45), 1,
      aux_sym_returnStmt_token1,
    ACTIONS(587), 1,
      aux_sym_queryBodyIfStmt_token1,
    STATE(145), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(307), 1,
      sym_name,
    STATE(673), 1,
      sym_vertexSetName,
    STATE(679), 1,
      sym_gsqlSelectClause,
    STATE(767), 1,
      sym_queryBodyStmts,
    STATE(813), 1,
      sym_queryBodyStmt,
    STATE(868), 1,
      sym_gsqlSelectBlock,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(869), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [7226] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(41), 1,
      anon_sym__,
    ACTIONS(43), 1,
      aux_sym_printStmt_token1,
    ACTIONS(45), 1,
      aux_sym_returnStmt_token1,
    STATE(119), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(307), 1,
      sym_name,
    STATE(594), 1,
      sym_queryBodyStmts,
    STATE(673), 1,
      sym_vertexSetName,
    STATE(679), 1,
      sym_gsqlSelectClause,
    STATE(799), 1,
      sym_queryBodyStmt,
    STATE(868), 1,
      sym_gsqlSelectBlock,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(869), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [7274] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_accumType_token2,
    ACTIONS(19), 1,
      aux_sym_accumType_token3,
    ACTIONS(21), 1,
      aux_sym_accumType_token4,
    ACTIONS(49), 1,
      aux_sym_baseType_token3,
    ACTIONS(589), 1,
      anon_sym__,
    STATE(162), 1,
      sym_name,
    STATE(217), 1,
      sym_fieldName,
    STATE(430), 1,
      sym_baseType,
    ACTIONS(591), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(23), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [7315] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_accumType_token2,
    ACTIONS(19), 1,
      aux_sym_accumType_token3,
    ACTIONS(21), 1,
      aux_sym_accumType_token4,
    ACTIONS(49), 1,
      aux_sym_baseType_token3,
    ACTIONS(545), 1,
      anon_sym_LT,
    ACTIONS(549), 1,
      anon_sym_FILE,
    STATE(358), 1,
      sym_parameterType,
    STATE(573), 1,
      sym_baseType,
    ACTIONS(547), 2,
      anon_sym_SET,
      anon_sym_BAG,
    ACTIONS(23), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [7356] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_SLASH,
    ACTIONS(605), 1,
      anon_sym_DOT,
    ACTIONS(178), 14,
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
  [7382] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(156), 1,
      aux_sym_name_repeat1,
    ACTIONS(607), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(610), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(215), 11,
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
      aux_sym_baseType_token7,
  [7410] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(615), 1,
      anon_sym_AT_AT,
    ACTIONS(617), 1,
      anon_sym__,
    ACTIONS(619), 1,
      aux_sym_seed_token1,
    ACTIONS(621), 1,
      anon_sym_COLON,
    STATE(291), 1,
      sym_name,
    STATE(320), 1,
      sym_atomicVertexType,
    STATE(321), 1,
      sym_stepVertexTypes,
    STATE(330), 1,
      sym_stepVertexSet,
    STATE(338), 1,
      sym_vertexSetType,
    STATE(410), 1,
      sym_pathPattern,
    ACTIONS(623), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(299), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexType,
  [7456] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_SLASH,
    STATE(97), 1,
      sym_mathOperator,
    ACTIONS(360), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
    ACTIONS(364), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7484] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_SLASH,
    ACTIONS(627), 1,
      aux_sym_printExpr_token1,
    ACTIONS(629), 1,
      anon_sym_LBRACK,
    STATE(97), 1,
      sym_mathOperator,
    ACTIONS(625), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
    ACTIONS(332), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7516] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(161), 1,
      aux_sym_name_repeat1,
    ACTIONS(631), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(633), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(192), 11,
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
      aux_sym_baseType_token7,
  [7544] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(156), 1,
      aux_sym_name_repeat1,
    ACTIONS(635), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(637), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(225), 11,
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
      aux_sym_baseType_token7,
  [7572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 16,
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
      aux_sym_baseType_token7,
  [7594] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_SLASH,
    ACTIONS(605), 1,
      anon_sym_DOT,
    ACTIONS(641), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
    ACTIONS(178), 10,
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
  [7622] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(615), 1,
      anon_sym_AT_AT,
    ACTIONS(617), 1,
      anon_sym__,
    ACTIONS(619), 1,
      aux_sym_seed_token1,
    ACTIONS(621), 1,
      anon_sym_COLON,
    STATE(291), 1,
      sym_name,
    STATE(320), 1,
      sym_atomicVertexType,
    STATE(321), 1,
      sym_stepVertexTypes,
    STATE(330), 1,
      sym_stepVertexSet,
    STATE(338), 1,
      sym_vertexSetType,
    STATE(536), 1,
      sym_pathPattern,
    ACTIONS(623), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(299), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexType,
  [7668] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      ts_builtin_sym_end,
    ACTIONS(647), 1,
      aux_sym_createSignature_token1,
    ACTIONS(650), 1,
      aux_sym_DROP_token1,
    ACTIONS(653), 1,
      aux_sym_ADD_INDEX_token1,
    STATE(895), 1,
      sym_createSignature,
    STATE(165), 10,
      sym_createQuery,
      sym_CREATE_VERTEX,
      sym_CREATE_UNDIRECTED_EDGE,
      sym_CREATE_DIRECTED_EDGE,
      sym_CREATE_GRAPH,
      sym_DROP,
      sym_ADD_INDEX,
      sym_DROP_INDEX,
      sym_create_loading_job,
      aux_sym_source_file_repeat1,
  [7699] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(615), 1,
      anon_sym_AT_AT,
    ACTIONS(617), 1,
      anon_sym__,
    ACTIONS(619), 1,
      aux_sym_seed_token1,
    ACTIONS(621), 1,
      anon_sym_COLON,
    STATE(291), 1,
      sym_name,
    STATE(320), 1,
      sym_atomicVertexType,
    STATE(321), 1,
      sym_stepVertexTypes,
    STATE(338), 1,
      sym_vertexSetType,
    STATE(471), 1,
      sym_stepVertexSet,
    ACTIONS(623), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(299), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexType,
  [7742] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      aux_sym_createSignature_token1,
    ACTIONS(7), 1,
      aux_sym_DROP_token1,
    ACTIONS(9), 1,
      aux_sym_ADD_INDEX_token1,
    ACTIONS(656), 1,
      ts_builtin_sym_end,
    STATE(895), 1,
      sym_createSignature,
    STATE(165), 10,
      sym_createQuery,
      sym_CREATE_VERTEX,
      sym_CREATE_UNDIRECTED_EDGE,
      sym_CREATE_DIRECTED_EDGE,
      sym_CREATE_GRAPH,
      sym_DROP,
      sym_ADD_INDEX,
      sym_DROP_INDEX,
      sym_create_loading_job,
      aux_sym_source_file_repeat1,
  [7773] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_SLASH,
    STATE(94), 1,
      sym_mathOperator,
    ACTIONS(658), 4,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_perClauseV2_token1,
    ACTIONS(332), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7799] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_SLASH,
    ACTIONS(660), 1,
      anon_sym_DOT,
    ACTIONS(178), 12,
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
  [7823] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_SLASH,
    STATE(99), 1,
      sym_mathOperator,
    ACTIONS(360), 4,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_printStmt_token3,
    ACTIONS(364), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7849] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_SLASH,
    STATE(94), 1,
      sym_mathOperator,
    ACTIONS(360), 4,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_perClauseV2_token1,
    ACTIONS(364), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7875] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_SLASH,
    ACTIONS(662), 1,
      anon_sym_DOT,
    ACTIONS(178), 12,
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
  [7899] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_SLASH,
    STATE(99), 1,
      sym_mathOperator,
    ACTIONS(658), 4,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_printStmt_token3,
    ACTIONS(332), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7925] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_SLASH,
    ACTIONS(666), 1,
      aux_sym_printExpr_token1,
    STATE(107), 1,
      sym_mathOperator,
    ACTIONS(664), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(332), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7952] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_SLASH,
    ACTIONS(668), 1,
      anon_sym_DOT,
    ACTIONS(178), 11,
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
  [7975] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_SLASH,
    STATE(109), 1,
      sym_mathOperator,
    ACTIONS(670), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
    ACTIONS(332), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [8000] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_AT,
    ACTIONS(672), 12,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AT_AT,
      aux_sym_CREATE_VERTEX_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
      aux_sym_ADD_INDEX_token2,
      aux_sym_ADD_INDEX_token4,
  [8021] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_SLASH,
    STATE(101), 1,
      sym_mathOperator,
    ACTIONS(658), 3,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_queryBodyIfStmt_token2,
    ACTIONS(332), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [8046] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_SLASH,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(178), 11,
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
  [8069] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_SLASH,
    STATE(104), 1,
      sym_mathOperator,
    ACTIONS(360), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(364), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [8094] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_SLASH,
    ACTIONS(678), 1,
      anon_sym_RPAREN,
    ACTIONS(680), 1,
      anon_sym_COMMA,
    STATE(104), 1,
      sym_mathOperator,
    STATE(629), 1,
      aux_sym_argList_repeat1,
    ACTIONS(332), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [8123] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_SLASH,
    ACTIONS(682), 1,
      anon_sym_DOT,
    ACTIONS(178), 11,
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
  [8146] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_SLASH,
    ACTIONS(684), 1,
      anon_sym_DOT,
    ACTIONS(178), 11,
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
  [8169] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      anon_sym_AT,
    ACTIONS(686), 12,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AT_AT,
      aux_sym_CREATE_VERTEX_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
      aux_sym_ADD_INDEX_token2,
      aux_sym_ADD_INDEX_token4,
  [8190] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_SLASH,
    ACTIONS(690), 1,
      anon_sym_DOT,
    ACTIONS(178), 11,
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
  [8213] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_AT,
    ACTIONS(692), 12,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AT_AT,
      aux_sym_CREATE_VERTEX_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
      aux_sym_ADD_INDEX_token2,
      aux_sym_ADD_INDEX_token4,
  [8234] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_SLASH,
    STATE(100), 1,
      sym_mathOperator,
    ACTIONS(658), 3,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
    ACTIONS(332), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [8259] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_AT,
    ACTIONS(696), 12,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AT_AT,
      aux_sym_CREATE_VERTEX_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
      aux_sym_ADD_INDEX_token2,
      aux_sym_ADD_INDEX_token4,
  [8280] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_AT,
    ACTIONS(700), 12,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AT_AT,
      aux_sym_CREATE_VERTEX_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
      aux_sym_ADD_INDEX_token2,
      aux_sym_ADD_INDEX_token4,
  [8301] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      anon_sym_AT,
    ACTIONS(704), 12,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AT_AT,
      aux_sym_CREATE_VERTEX_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
      aux_sym_ADD_INDEX_token2,
      aux_sym_ADD_INDEX_token4,
  [8322] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_AT_AT,
    ACTIONS(708), 1,
      anon_sym_RBRACE,
    ACTIONS(710), 1,
      anon_sym__,
    ACTIONS(712), 1,
      aux_sym_seed_token1,
    ACTIONS(714), 1,
      aux_sym_seed_token2,
    STATE(608), 1,
      sym_name,
    STATE(612), 1,
      sym_seed,
    STATE(820), 1,
      sym_vertexType,
    ACTIONS(296), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(659), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexSetName,
  [8359] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_SLASH,
    STATE(100), 1,
      sym_mathOperator,
    ACTIONS(360), 3,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
    ACTIONS(364), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [8384] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_SLASH,
    STATE(109), 1,
      sym_mathOperator,
    ACTIONS(716), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
    ACTIONS(332), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [8409] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_SLASH,
    STATE(109), 1,
      sym_mathOperator,
    ACTIONS(718), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
    ACTIONS(332), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [8434] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_SLASH,
    STATE(109), 1,
      sym_mathOperator,
    ACTIONS(360), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
    ACTIONS(364), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [8459] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_SLASH,
    STATE(107), 1,
      sym_mathOperator,
    ACTIONS(360), 3,
      anon_sym_COMMA,
      aux_sym_printExpr_token1,
      anon_sym_RBRACK,
    ACTIONS(364), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [8484] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_AT,
    ACTIONS(720), 12,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AT_AT,
      aux_sym_CREATE_VERTEX_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
      aux_sym_ADD_INDEX_token2,
      aux_sym_ADD_INDEX_token4,
  [8505] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_SLASH,
    STATE(101), 1,
      sym_mathOperator,
    ACTIONS(360), 3,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_queryBodyIfStmt_token2,
    ACTIONS(364), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [8530] = 10,
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
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(637), 1,
      sym_constant,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(20), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(24), 2,
      sym_integer,
      sym_real,
  [8564] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_LT,
    ACTIONS(724), 11,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
      aux_sym_ADD_INDEX_token2,
      aux_sym_ADD_INDEX_token4,
  [8584] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(214), 1,
      aux_sym_name_repeat1,
    ACTIONS(728), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(730), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(225), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [8608] = 10,
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
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(641), 1,
      sym_constant,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(20), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(24), 2,
      sym_integer,
      sym_real,
  [8642] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_SLASH,
    STATE(104), 1,
      sym_mathOperator,
    ACTIONS(732), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(332), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [8666] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      aux_sym_accumType_token2,
    ACTIONS(280), 1,
      aux_sym_accumType_token3,
    ACTIONS(282), 1,
      aux_sym_accumType_token4,
    ACTIONS(292), 1,
      aux_sym_baseType_token3,
    STATE(833), 1,
      sym_baseType,
    ACTIONS(290), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [8694] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_LBRACE,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(738), 1,
      anon_sym__,
    ACTIONS(740), 1,
      aux_sym_gsqlSelectClause_token1,
    STATE(307), 1,
      sym_name,
    STATE(426), 1,
      sym_vertexSetName,
    STATE(516), 1,
      sym_simpleSet,
    STATE(679), 1,
      sym_gsqlSelectClause,
    ACTIONS(742), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(838), 2,
      sym_seedSet,
      sym_gsqlSelectBlock,
  [8730] = 10,
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
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(626), 1,
      sym_constant,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(20), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(24), 2,
      sym_integer,
      sym_real,
  [8764] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_SLASH,
    STATE(104), 1,
      sym_mathOperator,
    ACTIONS(744), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(332), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [8788] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(208), 1,
      aux_sym_name_repeat1,
    ACTIONS(746), 4,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(215), 7,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_DOT_STAR,
      anon_sym_COLON,
  [8810] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_SLASH,
    STATE(104), 1,
      sym_mathOperator,
    ACTIONS(749), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(332), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [8834] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_AT_AT,
    ACTIONS(710), 1,
      anon_sym__,
    ACTIONS(712), 1,
      aux_sym_seed_token1,
    ACTIONS(714), 1,
      aux_sym_seed_token2,
    STATE(608), 1,
      sym_name,
    STATE(671), 1,
      sym_seed,
    STATE(820), 1,
      sym_vertexType,
    ACTIONS(296), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(659), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexSetName,
  [8868] = 10,
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
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(674), 1,
      sym_constant,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(20), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(24), 2,
      sym_integer,
      sym_real,
  [8902] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(216), 1,
      aux_sym_name_repeat1,
    ACTIONS(751), 4,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(192), 7,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_DOT_STAR,
      anon_sym_COLON,
  [8924] = 10,
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
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(681), 1,
      sym_constant,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(20), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(24), 2,
      sym_integer,
      sym_real,
  [8958] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(214), 1,
      aux_sym_name_repeat1,
    ACTIONS(753), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(756), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(215), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [8982] = 10,
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
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(602), 1,
      sym_constant,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(20), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(24), 2,
      sym_integer,
      sym_real,
  [9016] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(208), 1,
      aux_sym_name_repeat1,
    ACTIONS(759), 4,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(225), 7,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_DOT_STAR,
      anon_sym_COLON,
  [9038] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      aux_sym_accumType_token2,
    ACTIONS(280), 1,
      aux_sym_accumType_token3,
    ACTIONS(282), 1,
      aux_sym_accumType_token4,
    ACTIONS(292), 1,
      aux_sym_baseType_token3,
    STATE(691), 1,
      sym_baseType,
    ACTIONS(290), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [9066] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(201), 1,
      aux_sym_name_repeat1,
    ACTIONS(761), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(763), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(192), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [9090] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      aux_sym_accumType_token2,
    ACTIONS(280), 1,
      aux_sym_accumType_token3,
    ACTIONS(282), 1,
      aux_sym_accumType_token4,
    ACTIONS(292), 1,
      aux_sym_baseType_token3,
    STATE(559), 1,
      sym_baseType,
    ACTIONS(290), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [9118] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      aux_sym_accumType_token2,
    ACTIONS(280), 1,
      aux_sym_accumType_token3,
    ACTIONS(282), 1,
      aux_sym_accumType_token4,
    ACTIONS(292), 1,
      aux_sym_baseType_token3,
    STATE(811), 1,
      sym_baseType,
    ACTIONS(290), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [9146] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      aux_sym_elementType_token1,
    ACTIONS(724), 11,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
      aux_sym_ADD_INDEX_token2,
      aux_sym_ADD_INDEX_token4,
  [9166] = 10,
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
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(562), 1,
      sym_constant,
    ACTIONS(312), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(20), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(24), 2,
      sym_integer,
      sym_real,
  [9200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 11,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
      aux_sym_ADD_INDEX_token2,
      aux_sym_ADD_INDEX_token4,
  [9217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 11,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
      aux_sym_ADD_INDEX_token2,
      aux_sym_ADD_INDEX_token4,
  [9234] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(239), 1,
      aux_sym_name_repeat1,
    ACTIONS(771), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(773), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(192), 6,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [9257] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 1,
      anon_sym_DASH,
    ACTIONS(777), 1,
      aux_sym_integer_token1,
    STATE(638), 1,
      aux_sym_integer_repeat1,
    STATE(785), 1,
      sym_name,
    STATE(787), 1,
      sym_simpleSize,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(786), 3,
      sym_integer,
      sym_paramName,
      sym_varName,
  [9286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 11,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
      aux_sym_ADD_INDEX_token2,
      aux_sym_ADD_INDEX_token4,
  [9303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 11,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
      aux_sym_ADD_INDEX_token2,
      aux_sym_ADD_INDEX_token4,
  [9320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 11,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
      aux_sym_ADD_INDEX_token2,
      aux_sym_ADD_INDEX_token4,
  [9337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 11,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
      aux_sym_ADD_INDEX_token2,
      aux_sym_ADD_INDEX_token4,
  [9354] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(201), 1,
      aux_sym_name_repeat1,
    ACTIONS(761), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(763), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(785), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [9377] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(788), 9,
      anon_sym_LPAREN,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      anon_sym_DASH,
      anon_sym_AT_AT,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_DQUOTE,
      aux_sym_integer_token1,
  [9396] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_LBRACE,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    STATE(307), 1,
      sym_name,
    STATE(426), 1,
      sym_vertexSetName,
    STATE(489), 1,
      sym_simpleSet,
    STATE(679), 1,
      sym_gsqlSelectClause,
    STATE(778), 2,
      sym_seedSet,
      sym_gsqlSelectBlock,
    ACTIONS(738), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9427] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 11,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
      aux_sym_ADD_INDEX_token2,
      aux_sym_ADD_INDEX_token4,
  [9444] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_AT_AT,
    ACTIONS(601), 1,
      aux_sym_seed_token1,
    ACTIONS(794), 1,
      anon_sym__,
    STATE(485), 1,
      sym_name,
    STATE(615), 1,
      sym_edgeSetType,
    STATE(655), 1,
      sym_atomicEdgeType,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(493), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_edgeType,
  [9475] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(236), 1,
      aux_sym_name_repeat1,
    ACTIONS(796), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(799), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(215), 6,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [9498] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_SLASH,
    ACTIONS(802), 1,
      anon_sym_SEMI,
    STATE(104), 1,
      sym_mathOperator,
    ACTIONS(332), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [9521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 11,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
      aux_sym_ADD_INDEX_token2,
      aux_sym_ADD_INDEX_token4,
  [9538] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(236), 1,
      aux_sym_name_repeat1,
    ACTIONS(806), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(808), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(225), 6,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [9561] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(810), 9,
      anon_sym_LPAREN,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      anon_sym_DASH,
      anon_sym_AT_AT,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_DQUOTE,
      aux_sym_integer_token1,
  [9580] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(243), 1,
      aux_sym_name_repeat1,
    ACTIONS(814), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(816), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(225), 5,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      anon_sym_SEMI,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [9602] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(241), 1,
      aux_sym_name_repeat1,
    ACTIONS(818), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(820), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(192), 5,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      anon_sym_SEMI,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [9624] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(243), 1,
      aux_sym_name_repeat1,
    ACTIONS(822), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(825), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(215), 5,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      anon_sym_SEMI,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [9646] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_AT_AT,
    STATE(535), 1,
      sym_dmlSubStmt,
    STATE(682), 1,
      sym_dmlSubStmtList,
    STATE(683), 1,
      sym_name,
    STATE(769), 1,
      sym_globalAccumName,
    STATE(574), 2,
      sym_gAccumAccumStmt,
      sym_assignStmt,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9674] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_AT_AT,
    STATE(535), 1,
      sym_dmlSubStmt,
    STATE(683), 1,
      sym_name,
    STATE(684), 1,
      sym_dmlSubStmtList,
    STATE(769), 1,
      sym_globalAccumName,
    STATE(574), 2,
      sym_gAccumAccumStmt,
      sym_assignStmt,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9702] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(246), 1,
      aux_sym_name_repeat1,
    ACTIONS(828), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(831), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(215), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
  [9723] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    STATE(825), 1,
      sym_name,
    STATE(622), 2,
      sym_stringLiteral,
      sym_paramName,
    STATE(826), 2,
      sym_fileVar,
      sym_filePath,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9746] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      aux_sym_name_token2,
    STATE(248), 1,
      aux_sym_name_repeat1,
    ACTIONS(834), 3,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
    ACTIONS(215), 4,
      anon_sym_LBRACE,
      anon_sym_API,
      anon_sym_SYNTAX,
      anon_sym_RETURNS,
  [9767] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(250), 1,
      aux_sym_name_repeat1,
    ACTIONS(840), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(842), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(192), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_accumType_token11,
      aux_sym_accumType_token12,
  [9788] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(253), 1,
      aux_sym_name_repeat1,
    ACTIONS(844), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(846), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(225), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_accumType_token11,
      aux_sym_accumType_token12,
  [9809] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_AT_AT,
    STATE(552), 1,
      sym_dmlSubStmt,
    STATE(683), 1,
      sym_name,
    STATE(769), 1,
      sym_globalAccumName,
    STATE(574), 2,
      sym_gAccumAccumStmt,
      sym_assignStmt,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9834] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      aux_sym_name_token2,
    STATE(248), 1,
      aux_sym_name_repeat1,
    ACTIONS(848), 3,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
    ACTIONS(225), 4,
      anon_sym_LBRACE,
      anon_sym_API,
      anon_sym_SYNTAX,
      anon_sym_RETURNS,
  [9855] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(253), 1,
      aux_sym_name_repeat1,
    ACTIONS(852), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(855), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(215), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_accumType_token11,
      aux_sym_accumType_token12,
  [9876] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    STATE(825), 1,
      sym_name,
    STATE(622), 2,
      sym_stringLiteral,
      sym_paramName,
    STATE(765), 2,
      sym_fileVar,
      sym_filePath,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9899] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(246), 1,
      aux_sym_name_repeat1,
    ACTIONS(858), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(860), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(225), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
  [9920] = 2,
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
  [9935] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_AT_AT,
    STATE(291), 1,
      sym_name,
    STATE(295), 1,
      sym_vertexSetType,
    ACTIONS(862), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(299), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexType,
  [9958] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    STATE(825), 1,
      sym_name,
    STATE(622), 2,
      sym_stringLiteral,
      sym_paramName,
    STATE(801), 2,
      sym_fileVar,
      sym_filePath,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9981] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    STATE(825), 1,
      sym_name,
    STATE(622), 2,
      sym_stringLiteral,
      sym_paramName,
    STATE(781), 2,
      sym_fileVar,
      sym_filePath,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 9,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [10019] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      aux_sym_name_token2,
    STATE(252), 1,
      aux_sym_name_repeat1,
    ACTIONS(864), 3,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
    ACTIONS(192), 4,
      anon_sym_LBRACE,
      anon_sym_API,
      anon_sym_SYNTAX,
      anon_sym_RETURNS,
  [10040] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_AT_AT,
    STATE(280), 1,
      sym_vertexSetType,
    STATE(291), 1,
      sym_name,
    ACTIONS(862), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(299), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexType,
  [10063] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_AT_AT,
    STATE(485), 1,
      sym_name,
    STATE(596), 1,
      sym_edgeSetType,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(493), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_edgeType,
  [10086] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(255), 1,
      aux_sym_name_repeat1,
    ACTIONS(868), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(870), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(192), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
  [10107] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_PIPE,
    STATE(216), 1,
      aux_sym_name_repeat1,
    ACTIONS(872), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COLON,
    ACTIONS(751), 4,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10128] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym_accumType_token1,
    ACTIONS(25), 1,
      aux_sym_accumType_token7,
    ACTIONS(27), 1,
      aux_sym_accumType_token8,
    ACTIONS(29), 1,
      aux_sym_accumType_token9,
    ACTIONS(31), 1,
      aux_sym_accumType_token10,
    ACTIONS(33), 1,
      aux_sym_accumType_token13,
    ACTIONS(35), 1,
      aux_sym_accumType_token14,
    STATE(657), 1,
      sym_accumType,
  [10156] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(279), 1,
      aux_sym_name_repeat1,
    ACTIONS(875), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(877), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(192), 3,
      anon_sym_RBRACE,
      anon_sym_EQ,
      aux_sym_define_statement_token1,
  [10176] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(269), 1,
      aux_sym_name_repeat1,
    ACTIONS(879), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(881), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(225), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_CREATE_VERTEX_token1,
  [10196] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(269), 1,
      aux_sym_name_repeat1,
    ACTIONS(883), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(886), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(215), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_CREATE_VERTEX_token1,
  [10216] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(456), 1,
      anon_sym_AT_AT,
    STATE(292), 1,
      sym_setBagExpr,
    STATE(305), 1,
      sym_globalAccumName,
    STATE(385), 1,
      sym_name,
    ACTIONS(458), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10240] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(519), 6,
      aux_sym_queryBodyIfStmt_token1,
      aux_sym_queryBodyIfStmt_token3,
      aux_sym_queryBodyIfStmt_token4,
      anon_sym__,
      aux_sym_printStmt_token1,
      aux_sym_returnStmt_token1,
  [10256] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(456), 1,
      anon_sym_AT_AT,
    STATE(296), 1,
      sym_setBagExpr,
    STATE(305), 1,
      sym_globalAccumName,
    STATE(385), 1,
      sym_name,
    ACTIONS(458), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10280] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      anon_sym_SEMI,
    ACTIONS(893), 1,
      anon_sym_WHERE,
    ACTIONS(895), 1,
      aux_sym_perClauseV2_token1,
    STATE(341), 1,
      sym_whereClause,
    STATE(413), 1,
      sym_accumClause,
    STATE(702), 1,
      sym_perClauseV2,
    STATE(419), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [10306] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      anon_sym_PIPE,
    STATE(281), 1,
      aux_sym_stepVertexTypes_repeat1,
    ACTIONS(897), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [10324] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_AT_AT,
    STATE(292), 1,
      sym_setBagExpr,
    STATE(305), 1,
      sym_globalAccumName,
    STATE(381), 1,
      sym_name,
    ACTIONS(446), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10348] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    STATE(582), 1,
      sym_name,
    STATE(777), 1,
      sym_filePath,
    STATE(622), 2,
      sym_stringLiteral,
      sym_paramName,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10370] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    STATE(582), 1,
      sym_name,
    STATE(827), 1,
      sym_filePath,
    STATE(622), 2,
      sym_stringLiteral,
      sym_paramName,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10392] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(438), 1,
      anon_sym_AT_AT,
    STATE(296), 1,
      sym_setBagExpr,
    STATE(305), 1,
      sym_globalAccumName,
    STATE(500), 1,
      sym_name,
    ACTIONS(440), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10416] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(283), 1,
      aux_sym_name_repeat1,
    ACTIONS(901), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(903), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(225), 3,
      anon_sym_RBRACE,
      anon_sym_EQ,
      aux_sym_define_statement_token1,
  [10436] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      anon_sym_PIPE,
    STATE(274), 1,
      aux_sym_stepVertexTypes_repeat1,
    ACTIONS(905), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [10454] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(909), 1,
      anon_sym_PIPE,
    STATE(281), 1,
      aux_sym_stepVertexTypes_repeat1,
    ACTIONS(907), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [10472] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(462), 1,
      anon_sym_AT_AT,
    STATE(292), 1,
      sym_setBagExpr,
    STATE(305), 1,
      sym_globalAccumName,
    STATE(540), 1,
      sym_name,
    ACTIONS(464), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10496] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(283), 1,
      aux_sym_name_repeat1,
    ACTIONS(912), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(915), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(215), 3,
      anon_sym_RBRACE,
      anon_sym_EQ,
      aux_sym_define_statement_token1,
  [10516] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(268), 1,
      aux_sym_name_repeat1,
    ACTIONS(918), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(920), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(192), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_CREATE_VERTEX_token1,
  [10536] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_DOT_STAR,
    STATE(216), 1,
      aux_sym_name_repeat1,
    ACTIONS(922), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(751), 4,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10556] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(438), 1,
      anon_sym_AT_AT,
    STATE(292), 1,
      sym_setBagExpr,
    STATE(305), 1,
      sym_globalAccumName,
    STATE(500), 1,
      sym_name,
    ACTIONS(440), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10580] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_AT_AT,
    STATE(296), 1,
      sym_setBagExpr,
    STATE(305), 1,
      sym_globalAccumName,
    STATE(381), 1,
      sym_name,
    ACTIONS(446), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10604] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(462), 1,
      anon_sym_AT_AT,
    STATE(296), 1,
      sym_setBagExpr,
    STATE(305), 1,
      sym_globalAccumName,
    STATE(540), 1,
      sym_name,
    ACTIONS(464), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10628] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(925), 1,
      aux_sym_createSignature_token2,
    ACTIONS(927), 1,
      aux_sym_createSignature_token4,
    ACTIONS(929), 1,
      anon_sym_QUERY,
    ACTIONS(931), 1,
      aux_sym_baseType_token3,
    ACTIONS(933), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_token1,
    ACTIONS(935), 1,
      aux_sym_CREATE_DIRECTED_EDGE_token1,
    ACTIONS(937), 1,
      aux_sym_CREATE_GRAPH_token1,
    ACTIONS(939), 1,
      aux_sym_create_loading_job_token1,
  [10656] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(301), 1,
      aux_sym_name_repeat1,
    ACTIONS(225), 2,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token2,
    ACTIONS(941), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(943), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10675] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(945), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [10688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 7,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_queryBodyIfStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_perClauseV2_token1,
  [10701] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    STATE(307), 1,
      sym_name,
    STATE(404), 1,
      sym_vertexSetName,
    STATE(527), 1,
      sym_simpleSet,
    ACTIONS(738), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10722] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(948), 1,
      anon_sym_RPAREN,
    ACTIONS(950), 1,
      anon_sym_STAR,
    STATE(346), 2,
      sym_name,
      aux_sym_CREATE_GRAPH_repeat1,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [10754] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(952), 7,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_queryBodyIfStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_perClauseV2_token1,
  [10767] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(42), 1,
      aux_sym_name_repeat1,
    ACTIONS(872), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
    ACTIONS(276), 4,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10784] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(290), 1,
      aux_sym_name_repeat1,
    ACTIONS(192), 2,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token2,
    ACTIONS(954), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(956), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10803] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(958), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [10816] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(687), 1,
      sym_name,
    STATE(701), 1,
      sym_alias,
    STATE(689), 2,
      sym_vertexAlias,
      sym_edgeAlias,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10835] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(301), 1,
      aux_sym_name_repeat1,
    ACTIONS(215), 2,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token2,
    ACTIONS(960), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(963), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10854] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(519), 5,
      anon_sym_RBRACE,
      aux_sym_queryBodyIfStmt_token1,
      anon_sym__,
      aux_sym_printStmt_token1,
      aux_sym_returnStmt_token1,
  [10869] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    STATE(307), 1,
      sym_name,
    STATE(402), 1,
      sym_simpleSet,
    STATE(404), 1,
      sym_vertexSetName,
    ACTIONS(738), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10890] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(519), 5,
      aux_sym_queryBodyIfStmt_token1,
      aux_sym_queryBodyIfStmt_token4,
      anon_sym__,
      aux_sym_printStmt_token1,
      aux_sym_returnStmt_token1,
  [10905] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 7,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_queryBodyIfStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_perClauseV2_token1,
  [10918] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(568), 1,
      sym_alias,
    STATE(687), 1,
      sym_name,
    STATE(689), 2,
      sym_vertexAlias,
      sym_edgeAlias,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(968), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [10950] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(970), 1,
      anon_sym_AT,
    STATE(19), 1,
      sym_localAccumName,
    STATE(26), 1,
      sym_name,
    ACTIONS(464), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10968] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(972), 1,
      anon_sym_AT,
    STATE(19), 1,
      sym_localAccumName,
    STATE(26), 1,
      sym_name,
    ACTIONS(434), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10986] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_token2,
    STATE(313), 1,
      aux_sym_name_repeat1,
    ACTIONS(974), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(976), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11004] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(978), 1,
      anon_sym_AT,
    STATE(25), 2,
      sym_localAccumName,
      sym_name,
    ACTIONS(446), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11020] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(982), 1,
      anon_sym_DASH,
    STATE(349), 1,
      aux_sym_pathPattern_repeat1,
    ACTIONS(980), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [11036] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_token2,
    STATE(315), 1,
      aux_sym_name_repeat1,
    ACTIONS(984), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(986), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11054] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(970), 1,
      anon_sym_AT,
    STATE(25), 2,
      sym_localAccumName,
      sym_name,
    ACTIONS(464), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11070] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_token2,
    STATE(315), 1,
      aux_sym_name_repeat1,
    ACTIONS(988), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(991), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11088] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(994), 1,
      anon_sym_LBRACE,
    ACTIONS(996), 1,
      anon_sym_FOR,
    ACTIONS(998), 1,
      anon_sym_API,
    ACTIONS(1000), 1,
      anon_sym_SYNTAX,
    ACTIONS(1002), 1,
      anon_sym_RETURNS,
    STATE(565), 1,
      sym_returns,
  [11110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1004), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PIPE,
      aux_sym_CREATE_UNDIRECTED_EDGE_token2,
  [11122] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      anon_sym_RETURNS,
    ACTIONS(1006), 1,
      anon_sym_LBRACE,
    ACTIONS(1008), 1,
      anon_sym_FOR,
    ACTIONS(1010), 1,
      anon_sym_API,
    ACTIONS(1012), 1,
      anon_sym_SYNTAX,
    STATE(598), 1,
      sym_returns,
  [11144] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1014), 1,
      anon_sym_AT,
    STATE(19), 1,
      sym_localAccumName,
    STATE(26), 1,
      sym_name,
    ACTIONS(440), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1016), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [11174] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1020), 1,
      anon_sym_COLON,
    ACTIONS(1018), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [11188] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      aux_sym_ADD_INDEX_token4,
    STATE(337), 1,
      aux_sym_name_repeat1,
    ACTIONS(1022), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(1024), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11206] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      anon_sym_RETURNS,
    ACTIONS(1026), 1,
      anon_sym_LBRACE,
    ACTIONS(1028), 1,
      anon_sym_FOR,
    ACTIONS(1030), 1,
      anon_sym_API,
    ACTIONS(1032), 1,
      anon_sym_SYNTAX,
    STATE(553), 1,
      sym_returns,
  [11228] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1034), 1,
      anon_sym_AT,
    STATE(19), 1,
      sym_localAccumName,
    STATE(26), 1,
      sym_name,
    ACTIONS(406), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11246] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      anon_sym_RETURNS,
    ACTIONS(1036), 1,
      anon_sym_LBRACE,
    ACTIONS(1038), 1,
      anon_sym_FOR,
    ACTIONS(1040), 1,
      anon_sym_API,
    ACTIONS(1042), 1,
      anon_sym_SYNTAX,
    STATE(613), 1,
      sym_returns,
  [11268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1044), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      aux_sym_fromClause_token1,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [11280] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1046), 1,
      anon_sym_AT,
    STATE(19), 1,
      sym_localAccumName,
    STATE(26), 1,
      sym_name,
    ACTIONS(428), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11298] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      aux_sym_create_loading_job_token3,
    STATE(332), 1,
      aux_sym_name_repeat1,
    ACTIONS(1048), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(1050), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11316] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      aux_sym_fromClause_token1,
    STATE(329), 1,
      aux_sym_name_repeat1,
    ACTIONS(1052), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(1055), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11334] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(982), 1,
      anon_sym_DASH,
    STATE(312), 1,
      aux_sym_pathPattern_repeat1,
    ACTIONS(1058), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [11350] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1060), 1,
      anon_sym_AT,
    STATE(19), 1,
      sym_localAccumName,
    STATE(26), 1,
      sym_name,
    ACTIONS(452), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11368] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      aux_sym_create_loading_job_token3,
    STATE(336), 1,
      aux_sym_name_repeat1,
    ACTIONS(1062), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(1064), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11386] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1066), 1,
      anon_sym_DOLLAR,
    STATE(738), 2,
      sym_columnId,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11402] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1068), 1,
      anon_sym_AT,
    STATE(25), 2,
      sym_localAccumName,
      sym_name,
    ACTIONS(458), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11418] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1072), 1,
      aux_sym_CREATE_DIRECTED_EDGE_token2,
    STATE(546), 1,
      sym_WITH,
    ACTIONS(1070), 4,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [11434] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      aux_sym_create_loading_job_token3,
    STATE(336), 1,
      aux_sym_name_repeat1,
    ACTIONS(1074), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(1077), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11452] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      aux_sym_ADD_INDEX_token4,
    STATE(337), 1,
      aux_sym_name_repeat1,
    ACTIONS(1080), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(1083), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1086), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [11482] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      aux_sym_fromClause_token1,
    STATE(329), 1,
      aux_sym_name_repeat1,
    ACTIONS(1088), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(1090), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11500] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1092), 1,
      anon_sym_AT,
    STATE(19), 1,
      sym_localAccumName,
    STATE(26), 1,
      sym_name,
    ACTIONS(396), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11518] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      aux_sym_perClauseV2_token1,
    ACTIONS(1094), 1,
      anon_sym_SEMI,
    STATE(423), 1,
      sym_accumClause,
    STATE(702), 1,
      sym_perClauseV2,
    STATE(422), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [11538] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      aux_sym_WITH_token1,
    ACTIONS(1100), 1,
      anon_sym_primary_id_as_attribute,
    ACTIONS(1096), 4,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [11554] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1014), 1,
      anon_sym_AT,
    STATE(25), 2,
      sym_localAccumName,
      sym_name,
    ACTIONS(440), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11570] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1068), 1,
      anon_sym_AT,
    STATE(19), 1,
      sym_localAccumName,
    STATE(26), 1,
      sym_name,
    ACTIONS(458), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11588] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1072), 1,
      aux_sym_CREATE_DIRECTED_EDGE_token2,
    STATE(518), 1,
      sym_WITH,
    ACTIONS(1102), 4,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [11604] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1104), 1,
      anon_sym_RPAREN,
    STATE(355), 2,
      sym_name,
      aux_sym_CREATE_GRAPH_repeat1,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11620] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(978), 1,
      anon_sym_AT,
    STATE(19), 1,
      sym_localAccumName,
    STATE(26), 1,
      sym_name,
    ACTIONS(446), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11638] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      anon_sym_RETURNS,
    ACTIONS(1106), 1,
      anon_sym_LBRACE,
    ACTIONS(1108), 1,
      anon_sym_FOR,
    ACTIONS(1110), 1,
      anon_sym_API,
    ACTIONS(1112), 1,
      anon_sym_SYNTAX,
    STATE(581), 1,
      sym_returns,
  [11660] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1116), 1,
      anon_sym_DASH,
    STATE(349), 1,
      aux_sym_pathPattern_repeat1,
    ACTIONS(1114), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [11676] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1119), 1,
      anon_sym_AT,
    STATE(19), 1,
      sym_localAccumName,
    STATE(26), 1,
      sym_name,
    ACTIONS(320), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11694] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1121), 1,
      anon_sym_AT,
    STATE(19), 1,
      sym_localAccumName,
    STATE(26), 1,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11712] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      aux_sym_ADD_INDEX_token4,
    STATE(322), 1,
      aux_sym_name_repeat1,
    ACTIONS(1123), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(1125), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11730] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1127), 1,
      anon_sym_AT,
    STATE(19), 1,
      sym_localAccumName,
    STATE(26), 1,
      sym_name,
    ACTIONS(418), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11748] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(775), 1,
      anon_sym_DASH,
    ACTIONS(777), 1,
      aux_sym_integer_token1,
    STATE(638), 1,
      aux_sym_integer_repeat1,
    STATE(744), 2,
      sym_stringLiteral,
      sym_integer,
  [11768] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1129), 1,
      anon_sym_RPAREN,
    STATE(355), 2,
      sym_name,
      aux_sym_CREATE_GRAPH_repeat1,
    ACTIONS(1131), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11784] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      aux_sym_fromClause_token1,
    STATE(339), 1,
      aux_sym_name_repeat1,
    ACTIONS(1134), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(1136), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11802] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(5), 1,
      sym_accumName,
    ACTIONS(418), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11817] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(582), 1,
      sym_name,
    STATE(585), 1,
      sym_paramName,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11832] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(888), 1,
      sym_queryName,
    STATE(889), 1,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11847] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(415), 1,
      sym_graphName,
    STATE(522), 1,
      sym_name,
    ACTIONS(1138), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11862] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(317), 1,
      sym_name,
    STATE(886), 1,
      sym_vertexType,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11877] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(11), 1,
      sym_accumName,
    ACTIONS(320), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11892] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1140), 1,
      anon_sym_RPAREN,
    ACTIONS(1142), 1,
      anon_sym_COMMA,
    ACTIONS(1144), 1,
      anon_sym_PIPE,
    STATE(479), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_repeat1,
    STATE(587), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_repeat2,
  [11911] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1142), 1,
      anon_sym_COMMA,
    ACTIONS(1144), 1,
      anon_sym_PIPE,
    ACTIONS(1146), 1,
      anon_sym_RPAREN,
    STATE(481), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_repeat1,
    STATE(584), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_repeat2,
  [11930] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1150), 1,
      anon_sym_primary_id_as_attribute,
    ACTIONS(1148), 4,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [11943] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      anon_sym_RETURNS,
    ACTIONS(1152), 1,
      anon_sym_LBRACE,
    ACTIONS(1154), 1,
      anon_sym_API,
    ACTIONS(1156), 1,
      anon_sym_SYNTAX,
    STATE(604), 1,
      sym_returns,
  [11962] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(866), 1,
      sym_queryName,
    STATE(889), 1,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11977] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(492), 1,
      sym_paramName,
    STATE(582), 1,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11992] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      anon_sym_RETURNS,
    ACTIONS(1158), 1,
      anon_sym_LBRACE,
    ACTIONS(1160), 1,
      anon_sym_API,
    ACTIONS(1162), 1,
      anon_sym_SYNTAX,
    STATE(575), 1,
      sym_returns,
  [12011] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(462), 1,
      sym_graphName,
    STATE(522), 1,
      sym_name,
    ACTIONS(1138), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12026] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(230), 1,
      sym_name,
    STATE(784), 1,
      sym_tupleType,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12041] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(452), 1,
      sym_name,
    STATE(501), 1,
      sym_jsonKey,
    ACTIONS(1164), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12056] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(864), 1,
      sym_edgeType,
    STATE(865), 1,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12071] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(863), 1,
      sym_edgeType,
    STATE(865), 1,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12086] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(749), 1,
      sym_syntaxName,
    STATE(812), 1,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12101] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(452), 1,
      sym_name,
    STATE(644), 1,
      sym_jsonKey,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
  [12127] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1168), 1,
      anon_sym_COMMA,
    ACTIONS(1170), 1,
      anon_sym_SEMI,
    ACTIONS(1172), 1,
      aux_sym_printStmt_token2,
    ACTIONS(1174), 1,
      aux_sym_printStmt_token3,
    STATE(439), 1,
      aux_sym_printStmt_repeat1,
  [12146] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(11), 1,
      sym_accumName,
    ACTIONS(418), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12161] = 4,
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
  [12176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1176), 1,
      anon_sym_DOT,
    ACTIONS(966), 4,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_perClauseV2_token1,
  [12189] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(5), 1,
      sym_accumName,
    ACTIONS(458), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12204] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1178), 1,
      anon_sym_COMMA,
    STATE(383), 1,
      aux_sym_fromClause_repeat1,
    ACTIONS(1181), 3,
      anon_sym_SEMI,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [12219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1183), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [12230] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1185), 1,
      anon_sym_DOT,
    ACTIONS(966), 4,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_printStmt_token3,
  [12243] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(857), 1,
      sym_name,
    STATE(858), 1,
      sym_fileVar,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12258] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(317), 1,
      sym_name,
    STATE(802), 1,
      sym_vertexType,
    ACTIONS(294), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12273] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      aux_sym_perClauseV2_token1,
    ACTIONS(1187), 1,
      anon_sym_SEMI,
    STATE(823), 1,
      sym_perClauseV2,
    STATE(417), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [12290] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(5), 1,
      sym_accumName,
    ACTIONS(464), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12305] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(5), 1,
      sym_accumName,
    ACTIONS(396), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12320] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(11), 1,
      sym_accumName,
    ACTIONS(406), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12335] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(366), 1,
      sym_graphName,
    STATE(522), 1,
      sym_name,
    ACTIONS(1138), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12350] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(11), 1,
      sym_accumName,
    ACTIONS(464), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12365] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(5), 1,
      sym_accumName,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12380] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(256), 1,
      sym_name,
    STATE(260), 1,
      sym_accumName,
    ACTIONS(862), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12395] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(11), 1,
      sym_accumName,
    ACTIONS(458), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12410] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1191), 1,
      aux_sym_CREATE_DIRECTED_EDGE_token2,
    ACTIONS(1189), 4,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [12423] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(794), 1,
      sym_syntaxName,
    STATE(812), 1,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12438] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(326), 1,
      sym_name,
    STATE(433), 1,
      sym_vertexAlias,
    ACTIONS(862), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12453] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(5), 1,
      sym_accumName,
    ACTIONS(428), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1193), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [12479] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1193), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(1195), 3,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [12492] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(719), 1,
      sym_syntaxName,
    STATE(812), 1,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1198), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [12518] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(317), 1,
      sym_name,
    STATE(839), 1,
      sym_vertexType,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12533] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(11), 1,
      sym_accumName,
    ACTIONS(428), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12548] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(752), 1,
      sym_edgeAlias,
    STATE(762), 1,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12563] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(714), 1,
      sym_syntaxName,
    STATE(812), 1,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12578] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(773), 1,
      sym_syntaxName,
    STATE(812), 1,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12593] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1200), 1,
      anon_sym_COMMA,
    STATE(431), 1,
      aux_sym_fromClause_repeat1,
    ACTIONS(1202), 3,
      anon_sym_SEMI,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [12608] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(477), 1,
      sym_graphName,
    STATE(522), 1,
      sym_name,
    ACTIONS(1138), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12623] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(707), 1,
      sym_syntaxName,
    STATE(812), 1,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12638] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      aux_sym_perClauseV2_token1,
    ACTIONS(1094), 1,
      anon_sym_SEMI,
    STATE(823), 1,
      sym_perClauseV2,
    STATE(422), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [12655] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(741), 1,
      sym_syntaxName,
    STATE(812), 1,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12670] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      anon_sym_RETURNS,
    ACTIONS(1006), 1,
      anon_sym_LBRACE,
    ACTIONS(1010), 1,
      anon_sym_API,
    ACTIONS(1012), 1,
      anon_sym_SYNTAX,
    STATE(598), 1,
      sym_returns,
  [12689] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1206), 1,
      anon_sym_GT,
    ACTIONS(1208), 1,
      anon_sym_PIPE,
    STATE(532), 1,
      aux_sym_stepEdgeTypes_repeat1,
    ACTIONS(1204), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [12706] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1210), 1,
      anon_sym_SEMI,
    ACTIONS(1212), 1,
      aux_sym_perClauseV2_token1,
    STATE(823), 1,
      sym_perClauseV2,
    STATE(417), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [12723] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(5), 1,
      sym_accumName,
    ACTIONS(452), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12738] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      aux_sym_perClauseV2_token1,
    ACTIONS(1094), 1,
      anon_sym_SEMI,
    STATE(823), 1,
      sym_perClauseV2,
    STATE(417), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [12755] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(11), 1,
      sym_accumName,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12770] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(728), 1,
      sym_syntaxName,
    STATE(812), 1,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12785] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      aux_sym_perClauseV2_token1,
    ACTIONS(1215), 1,
      anon_sym_SEMI,
    STATE(823), 1,
      sym_perClauseV2,
    STATE(417), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [12802] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      aux_sym_perClauseV2_token1,
    ACTIONS(1215), 1,
      anon_sym_SEMI,
    STATE(823), 1,
      sym_perClauseV2,
    STATE(388), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [12819] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(317), 1,
      sym_name,
    STATE(621), 1,
      sym_vertexType,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12834] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(326), 1,
      sym_name,
    STATE(819), 1,
      sym_vertexAlias,
    ACTIONS(1217), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12849] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1219), 1,
      anon_sym_EQ,
    ACTIONS(1198), 4,
      anon_sym_SEMI,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [12862] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(326), 1,
      sym_name,
    STATE(384), 1,
      sym_vertexAlias,
    ACTIONS(862), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12877] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1223), 1,
      anon_sym_SEMI,
    ACTIONS(1221), 4,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [12890] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1225), 1,
      anon_sym_RPAREN,
    ACTIONS(1227), 1,
      anon_sym_COMMA,
    STATE(592), 1,
      aux_sym_accumType_repeat1,
    ACTIONS(1229), 2,
      aux_sym_accumType_token11,
      aux_sym_accumType_token12,
  [12907] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(162), 1,
      sym_name,
    STATE(691), 1,
      sym_fieldName,
    ACTIONS(294), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12922] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1200), 1,
      anon_sym_COMMA,
    STATE(383), 1,
      aux_sym_fromClause_repeat1,
    ACTIONS(1231), 3,
      anon_sym_SEMI,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [12937] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(828), 1,
      sym_queryName,
    STATE(889), 1,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1233), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [12963] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(709), 1,
      sym_syntaxName,
    STATE(812), 1,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12978] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(11), 1,
      sym_accumName,
    ACTIONS(396), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12993] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1237), 1,
      aux_sym_CREATE_DIRECTED_EDGE_token2,
    ACTIONS(1235), 4,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [13006] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(58), 1,
      sym_name,
    STATE(766), 1,
      sym_attrName,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [13021] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(5), 1,
      sym_accumName,
    ACTIONS(434), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [13036] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1239), 1,
      anon_sym_COMMA,
    STATE(439), 1,
      aux_sym_printStmt_repeat1,
    ACTIONS(1242), 3,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
  [13051] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(5), 1,
      sym_accumName,
    ACTIONS(446), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [13066] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(11), 1,
      sym_accumName,
    ACTIONS(434), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [13081] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(11), 1,
      sym_accumName,
    ACTIONS(440), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [13096] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(5), 1,
      sym_accumName,
    ACTIONS(440), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [13111] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(162), 1,
      sym_name,
    STATE(429), 1,
      sym_fieldName,
    ACTIONS(1244), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [13126] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(812), 1,
      sym_name,
    STATE(814), 1,
      sym_syntaxName,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [13141] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1248), 1,
      aux_sym_accumType_token5,
    ACTIONS(1246), 4,
      aux_sym_accumType_token2,
      aux_sym_accumType_token3,
      aux_sym_accumType_token4,
      aux_sym_accumType_token6,
  [13154] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(713), 1,
      sym_syntaxName,
    STATE(812), 1,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [13169] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(230), 1,
      sym_name,
    STATE(845), 1,
      sym_tupleType,
    ACTIONS(294), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [13184] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1250), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
  [13195] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(317), 1,
      sym_name,
    STATE(844), 1,
      sym_vertexType,
    ACTIONS(294), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [13210] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(11), 1,
      sym_accumName,
    ACTIONS(452), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [13225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1252), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      anon_sym_RBRACK,
  [13236] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(317), 1,
      sym_name,
    STATE(363), 1,
      sym_vertexType,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [13251] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(317), 1,
      sym_name,
    STATE(364), 1,
      sym_vertexType,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [13266] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1256), 1,
      aux_sym_CREATE_DIRECTED_EDGE_token2,
    ACTIONS(1254), 4,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [13279] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(48), 1,
      sym_attrName,
    STATE(58), 1,
      sym_name,
    ACTIONS(1258), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [13294] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(5), 1,
      sym_accumName,
    ACTIONS(406), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [13309] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(762), 1,
      sym_name,
    STATE(763), 1,
      sym_edgeAlias,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [13324] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(317), 1,
      sym_name,
    STATE(733), 1,
      sym_vertexType,
    ACTIONS(1260), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [13339] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(837), 1,
      sym_queryName,
    STATE(889), 1,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [13354] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1264), 1,
      anon_sym_primary_id_as_attribute,
    ACTIONS(1262), 4,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [13367] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      anon_sym_RETURNS,
    ACTIONS(1266), 1,
      anon_sym_LBRACE,
    ACTIONS(1268), 1,
      anon_sym_API,
    ACTIONS(1270), 1,
      anon_sym_SYNTAX,
    STATE(631), 1,
      sym_returns,
  [13386] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(256), 1,
      sym_name,
    STATE(260), 1,
      sym_accumName,
    ACTIONS(294), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [13401] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(737), 1,
      sym_syntaxName,
    STATE(812), 1,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [13416] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(162), 1,
      sym_name,
    STATE(559), 1,
      sym_fieldName,
    ACTIONS(294), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [13431] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1274), 1,
      anon_sym_SEMI,
    ACTIONS(1272), 4,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [13444] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1168), 1,
      anon_sym_COMMA,
    ACTIONS(1276), 1,
      anon_sym_SEMI,
    ACTIONS(1278), 1,
      aux_sym_printStmt_token2,
    ACTIONS(1280), 1,
      aux_sym_printStmt_token3,
    STATE(378), 1,
      aux_sym_printStmt_repeat1,
  [13463] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(58), 1,
      sym_name,
    STATE(760), 1,
      sym_attrName,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [13478] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1284), 1,
      aux_sym_CREATE_DIRECTED_EDGE_token2,
    ACTIONS(1282), 4,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [13491] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      aux_sym_printExpr_token1,
    ACTIONS(625), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
  [13504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1286), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [13515] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(317), 1,
      sym_name,
    STATE(809), 1,
      sym_vertexType,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [13530] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(317), 1,
      sym_name,
    STATE(810), 1,
      sym_vertexType,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [13545] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(759), 1,
      sym_syntaxName,
    STATE(812), 1,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [13560] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(369), 1,
      sym_graphName,
    STATE(522), 1,
      sym_name,
    ACTIONS(1138), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [13575] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(162), 1,
      sym_name,
    STATE(482), 1,
      sym_fieldName,
    ACTIONS(1244), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [13590] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(994), 1,
      anon_sym_LBRACE,
    ACTIONS(998), 1,
      anon_sym_API,
    ACTIONS(1000), 1,
      anon_sym_SYNTAX,
    ACTIONS(1002), 1,
      anon_sym_RETURNS,
    STATE(565), 1,
      sym_returns,
  [13609] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(11), 1,
      sym_accumName,
    ACTIONS(446), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [13624] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1142), 1,
      anon_sym_COMMA,
    ACTIONS(1144), 1,
      anon_sym_PIPE,
    ACTIONS(1288), 1,
      anon_sym_RPAREN,
    STATE(494), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_repeat1,
    STATE(620), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_repeat2,
  [13643] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1292), 1,
      aux_sym_CREATE_DIRECTED_EDGE_token2,
    ACTIONS(1290), 4,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [13656] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1142), 1,
      anon_sym_COMMA,
    ACTIONS(1144), 1,
      anon_sym_PIPE,
    ACTIONS(1294), 1,
      anon_sym_RPAREN,
    STATE(494), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_repeat1,
    STATE(616), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_repeat2,
  [13675] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1296), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(1298), 2,
      aux_sym_accumType_token11,
      aux_sym_accumType_token12,
  [13687] = 5,
    ACTIONS(1300), 1,
      sym_comment,
    ACTIONS(1302), 1,
      anon_sym_DQUOTE,
    ACTIONS(1304), 1,
      aux_sym_stringLiteral_token1,
    ACTIONS(1307), 1,
      sym_escape_sequence,
    STATE(483), 1,
      aux_sym_stringLiteral_repeat1,
  [13703] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1310), 1,
      anon_sym_COMMA,
    STATE(530), 1,
      aux_sym_dmlSubStmtList_repeat1,
    ACTIONS(1312), 2,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
  [13717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1314), 4,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_COLON,
  [13727] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1319), 1,
      anon_sym_PIPE,
    STATE(486), 1,
      aux_sym_stepEdgeTypes_repeat1,
    ACTIONS(1317), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [13741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1322), 4,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [13751] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1324), 4,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [13761] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1326), 1,
      anon_sym_SEMI,
    ACTIONS(1328), 3,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [13773] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(47), 1,
      sym_name,
    ACTIONS(1258), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [13785] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(807), 1,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [13797] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1330), 1,
      anon_sym_RPAREN,
    ACTIONS(1332), 1,
      anon_sym_EQ,
    ACTIONS(1334), 1,
      anon_sym_COMMA,
    STATE(557), 1,
      aux_sym_parameterList_repeat1,
  [13813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1336), 4,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_COLON,
  [13823] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1340), 1,
      anon_sym_PIPE,
    STATE(494), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_repeat1,
    ACTIONS(1338), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
  [13847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1343), 4,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [13857] = 5,
    ACTIONS(1300), 1,
      sym_comment,
    ACTIONS(1345), 1,
      anon_sym_DQUOTE,
    ACTIONS(1347), 1,
      aux_sym_stringLiteral_token1,
    ACTIONS(1349), 1,
      sym_escape_sequence,
    STATE(544), 1,
      aux_sym_stringLiteral_repeat1,
  [13873] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(885), 1,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [13885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1351), 4,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [13895] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1353), 1,
      anon_sym_DOT,
    ACTIONS(966), 3,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_queryBodyIfStmt_token2,
  [13907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1355), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
  [13917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1357), 4,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [13927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1359), 4,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [13937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1361), 4,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [13947] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1363), 1,
      anon_sym_RBRACE,
    ACTIONS(1365), 1,
      aux_sym_define_statement_token1,
    STATE(510), 2,
      sym_define_statement,
      aux_sym_create_loading_job_repeat1,
  [13961] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1367), 1,
      anon_sym_EQ,
    ACTIONS(1369), 1,
      anon_sym_COMMA,
    ACTIONS(1371), 1,
      anon_sym_SEMI,
    STATE(561), 1,
      aux_sym_accumDeclStmt_repeat1,
  [13977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1242), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
  [13987] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1373), 1,
      anon_sym_SEMI,
    ACTIONS(1377), 1,
      aux_sym_printStmt_token3,
    ACTIONS(1375), 2,
      anon_sym_AND,
      anon_sym_OR,
  [14001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1379), 4,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [14011] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1381), 1,
      anon_sym_RBRACE,
    ACTIONS(1383), 1,
      aux_sym_define_statement_token1,
    STATE(510), 2,
      sym_define_statement,
      aux_sym_create_loading_job_repeat1,
  [14025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1386), 4,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [14035] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1365), 1,
      aux_sym_define_statement_token1,
    ACTIONS(1388), 1,
      anon_sym_RBRACE,
    STATE(505), 2,
      sym_define_statement,
      aux_sym_create_loading_job_repeat1,
  [14049] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(502), 1,
      sym_name,
    ACTIONS(306), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [14061] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(577), 1,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [14073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1390), 4,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [14083] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1392), 1,
      anon_sym_SEMI,
    ACTIONS(1328), 3,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [14095] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1394), 2,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
    ACTIONS(1396), 2,
      anon_sym_AND,
      anon_sym_OR,
  [14107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1398), 4,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [14117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1400), 4,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [14127] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1402), 1,
      anon_sym_EQ,
    ACTIONS(1404), 1,
      anon_sym_COMMA,
    ACTIONS(1406), 1,
      anon_sym_SEMI,
    STATE(627), 1,
      aux_sym_baseDeclStmt_repeat1,
  [14143] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 2,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
    ACTIONS(1408), 2,
      anon_sym_AND,
      anon_sym_OR,
  [14155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1411), 4,
      anon_sym_LBRACE,
      anon_sym_API,
      anon_sym_SYNTAX,
      anon_sym_RETURNS,
  [14165] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(729), 1,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [14177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(711), 1,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [14189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1413), 4,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [14199] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(717), 1,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [14211] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1415), 1,
      anon_sym_RPAREN,
    ACTIONS(1328), 3,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [14223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1417), 4,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [14233] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1419), 4,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [14243] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1421), 1,
      anon_sym_COMMA,
    STATE(530), 1,
      aux_sym_dmlSubStmtList_repeat1,
    ACTIONS(1424), 2,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
  [14257] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(520), 1,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [14269] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1208), 1,
      anon_sym_PIPE,
    STATE(486), 1,
      aux_sym_stepEdgeTypes_repeat1,
    ACTIONS(1426), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [14283] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1428), 1,
      anon_sym_LT,
    ACTIONS(724), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [14295] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_AT_AT,
    ACTIONS(1430), 1,
      anon_sym_AT,
    STATE(506), 2,
      sym_localAccumName,
      sym_globalAccumName,
  [14309] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1310), 1,
      anon_sym_COMMA,
    STATE(484), 1,
      aux_sym_dmlSubStmtList_repeat1,
    ACTIONS(1432), 2,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
  [14323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1181), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [14333] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1434), 1,
      anon_sym_SEMI,
    ACTIONS(1436), 1,
      aux_sym_printStmt_token3,
    ACTIONS(1375), 2,
      anon_sym_AND,
      anon_sym_OR,
  [14347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1438), 4,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [14357] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(862), 1,
      sym_name,
    ACTIONS(1440), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [14369] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1442), 1,
      anon_sym_DOT,
    ACTIONS(966), 3,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
  [14381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1444), 4,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [14391] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(50), 1,
      sym_name,
    ACTIONS(1258), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [14403] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(515), 1,
      sym_name,
    ACTIONS(306), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [14415] = 5,
    ACTIONS(1300), 1,
      sym_comment,
    ACTIONS(1446), 1,
      anon_sym_DQUOTE,
    ACTIONS(1448), 1,
      aux_sym_stringLiteral_token1,
    ACTIONS(1450), 1,
      sym_escape_sequence,
    STATE(483), 1,
      aux_sym_stringLiteral_repeat1,
  [14431] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 2,
      anon_sym_SEMI,
      aux_sym_printStmt_token3,
    ACTIONS(1452), 2,
      anon_sym_AND,
      anon_sym_OR,
  [14443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1102), 4,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [14453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1148), 4,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [14463] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1369), 1,
      anon_sym_COMMA,
    ACTIONS(1455), 1,
      anon_sym_EQ,
    ACTIONS(1457), 1,
      anon_sym_SEMI,
    STATE(607), 1,
      aux_sym_accumDeclStmt_repeat1,
  [14479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1459), 4,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [14489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(538), 1,
      sym_name,
    ACTIONS(306), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [14501] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(588), 1,
      sym_name,
    ACTIONS(1461), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [14513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1424), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
  [14522] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1036), 1,
      anon_sym_LBRACE,
    ACTIONS(1040), 1,
      anon_sym_API,
    ACTIONS(1042), 1,
      anon_sym_SYNTAX,
  [14535] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1463), 1,
      anon_sym_COMMA,
    ACTIONS(1466), 1,
      anon_sym_GT,
    STATE(554), 1,
      aux_sym_tupleFields_repeat1,
  [14548] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1470), 1,
      aux_sym_queryBodyIfStmt_token2,
    ACTIONS(1468), 2,
      anon_sym_AND,
      anon_sym_OR,
  [14559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1472), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [14568] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1334), 1,
      anon_sym_COMMA,
    ACTIONS(1474), 1,
      anon_sym_RPAREN,
    STATE(628), 1,
      aux_sym_parameterList_repeat1,
  [14581] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1476), 1,
      anon_sym_RPAREN,
    ACTIONS(1478), 1,
      anon_sym_COMMA,
    STATE(558), 1,
      aux_sym_CREATE_VERTEX_repeat1,
  [14594] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1481), 1,
      anon_sym_COMMA,
    ACTIONS(1483), 1,
      anon_sym_GT,
    STATE(636), 1,
      aux_sym_tupleFields_repeat1,
  [14607] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1485), 1,
      anon_sym_RPAREN,
    ACTIONS(1487), 1,
      anon_sym_COMMA,
    STATE(560), 1,
      aux_sym_perClauseV2_repeat1,
  [14620] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1369), 1,
      anon_sym_COMMA,
    ACTIONS(1457), 1,
      anon_sym_SEMI,
    STATE(640), 1,
      aux_sym_accumDeclStmt_repeat1,
  [14633] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1369), 1,
      anon_sym_COMMA,
    ACTIONS(1490), 1,
      anon_sym_SEMI,
    STATE(635), 1,
      aux_sym_accumDeclStmt_repeat1,
  [14646] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      anon_sym_RPAREN,
    ACTIONS(1492), 1,
      anon_sym_COMMA,
    STATE(563), 1,
      aux_sym_argList_repeat1,
  [14659] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1495), 1,
      aux_sym_queryBodyIfStmt_token3,
    ACTIONS(1497), 1,
      aux_sym_queryBodyIfStmt_token4,
    STATE(633), 1,
      aux_sym_queryBodyIfStmt_repeat1,
  [14672] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1158), 1,
      anon_sym_LBRACE,
    ACTIONS(1160), 1,
      anon_sym_API,
    ACTIONS(1162), 1,
      anon_sym_SYNTAX,
  [14685] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1499), 1,
      anon_sym_COMMA,
    ACTIONS(1501), 1,
      anon_sym_RBRACK,
    STATE(630), 1,
      aux_sym_vExprSet_repeat1,
  [14698] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1369), 1,
      anon_sym_COMMA,
    ACTIONS(1490), 1,
      anon_sym_SEMI,
    STATE(640), 1,
      aux_sym_accumDeclStmt_repeat1,
  [14711] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1503), 1,
      anon_sym_RPAREN,
    ACTIONS(1505), 1,
      anon_sym_COMMA,
    STATE(606), 1,
      aux_sym_perClauseV2_repeat1,
  [14724] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [14733] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1499), 1,
      anon_sym_COMMA,
    ACTIONS(1507), 1,
      anon_sym_RBRACK,
    STATE(566), 1,
      aux_sym_vExprSet_repeat1,
  [14746] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1509), 1,
      aux_sym_elementType_token1,
    ACTIONS(724), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [14757] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1511), 1,
      anon_sym_RPAREN,
    ACTIONS(1513), 1,
      anon_sym_COMMA,
    STATE(579), 1,
      aux_sym_CREATE_VERTEX_repeat1,
  [14770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1515), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [14779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1517), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
  [14788] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1152), 1,
      anon_sym_LBRACE,
    ACTIONS(1154), 1,
      anon_sym_API,
    ACTIONS(1156), 1,
      anon_sym_SYNTAX,
  [14801] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1519), 1,
      anon_sym_COMMA,
    ACTIONS(1522), 1,
      anon_sym_SEMI,
    STATE(576), 1,
      aux_sym_baseDeclStmt_repeat1,
  [14814] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1524), 1,
      anon_sym_EQ,
    ACTIONS(1522), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [14834] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1513), 1,
      anon_sym_COMMA,
    ACTIONS(1526), 1,
      anon_sym_RPAREN,
    STATE(558), 1,
      aux_sym_CREATE_VERTEX_repeat1,
  [14847] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      aux_sym_integer_token1,
    ACTIONS(124), 1,
      anon_sym_COMMA,
    STATE(6), 1,
      aux_sym_integer_repeat1,
  [14860] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1026), 1,
      anon_sym_LBRACE,
    ACTIONS(1030), 1,
      anon_sym_API,
    ACTIONS(1032), 1,
      anon_sym_SYNTAX,
  [14873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1528), 3,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_COMMA,
  [14882] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [14891] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1142), 1,
      anon_sym_COMMA,
    ACTIONS(1294), 1,
      anon_sym_RPAREN,
    STATE(617), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_repeat2,
  [14904] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1532), 1,
      anon_sym_EQ,
    ACTIONS(1530), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14915] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1334), 1,
      anon_sym_COMMA,
    ACTIONS(1534), 1,
      anon_sym_RPAREN,
    STATE(628), 1,
      aux_sym_parameterList_repeat1,
  [14928] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1142), 1,
      anon_sym_COMMA,
    ACTIONS(1288), 1,
      anon_sym_RPAREN,
    STATE(617), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_repeat2,
  [14941] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1538), 1,
      anon_sym_EQ,
    ACTIONS(1536), 2,
      anon_sym_RBRACE,
      aux_sym_define_statement_token1,
  [14952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1540), 3,
      anon_sym_LBRACE,
      anon_sym_API,
      anon_sym_SYNTAX,
  [14961] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [14970] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1227), 1,
      anon_sym_COMMA,
    ACTIONS(1542), 1,
      anon_sym_RPAREN,
    STATE(624), 1,
      aux_sym_accumType_repeat1,
  [14983] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1227), 1,
      anon_sym_COMMA,
    ACTIONS(1542), 1,
      anon_sym_RPAREN,
    STATE(625), 1,
      aux_sym_accumType_repeat1,
  [14996] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [15005] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1544), 1,
      aux_sym_queryBodyIfStmt_token3,
    ACTIONS(1547), 1,
      aux_sym_queryBodyIfStmt_token4,
    STATE(564), 1,
      aux_sym_queryBodyIfStmt_repeat1,
  [15018] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1550), 1,
      aux_sym_queryBodyIfStmt_token2,
    ACTIONS(1468), 2,
      anon_sym_AND,
      anon_sym_OR,
  [15029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1317), 3,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COLON,
  [15038] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1554), 1,
      aux_sym_CREATE_VERTEX_token1,
    ACTIONS(1552), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [15049] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(994), 1,
      anon_sym_LBRACE,
    ACTIONS(998), 1,
      anon_sym_API,
    ACTIONS(1000), 1,
      anon_sym_SYNTAX,
  [15062] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1556), 1,
      anon_sym_RPAREN,
    ACTIONS(1558), 2,
      anon_sym_AND,
      anon_sym_OR,
  [15073] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1560), 1,
      anon_sym_RBRACE,
    ACTIONS(1562), 1,
      anon_sym_COMMA,
    STATE(600), 1,
      aux_sym_seedSet_repeat1,
  [15086] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_RPAREN,
    ACTIONS(1565), 2,
      anon_sym_AND,
      anon_sym_OR,
  [15097] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1404), 1,
      anon_sym_COMMA,
    ACTIONS(1568), 1,
      anon_sym_SEMI,
    STATE(605), 1,
      aux_sym_baseDeclStmt_repeat1,
  [15110] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1570), 1,
      anon_sym_RBRACE,
    ACTIONS(1572), 1,
      anon_sym_COMMA,
    STATE(600), 1,
      aux_sym_seedSet_repeat1,
  [15123] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1266), 1,
      anon_sym_LBRACE,
    ACTIONS(1268), 1,
      anon_sym_API,
    ACTIONS(1270), 1,
      anon_sym_SYNTAX,
  [15136] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1404), 1,
      anon_sym_COMMA,
    ACTIONS(1574), 1,
      anon_sym_SEMI,
    STATE(576), 1,
      aux_sym_baseDeclStmt_repeat1,
  [15149] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1505), 1,
      anon_sym_COMMA,
    ACTIONS(1576), 1,
      anon_sym_RPAREN,
    STATE(560), 1,
      aux_sym_perClauseV2_repeat1,
  [15162] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1369), 1,
      anon_sym_COMMA,
    ACTIONS(1578), 1,
      anon_sym_SEMI,
    STATE(640), 1,
      aux_sym_accumDeclStmt_repeat1,
  [15175] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1004), 1,
      anon_sym_DOT_STAR,
    ACTIONS(1580), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [15186] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1583), 1,
      aux_sym_queryBodyIfStmt_token2,
    ACTIONS(1468), 2,
      anon_sym_AND,
      anon_sym_OR,
  [15197] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1587), 1,
      anon_sym_DOT,
    ACTIONS(1585), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [15208] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1591), 1,
      anon_sym_GT,
    ACTIONS(1589), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [15219] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1572), 1,
      anon_sym_COMMA,
    ACTIONS(1593), 1,
      anon_sym_RBRACE,
    STATE(603), 1,
      aux_sym_seedSet_repeat1,
  [15232] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1006), 1,
      anon_sym_LBRACE,
    ACTIONS(1010), 1,
      anon_sym_API,
    ACTIONS(1012), 1,
      anon_sym_SYNTAX,
  [15245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1595), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [15254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1206), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COLON,
  [15263] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1142), 1,
      anon_sym_COMMA,
    ACTIONS(1597), 1,
      anon_sym_RPAREN,
    STATE(617), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_repeat2,
  [15276] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1599), 1,
      anon_sym_RPAREN,
    ACTIONS(1601), 1,
      anon_sym_COMMA,
    STATE(617), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_repeat2,
  [15289] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      aux_sym_queryBodyIfStmt_token2,
    ACTIONS(1604), 2,
      anon_sym_AND,
      anon_sym_OR,
  [15300] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1607), 1,
      aux_sym_queryBodyIfStmt_token3,
    ACTIONS(1609), 1,
      aux_sym_queryBodyIfStmt_token4,
    STATE(564), 1,
      aux_sym_queryBodyIfStmt_repeat1,
  [15313] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1142), 1,
      anon_sym_COMMA,
    ACTIONS(1611), 1,
      anon_sym_RPAREN,
    STATE(617), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_repeat2,
  [15326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1613), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [15335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1615), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [15344] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1617), 1,
      anon_sym_DOT,
    ACTIONS(1619), 1,
      aux_sym_integer_token1,
    STATE(10), 1,
      aux_sym_integer_repeat1,
  [15357] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1227), 1,
      anon_sym_COMMA,
    ACTIONS(1621), 1,
      anon_sym_RPAREN,
    STATE(625), 1,
      aux_sym_accumType_repeat1,
  [15370] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1296), 1,
      anon_sym_RPAREN,
    ACTIONS(1623), 1,
      anon_sym_COMMA,
    STATE(625), 1,
      aux_sym_accumType_repeat1,
  [15383] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1334), 1,
      anon_sym_COMMA,
    ACTIONS(1626), 1,
      anon_sym_RPAREN,
    STATE(586), 1,
      aux_sym_parameterList_repeat1,
  [15396] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1404), 1,
      anon_sym_COMMA,
    ACTIONS(1628), 1,
      anon_sym_SEMI,
    STATE(576), 1,
      aux_sym_baseDeclStmt_repeat1,
  [15409] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1630), 1,
      anon_sym_RPAREN,
    ACTIONS(1632), 1,
      anon_sym_COMMA,
    STATE(628), 1,
      aux_sym_parameterList_repeat1,
  [15422] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      anon_sym_COMMA,
    ACTIONS(1635), 1,
      anon_sym_RPAREN,
    STATE(563), 1,
      aux_sym_argList_repeat1,
  [15435] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1637), 1,
      anon_sym_COMMA,
    ACTIONS(1640), 1,
      anon_sym_RBRACK,
    STATE(630), 1,
      aux_sym_vExprSet_repeat1,
  [15448] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1642), 1,
      anon_sym_LBRACE,
    ACTIONS(1644), 1,
      anon_sym_API,
    ACTIONS(1646), 1,
      anon_sym_SYNTAX,
  [15461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1246), 3,
      aux_sym_accumType_token2,
      aux_sym_accumType_token3,
      aux_sym_accumType_token4,
  [15470] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1648), 1,
      aux_sym_queryBodyIfStmt_token3,
    ACTIONS(1651), 1,
      aux_sym_queryBodyIfStmt_token4,
    STATE(633), 1,
      aux_sym_queryBodyIfStmt_repeat1,
  [15483] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1655), 1,
      aux_sym_CREATE_VERTEX_token1,
    ACTIONS(1653), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [15494] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1369), 1,
      anon_sym_COMMA,
    ACTIONS(1657), 1,
      anon_sym_SEMI,
    STATE(640), 1,
      aux_sym_accumDeclStmt_repeat1,
  [15507] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1481), 1,
      anon_sym_COMMA,
    ACTIONS(1659), 1,
      anon_sym_GT,
    STATE(554), 1,
      aux_sym_tupleFields_repeat1,
  [15520] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1369), 1,
      anon_sym_COMMA,
    ACTIONS(1578), 1,
      anon_sym_SEMI,
    STATE(567), 1,
      aux_sym_accumDeclStmt_repeat1,
  [15533] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_COMMA,
    ACTIONS(122), 1,
      aux_sym_integer_token1,
    STATE(6), 1,
      aux_sym_integer_repeat1,
  [15546] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1661), 1,
      anon_sym_EQ,
    ACTIONS(1663), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [15557] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1663), 1,
      anon_sym_SEMI,
    ACTIONS(1665), 1,
      anon_sym_COMMA,
    STATE(640), 1,
      aux_sym_accumDeclStmt_repeat1,
  [15570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1668), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [15578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1670), 2,
      anon_sym_RBRACE,
      aux_sym_define_statement_token1,
  [15586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1672), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [15594] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1674), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [15602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1676), 2,
      aux_sym_queryBodyIfStmt_token3,
      aux_sym_queryBodyIfStmt_token4,
  [15610] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    STATE(726), 1,
      sym_stringLiteral,
  [15620] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    STATE(708), 1,
      sym_stringLiteral,
  [15630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1640), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [15638] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1678), 1,
      anon_sym_LBRACE,
    ACTIONS(1680), 1,
      anon_sym_SYNTAX,
  [15648] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1682), 1,
      aux_sym_primary_id_name_type_token1,
    STATE(572), 1,
      sym_primary_id_name_type,
  [15658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1684), 1,
      aux_sym_integer_token1,
    STATE(580), 1,
      aux_sym_integer_repeat1,
  [15668] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1686), 1,
      anon_sym_LBRACE,
    ACTIONS(1688), 1,
      anon_sym_SYNTAX,
  [15678] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    STATE(727), 1,
      sym_stringLiteral,
  [15688] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1642), 1,
      anon_sym_LBRACE,
    ACTIONS(1646), 1,
      anon_sym_SYNTAX,
  [15698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1690), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [15706] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    STATE(715), 1,
      sym_stringLiteral,
  [15716] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_AT_AT,
    STATE(548), 1,
      sym_globalAccumName,
  [15726] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    STATE(642), 1,
      sym_stringLiteral,
  [15736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1692), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [15744] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1694), 1,
      anon_sym_LBRACE,
    ACTIONS(1696), 1,
      anon_sym_SYNTAX,
  [15754] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    STATE(772), 1,
      sym_stringLiteral,
  [15764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1698), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [15772] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1700), 1,
      anon_sym_LBRACE,
    ACTIONS(1702), 1,
      anon_sym_SYNTAX,
  [15782] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1704), 1,
      anon_sym_LPAREN,
    STATE(680), 1,
      sym_selectVertParams,
  [15792] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1706), 1,
      anon_sym_RPAREN,
    ACTIONS(1708), 1,
      anon_sym_COLON,
  [15802] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1710), 1,
      aux_sym_integer_token1,
    STATE(16), 1,
      aux_sym_integer_repeat1,
  [15812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1712), 2,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
  [15820] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    STATE(735), 1,
      sym_stringLiteral,
  [15830] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1266), 1,
      anon_sym_LBRACE,
    ACTIONS(1270), 1,
      anon_sym_SYNTAX,
  [15840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1714), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [15848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1560), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [15856] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1716), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [15864] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1718), 1,
      anon_sym_LPAREN,
    ACTIONS(1720), 1,
      anon_sym_EQ,
  [15874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1722), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [15882] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    STATE(756), 1,
      sym_stringLiteral,
  [15892] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(994), 1,
      anon_sym_LBRACE,
    ACTIONS(1000), 1,
      anon_sym_SYNTAX,
  [15902] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1724), 1,
      anon_sym_DQUOTE,
    ACTIONS(1726), 1,
      anon_sym_DQUOTEnone_DQUOTE,
  [15912] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1728), 1,
      aux_sym_CREATE_GRAPH_token1,
    ACTIONS(1730), 1,
      aux_sym_DROP_token2,
  [15922] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1732), 1,
      aux_sym_fromClause_token1,
    STATE(273), 1,
      sym_fromClause,
  [15932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1734), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [15940] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1736), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [15948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1738), 2,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
  [15956] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1740), 1,
      anon_sym_EQ,
    ACTIONS(1742), 1,
      anon_sym_DOT,
  [15966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1744), 2,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
  [15974] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1152), 1,
      anon_sym_LBRACE,
    ACTIONS(1156), 1,
      anon_sym_SYNTAX,
  [15984] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    STATE(742), 1,
      sym_stringLiteral,
  [15994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1746), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [16002] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1749), 1,
      aux_sym_DROP_token1,
    ACTIONS(1751), 1,
      aux_sym_ADD_INDEX_token2,
  [16012] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1753), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [16020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1755), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [16028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1757), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [16036] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      aux_sym_integer_token1,
    STATE(14), 1,
      aux_sym_integer_repeat1,
  [16046] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1158), 1,
      anon_sym_LBRACE,
    ACTIONS(1162), 1,
      anon_sym_SYNTAX,
  [16056] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1759), 1,
      aux_sym_condition_token1,
    ACTIONS(1761), 1,
      aux_sym_condition_token4,
  [16066] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    STATE(750), 1,
      sym_stringLiteral,
  [16076] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1066), 1,
      anon_sym_DOLLAR,
    STATE(751), 1,
      sym_columnId,
  [16086] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1121), 1,
      anon_sym_AT,
    STATE(639), 1,
      sym_localAccumName,
  [16096] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1763), 1,
      aux_sym_createSignature_token4,
    ACTIONS(1765), 1,
      anon_sym_QUERY,
  [16106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1767), 2,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
  [16114] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1769), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [16122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1485), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [16130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1771), 1,
      aux_sym_accumClause_token1,
    ACTIONS(1773), 1,
      aux_sym_postAccumClause_token1,
  [16140] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    STATE(793), 1,
      sym_stringLiteral,
  [16150] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_RPAREN,
  [16157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1775), 1,
      anon_sym_DQUOTE,
  [16164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1777), 1,
      anon_sym_RPAREN,
  [16171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1700), 1,
      anon_sym_LBRACE,
  [16178] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1779), 1,
      anon_sym_RPAREN,
  [16185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1686), 1,
      anon_sym_LBRACE,
  [16192] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1781), 1,
      aux_sym_CREATE_DIRECTED_EDGE_token3,
  [16199] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1783), 1,
      anon_sym_DQUOTE,
  [16206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1785), 1,
      anon_sym_DQUOTEtrue_DQUOTE,
  [16213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1678), 1,
      anon_sym_LBRACE,
  [16220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1787), 1,
      anon_sym_LBRACE,
  [16227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1789), 1,
      anon_sym_RPAREN,
  [16234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1791), 1,
      anon_sym_DQUOTE,
  [16241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1793), 1,
      anon_sym_DQUOTE,
  [16248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1795), 1,
      aux_sym_selectVertParams_token1,
  [16255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1797), 1,
      anon_sym_LBRACE,
  [16262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1799), 1,
      anon_sym_EQ,
  [16269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1801), 1,
      anon_sym_LPAREN,
  [16276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1803), 1,
      anon_sym_DQUOTE,
  [16283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1805), 1,
      anon_sym_EQ,
  [16290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1807), 1,
      aux_sym_constant_token1,
  [16297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1809), 1,
      aux_sym_CREATE_DIRECTED_EDGE_token3,
  [16304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1811), 1,
      anon_sym_COMMA,
  [16311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1813), 1,
      anon_sym_RPAREN,
  [16318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1694), 1,
      anon_sym_LBRACE,
  [16325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1815), 1,
      anon_sym_DQUOTE,
  [16332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1817), 1,
      anon_sym_LPAREN,
  [16339] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1819), 1,
      aux_sym_queryBodyIfStmt_token1,
  [16346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1821), 1,
      anon_sym_EQ,
  [16353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1823), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_token2,
  [16360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1825), 1,
      anon_sym_EQ,
  [16367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1827), 1,
      anon_sym_RPAREN,
  [16374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1829), 1,
      anon_sym_LPAREN,
  [16381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1642), 1,
      anon_sym_LBRACE,
  [16388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1831), 1,
      anon_sym_COMMA,
  [16395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1833), 1,
      aux_sym_CREATE_DIRECTED_EDGE_token3,
  [16402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1835), 1,
      anon_sym_DQUOTEtrue_DQUOTE,
  [16409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1266), 1,
      anon_sym_LBRACE,
  [16416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1837), 1,
      anon_sym_RPAREN,
  [16423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1839), 1,
      anon_sym_LPAREN,
  [16430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1841), 1,
      anon_sym_COMMA,
  [16437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1843), 1,
      aux_sym_fromClause_token1,
  [16444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1845), 1,
      anon_sym_EQ,
  [16451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1847), 1,
      anon_sym_DQUOTE,
  [16458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1849), 1,
      anon_sym_LPAREN,
  [16465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1152), 1,
      anon_sym_LBRACE,
  [16472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1851), 1,
      anon_sym_RPAREN,
  [16479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1853), 1,
      anon_sym_COMMA,
  [16486] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1855), 1,
      anon_sym_RPAREN,
  [16493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1857), 1,
      anon_sym_RPAREN,
  [16500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1859), 1,
      anon_sym_SEMI,
  [16507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1861), 1,
      aux_sym_WITH_token2,
  [16514] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1863), 1,
      anon_sym_RPAREN,
  [16521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1865), 1,
      anon_sym_GRAPH,
  [16528] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1867), 1,
      anon_sym_LPAREN,
  [16535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1158), 1,
      anon_sym_LBRACE,
  [16542] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1869), 1,
      anon_sym_EQ,
  [16549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1871), 1,
      anon_sym_DASH,
  [16556] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1873), 1,
      anon_sym_RPAREN,
  [16563] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1875), 1,
      anon_sym_RPAREN,
  [16570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1877), 1,
      anon_sym_RPAREN,
  [16577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1879), 1,
      anon_sym_SEMI,
  [16584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1881), 1,
      anon_sym_RPAREN,
  [16591] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1883), 1,
      aux_sym_queryBodyIfStmt_token4,
  [16598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1885), 1,
      anon_sym_SEMI,
  [16605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1887), 1,
      anon_sym_PLUS_EQ,
  [16612] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1889), 1,
      aux_sym_define_statement_token2,
  [16619] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1891), 1,
      anon_sym_DQUOTEtrue_DQUOTE,
  [16626] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1893), 1,
      anon_sym_RPAREN,
  [16633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(994), 1,
      anon_sym_LBRACE,
  [16640] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1895), 1,
      anon_sym_LPAREN,
  [16647] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1897), 1,
      anon_sym_GRAPH,
  [16654] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1899), 1,
      anon_sym_SEMI,
  [16661] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1901), 1,
      anon_sym_COMMA,
  [16668] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1326), 1,
      anon_sym_SEMI,
  [16675] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1903), 1,
      anon_sym_RPAREN,
  [16682] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1905), 1,
      anon_sym_RPAREN,
  [16689] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1907), 1,
      anon_sym_SEMI,
  [16696] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1909), 1,
      anon_sym_SEMI,
  [16703] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1911), 1,
      aux_sym_queryBodyIfStmt_token4,
  [16710] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1913), 1,
      anon_sym_SEMI,
  [16717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1915), 1,
      anon_sym_COMMA,
  [16724] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1918), 1,
      anon_sym_COMMA,
  [16731] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1920), 1,
      anon_sym_COMMA,
  [16738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1922), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_token2,
  [16745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1924), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_token2,
  [16752] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1926), 1,
      anon_sym_EQ,
  [16759] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1928), 1,
      anon_sym_EQ,
  [16766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1930), 1,
      anon_sym_RPAREN,
  [16773] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1932), 1,
      anon_sym_RPAREN,
  [16780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1006), 1,
      anon_sym_LBRACE,
  [16787] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1934), 1,
      anon_sym_LPAREN,
  [16794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1936), 1,
      anon_sym_GRAPH,
  [16801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1938), 1,
      anon_sym_RPAREN,
  [16808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1940), 1,
      anon_sym_SEMI,
  [16815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1942), 1,
      anon_sym_SEMI,
  [16822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1944), 1,
      aux_sym_condition_token4,
  [16829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1434), 1,
      anon_sym_SEMI,
  [16836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1946), 1,
      anon_sym_GT,
  [16843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1948), 1,
      anon_sym_SEMI,
  [16850] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1950), 1,
      anon_sym_SEMI,
  [16857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1952), 1,
      anon_sym_LPAREN,
  [16864] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1954), 1,
      anon_sym_GT,
  [16871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1956), 1,
      anon_sym_LBRACE,
  [16878] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1958), 1,
      aux_sym_CREATE_GRAPH_token2,
  [16885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1960), 1,
      anon_sym_COMMA,
  [16892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1962), 1,
      anon_sym_COMMA,
  [16899] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1964), 1,
      anon_sym_GT,
  [16906] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1966), 1,
      anon_sym_LBRACE,
  [16913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1968), 1,
      anon_sym_SEMI,
  [16920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1036), 1,
      anon_sym_LBRACE,
  [16927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1970), 1,
      anon_sym_LPAREN,
  [16934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1972), 1,
      anon_sym_GRAPH,
  [16941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_RPAREN,
  [16948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      aux_sym_gsqlSelectClause_token1,
  [16955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1974), 1,
      aux_sym_fromClause_token1,
  [16962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1976), 1,
      anon_sym_DOT_STAR,
  [16969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1978), 1,
      anon_sym_SEMI,
  [16976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1980), 1,
      anon_sym_EQ,
  [16983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1773), 1,
      aux_sym_postAccumClause_token1,
  [16990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1982), 1,
      anon_sym_LPAREN,
  [16997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1984), 1,
      anon_sym_SEMI,
  [17004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1373), 1,
      anon_sym_SEMI,
  [17011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1987), 1,
      anon_sym_RPAREN,
  [17018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1989), 1,
      anon_sym_LPAREN,
  [17025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1991), 1,
      anon_sym_GT,
  [17032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1993), 1,
      aux_sym_ADD_INDEX_token4,
  [17039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1995), 1,
      anon_sym_LPAREN,
  [17046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1997), 1,
      aux_sym_CREATE_GRAPH_token2,
  [17053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1999), 1,
      anon_sym_GT,
  [17060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2001), 1,
      anon_sym_LPAREN,
  [17067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2003), 1,
      anon_sym_LPAREN,
  [17074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2005), 1,
      anon_sym_GRAPH,
  [17081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2007), 1,
      anon_sym_LPAREN,
  [17088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1392), 1,
      anon_sym_SEMI,
  [17095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2009), 1,
      anon_sym_RPAREN,
  [17102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2011), 1,
      anon_sym_LPAREN,
  [17109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2013), 1,
      anon_sym_RBRACE,
  [17116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2015), 1,
      aux_sym_condition_token2,
  [17123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2017), 1,
      anon_sym_RPAREN,
  [17130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2019), 1,
      anon_sym_GT,
  [17137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2021), 1,
      anon_sym_GT,
  [17144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2023), 1,
      anon_sym_COMMA,
  [17151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2025), 1,
      anon_sym_GT,
  [17158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2027), 1,
      anon_sym_GT,
  [17165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2029), 1,
      aux_sym_CREATE_GRAPH_token1,
  [17172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1104), 1,
      anon_sym_RPAREN,
  [17179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2031), 1,
      aux_sym_fromClause_token1,
  [17186] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2033), 1,
      aux_sym_fromClause_token1,
  [17193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_RPAREN,
  [17200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2035), 1,
      anon_sym_LT,
  [17207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2037), 1,
      aux_sym_baseType_token3,
  [17214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2039), 1,
      anon_sym_RBRACE,
  [17221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2041), 1,
      anon_sym_LPAREN,
  [17228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2043), 1,
      anon_sym_LPAREN,
  [17235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2045), 1,
      anon_sym_LT,
  [17242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2047), 1,
      aux_sym_ADD_INDEX_token3,
  [17249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2049), 1,
      aux_sym_ADD_INDEX_token3,
  [17256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2051), 1,
      aux_sym_create_loading_job_token3,
  [17263] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2053), 1,
      anon_sym_LPAREN,
  [17270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2055), 1,
      anon_sym_LPAREN,
  [17277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2057), 1,
      anon_sym_LPAREN,
  [17284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2059), 1,
      anon_sym_LPAREN,
  [17291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2061), 1,
      anon_sym_QUERY,
  [17298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2063), 1,
      anon_sym_SEMI,
  [17305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2065), 1,
      anon_sym_SEMI,
  [17312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2067), 1,
      anon_sym_SEMI,
  [17319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2069), 1,
      anon_sym_SEMI,
  [17326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2071), 1,
      anon_sym_RBRACE,
  [17333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2073), 1,
      anon_sym_SEMI,
  [17340] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2075), 1,
      anon_sym_SEMI,
  [17347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2077), 1,
      anon_sym_RBRACE,
  [17354] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2079), 1,
      aux_sym_typedef_token2,
  [17361] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2081), 1,
      aux_sym_condition_token2,
  [17368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2083), 1,
      anon_sym_LT,
  [17375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2085), 1,
      anon_sym_LT,
  [17382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2087), 1,
      anon_sym_LT,
  [17389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2089), 1,
      anon_sym_LT,
  [17396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2091), 1,
      aux_sym_condition_token2,
  [17403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2093), 1,
      anon_sym_LT,
  [17410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2095), 1,
      anon_sym_LT,
  [17417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2097), 1,
      anon_sym_LPAREN,
  [17424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2099), 1,
      anon_sym_LPAREN,
  [17431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2101), 1,
      aux_sym_condition_token2,
  [17438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2103), 1,
      anon_sym_LPAREN,
  [17445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2105), 1,
      anon_sym_LPAREN,
  [17452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2107), 1,
      aux_sym_create_loading_job_token2,
  [17459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2109), 1,
      aux_sym_baseType_token4,
  [17466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2111), 1,
      aux_sym_baseType_token4,
  [17473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2113), 1,
      anon_sym_QUERY,
  [17480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2115), 1,
      aux_sym_createSignature_token3,
  [17487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2117), 1,
      anon_sym_LBRACE,
  [17494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2119), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 131,
  [SMALL_STATE(4)] = 247,
  [SMALL_STATE(5)] = 290,
  [SMALL_STATE(6)] = 332,
  [SMALL_STATE(7)] = 377,
  [SMALL_STATE(8)] = 456,
  [SMALL_STATE(9)] = 535,
  [SMALL_STATE(10)] = 582,
  [SMALL_STATE(11)] = 629,
  [SMALL_STATE(12)] = 669,
  [SMALL_STATE(13)] = 713,
  [SMALL_STATE(14)] = 753,
  [SMALL_STATE(15)] = 797,
  [SMALL_STATE(16)] = 837,
  [SMALL_STATE(17)] = 881,
  [SMALL_STATE(18)] = 925,
  [SMALL_STATE(19)] = 969,
  [SMALL_STATE(20)] = 1010,
  [SMALL_STATE(21)] = 1048,
  [SMALL_STATE(22)] = 1086,
  [SMALL_STATE(23)] = 1124,
  [SMALL_STATE(24)] = 1162,
  [SMALL_STATE(25)] = 1200,
  [SMALL_STATE(26)] = 1238,
  [SMALL_STATE(27)] = 1276,
  [SMALL_STATE(28)] = 1319,
  [SMALL_STATE(29)] = 1362,
  [SMALL_STATE(30)] = 1405,
  [SMALL_STATE(31)] = 1448,
  [SMALL_STATE(32)] = 1491,
  [SMALL_STATE(33)] = 1534,
  [SMALL_STATE(34)] = 1577,
  [SMALL_STATE(35)] = 1620,
  [SMALL_STATE(36)] = 1662,
  [SMALL_STATE(37)] = 1704,
  [SMALL_STATE(38)] = 1746,
  [SMALL_STATE(39)] = 1788,
  [SMALL_STATE(40)] = 1830,
  [SMALL_STATE(41)] = 1872,
  [SMALL_STATE(42)] = 1907,
  [SMALL_STATE(43)] = 1946,
  [SMALL_STATE(44)] = 1985,
  [SMALL_STATE(45)] = 2024,
  [SMALL_STATE(46)] = 2090,
  [SMALL_STATE(47)] = 2156,
  [SMALL_STATE(48)] = 2222,
  [SMALL_STATE(49)] = 2288,
  [SMALL_STATE(50)] = 2322,
  [SMALL_STATE(51)] = 2388,
  [SMALL_STATE(52)] = 2454,
  [SMALL_STATE(53)] = 2520,
  [SMALL_STATE(54)] = 2581,
  [SMALL_STATE(55)] = 2647,
  [SMALL_STATE(56)] = 2695,
  [SMALL_STATE(57)] = 2761,
  [SMALL_STATE(58)] = 2809,
  [SMALL_STATE(59)] = 2840,
  [SMALL_STATE(60)] = 2887,
  [SMALL_STATE(61)] = 2934,
  [SMALL_STATE(62)] = 2971,
  [SMALL_STATE(63)] = 3008,
  [SMALL_STATE(64)] = 3043,
  [SMALL_STATE(65)] = 3076,
  [SMALL_STATE(66)] = 3111,
  [SMALL_STATE(67)] = 3146,
  [SMALL_STATE(68)] = 3179,
  [SMALL_STATE(69)] = 3211,
  [SMALL_STATE(70)] = 3247,
  [SMALL_STATE(71)] = 3307,
  [SMALL_STATE(72)] = 3339,
  [SMALL_STATE(73)] = 3399,
  [SMALL_STATE(74)] = 3435,
  [SMALL_STATE(75)] = 3495,
  [SMALL_STATE(76)] = 3531,
  [SMALL_STATE(77)] = 3591,
  [SMALL_STATE(78)] = 3651,
  [SMALL_STATE(79)] = 3687,
  [SMALL_STATE(80)] = 3747,
  [SMALL_STATE(81)] = 3807,
  [SMALL_STATE(82)] = 3867,
  [SMALL_STATE(83)] = 3903,
  [SMALL_STATE(84)] = 3963,
  [SMALL_STATE(85)] = 4023,
  [SMALL_STATE(86)] = 4083,
  [SMALL_STATE(87)] = 4143,
  [SMALL_STATE(88)] = 4203,
  [SMALL_STATE(89)] = 4263,
  [SMALL_STATE(90)] = 4320,
  [SMALL_STATE(91)] = 4377,
  [SMALL_STATE(92)] = 4434,
  [SMALL_STATE(93)] = 4491,
  [SMALL_STATE(94)] = 4548,
  [SMALL_STATE(95)] = 4605,
  [SMALL_STATE(96)] = 4662,
  [SMALL_STATE(97)] = 4719,
  [SMALL_STATE(98)] = 4776,
  [SMALL_STATE(99)] = 4833,
  [SMALL_STATE(100)] = 4890,
  [SMALL_STATE(101)] = 4947,
  [SMALL_STATE(102)] = 5004,
  [SMALL_STATE(103)] = 5061,
  [SMALL_STATE(104)] = 5118,
  [SMALL_STATE(105)] = 5175,
  [SMALL_STATE(106)] = 5232,
  [SMALL_STATE(107)] = 5289,
  [SMALL_STATE(108)] = 5346,
  [SMALL_STATE(109)] = 5403,
  [SMALL_STATE(110)] = 5460,
  [SMALL_STATE(111)] = 5517,
  [SMALL_STATE(112)] = 5574,
  [SMALL_STATE(113)] = 5608,
  [SMALL_STATE(114)] = 5658,
  [SMALL_STATE(115)] = 5692,
  [SMALL_STATE(116)] = 5726,
  [SMALL_STATE(117)] = 5760,
  [SMALL_STATE(118)] = 5794,
  [SMALL_STATE(119)] = 5828,
  [SMALL_STATE(120)] = 5877,
  [SMALL_STATE(121)] = 5910,
  [SMALL_STATE(122)] = 5943,
  [SMALL_STATE(123)] = 5976,
  [SMALL_STATE(124)] = 6009,
  [SMALL_STATE(125)] = 6058,
  [SMALL_STATE(126)] = 6091,
  [SMALL_STATE(127)] = 6124,
  [SMALL_STATE(128)] = 6171,
  [SMALL_STATE(129)] = 6204,
  [SMALL_STATE(130)] = 6237,
  [SMALL_STATE(131)] = 6270,
  [SMALL_STATE(132)] = 6303,
  [SMALL_STATE(133)] = 6350,
  [SMALL_STATE(134)] = 6383,
  [SMALL_STATE(135)] = 6430,
  [SMALL_STATE(136)] = 6477,
  [SMALL_STATE(137)] = 6510,
  [SMALL_STATE(138)] = 6554,
  [SMALL_STATE(139)] = 6602,
  [SMALL_STATE(140)] = 6650,
  [SMALL_STATE(141)] = 6694,
  [SMALL_STATE(142)] = 6742,
  [SMALL_STATE(143)] = 6790,
  [SMALL_STATE(144)] = 6838,
  [SMALL_STATE(145)] = 6886,
  [SMALL_STATE(146)] = 6934,
  [SMALL_STATE(147)] = 6978,
  [SMALL_STATE(148)] = 7030,
  [SMALL_STATE(149)] = 7078,
  [SMALL_STATE(150)] = 7130,
  [SMALL_STATE(151)] = 7178,
  [SMALL_STATE(152)] = 7226,
  [SMALL_STATE(153)] = 7274,
  [SMALL_STATE(154)] = 7315,
  [SMALL_STATE(155)] = 7356,
  [SMALL_STATE(156)] = 7382,
  [SMALL_STATE(157)] = 7410,
  [SMALL_STATE(158)] = 7456,
  [SMALL_STATE(159)] = 7484,
  [SMALL_STATE(160)] = 7516,
  [SMALL_STATE(161)] = 7544,
  [SMALL_STATE(162)] = 7572,
  [SMALL_STATE(163)] = 7594,
  [SMALL_STATE(164)] = 7622,
  [SMALL_STATE(165)] = 7668,
  [SMALL_STATE(166)] = 7699,
  [SMALL_STATE(167)] = 7742,
  [SMALL_STATE(168)] = 7773,
  [SMALL_STATE(169)] = 7799,
  [SMALL_STATE(170)] = 7823,
  [SMALL_STATE(171)] = 7849,
  [SMALL_STATE(172)] = 7875,
  [SMALL_STATE(173)] = 7899,
  [SMALL_STATE(174)] = 7925,
  [SMALL_STATE(175)] = 7952,
  [SMALL_STATE(176)] = 7975,
  [SMALL_STATE(177)] = 8000,
  [SMALL_STATE(178)] = 8021,
  [SMALL_STATE(179)] = 8046,
  [SMALL_STATE(180)] = 8069,
  [SMALL_STATE(181)] = 8094,
  [SMALL_STATE(182)] = 8123,
  [SMALL_STATE(183)] = 8146,
  [SMALL_STATE(184)] = 8169,
  [SMALL_STATE(185)] = 8190,
  [SMALL_STATE(186)] = 8213,
  [SMALL_STATE(187)] = 8234,
  [SMALL_STATE(188)] = 8259,
  [SMALL_STATE(189)] = 8280,
  [SMALL_STATE(190)] = 8301,
  [SMALL_STATE(191)] = 8322,
  [SMALL_STATE(192)] = 8359,
  [SMALL_STATE(193)] = 8384,
  [SMALL_STATE(194)] = 8409,
  [SMALL_STATE(195)] = 8434,
  [SMALL_STATE(196)] = 8459,
  [SMALL_STATE(197)] = 8484,
  [SMALL_STATE(198)] = 8505,
  [SMALL_STATE(199)] = 8530,
  [SMALL_STATE(200)] = 8564,
  [SMALL_STATE(201)] = 8584,
  [SMALL_STATE(202)] = 8608,
  [SMALL_STATE(203)] = 8642,
  [SMALL_STATE(204)] = 8666,
  [SMALL_STATE(205)] = 8694,
  [SMALL_STATE(206)] = 8730,
  [SMALL_STATE(207)] = 8764,
  [SMALL_STATE(208)] = 8788,
  [SMALL_STATE(209)] = 8810,
  [SMALL_STATE(210)] = 8834,
  [SMALL_STATE(211)] = 8868,
  [SMALL_STATE(212)] = 8902,
  [SMALL_STATE(213)] = 8924,
  [SMALL_STATE(214)] = 8958,
  [SMALL_STATE(215)] = 8982,
  [SMALL_STATE(216)] = 9016,
  [SMALL_STATE(217)] = 9038,
  [SMALL_STATE(218)] = 9066,
  [SMALL_STATE(219)] = 9090,
  [SMALL_STATE(220)] = 9118,
  [SMALL_STATE(221)] = 9146,
  [SMALL_STATE(222)] = 9166,
  [SMALL_STATE(223)] = 9200,
  [SMALL_STATE(224)] = 9217,
  [SMALL_STATE(225)] = 9234,
  [SMALL_STATE(226)] = 9257,
  [SMALL_STATE(227)] = 9286,
  [SMALL_STATE(228)] = 9303,
  [SMALL_STATE(229)] = 9320,
  [SMALL_STATE(230)] = 9337,
  [SMALL_STATE(231)] = 9354,
  [SMALL_STATE(232)] = 9377,
  [SMALL_STATE(233)] = 9396,
  [SMALL_STATE(234)] = 9427,
  [SMALL_STATE(235)] = 9444,
  [SMALL_STATE(236)] = 9475,
  [SMALL_STATE(237)] = 9498,
  [SMALL_STATE(238)] = 9521,
  [SMALL_STATE(239)] = 9538,
  [SMALL_STATE(240)] = 9561,
  [SMALL_STATE(241)] = 9580,
  [SMALL_STATE(242)] = 9602,
  [SMALL_STATE(243)] = 9624,
  [SMALL_STATE(244)] = 9646,
  [SMALL_STATE(245)] = 9674,
  [SMALL_STATE(246)] = 9702,
  [SMALL_STATE(247)] = 9723,
  [SMALL_STATE(248)] = 9746,
  [SMALL_STATE(249)] = 9767,
  [SMALL_STATE(250)] = 9788,
  [SMALL_STATE(251)] = 9809,
  [SMALL_STATE(252)] = 9834,
  [SMALL_STATE(253)] = 9855,
  [SMALL_STATE(254)] = 9876,
  [SMALL_STATE(255)] = 9899,
  [SMALL_STATE(256)] = 9920,
  [SMALL_STATE(257)] = 9935,
  [SMALL_STATE(258)] = 9958,
  [SMALL_STATE(259)] = 9981,
  [SMALL_STATE(260)] = 10004,
  [SMALL_STATE(261)] = 10019,
  [SMALL_STATE(262)] = 10040,
  [SMALL_STATE(263)] = 10063,
  [SMALL_STATE(264)] = 10086,
  [SMALL_STATE(265)] = 10107,
  [SMALL_STATE(266)] = 10128,
  [SMALL_STATE(267)] = 10156,
  [SMALL_STATE(268)] = 10176,
  [SMALL_STATE(269)] = 10196,
  [SMALL_STATE(270)] = 10216,
  [SMALL_STATE(271)] = 10240,
  [SMALL_STATE(272)] = 10256,
  [SMALL_STATE(273)] = 10280,
  [SMALL_STATE(274)] = 10306,
  [SMALL_STATE(275)] = 10324,
  [SMALL_STATE(276)] = 10348,
  [SMALL_STATE(277)] = 10370,
  [SMALL_STATE(278)] = 10392,
  [SMALL_STATE(279)] = 10416,
  [SMALL_STATE(280)] = 10436,
  [SMALL_STATE(281)] = 10454,
  [SMALL_STATE(282)] = 10472,
  [SMALL_STATE(283)] = 10496,
  [SMALL_STATE(284)] = 10516,
  [SMALL_STATE(285)] = 10536,
  [SMALL_STATE(286)] = 10556,
  [SMALL_STATE(287)] = 10580,
  [SMALL_STATE(288)] = 10604,
  [SMALL_STATE(289)] = 10628,
  [SMALL_STATE(290)] = 10656,
  [SMALL_STATE(291)] = 10675,
  [SMALL_STATE(292)] = 10688,
  [SMALL_STATE(293)] = 10701,
  [SMALL_STATE(294)] = 10722,
  [SMALL_STATE(295)] = 10741,
  [SMALL_STATE(296)] = 10754,
  [SMALL_STATE(297)] = 10767,
  [SMALL_STATE(298)] = 10784,
  [SMALL_STATE(299)] = 10803,
  [SMALL_STATE(300)] = 10816,
  [SMALL_STATE(301)] = 10835,
  [SMALL_STATE(302)] = 10854,
  [SMALL_STATE(303)] = 10869,
  [SMALL_STATE(304)] = 10890,
  [SMALL_STATE(305)] = 10905,
  [SMALL_STATE(306)] = 10918,
  [SMALL_STATE(307)] = 10937,
  [SMALL_STATE(308)] = 10950,
  [SMALL_STATE(309)] = 10968,
  [SMALL_STATE(310)] = 10986,
  [SMALL_STATE(311)] = 11004,
  [SMALL_STATE(312)] = 11020,
  [SMALL_STATE(313)] = 11036,
  [SMALL_STATE(314)] = 11054,
  [SMALL_STATE(315)] = 11070,
  [SMALL_STATE(316)] = 11088,
  [SMALL_STATE(317)] = 11110,
  [SMALL_STATE(318)] = 11122,
  [SMALL_STATE(319)] = 11144,
  [SMALL_STATE(320)] = 11162,
  [SMALL_STATE(321)] = 11174,
  [SMALL_STATE(322)] = 11188,
  [SMALL_STATE(323)] = 11206,
  [SMALL_STATE(324)] = 11228,
  [SMALL_STATE(325)] = 11246,
  [SMALL_STATE(326)] = 11268,
  [SMALL_STATE(327)] = 11280,
  [SMALL_STATE(328)] = 11298,
  [SMALL_STATE(329)] = 11316,
  [SMALL_STATE(330)] = 11334,
  [SMALL_STATE(331)] = 11350,
  [SMALL_STATE(332)] = 11368,
  [SMALL_STATE(333)] = 11386,
  [SMALL_STATE(334)] = 11402,
  [SMALL_STATE(335)] = 11418,
  [SMALL_STATE(336)] = 11434,
  [SMALL_STATE(337)] = 11452,
  [SMALL_STATE(338)] = 11470,
  [SMALL_STATE(339)] = 11482,
  [SMALL_STATE(340)] = 11500,
  [SMALL_STATE(341)] = 11518,
  [SMALL_STATE(342)] = 11538,
  [SMALL_STATE(343)] = 11554,
  [SMALL_STATE(344)] = 11570,
  [SMALL_STATE(345)] = 11588,
  [SMALL_STATE(346)] = 11604,
  [SMALL_STATE(347)] = 11620,
  [SMALL_STATE(348)] = 11638,
  [SMALL_STATE(349)] = 11660,
  [SMALL_STATE(350)] = 11676,
  [SMALL_STATE(351)] = 11694,
  [SMALL_STATE(352)] = 11712,
  [SMALL_STATE(353)] = 11730,
  [SMALL_STATE(354)] = 11748,
  [SMALL_STATE(355)] = 11768,
  [SMALL_STATE(356)] = 11784,
  [SMALL_STATE(357)] = 11802,
  [SMALL_STATE(358)] = 11817,
  [SMALL_STATE(359)] = 11832,
  [SMALL_STATE(360)] = 11847,
  [SMALL_STATE(361)] = 11862,
  [SMALL_STATE(362)] = 11877,
  [SMALL_STATE(363)] = 11892,
  [SMALL_STATE(364)] = 11911,
  [SMALL_STATE(365)] = 11930,
  [SMALL_STATE(366)] = 11943,
  [SMALL_STATE(367)] = 11962,
  [SMALL_STATE(368)] = 11977,
  [SMALL_STATE(369)] = 11992,
  [SMALL_STATE(370)] = 12011,
  [SMALL_STATE(371)] = 12026,
  [SMALL_STATE(372)] = 12041,
  [SMALL_STATE(373)] = 12056,
  [SMALL_STATE(374)] = 12071,
  [SMALL_STATE(375)] = 12086,
  [SMALL_STATE(376)] = 12101,
  [SMALL_STATE(377)] = 12116,
  [SMALL_STATE(378)] = 12127,
  [SMALL_STATE(379)] = 12146,
  [SMALL_STATE(380)] = 12161,
  [SMALL_STATE(381)] = 12176,
  [SMALL_STATE(382)] = 12189,
  [SMALL_STATE(383)] = 12204,
  [SMALL_STATE(384)] = 12219,
  [SMALL_STATE(385)] = 12230,
  [SMALL_STATE(386)] = 12243,
  [SMALL_STATE(387)] = 12258,
  [SMALL_STATE(388)] = 12273,
  [SMALL_STATE(389)] = 12290,
  [SMALL_STATE(390)] = 12305,
  [SMALL_STATE(391)] = 12320,
  [SMALL_STATE(392)] = 12335,
  [SMALL_STATE(393)] = 12350,
  [SMALL_STATE(394)] = 12365,
  [SMALL_STATE(395)] = 12380,
  [SMALL_STATE(396)] = 12395,
  [SMALL_STATE(397)] = 12410,
  [SMALL_STATE(398)] = 12423,
  [SMALL_STATE(399)] = 12438,
  [SMALL_STATE(400)] = 12453,
  [SMALL_STATE(401)] = 12468,
  [SMALL_STATE(402)] = 12479,
  [SMALL_STATE(403)] = 12492,
  [SMALL_STATE(404)] = 12507,
  [SMALL_STATE(405)] = 12518,
  [SMALL_STATE(406)] = 12533,
  [SMALL_STATE(407)] = 12548,
  [SMALL_STATE(408)] = 12563,
  [SMALL_STATE(409)] = 12578,
  [SMALL_STATE(410)] = 12593,
  [SMALL_STATE(411)] = 12608,
  [SMALL_STATE(412)] = 12623,
  [SMALL_STATE(413)] = 12638,
  [SMALL_STATE(414)] = 12655,
  [SMALL_STATE(415)] = 12670,
  [SMALL_STATE(416)] = 12689,
  [SMALL_STATE(417)] = 12706,
  [SMALL_STATE(418)] = 12723,
  [SMALL_STATE(419)] = 12738,
  [SMALL_STATE(420)] = 12755,
  [SMALL_STATE(421)] = 12770,
  [SMALL_STATE(422)] = 12785,
  [SMALL_STATE(423)] = 12802,
  [SMALL_STATE(424)] = 12819,
  [SMALL_STATE(425)] = 12834,
  [SMALL_STATE(426)] = 12849,
  [SMALL_STATE(427)] = 12862,
  [SMALL_STATE(428)] = 12877,
  [SMALL_STATE(429)] = 12890,
  [SMALL_STATE(430)] = 12907,
  [SMALL_STATE(431)] = 12922,
  [SMALL_STATE(432)] = 12937,
  [SMALL_STATE(433)] = 12952,
  [SMALL_STATE(434)] = 12963,
  [SMALL_STATE(435)] = 12978,
  [SMALL_STATE(436)] = 12993,
  [SMALL_STATE(437)] = 13006,
  [SMALL_STATE(438)] = 13021,
  [SMALL_STATE(439)] = 13036,
  [SMALL_STATE(440)] = 13051,
  [SMALL_STATE(441)] = 13066,
  [SMALL_STATE(442)] = 13081,
  [SMALL_STATE(443)] = 13096,
  [SMALL_STATE(444)] = 13111,
  [SMALL_STATE(445)] = 13126,
  [SMALL_STATE(446)] = 13141,
  [SMALL_STATE(447)] = 13154,
  [SMALL_STATE(448)] = 13169,
  [SMALL_STATE(449)] = 13184,
  [SMALL_STATE(450)] = 13195,
  [SMALL_STATE(451)] = 13210,
  [SMALL_STATE(452)] = 13225,
  [SMALL_STATE(453)] = 13236,
  [SMALL_STATE(454)] = 13251,
  [SMALL_STATE(455)] = 13266,
  [SMALL_STATE(456)] = 13279,
  [SMALL_STATE(457)] = 13294,
  [SMALL_STATE(458)] = 13309,
  [SMALL_STATE(459)] = 13324,
  [SMALL_STATE(460)] = 13339,
  [SMALL_STATE(461)] = 13354,
  [SMALL_STATE(462)] = 13367,
  [SMALL_STATE(463)] = 13386,
  [SMALL_STATE(464)] = 13401,
  [SMALL_STATE(465)] = 13416,
  [SMALL_STATE(466)] = 13431,
  [SMALL_STATE(467)] = 13444,
  [SMALL_STATE(468)] = 13463,
  [SMALL_STATE(469)] = 13478,
  [SMALL_STATE(470)] = 13491,
  [SMALL_STATE(471)] = 13504,
  [SMALL_STATE(472)] = 13515,
  [SMALL_STATE(473)] = 13530,
  [SMALL_STATE(474)] = 13545,
  [SMALL_STATE(475)] = 13560,
  [SMALL_STATE(476)] = 13575,
  [SMALL_STATE(477)] = 13590,
  [SMALL_STATE(478)] = 13609,
  [SMALL_STATE(479)] = 13624,
  [SMALL_STATE(480)] = 13643,
  [SMALL_STATE(481)] = 13656,
  [SMALL_STATE(482)] = 13675,
  [SMALL_STATE(483)] = 13687,
  [SMALL_STATE(484)] = 13703,
  [SMALL_STATE(485)] = 13717,
  [SMALL_STATE(486)] = 13727,
  [SMALL_STATE(487)] = 13741,
  [SMALL_STATE(488)] = 13751,
  [SMALL_STATE(489)] = 13761,
  [SMALL_STATE(490)] = 13773,
  [SMALL_STATE(491)] = 13785,
  [SMALL_STATE(492)] = 13797,
  [SMALL_STATE(493)] = 13813,
  [SMALL_STATE(494)] = 13823,
  [SMALL_STATE(495)] = 13837,
  [SMALL_STATE(496)] = 13847,
  [SMALL_STATE(497)] = 13857,
  [SMALL_STATE(498)] = 13873,
  [SMALL_STATE(499)] = 13885,
  [SMALL_STATE(500)] = 13895,
  [SMALL_STATE(501)] = 13907,
  [SMALL_STATE(502)] = 13917,
  [SMALL_STATE(503)] = 13927,
  [SMALL_STATE(504)] = 13937,
  [SMALL_STATE(505)] = 13947,
  [SMALL_STATE(506)] = 13961,
  [SMALL_STATE(507)] = 13977,
  [SMALL_STATE(508)] = 13987,
  [SMALL_STATE(509)] = 14001,
  [SMALL_STATE(510)] = 14011,
  [SMALL_STATE(511)] = 14025,
  [SMALL_STATE(512)] = 14035,
  [SMALL_STATE(513)] = 14049,
  [SMALL_STATE(514)] = 14061,
  [SMALL_STATE(515)] = 14073,
  [SMALL_STATE(516)] = 14083,
  [SMALL_STATE(517)] = 14095,
  [SMALL_STATE(518)] = 14107,
  [SMALL_STATE(519)] = 14117,
  [SMALL_STATE(520)] = 14127,
  [SMALL_STATE(521)] = 14143,
  [SMALL_STATE(522)] = 14155,
  [SMALL_STATE(523)] = 14165,
  [SMALL_STATE(524)] = 14177,
  [SMALL_STATE(525)] = 14189,
  [SMALL_STATE(526)] = 14199,
  [SMALL_STATE(527)] = 14211,
  [SMALL_STATE(528)] = 14223,
  [SMALL_STATE(529)] = 14233,
  [SMALL_STATE(530)] = 14243,
  [SMALL_STATE(531)] = 14257,
  [SMALL_STATE(532)] = 14269,
  [SMALL_STATE(533)] = 14283,
  [SMALL_STATE(534)] = 14295,
  [SMALL_STATE(535)] = 14309,
  [SMALL_STATE(536)] = 14323,
  [SMALL_STATE(537)] = 14333,
  [SMALL_STATE(538)] = 14347,
  [SMALL_STATE(539)] = 14357,
  [SMALL_STATE(540)] = 14369,
  [SMALL_STATE(541)] = 14381,
  [SMALL_STATE(542)] = 14391,
  [SMALL_STATE(543)] = 14403,
  [SMALL_STATE(544)] = 14415,
  [SMALL_STATE(545)] = 14431,
  [SMALL_STATE(546)] = 14443,
  [SMALL_STATE(547)] = 14453,
  [SMALL_STATE(548)] = 14463,
  [SMALL_STATE(549)] = 14479,
  [SMALL_STATE(550)] = 14489,
  [SMALL_STATE(551)] = 14501,
  [SMALL_STATE(552)] = 14513,
  [SMALL_STATE(553)] = 14522,
  [SMALL_STATE(554)] = 14535,
  [SMALL_STATE(555)] = 14548,
  [SMALL_STATE(556)] = 14559,
  [SMALL_STATE(557)] = 14568,
  [SMALL_STATE(558)] = 14581,
  [SMALL_STATE(559)] = 14594,
  [SMALL_STATE(560)] = 14607,
  [SMALL_STATE(561)] = 14620,
  [SMALL_STATE(562)] = 14633,
  [SMALL_STATE(563)] = 14646,
  [SMALL_STATE(564)] = 14659,
  [SMALL_STATE(565)] = 14672,
  [SMALL_STATE(566)] = 14685,
  [SMALL_STATE(567)] = 14698,
  [SMALL_STATE(568)] = 14711,
  [SMALL_STATE(569)] = 14724,
  [SMALL_STATE(570)] = 14733,
  [SMALL_STATE(571)] = 14746,
  [SMALL_STATE(572)] = 14757,
  [SMALL_STATE(573)] = 14770,
  [SMALL_STATE(574)] = 14779,
  [SMALL_STATE(575)] = 14788,
  [SMALL_STATE(576)] = 14801,
  [SMALL_STATE(577)] = 14814,
  [SMALL_STATE(578)] = 14825,
  [SMALL_STATE(579)] = 14834,
  [SMALL_STATE(580)] = 14847,
  [SMALL_STATE(581)] = 14860,
  [SMALL_STATE(582)] = 14873,
  [SMALL_STATE(583)] = 14882,
  [SMALL_STATE(584)] = 14891,
  [SMALL_STATE(585)] = 14904,
  [SMALL_STATE(586)] = 14915,
  [SMALL_STATE(587)] = 14928,
  [SMALL_STATE(588)] = 14941,
  [SMALL_STATE(589)] = 14952,
  [SMALL_STATE(590)] = 14961,
  [SMALL_STATE(591)] = 14970,
  [SMALL_STATE(592)] = 14983,
  [SMALL_STATE(593)] = 14996,
  [SMALL_STATE(594)] = 15005,
  [SMALL_STATE(595)] = 15018,
  [SMALL_STATE(596)] = 15029,
  [SMALL_STATE(597)] = 15038,
  [SMALL_STATE(598)] = 15049,
  [SMALL_STATE(599)] = 15062,
  [SMALL_STATE(600)] = 15073,
  [SMALL_STATE(601)] = 15086,
  [SMALL_STATE(602)] = 15097,
  [SMALL_STATE(603)] = 15110,
  [SMALL_STATE(604)] = 15123,
  [SMALL_STATE(605)] = 15136,
  [SMALL_STATE(606)] = 15149,
  [SMALL_STATE(607)] = 15162,
  [SMALL_STATE(608)] = 15175,
  [SMALL_STATE(609)] = 15186,
  [SMALL_STATE(610)] = 15197,
  [SMALL_STATE(611)] = 15208,
  [SMALL_STATE(612)] = 15219,
  [SMALL_STATE(613)] = 15232,
  [SMALL_STATE(614)] = 15245,
  [SMALL_STATE(615)] = 15254,
  [SMALL_STATE(616)] = 15263,
  [SMALL_STATE(617)] = 15276,
  [SMALL_STATE(618)] = 15289,
  [SMALL_STATE(619)] = 15300,
  [SMALL_STATE(620)] = 15313,
  [SMALL_STATE(621)] = 15326,
  [SMALL_STATE(622)] = 15335,
  [SMALL_STATE(623)] = 15344,
  [SMALL_STATE(624)] = 15357,
  [SMALL_STATE(625)] = 15370,
  [SMALL_STATE(626)] = 15383,
  [SMALL_STATE(627)] = 15396,
  [SMALL_STATE(628)] = 15409,
  [SMALL_STATE(629)] = 15422,
  [SMALL_STATE(630)] = 15435,
  [SMALL_STATE(631)] = 15448,
  [SMALL_STATE(632)] = 15461,
  [SMALL_STATE(633)] = 15470,
  [SMALL_STATE(634)] = 15483,
  [SMALL_STATE(635)] = 15494,
  [SMALL_STATE(636)] = 15507,
  [SMALL_STATE(637)] = 15520,
  [SMALL_STATE(638)] = 15533,
  [SMALL_STATE(639)] = 15546,
  [SMALL_STATE(640)] = 15557,
  [SMALL_STATE(641)] = 15570,
  [SMALL_STATE(642)] = 15578,
  [SMALL_STATE(643)] = 15586,
  [SMALL_STATE(644)] = 15594,
  [SMALL_STATE(645)] = 15602,
  [SMALL_STATE(646)] = 15610,
  [SMALL_STATE(647)] = 15620,
  [SMALL_STATE(648)] = 15630,
  [SMALL_STATE(649)] = 15638,
  [SMALL_STATE(650)] = 15648,
  [SMALL_STATE(651)] = 15658,
  [SMALL_STATE(652)] = 15668,
  [SMALL_STATE(653)] = 15678,
  [SMALL_STATE(654)] = 15688,
  [SMALL_STATE(655)] = 15698,
  [SMALL_STATE(656)] = 15706,
  [SMALL_STATE(657)] = 15716,
  [SMALL_STATE(658)] = 15726,
  [SMALL_STATE(659)] = 15736,
  [SMALL_STATE(660)] = 15744,
  [SMALL_STATE(661)] = 15754,
  [SMALL_STATE(662)] = 15764,
  [SMALL_STATE(663)] = 15772,
  [SMALL_STATE(664)] = 15782,
  [SMALL_STATE(665)] = 15792,
  [SMALL_STATE(666)] = 15802,
  [SMALL_STATE(667)] = 15812,
  [SMALL_STATE(668)] = 15820,
  [SMALL_STATE(669)] = 15830,
  [SMALL_STATE(670)] = 15840,
  [SMALL_STATE(671)] = 15848,
  [SMALL_STATE(672)] = 15856,
  [SMALL_STATE(673)] = 15864,
  [SMALL_STATE(674)] = 15874,
  [SMALL_STATE(675)] = 15882,
  [SMALL_STATE(676)] = 15892,
  [SMALL_STATE(677)] = 15902,
  [SMALL_STATE(678)] = 15912,
  [SMALL_STATE(679)] = 15922,
  [SMALL_STATE(680)] = 15932,
  [SMALL_STATE(681)] = 15940,
  [SMALL_STATE(682)] = 15948,
  [SMALL_STATE(683)] = 15956,
  [SMALL_STATE(684)] = 15966,
  [SMALL_STATE(685)] = 15974,
  [SMALL_STATE(686)] = 15984,
  [SMALL_STATE(687)] = 15994,
  [SMALL_STATE(688)] = 16002,
  [SMALL_STATE(689)] = 16012,
  [SMALL_STATE(690)] = 16020,
  [SMALL_STATE(691)] = 16028,
  [SMALL_STATE(692)] = 16036,
  [SMALL_STATE(693)] = 16046,
  [SMALL_STATE(694)] = 16056,
  [SMALL_STATE(695)] = 16066,
  [SMALL_STATE(696)] = 16076,
  [SMALL_STATE(697)] = 16086,
  [SMALL_STATE(698)] = 16096,
  [SMALL_STATE(699)] = 16106,
  [SMALL_STATE(700)] = 16114,
  [SMALL_STATE(701)] = 16122,
  [SMALL_STATE(702)] = 16130,
  [SMALL_STATE(703)] = 16140,
  [SMALL_STATE(704)] = 16150,
  [SMALL_STATE(705)] = 16157,
  [SMALL_STATE(706)] = 16164,
  [SMALL_STATE(707)] = 16171,
  [SMALL_STATE(708)] = 16178,
  [SMALL_STATE(709)] = 16185,
  [SMALL_STATE(710)] = 16192,
  [SMALL_STATE(711)] = 16199,
  [SMALL_STATE(712)] = 16206,
  [SMALL_STATE(713)] = 16213,
  [SMALL_STATE(714)] = 16220,
  [SMALL_STATE(715)] = 16227,
  [SMALL_STATE(716)] = 16234,
  [SMALL_STATE(717)] = 16241,
  [SMALL_STATE(718)] = 16248,
  [SMALL_STATE(719)] = 16255,
  [SMALL_STATE(720)] = 16262,
  [SMALL_STATE(721)] = 16269,
  [SMALL_STATE(722)] = 16276,
  [SMALL_STATE(723)] = 16283,
  [SMALL_STATE(724)] = 16290,
  [SMALL_STATE(725)] = 16297,
  [SMALL_STATE(726)] = 16304,
  [SMALL_STATE(727)] = 16311,
  [SMALL_STATE(728)] = 16318,
  [SMALL_STATE(729)] = 16325,
  [SMALL_STATE(730)] = 16332,
  [SMALL_STATE(731)] = 16339,
  [SMALL_STATE(732)] = 16346,
  [SMALL_STATE(733)] = 16353,
  [SMALL_STATE(734)] = 16360,
  [SMALL_STATE(735)] = 16367,
  [SMALL_STATE(736)] = 16374,
  [SMALL_STATE(737)] = 16381,
  [SMALL_STATE(738)] = 16388,
  [SMALL_STATE(739)] = 16395,
  [SMALL_STATE(740)] = 16402,
  [SMALL_STATE(741)] = 16409,
  [SMALL_STATE(742)] = 16416,
  [SMALL_STATE(743)] = 16423,
  [SMALL_STATE(744)] = 16430,
  [SMALL_STATE(745)] = 16437,
  [SMALL_STATE(746)] = 16444,
  [SMALL_STATE(747)] = 16451,
  [SMALL_STATE(748)] = 16458,
  [SMALL_STATE(749)] = 16465,
  [SMALL_STATE(750)] = 16472,
  [SMALL_STATE(751)] = 16479,
  [SMALL_STATE(752)] = 16486,
  [SMALL_STATE(753)] = 16493,
  [SMALL_STATE(754)] = 16500,
  [SMALL_STATE(755)] = 16507,
  [SMALL_STATE(756)] = 16514,
  [SMALL_STATE(757)] = 16521,
  [SMALL_STATE(758)] = 16528,
  [SMALL_STATE(759)] = 16535,
  [SMALL_STATE(760)] = 16542,
  [SMALL_STATE(761)] = 16549,
  [SMALL_STATE(762)] = 16556,
  [SMALL_STATE(763)] = 16563,
  [SMALL_STATE(764)] = 16570,
  [SMALL_STATE(765)] = 16577,
  [SMALL_STATE(766)] = 16584,
  [SMALL_STATE(767)] = 16591,
  [SMALL_STATE(768)] = 16598,
  [SMALL_STATE(769)] = 16605,
  [SMALL_STATE(770)] = 16612,
  [SMALL_STATE(771)] = 16619,
  [SMALL_STATE(772)] = 16626,
  [SMALL_STATE(773)] = 16633,
  [SMALL_STATE(774)] = 16640,
  [SMALL_STATE(775)] = 16647,
  [SMALL_STATE(776)] = 16654,
  [SMALL_STATE(777)] = 16661,
  [SMALL_STATE(778)] = 16668,
  [SMALL_STATE(779)] = 16675,
  [SMALL_STATE(780)] = 16682,
  [SMALL_STATE(781)] = 16689,
  [SMALL_STATE(782)] = 16696,
  [SMALL_STATE(783)] = 16703,
  [SMALL_STATE(784)] = 16710,
  [SMALL_STATE(785)] = 16717,
  [SMALL_STATE(786)] = 16724,
  [SMALL_STATE(787)] = 16731,
  [SMALL_STATE(788)] = 16738,
  [SMALL_STATE(789)] = 16745,
  [SMALL_STATE(790)] = 16752,
  [SMALL_STATE(791)] = 16759,
  [SMALL_STATE(792)] = 16766,
  [SMALL_STATE(793)] = 16773,
  [SMALL_STATE(794)] = 16780,
  [SMALL_STATE(795)] = 16787,
  [SMALL_STATE(796)] = 16794,
  [SMALL_STATE(797)] = 16801,
  [SMALL_STATE(798)] = 16808,
  [SMALL_STATE(799)] = 16815,
  [SMALL_STATE(800)] = 16822,
  [SMALL_STATE(801)] = 16829,
  [SMALL_STATE(802)] = 16836,
  [SMALL_STATE(803)] = 16843,
  [SMALL_STATE(804)] = 16850,
  [SMALL_STATE(805)] = 16857,
  [SMALL_STATE(806)] = 16864,
  [SMALL_STATE(807)] = 16871,
  [SMALL_STATE(808)] = 16878,
  [SMALL_STATE(809)] = 16885,
  [SMALL_STATE(810)] = 16892,
  [SMALL_STATE(811)] = 16899,
  [SMALL_STATE(812)] = 16906,
  [SMALL_STATE(813)] = 16913,
  [SMALL_STATE(814)] = 16920,
  [SMALL_STATE(815)] = 16927,
  [SMALL_STATE(816)] = 16934,
  [SMALL_STATE(817)] = 16941,
  [SMALL_STATE(818)] = 16948,
  [SMALL_STATE(819)] = 16955,
  [SMALL_STATE(820)] = 16962,
  [SMALL_STATE(821)] = 16969,
  [SMALL_STATE(822)] = 16976,
  [SMALL_STATE(823)] = 16983,
  [SMALL_STATE(824)] = 16990,
  [SMALL_STATE(825)] = 16997,
  [SMALL_STATE(826)] = 17004,
  [SMALL_STATE(827)] = 17011,
  [SMALL_STATE(828)] = 17018,
  [SMALL_STATE(829)] = 17025,
  [SMALL_STATE(830)] = 17032,
  [SMALL_STATE(831)] = 17039,
  [SMALL_STATE(832)] = 17046,
  [SMALL_STATE(833)] = 17053,
  [SMALL_STATE(834)] = 17060,
  [SMALL_STATE(835)] = 17067,
  [SMALL_STATE(836)] = 17074,
  [SMALL_STATE(837)] = 17081,
  [SMALL_STATE(838)] = 17088,
  [SMALL_STATE(839)] = 17095,
  [SMALL_STATE(840)] = 17102,
  [SMALL_STATE(841)] = 17109,
  [SMALL_STATE(842)] = 17116,
  [SMALL_STATE(843)] = 17123,
  [SMALL_STATE(844)] = 17130,
  [SMALL_STATE(845)] = 17137,
  [SMALL_STATE(846)] = 17144,
  [SMALL_STATE(847)] = 17151,
  [SMALL_STATE(848)] = 17158,
  [SMALL_STATE(849)] = 17165,
  [SMALL_STATE(850)] = 17172,
  [SMALL_STATE(851)] = 17179,
  [SMALL_STATE(852)] = 17186,
  [SMALL_STATE(853)] = 17193,
  [SMALL_STATE(854)] = 17200,
  [SMALL_STATE(855)] = 17207,
  [SMALL_STATE(856)] = 17214,
  [SMALL_STATE(857)] = 17221,
  [SMALL_STATE(858)] = 17228,
  [SMALL_STATE(859)] = 17235,
  [SMALL_STATE(860)] = 17242,
  [SMALL_STATE(861)] = 17249,
  [SMALL_STATE(862)] = 17256,
  [SMALL_STATE(863)] = 17263,
  [SMALL_STATE(864)] = 17270,
  [SMALL_STATE(865)] = 17277,
  [SMALL_STATE(866)] = 17284,
  [SMALL_STATE(867)] = 17291,
  [SMALL_STATE(868)] = 17298,
  [SMALL_STATE(869)] = 17305,
  [SMALL_STATE(870)] = 17312,
  [SMALL_STATE(871)] = 17319,
  [SMALL_STATE(872)] = 17326,
  [SMALL_STATE(873)] = 17333,
  [SMALL_STATE(874)] = 17340,
  [SMALL_STATE(875)] = 17347,
  [SMALL_STATE(876)] = 17354,
  [SMALL_STATE(877)] = 17361,
  [SMALL_STATE(878)] = 17368,
  [SMALL_STATE(879)] = 17375,
  [SMALL_STATE(880)] = 17382,
  [SMALL_STATE(881)] = 17389,
  [SMALL_STATE(882)] = 17396,
  [SMALL_STATE(883)] = 17403,
  [SMALL_STATE(884)] = 17410,
  [SMALL_STATE(885)] = 17417,
  [SMALL_STATE(886)] = 17424,
  [SMALL_STATE(887)] = 17431,
  [SMALL_STATE(888)] = 17438,
  [SMALL_STATE(889)] = 17445,
  [SMALL_STATE(890)] = 17452,
  [SMALL_STATE(891)] = 17459,
  [SMALL_STATE(892)] = 17466,
  [SMALL_STATE(893)] = 17473,
  [SMALL_STATE(894)] = 17480,
  [SMALL_STATE(895)] = 17487,
  [SMALL_STATE(896)] = 17494,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(855),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(876),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(884),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(883),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(881),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(879),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumName, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumName, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_globalAccumName, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_globalAccumName, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2), SHIFT_REPEAT(6),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declStmts, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declStmts, 1),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(266),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(884),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(593),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(590),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(583),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(578),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(177),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(883),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(881),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(880),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(879),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(878),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(386),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declStmts_repeat1, 2),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(533),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 2),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_localAccumName, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_localAccumName, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringLiteral, 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringLiteral, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 3),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringLiteral, 3),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringLiteral, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 4),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real, 4),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expr, 3), REDUCE(sym_setBagExpr, 3),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_expr, 3), REDUCE(sym_setBagExpr, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 4),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 4),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expr, 1), REDUCE(sym_setBagExpr, 1),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_expr, 1), REDUCE(sym_setBagExpr, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 1),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setBagExpr, 3),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setBagExpr, 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedefs, 1),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typedefs, 1),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typedefs_repeat1, 2), SHIFT_REPEAT(876),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typedefs_repeat1, 2),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_typedefs_repeat1, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(31),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(31),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 2),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(33),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(33),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(36),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(36),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(37),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(37),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(43),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(877),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attrName, 1),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attrName, 1),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(887),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 3),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 3),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expr, 3), SHIFT(232),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_expr, 3), SHIFT(232),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(66),
  [383] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(66),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(75),
  [413] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(75),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(114),
  [475] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(114),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(117),
  [489] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(117),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBodyStmts, 1),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(120),
  [501] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(120),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_queryBodyStmts_repeat1, 2), SHIFT_REPEAT(77),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_queryBodyStmts_repeat1, 2),
  [521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_queryBodyStmts_repeat1, 2), SHIFT_REPEAT(44),
  [524] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_queryBodyStmts_repeat1, 2), SHIFT_REPEAT(54),
  [527] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_queryBodyStmts_repeat1, 2), SHIFT_REPEAT(108),
  [530] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_queryBodyStmts_repeat1, 2), SHIFT_REPEAT(44),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [537] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(126),
  [540] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(126),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(854),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [559] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(130),
  [562] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(130),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(133),
  [574] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(133),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [607] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(156),
  [610] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(156),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printExpr, 1),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldName, 1),
  [641] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym_expr, 1), REDUCE(sym_setBagExpr, 1), REDUCE(sym_tableName, 1),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [647] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(289),
  [650] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(678),
  [653] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(855),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vSetProj, 1),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignStmt, 5),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumType, 1),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumType, 1),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argList, 1),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumType, 10),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumType, 10),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumType, 9),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumType, 9),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumType, 6),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumType, 6),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumType, 4),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumType, 4),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumType, 4, .production_id = 6),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumType, 4, .production_id = 6),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignStmt, 3),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gAccumAccumStmt, 3),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumType, 11),
  [722] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumType, 11),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseType, 1),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_CREATE_UNDIRECTED_EDGE_repeat2, 5),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_CREATE_VERTEX_repeat1, 5),
  [746] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(208),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argList_repeat1, 2),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [753] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(214),
  [756] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(214),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseType, 1, .production_id = 2),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseType, 4),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseType, 1, .production_id = 3),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tupleType, 1),
  [785] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_atomicVertexType, 1), REDUCE(sym_name, 1),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mathOperator, 1),
  [790] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mathOperator, 1),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [796] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(236),
  [799] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(236),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnStmt, 2),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseType, 1, .production_id = 1),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparisonOperator, 1),
  [812] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparisonOperator, 1),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [822] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(243),
  [825] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(243),
  [828] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(246),
  [831] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(246),
  [834] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(248),
  [837] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(248),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [842] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [846] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [850] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [852] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(253),
  [855] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(253),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [872] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_atomicEdgeType, 1), REDUCE(sym_name, 1),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [883] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(269),
  [886] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(269),
  [889] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_queryBodyStmts_repeat1, 2),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsqlSelectBlock, 2),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepVertexTypes, 3),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [903] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepVertexTypes, 2),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stepVertexTypes_repeat1, 2),
  [909] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stepVertexTypes_repeat1, 2), SHIFT_REPEAT(257),
  [912] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(283),
  [915] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(283),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [920] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [922] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_seed, 1), REDUCE(sym_name, 1),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(894),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(893),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(892),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(890),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [943] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [945] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_paramName, 1), REDUCE(sym_vertexType, 1),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(850),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 4),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [956] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertexSetType, 1),
  [960] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(301),
  [963] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(301),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setBagExpr, 1),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertexSetName, 1),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [976] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pathPattern, 2),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [986] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [988] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(315),
  [991] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(315),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 9),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertexType, 1),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 8),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepVertexTypes, 1),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepVertexSet, 1),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1024] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 6),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 7),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertexAlias, 1),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1050] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [1052] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(329),
  [1055] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(329),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pathPattern, 1),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1064] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_VERTEX, 6, .production_id = 4),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1074] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(336),
  [1077] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(336),
  [1080] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(337),
  [1083] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(337),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomicVertexType, 1),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1090] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsqlSelectBlock, 3),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_WITH, 1),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_VERTEX, 7, .production_id = 4),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 5),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(835),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pathPattern_repeat1, 2),
  [1116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pathPattern_repeat1, 2), SHIFT_REPEAT(824),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_CREATE_GRAPH_repeat1, 2),
  [1131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_CREATE_GRAPH_repeat1, 2), SHIFT_REPEAT(44),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_WITH, 4),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [1152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 11),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 10),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vExprSet, 4),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printStmt, 3),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fromClause_repeat1, 2), SHIFT_REPEAT(164),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fromClause_repeat1, 2),
  [1183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepVertexSet, 3),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsqlSelectBlock, 5),
  [1189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_GRAPH, 5, .production_id = 4),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [1193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simpleSet, 3),
  [1195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_simpleSet, 3), SHIFT(303),
  [1198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simpleSet, 1),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fromClause, 2, .production_id = 5),
  [1204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepEdgeTypes, 2),
  [1206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomicEdgeType, 1),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gsqlSelectBlock_repeat1, 2),
  [1212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gsqlSelectBlock_repeat1, 2), SHIFT_REPEAT(840),
  [1215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsqlSelectBlock, 4),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [1221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ADD_INDEX, 10),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fromClause, 3, .production_id = 5),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepVertexSet, 2),
  [1235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_DIRECTED_EDGE, 13, .production_id = 4),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [1239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_printStmt_repeat1, 2), SHIFT_REPEAT(56),
  [1242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_printStmt_repeat1, 2),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [1248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(847),
  [1250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vExprSet, 5),
  [1252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonKey, 1),
  [1254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_DIRECTED_EDGE, 12, .production_id = 4),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_WITH, 6),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [1266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 12),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DROP_INDEX, 6),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printStmt, 2),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_GRAPH, 6, .production_id = 4),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [1286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pathPattern_repeat1, 6),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_DIRECTED_EDGE, 11, .production_id = 4),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accumType_repeat1, 2),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1300] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stringLiteral_repeat1, 2),
  [1304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stringLiteral_repeat1, 2), SHIFT_REPEAT(483),
  [1307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stringLiteral_repeat1, 2), SHIFT_REPEAT(483),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dmlSubStmtList, 2),
  [1314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_paramName, 1), REDUCE(sym_edgeType, 1),
  [1317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stepEdgeTypes_repeat1, 2),
  [1319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stepEdgeTypes_repeat1, 2), SHIFT_REPEAT(263),
  [1322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ADD_INDEX, 11),
  [1324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_UNDIRECTED_EDGE, 12, .production_id = 4),
  [1326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vSetVarDeclStmt, 6),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterList, 2),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edgeSetType, 1),
  [1338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_CREATE_UNDIRECTED_EDGE_repeat1, 2),
  [1340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_CREATE_UNDIRECTED_EDGE_repeat1, 2), SHIFT_REPEAT(745),
  [1343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createQuery, 4),
  [1345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(544),
  [1351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_UNDIRECTED_EDGE, 11, .production_id = 4),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printExpr, 3),
  [1357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_GRAPH, 9, .production_id = 4),
  [1359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_loading_job, 9, .production_id = 4),
  [1361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_loading_job, 10, .production_id = 4),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [1371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumDeclStmt, 2),
  [1373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printStmt, 4),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_WITH, 7),
  [1381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_loading_job_repeat1, 2),
  [1383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_loading_job_repeat1, 2), SHIFT_REPEAT(770),
  [1386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_UNDIRECTED_EDGE, 13, .production_id = 4),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_GRAPH, 8, .production_id = 4),
  [1392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vSetVarDeclStmt, 3),
  [1394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_whereClause, 2),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_VERTEX, 8, .production_id = 4),
  [1400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_WITH, 9),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseDeclStmt, 2),
  [1408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_condition, 3), SHIFT(88),
  [1411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphName, 1),
  [1413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_DIRECTED_EDGE, 17, .production_id = 4),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_DIRECTED_EDGE, 18, .production_id = 4),
  [1419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_DIRECTED_EDGE, 19, .production_id = 4),
  [1421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dmlSubStmtList_repeat1, 2), SHIFT_REPEAT(251),
  [1424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dmlSubStmtList_repeat1, 2),
  [1426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepEdgeTypes, 3),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [1432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dmlSubStmtList, 1),
  [1434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printStmt, 5),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DROP, 3),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DROP_INDEX, 7),
  [1446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [1452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_condition, 3), SHIFT(76),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumDeclStmt, 3),
  [1459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DROP, 2),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tupleFields_repeat1, 2), SHIFT_REPEAT(153),
  [1466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tupleFields_repeat1, 2),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterType, 3),
  [1474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterList, 3),
  [1476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_CREATE_VERTEX_repeat1, 2),
  [1478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_CREATE_VERTEX_repeat1, 2), SHIFT_REPEAT(490),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tupleFields, 2),
  [1485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_perClauseV2_repeat1, 2),
  [1487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_perClauseV2_repeat1, 2), SHIFT_REPEAT(300),
  [1490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumDeclStmt, 5),
  [1492] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argList_repeat1, 2), SHIFT_REPEAT(105),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterType, 1),
  [1517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dmlSubStmt, 1),
  [1519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseDeclStmt_repeat1, 2), SHIFT_REPEAT(514),
  [1522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_baseDeclStmt_repeat1, 2),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paramName, 1),
  [1530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameterList_repeat1, 3),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterList, 5),
  [1536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_statement, 3),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [1540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returns, 4),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_queryBodyIfStmt_repeat1, 5), SHIFT(138),
  [1547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_queryBodyIfStmt_repeat1, 5), SHIFT(804),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_CREATE_VERTEX_repeat1, 3),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seedSet_repeat1, 2),
  [1562] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seedSet_repeat1, 2), SHIFT_REPEAT(210),
  [1565] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_condition, 3), SHIFT(83),
  [1568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseDeclStmt, 4),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseDeclStmt, 5),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [1578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumDeclStmt, 4),
  [1580] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_paramName, 1), REDUCE(sym_vertexSetName, 1),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectVertParams, 11),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [1589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomicEdgePattern, 1),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [1595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterType, 4),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_CREATE_UNDIRECTED_EDGE_repeat2, 2),
  [1601] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_CREATE_UNDIRECTED_EDGE_repeat2, 2), SHIFT_REPEAT(456),
  [1604] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_condition, 3), SHIFT(80),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_CREATE_UNDIRECTED_EDGE_repeat1, 5),
  [1615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filePath, 1),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1623] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accumType_repeat1, 2), SHIFT_REPEAT(476),
  [1626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterList, 4),
  [1628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseDeclStmt, 3),
  [1630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameterList_repeat1, 2),
  [1632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameterList_repeat1, 2), SHIFT_REPEAT(154),
  [1635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argList, 2),
  [1637] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vExprSet_repeat1, 2), SHIFT_REPEAT(81),
  [1640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vExprSet_repeat1, 2),
  [1642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 13),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1648] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_queryBodyIfStmt_repeat1, 2), SHIFT_REPEAT(731),
  [1651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_queryBodyIfStmt_repeat1, 2),
  [1653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_CREATE_UNDIRECTED_EDGE_repeat2, 3),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumDeclStmt, 6),
  [1659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tupleFields, 3),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accumDeclStmt_repeat1, 2),
  [1665] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accumDeclStmt_repeat1, 2), SHIFT_REPEAT(697),
  [1668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accumDeclStmt_repeat1, 4),
  [1670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_statement, 5),
  [1672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accumType_repeat1, 3),
  [1674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vSetProj, 3),
  [1676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_queryBodyIfStmt_repeat1, 5),
  [1678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 14),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 15),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomicEdgePattern, 2),
  [1692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed, 1),
  [1694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 16),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepEdgeTypes, 1),
  [1700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 17),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepEdgeSet, 1),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_perClauseV2, 4),
  [1714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementType, 2),
  [1716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectVertParams, 16),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_baseDeclStmt_repeat1, 4),
  [1724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(755),
  [1726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed, 2),
  [1736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameterList_repeat1, 5),
  [1738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postAccumClause, 3),
  [1740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumClause, 3),
  [1746] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_vertexAlias, 1), REDUCE(sym_edgeAlias, 1),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(860),
  [1753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 1),
  [1755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementType, 1),
  [1757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tupleFields_repeat1, 3),
  [1759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_perClauseV2, 5),
  [1769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_id_name_type, 3),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 18),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [1797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 19),
  [1799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [1801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [1807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [1809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [1811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [1827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [1835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_columnId, 2),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [1847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [1851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [1853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepEdgeSet, 3),
  [1857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pathEdgePattern, 3),
  [1859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBodyIfStmt, 8),
  [1861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [1863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [1869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edgeAlias, 1),
  [1875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepEdgeSet, 2),
  [1877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [1879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printStmt, 7),
  [1881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [1885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBodyIfStmt, 7),
  [1887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [1897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seedSet, 4),
  [1901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [1903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pathEdgePattern, 1),
  [1905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [1907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printStmt, 6),
  [1909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBodyIfStmt, 6),
  [1911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [1913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 6),
  [1915] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_paramName, 1), REDUCE(sym_varName, 1),
  [1918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simpleSize, 1),
  [1920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [1928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [1934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [1936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seedSet, 3),
  [1942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fileDeclStmt, 5),
  [1950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBodyIfStmt, 5),
  [1952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [1962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [1964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntaxName, 1),
  [1968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsqlSelectClause, 4),
  [1976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [1978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seedSet, 2),
  [1980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1984] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_fileVar, 1), REDUCE(sym_paramName, 1),
  [1987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [1989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [1995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [2001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [2003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [2005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [2007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [2009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [2011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [2013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBody, 3),
  [2015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [2017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [2019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [2021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [2023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [2025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [2027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [2029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [2031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [2033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [2035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [2037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [2039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBody, 2),
  [2041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fileVar, 1),
  [2043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [2045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [2047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [2049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [2051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [2053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [2055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(852),
  [2057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edgeType, 1),
  [2059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [2061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [2063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectStmt, 1),
  [2065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBodyStmt, 1),
  [2067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declStmt, 1),
  [2069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [2071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBody, 1),
  [2073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [2075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [2077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [2079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [2081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [2083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [2085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [2087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [2089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [2091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [2093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [2095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [2097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [2099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [2101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [2103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [2105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryName, 1),
  [2107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [2109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [2111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [2113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [2115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [2117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [2119] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
