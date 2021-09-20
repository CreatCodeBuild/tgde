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
#define STATE_COUNT 873
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 273
#define ALIAS_COUNT 5
#define TOKEN_COUNT 140
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
  aux_sym_interpretQuery_token1 = 14,
  anon_sym_RETURNS = 15,
  anon_sym_EQ = 16,
  anon_sym_COMMA = 17,
  anon_sym_SEMI = 18,
  aux_sym_typedef_token1 = 19,
  aux_sym_typedef_token2 = 20,
  anon_sym_LT = 21,
  anon_sym_GT = 22,
  aux_sym_constant_token1 = 23,
  aux_sym_constant_token2 = 24,
  anon_sym_STAR = 25,
  anon_sym_SLASH = 26,
  anon_sym_PERCENT = 27,
  anon_sym_PLUS = 28,
  anon_sym_DASH = 29,
  anon_sym_LT_LT = 30,
  anon_sym_GT_GT = 31,
  anon_sym_AMP = 32,
  anon_sym_PIPE = 33,
  aux_sym_condition_token1 = 34,
  aux_sym_condition_token2 = 35,
  aux_sym_condition_token3 = 36,
  aux_sym_condition_token4 = 37,
  anon_sym_AND = 38,
  anon_sym_OR = 39,
  anon_sym_LT_EQ = 40,
  anon_sym_GT_EQ = 41,
  anon_sym_EQ_EQ = 42,
  anon_sym_BANG_EQ = 43,
  anon_sym_DASH_GT = 44,
  sym_comment = 45,
  aux_sym_accumDeclStmt_token1 = 46,
  anon_sym_AT = 47,
  anon_sym_AT_AT = 48,
  aux_sym_accumType_token1 = 49,
  aux_sym_accumType_token2 = 50,
  aux_sym_accumType_token3 = 51,
  aux_sym_accumType_token4 = 52,
  aux_sym_accumType_token5 = 53,
  aux_sym_accumType_token6 = 54,
  aux_sym_accumType_token7 = 55,
  aux_sym_accumType_token8 = 56,
  aux_sym_accumType_token9 = 57,
  aux_sym_accumType_token10 = 58,
  aux_sym_accumType_token11 = 59,
  aux_sym_accumType_token12 = 60,
  aux_sym_accumType_token13 = 61,
  aux_sym_accumType_token14 = 62,
  aux_sym_elementType_token1 = 63,
  anon_sym_DOT = 64,
  anon_sym_PLUS_EQ = 65,
  aux_sym_queryBodyIfStmt_token1 = 66,
  aux_sym_queryBodyIfStmt_token2 = 67,
  aux_sym_queryBodyIfStmt_token3 = 68,
  aux_sym_queryBodyIfStmt_token4 = 69,
  aux_sym_queryBodyWhileStmt_token1 = 70,
  aux_sym_queryBodyWhileStmt_token2 = 71,
  aux_sym_queryBodyWhileStmt_token3 = 72,
  anon_sym_ = 73,
  aux_sym_fileDeclStmt_token1 = 74,
  aux_sym_simpleSet_token1 = 75,
  aux_sym_simpleSet_token2 = 76,
  aux_sym_simpleSet_token3 = 77,
  anon_sym__ = 78,
  aux_sym_seed_token1 = 79,
  anon_sym_DOT_STAR = 80,
  aux_sym_seed_token2 = 81,
  aux_sym_selectVertParams_token1 = 82,
  anon_sym_DOLLAR = 83,
  anon_sym_SQUOTE = 84,
  aux_sym_printStmt_token1 = 85,
  aux_sym_printStmt_token2 = 86,
  aux_sym_printStmt_token3 = 87,
  aux_sym_printExpr_token1 = 88,
  anon_sym_LBRACK = 89,
  anon_sym_RBRACK = 90,
  aux_sym_returnStmt_token1 = 91,
  aux_sym_gsqlSelectClause_token1 = 92,
  aux_sym_fromClause_token1 = 93,
  anon_sym_COLON = 94,
  anon_sym_WHERE = 95,
  aux_sym_accumClause_token1 = 96,
  aux_sym_postAccumClause_token1 = 97,
  aux_sym_perClauseV2_token1 = 98,
  anon_sym_DQUOTE = 99,
  aux_sym_stringLiteral_token1 = 100,
  sym_escape_sequence = 101,
  aux_sym_integer_token1 = 102,
  sym_name = 103,
  aux_sym_baseType_token1 = 104,
  aux_sym_baseType_token2 = 105,
  aux_sym_baseType_token3 = 106,
  aux_sym_baseType_token4 = 107,
  aux_sym_baseType_token5 = 108,
  aux_sym_baseType_token6 = 109,
  aux_sym_baseType_token7 = 110,
  anon_sym_SET = 111,
  anon_sym_BAG = 112,
  anon_sym_FILE = 113,
  aux_sym_CREATE_VERTEX_token1 = 114,
  aux_sym_CREATE_UNDIRECTED_EDGE_token1 = 115,
  aux_sym_CREATE_UNDIRECTED_EDGE_token2 = 116,
  aux_sym_CREATE_DIRECTED_EDGE_token1 = 117,
  aux_sym_CREATE_DIRECTED_EDGE_token2 = 118,
  aux_sym_CREATE_DIRECTED_EDGE_token3 = 119,
  aux_sym_WITH_token1 = 120,
  anon_sym_DQUOTEnone_DQUOTE = 121,
  aux_sym_WITH_token2 = 122,
  anon_sym_primary_id_as_attribute = 123,
  anon_sym_DQUOTEtrue_DQUOTE = 124,
  aux_sym_CREATE_GRAPH_token1 = 125,
  aux_sym_CREATE_GRAPH_token2 = 126,
  aux_sym_USE_GRAPH_token1 = 127,
  aux_sym_primary_id_name_type_token1 = 128,
  aux_sym_DROP_token1 = 129,
  aux_sym_DROP_token2 = 130,
  aux_sym_ADD_INDEX_token1 = 131,
  aux_sym_ADD_INDEX_token2 = 132,
  aux_sym_ADD_INDEX_token3 = 133,
  aux_sym_ADD_INDEX_token4 = 134,
  aux_sym_create_loading_job_token1 = 135,
  aux_sym_create_loading_job_token2 = 136,
  aux_sym_create_loading_job_token3 = 137,
  aux_sym_define_statement_token1 = 138,
  aux_sym_define_statement_token2 = 139,
  sym_source_file = 140,
  sym_createQuery = 141,
  sym_createSignature = 142,
  sym_interpretQuery = 143,
  sym_returns = 144,
  sym_parameterList = 145,
  sym_syntaxName = 146,
  sym_queryBody = 147,
  sym_typedefs = 148,
  sym_typedef = 149,
  sym_tupleFields = 150,
  sym_declStmts = 151,
  sym_declStmt = 152,
  sym_queryBodyStmts = 153,
  sym_queryBodyStmt = 154,
  sym_constant = 155,
  sym_mathOperator = 156,
  sym_condition = 157,
  sym_comparisonOperator = 158,
  sym_pathPattern = 159,
  sym_pathEdgePattern = 160,
  sym_atomicEdgePattern = 161,
  sym_accumDeclStmt = 162,
  sym_localAccumName = 163,
  sym_globalAccumName = 164,
  sym_accumType = 165,
  sym_elementType = 166,
  sym_gAccumAccumStmt = 167,
  sym_lAccumAccumStmt = 168,
  sym_assignStmt = 169,
  sym_argList = 170,
  sym_queryBodyIfStmt = 171,
  sym_simpleSize = 172,
  sym_queryBodyWhileStmt = 173,
  sym_dmlSubWhileStmt = 174,
  sym_baseDeclStmt = 175,
  sym_fileDeclStmt = 176,
  sym_fileVar = 177,
  sym_vSetVarDeclStmt = 178,
  sym_simpleSet = 179,
  sym_seedSet = 180,
  sym_seed = 181,
  sym_selectVertParams = 182,
  sym_columnId = 183,
  sym_expr = 184,
  sym_setBagExpr = 185,
  sym_printStmt = 186,
  sym_printExpr = 187,
  sym_vExprSet = 188,
  sym_vSetProj = 189,
  sym_jsonKey = 190,
  sym_returnStmt = 191,
  sym_selectStmt = 192,
  sym_gsqlSelectBlock = 193,
  sym_gsqlSelectClause = 194,
  sym_tableName = 195,
  sym_fromClause = 196,
  sym_stepEdgeSet = 197,
  sym_stepVertexSet = 198,
  sym_alias = 199,
  sym_vertexAlias = 200,
  sym_edgeAlias = 201,
  sym_stepEdgeTypes = 202,
  sym_atomicEdgeType = 203,
  sym_edgeSetType = 204,
  sym_stepVertexTypes = 205,
  sym_atomicVertexType = 206,
  sym_vertexSetType = 207,
  sym_whereClause = 208,
  sym_accumClause = 209,
  sym_postAccumClause = 210,
  sym_perClauseV2 = 211,
  sym_dmlSubStmtList = 212,
  sym_dmlSubStmt = 213,
  sym_stringLiteral = 214,
  sym_integer = 215,
  sym_real = 216,
  sym_numeric = 217,
  sym_graphName = 218,
  sym_queryName = 219,
  sym_paramName = 220,
  sym_vertexType = 221,
  sym_edgeType = 222,
  sym_accumName = 223,
  sym_vertexSetName = 224,
  sym_attrName = 225,
  sym_varName = 226,
  sym_tupleType = 227,
  sym_fieldName = 228,
  sym_filePath = 229,
  sym_type = 230,
  sym_baseType = 231,
  sym_parameterType = 232,
  sym_CREATE_VERTEX = 233,
  sym_CREATE_UNDIRECTED_EDGE = 234,
  sym_CREATE_DIRECTED_EDGE = 235,
  sym_WITH = 236,
  sym_CREATE_GRAPH = 237,
  sym_USE_GRAPH = 238,
  sym_primary_id_name_type = 239,
  sym_DROP = 240,
  sym_ADD_INDEX = 241,
  sym_DROP_INDEX = 242,
  sym_create_loading_job = 243,
  sym_define_statement = 244,
  aux_sym_source_file_repeat1 = 245,
  aux_sym_parameterList_repeat1 = 246,
  aux_sym_typedefs_repeat1 = 247,
  aux_sym_tupleFields_repeat1 = 248,
  aux_sym_declStmts_repeat1 = 249,
  aux_sym_queryBodyStmts_repeat1 = 250,
  aux_sym_pathPattern_repeat1 = 251,
  aux_sym_accumDeclStmt_repeat1 = 252,
  aux_sym_accumType_repeat1 = 253,
  aux_sym_argList_repeat1 = 254,
  aux_sym_queryBodyIfStmt_repeat1 = 255,
  aux_sym_baseDeclStmt_repeat1 = 256,
  aux_sym_seedSet_repeat1 = 257,
  aux_sym_printStmt_repeat1 = 258,
  aux_sym_vExprSet_repeat1 = 259,
  aux_sym_gsqlSelectBlock_repeat1 = 260,
  aux_sym_fromClause_repeat1 = 261,
  aux_sym_stepEdgeTypes_repeat1 = 262,
  aux_sym_stepVertexTypes_repeat1 = 263,
  aux_sym_perClauseV2_repeat1 = 264,
  aux_sym_dmlSubStmtList_repeat1 = 265,
  aux_sym_stringLiteral_repeat1 = 266,
  aux_sym_integer_repeat1 = 267,
  aux_sym_CREATE_VERTEX_repeat1 = 268,
  aux_sym_CREATE_UNDIRECTED_EDGE_repeat1 = 269,
  aux_sym_CREATE_UNDIRECTED_EDGE_repeat2 = 270,
  aux_sym_CREATE_GRAPH_repeat1 = 271,
  aux_sym_create_loading_job_repeat1 = 272,
  anon_alias_sym_DOUBLE = 273,
  anon_alias_sym_FLOAT = 274,
  anon_alias_sym_INT = 275,
  anon_alias_sym_from = 276,
  anon_alias_sym_string = 277,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym_createSignature_token1] = "CREATE",
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
  [aux_sym_interpretQuery_token1] = "INTERPRET",
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
  [anon_sym_DASH_GT] = "->",
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
  [anon_sym_DOT] = ".",
  [anon_sym_PLUS_EQ] = "+=",
  [aux_sym_queryBodyIfStmt_token1] = "IF",
  [aux_sym_queryBodyIfStmt_token2] = "THEN",
  [aux_sym_queryBodyIfStmt_token3] = "ELSE",
  [aux_sym_queryBodyIfStmt_token4] = "END",
  [aux_sym_queryBodyWhileStmt_token1] = "WHILE",
  [aux_sym_queryBodyWhileStmt_token2] = "LIMIT",
  [aux_sym_queryBodyWhileStmt_token3] = "DO",
  [anon_sym_] = " ",
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
  [anon_sym_COLON] = ":",
  [anon_sym_WHERE] = "WHERE",
  [aux_sym_accumClause_token1] = "ACCUM",
  [aux_sym_postAccumClause_token1] = "POST-ACCUM",
  [aux_sym_perClauseV2_token1] = "PER",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_stringLiteral_token1] = "stringLiteral_token1",
  [sym_escape_sequence] = "escape_sequence",
  [aux_sym_integer_token1] = "integer_token1",
  [sym_name] = "name",
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
  [aux_sym_USE_GRAPH_token1] = "USE",
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
  [sym_interpretQuery] = "interpretQuery",
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
  [sym_lAccumAccumStmt] = "lAccumAccumStmt",
  [sym_assignStmt] = "assignStmt",
  [sym_argList] = "argList",
  [sym_queryBodyIfStmt] = "queryBodyIfStmt",
  [sym_simpleSize] = "simpleSize",
  [sym_queryBodyWhileStmt] = "queryBodyWhileStmt",
  [sym_dmlSubWhileStmt] = "dmlSubWhileStmt",
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
  [sym_USE_GRAPH] = "USE_GRAPH",
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
  [aux_sym_CREATE_VERTEX_repeat1] = "CREATE_VERTEX_repeat1",
  [aux_sym_CREATE_UNDIRECTED_EDGE_repeat1] = "CREATE_UNDIRECTED_EDGE_repeat1",
  [aux_sym_CREATE_UNDIRECTED_EDGE_repeat2] = "CREATE_UNDIRECTED_EDGE_repeat2",
  [aux_sym_CREATE_GRAPH_repeat1] = "CREATE_GRAPH_repeat1",
  [aux_sym_create_loading_job_repeat1] = "create_loading_job_repeat1",
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
  [aux_sym_interpretQuery_token1] = aux_sym_interpretQuery_token1,
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
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
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
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [aux_sym_queryBodyIfStmt_token1] = aux_sym_queryBodyIfStmt_token1,
  [aux_sym_queryBodyIfStmt_token2] = aux_sym_queryBodyIfStmt_token2,
  [aux_sym_queryBodyIfStmt_token3] = aux_sym_queryBodyIfStmt_token3,
  [aux_sym_queryBodyIfStmt_token4] = aux_sym_queryBodyIfStmt_token4,
  [aux_sym_queryBodyWhileStmt_token1] = aux_sym_queryBodyWhileStmt_token1,
  [aux_sym_queryBodyWhileStmt_token2] = aux_sym_queryBodyWhileStmt_token2,
  [aux_sym_queryBodyWhileStmt_token3] = aux_sym_queryBodyWhileStmt_token3,
  [anon_sym_] = anon_sym_,
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
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_WHERE] = anon_sym_WHERE,
  [aux_sym_accumClause_token1] = aux_sym_accumClause_token1,
  [aux_sym_postAccumClause_token1] = aux_sym_postAccumClause_token1,
  [aux_sym_perClauseV2_token1] = aux_sym_perClauseV2_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_stringLiteral_token1] = aux_sym_stringLiteral_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [aux_sym_integer_token1] = aux_sym_integer_token1,
  [sym_name] = sym_name,
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
  [aux_sym_USE_GRAPH_token1] = aux_sym_USE_GRAPH_token1,
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
  [sym_interpretQuery] = sym_interpretQuery,
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
  [sym_lAccumAccumStmt] = sym_lAccumAccumStmt,
  [sym_assignStmt] = sym_assignStmt,
  [sym_argList] = sym_argList,
  [sym_queryBodyIfStmt] = sym_queryBodyIfStmt,
  [sym_simpleSize] = sym_simpleSize,
  [sym_queryBodyWhileStmt] = sym_queryBodyWhileStmt,
  [sym_dmlSubWhileStmt] = sym_dmlSubWhileStmt,
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
  [sym_USE_GRAPH] = sym_USE_GRAPH,
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
  [aux_sym_CREATE_VERTEX_repeat1] = aux_sym_CREATE_VERTEX_repeat1,
  [aux_sym_CREATE_UNDIRECTED_EDGE_repeat1] = aux_sym_CREATE_UNDIRECTED_EDGE_repeat1,
  [aux_sym_CREATE_UNDIRECTED_EDGE_repeat2] = aux_sym_CREATE_UNDIRECTED_EDGE_repeat2,
  [aux_sym_CREATE_GRAPH_repeat1] = aux_sym_CREATE_GRAPH_repeat1,
  [aux_sym_create_loading_job_repeat1] = aux_sym_create_loading_job_repeat1,
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
  [aux_sym_interpretQuery_token1] = {
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
  [anon_sym_DASH_GT] = {
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
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
  [aux_sym_queryBodyWhileStmt_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_queryBodyWhileStmt_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_queryBodyWhileStmt_token3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
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
  [sym_name] = {
    .visible = true,
    .named = true,
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
  [aux_sym_USE_GRAPH_token1] = {
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
  [sym_interpretQuery] = {
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
  [sym_lAccumAccumStmt] = {
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
  [sym_queryBodyWhileStmt] = {
    .visible = true,
    .named = true,
  },
  [sym_dmlSubWhileStmt] = {
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
  [sym_USE_GRAPH] = {
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
    [0] = anon_alias_sym_from,
  },
  [2] = {
    [0] = anon_alias_sym_INT,
  },
  [3] = {
    [0] = anon_alias_sym_FLOAT,
  },
  [4] = {
    [0] = anon_alias_sym_DOUBLE,
  },
  [5] = {
    [2] = anon_alias_sym_string,
  },
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_name_character_set_1(int32_t c) {
  return (c < 'X'
    ? (c < 'K'
      ? (c < 'C'
        ? c == 'A'
        : (c <= 'C' || c == 'G'))
      : (c <= 'K' || (c < 'Q'
        ? c == 'N'
        : c <= 'Q')))
    : (c <= 'a' || (c < 'n'
      ? (c < 'g'
        ? c == 'c'
        : (c <= 'g' || c == 'k'))
      : (c <= 'n' || (c < 'x'
        ? c == 'q'
        : c <= 'z')))));
}

static inline bool sym_name_character_set_2(int32_t c) {
  return (c < 'X'
    ? (c < 'K'
      ? (c < 'C'
        ? c == 'A'
        : (c <= 'C' || c == 'G'))
      : (c <= 'K' || (c < 'Q'
        ? c == 'N'
        : (c <= 'Q' || c == 'T'))))
    : (c <= 'a' || (c < 'n'
      ? (c < 'g'
        ? c == 'c'
        : (c <= 'g' || c == 'k'))
      : (c <= 'n' || (c < 't'
        ? c == 'q'
        : (c <= 't' || (c >= 'x' && c <= 'z')))))));
}

static inline bool sym_name_character_set_3(int32_t c) {
  return (c < 'W'
    ? (c < 'K'
      ? (c < 'C'
        ? c == 'A'
        : (c <= 'C' || c == 'G'))
      : (c <= 'K' || (c < 'P'
        ? c == 'N'
        : (c <= 'R' || c == 'T'))))
    : (c <= 'a' || (c < 'n'
      ? (c < 'g'
        ? c == 'c'
        : (c <= 'g' || c == 'k'))
      : (c <= 'n' || (c < 't'
        ? (c >= 'p' && c <= 'r')
        : (c <= 't' || (c >= 'w' && c <= 'z')))))));
}

static inline bool sym_name_character_set_4(int32_t c) {
  return (c < 'X'
    ? (c < 'J'
      ? (c < 'F'
        ? (c >= 'A' && c <= 'D')
        : c <= 'H')
      : (c <= 'O' || (c < 'S'
        ? c == 'Q'
        : c <= 'V')))
    : (c <= 'd' || (c < 'q'
      ? (c < 'j'
        ? (c >= 'f' && c <= 'h')
        : c <= 'o')
      : (c <= 'q' || (c < 'x'
        ? (c >= 's' && c <= 'v')
        : c <= 'z')))));
}

static inline bool sym_name_character_set_5(int32_t c) {
  return (c < 'X'
    ? (c < 'Q'
      ? (c < 'J'
        ? (c >= 'A' && c <= 'H')
        : c <= 'O')
      : (c <= 'Q' || (c >= 'S' && c <= 'V')))
    : (c <= 'h' || (c < 's'
      ? (c < 'q'
        ? (c >= 'j' && c <= 'o')
        : c <= 'q')
      : (c <= 'v' || (c >= 'x' && c <= 'z')))));
}

static inline bool sym_name_character_set_6(int32_t c) {
  return (c < 'W'
    ? (c < 'G'
      ? (c < 'C'
        ? c == 'A'
        : c <= 'C')
      : (c <= 'H' || (c < 'T'
        ? (c >= 'K' && c <= 'R')
        : c <= 'T')))
    : (c <= 'a' || (c < 'k'
      ? (c < 'g'
        ? c == 'c'
        : c <= 'h')
      : (c <= 'r' || (c < 'w'
        ? c == 't'
        : c <= 'z')))));
}

static inline bool sym_name_character_set_7(int32_t c) {
  return (c < 'b'
    ? (c < 'J'
      ? (c < 'E'
        ? c == 'B'
        : (c <= 'E' || (c >= 'G' && c <= 'H')))
      : (c <= 'T' || (c < 'X'
        ? c == 'V'
        : c <= '`')))
    : (c <= 'b' || (c < 'j'
      ? (c < 'g'
        ? c == 'e'
        : c <= 'h')
      : (c <= 't' || (c < 'x'
        ? c == 'v'
        : c <= 'z')))));
}

static inline bool sym_name_character_set_8(int32_t c) {
  return (c < 'b'
    ? (c < 'J'
      ? (c < 'E'
        ? c == 'B'
        : (c <= 'E' || (c >= 'G' && c <= 'H')))
      : (c <= 'R' || (c < 'V'
        ? c == 'T'
        : c <= '`')))
    : (c <= 'b' || (c < 'q'
      ? (c < 'g'
        ? c == 'e'
        : (c <= 'h' || (c >= 'j' && c <= 'o')))
      : (c <= 'r' || (c < 'v'
        ? c == 't'
        : c <= 'z')))));
}

static inline bool sym_name_character_set_9(int32_t c) {
  return (c < 'b'
    ? (c < 'G'
      ? (c < 'E'
        ? c == 'B'
        : c <= 'E')
      : (c <= 'H' || (c < 'V'
        ? (c >= 'J' && c <= 'T')
        : c <= '`')))
    : (c <= 'b' || (c < 'j'
      ? (c < 'g'
        ? c == 'e'
        : c <= 'h')
      : (c <= 't' || (c >= 'v' && c <= 'z')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(483);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(476)
      if (lookahead == ' ') ADVANCE(586);
      if (lookahead == '!') ADVANCE(31);
      if (lookahead == '"') ADVANCE(620);
      if (lookahead == '#') ADVANCE(540);
      if (lookahead == '$') ADVANCE(599);
      if (lookahead == '%') ADVANCE(518);
      if (lookahead == '&') ADVANCE(525);
      if (lookahead == '\'') ADVANCE(600);
      if (lookahead == '(') ADVANCE(492);
      if (lookahead == ')') ADVANCE(493);
      if (lookahead == '*') ADVANCE(516);
      if (lookahead == '+') ADVANCE(520);
      if (lookahead == ',') ADVANCE(502);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == '.') ADVANCE(573);
      if (lookahead == '/') ADVANCE(517);
      if (lookahead == ':') ADVANCE(614);
      if (lookahead == ';') ADVANCE(503);
      if (lookahead == '<') ADVANCE(509);
      if (lookahead == '=') ADVANCE(501);
      if (lookahead == '>') ADVANCE(511);
      if (lookahead == '@') ADVANCE(543);
      if (lookahead == 'A') ADVANCE(62);
      if (lookahead == 'B') ADVANCE(36);
      if (lookahead == 'F') ADVANCE(57);
      if (lookahead == 'G') ADVANCE(70);
      if (lookahead == 'O') ADVANCE(72);
      if (lookahead == 'Q') ADVANCE(85);
      if (lookahead == 'S') ADVANCE(42);
      if (lookahead == 'W') ADVANCE(53);
      if (lookahead == '[') ADVANCE(606);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead == ']') ADVANCE(607);
      if (lookahead == '_') ADVANCE(592);
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == 'b') ADVANCE(336);
      if (lookahead == 'f') ADVANCE(105);
      if (lookahead == 'g') ADVANCE(361);
      if (lookahead == 'o') ADVANCE(313);
      if (lookahead == 's') ADVANCE(204);
      if (lookahead == 'w') ADVANCE(251);
      if (lookahead == '{') ADVANCE(484);
      if (lookahead == '|') ADVANCE(526);
      if (lookahead == '}') ADVANCE(485);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(340);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(109);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(168);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(230);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(334);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(258);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(104);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(346);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(210);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(184);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(254);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(262);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(621);
      if (lookahead == '\n') SKIP(466)
      if (lookahead == '\r') ADVANCE(625);
      if (lookahead == ' ') ADVANCE(625);
      if (lookahead == '"') ADVANCE(619);
      if (lookahead == '#') ADVANCE(625);
      if (lookahead == '/') ADVANCE(622);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead != 0) ADVANCE(625);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(447)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(448)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(449)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(450)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(451)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(452)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(453)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(454)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(455)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(456)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(457)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(458)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(459)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(460)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(461)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(462)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(463)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(464)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(465)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(466)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(467)
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(864);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(867);
      END_STATE();
    case 25:
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '/') ADVANCE(540);
      END_STATE();
    case 26:
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '/') ADVANCE(539);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == '*') ADVANCE(26);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '*') ADVANCE(596);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(128);
      END_STATE();
    case 30:
      if (lookahead == '<') ADVANCE(523);
      END_STATE();
    case 31:
      if (lookahead == '=') ADVANCE(537);
      END_STATE();
    case 32:
      if (lookahead == '=') ADVANCE(574);
      END_STATE();
    case 33:
      if (lookahead == '=') ADVANCE(536);
      END_STATE();
    case 34:
      if (lookahead == '>') ADVANCE(524);
      END_STATE();
    case 35:
      if (lookahead == '@') ADVANCE(544);
      END_STATE();
    case 36:
      if (lookahead == 'A') ADVANCE(52);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(344);
      END_STATE();
    case 37:
      if (lookahead == 'A') ADVANCE(68);
      if (lookahead == 'a') ADVANCE(352);
      END_STATE();
    case 38:
      if (lookahead == 'A') ADVANCE(88);
      END_STATE();
    case 39:
      if (lookahead == 'A') ADVANCE(69);
      END_STATE();
    case 40:
      if (lookahead == 'D') ADVANCE(532);
      END_STATE();
    case 41:
      if (lookahead == 'D') ADVANCE(532);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(594);
      END_STATE();
    case 42:
      if (lookahead == 'E') ADVANCE(81);
      if (lookahead == 'Y') ADVANCE(63);
      if (lookahead == 'e') ADVANCE(286);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(114);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(312);
      END_STATE();
    case 43:
      if (lookahead == 'E') ADVANCE(75);
      END_STATE();
    case 44:
      if (lookahead == 'E') ADVANCE(856);
      END_STATE();
    case 45:
      if (lookahead == 'E') ADVANCE(856);
      if (lookahead == 'e') ADVANCE(587);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(225);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(615);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(615);
      if (lookahead == 'e') ADVANCE(603);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(84);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(76);
      if (lookahead == 'e') ADVANCE(372);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(290);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(83);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(381);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(79);
      END_STATE();
    case 52:
      if (lookahead == 'G') ADVANCE(855);
      END_STATE();
    case 53:
      if (lookahead == 'H') ADVANCE(49);
      if (lookahead == 'h') ADVANCE(218);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(396);
      END_STATE();
    case 54:
      if (lookahead == 'H') ADVANCE(495);
      END_STATE();
    case 55:
      if (lookahead == 'H') ADVANCE(495);
      if (lookahead == 'h') ADVANCE(868);
      END_STATE();
    case 56:
      if (lookahead == 'H') ADVANCE(51);
      END_STATE();
    case 57:
      if (lookahead == 'I') ADVANCE(60);
      if (lookahead == 'O') ADVANCE(74);
      if (lookahead == 'i') ADVANCE(281);
      if (lookahead == 'o') ADVANCE(363);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(293);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(341);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(342);
      END_STATE();
    case 58:
      if (lookahead == 'I') ADVANCE(496);
      END_STATE();
    case 59:
      if (lookahead == 'I') ADVANCE(61);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(341);
      END_STATE();
    case 60:
      if (lookahead == 'L') ADVANCE(45);
      if (lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 61:
      if (lookahead == 'L') ADVANCE(44);
      END_STATE();
    case 62:
      if (lookahead == 'N') ADVANCE(41);
      if (lookahead == 'P') ADVANCE(58);
      if (lookahead == 'n') ADVANCE(442);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(142);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(170);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(280);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(605);
      END_STATE();
    case 63:
      if (lookahead == 'N') ADVANCE(82);
      END_STATE();
    case 64:
      if (lookahead == 'N') ADVANCE(40);
      if (lookahead == 'P') ADVANCE(58);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(142);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(279);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(605);
      END_STATE();
    case 65:
      if (lookahead == 'N') ADVANCE(40);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(142);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(605);
      END_STATE();
    case 66:
      if (lookahead == 'N') ADVANCE(80);
      END_STATE();
    case 67:
      if (lookahead == 'O') ADVANCE(73);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(293);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(294);
      END_STATE();
    case 68:
      if (lookahead == 'P') ADVANCE(55);
      if (lookahead == 'p') ADVANCE(253);
      END_STATE();
    case 69:
      if (lookahead == 'P') ADVANCE(54);
      END_STATE();
    case 70:
      if (lookahead == 'R') ADVANCE(37);
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 71:
      if (lookahead == 'R') ADVANCE(533);
      END_STATE();
    case 72:
      if (lookahead == 'R') ADVANCE(533);
      if (lookahead == 'r') ADVANCE(488);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(877);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(409);
      END_STATE();
    case 73:
      if (lookahead == 'R') ADVANCE(494);
      END_STATE();
    case 74:
      if (lookahead == 'R') ADVANCE(494);
      if (lookahead == 'r') ADVANCE(880);
      END_STATE();
    case 75:
      if (lookahead == 'R') ADVANCE(90);
      END_STATE();
    case 76:
      if (lookahead == 'R') ADVANCE(47);
      if (lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 77:
      if (lookahead == 'R') ADVANCE(66);
      END_STATE();
    case 78:
      if (lookahead == 'R') ADVANCE(39);
      END_STATE();
    case 79:
      if (lookahead == 'R') ADVANCE(46);
      END_STATE();
    case 80:
      if (lookahead == 'S') ADVANCE(499);
      END_STATE();
    case 81:
      if (lookahead == 'T') ADVANCE(854);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(213);
      END_STATE();
    case 82:
      if (lookahead == 'T') ADVANCE(38);
      END_STATE();
    case 83:
      if (lookahead == 'T') ADVANCE(853);
      END_STATE();
    case 84:
      if (lookahead == 'T') ADVANCE(87);
      END_STATE();
    case 85:
      if (lookahead == 'U') ADVANCE(43);
      END_STATE();
    case 86:
      if (lookahead == 'U') ADVANCE(475);
      if (lookahead == 'u') ADVANCE(471);
      if (lookahead == 'x') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (lookahead != 0) ADVANCE(626);
      END_STATE();
    case 87:
      if (lookahead == 'U') ADVANCE(77);
      END_STATE();
    case 88:
      if (lookahead == 'X') ADVANCE(497);
      END_STATE();
    case 89:
      if (lookahead == 'Y') ADVANCE(63);
      END_STATE();
    case 90:
      if (lookahead == 'Y') ADVANCE(491);
      END_STATE();
    case 91:
      if (lookahead == '_') ADVANCE(132);
      END_STATE();
    case 92:
      if (lookahead == '_') ADVANCE(266);
      END_STATE();
    case 93:
      if (lookahead == '_') ADVANCE(143);
      END_STATE();
    case 94:
      if (lookahead == '_') ADVANCE(221);
      END_STATE();
    case 95:
      if (lookahead == '_') ADVANCE(237);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 102:
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 103:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(359);
      END_STATE();
    case 104:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(359);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(324);
      END_STATE();
    case 105:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(293);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(281);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(341);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(363);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(342);
      END_STATE();
    case 106:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(293);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(294);
      END_STATE();
    case 107:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(444);
      END_STATE();
    case 108:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 109:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(414);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(242);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(370);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(585);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(347);
      END_STATE();
    case 110:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(414);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(242);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(426);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(347);
      END_STATE();
    case 111:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(414);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(370);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(426);
      END_STATE();
    case 112:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(183);
      END_STATE();
    case 113:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(352);
      END_STATE();
    case 114:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(398);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(269);
      END_STATE();
    case 115:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(430);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(332);
      END_STATE();
    case 116:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(360);
      END_STATE();
    case 117:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 118:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(401);
      END_STATE();
    case 119:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(375);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 120:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(367);
      END_STATE();
    case 121:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(310);
      END_STATE();
    case 122:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(417);
      END_STATE();
    case 123:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 124:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 125:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 126:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 127:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 128:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 129:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 130:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(879);
      END_STATE();
    case 131:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(278);
      END_STATE();
    case 132:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(446);
      END_STATE();
    case 133:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(438);
      END_STATE();
    case 134:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(292);
      END_STATE();
    case 135:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(142);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(170);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(280);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(442);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(605);
      END_STATE();
    case 136:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(142);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(169);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(141);
      END_STATE();
    case 137:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(142);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(279);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(605);
      END_STATE();
    case 138:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(142);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(605);
      END_STATE();
    case 139:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(566);
      END_STATE();
    case 140:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(541);
      END_STATE();
    case 141:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(565);
      END_STATE();
    case 142:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(425);
      END_STATE();
    case 143:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(386);
      END_STATE();
    case 144:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(350);
      END_STATE();
    case 145:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(404);
      END_STATE();
    case 146:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(406);
      END_STATE();
    case 147:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(408);
      END_STATE();
    case 148:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(198);
      END_STATE();
    case 149:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(427);
      END_STATE();
    case 150:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(428);
      END_STATE();
    case 151:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(431);
      END_STATE();
    case 152:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(418);
      END_STATE();
    case 153:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(432);
      END_STATE();
    case 154:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(419);
      END_STATE();
    case 155:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(433);
      END_STATE();
    case 156:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(435);
      END_STATE();
    case 157:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(436);
      END_STATE();
    case 158:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(437);
      END_STATE();
    case 159:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(149);
      END_STATE();
    case 160:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(150);
      END_STATE();
    case 161:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(151);
      END_STATE();
    case 162:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(153);
      END_STATE();
    case 163:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(155);
      END_STATE();
    case 164:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(156);
      END_STATE();
    case 165:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(157);
      END_STATE();
    case 166:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(158);
      END_STATE();
    case 167:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(247);
      END_STATE();
    case 168:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(247);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(392);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 169:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(875);
      END_STATE();
    case 170:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(875);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(267);
      END_STATE();
    case 171:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(580);
      END_STATE();
    case 172:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(860);
      END_STATE();
    case 173:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(871);
      END_STATE();
    case 174:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(858);
      END_STATE();
    case 175:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(490);
      END_STATE();
    case 176:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(277);
      END_STATE();
    case 177:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(277);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(349);
      END_STATE();
    case 178:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(205);
      END_STATE();
    case 179:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(197);
      END_STATE();
    case 180:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(206);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(547);
      END_STATE();
    case 181:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(248);
      END_STATE();
    case 182:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(249);
      END_STATE();
    case 183:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(272);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(353);
      END_STATE();
    case 185:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(870);
      END_STATE();
    case 186:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(587);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(225);
      END_STATE();
    case 187:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(849);
      END_STATE();
    case 188:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(578);
      END_STATE();
    case 189:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(512);
      END_STATE();
    case 190:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(514);
      END_STATE();
    case 191:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(603);
      END_STATE();
    case 192:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(582);
      END_STATE();
    case 193:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(506);
      END_STATE();
    case 194:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(440);
      END_STATE();
    case 195:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(486);
      END_STATE();
    case 196:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(881);
      END_STATE();
    case 197:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 198:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(489);
      END_STATE();
    case 199:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(852);
      END_STATE();
    case 200:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(862);
      END_STATE();
    case 201:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(865);
      END_STATE();
    case 202:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(882);
      END_STATE();
    case 203:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(551);
      END_STATE();
    case 204:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(286);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(114);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(312);
      END_STATE();
    case 205:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 206:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(441);
      END_STATE();
    case 207:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(243);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(585);
      END_STATE();
    case 208:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 209:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(364);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(391);
      END_STATE();
    case 210:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(364);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(391);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(260);
      END_STATE();
    case 211:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 212:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 213:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 214:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(387);
      END_STATE();
    case 215:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 216:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 217:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(372);
      END_STATE();
    case 218:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(372);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(290);
      END_STATE();
    case 219:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 220:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 221:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 222:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 223:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 224:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 225:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 226:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(412);
      END_STATE();
    case 227:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 228:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(411);
      END_STATE();
    case 229:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 230:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 231:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 232:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 233:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 234:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(389);
      END_STATE();
    case 235:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 236:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 237:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 238:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 239:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(410);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(381);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(312);
      END_STATE();
    case 240:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(575);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(529);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(530);
      END_STATE();
    case 241:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(504);
      END_STATE();
    case 242:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(115);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(139);
      END_STATE();
    case 243:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(271);
      END_STATE();
    case 244:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(554);
      END_STATE();
    case 245:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(878);
      END_STATE();
    case 246:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(553);
      END_STATE();
    case 247:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(187);
      END_STATE();
    case 248:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(200);
      END_STATE();
    case 249:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(228);
      END_STATE();
    case 250:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(374);
      END_STATE();
    case 251:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(218);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(396);
      END_STATE();
    case 252:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(861);
      END_STATE();
    case 253:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(868);
      END_STATE();
    case 254:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(216);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(859);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(434);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(357);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(354);
      END_STATE();
    case 255:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(216);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 256:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(216);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(93);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(434);
      END_STATE();
    case 257:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(217);
      END_STATE();
    case 258:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(306);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 259:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(324);
      END_STATE();
    case 260:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(308);
      END_STATE();
    case 261:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(328);
      END_STATE();
    case 262:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(328);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(177);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(185);
      END_STATE();
    case 263:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(328);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 264:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 265:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(309);
      END_STATE();
    case 266:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 267:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(319);
      END_STATE();
    case 268:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(140);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(863);
      END_STATE();
    case 269:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(323);
      END_STATE();
    case 270:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(349);
      END_STATE();
    case 271:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(332);
      END_STATE();
    case 272:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(325);
      END_STATE();
    case 273:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(402);
      END_STATE();
    case 274:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(305);
      END_STATE();
    case 275:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(326);
      END_STATE();
    case 276:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(390);
      END_STATE();
    case 277:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(382);
      END_STATE();
    case 278:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(233);
      END_STATE();
    case 279:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(873);
      END_STATE();
    case 280:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(873);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(220);
      END_STATE();
    case 281:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 282:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(847);
      END_STATE();
    case 283:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(531);
      END_STATE();
    case 284:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(341);
      END_STATE();
    case 285:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(341);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(342);
      END_STATE();
    case 286:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(213);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(108);
      END_STATE();
    case 287:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(283);
      END_STATE();
    case 288:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 289:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(405);
      END_STATE();
    case 290:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(192);
      END_STATE();
    case 291:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 292:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(203);
      END_STATE();
    case 293:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(393);
      END_STATE();
    case 294:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(227);
      END_STATE();
    case 295:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(612);
      END_STATE();
    case 296:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(616);
      END_STATE();
    case 297:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(569);
      END_STATE();
    case 298:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(545);
      END_STATE();
    case 299:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(559);
      END_STATE();
    case 300:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(561);
      END_STATE();
    case 301:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(563);
      END_STATE();
    case 302:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(567);
      END_STATE();
    case 303:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(617);
      END_STATE();
    case 304:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(557);
      END_STATE();
    case 305:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(273);
      END_STATE();
    case 306:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(273);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(423);
      END_STATE();
    case 307:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(356);
      END_STATE();
    case 308:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(120);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(403);
      END_STATE();
    case 309:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(199);
      END_STATE();
    case 310:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(202);
      END_STATE();
    case 311:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(358);
      END_STATE();
    case 312:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(123);
      END_STATE();
    case 313:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(877);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(488);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(409);
      END_STATE();
    case 314:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(877);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 315:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 316:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(529);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(530);
      END_STATE();
    case 317:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 318:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(577);
      END_STATE();
    case 319:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(869);
      END_STATE();
    case 320:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(589);
      END_STATE();
    case 321:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(608);
      END_STATE();
    case 322:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 323:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(244);
      END_STATE();
    case 324:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(424);
      END_STATE();
    case 325:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(245);
      END_STATE();
    case 326:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(246);
      END_STATE();
    case 327:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 328:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(400);
      END_STATE();
    case 329:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(270);
      END_STATE();
    case 330:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(407);
      END_STATE();
    case 331:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(422);
      END_STATE();
    case 332:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 333:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(585);
      END_STATE();
    case 334:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(130);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(343);
      END_STATE();
    case 335:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(859);
      END_STATE();
    case 336:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(344);
      END_STATE();
    case 337:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(363);
      END_STATE();
    case 338:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 339:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(307);
      END_STATE();
    case 340:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(307);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 341:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 342:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(295);
      END_STATE();
    case 343:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(317);
      END_STATE();
    case 344:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(282);
      END_STATE();
    case 345:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(397);
      END_STATE();
    case 346:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(397);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(287);
      END_STATE();
    case 347:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(351);
      END_STATE();
    case 348:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(426);
      END_STATE();
    case 349:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(320);
      END_STATE();
    case 350:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(311);
      END_STATE();
    case 351:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(872);
      END_STATE();
    case 352:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(253);
      END_STATE();
    case 353:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(288);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(429);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(224);
      END_STATE();
    case 354:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(231);
      END_STATE();
    case 355:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(201);
      END_STATE();
    case 356:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(373);
      END_STATE();
    case 357:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(291);
      END_STATE();
    case 358:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(378);
      END_STATE();
    case 359:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(124);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(125);
      END_STATE();
    case 360:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(126);
      END_STATE();
    case 361:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 362:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(488);
      END_STATE();
    case 363:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(880);
      END_STATE();
    case 364:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(618);
      END_STATE();
    case 365:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(874);
      END_STATE();
    case 366:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(598);
      END_STATE();
    case 367:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(443);
      END_STATE();
    case 368:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(264);
      END_STATE();
    case 369:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 370:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(219);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(413);
      END_STATE();
    case 371:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(321);
      END_STATE();
    case 372:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 373:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(214);
      END_STATE();
    case 374:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(229);
      END_STATE();
    case 375:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(369);
      END_STATE();
    case 376:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(269);
      END_STATE();
    case 377:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(416);
      END_STATE();
    case 378:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 379:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(394);
      END_STATE();
    case 380:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(395);
      END_STATE();
    case 381:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(275);
      END_STATE();
    case 382:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 383:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(591);
      END_STATE();
    case 384:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(571);
      END_STATE();
    case 385:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(556);
      END_STATE();
    case 386:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(439);
      END_STATE();
    case 387:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(384);
      END_STATE();
    case 388:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(343);
      END_STATE();
    case 389:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(385);
      END_STATE();
    case 390:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(423);
      END_STATE();
    case 391:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(399);
      END_STATE();
    case 392:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(188);
      END_STATE();
    case 393:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(190);
      END_STATE();
    case 394:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(208);
      END_STATE();
    case 395:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(235);
      END_STATE();
    case 396:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(252);
      END_STATE();
    case 397:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(527);
      END_STATE();
    case 398:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(268);
      END_STATE();
    case 399:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(29);
      END_STATE();
    case 400:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(846);
      END_STATE();
    case 401:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(549);
      END_STATE();
    case 402:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(584);
      END_STATE();
    case 403:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(601);
      END_STATE();
    case 404:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(610);
      END_STATE();
    case 405:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(857);
      END_STATE();
    case 406:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(850);
      END_STATE();
    case 407:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(547);
      END_STATE();
    case 408:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(590);
      END_STATE();
    case 409:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(178);
      END_STATE();
    case 410:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(108);
      END_STATE();
    case 411:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(445);
      END_STATE();
    case 412:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(265);
      END_STATE();
    case 413:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(368);
      END_STATE();
    case 414:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(226);
      END_STATE();
    case 415:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(381);
      END_STATE();
    case 416:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(194);
      END_STATE();
    case 417:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(195);
      END_STATE();
    case 418:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(215);
      END_STATE();
    case 419:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(222);
      END_STATE();
    case 420:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(223);
      END_STATE();
    case 421:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(376);
      END_STATE();
    case 422:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(238);
      END_STATE();
    case 423:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(127);
      END_STATE();
    case 424:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(383);
      END_STATE();
    case 425:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(296);
      END_STATE();
    case 426:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(134);
      END_STATE();
    case 427:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(297);
      END_STATE();
    case 428:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(298);
      END_STATE();
    case 429:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(371);
      END_STATE();
    case 430:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(289);
      END_STATE();
    case 431:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(299);
      END_STATE();
    case 432:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(300);
      END_STATE();
    case 433:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(301);
      END_STATE();
    case 434:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(189);
      END_STATE();
    case 435:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(302);
      END_STATE();
    case 436:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(303);
      END_STATE();
    case 437:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(304);
      END_STATE();
    case 438:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(420);
      END_STATE();
    case 439:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(604);
      END_STATE();
    case 440:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(848);
      END_STATE();
    case 441:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(876);
      END_STATE();
    case 442:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(594);
      END_STATE();
    case 443:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(92);
      END_STATE();
    case 444:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(851);
      END_STATE();
    case 445:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(355);
      END_STATE();
    case 446:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(95);
      END_STATE();
    case 447:
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(447)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == ' ') ADVANCE(586);
      if (lookahead == '"') ADVANCE(101);
      if (lookahead == '#') ADVANCE(540);
      if (lookahead == '%') ADVANCE(518);
      if (lookahead == '&') ADVANCE(525);
      if (lookahead == '(') ADVANCE(492);
      if (lookahead == ')') ADVANCE(493);
      if (lookahead == '*') ADVANCE(516);
      if (lookahead == '+') ADVANCE(519);
      if (lookahead == ',') ADVANCE(502);
      if (lookahead == '-') ADVANCE(521);
      if (lookahead == '.') ADVANCE(573);
      if (lookahead == '/') ADVANCE(517);
      if (lookahead == ';') ADVANCE(503);
      if (lookahead == '<') ADVANCE(30);
      if (lookahead == '=') ADVANCE(500);
      if (lookahead == '>') ADVANCE(34);
      if (sym_name_character_set_1(lookahead)) ADVANCE(845);
      if (lookahead == '|') ADVANCE(526);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(772);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(662);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(689);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(728);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(706);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(721);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(802);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(731);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(652);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(788);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(797);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(711);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(712);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(844);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(734);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(714);
      if (('W' <= lookahead && lookahead <= 'w')) ADVANCE(727);
      END_STATE();
    case 448:
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(448)
      if (lookahead == '\r') SKIP(3)
      if (lookahead == ' ') ADVANCE(586);
      if (lookahead == '#') ADVANCE(540);
      if (lookahead == ')') ADVANCE(493);
      if (lookahead == '+') ADVANCE(32);
      if (lookahead == ',') ADVANCE(502);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == ':') ADVANCE(614);
      if (lookahead == '=') ADVANCE(500);
      if (lookahead == '>') ADVANCE(510);
      if (sym_name_character_set_2(lookahead)) ADVANCE(845);
      if (lookahead == '|') ADVANCE(526);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(772);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(662);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(689);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(728);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(706);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(721);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(802);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(731);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(652);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(788);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(797);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(711);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(712);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(734);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(714);
      if (('W' <= lookahead && lookahead <= 'w')) ADVANCE(727);
      END_STATE();
    case 449:
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(449)
      if (lookahead == '\r') SKIP(4)
      if (lookahead == ' ') ADVANCE(586);
      if (lookahead == '!') ADVANCE(31);
      if (lookahead == '"') ADVANCE(619);
      if (lookahead == '#') ADVANCE(540);
      if (lookahead == '%') ADVANCE(518);
      if (lookahead == '&') ADVANCE(525);
      if (lookahead == '\'') ADVANCE(600);
      if (lookahead == '(') ADVANCE(492);
      if (lookahead == ')') ADVANCE(493);
      if (lookahead == '*') ADVANCE(516);
      if (lookahead == '+') ADVANCE(519);
      if (lookahead == ',') ADVANCE(502);
      if (lookahead == '-') ADVANCE(521);
      if (lookahead == '.') ADVANCE(573);
      if (lookahead == '/') ADVANCE(517);
      if (lookahead == ';') ADVANCE(503);
      if (lookahead == '<') ADVANCE(509);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == '>') ADVANCE(511);
      if (lookahead == 'A') ADVANCE(64);
      if (lookahead == 'F') ADVANCE(67);
      if (lookahead == 'O') ADVANCE(71);
      if (lookahead == 'R') ADVANCE(48);
      if (lookahead == 'S') ADVANCE(89);
      if (lookahead == '[') ADVANCE(606);
      if (lookahead == ']') ADVANCE(607);
      if (lookahead == 'a') ADVANCE(137);
      if (lookahead == 'f') ADVANCE(106);
      if (lookahead == '{') ADVANCE(484);
      if (lookahead == '|') ADVANCE(526);
      if (lookahead == '}') ADVANCE(485);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(207);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(315);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(361);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(274);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(345);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(209);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(256);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      END_STATE();
    case 450:
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(450)
      if (lookahead == '\r') SKIP(5)
      if (lookahead == ' ') ADVANCE(586);
      if (lookahead == '!') ADVANCE(31);
      if (lookahead == '#') ADVANCE(540);
      if (lookahead == '%') ADVANCE(518);
      if (lookahead == '&') ADVANCE(525);
      if (lookahead == '\'') ADVANCE(600);
      if (lookahead == ')') ADVANCE(493);
      if (lookahead == '*') ADVANCE(516);
      if (lookahead == '+') ADVANCE(520);
      if (lookahead == ',') ADVANCE(502);
      if (lookahead == '-') ADVANCE(521);
      if (lookahead == '/') ADVANCE(517);
      if (lookahead == ';') ADVANCE(503);
      if (lookahead == '<') ADVANCE(509);
      if (lookahead == '=') ADVANCE(501);
      if (lookahead == '>') ADVANCE(511);
      if (lookahead == 'A') ADVANCE(65);
      if (lookahead == 'G') ADVANCE(78);
      if (lookahead == 'O') ADVANCE(71);
      if (lookahead == '[') ADVANCE(606);
      if (lookahead == ']') ADVANCE(607);
      if (lookahead == 'a') ADVANCE(138);
      if (lookahead == '|') ADVANCE(526);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(333);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(315);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(337);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(274);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(345);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(209);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(255);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(257);
      END_STATE();
    case 451:
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(451)
      if (lookahead == '\r') SKIP(6)
      if (lookahead == ' ') ADVANCE(586);
      if (lookahead == '#') ADVANCE(540);
      if (lookahead == ')') ADVANCE(493);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == ':') ADVANCE(614);
      if (lookahead == '=') ADVANCE(500);
      if (lookahead == '>') ADVANCE(510);
      if (sym_name_character_set_3(lookahead)) ADVANCE(845);
      if (lookahead == '|') ADVANCE(526);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(772);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(662);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(689);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(740);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(706);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(764);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(802);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(731);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(652);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(788);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(713);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(734);
      if (('V' <= lookahead && lookahead <= 'v')) ADVANCE(714);
      END_STATE();
    case 452:
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(452)
      if (lookahead == '\r') SKIP(7)
      if (lookahead == ' ') ADVANCE(586);
      if (lookahead == '"') ADVANCE(619);
      if (lookahead == '#') ADVANCE(540);
      if (lookahead == '(') ADVANCE(492);
      if (lookahead == '-') ADVANCE(521);
      if (lookahead == '.') ADVANCE(573);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '@') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'E') ||
          ('G' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(656);
      if (('T' <= lookahead && lookahead <= 't')) ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      END_STATE();
    case 453:
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(453)
      if (lookahead == '\r') SKIP(8)
      if (lookahead == ' ') ADVANCE(586);
      if (lookahead == '"') ADVANCE(619);
      if (lookahead == '#') ADVANCE(540);
      if (lookahead == '(') ADVANCE(492);
      if (lookahead == '-') ADVANCE(521);
      if (lookahead == '.') ADVANCE(573);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '@') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'E') ||
          ('G' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(656);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(775);
      if (('T' <= lookahead && lookahead <= 't')) ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      END_STATE();
    case 454:
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(454)
      if (lookahead == '\r') SKIP(9)
      if (lookahead == ' ') ADVANCE(586);
      if (lookahead == '#') ADVANCE(540);
      if (lookahead == '(') ADVANCE(492);
      if (lookahead == ')') ADVANCE(493);
      if (lookahead == ',') ADVANCE(502);
      if (lookahead == '-') ADVANCE(521);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == ':') ADVANCE(614);
      if (lookahead == ';') ADVANCE(503);
      if (lookahead == '<') ADVANCE(507);
      if (lookahead == '=') ADVANCE(500);
      if (lookahead == '>') ADVANCE(510);
      if (lookahead == '@') ADVANCE(543);
      if (lookahead == 'W') ADVANCE(56);
      if (lookahead == '|') ADVANCE(526);
      if (lookahead == '}') ADVANCE(485);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(336);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(339);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(110);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(167);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(285);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(230);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(322);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(388);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(276);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(103);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(314);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(209);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(239);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(335);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(261);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(212);
      END_STATE();
    case 455:
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(455)
      if (lookahead == '\r') SKIP(10)
      if (lookahead == ' ') ADVANCE(586);
      if (lookahead == '#') ADVANCE(540);
      if (lookahead == ')') ADVANCE(493);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(507);
      if (lookahead == 'B') ADVANCE(36);
      if (lookahead == 'F') ADVANCE(59);
      if (lookahead == 'Q') ADVANCE(85);
      if (lookahead == 'S') ADVANCE(50);
      if (lookahead == 'b') ADVANCE(336);
      if (lookahead == 'f') ADVANCE(284);
      if (lookahead == 's') ADVANCE(415);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(111);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(167);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(361);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(330);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(388);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(338);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(362);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(263);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(212);
      END_STATE();
    case 456:
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(456)
      if (lookahead == '\r') SKIP(11)
      if (lookahead == ' ') ADVANCE(586);
      if (lookahead == '#') ADVANCE(540);
      if (lookahead == '/') ADVANCE(25);
      if (sym_name_character_set_4(lookahead)) ADVANCE(845);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(746);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(722);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(797);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(711);
      if (('W' <= lookahead && lookahead <= 'w')) ADVANCE(727);
      END_STATE();
    case 457:
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(457)
      if (lookahead == '\r') SKIP(12)
      if (lookahead == ' ') ADVANCE(586);
      if (lookahead == '#') ADVANCE(540);
      if (lookahead == '/') ADVANCE(25);
      if (sym_name_character_set_5(lookahead)) ADVANCE(845);
      if (lookahead == '}') ADVANCE(485);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(722);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(797);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(711);
      if (('W' <= lookahead && lookahead <= 'w')) ADVANCE(727);
      END_STATE();
    case 458:
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(458)
      if (lookahead == '\r') SKIP(13)
      if (lookahead == ' ') ADVANCE(586);
      if (lookahead == '#') ADVANCE(540);
      if (lookahead == '(') ADVANCE(492);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == ':') ADVANCE(614);
      if (lookahead == '<') ADVANCE(507);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '_') ADVANCE(593);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(763);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 459:
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(459)
      if (lookahead == '\r') SKIP(14)
      if (lookahead == ' ') ADVANCE(586);
      if (lookahead == '#') ADVANCE(540);
      if (lookahead == '/') ADVANCE(25);
      if (sym_name_character_set_6(lookahead)) ADVANCE(845);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(772);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(662);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(689);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(740);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(764);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(802);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(823);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(734);
      if (('V' <= lookahead && lookahead <= 'v')) ADVANCE(714);
      END_STATE();
    case 460:
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(460)
      if (lookahead == '\r') SKIP(15)
      if (lookahead == ' ') ADVANCE(586);
      if (lookahead == '#') ADVANCE(540);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '@') ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'V') ||
          ('X' <= lookahead && lookahead <= 'v') ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      if (('W' <= lookahead && lookahead <= 'w')) ADVANCE(727);
      END_STATE();
    case 461:
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(461)
      if (lookahead == '\r') SKIP(16)
      if (lookahead == ' ') ADVANCE(586);
      if (lookahead == '#') ADVANCE(540);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '_') ADVANCE(593);
      if (lookahead == '}') ADVANCE(485);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(763);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(718);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 462:
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(462)
      if (lookahead == '\r') SKIP(17)
      if (lookahead == ' ') ADVANCE(586);
      if (lookahead == '#') ADVANCE(540);
      if (lookahead == '(') ADVANCE(492);
      if (lookahead == '/') ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      if (lookahead == '{') ADVANCE(484);
      if (('S' <= lookahead && lookahead <= 's')) ADVANCE(719);
      END_STATE();
    case 463:
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(463)
      if (lookahead == '\r') SKIP(18)
      if (lookahead == ' ') ADVANCE(586);
      if (lookahead == '"') ADVANCE(619);
      if (lookahead == '#') ADVANCE(540);
      if (lookahead == '$') ADVANCE(599);
      if (lookahead == '(') ADVANCE(492);
      if (lookahead == ')') ADVANCE(493);
      if (lookahead == '*') ADVANCE(516);
      if (lookahead == '-') ADVANCE(521);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(507);
      if (lookahead == '@') ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      if (lookahead == '{') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      END_STATE();
    case 464:
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(464)
      if (lookahead == '\r') SKIP(19)
      if (lookahead == ' ') ADVANCE(586);
      if (lookahead == '#') ADVANCE(540);
      if (lookahead == '(') ADVANCE(492);
      if (lookahead == ')') ADVANCE(493);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == ';') ADVANCE(503);
      if (lookahead == '=') ADVANCE(500);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(331);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(259);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(329);
      END_STATE();
    case 465:
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(465)
      if (lookahead == '\r') SKIP(20)
      if (lookahead == ' ') ADVANCE(586);
      if (lookahead == '#') ADVANCE(540);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(348);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(284);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(330);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(421);
      END_STATE();
    case 466:
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(466)
      if (lookahead == '\r') SKIP(21)
      if (lookahead == ' ') ADVANCE(586);
      if (lookahead == '"') ADVANCE(619);
      if (lookahead == '#') ADVANCE(540);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '\\') ADVANCE(86);
      END_STATE();
    case 467:
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(467)
      if (lookahead == '\r') SKIP(22)
      if (lookahead == ' ') ADVANCE(586);
      if (lookahead == '#') ADVANCE(540);
      if (lookahead == '/') ADVANCE(25);
      if (sym_name_character_set_4(lookahead)) ADVANCE(845);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(762);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(722);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(797);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(711);
      if (('W' <= lookahead && lookahead <= 'w')) ADVANCE(727);
      END_STATE();
    case 468:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(626);
      END_STATE();
    case 469:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(468);
      END_STATE();
    case 470:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(469);
      END_STATE();
    case 471:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(470);
      END_STATE();
    case 472:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(471);
      END_STATE();
    case 473:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(472);
      END_STATE();
    case 474:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      END_STATE();
    case 475:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(474);
      END_STATE();
    case 476:
      if (eof) ADVANCE(483);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 477:
      if (eof) ADVANCE(483);
      if (lookahead == '\n') SKIP(480)
      END_STATE();
    case 478:
      if (eof) ADVANCE(483);
      if (lookahead == '\n') SKIP(481)
      END_STATE();
    case 479:
      if (eof) ADVANCE(483);
      if (lookahead == '\n') SKIP(482)
      END_STATE();
    case 480:
      if (eof) ADVANCE(483);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(480)
      if (lookahead == '\r') SKIP(477)
      if (lookahead == ' ') ADVANCE(586);
      if (lookahead == '"') ADVANCE(619);
      if (lookahead == '#') ADVANCE(540);
      if (lookahead == '%') ADVANCE(518);
      if (lookahead == '&') ADVANCE(525);
      if (lookahead == '\'') ADVANCE(600);
      if (lookahead == '(') ADVANCE(492);
      if (lookahead == ')') ADVANCE(493);
      if (lookahead == '*') ADVANCE(516);
      if (lookahead == '+') ADVANCE(520);
      if (lookahead == ',') ADVANCE(502);
      if (lookahead == '-') ADVANCE(521);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == '/') ADVANCE(517);
      if (lookahead == ':') ADVANCE(614);
      if (lookahead == ';') ADVANCE(503);
      if (lookahead == '<') ADVANCE(508);
      if (lookahead == '=') ADVANCE(500);
      if (lookahead == '>') ADVANCE(34);
      if (sym_name_character_set_7(lookahead)) ADVANCE(845);
      if (lookahead == '|') ADVANCE(526);
      if (lookahead == '}') ADVANCE(485);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(739);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(783);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(784);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(785);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(767);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(800);
      if (('W' <= lookahead && lookahead <= 'w')) ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      END_STATE();
    case 481:
      if (eof) ADVANCE(483);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(481)
      if (lookahead == '\r') SKIP(478)
      if (lookahead == ' ') ADVANCE(586);
      if (lookahead == '#') ADVANCE(540);
      if (lookahead == '/') ADVANCE(25);
      if (sym_name_character_set_8(lookahead)) ADVANCE(845);
      if (lookahead == 'p') ADVANCE(643);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(739);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(783);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(784);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(785);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(767);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(826);
      if (('U' <= lookahead && lookahead <= 'u')) ADVANCE(800);
      END_STATE();
    case 482:
      if (eof) ADVANCE(483);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(482)
      if (lookahead == '\r') SKIP(479)
      if (lookahead == ' ') ADVANCE(586);
      if (lookahead == '#') ADVANCE(540);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == ';') ADVANCE(503);
      if (sym_name_character_set_9(lookahead)) ADVANCE(845);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(739);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(774);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(784);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(785);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(767);
      if (('U' <= lookahead && lookahead <= 'u')) ADVANCE(800);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_createSignature_token1);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_createSignature_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_createSignature_token2);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_createSignature_token3);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_createSignature_token4);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_QUERY);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_FOR);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_GRAPH);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_API);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_SYNTAX);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_interpretQuery_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_RETURNS);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(536);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_typedef_token1);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_typedef_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_typedef_token2);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(523);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(523);
      if (lookahead == '=') ADVANCE(534);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(535);
      if (lookahead == '>') ADVANCE(524);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_constant_token2);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_constant_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '/') ADVANCE(540);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(574);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(538);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_condition_token2);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_condition_token3);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_condition_token4);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(540);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_accumDeclStmt_token1);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_accumDeclStmt_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(544);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_accumType_token1);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_accumType_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_accumType_token2);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_accumType_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_accumType_token3);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_accumType_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_accumType_token4);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_accumType_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_accumType_token5);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_accumType_token5);
      if (lookahead == ' ') ADVANCE(144);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_accumType_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_accumType_token6);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_accumType_token7);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_accumType_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_accumType_token8);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_accumType_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_accumType_token9);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_accumType_token9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_accumType_token10);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_accumType_token10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_accumType_token11);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_accumType_token12);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_accumType_token13);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_accumType_token13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_accumType_token14);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_accumType_token14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_elementType_token1);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_elementType_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_queryBodyIfStmt_token1);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_queryBodyIfStmt_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_queryBodyIfStmt_token2);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_queryBodyIfStmt_token3);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_queryBodyIfStmt_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_queryBodyIfStmt_token4);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_queryBodyIfStmt_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_queryBodyWhileStmt_token1);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_queryBodyWhileStmt_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_queryBodyWhileStmt_token2);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_queryBodyWhileStmt_token3);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_fileDeclStmt_token1);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_fileDeclStmt_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_simpleSet_token1);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_simpleSet_token2);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_simpleSet_token3);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_seed_token1);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_seed_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_DOT_STAR);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_seed_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_selectVertParams_token1);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_printStmt_token1);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_printStmt_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_printStmt_token2);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_printStmt_token3);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_printExpr_token1);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_returnStmt_token1);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_returnStmt_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_gsqlSelectClause_token1);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_gsqlSelectClause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_fromClause_token1);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_fromClause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_WHERE);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_accumClause_token1);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_postAccumClause_token1);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_perClauseV2_token1);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_stringLiteral_token1);
      if (lookahead == '\t') ADVANCE(621);
      if (lookahead == '\r') ADVANCE(625);
      if (lookahead == ' ') ADVANCE(625);
      if (lookahead == '#') ADVANCE(625);
      if (lookahead == '/') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(625);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_stringLiteral_token1);
      if (lookahead == '*') ADVANCE(624);
      if (lookahead == '/') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(625);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_stringLiteral_token1);
      if (lookahead == '*') ADVANCE(623);
      if (lookahead == '/') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(624);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_stringLiteral_token1);
      if (lookahead == '*') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(624);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_stringLiteral_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(625);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(626);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'b') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'y') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(842);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(744);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(819);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(793);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(821);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(840);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(827);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(657);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(758);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(827);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(790);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(758);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(576);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(741);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(804);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(757);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(663);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_baseType_token1);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_baseType_token2);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_baseType_token3);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_baseType_token4);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_baseType_token5);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_baseType_token6);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_baseType_token7);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_SET);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_SET);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_BAG);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_FILE);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_CREATE_VERTEX_token1);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_CREATE_UNDIRECTED_EDGE_token1);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_CREATE_UNDIRECTED_EDGE_token2);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_CREATE_DIRECTED_EDGE_token1);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_CREATE_DIRECTED_EDGE_token2);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_CREATE_DIRECTED_EDGE_token3);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_WITH_token1);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_DQUOTEnone_DQUOTE);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_WITH_token2);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_primary_id_as_attribute);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_DQUOTEtrue_DQUOTE);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_CREATE_GRAPH_token1);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_CREATE_GRAPH_token2);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_USE_GRAPH_token1);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_primary_id_name_type_token1);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_DROP_token1);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_DROP_token2);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_ADD_INDEX_token1);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_ADD_INDEX_token2);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_ADD_INDEX_token3);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_ADD_INDEX_token4);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_create_loading_job_token1);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_create_loading_job_token2);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_create_loading_job_token3);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_define_statement_token1);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_define_statement_token2);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 480},
  [2] = {.lex_state = 447},
  [3] = {.lex_state = 447},
  [4] = {.lex_state = 447},
  [5] = {.lex_state = 447},
  [6] = {.lex_state = 447},
  [7] = {.lex_state = 448},
  [8] = {.lex_state = 449},
  [9] = {.lex_state = 450},
  [10] = {.lex_state = 449},
  [11] = {.lex_state = 449},
  [12] = {.lex_state = 449},
  [13] = {.lex_state = 449},
  [14] = {.lex_state = 449},
  [15] = {.lex_state = 449},
  [16] = {.lex_state = 449},
  [17] = {.lex_state = 449},
  [18] = {.lex_state = 449},
  [19] = {.lex_state = 449},
  [20] = {.lex_state = 449},
  [21] = {.lex_state = 449},
  [22] = {.lex_state = 449},
  [23] = {.lex_state = 449},
  [24] = {.lex_state = 449},
  [25] = {.lex_state = 449},
  [26] = {.lex_state = 449},
  [27] = {.lex_state = 449},
  [28] = {.lex_state = 449},
  [29] = {.lex_state = 449},
  [30] = {.lex_state = 449},
  [31] = {.lex_state = 448},
  [32] = {.lex_state = 448},
  [33] = {.lex_state = 449},
  [34] = {.lex_state = 447},
  [35] = {.lex_state = 447},
  [36] = {.lex_state = 447},
  [37] = {.lex_state = 448},
  [38] = {.lex_state = 480},
  [39] = {.lex_state = 480},
  [40] = {.lex_state = 451},
  [41] = {.lex_state = 451},
  [42] = {.lex_state = 451},
  [43] = {.lex_state = 451},
  [44] = {.lex_state = 451},
  [45] = {.lex_state = 451},
  [46] = {.lex_state = 451},
  [47] = {.lex_state = 451},
  [48] = {.lex_state = 451},
  [49] = {.lex_state = 480},
  [50] = {.lex_state = 451},
  [51] = {.lex_state = 480},
  [52] = {.lex_state = 451},
  [53] = {.lex_state = 452},
  [54] = {.lex_state = 451},
  [55] = {.lex_state = 452},
  [56] = {.lex_state = 449},
  [57] = {.lex_state = 453},
  [58] = {.lex_state = 453},
  [59] = {.lex_state = 453},
  [60] = {.lex_state = 453},
  [61] = {.lex_state = 454},
  [62] = {.lex_state = 453},
  [63] = {.lex_state = 453},
  [64] = {.lex_state = 453},
  [65] = {.lex_state = 453},
  [66] = {.lex_state = 453},
  [67] = {.lex_state = 453},
  [68] = {.lex_state = 453},
  [69] = {.lex_state = 455},
  [70] = {.lex_state = 452},
  [71] = {.lex_state = 455},
  [72] = {.lex_state = 452},
  [73] = {.lex_state = 455},
  [74] = {.lex_state = 452},
  [75] = {.lex_state = 455},
  [76] = {.lex_state = 451},
  [77] = {.lex_state = 455},
  [78] = {.lex_state = 452},
  [79] = {.lex_state = 452},
  [80] = {.lex_state = 452},
  [81] = {.lex_state = 452},
  [82] = {.lex_state = 456},
  [83] = {.lex_state = 456},
  [84] = {.lex_state = 452},
  [85] = {.lex_state = 452},
  [86] = {.lex_state = 452},
  [87] = {.lex_state = 452},
  [88] = {.lex_state = 452},
  [89] = {.lex_state = 452},
  [90] = {.lex_state = 452},
  [91] = {.lex_state = 452},
  [92] = {.lex_state = 452},
  [93] = {.lex_state = 452},
  [94] = {.lex_state = 457},
  [95] = {.lex_state = 457},
  [96] = {.lex_state = 457},
  [97] = {.lex_state = 457},
  [98] = {.lex_state = 457},
  [99] = {.lex_state = 457},
  [100] = {.lex_state = 467},
  [101] = {.lex_state = 449},
  [102] = {.lex_state = 467},
  [103] = {.lex_state = 455},
  [104] = {.lex_state = 457},
  [105] = {.lex_state = 457},
  [106] = {.lex_state = 457},
  [107] = {.lex_state = 457},
  [108] = {.lex_state = 457},
  [109] = {.lex_state = 458},
  [110] = {.lex_state = 458},
  [111] = {.lex_state = 449},
  [112] = {.lex_state = 458},
  [113] = {.lex_state = 454},
  [114] = {.lex_state = 449},
  [115] = {.lex_state = 459},
  [116] = {.lex_state = 449},
  [117] = {.lex_state = 449},
  [118] = {.lex_state = 459},
  [119] = {.lex_state = 449},
  [120] = {.lex_state = 449},
  [121] = {.lex_state = 449},
  [122] = {.lex_state = 459},
  [123] = {.lex_state = 459},
  [124] = {.lex_state = 459},
  [125] = {.lex_state = 459},
  [126] = {.lex_state = 458},
  [127] = {.lex_state = 447},
  [128] = {.lex_state = 458},
  [129] = {.lex_state = 458},
  [130] = {.lex_state = 458},
  [131] = {.lex_state = 447},
  [132] = {.lex_state = 480},
  [133] = {.lex_state = 480},
  [134] = {.lex_state = 480},
  [135] = {.lex_state = 458},
  [136] = {.lex_state = 447},
  [137] = {.lex_state = 449},
  [138] = {.lex_state = 458},
  [139] = {.lex_state = 454},
  [140] = {.lex_state = 449},
  [141] = {.lex_state = 449},
  [142] = {.lex_state = 449},
  [143] = {.lex_state = 460},
  [144] = {.lex_state = 447},
  [145] = {.lex_state = 449},
  [146] = {.lex_state = 460},
  [147] = {.lex_state = 480},
  [148] = {.lex_state = 480},
  [149] = {.lex_state = 447},
  [150] = {.lex_state = 454},
  [151] = {.lex_state = 449},
  [152] = {.lex_state = 449},
  [153] = {.lex_state = 447},
  [154] = {.lex_state = 460},
  [155] = {.lex_state = 460},
  [156] = {.lex_state = 454},
  [157] = {.lex_state = 449},
  [158] = {.lex_state = 480},
  [159] = {.lex_state = 449},
  [160] = {.lex_state = 460},
  [161] = {.lex_state = 454},
  [162] = {.lex_state = 460},
  [163] = {.lex_state = 480},
  [164] = {.lex_state = 480},
  [165] = {.lex_state = 480},
  [166] = {.lex_state = 480},
  [167] = {.lex_state = 454},
  [168] = {.lex_state = 449},
  [169] = {.lex_state = 460},
  [170] = {.lex_state = 447},
  [171] = {.lex_state = 449},
  [172] = {.lex_state = 480},
  [173] = {.lex_state = 461},
  [174] = {.lex_state = 449},
  [175] = {.lex_state = 480},
  [176] = {.lex_state = 449},
  [177] = {.lex_state = 449},
  [178] = {.lex_state = 480},
  [179] = {.lex_state = 454},
  [180] = {.lex_state = 454},
  [181] = {.lex_state = 480},
  [182] = {.lex_state = 480},
  [183] = {.lex_state = 480},
  [184] = {.lex_state = 480},
  [185] = {.lex_state = 454},
  [186] = {.lex_state = 480},
  [187] = {.lex_state = 454},
  [188] = {.lex_state = 480},
  [189] = {.lex_state = 461},
  [190] = {.lex_state = 480},
  [191] = {.lex_state = 480},
  [192] = {.lex_state = 480},
  [193] = {.lex_state = 481},
  [194] = {.lex_state = 482},
  [195] = {.lex_state = 480},
  [196] = {.lex_state = 480},
  [197] = {.lex_state = 480},
  [198] = {.lex_state = 458},
  [199] = {.lex_state = 481},
  [200] = {.lex_state = 480},
  [201] = {.lex_state = 480},
  [202] = {.lex_state = 454},
  [203] = {.lex_state = 480},
  [204] = {.lex_state = 480},
  [205] = {.lex_state = 480},
  [206] = {.lex_state = 480},
  [207] = {.lex_state = 454},
  [208] = {.lex_state = 480},
  [209] = {.lex_state = 454},
  [210] = {.lex_state = 480},
  [211] = {.lex_state = 454},
  [212] = {.lex_state = 480},
  [213] = {.lex_state = 454},
  [214] = {.lex_state = 454},
  [215] = {.lex_state = 480},
  [216] = {.lex_state = 480},
  [217] = {.lex_state = 480},
  [218] = {.lex_state = 480},
  [219] = {.lex_state = 454},
  [220] = {.lex_state = 480},
  [221] = {.lex_state = 480},
  [222] = {.lex_state = 454},
  [223] = {.lex_state = 480},
  [224] = {.lex_state = 462},
  [225] = {.lex_state = 481},
  [226] = {.lex_state = 454},
  [227] = {.lex_state = 480},
  [228] = {.lex_state = 452},
  [229] = {.lex_state = 452},
  [230] = {.lex_state = 454},
  [231] = {.lex_state = 480},
  [232] = {.lex_state = 480},
  [233] = {.lex_state = 480},
  [234] = {.lex_state = 454},
  [235] = {.lex_state = 454},
  [236] = {.lex_state = 480},
  [237] = {.lex_state = 463},
  [238] = {.lex_state = 454},
  [239] = {.lex_state = 454},
  [240] = {.lex_state = 480},
  [241] = {.lex_state = 480},
  [242] = {.lex_state = 480},
  [243] = {.lex_state = 480},
  [244] = {.lex_state = 463},
  [245] = {.lex_state = 480},
  [246] = {.lex_state = 480},
  [247] = {.lex_state = 454},
  [248] = {.lex_state = 480},
  [249] = {.lex_state = 480},
  [250] = {.lex_state = 480},
  [251] = {.lex_state = 480},
  [252] = {.lex_state = 480},
  [253] = {.lex_state = 480},
  [254] = {.lex_state = 480},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 480},
  [257] = {.lex_state = 480},
  [258] = {.lex_state = 480},
  [259] = {.lex_state = 480},
  [260] = {.lex_state = 454},
  [261] = {.lex_state = 454},
  [262] = {.lex_state = 455},
  [263] = {.lex_state = 480},
  [264] = {.lex_state = 463},
  [265] = {.lex_state = 454},
  [266] = {.lex_state = 454},
  [267] = {.lex_state = 454},
  [268] = {.lex_state = 454},
  [269] = {.lex_state = 463},
  [270] = {.lex_state = 480},
  [271] = {.lex_state = 480},
  [272] = {.lex_state = 480},
  [273] = {.lex_state = 480},
  [274] = {.lex_state = 454},
  [275] = {.lex_state = 480},
  [276] = {.lex_state = 463},
  [277] = {.lex_state = 480},
  [278] = {.lex_state = 454},
  [279] = {.lex_state = 454},
  [280] = {.lex_state = 454},
  [281] = {.lex_state = 454},
  [282] = {.lex_state = 464},
  [283] = {.lex_state = 454},
  [284] = {.lex_state = 454},
  [285] = {.lex_state = 454},
  [286] = {.lex_state = 454},
  [287] = {.lex_state = 454},
  [288] = {.lex_state = 454},
  [289] = {.lex_state = 454},
  [290] = {.lex_state = 454},
  [291] = {.lex_state = 454},
  [292] = {.lex_state = 456},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 463},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 449},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 463},
  [300] = {.lex_state = 449},
  [301] = {.lex_state = 449},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 463},
  [304] = {.lex_state = 449},
  [305] = {.lex_state = 454},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 457},
  [308] = {.lex_state = 480},
  [309] = {.lex_state = 463},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 463},
  [312] = {.lex_state = 463},
  [313] = {.lex_state = 463},
  [314] = {.lex_state = 454},
  [315] = {.lex_state = 463},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 467},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 463},
  [320] = {.lex_state = 449},
  [321] = {.lex_state = 449},
  [322] = {.lex_state = 463},
  [323] = {.lex_state = 464},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 454},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 463},
  [328] = {.lex_state = 454},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 463},
  [332] = {.lex_state = 449},
  [333] = {.lex_state = 464},
  [334] = {.lex_state = 449},
  [335] = {.lex_state = 464},
  [336] = {.lex_state = 464},
  [337] = {.lex_state = 465},
  [338] = {.lex_state = 463},
  [339] = {.lex_state = 449},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 449},
  [342] = {.lex_state = 465},
  [343] = {.lex_state = 449},
  [344] = {.lex_state = 449},
  [345] = {.lex_state = 448},
  [346] = {.lex_state = 449},
  [347] = {.lex_state = 449},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 463},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 449},
  [352] = {.lex_state = 449},
  [353] = {.lex_state = 449},
  [354] = {.lex_state = 449},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 449},
  [358] = {.lex_state = 449},
  [359] = {.lex_state = 463},
  [360] = {.lex_state = 449},
  [361] = {.lex_state = 463},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 449},
  [364] = {.lex_state = 464},
  [365] = {.lex_state = 449},
  [366] = {.lex_state = 463},
  [367] = {.lex_state = 480},
  [368] = {.lex_state = 448},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 480},
  [371] = {.lex_state = 463},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 449},
  [374] = {.lex_state = 464},
  [375] = {.lex_state = 463},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 454},
  [378] = {.lex_state = 449},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 464},
  [381] = {.lex_state = 448},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 463},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 480},
  [386] = {.lex_state = 449},
  [387] = {.lex_state = 1},
  [388] = {.lex_state = 463},
  [389] = {.lex_state = 480},
  [390] = {.lex_state = 1},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 1},
  [393] = {.lex_state = 480},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 454},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 454},
  [401] = {.lex_state = 449},
  [402] = {.lex_state = 463},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 463},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 480},
  [407] = {.lex_state = 448},
  [408] = {.lex_state = 448},
  [409] = {.lex_state = 454},
  [410] = {.lex_state = 449},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 463},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 463},
  [426] = {.lex_state = 449},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 448},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 480},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 454},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 463},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 463},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 449},
  [451] = {.lex_state = 448},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 480},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 480},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 448},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 463},
  [483] = {.lex_state = 463},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 463},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 463},
  [491] = {.lex_state = 463},
  [492] = {.lex_state = 463},
  [493] = {.lex_state = 463},
  [494] = {.lex_state = 463},
  [495] = {.lex_state = 480},
  [496] = {.lex_state = 449},
  [497] = {.lex_state = 463},
  [498] = {.lex_state = 480},
  [499] = {.lex_state = 463},
  [500] = {.lex_state = 463},
  [501] = {.lex_state = 463},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 463},
  [505] = {.lex_state = 463},
  [506] = {.lex_state = 480},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 463},
  [509] = {.lex_state = 463},
  [510] = {.lex_state = 463},
  [511] = {.lex_state = 463},
  [512] = {.lex_state = 463},
  [513] = {.lex_state = 463},
  [514] = {.lex_state = 463},
  [515] = {.lex_state = 463},
  [516] = {.lex_state = 463},
  [517] = {.lex_state = 463},
  [518] = {.lex_state = 463},
  [519] = {.lex_state = 463},
  [520] = {.lex_state = 449},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 449},
  [524] = {.lex_state = 463},
  [525] = {.lex_state = 463},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 463},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 463},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 448},
  [532] = {.lex_state = 463},
  [533] = {.lex_state = 448},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 463},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 448},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 463},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 463},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 463},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 463},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 463},
  [552] = {.lex_state = 463},
  [553] = {.lex_state = 480},
  [554] = {.lex_state = 463},
  [555] = {.lex_state = 480},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 463},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 463},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 463},
  [564] = {.lex_state = 463},
  [565] = {.lex_state = 463},
  [566] = {.lex_state = 480},
  [567] = {.lex_state = 447},
  [568] = {.lex_state = 480},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 463},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 463},
  [574] = {.lex_state = 463},
  [575] = {.lex_state = 463},
  [576] = {.lex_state = 463},
  [577] = {.lex_state = 463},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 463},
  [580] = {.lex_state = 480},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 480},
  [584] = {.lex_state = 463},
  [585] = {.lex_state = 463},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 480},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 463},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 463},
  [595] = {.lex_state = 480},
  [596] = {.lex_state = 463},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 463},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 463},
  [601] = {.lex_state = 463},
  [602] = {.lex_state = 463},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 463},
  [608] = {.lex_state = 463},
  [609] = {.lex_state = 463},
  [610] = {.lex_state = 480},
  [611] = {.lex_state = 463},
  [612] = {.lex_state = 463},
  [613] = {.lex_state = 463},
  [614] = {.lex_state = 448},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 463},
  [618] = {.lex_state = 463},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 450},
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
  [635] = {.lex_state = 463},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 480},
  [639] = {.lex_state = 480},
  [640] = {.lex_state = 463},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 480},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 463},
  [653] = {.lex_state = 450},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 480},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 448},
  [663] = {.lex_state = 448},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 463},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 447},
  [670] = {.lex_state = 463},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 0},
  [678] = {.lex_state = 0},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 463},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 0},
  [694] = {.lex_state = 480},
  [695] = {.lex_state = 448},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 480},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 448},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 450},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 449},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 0},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 447},
  [714] = {.lex_state = 447},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 480},
  [717] = {.lex_state = 480},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 450},
  [728] = {.lex_state = 463},
  [729] = {.lex_state = 480},
  [730] = {.lex_state = 480},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 0},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 480},
  [737] = {.lex_state = 463},
  [738] = {.lex_state = 480},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 0},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 480},
  [745] = {.lex_state = 0},
  [746] = {.lex_state = 0},
  [747] = {.lex_state = 0},
  [748] = {.lex_state = 0},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 480},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 0},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 0},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 0},
  [758] = {.lex_state = 448},
  [759] = {.lex_state = 448},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 0},
  [763] = {.lex_state = 448},
  [764] = {.lex_state = 448},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 480},
  [767] = {.lex_state = 448},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 0},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 448},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 448},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 463},
  [778] = {.lex_state = 450},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 448},
  [785] = {.lex_state = 450},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 449},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 0},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 463},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 463},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 0},
  [798] = {.lex_state = 0},
  [799] = {.lex_state = 0},
  [800] = {.lex_state = 0},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 0},
  [803] = {.lex_state = 463},
  [804] = {.lex_state = 0},
  [805] = {.lex_state = 463},
  [806] = {.lex_state = 0},
  [807] = {.lex_state = 0},
  [808] = {.lex_state = 463},
  [809] = {.lex_state = 463},
  [810] = {.lex_state = 463},
  [811] = {.lex_state = 463},
  [812] = {.lex_state = 463},
  [813] = {.lex_state = 0},
  [814] = {.lex_state = 0},
  [815] = {.lex_state = 0},
  [816] = {.lex_state = 0},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 463},
  [819] = {.lex_state = 0},
  [820] = {.lex_state = 0},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 0},
  [823] = {.lex_state = 450},
  [824] = {.lex_state = 454},
  [825] = {.lex_state = 0},
  [826] = {.lex_state = 0},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 463},
  [829] = {.lex_state = 0},
  [830] = {.lex_state = 0},
  [831] = {.lex_state = 0},
  [832] = {.lex_state = 448},
  [833] = {.lex_state = 448},
  [834] = {.lex_state = 448},
  [835] = {.lex_state = 0},
  [836] = {.lex_state = 463},
  [837] = {.lex_state = 0},
  [838] = {.lex_state = 448},
  [839] = {.lex_state = 454},
  [840] = {.lex_state = 0},
  [841] = {.lex_state = 0},
  [842] = {.lex_state = 0},
  [843] = {.lex_state = 0},
  [844] = {.lex_state = 0},
  [845] = {.lex_state = 448},
  [846] = {.lex_state = 0},
  [847] = {.lex_state = 448},
  [848] = {.lex_state = 480},
  [849] = {.lex_state = 480},
  [850] = {.lex_state = 0},
  [851] = {.lex_state = 0},
  [852] = {.lex_state = 0},
  [853] = {.lex_state = 0},
  [854] = {.lex_state = 0},
  [855] = {.lex_state = 0},
  [856] = {.lex_state = 0},
  [857] = {.lex_state = 450},
  [858] = {.lex_state = 0},
  [859] = {.lex_state = 0},
  [860] = {.lex_state = 0},
  [861] = {.lex_state = 0},
  [862] = {.lex_state = 449},
  [863] = {.lex_state = 0},
  [864] = {.lex_state = 0},
  [865] = {.lex_state = 0},
  [866] = {.lex_state = 0},
  [867] = {.lex_state = 0},
  [868] = {.lex_state = 0},
  [869] = {.lex_state = 0},
  [870] = {.lex_state = 0},
  [871] = {.lex_state = 0},
  [872] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym_createSignature_token1] = ACTIONS(1),
    [aux_sym_createSignature_token2] = ACTIONS(1),
    [aux_sym_createSignature_token3] = ACTIONS(1),
    [aux_sym_createSignature_token4] = ACTIONS(1),
    [anon_sym_QUERY] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_FOR] = ACTIONS(1),
    [anon_sym_GRAPH] = ACTIONS(1),
    [anon_sym_API] = ACTIONS(1),
    [anon_sym_SYNTAX] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_typedef_token1] = ACTIONS(1),
    [aux_sym_typedef_token2] = ACTIONS(1),
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
    [aux_sym_condition_token4] = ACTIONS(1),
    [anon_sym_AND] = ACTIONS(1),
    [anon_sym_OR] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [aux_sym_accumDeclStmt_token1] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [aux_sym_accumType_token1] = ACTIONS(1),
    [aux_sym_accumType_token3] = ACTIONS(1),
    [aux_sym_accumType_token5] = ACTIONS(1),
    [aux_sym_accumType_token6] = ACTIONS(1),
    [aux_sym_accumType_token8] = ACTIONS(1),
    [aux_sym_accumType_token9] = ACTIONS(1),
    [aux_sym_accumType_token10] = ACTIONS(1),
    [aux_sym_accumType_token12] = ACTIONS(1),
    [aux_sym_accumType_token13] = ACTIONS(1),
    [aux_sym_accumType_token14] = ACTIONS(1),
    [aux_sym_elementType_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [aux_sym_queryBodyIfStmt_token1] = ACTIONS(1),
    [aux_sym_queryBodyIfStmt_token2] = ACTIONS(1),
    [aux_sym_queryBodyIfStmt_token3] = ACTIONS(1),
    [aux_sym_queryBodyIfStmt_token4] = ACTIONS(1),
    [aux_sym_queryBodyWhileStmt_token1] = ACTIONS(1),
    [aux_sym_queryBodyWhileStmt_token2] = ACTIONS(1),
    [aux_sym_queryBodyWhileStmt_token3] = ACTIONS(1),
    [anon_sym_] = ACTIONS(3),
    [aux_sym_fileDeclStmt_token1] = ACTIONS(1),
    [aux_sym_simpleSet_token1] = ACTIONS(1),
    [aux_sym_simpleSet_token3] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [aux_sym_seed_token1] = ACTIONS(1),
    [aux_sym_selectVertParams_token1] = ACTIONS(1),
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
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_WHERE] = ACTIONS(1),
    [aux_sym_accumClause_token1] = ACTIONS(1),
    [aux_sym_postAccumClause_token1] = ACTIONS(1),
    [aux_sym_perClauseV2_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [aux_sym_integer_token1] = ACTIONS(1),
    [aux_sym_baseType_token1] = ACTIONS(1),
    [aux_sym_baseType_token2] = ACTIONS(1),
    [aux_sym_baseType_token3] = ACTIONS(1),
    [aux_sym_baseType_token4] = ACTIONS(1),
    [aux_sym_baseType_token5] = ACTIONS(1),
    [aux_sym_baseType_token6] = ACTIONS(1),
    [aux_sym_baseType_token7] = ACTIONS(1),
    [anon_sym_SET] = ACTIONS(1),
    [anon_sym_BAG] = ACTIONS(1),
    [anon_sym_FILE] = ACTIONS(1),
    [aux_sym_CREATE_VERTEX_token1] = ACTIONS(1),
    [aux_sym_CREATE_UNDIRECTED_EDGE_token1] = ACTIONS(1),
    [aux_sym_CREATE_UNDIRECTED_EDGE_token2] = ACTIONS(1),
    [aux_sym_CREATE_DIRECTED_EDGE_token1] = ACTIONS(1),
    [aux_sym_CREATE_DIRECTED_EDGE_token2] = ACTIONS(1),
    [aux_sym_CREATE_DIRECTED_EDGE_token3] = ACTIONS(1),
    [aux_sym_WITH_token1] = ACTIONS(1),
    [anon_sym_DQUOTEnone_DQUOTE] = ACTIONS(1),
    [aux_sym_WITH_token2] = ACTIONS(1),
    [aux_sym_CREATE_GRAPH_token1] = ACTIONS(1),
    [aux_sym_CREATE_GRAPH_token2] = ACTIONS(1),
    [aux_sym_USE_GRAPH_token1] = ACTIONS(1),
    [aux_sym_primary_id_name_type_token1] = ACTIONS(1),
    [aux_sym_DROP_token1] = ACTIONS(1),
    [aux_sym_DROP_token2] = ACTIONS(1),
    [aux_sym_ADD_INDEX_token1] = ACTIONS(1),
    [aux_sym_ADD_INDEX_token2] = ACTIONS(1),
    [aux_sym_ADD_INDEX_token4] = ACTIONS(1),
    [aux_sym_create_loading_job_token1] = ACTIONS(1),
    [aux_sym_create_loading_job_token2] = ACTIONS(1),
    [aux_sym_create_loading_job_token3] = ACTIONS(1),
    [aux_sym_define_statement_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(850),
    [sym_createQuery] = STATE(51),
    [sym_createSignature] = STATE(835),
    [sym_interpretQuery] = STATE(51),
    [sym_fromClause] = STATE(51),
    [sym_CREATE_VERTEX] = STATE(51),
    [sym_CREATE_UNDIRECTED_EDGE] = STATE(51),
    [sym_CREATE_DIRECTED_EDGE] = STATE(51),
    [sym_CREATE_GRAPH] = STATE(51),
    [sym_USE_GRAPH] = STATE(51),
    [sym_DROP] = STATE(51),
    [sym_ADD_INDEX] = STATE(51),
    [sym_DROP_INDEX] = STATE(51),
    [sym_create_loading_job] = STATE(51),
    [aux_sym_source_file_repeat1] = STATE(51),
    [aux_sym_createSignature_token1] = ACTIONS(5),
    [aux_sym_interpretQuery_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_] = ACTIONS(3),
    [aux_sym_fromClause_token1] = ACTIONS(9),
    [sym_name] = ACTIONS(11),
    [aux_sym_USE_GRAPH_token1] = ACTIONS(13),
    [aux_sym_DROP_token1] = ACTIONS(15),
    [aux_sym_ADD_INDEX_token1] = ACTIONS(17),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 38,
    ACTIONS(19), 1,
      aux_sym_typedef_token1,
    ACTIONS(21), 1,
      aux_sym_accumDeclStmt_token1,
    ACTIONS(23), 1,
      aux_sym_accumType_token1,
    ACTIONS(25), 1,
      aux_sym_accumType_token2,
    ACTIONS(27), 1,
      aux_sym_accumType_token3,
    ACTIONS(29), 1,
      aux_sym_accumType_token4,
    ACTIONS(33), 1,
      aux_sym_accumType_token7,
    ACTIONS(35), 1,
      aux_sym_accumType_token8,
    ACTIONS(37), 1,
      aux_sym_accumType_token9,
    ACTIONS(39), 1,
      aux_sym_accumType_token10,
    ACTIONS(41), 1,
      aux_sym_accumType_token13,
    ACTIONS(43), 1,
      aux_sym_accumType_token14,
    ACTIONS(45), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(47), 1,
      aux_sym_queryBodyWhileStmt_token1,
    ACTIONS(49), 1,
      aux_sym_fileDeclStmt_token1,
    ACTIONS(51), 1,
      aux_sym_printStmt_token1,
    ACTIONS(53), 1,
      aux_sym_returnStmt_token1,
    ACTIONS(55), 1,
      sym_name,
    ACTIONS(57), 1,
      aux_sym_baseType_token3,
    STATE(7), 1,
      sym_typedefs,
    STATE(32), 1,
      aux_sym_declStmts_repeat1,
    STATE(34), 1,
      aux_sym_typedefs_repeat1,
    STATE(99), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(107), 1,
      sym_declStmts,
    STATE(376), 1,
      sym_accumType,
    STATE(506), 1,
      sym_vertexSetName,
    STATE(582), 1,
      sym_gsqlSelectClause,
    STATE(616), 1,
      sym_gsqlSelectBlock,
    STATE(649), 1,
      sym_typedef,
    STATE(654), 1,
      sym_declStmt,
    STATE(665), 1,
      sym_queryBodyStmts,
    STATE(668), 1,
      sym_queryBodyStmt,
    STATE(705), 1,
      sym_queryBody,
    STATE(872), 1,
      sym_baseType,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(672), 3,
      sym_accumDeclStmt,
      sym_baseDeclStmt,
      sym_fileDeclStmt,
    STATE(673), 6,
      sym_queryBodyIfStmt,
      sym_queryBodyWhileStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
    ACTIONS(31), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [129] = 38,
    ACTIONS(19), 1,
      aux_sym_typedef_token1,
    ACTIONS(21), 1,
      aux_sym_accumDeclStmt_token1,
    ACTIONS(23), 1,
      aux_sym_accumType_token1,
    ACTIONS(25), 1,
      aux_sym_accumType_token2,
    ACTIONS(27), 1,
      aux_sym_accumType_token3,
    ACTIONS(29), 1,
      aux_sym_accumType_token4,
    ACTIONS(33), 1,
      aux_sym_accumType_token7,
    ACTIONS(35), 1,
      aux_sym_accumType_token8,
    ACTIONS(37), 1,
      aux_sym_accumType_token9,
    ACTIONS(39), 1,
      aux_sym_accumType_token10,
    ACTIONS(41), 1,
      aux_sym_accumType_token13,
    ACTIONS(43), 1,
      aux_sym_accumType_token14,
    ACTIONS(45), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(47), 1,
      aux_sym_queryBodyWhileStmt_token1,
    ACTIONS(49), 1,
      aux_sym_fileDeclStmt_token1,
    ACTIONS(51), 1,
      aux_sym_printStmt_token1,
    ACTIONS(53), 1,
      aux_sym_returnStmt_token1,
    ACTIONS(55), 1,
      sym_name,
    ACTIONS(57), 1,
      aux_sym_baseType_token3,
    STATE(7), 1,
      sym_typedefs,
    STATE(32), 1,
      aux_sym_declStmts_repeat1,
    STATE(34), 1,
      aux_sym_typedefs_repeat1,
    STATE(99), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(107), 1,
      sym_declStmts,
    STATE(376), 1,
      sym_accumType,
    STATE(506), 1,
      sym_vertexSetName,
    STATE(582), 1,
      sym_gsqlSelectClause,
    STATE(616), 1,
      sym_gsqlSelectBlock,
    STATE(649), 1,
      sym_typedef,
    STATE(654), 1,
      sym_declStmt,
    STATE(665), 1,
      sym_queryBodyStmts,
    STATE(668), 1,
      sym_queryBodyStmt,
    STATE(696), 1,
      sym_queryBody,
    STATE(872), 1,
      sym_baseType,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(672), 3,
      sym_accumDeclStmt,
      sym_baseDeclStmt,
      sym_fileDeclStmt,
    STATE(673), 6,
      sym_queryBodyIfStmt,
      sym_queryBodyWhileStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
    ACTIONS(31), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [258] = 38,
    ACTIONS(19), 1,
      aux_sym_typedef_token1,
    ACTIONS(21), 1,
      aux_sym_accumDeclStmt_token1,
    ACTIONS(23), 1,
      aux_sym_accumType_token1,
    ACTIONS(25), 1,
      aux_sym_accumType_token2,
    ACTIONS(27), 1,
      aux_sym_accumType_token3,
    ACTIONS(29), 1,
      aux_sym_accumType_token4,
    ACTIONS(33), 1,
      aux_sym_accumType_token7,
    ACTIONS(35), 1,
      aux_sym_accumType_token8,
    ACTIONS(37), 1,
      aux_sym_accumType_token9,
    ACTIONS(39), 1,
      aux_sym_accumType_token10,
    ACTIONS(41), 1,
      aux_sym_accumType_token13,
    ACTIONS(43), 1,
      aux_sym_accumType_token14,
    ACTIONS(45), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(47), 1,
      aux_sym_queryBodyWhileStmt_token1,
    ACTIONS(49), 1,
      aux_sym_fileDeclStmt_token1,
    ACTIONS(51), 1,
      aux_sym_printStmt_token1,
    ACTIONS(53), 1,
      aux_sym_returnStmt_token1,
    ACTIONS(55), 1,
      sym_name,
    ACTIONS(57), 1,
      aux_sym_baseType_token3,
    STATE(7), 1,
      sym_typedefs,
    STATE(32), 1,
      aux_sym_declStmts_repeat1,
    STATE(34), 1,
      aux_sym_typedefs_repeat1,
    STATE(99), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(107), 1,
      sym_declStmts,
    STATE(376), 1,
      sym_accumType,
    STATE(506), 1,
      sym_vertexSetName,
    STATE(582), 1,
      sym_gsqlSelectClause,
    STATE(616), 1,
      sym_gsqlSelectBlock,
    STATE(646), 1,
      sym_queryBody,
    STATE(649), 1,
      sym_typedef,
    STATE(654), 1,
      sym_declStmt,
    STATE(665), 1,
      sym_queryBodyStmts,
    STATE(668), 1,
      sym_queryBodyStmt,
    STATE(872), 1,
      sym_baseType,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(672), 3,
      sym_accumDeclStmt,
      sym_baseDeclStmt,
      sym_fileDeclStmt,
    STATE(673), 6,
      sym_queryBodyIfStmt,
      sym_queryBodyWhileStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
    ACTIONS(31), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [387] = 38,
    ACTIONS(19), 1,
      aux_sym_typedef_token1,
    ACTIONS(21), 1,
      aux_sym_accumDeclStmt_token1,
    ACTIONS(23), 1,
      aux_sym_accumType_token1,
    ACTIONS(25), 1,
      aux_sym_accumType_token2,
    ACTIONS(27), 1,
      aux_sym_accumType_token3,
    ACTIONS(29), 1,
      aux_sym_accumType_token4,
    ACTIONS(33), 1,
      aux_sym_accumType_token7,
    ACTIONS(35), 1,
      aux_sym_accumType_token8,
    ACTIONS(37), 1,
      aux_sym_accumType_token9,
    ACTIONS(39), 1,
      aux_sym_accumType_token10,
    ACTIONS(41), 1,
      aux_sym_accumType_token13,
    ACTIONS(43), 1,
      aux_sym_accumType_token14,
    ACTIONS(45), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(47), 1,
      aux_sym_queryBodyWhileStmt_token1,
    ACTIONS(49), 1,
      aux_sym_fileDeclStmt_token1,
    ACTIONS(51), 1,
      aux_sym_printStmt_token1,
    ACTIONS(53), 1,
      aux_sym_returnStmt_token1,
    ACTIONS(55), 1,
      sym_name,
    ACTIONS(57), 1,
      aux_sym_baseType_token3,
    STATE(7), 1,
      sym_typedefs,
    STATE(32), 1,
      aux_sym_declStmts_repeat1,
    STATE(34), 1,
      aux_sym_typedefs_repeat1,
    STATE(99), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(107), 1,
      sym_declStmts,
    STATE(376), 1,
      sym_accumType,
    STATE(506), 1,
      sym_vertexSetName,
    STATE(582), 1,
      sym_gsqlSelectClause,
    STATE(616), 1,
      sym_gsqlSelectBlock,
    STATE(621), 1,
      sym_queryBody,
    STATE(649), 1,
      sym_typedef,
    STATE(654), 1,
      sym_declStmt,
    STATE(665), 1,
      sym_queryBodyStmts,
    STATE(668), 1,
      sym_queryBodyStmt,
    STATE(872), 1,
      sym_baseType,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(672), 3,
      sym_accumDeclStmt,
      sym_baseDeclStmt,
      sym_fileDeclStmt,
    STATE(673), 6,
      sym_queryBodyIfStmt,
      sym_queryBodyWhileStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
    ACTIONS(31), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [516] = 38,
    ACTIONS(19), 1,
      aux_sym_typedef_token1,
    ACTIONS(21), 1,
      aux_sym_accumDeclStmt_token1,
    ACTIONS(23), 1,
      aux_sym_accumType_token1,
    ACTIONS(25), 1,
      aux_sym_accumType_token2,
    ACTIONS(27), 1,
      aux_sym_accumType_token3,
    ACTIONS(29), 1,
      aux_sym_accumType_token4,
    ACTIONS(33), 1,
      aux_sym_accumType_token7,
    ACTIONS(35), 1,
      aux_sym_accumType_token8,
    ACTIONS(37), 1,
      aux_sym_accumType_token9,
    ACTIONS(39), 1,
      aux_sym_accumType_token10,
    ACTIONS(41), 1,
      aux_sym_accumType_token13,
    ACTIONS(43), 1,
      aux_sym_accumType_token14,
    ACTIONS(45), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(47), 1,
      aux_sym_queryBodyWhileStmt_token1,
    ACTIONS(49), 1,
      aux_sym_fileDeclStmt_token1,
    ACTIONS(51), 1,
      aux_sym_printStmt_token1,
    ACTIONS(53), 1,
      aux_sym_returnStmt_token1,
    ACTIONS(55), 1,
      sym_name,
    ACTIONS(57), 1,
      aux_sym_baseType_token3,
    STATE(7), 1,
      sym_typedefs,
    STATE(32), 1,
      aux_sym_declStmts_repeat1,
    STATE(34), 1,
      aux_sym_typedefs_repeat1,
    STATE(99), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(107), 1,
      sym_declStmts,
    STATE(376), 1,
      sym_accumType,
    STATE(506), 1,
      sym_vertexSetName,
    STATE(582), 1,
      sym_gsqlSelectClause,
    STATE(616), 1,
      sym_gsqlSelectBlock,
    STATE(643), 1,
      sym_queryBody,
    STATE(649), 1,
      sym_typedef,
    STATE(654), 1,
      sym_declStmt,
    STATE(665), 1,
      sym_queryBodyStmts,
    STATE(668), 1,
      sym_queryBodyStmt,
    STATE(872), 1,
      sym_baseType,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(672), 3,
      sym_accumDeclStmt,
      sym_baseDeclStmt,
      sym_fileDeclStmt,
    STATE(673), 6,
      sym_queryBodyIfStmt,
      sym_queryBodyWhileStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
    ACTIONS(31), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [645] = 33,
    ACTIONS(21), 1,
      aux_sym_accumDeclStmt_token1,
    ACTIONS(23), 1,
      aux_sym_accumType_token1,
    ACTIONS(25), 1,
      aux_sym_accumType_token2,
    ACTIONS(27), 1,
      aux_sym_accumType_token3,
    ACTIONS(29), 1,
      aux_sym_accumType_token4,
    ACTIONS(33), 1,
      aux_sym_accumType_token7,
    ACTIONS(35), 1,
      aux_sym_accumType_token8,
    ACTIONS(37), 1,
      aux_sym_accumType_token9,
    ACTIONS(39), 1,
      aux_sym_accumType_token10,
    ACTIONS(41), 1,
      aux_sym_accumType_token13,
    ACTIONS(43), 1,
      aux_sym_accumType_token14,
    ACTIONS(45), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(47), 1,
      aux_sym_queryBodyWhileStmt_token1,
    ACTIONS(49), 1,
      aux_sym_fileDeclStmt_token1,
    ACTIONS(51), 1,
      aux_sym_printStmt_token1,
    ACTIONS(53), 1,
      aux_sym_returnStmt_token1,
    ACTIONS(55), 1,
      sym_name,
    ACTIONS(57), 1,
      aux_sym_baseType_token3,
    STATE(32), 1,
      aux_sym_declStmts_repeat1,
    STATE(95), 1,
      sym_declStmts,
    STATE(99), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(376), 1,
      sym_accumType,
    STATE(506), 1,
      sym_vertexSetName,
    STATE(582), 1,
      sym_gsqlSelectClause,
    STATE(616), 1,
      sym_gsqlSelectBlock,
    STATE(654), 1,
      sym_declStmt,
    STATE(668), 1,
      sym_queryBodyStmt,
    STATE(819), 1,
      sym_queryBodyStmts,
    STATE(872), 1,
      sym_baseType,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(672), 3,
      sym_accumDeclStmt,
      sym_baseDeclStmt,
      sym_fileDeclStmt,
    STATE(673), 6,
      sym_queryBodyIfStmt,
      sym_queryBodyWhileStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
    ACTIONS(31), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [759] = 6,
    ACTIONS(63), 1,
      anon_sym_DOT,
    ACTIONS(65), 1,
      aux_sym_integer_token1,
    STATE(10), 1,
      aux_sym_integer_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(61), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(59), 32,
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
      aux_sym_queryBodyIfStmt_token4,
      aux_sym_queryBodyWhileStmt_token2,
      aux_sym_queryBodyWhileStmt_token3,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [812] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(69), 5,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PLUS,
    ACTIONS(67), 33,
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
      aux_sym_queryBodyIfStmt_token4,
      aux_sym_queryBodyWhileStmt_token2,
      aux_sym_queryBodyWhileStmt_token3,
      anon_sym_SQUOTE,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [859] = 5,
    ACTIONS(75), 1,
      aux_sym_integer_token1,
    STATE(10), 1,
      aux_sym_integer_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(73), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(71), 33,
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
      aux_sym_queryBodyIfStmt_token4,
      aux_sym_queryBodyWhileStmt_token2,
      aux_sym_queryBodyWhileStmt_token3,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [910] = 6,
    ACTIONS(65), 1,
      aux_sym_integer_token1,
    ACTIONS(82), 1,
      anon_sym_DOT,
    STATE(10), 1,
      aux_sym_integer_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(80), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(78), 32,
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
      aux_sym_queryBodyIfStmt_token4,
      aux_sym_queryBodyWhileStmt_token2,
      aux_sym_queryBodyWhileStmt_token3,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [963] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(86), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(84), 34,
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
      aux_sym_queryBodyIfStmt_token4,
      aux_sym_queryBodyWhileStmt_token2,
      aux_sym_queryBodyWhileStmt_token3,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
      aux_sym_define_statement_token1,
  [1009] = 5,
    ACTIONS(65), 1,
      aux_sym_integer_token1,
    STATE(10), 1,
      aux_sym_integer_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(90), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(88), 32,
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
      aux_sym_queryBodyIfStmt_token4,
      aux_sym_queryBodyWhileStmt_token2,
      aux_sym_queryBodyWhileStmt_token3,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [1059] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(94), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(92), 34,
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
      aux_sym_queryBodyIfStmt_token4,
      aux_sym_queryBodyWhileStmt_token2,
      aux_sym_queryBodyWhileStmt_token3,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
      aux_sym_define_statement_token1,
  [1105] = 5,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(101), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(98), 32,
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
      aux_sym_queryBodyIfStmt_token4,
      aux_sym_queryBodyWhileStmt_token2,
      aux_sym_queryBodyWhileStmt_token3,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [1155] = 5,
    ACTIONS(65), 1,
      aux_sym_integer_token1,
    STATE(10), 1,
      aux_sym_integer_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(108), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(106), 32,
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
      aux_sym_queryBodyIfStmt_token4,
      aux_sym_queryBodyWhileStmt_token2,
      aux_sym_queryBodyWhileStmt_token3,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [1205] = 5,
    ACTIONS(110), 1,
      aux_sym_integer_token1,
    STATE(19), 1,
      aux_sym_integer_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(108), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(106), 32,
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
      aux_sym_queryBodyIfStmt_token4,
      aux_sym_queryBodyWhileStmt_token2,
      aux_sym_queryBodyWhileStmt_token3,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [1255] = 5,
    ACTIONS(116), 1,
      aux_sym_integer_token1,
    STATE(13), 1,
      aux_sym_integer_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(114), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(112), 32,
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
      aux_sym_queryBodyIfStmt_token4,
      aux_sym_queryBodyWhileStmt_token2,
      aux_sym_queryBodyWhileStmt_token3,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [1305] = 5,
    ACTIONS(65), 1,
      aux_sym_integer_token1,
    STATE(10), 1,
      aux_sym_integer_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(114), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(112), 32,
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
      aux_sym_queryBodyIfStmt_token4,
      aux_sym_queryBodyWhileStmt_token2,
      aux_sym_queryBodyWhileStmt_token3,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [1355] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(120), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(118), 33,
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
      aux_sym_queryBodyIfStmt_token4,
      aux_sym_queryBodyWhileStmt_token2,
      aux_sym_queryBodyWhileStmt_token3,
      anon_sym_SQUOTE,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [1400] = 4,
    ACTIONS(128), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(125), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(122), 32,
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
      aux_sym_queryBodyIfStmt_token4,
      aux_sym_queryBodyWhileStmt_token2,
      aux_sym_queryBodyWhileStmt_token3,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [1447] = 6,
    ACTIONS(137), 1,
      anon_sym_SLASH,
    STATE(93), 1,
      sym_mathOperator,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(132), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(134), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(130), 24,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
      aux_sym_queryBodyIfStmt_token2,
      aux_sym_queryBodyIfStmt_token4,
      aux_sym_queryBodyWhileStmt_token2,
      aux_sym_queryBodyWhileStmt_token3,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [1498] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(142), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(140), 32,
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
      aux_sym_queryBodyIfStmt_token4,
      aux_sym_queryBodyWhileStmt_token2,
      aux_sym_queryBodyWhileStmt_token3,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [1542] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(146), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(144), 32,
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
      aux_sym_queryBodyIfStmt_token4,
      aux_sym_queryBodyWhileStmt_token2,
      aux_sym_queryBodyWhileStmt_token3,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [1586] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(150), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(148), 32,
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
      aux_sym_queryBodyIfStmt_token4,
      aux_sym_queryBodyWhileStmt_token2,
      aux_sym_queryBodyWhileStmt_token3,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [1630] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(154), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(152), 32,
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
      aux_sym_queryBodyIfStmt_token4,
      aux_sym_queryBodyWhileStmt_token2,
      aux_sym_queryBodyWhileStmt_token3,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [1674] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(125), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(122), 32,
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
      aux_sym_queryBodyIfStmt_token4,
      aux_sym_queryBodyWhileStmt_token2,
      aux_sym_queryBodyWhileStmt_token3,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [1718] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(158), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(156), 32,
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
      aux_sym_queryBodyIfStmt_token4,
      aux_sym_queryBodyWhileStmt_token2,
      aux_sym_queryBodyWhileStmt_token3,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [1762] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(101), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(98), 32,
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
      aux_sym_queryBodyIfStmt_token4,
      aux_sym_queryBodyWhileStmt_token2,
      aux_sym_queryBodyWhileStmt_token3,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [1806] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(162), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(160), 32,
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
      aux_sym_queryBodyIfStmt_token4,
      aux_sym_queryBodyWhileStmt_token2,
      aux_sym_queryBodyWhileStmt_token3,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [1850] = 21,
    ACTIONS(164), 1,
      aux_sym_accumDeclStmt_token1,
    ACTIONS(167), 1,
      aux_sym_accumType_token1,
    ACTIONS(170), 1,
      aux_sym_accumType_token2,
    ACTIONS(173), 1,
      aux_sym_accumType_token3,
    ACTIONS(176), 1,
      aux_sym_accumType_token4,
    ACTIONS(182), 1,
      aux_sym_accumType_token7,
    ACTIONS(185), 1,
      aux_sym_accumType_token8,
    ACTIONS(188), 1,
      aux_sym_accumType_token9,
    ACTIONS(191), 1,
      aux_sym_accumType_token10,
    ACTIONS(194), 1,
      aux_sym_accumType_token13,
    ACTIONS(197), 1,
      aux_sym_accumType_token14,
    ACTIONS(202), 1,
      aux_sym_fileDeclStmt_token1,
    ACTIONS(205), 1,
      aux_sym_baseType_token3,
    STATE(31), 1,
      aux_sym_declStmts_repeat1,
    STATE(376), 1,
      sym_accumType,
    STATE(654), 1,
      sym_declStmt,
    STATE(872), 1,
      sym_baseType,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(672), 3,
      sym_accumDeclStmt,
      sym_baseDeclStmt,
      sym_fileDeclStmt,
    ACTIONS(200), 5,
      aux_sym_queryBodyIfStmt_token1,
      aux_sym_queryBodyWhileStmt_token1,
      aux_sym_printStmt_token1,
      aux_sym_returnStmt_token1,
      sym_name,
    ACTIONS(179), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [1927] = 21,
    ACTIONS(21), 1,
      aux_sym_accumDeclStmt_token1,
    ACTIONS(23), 1,
      aux_sym_accumType_token1,
    ACTIONS(25), 1,
      aux_sym_accumType_token2,
    ACTIONS(27), 1,
      aux_sym_accumType_token3,
    ACTIONS(29), 1,
      aux_sym_accumType_token4,
    ACTIONS(33), 1,
      aux_sym_accumType_token7,
    ACTIONS(35), 1,
      aux_sym_accumType_token8,
    ACTIONS(37), 1,
      aux_sym_accumType_token9,
    ACTIONS(39), 1,
      aux_sym_accumType_token10,
    ACTIONS(41), 1,
      aux_sym_accumType_token13,
    ACTIONS(43), 1,
      aux_sym_accumType_token14,
    ACTIONS(49), 1,
      aux_sym_fileDeclStmt_token1,
    ACTIONS(57), 1,
      aux_sym_baseType_token3,
    STATE(31), 1,
      aux_sym_declStmts_repeat1,
    STATE(376), 1,
      sym_accumType,
    STATE(654), 1,
      sym_declStmt,
    STATE(872), 1,
      sym_baseType,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(672), 3,
      sym_accumDeclStmt,
      sym_baseDeclStmt,
      sym_fileDeclStmt,
    ACTIONS(208), 5,
      aux_sym_queryBodyIfStmt_token1,
      aux_sym_queryBodyWhileStmt_token1,
      aux_sym_printStmt_token1,
      aux_sym_returnStmt_token1,
      sym_name,
    ACTIONS(31), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [2004] = 11,
    ACTIONS(216), 1,
      anon_sym_SLASH,
    ACTIONS(218), 1,
      aux_sym_condition_token1,
    ACTIONS(220), 1,
      aux_sym_condition_token2,
    ACTIONS(222), 1,
      aux_sym_condition_token3,
    STATE(92), 1,
      sym_comparisonOperator,
    STATE(93), 1,
      sym_mathOperator,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(212), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(224), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(214), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(210), 11,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_queryBodyIfStmt_token2,
      aux_sym_queryBodyWhileStmt_token2,
      aux_sym_queryBodyWhileStmt_token3,
      aux_sym_printStmt_token3,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [2060] = 5,
    ACTIONS(19), 1,
      aux_sym_typedef_token1,
    STATE(35), 1,
      aux_sym_typedefs_repeat1,
    STATE(649), 1,
      sym_typedef,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(226), 25,
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
      aux_sym_queryBodyWhileStmt_token1,
      aux_sym_fileDeclStmt_token1,
      aux_sym_printStmt_token1,
      aux_sym_returnStmt_token1,
      sym_name,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [2101] = 5,
    ACTIONS(228), 1,
      aux_sym_typedef_token1,
    STATE(35), 1,
      aux_sym_typedefs_repeat1,
    STATE(649), 1,
      sym_typedef,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(231), 25,
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
      aux_sym_queryBodyWhileStmt_token1,
      aux_sym_fileDeclStmt_token1,
      aux_sym_printStmt_token1,
      aux_sym_returnStmt_token1,
      sym_name,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [2142] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(231), 26,
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
      aux_sym_queryBodyWhileStmt_token1,
      aux_sym_fileDeclStmt_token1,
      aux_sym_printStmt_token1,
      aux_sym_returnStmt_token1,
      sym_name,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [2175] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(200), 25,
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
      aux_sym_queryBodyWhileStmt_token1,
      aux_sym_fileDeclStmt_token1,
      aux_sym_printStmt_token1,
      aux_sym_returnStmt_token1,
      sym_name,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [2207] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(120), 9,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      anon_sym_SLASH,
      anon_sym_PLUS,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
    ACTIONS(118), 16,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
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
      anon_sym_SQUOTE,
      anon_sym_COLON,
  [2241] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(146), 9,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      anon_sym_SLASH,
      anon_sym_PLUS,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
    ACTIONS(144), 15,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
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
      anon_sym_COLON,
  [2274] = 17,
    ACTIONS(23), 1,
      aux_sym_accumType_token1,
    ACTIONS(33), 1,
      aux_sym_accumType_token7,
    ACTIONS(35), 1,
      aux_sym_accumType_token8,
    ACTIONS(37), 1,
      aux_sym_accumType_token9,
    ACTIONS(39), 1,
      aux_sym_accumType_token10,
    ACTIONS(41), 1,
      aux_sym_accumType_token13,
    ACTIONS(43), 1,
      aux_sym_accumType_token14,
    ACTIONS(233), 1,
      aux_sym_accumType_token2,
    ACTIONS(235), 1,
      aux_sym_accumType_token3,
    ACTIONS(237), 1,
      aux_sym_accumType_token4,
    ACTIONS(239), 1,
      aux_sym_accumType_token5,
    ACTIONS(241), 1,
      sym_name,
    ACTIONS(245), 1,
      aux_sym_baseType_token3,
    STATE(502), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(289), 3,
      sym_accumType,
      sym_tupleType,
      sym_baseType,
    ACTIONS(243), 6,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [2334] = 17,
    ACTIONS(23), 1,
      aux_sym_accumType_token1,
    ACTIONS(33), 1,
      aux_sym_accumType_token7,
    ACTIONS(35), 1,
      aux_sym_accumType_token8,
    ACTIONS(37), 1,
      aux_sym_accumType_token9,
    ACTIONS(39), 1,
      aux_sym_accumType_token10,
    ACTIONS(41), 1,
      aux_sym_accumType_token13,
    ACTIONS(43), 1,
      aux_sym_accumType_token14,
    ACTIONS(233), 1,
      aux_sym_accumType_token2,
    ACTIONS(235), 1,
      aux_sym_accumType_token3,
    ACTIONS(237), 1,
      aux_sym_accumType_token4,
    ACTIONS(239), 1,
      aux_sym_accumType_token5,
    ACTIONS(241), 1,
      sym_name,
    ACTIONS(245), 1,
      aux_sym_baseType_token3,
    STATE(536), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(289), 3,
      sym_accumType,
      sym_tupleType,
      sym_baseType,
    ACTIONS(243), 6,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [2394] = 17,
    ACTIONS(23), 1,
      aux_sym_accumType_token1,
    ACTIONS(33), 1,
      aux_sym_accumType_token7,
    ACTIONS(35), 1,
      aux_sym_accumType_token8,
    ACTIONS(37), 1,
      aux_sym_accumType_token9,
    ACTIONS(39), 1,
      aux_sym_accumType_token10,
    ACTIONS(41), 1,
      aux_sym_accumType_token13,
    ACTIONS(43), 1,
      aux_sym_accumType_token14,
    ACTIONS(233), 1,
      aux_sym_accumType_token2,
    ACTIONS(235), 1,
      aux_sym_accumType_token3,
    ACTIONS(237), 1,
      aux_sym_accumType_token4,
    ACTIONS(239), 1,
      aux_sym_accumType_token5,
    ACTIONS(241), 1,
      sym_name,
    ACTIONS(245), 1,
      aux_sym_baseType_token3,
    STATE(764), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(289), 3,
      sym_accumType,
      sym_tupleType,
      sym_baseType,
    ACTIONS(243), 6,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [2454] = 17,
    ACTIONS(23), 1,
      aux_sym_accumType_token1,
    ACTIONS(33), 1,
      aux_sym_accumType_token7,
    ACTIONS(35), 1,
      aux_sym_accumType_token8,
    ACTIONS(37), 1,
      aux_sym_accumType_token9,
    ACTIONS(39), 1,
      aux_sym_accumType_token10,
    ACTIONS(41), 1,
      aux_sym_accumType_token13,
    ACTIONS(43), 1,
      aux_sym_accumType_token14,
    ACTIONS(233), 1,
      aux_sym_accumType_token2,
    ACTIONS(235), 1,
      aux_sym_accumType_token3,
    ACTIONS(237), 1,
      aux_sym_accumType_token4,
    ACTIONS(239), 1,
      aux_sym_accumType_token5,
    ACTIONS(241), 1,
      sym_name,
    ACTIONS(245), 1,
      aux_sym_baseType_token3,
    STATE(414), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(289), 3,
      sym_accumType,
      sym_tupleType,
      sym_baseType,
    ACTIONS(243), 6,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [2514] = 17,
    ACTIONS(23), 1,
      aux_sym_accumType_token1,
    ACTIONS(33), 1,
      aux_sym_accumType_token7,
    ACTIONS(35), 1,
      aux_sym_accumType_token8,
    ACTIONS(37), 1,
      aux_sym_accumType_token9,
    ACTIONS(39), 1,
      aux_sym_accumType_token10,
    ACTIONS(41), 1,
      aux_sym_accumType_token13,
    ACTIONS(43), 1,
      aux_sym_accumType_token14,
    ACTIONS(233), 1,
      aux_sym_accumType_token2,
    ACTIONS(235), 1,
      aux_sym_accumType_token3,
    ACTIONS(237), 1,
      aux_sym_accumType_token4,
    ACTIONS(239), 1,
      aux_sym_accumType_token5,
    ACTIONS(241), 1,
      sym_name,
    ACTIONS(245), 1,
      aux_sym_baseType_token3,
    STATE(772), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(289), 3,
      sym_accumType,
      sym_tupleType,
      sym_baseType,
    ACTIONS(243), 6,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [2574] = 17,
    ACTIONS(247), 1,
      aux_sym_accumType_token1,
    ACTIONS(249), 1,
      aux_sym_accumType_token2,
    ACTIONS(251), 1,
      aux_sym_accumType_token3,
    ACTIONS(253), 1,
      aux_sym_accumType_token4,
    ACTIONS(255), 1,
      aux_sym_accumType_token5,
    ACTIONS(257), 1,
      aux_sym_accumType_token7,
    ACTIONS(259), 1,
      aux_sym_accumType_token8,
    ACTIONS(261), 1,
      aux_sym_accumType_token9,
    ACTIONS(263), 1,
      aux_sym_accumType_token10,
    ACTIONS(265), 1,
      aux_sym_accumType_token13,
    ACTIONS(267), 1,
      aux_sym_accumType_token14,
    ACTIONS(269), 1,
      sym_name,
    ACTIONS(273), 1,
      aux_sym_baseType_token3,
    STATE(220), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(208), 3,
      sym_accumType,
      sym_tupleType,
      sym_baseType,
    ACTIONS(271), 6,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [2634] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(118), 4,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_COLON,
    ACTIONS(120), 19,
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
      sym_name,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [2666] = 17,
    ACTIONS(23), 1,
      aux_sym_accumType_token1,
    ACTIONS(33), 1,
      aux_sym_accumType_token7,
    ACTIONS(35), 1,
      aux_sym_accumType_token8,
    ACTIONS(37), 1,
      aux_sym_accumType_token9,
    ACTIONS(39), 1,
      aux_sym_accumType_token10,
    ACTIONS(41), 1,
      aux_sym_accumType_token13,
    ACTIONS(43), 1,
      aux_sym_accumType_token14,
    ACTIONS(233), 1,
      aux_sym_accumType_token2,
    ACTIONS(235), 1,
      aux_sym_accumType_token3,
    ACTIONS(237), 1,
      aux_sym_accumType_token4,
    ACTIONS(239), 1,
      aux_sym_accumType_token5,
    ACTIONS(241), 1,
      sym_name,
    ACTIONS(245), 1,
      aux_sym_baseType_token3,
    STATE(481), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(289), 3,
      sym_accumType,
      sym_tupleType,
      sym_baseType,
    ACTIONS(243), 6,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [2726] = 17,
    ACTIONS(23), 1,
      aux_sym_accumType_token1,
    ACTIONS(33), 1,
      aux_sym_accumType_token7,
    ACTIONS(35), 1,
      aux_sym_accumType_token8,
    ACTIONS(37), 1,
      aux_sym_accumType_token9,
    ACTIONS(39), 1,
      aux_sym_accumType_token10,
    ACTIONS(41), 1,
      aux_sym_accumType_token13,
    ACTIONS(43), 1,
      aux_sym_accumType_token14,
    ACTIONS(233), 1,
      aux_sym_accumType_token2,
    ACTIONS(235), 1,
      aux_sym_accumType_token3,
    ACTIONS(237), 1,
      aux_sym_accumType_token4,
    ACTIONS(239), 1,
      aux_sym_accumType_token5,
    ACTIONS(241), 1,
      sym_name,
    ACTIONS(245), 1,
      aux_sym_baseType_token3,
    STATE(832), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(289), 3,
      sym_accumType,
      sym_tupleType,
      sym_baseType,
    ACTIONS(243), 6,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [2786] = 11,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
    ACTIONS(277), 1,
      aux_sym_createSignature_token1,
    ACTIONS(280), 1,
      aux_sym_interpretQuery_token1,
    ACTIONS(283), 1,
      aux_sym_fromClause_token1,
    ACTIONS(286), 1,
      sym_name,
    ACTIONS(289), 1,
      aux_sym_USE_GRAPH_token1,
    ACTIONS(292), 1,
      aux_sym_DROP_token1,
    ACTIONS(295), 1,
      aux_sym_ADD_INDEX_token1,
    STATE(835), 1,
      sym_createSignature,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(49), 13,
      sym_createQuery,
      sym_interpretQuery,
      sym_fromClause,
      sym_CREATE_VERTEX,
      sym_CREATE_UNDIRECTED_EDGE,
      sym_CREATE_DIRECTED_EDGE,
      sym_CREATE_GRAPH,
      sym_USE_GRAPH,
      sym_DROP,
      sym_ADD_INDEX,
      sym_DROP_INDEX,
      sym_create_loading_job,
      aux_sym_source_file_repeat1,
  [2833] = 15,
    ACTIONS(23), 1,
      aux_sym_accumType_token1,
    ACTIONS(33), 1,
      aux_sym_accumType_token7,
    ACTIONS(35), 1,
      aux_sym_accumType_token8,
    ACTIONS(37), 1,
      aux_sym_accumType_token9,
    ACTIONS(39), 1,
      aux_sym_accumType_token10,
    ACTIONS(41), 1,
      aux_sym_accumType_token13,
    ACTIONS(43), 1,
      aux_sym_accumType_token14,
    ACTIONS(233), 1,
      aux_sym_accumType_token2,
    ACTIONS(235), 1,
      aux_sym_accumType_token3,
    ACTIONS(237), 1,
      aux_sym_accumType_token4,
    ACTIONS(241), 1,
      sym_name,
    ACTIONS(245), 1,
      aux_sym_baseType_token3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(662), 3,
      sym_accumType,
      sym_tupleType,
      sym_baseType,
    ACTIONS(243), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [2888] = 11,
    ACTIONS(5), 1,
      aux_sym_createSignature_token1,
    ACTIONS(7), 1,
      aux_sym_interpretQuery_token1,
    ACTIONS(9), 1,
      aux_sym_fromClause_token1,
    ACTIONS(13), 1,
      aux_sym_USE_GRAPH_token1,
    ACTIONS(15), 1,
      aux_sym_DROP_token1,
    ACTIONS(17), 1,
      aux_sym_ADD_INDEX_token1,
    ACTIONS(298), 1,
      ts_builtin_sym_end,
    ACTIONS(300), 1,
      sym_name,
    STATE(835), 1,
      sym_createSignature,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(49), 13,
      sym_createQuery,
      sym_interpretQuery,
      sym_fromClause,
      sym_CREATE_VERTEX,
      sym_CREATE_UNDIRECTED_EDGE,
      sym_CREATE_DIRECTED_EDGE,
      sym_CREATE_GRAPH,
      sym_USE_GRAPH,
      sym_DROP,
      sym_ADD_INDEX,
      sym_DROP_INDEX,
      sym_create_loading_job,
      aux_sym_source_file_repeat1,
  [2935] = 15,
    ACTIONS(23), 1,
      aux_sym_accumType_token1,
    ACTIONS(33), 1,
      aux_sym_accumType_token7,
    ACTIONS(35), 1,
      aux_sym_accumType_token8,
    ACTIONS(37), 1,
      aux_sym_accumType_token9,
    ACTIONS(39), 1,
      aux_sym_accumType_token10,
    ACTIONS(41), 1,
      aux_sym_accumType_token13,
    ACTIONS(43), 1,
      aux_sym_accumType_token14,
    ACTIONS(233), 1,
      aux_sym_accumType_token2,
    ACTIONS(235), 1,
      aux_sym_accumType_token3,
    ACTIONS(237), 1,
      aux_sym_accumType_token4,
    ACTIONS(241), 1,
      sym_name,
    ACTIONS(245), 1,
      aux_sym_baseType_token3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(838), 3,
      sym_accumType,
      sym_tupleType,
      sym_baseType,
    ACTIONS(243), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [2990] = 18,
    ACTIONS(302), 1,
      anon_sym_LPAREN,
    ACTIONS(306), 1,
      anon_sym_DASH,
    ACTIONS(308), 1,
      anon_sym_AT_AT,
    ACTIONS(310), 1,
      anon_sym_DOT,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      aux_sym_integer_token1,
    ACTIONS(316), 1,
      sym_name,
    STATE(11), 1,
      aux_sym_integer_repeat1,
    STATE(29), 1,
      sym_globalAccumName,
    STATE(111), 1,
      sym_expr,
    STATE(339), 1,
      sym_printExpr,
    STATE(341), 1,
      sym_vExprSet,
    STATE(357), 1,
      sym_tableName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(304), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(23), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(30), 2,
      sym_constant,
      sym_setBagExpr,
  [3050] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(318), 2,
      anon_sym_RPAREN,
      anon_sym_EQ,
    ACTIONS(320), 19,
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
      sym_name,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [3080] = 18,
    ACTIONS(302), 1,
      anon_sym_LPAREN,
    ACTIONS(306), 1,
      anon_sym_DASH,
    ACTIONS(308), 1,
      anon_sym_AT_AT,
    ACTIONS(310), 1,
      anon_sym_DOT,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      aux_sym_integer_token1,
    ACTIONS(316), 1,
      sym_name,
    STATE(11), 1,
      aux_sym_integer_repeat1,
    STATE(29), 1,
      sym_globalAccumName,
    STATE(111), 1,
      sym_expr,
    STATE(341), 1,
      sym_vExprSet,
    STATE(357), 1,
      sym_tableName,
    STATE(365), 1,
      sym_printExpr,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(304), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(23), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(30), 2,
      sym_constant,
      sym_setBagExpr,
  [3140] = 5,
    ACTIONS(216), 1,
      anon_sym_SLASH,
    STATE(93), 1,
      sym_mathOperator,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(214), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(322), 11,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_queryBodyIfStmt_token2,
      aux_sym_queryBodyWhileStmt_token2,
      aux_sym_queryBodyWhileStmt_token3,
      aux_sym_printStmt_token3,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [3174] = 17,
    ACTIONS(302), 1,
      anon_sym_LPAREN,
    ACTIONS(306), 1,
      anon_sym_DASH,
    ACTIONS(308), 1,
      anon_sym_AT_AT,
    ACTIONS(310), 1,
      anon_sym_DOT,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      aux_sym_integer_token1,
    ACTIONS(324), 1,
      aux_sym_condition_token1,
    ACTIONS(326), 1,
      sym_name,
    STATE(11), 1,
      aux_sym_integer_repeat1,
    STATE(29), 1,
      sym_globalAccumName,
    STATE(33), 1,
      sym_expr,
    STATE(177), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(304), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(23), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(30), 2,
      sym_constant,
      sym_setBagExpr,
  [3231] = 17,
    ACTIONS(302), 1,
      anon_sym_LPAREN,
    ACTIONS(306), 1,
      anon_sym_DASH,
    ACTIONS(308), 1,
      anon_sym_AT_AT,
    ACTIONS(310), 1,
      anon_sym_DOT,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      aux_sym_integer_token1,
    ACTIONS(324), 1,
      aux_sym_condition_token1,
    ACTIONS(326), 1,
      sym_name,
    STATE(11), 1,
      aux_sym_integer_repeat1,
    STATE(29), 1,
      sym_globalAccumName,
    STATE(33), 1,
      sym_expr,
    STATE(363), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(304), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(23), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(30), 2,
      sym_constant,
      sym_setBagExpr,
  [3288] = 17,
    ACTIONS(302), 1,
      anon_sym_LPAREN,
    ACTIONS(306), 1,
      anon_sym_DASH,
    ACTIONS(308), 1,
      anon_sym_AT_AT,
    ACTIONS(310), 1,
      anon_sym_DOT,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      aux_sym_integer_token1,
    ACTIONS(324), 1,
      aux_sym_condition_token1,
    ACTIONS(326), 1,
      sym_name,
    STATE(11), 1,
      aux_sym_integer_repeat1,
    STATE(29), 1,
      sym_globalAccumName,
    STATE(33), 1,
      sym_expr,
    STATE(378), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(304), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(23), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(30), 2,
      sym_constant,
      sym_setBagExpr,
  [3345] = 17,
    ACTIONS(302), 1,
      anon_sym_LPAREN,
    ACTIONS(306), 1,
      anon_sym_DASH,
    ACTIONS(308), 1,
      anon_sym_AT_AT,
    ACTIONS(310), 1,
      anon_sym_DOT,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      aux_sym_integer_token1,
    ACTIONS(324), 1,
      aux_sym_condition_token1,
    ACTIONS(326), 1,
      sym_name,
    STATE(11), 1,
      aux_sym_integer_repeat1,
    STATE(29), 1,
      sym_globalAccumName,
    STATE(33), 1,
      sym_expr,
    STATE(176), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(304), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(23), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(30), 2,
      sym_constant,
      sym_setBagExpr,
  [3402] = 14,
    ACTIONS(328), 1,
      aux_sym_accumType_token1,
    ACTIONS(330), 1,
      aux_sym_accumType_token2,
    ACTIONS(332), 1,
      aux_sym_accumType_token3,
    ACTIONS(334), 1,
      aux_sym_accumType_token4,
    ACTIONS(338), 1,
      aux_sym_accumType_token7,
    ACTIONS(340), 1,
      aux_sym_accumType_token8,
    ACTIONS(342), 1,
      aux_sym_accumType_token9,
    ACTIONS(344), 1,
      aux_sym_accumType_token10,
    ACTIONS(346), 1,
      aux_sym_accumType_token13,
    ACTIONS(348), 1,
      aux_sym_accumType_token14,
    ACTIONS(350), 1,
      aux_sym_baseType_token3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(852), 2,
      sym_accumType,
      sym_baseType,
    ACTIONS(336), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [3453] = 17,
    ACTIONS(302), 1,
      anon_sym_LPAREN,
    ACTIONS(306), 1,
      anon_sym_DASH,
    ACTIONS(308), 1,
      anon_sym_AT_AT,
    ACTIONS(310), 1,
      anon_sym_DOT,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      aux_sym_integer_token1,
    ACTIONS(324), 1,
      aux_sym_condition_token1,
    ACTIONS(326), 1,
      sym_name,
    STATE(11), 1,
      aux_sym_integer_repeat1,
    STATE(29), 1,
      sym_globalAccumName,
    STATE(33), 1,
      sym_expr,
    STATE(401), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(304), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(23), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(30), 2,
      sym_constant,
      sym_setBagExpr,
  [3510] = 17,
    ACTIONS(302), 1,
      anon_sym_LPAREN,
    ACTIONS(306), 1,
      anon_sym_DASH,
    ACTIONS(308), 1,
      anon_sym_AT_AT,
    ACTIONS(310), 1,
      anon_sym_DOT,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      aux_sym_integer_token1,
    ACTIONS(324), 1,
      aux_sym_condition_token1,
    ACTIONS(326), 1,
      sym_name,
    STATE(11), 1,
      aux_sym_integer_repeat1,
    STATE(29), 1,
      sym_globalAccumName,
    STATE(33), 1,
      sym_expr,
    STATE(358), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(304), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(23), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(30), 2,
      sym_constant,
      sym_setBagExpr,
  [3567] = 17,
    ACTIONS(302), 1,
      anon_sym_LPAREN,
    ACTIONS(306), 1,
      anon_sym_DASH,
    ACTIONS(308), 1,
      anon_sym_AT_AT,
    ACTIONS(310), 1,
      anon_sym_DOT,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      aux_sym_integer_token1,
    ACTIONS(324), 1,
      aux_sym_condition_token1,
    ACTIONS(326), 1,
      sym_name,
    STATE(11), 1,
      aux_sym_integer_repeat1,
    STATE(29), 1,
      sym_globalAccumName,
    STATE(33), 1,
      sym_expr,
    STATE(360), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(304), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(23), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(30), 2,
      sym_constant,
      sym_setBagExpr,
  [3624] = 17,
    ACTIONS(302), 1,
      anon_sym_LPAREN,
    ACTIONS(306), 1,
      anon_sym_DASH,
    ACTIONS(308), 1,
      anon_sym_AT_AT,
    ACTIONS(310), 1,
      anon_sym_DOT,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      aux_sym_integer_token1,
    ACTIONS(324), 1,
      aux_sym_condition_token1,
    ACTIONS(326), 1,
      sym_name,
    STATE(11), 1,
      aux_sym_integer_repeat1,
    STATE(29), 1,
      sym_globalAccumName,
    STATE(33), 1,
      sym_expr,
    STATE(304), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(304), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(23), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(30), 2,
      sym_constant,
      sym_setBagExpr,
  [3681] = 17,
    ACTIONS(302), 1,
      anon_sym_LPAREN,
    ACTIONS(306), 1,
      anon_sym_DASH,
    ACTIONS(308), 1,
      anon_sym_AT_AT,
    ACTIONS(310), 1,
      anon_sym_DOT,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      aux_sym_integer_token1,
    ACTIONS(324), 1,
      aux_sym_condition_token1,
    ACTIONS(326), 1,
      sym_name,
    STATE(11), 1,
      aux_sym_integer_repeat1,
    STATE(29), 1,
      sym_globalAccumName,
    STATE(33), 1,
      sym_expr,
    STATE(450), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(304), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(23), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(30), 2,
      sym_constant,
      sym_setBagExpr,
  [3738] = 17,
    ACTIONS(302), 1,
      anon_sym_LPAREN,
    ACTIONS(306), 1,
      anon_sym_DASH,
    ACTIONS(308), 1,
      anon_sym_AT_AT,
    ACTIONS(310), 1,
      anon_sym_DOT,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      aux_sym_integer_token1,
    ACTIONS(324), 1,
      aux_sym_condition_token1,
    ACTIONS(326), 1,
      sym_name,
    STATE(11), 1,
      aux_sym_integer_repeat1,
    STATE(29), 1,
      sym_globalAccumName,
    STATE(33), 1,
      sym_expr,
    STATE(410), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(304), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(23), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(30), 2,
      sym_constant,
      sym_setBagExpr,
  [3795] = 17,
    ACTIONS(302), 1,
      anon_sym_LPAREN,
    ACTIONS(306), 1,
      anon_sym_DASH,
    ACTIONS(308), 1,
      anon_sym_AT_AT,
    ACTIONS(310), 1,
      anon_sym_DOT,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      aux_sym_integer_token1,
    ACTIONS(324), 1,
      aux_sym_condition_token1,
    ACTIONS(326), 1,
      sym_name,
    STATE(11), 1,
      aux_sym_integer_repeat1,
    STATE(29), 1,
      sym_globalAccumName,
    STATE(33), 1,
      sym_expr,
    STATE(426), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(304), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(23), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(30), 2,
      sym_constant,
      sym_setBagExpr,
  [3852] = 13,
    ACTIONS(352), 1,
      anon_sym_RPAREN,
    ACTIONS(354), 1,
      anon_sym_LT,
    ACTIONS(356), 1,
      aux_sym_accumType_token2,
    ACTIONS(358), 1,
      aux_sym_accumType_token3,
    ACTIONS(360), 1,
      aux_sym_accumType_token4,
    ACTIONS(364), 1,
      aux_sym_baseType_token3,
    ACTIONS(368), 1,
      anon_sym_FILE,
    STATE(511), 1,
      sym_parameterType,
    STATE(798), 1,
      sym_parameterList,
    STATE(803), 1,
      sym_baseType,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(366), 2,
      anon_sym_SET,
      anon_sym_BAG,
    ACTIONS(362), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [3900] = 16,
    ACTIONS(302), 1,
      anon_sym_LPAREN,
    ACTIONS(306), 1,
      anon_sym_DASH,
    ACTIONS(310), 1,
      anon_sym_DOT,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      aux_sym_integer_token1,
    ACTIONS(370), 1,
      anon_sym_AT_AT,
    ACTIONS(372), 1,
      sym_name,
    STATE(11), 1,
      aux_sym_integer_repeat1,
    STATE(29), 1,
      sym_globalAccumName,
    STATE(131), 1,
      sym_expr,
    STATE(817), 1,
      sym_argList,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(304), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(23), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(30), 2,
      sym_constant,
      sym_setBagExpr,
  [3954] = 13,
    ACTIONS(354), 1,
      anon_sym_LT,
    ACTIONS(356), 1,
      aux_sym_accumType_token2,
    ACTIONS(358), 1,
      aux_sym_accumType_token3,
    ACTIONS(360), 1,
      aux_sym_accumType_token4,
    ACTIONS(364), 1,
      aux_sym_baseType_token3,
    ACTIONS(368), 1,
      anon_sym_FILE,
    ACTIONS(374), 1,
      anon_sym_RPAREN,
    STATE(511), 1,
      sym_parameterType,
    STATE(803), 1,
      sym_baseType,
    STATE(804), 1,
      sym_parameterList,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(366), 2,
      anon_sym_SET,
      anon_sym_BAG,
    ACTIONS(362), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [4002] = 16,
    ACTIONS(302), 1,
      anon_sym_LPAREN,
    ACTIONS(306), 1,
      anon_sym_DASH,
    ACTIONS(308), 1,
      anon_sym_AT_AT,
    ACTIONS(310), 1,
      anon_sym_DOT,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      aux_sym_integer_token1,
    ACTIONS(326), 1,
      sym_name,
    STATE(11), 1,
      aux_sym_integer_repeat1,
    STATE(29), 1,
      sym_globalAccumName,
    STATE(137), 1,
      sym_expr,
    STATE(522), 1,
      sym_vSetProj,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(304), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(23), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(30), 2,
      sym_constant,
      sym_setBagExpr,
  [4056] = 13,
    ACTIONS(354), 1,
      anon_sym_LT,
    ACTIONS(356), 1,
      aux_sym_accumType_token2,
    ACTIONS(358), 1,
      aux_sym_accumType_token3,
    ACTIONS(360), 1,
      aux_sym_accumType_token4,
    ACTIONS(364), 1,
      aux_sym_baseType_token3,
    ACTIONS(368), 1,
      anon_sym_FILE,
    ACTIONS(376), 1,
      anon_sym_RPAREN,
    STATE(511), 1,
      sym_parameterType,
    STATE(803), 1,
      sym_baseType,
    STATE(840), 1,
      sym_parameterList,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(366), 2,
      anon_sym_SET,
      anon_sym_BAG,
    ACTIONS(362), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [4104] = 16,
    ACTIONS(302), 1,
      anon_sym_LPAREN,
    ACTIONS(306), 1,
      anon_sym_DASH,
    ACTIONS(308), 1,
      anon_sym_AT_AT,
    ACTIONS(310), 1,
      anon_sym_DOT,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      aux_sym_integer_token1,
    ACTIONS(326), 1,
      sym_name,
    STATE(11), 1,
      aux_sym_integer_repeat1,
    STATE(29), 1,
      sym_globalAccumName,
    STATE(137), 1,
      sym_expr,
    STATE(460), 1,
      sym_vSetProj,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(304), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(23), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(30), 2,
      sym_constant,
      sym_setBagExpr,
  [4158] = 13,
    ACTIONS(354), 1,
      anon_sym_LT,
    ACTIONS(356), 1,
      aux_sym_accumType_token2,
    ACTIONS(358), 1,
      aux_sym_accumType_token3,
    ACTIONS(360), 1,
      aux_sym_accumType_token4,
    ACTIONS(364), 1,
      aux_sym_baseType_token3,
    ACTIONS(368), 1,
      anon_sym_FILE,
    ACTIONS(378), 1,
      anon_sym_RPAREN,
    STATE(511), 1,
      sym_parameterType,
    STATE(624), 1,
      sym_parameterList,
    STATE(803), 1,
      sym_baseType,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(366), 2,
      anon_sym_SET,
      anon_sym_BAG,
    ACTIONS(362), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [4206] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(69), 19,
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
      sym_name,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [4232] = 13,
    ACTIONS(354), 1,
      anon_sym_LT,
    ACTIONS(356), 1,
      aux_sym_accumType_token2,
    ACTIONS(358), 1,
      aux_sym_accumType_token3,
    ACTIONS(360), 1,
      aux_sym_accumType_token4,
    ACTIONS(364), 1,
      aux_sym_baseType_token3,
    ACTIONS(368), 1,
      anon_sym_FILE,
    ACTIONS(380), 1,
      anon_sym_RPAREN,
    STATE(511), 1,
      sym_parameterType,
    STATE(800), 1,
      sym_parameterList,
    STATE(803), 1,
      sym_baseType,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(366), 2,
      anon_sym_SET,
      anon_sym_BAG,
    ACTIONS(362), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [4280] = 16,
    ACTIONS(302), 1,
      anon_sym_LPAREN,
    ACTIONS(306), 1,
      anon_sym_DASH,
    ACTIONS(310), 1,
      anon_sym_DOT,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      aux_sym_integer_token1,
    ACTIONS(370), 1,
      anon_sym_AT_AT,
    ACTIONS(372), 1,
      sym_name,
    STATE(11), 1,
      aux_sym_integer_repeat1,
    STATE(29), 1,
      sym_globalAccumName,
    STATE(131), 1,
      sym_expr,
    STATE(749), 1,
      sym_argList,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(304), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(23), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(30), 2,
      sym_constant,
      sym_setBagExpr,
  [4334] = 15,
    ACTIONS(302), 1,
      anon_sym_LPAREN,
    ACTIONS(306), 1,
      anon_sym_DASH,
    ACTIONS(308), 1,
      anon_sym_AT_AT,
    ACTIONS(310), 1,
      anon_sym_DOT,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      aux_sym_integer_token1,
    ACTIONS(326), 1,
      sym_name,
    STATE(11), 1,
      aux_sym_integer_repeat1,
    STATE(29), 1,
      sym_globalAccumName,
    STATE(119), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(304), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(23), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(30), 2,
      sym_constant,
      sym_setBagExpr,
  [4385] = 15,
    ACTIONS(302), 1,
      anon_sym_LPAREN,
    ACTIONS(306), 1,
      anon_sym_DASH,
    ACTIONS(310), 1,
      anon_sym_DOT,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      aux_sym_integer_token1,
    ACTIONS(370), 1,
      anon_sym_AT_AT,
    ACTIONS(372), 1,
      sym_name,
    STATE(11), 1,
      aux_sym_integer_repeat1,
    STATE(29), 1,
      sym_globalAccumName,
    STATE(153), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(304), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(23), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(30), 2,
      sym_constant,
      sym_setBagExpr,
  [4436] = 15,
    ACTIONS(302), 1,
      anon_sym_LPAREN,
    ACTIONS(306), 1,
      anon_sym_DASH,
    ACTIONS(310), 1,
      anon_sym_DOT,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      aux_sym_integer_token1,
    ACTIONS(370), 1,
      anon_sym_AT_AT,
    ACTIONS(372), 1,
      sym_name,
    STATE(11), 1,
      aux_sym_integer_repeat1,
    STATE(29), 1,
      sym_globalAccumName,
    STATE(136), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(304), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(23), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(30), 2,
      sym_constant,
      sym_setBagExpr,
  [4487] = 13,
    ACTIONS(382), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(387), 1,
      aux_sym_queryBodyWhileStmt_token1,
    ACTIONS(390), 1,
      aux_sym_printStmt_token1,
    ACTIONS(393), 1,
      aux_sym_returnStmt_token1,
    ACTIONS(396), 1,
      sym_name,
    STATE(82), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(506), 1,
      sym_vertexSetName,
    STATE(582), 1,
      sym_gsqlSelectClause,
    STATE(616), 1,
      sym_gsqlSelectBlock,
    STATE(830), 1,
      sym_queryBodyStmt,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(385), 2,
      aux_sym_queryBodyIfStmt_token3,
      aux_sym_queryBodyIfStmt_token4,
    STATE(673), 6,
      sym_queryBodyIfStmt,
      sym_queryBodyWhileStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [4534] = 13,
    ACTIONS(45), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(47), 1,
      aux_sym_queryBodyWhileStmt_token1,
    ACTIONS(51), 1,
      aux_sym_printStmt_token1,
    ACTIONS(53), 1,
      aux_sym_returnStmt_token1,
    ACTIONS(55), 1,
      sym_name,
    STATE(82), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(506), 1,
      sym_vertexSetName,
    STATE(582), 1,
      sym_gsqlSelectClause,
    STATE(616), 1,
      sym_gsqlSelectBlock,
    STATE(830), 1,
      sym_queryBodyStmt,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(399), 2,
      aux_sym_queryBodyIfStmt_token3,
      aux_sym_queryBodyIfStmt_token4,
    STATE(673), 6,
      sym_queryBodyIfStmt,
      sym_queryBodyWhileStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [4581] = 15,
    ACTIONS(302), 1,
      anon_sym_LPAREN,
    ACTIONS(306), 1,
      anon_sym_DASH,
    ACTIONS(310), 1,
      anon_sym_DOT,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      aux_sym_integer_token1,
    ACTIONS(370), 1,
      anon_sym_AT_AT,
    ACTIONS(372), 1,
      sym_name,
    STATE(11), 1,
      aux_sym_integer_repeat1,
    STATE(29), 1,
      sym_globalAccumName,
    STATE(170), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(304), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(23), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(30), 2,
      sym_constant,
      sym_setBagExpr,
  [4632] = 15,
    ACTIONS(302), 1,
      anon_sym_LPAREN,
    ACTIONS(306), 1,
      anon_sym_DASH,
    ACTIONS(308), 1,
      anon_sym_AT_AT,
    ACTIONS(310), 1,
      anon_sym_DOT,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      aux_sym_integer_token1,
    ACTIONS(326), 1,
      sym_name,
    STATE(11), 1,
      aux_sym_integer_repeat1,
    STATE(29), 1,
      sym_globalAccumName,
    STATE(117), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(304), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(23), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(30), 2,
      sym_constant,
      sym_setBagExpr,
  [4683] = 15,
    ACTIONS(302), 1,
      anon_sym_LPAREN,
    ACTIONS(306), 1,
      anon_sym_DASH,
    ACTIONS(308), 1,
      anon_sym_AT_AT,
    ACTIONS(310), 1,
      anon_sym_DOT,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      aux_sym_integer_token1,
    ACTIONS(326), 1,
      sym_name,
    STATE(11), 1,
      aux_sym_integer_repeat1,
    STATE(29), 1,
      sym_globalAccumName,
    STATE(116), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(304), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(23), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(30), 2,
      sym_constant,
      sym_setBagExpr,
  [4734] = 15,
    ACTIONS(302), 1,
      anon_sym_LPAREN,
    ACTIONS(306), 1,
      anon_sym_DASH,
    ACTIONS(310), 1,
      anon_sym_DOT,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      aux_sym_integer_token1,
    ACTIONS(370), 1,
      anon_sym_AT_AT,
    ACTIONS(372), 1,
      sym_name,
    STATE(11), 1,
      aux_sym_integer_repeat1,
    STATE(29), 1,
      sym_globalAccumName,
    STATE(144), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(304), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(23), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(30), 2,
      sym_constant,
      sym_setBagExpr,
  [4785] = 15,
    ACTIONS(302), 1,
      anon_sym_LPAREN,
    ACTIONS(306), 1,
      anon_sym_DASH,
    ACTIONS(310), 1,
      anon_sym_DOT,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      aux_sym_integer_token1,
    ACTIONS(370), 1,
      anon_sym_AT_AT,
    ACTIONS(372), 1,
      sym_name,
    STATE(11), 1,
      aux_sym_integer_repeat1,
    STATE(29), 1,
      sym_globalAccumName,
    STATE(149), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(304), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(23), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(30), 2,
      sym_constant,
      sym_setBagExpr,
  [4836] = 15,
    ACTIONS(302), 1,
      anon_sym_LPAREN,
    ACTIONS(306), 1,
      anon_sym_DASH,
    ACTIONS(308), 1,
      anon_sym_AT_AT,
    ACTIONS(310), 1,
      anon_sym_DOT,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      aux_sym_integer_token1,
    ACTIONS(326), 1,
      sym_name,
    STATE(11), 1,
      aux_sym_integer_repeat1,
    STATE(29), 1,
      sym_globalAccumName,
    STATE(114), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(304), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(23), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(30), 2,
      sym_constant,
      sym_setBagExpr,
  [4887] = 15,
    ACTIONS(302), 1,
      anon_sym_LPAREN,
    ACTIONS(306), 1,
      anon_sym_DASH,
    ACTIONS(308), 1,
      anon_sym_AT_AT,
    ACTIONS(310), 1,
      anon_sym_DOT,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      aux_sym_integer_token1,
    ACTIONS(326), 1,
      sym_name,
    STATE(11), 1,
      aux_sym_integer_repeat1,
    STATE(29), 1,
      sym_globalAccumName,
    STATE(121), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(304), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(23), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(30), 2,
      sym_constant,
      sym_setBagExpr,
  [4938] = 15,
    ACTIONS(302), 1,
      anon_sym_LPAREN,
    ACTIONS(306), 1,
      anon_sym_DASH,
    ACTIONS(308), 1,
      anon_sym_AT_AT,
    ACTIONS(310), 1,
      anon_sym_DOT,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      aux_sym_integer_token1,
    ACTIONS(326), 1,
      sym_name,
    STATE(11), 1,
      aux_sym_integer_repeat1,
    STATE(29), 1,
      sym_globalAccumName,
    STATE(120), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(304), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(23), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(30), 2,
      sym_constant,
      sym_setBagExpr,
  [4989] = 15,
    ACTIONS(302), 1,
      anon_sym_LPAREN,
    ACTIONS(306), 1,
      anon_sym_DASH,
    ACTIONS(308), 1,
      anon_sym_AT_AT,
    ACTIONS(310), 1,
      anon_sym_DOT,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      aux_sym_integer_token1,
    ACTIONS(326), 1,
      sym_name,
    STATE(11), 1,
      aux_sym_integer_repeat1,
    STATE(29), 1,
      sym_globalAccumName,
    STATE(56), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(304), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(23), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(30), 2,
      sym_constant,
      sym_setBagExpr,
  [5040] = 15,
    ACTIONS(302), 1,
      anon_sym_LPAREN,
    ACTIONS(306), 1,
      anon_sym_DASH,
    ACTIONS(308), 1,
      anon_sym_AT_AT,
    ACTIONS(310), 1,
      anon_sym_DOT,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      aux_sym_integer_token1,
    ACTIONS(326), 1,
      sym_name,
    STATE(11), 1,
      aux_sym_integer_repeat1,
    STATE(22), 1,
      sym_expr,
    STATE(29), 1,
      sym_globalAccumName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(304), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(23), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
    STATE(30), 2,
      sym_constant,
      sym_setBagExpr,
  [5091] = 13,
    ACTIONS(45), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(47), 1,
      aux_sym_queryBodyWhileStmt_token1,
    ACTIONS(51), 1,
      aux_sym_printStmt_token1,
    ACTIONS(53), 1,
      aux_sym_returnStmt_token1,
    ACTIONS(55), 1,
      sym_name,
    STATE(83), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(506), 1,
      sym_vertexSetName,
    STATE(569), 1,
      sym_queryBodyStmts,
    STATE(582), 1,
      sym_gsqlSelectClause,
    STATE(616), 1,
      sym_gsqlSelectBlock,
    STATE(830), 1,
      sym_queryBodyStmt,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(673), 6,
      sym_queryBodyIfStmt,
      sym_queryBodyWhileStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [5137] = 13,
    ACTIONS(45), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(47), 1,
      aux_sym_queryBodyWhileStmt_token1,
    ACTIONS(51), 1,
      aux_sym_printStmt_token1,
    ACTIONS(53), 1,
      aux_sym_returnStmt_token1,
    ACTIONS(55), 1,
      sym_name,
    STATE(99), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(506), 1,
      sym_vertexSetName,
    STATE(582), 1,
      sym_gsqlSelectClause,
    STATE(616), 1,
      sym_gsqlSelectBlock,
    STATE(650), 1,
      sym_queryBodyStmts,
    STATE(668), 1,
      sym_queryBodyStmt,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(673), 6,
      sym_queryBodyIfStmt,
      sym_queryBodyWhileStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [5183] = 13,
    ACTIONS(45), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(47), 1,
      aux_sym_queryBodyWhileStmt_token1,
    ACTIONS(51), 1,
      aux_sym_printStmt_token1,
    ACTIONS(53), 1,
      aux_sym_returnStmt_token1,
    ACTIONS(55), 1,
      sym_name,
    STATE(102), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(506), 1,
      sym_vertexSetName,
    STATE(582), 1,
      sym_gsqlSelectClause,
    STATE(616), 1,
      sym_gsqlSelectBlock,
    STATE(792), 1,
      sym_queryBodyStmts,
    STATE(844), 1,
      sym_queryBodyStmt,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(673), 6,
      sym_queryBodyIfStmt,
      sym_queryBodyWhileStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [5229] = 13,
    ACTIONS(47), 1,
      aux_sym_queryBodyWhileStmt_token1,
    ACTIONS(51), 1,
      aux_sym_printStmt_token1,
    ACTIONS(53), 1,
      aux_sym_returnStmt_token1,
    ACTIONS(55), 1,
      sym_name,
    ACTIONS(401), 1,
      aux_sym_queryBodyIfStmt_token1,
    STATE(102), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(506), 1,
      sym_vertexSetName,
    STATE(582), 1,
      sym_gsqlSelectClause,
    STATE(616), 1,
      sym_gsqlSelectBlock,
    STATE(690), 1,
      sym_queryBodyStmts,
    STATE(844), 1,
      sym_queryBodyStmt,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(673), 6,
      sym_queryBodyIfStmt,
      sym_queryBodyWhileStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [5275] = 13,
    ACTIONS(45), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(47), 1,
      aux_sym_queryBodyWhileStmt_token1,
    ACTIONS(51), 1,
      aux_sym_printStmt_token1,
    ACTIONS(53), 1,
      aux_sym_returnStmt_token1,
    ACTIONS(55), 1,
      sym_name,
    STATE(83), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(428), 1,
      sym_queryBodyStmts,
    STATE(506), 1,
      sym_vertexSetName,
    STATE(582), 1,
      sym_gsqlSelectClause,
    STATE(616), 1,
      sym_gsqlSelectBlock,
    STATE(830), 1,
      sym_queryBodyStmt,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(673), 6,
      sym_queryBodyIfStmt,
      sym_queryBodyWhileStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [5321] = 13,
    ACTIONS(45), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(47), 1,
      aux_sym_queryBodyWhileStmt_token1,
    ACTIONS(51), 1,
      aux_sym_printStmt_token1,
    ACTIONS(53), 1,
      aux_sym_returnStmt_token1,
    ACTIONS(55), 1,
      sym_name,
    ACTIONS(403), 1,
      anon_sym_RBRACE,
    STATE(105), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(506), 1,
      sym_vertexSetName,
    STATE(582), 1,
      sym_gsqlSelectClause,
    STATE(616), 1,
      sym_gsqlSelectBlock,
    STATE(668), 1,
      sym_queryBodyStmt,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(673), 6,
      sym_queryBodyIfStmt,
      sym_queryBodyWhileStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [5367] = 13,
    ACTIONS(382), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(385), 1,
      aux_sym_queryBodyIfStmt_token4,
    ACTIONS(387), 1,
      aux_sym_queryBodyWhileStmt_token1,
    ACTIONS(390), 1,
      aux_sym_printStmt_token1,
    ACTIONS(393), 1,
      aux_sym_returnStmt_token1,
    ACTIONS(396), 1,
      sym_name,
    STATE(100), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(506), 1,
      sym_vertexSetName,
    STATE(582), 1,
      sym_gsqlSelectClause,
    STATE(616), 1,
      sym_gsqlSelectBlock,
    STATE(844), 1,
      sym_queryBodyStmt,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(673), 6,
      sym_queryBodyIfStmt,
      sym_queryBodyWhileStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [5413] = 6,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SLASH,
    ACTIONS(104), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(405), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
    ACTIONS(98), 10,
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
  [5445] = 13,
    ACTIONS(45), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(47), 1,
      aux_sym_queryBodyWhileStmt_token1,
    ACTIONS(51), 1,
      aux_sym_printStmt_token1,
    ACTIONS(53), 1,
      aux_sym_returnStmt_token1,
    ACTIONS(55), 1,
      sym_name,
    ACTIONS(399), 1,
      aux_sym_queryBodyIfStmt_token4,
    STATE(100), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(506), 1,
      sym_vertexSetName,
    STATE(582), 1,
      sym_gsqlSelectClause,
    STATE(616), 1,
      sym_gsqlSelectBlock,
    STATE(844), 1,
      sym_queryBodyStmt,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(673), 6,
      sym_queryBodyIfStmt,
      sym_queryBodyWhileStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [5491] = 11,
    ACTIONS(354), 1,
      anon_sym_LT,
    ACTIONS(356), 1,
      aux_sym_accumType_token2,
    ACTIONS(358), 1,
      aux_sym_accumType_token3,
    ACTIONS(360), 1,
      aux_sym_accumType_token4,
    ACTIONS(364), 1,
      aux_sym_baseType_token3,
    ACTIONS(368), 1,
      anon_sym_FILE,
    STATE(577), 1,
      sym_parameterType,
    STATE(803), 1,
      sym_baseType,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(366), 2,
      anon_sym_SET,
      anon_sym_BAG,
    ACTIONS(362), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [5533] = 13,
    ACTIONS(45), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(47), 1,
      aux_sym_queryBodyWhileStmt_token1,
    ACTIONS(51), 1,
      aux_sym_printStmt_token1,
    ACTIONS(53), 1,
      aux_sym_returnStmt_token1,
    ACTIONS(55), 1,
      sym_name,
    STATE(83), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(471), 1,
      sym_queryBodyStmts,
    STATE(506), 1,
      sym_vertexSetName,
    STATE(582), 1,
      sym_gsqlSelectClause,
    STATE(616), 1,
      sym_gsqlSelectBlock,
    STATE(830), 1,
      sym_queryBodyStmt,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(673), 6,
      sym_queryBodyIfStmt,
      sym_queryBodyWhileStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [5579] = 13,
    ACTIONS(382), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(387), 1,
      aux_sym_queryBodyWhileStmt_token1,
    ACTIONS(390), 1,
      aux_sym_printStmt_token1,
    ACTIONS(393), 1,
      aux_sym_returnStmt_token1,
    ACTIONS(396), 1,
      sym_name,
    ACTIONS(409), 1,
      anon_sym_RBRACE,
    STATE(105), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(506), 1,
      sym_vertexSetName,
    STATE(582), 1,
      sym_gsqlSelectClause,
    STATE(616), 1,
      sym_gsqlSelectBlock,
    STATE(668), 1,
      sym_queryBodyStmt,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(673), 6,
      sym_queryBodyIfStmt,
      sym_queryBodyWhileStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [5625] = 13,
    ACTIONS(45), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(47), 1,
      aux_sym_queryBodyWhileStmt_token1,
    ACTIONS(51), 1,
      aux_sym_printStmt_token1,
    ACTIONS(53), 1,
      aux_sym_returnStmt_token1,
    ACTIONS(55), 1,
      sym_name,
    STATE(102), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(506), 1,
      sym_vertexSetName,
    STATE(582), 1,
      sym_gsqlSelectClause,
    STATE(616), 1,
      sym_gsqlSelectBlock,
    STATE(677), 1,
      sym_queryBodyStmts,
    STATE(844), 1,
      sym_queryBodyStmt,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(673), 6,
      sym_queryBodyIfStmt,
      sym_queryBodyWhileStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [5671] = 13,
    ACTIONS(45), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(47), 1,
      aux_sym_queryBodyWhileStmt_token1,
    ACTIONS(51), 1,
      aux_sym_printStmt_token1,
    ACTIONS(53), 1,
      aux_sym_returnStmt_token1,
    ACTIONS(55), 1,
      sym_name,
    STATE(99), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(506), 1,
      sym_vertexSetName,
    STATE(582), 1,
      sym_gsqlSelectClause,
    STATE(616), 1,
      sym_gsqlSelectBlock,
    STATE(668), 1,
      sym_queryBodyStmt,
    STATE(819), 1,
      sym_queryBodyStmts,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(673), 6,
      sym_queryBodyIfStmt,
      sym_queryBodyWhileStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [5717] = 13,
    ACTIONS(47), 1,
      aux_sym_queryBodyWhileStmt_token1,
    ACTIONS(51), 1,
      aux_sym_printStmt_token1,
    ACTIONS(53), 1,
      aux_sym_returnStmt_token1,
    ACTIONS(55), 1,
      sym_name,
    ACTIONS(401), 1,
      aux_sym_queryBodyIfStmt_token1,
    STATE(102), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(506), 1,
      sym_vertexSetName,
    STATE(582), 1,
      sym_gsqlSelectClause,
    STATE(616), 1,
      sym_gsqlSelectBlock,
    STATE(801), 1,
      sym_queryBodyStmts,
    STATE(844), 1,
      sym_queryBodyStmt,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(673), 6,
      sym_queryBodyIfStmt,
      sym_queryBodyWhileStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [5763] = 14,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_LT,
    ACTIONS(415), 1,
      anon_sym_AT_AT,
    ACTIONS(419), 1,
      anon_sym_COLON,
    ACTIONS(421), 1,
      sym_name,
    STATE(345), 1,
      sym_edgeSetType,
    STATE(408), 1,
      sym_atomicEdgeType,
    STATE(528), 1,
      sym_atomicEdgePattern,
    STATE(530), 1,
      sym_stepEdgeTypes,
    STATE(710), 1,
      sym_pathEdgePattern,
    STATE(768), 1,
      sym_stepEdgeSet,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(417), 2,
      anon_sym__,
      aux_sym_seed_token1,
    STATE(381), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_edgeType,
  [5810] = 14,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_LT,
    ACTIONS(415), 1,
      anon_sym_AT_AT,
    ACTIONS(419), 1,
      anon_sym_COLON,
    ACTIONS(421), 1,
      sym_name,
    STATE(407), 1,
      sym_edgeSetType,
    STATE(408), 1,
      sym_atomicEdgeType,
    STATE(528), 1,
      sym_atomicEdgePattern,
    STATE(530), 1,
      sym_stepEdgeTypes,
    STATE(768), 1,
      sym_stepEdgeSet,
    STATE(853), 1,
      sym_pathEdgePattern,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(417), 2,
      anon_sym__,
      aux_sym_seed_token1,
    STATE(381), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_edgeType,
  [5857] = 7,
    ACTIONS(216), 1,
      anon_sym_SLASH,
    ACTIONS(425), 1,
      aux_sym_printExpr_token1,
    ACTIONS(427), 1,
      anon_sym_LBRACK,
    STATE(93), 1,
      sym_mathOperator,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(423), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
    ACTIONS(214), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [5890] = 14,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_LT,
    ACTIONS(415), 1,
      anon_sym_AT_AT,
    ACTIONS(419), 1,
      anon_sym_COLON,
    ACTIONS(421), 1,
      sym_name,
    STATE(407), 1,
      sym_edgeSetType,
    STATE(408), 1,
      sym_atomicEdgeType,
    STATE(528), 1,
      sym_atomicEdgePattern,
    STATE(530), 1,
      sym_stepEdgeTypes,
    STATE(768), 1,
      sym_stepEdgeSet,
    STATE(771), 1,
      sym_pathEdgePattern,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(417), 2,
      anon_sym__,
      aux_sym_seed_token1,
    STATE(381), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_edgeType,
  [5937] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(429), 16,
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
  [5960] = 5,
    ACTIONS(216), 1,
      anon_sym_SLASH,
    STATE(93), 1,
      sym_mathOperator,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(431), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_queryBodyIfStmt_token4,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
    ACTIONS(214), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [5988] = 10,
    ACTIONS(433), 1,
      aux_sym_accumType_token2,
    ACTIONS(435), 1,
      aux_sym_accumType_token3,
    ACTIONS(437), 1,
      aux_sym_accumType_token4,
    ACTIONS(441), 1,
      sym_name,
    ACTIONS(443), 1,
      aux_sym_baseType_token3,
    STATE(161), 1,
      sym_fieldName,
    STATE(525), 1,
      sym_baseType,
    STATE(773), 1,
      sym_tupleFields,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(439), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [6026] = 5,
    ACTIONS(216), 1,
      anon_sym_SLASH,
    STATE(93), 1,
      sym_mathOperator,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(445), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_queryBodyIfStmt_token4,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
    ACTIONS(214), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [6054] = 5,
    ACTIONS(216), 1,
      anon_sym_SLASH,
    STATE(93), 1,
      sym_mathOperator,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(447), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_queryBodyIfStmt_token4,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
    ACTIONS(214), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [6082] = 10,
    ACTIONS(233), 1,
      aux_sym_accumType_token2,
    ACTIONS(235), 1,
      aux_sym_accumType_token3,
    ACTIONS(237), 1,
      aux_sym_accumType_token4,
    ACTIONS(241), 1,
      sym_name,
    ACTIONS(245), 1,
      aux_sym_baseType_token3,
    ACTIONS(449), 1,
      aux_sym_accumType_token5,
    STATE(764), 1,
      sym_elementType,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(533), 2,
      sym_tupleType,
      sym_baseType,
    ACTIONS(243), 6,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [6120] = 5,
    ACTIONS(216), 1,
      anon_sym_SLASH,
    STATE(93), 1,
      sym_mathOperator,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(451), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_queryBodyIfStmt_token4,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
    ACTIONS(214), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [6148] = 5,
    ACTIONS(216), 1,
      anon_sym_SLASH,
    STATE(93), 1,
      sym_mathOperator,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(453), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_queryBodyIfStmt_token4,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
    ACTIONS(214), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [6176] = 5,
    ACTIONS(216), 1,
      anon_sym_SLASH,
    STATE(93), 1,
      sym_mathOperator,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(455), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_queryBodyIfStmt_token4,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
    ACTIONS(214), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [6204] = 10,
    ACTIONS(233), 1,
      aux_sym_accumType_token2,
    ACTIONS(235), 1,
      aux_sym_accumType_token3,
    ACTIONS(237), 1,
      aux_sym_accumType_token4,
    ACTIONS(241), 1,
      sym_name,
    ACTIONS(245), 1,
      aux_sym_baseType_token3,
    ACTIONS(449), 1,
      aux_sym_accumType_token5,
    STATE(832), 1,
      sym_elementType,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(533), 2,
      sym_tupleType,
      sym_baseType,
    ACTIONS(243), 6,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [6242] = 10,
    ACTIONS(233), 1,
      aux_sym_accumType_token2,
    ACTIONS(235), 1,
      aux_sym_accumType_token3,
    ACTIONS(237), 1,
      aux_sym_accumType_token4,
    ACTIONS(241), 1,
      sym_name,
    ACTIONS(245), 1,
      aux_sym_baseType_token3,
    ACTIONS(449), 1,
      aux_sym_accumType_token5,
    STATE(761), 1,
      sym_elementType,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(533), 2,
      sym_tupleType,
      sym_baseType,
    ACTIONS(243), 6,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [6280] = 10,
    ACTIONS(233), 1,
      aux_sym_accumType_token2,
    ACTIONS(235), 1,
      aux_sym_accumType_token3,
    ACTIONS(237), 1,
      aux_sym_accumType_token4,
    ACTIONS(241), 1,
      sym_name,
    ACTIONS(245), 1,
      aux_sym_baseType_token3,
    ACTIONS(449), 1,
      aux_sym_accumType_token5,
    STATE(863), 1,
      sym_elementType,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(533), 2,
      sym_tupleType,
      sym_baseType,
    ACTIONS(243), 6,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [6318] = 9,
    ACTIONS(433), 1,
      aux_sym_accumType_token2,
    ACTIONS(435), 1,
      aux_sym_accumType_token3,
    ACTIONS(437), 1,
      aux_sym_accumType_token4,
    ACTIONS(441), 1,
      sym_name,
    ACTIONS(443), 1,
      aux_sym_baseType_token3,
    STATE(156), 1,
      sym_fieldName,
    STATE(576), 1,
      sym_baseType,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(439), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [6353] = 12,
    ACTIONS(370), 1,
      anon_sym_AT_AT,
    ACTIONS(457), 1,
      anon_sym_LPAREN,
    ACTIONS(461), 1,
      anon_sym_COLON,
    ACTIONS(463), 1,
      sym_name,
    STATE(165), 1,
      sym_vertexSetType,
    STATE(166), 1,
      sym_atomicVertexType,
    STATE(172), 1,
      sym_stepVertexTypes,
    STATE(175), 1,
      sym_stepVertexSet,
    STATE(191), 1,
      sym_pathPattern,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(459), 2,
      anon_sym__,
      aux_sym_seed_token1,
    STATE(148), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexType,
  [6394] = 5,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SLASH,
    ACTIONS(465), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(98), 11,
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
  [6421] = 12,
    ACTIONS(467), 1,
      anon_sym_LPAREN,
    ACTIONS(469), 1,
      anon_sym_AT_AT,
    ACTIONS(473), 1,
      anon_sym_COLON,
    ACTIONS(475), 1,
      sym_name,
    STATE(265), 1,
      sym_vertexSetType,
    STATE(266), 1,
      sym_stepVertexSet,
    STATE(267), 1,
      sym_stepVertexTypes,
    STATE(268), 1,
      sym_atomicVertexType,
    STATE(283), 1,
      sym_pathPattern,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(471), 2,
      anon_sym__,
      aux_sym_seed_token1,
    STATE(207), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexType,
  [6462] = 12,
    ACTIONS(467), 1,
      anon_sym_LPAREN,
    ACTIONS(469), 1,
      anon_sym_AT_AT,
    ACTIONS(473), 1,
      anon_sym_COLON,
    ACTIONS(475), 1,
      sym_name,
    STATE(265), 1,
      sym_vertexSetType,
    STATE(266), 1,
      sym_stepVertexSet,
    STATE(267), 1,
      sym_stepVertexTypes,
    STATE(268), 1,
      sym_atomicVertexType,
    STATE(314), 1,
      sym_pathPattern,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(471), 2,
      anon_sym__,
      aux_sym_seed_token1,
    STATE(207), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexType,
  [6503] = 12,
    ACTIONS(370), 1,
      anon_sym_AT_AT,
    ACTIONS(457), 1,
      anon_sym_LPAREN,
    ACTIONS(461), 1,
      anon_sym_COLON,
    ACTIONS(463), 1,
      sym_name,
    STATE(165), 1,
      sym_vertexSetType,
    STATE(166), 1,
      sym_atomicVertexType,
    STATE(172), 1,
      sym_stepVertexTypes,
    STATE(175), 1,
      sym_stepVertexSet,
    STATE(212), 1,
      sym_pathPattern,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(459), 2,
      anon_sym__,
      aux_sym_seed_token1,
    STATE(148), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexType,
  [6544] = 7,
    ACTIONS(216), 1,
      anon_sym_SLASH,
    ACTIONS(477), 1,
      anon_sym_RPAREN,
    ACTIONS(479), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      sym_mathOperator,
    STATE(470), 1,
      aux_sym_argList_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(214), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [6574] = 5,
    ACTIONS(485), 1,
      anon_sym_PIPE,
    STATE(133), 1,
      aux_sym_stepVertexTypes_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(481), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_COLON,
    ACTIONS(483), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [6600] = 5,
    ACTIONS(485), 1,
      anon_sym_PIPE,
    STATE(134), 1,
      aux_sym_stepVertexTypes_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(487), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_COLON,
    ACTIONS(489), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [6626] = 5,
    ACTIONS(495), 1,
      anon_sym_PIPE,
    STATE(134), 1,
      aux_sym_stepVertexTypes_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(491), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_COLON,
    ACTIONS(493), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [6652] = 11,
    ACTIONS(467), 1,
      anon_sym_LPAREN,
    ACTIONS(469), 1,
      anon_sym_AT_AT,
    ACTIONS(473), 1,
      anon_sym_COLON,
    ACTIONS(475), 1,
      sym_name,
    STATE(265), 1,
      sym_vertexSetType,
    STATE(267), 1,
      sym_stepVertexTypes,
    STATE(268), 1,
      sym_atomicVertexType,
    STATE(279), 1,
      sym_stepVertexSet,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(471), 2,
      anon_sym__,
      aux_sym_seed_token1,
    STATE(207), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexType,
  [6690] = 5,
    ACTIONS(137), 1,
      anon_sym_SLASH,
    STATE(81), 1,
      sym_mathOperator,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(130), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(134), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [6716] = 6,
    ACTIONS(216), 1,
      anon_sym_SLASH,
    ACTIONS(500), 1,
      aux_sym_printExpr_token1,
    STATE(93), 1,
      sym_mathOperator,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(498), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(214), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [6744] = 11,
    ACTIONS(370), 1,
      anon_sym_AT_AT,
    ACTIONS(457), 1,
      anon_sym_LPAREN,
    ACTIONS(461), 1,
      anon_sym_COLON,
    ACTIONS(463), 1,
      sym_name,
    STATE(165), 1,
      sym_vertexSetType,
    STATE(166), 1,
      sym_atomicVertexType,
    STATE(172), 1,
      sym_stepVertexTypes,
    STATE(182), 1,
      sym_stepVertexSet,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(459), 2,
      anon_sym__,
      aux_sym_seed_token1,
    STATE(148), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexType,
  [6782] = 7,
    ACTIONS(330), 1,
      aux_sym_accumType_token2,
    ACTIONS(332), 1,
      aux_sym_accumType_token3,
    ACTIONS(334), 1,
      aux_sym_accumType_token4,
    ACTIONS(350), 1,
      aux_sym_baseType_token3,
    STATE(784), 1,
      sym_baseType,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(336), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [6811] = 10,
    ACTIONS(306), 1,
      anon_sym_DASH,
    ACTIONS(310), 1,
      anon_sym_DOT,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      aux_sym_integer_token1,
    STATE(11), 1,
      aux_sym_integer_repeat1,
    STATE(417), 1,
      sym_constant,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(502), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(23), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [6846] = 3,
    ACTIONS(506), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(504), 11,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_queryBodyIfStmt_token2,
      aux_sym_queryBodyWhileStmt_token2,
      aux_sym_queryBodyWhileStmt_token3,
      aux_sym_printStmt_token3,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [6867] = 10,
    ACTIONS(306), 1,
      anon_sym_DASH,
    ACTIONS(310), 1,
      anon_sym_DOT,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      aux_sym_integer_token1,
    STATE(11), 1,
      aux_sym_integer_repeat1,
    STATE(475), 1,
      sym_constant,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(502), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(23), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [6902] = 10,
    ACTIONS(370), 1,
      anon_sym_AT_AT,
    ACTIONS(508), 1,
      anon_sym_AT,
    ACTIONS(510), 1,
      aux_sym_queryBodyWhileStmt_token1,
    ACTIONS(512), 1,
      sym_name,
    STATE(298), 1,
      sym_dmlSubStmt,
    STATE(657), 1,
      sym_dmlSubStmtList,
    STATE(663), 1,
      sym_globalAccumName,
    STATE(695), 1,
      sym_localAccumName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(348), 4,
      sym_gAccumAccumStmt,
      sym_lAccumAccumStmt,
      sym_assignStmt,
      sym_dmlSubWhileStmt,
  [6937] = 5,
    ACTIONS(216), 1,
      anon_sym_SLASH,
    STATE(81), 1,
      sym_mathOperator,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(514), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(214), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [6962] = 10,
    ACTIONS(306), 1,
      anon_sym_DASH,
    ACTIONS(310), 1,
      anon_sym_DOT,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      aux_sym_integer_token1,
    STATE(11), 1,
      aux_sym_integer_repeat1,
    STATE(615), 1,
      sym_constant,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(502), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(23), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [6997] = 10,
    ACTIONS(370), 1,
      anon_sym_AT_AT,
    ACTIONS(508), 1,
      anon_sym_AT,
    ACTIONS(510), 1,
      aux_sym_queryBodyWhileStmt_token1,
    ACTIONS(512), 1,
      sym_name,
    STATE(298), 1,
      sym_dmlSubStmt,
    STATE(663), 1,
      sym_globalAccumName,
    STATE(671), 1,
      sym_dmlSubStmtList,
    STATE(695), 1,
      sym_localAccumName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(348), 4,
      sym_gAccumAccumStmt,
      sym_lAccumAccumStmt,
      sym_assignStmt,
      sym_dmlSubWhileStmt,
  [7032] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(516), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_COLON,
    ACTIONS(519), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [7053] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(522), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_COLON,
    ACTIONS(524), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [7074] = 5,
    ACTIONS(216), 1,
      anon_sym_SLASH,
    STATE(81), 1,
      sym_mathOperator,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(526), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(214), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7099] = 7,
    ACTIONS(330), 1,
      aux_sym_accumType_token2,
    ACTIONS(332), 1,
      aux_sym_accumType_token3,
    ACTIONS(334), 1,
      aux_sym_accumType_token4,
    ACTIONS(350), 1,
      aux_sym_baseType_token3,
    STATE(701), 1,
      sym_baseType,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(336), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [7128] = 10,
    ACTIONS(306), 1,
      anon_sym_DASH,
    ACTIONS(310), 1,
      anon_sym_DOT,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      aux_sym_integer_token1,
    STATE(11), 1,
      aux_sym_integer_repeat1,
    STATE(526), 1,
      sym_constant,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(502), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(23), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [7163] = 10,
    ACTIONS(306), 1,
      anon_sym_DASH,
    ACTIONS(310), 1,
      anon_sym_DOT,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      aux_sym_integer_token1,
    STATE(11), 1,
      aux_sym_integer_repeat1,
    STATE(593), 1,
      sym_constant,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(502), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(23), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [7198] = 5,
    ACTIONS(216), 1,
      anon_sym_SLASH,
    STATE(81), 1,
      sym_mathOperator,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(528), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(214), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7223] = 10,
    ACTIONS(370), 1,
      anon_sym_AT_AT,
    ACTIONS(508), 1,
      anon_sym_AT,
    ACTIONS(510), 1,
      aux_sym_queryBodyWhileStmt_token1,
    ACTIONS(512), 1,
      sym_name,
    STATE(298), 1,
      sym_dmlSubStmt,
    STATE(447), 1,
      sym_dmlSubStmtList,
    STATE(663), 1,
      sym_globalAccumName,
    STATE(695), 1,
      sym_localAccumName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(348), 4,
      sym_gAccumAccumStmt,
      sym_lAccumAccumStmt,
      sym_assignStmt,
      sym_dmlSubWhileStmt,
  [7258] = 10,
    ACTIONS(370), 1,
      anon_sym_AT_AT,
    ACTIONS(508), 1,
      anon_sym_AT,
    ACTIONS(510), 1,
      aux_sym_queryBodyWhileStmt_token1,
    ACTIONS(512), 1,
      sym_name,
    STATE(298), 1,
      sym_dmlSubStmt,
    STATE(449), 1,
      sym_dmlSubStmtList,
    STATE(663), 1,
      sym_globalAccumName,
    STATE(695), 1,
      sym_localAccumName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(348), 4,
      sym_gAccumAccumStmt,
      sym_lAccumAccumStmt,
      sym_assignStmt,
      sym_dmlSubWhileStmt,
  [7293] = 7,
    ACTIONS(330), 1,
      aux_sym_accumType_token2,
    ACTIONS(332), 1,
      aux_sym_accumType_token3,
    ACTIONS(334), 1,
      aux_sym_accumType_token4,
    ACTIONS(350), 1,
      aux_sym_baseType_token3,
    STATE(614), 1,
      sym_baseType,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(336), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [7322] = 10,
    ACTIONS(306), 1,
      anon_sym_DASH,
    ACTIONS(310), 1,
      anon_sym_DOT,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      aux_sym_integer_token1,
    STATE(11), 1,
      aux_sym_integer_repeat1,
    STATE(457), 1,
      sym_constant,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(502), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(23), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [7357] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(491), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_COLON,
    ACTIONS(493), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [7378] = 10,
    ACTIONS(306), 1,
      anon_sym_DASH,
    ACTIONS(310), 1,
      anon_sym_DOT,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      aux_sym_integer_token1,
    STATE(11), 1,
      aux_sym_integer_repeat1,
    STATE(431), 1,
      sym_constant,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(502), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(23), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [7413] = 10,
    ACTIONS(370), 1,
      anon_sym_AT_AT,
    ACTIONS(508), 1,
      anon_sym_AT,
    ACTIONS(510), 1,
      aux_sym_queryBodyWhileStmt_token1,
    ACTIONS(512), 1,
      sym_name,
    STATE(298), 1,
      sym_dmlSubStmt,
    STATE(466), 1,
      sym_dmlSubStmtList,
    STATE(663), 1,
      sym_globalAccumName,
    STATE(695), 1,
      sym_localAccumName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(348), 4,
      sym_gAccumAccumStmt,
      sym_lAccumAccumStmt,
      sym_assignStmt,
      sym_dmlSubWhileStmt,
  [7448] = 7,
    ACTIONS(330), 1,
      aux_sym_accumType_token2,
    ACTIONS(332), 1,
      aux_sym_accumType_token3,
    ACTIONS(334), 1,
      aux_sym_accumType_token4,
    ACTIONS(350), 1,
      aux_sym_baseType_token3,
    STATE(430), 1,
      sym_baseType,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(336), 7,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
      aux_sym_baseType_token6,
      aux_sym_baseType_token7,
  [7477] = 10,
    ACTIONS(370), 1,
      anon_sym_AT_AT,
    ACTIONS(508), 1,
      anon_sym_AT,
    ACTIONS(510), 1,
      aux_sym_queryBodyWhileStmt_token1,
    ACTIONS(512), 1,
      sym_name,
    STATE(298), 1,
      sym_dmlSubStmt,
    STATE(465), 1,
      sym_dmlSubStmtList,
    STATE(663), 1,
      sym_globalAccumName,
    STATE(695), 1,
      sym_localAccumName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(348), 4,
      sym_gAccumAccumStmt,
      sym_lAccumAccumStmt,
      sym_assignStmt,
      sym_dmlSubWhileStmt,
  [7512] = 5,
    ACTIONS(534), 1,
      anon_sym_DASH,
    STATE(163), 1,
      aux_sym_pathPattern_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(530), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    ACTIONS(532), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [7536] = 5,
    ACTIONS(541), 1,
      anon_sym_DASH,
    STATE(163), 1,
      aux_sym_pathPattern_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(537), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    ACTIONS(539), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [7560] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(543), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_COLON,
    ACTIONS(545), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [7580] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(547), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_COLON,
    ACTIONS(549), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [7600] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(144), 11,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [7618] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(551), 11,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_queryBodyIfStmt_token2,
      aux_sym_queryBodyWhileStmt_token2,
      aux_sym_queryBodyWhileStmt_token3,
      aux_sym_printStmt_token3,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [7636] = 9,
    ACTIONS(370), 1,
      anon_sym_AT_AT,
    ACTIONS(508), 1,
      anon_sym_AT,
    ACTIONS(510), 1,
      aux_sym_queryBodyWhileStmt_token1,
    ACTIONS(512), 1,
      sym_name,
    STATE(324), 1,
      sym_dmlSubStmt,
    STATE(663), 1,
      sym_globalAccumName,
    STATE(695), 1,
      sym_localAccumName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(348), 4,
      sym_gAccumAccumStmt,
      sym_lAccumAccumStmt,
      sym_assignStmt,
      sym_dmlSubWhileStmt,
  [7668] = 5,
    ACTIONS(216), 1,
      anon_sym_SLASH,
    ACTIONS(553), 1,
      anon_sym_SEMI,
    STATE(81), 1,
      sym_mathOperator,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(214), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7692] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(504), 11,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_queryBodyIfStmt_token2,
      aux_sym_queryBodyWhileStmt_token2,
      aux_sym_queryBodyWhileStmt_token3,
      aux_sym_printStmt_token3,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [7710] = 4,
    ACTIONS(559), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(555), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_DASH,
    ACTIONS(557), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [7732] = 9,
    ACTIONS(370), 1,
      anon_sym_AT_AT,
    ACTIONS(561), 1,
      anon_sym_RBRACE,
    ACTIONS(565), 1,
      aux_sym_seed_token2,
    ACTIONS(567), 1,
      sym_name,
    STATE(427), 1,
      sym_seed,
    STATE(659), 1,
      sym_vertexType,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(563), 2,
      anon_sym__,
      aux_sym_seed_token1,
    STATE(599), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexSetName,
  [7764] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(322), 11,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_queryBodyIfStmt_token2,
      aux_sym_queryBodyWhileStmt_token2,
      aux_sym_queryBodyWhileStmt_token3,
      aux_sym_printStmt_token3,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [7782] = 5,
    ACTIONS(541), 1,
      anon_sym_DASH,
    STATE(164), 1,
      aux_sym_pathPattern_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(569), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    ACTIONS(571), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [7806] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(575), 2,
      anon_sym_AND,
      anon_sym_OR,
    ACTIONS(573), 9,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_queryBodyIfStmt_token2,
      aux_sym_queryBodyWhileStmt_token2,
      aux_sym_queryBodyWhileStmt_token3,
      aux_sym_printStmt_token3,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [7826] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(578), 2,
      anon_sym_AND,
      anon_sym_OR,
    ACTIONS(322), 9,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_queryBodyIfStmt_token2,
      aux_sym_queryBodyWhileStmt_token2,
      aux_sym_queryBodyWhileStmt_token3,
      aux_sym_printStmt_token3,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [7846] = 5,
    ACTIONS(581), 1,
      ts_builtin_sym_end,
    ACTIONS(585), 1,
      anon_sym_COMMA,
    STATE(186), 1,
      aux_sym_fromClause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(583), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [7869] = 10,
    ACTIONS(587), 1,
      anon_sym_SEMI,
    ACTIONS(589), 1,
      anon_sym_WHERE,
    ACTIONS(591), 1,
      aux_sym_accumClause_token1,
    ACTIONS(593), 1,
      aux_sym_postAccumClause_token1,
    ACTIONS(595), 1,
      aux_sym_perClauseV2_token1,
    STATE(255), 1,
      sym_whereClause,
    STATE(302), 1,
      sym_accumClause,
    STATE(605), 1,
      sym_perClauseV2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(295), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [7902] = 4,
    ACTIONS(597), 1,
      anon_sym_PIPE,
    STATE(180), 1,
      aux_sym_stepVertexTypes_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(491), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [7923] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(600), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_DASH,
    ACTIONS(602), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [7942] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(604), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_DASH,
    ACTIONS(606), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [7961] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(608), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_DASH,
    ACTIONS(610), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [7980] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(612), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_DASH,
    ACTIONS(614), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [7999] = 4,
    ACTIONS(616), 1,
      anon_sym_PIPE,
    STATE(180), 1,
      aux_sym_stepVertexTypes_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(487), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [8020] = 5,
    ACTIONS(618), 1,
      ts_builtin_sym_end,
    ACTIONS(622), 1,
      anon_sym_COMMA,
    STATE(186), 1,
      aux_sym_fromClause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(620), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [8043] = 4,
    ACTIONS(616), 1,
      anon_sym_PIPE,
    STATE(185), 1,
      aux_sym_stepVertexTypes_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(481), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [8064] = 4,
    ACTIONS(629), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(625), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(627), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [8085] = 8,
    ACTIONS(370), 1,
      anon_sym_AT_AT,
    ACTIONS(565), 1,
      aux_sym_seed_token2,
    ACTIONS(567), 1,
      sym_name,
    STATE(544), 1,
      sym_seed,
    STATE(659), 1,
      sym_vertexType,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(563), 2,
      anon_sym__,
      aux_sym_seed_token1,
    STATE(599), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexSetName,
  [8114] = 5,
    ACTIONS(631), 1,
      ts_builtin_sym_end,
    ACTIONS(635), 1,
      aux_sym_CREATE_DIRECTED_EDGE_token2,
    STATE(250), 1,
      sym_WITH,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(633), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [8137] = 5,
    ACTIONS(585), 1,
      anon_sym_COMMA,
    ACTIONS(637), 1,
      ts_builtin_sym_end,
    STATE(178), 1,
      aux_sym_fromClause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(639), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [8160] = 5,
    ACTIONS(635), 1,
      aux_sym_CREATE_DIRECTED_EDGE_token2,
    ACTIONS(641), 1,
      ts_builtin_sym_end,
    STATE(273), 1,
      sym_WITH,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(643), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [8183] = 5,
    ACTIONS(645), 1,
      ts_builtin_sym_end,
    ACTIONS(649), 1,
      aux_sym_WITH_token1,
    ACTIONS(651), 1,
      anon_sym_primary_id_as_attribute,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(647), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [8206] = 4,
    ACTIONS(653), 1,
      aux_sym_elementType_token1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(625), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(627), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [8227] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(655), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(657), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [8245] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(659), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(661), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [8263] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(663), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(665), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [8281] = 7,
    ACTIONS(370), 1,
      anon_sym_AT_AT,
    ACTIONS(421), 1,
      sym_name,
    STATE(407), 1,
      sym_edgeSetType,
    STATE(557), 1,
      sym_atomicEdgeType,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(417), 2,
      anon_sym__,
      aux_sym_seed_token1,
    STATE(381), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_edgeType,
  [8307] = 4,
    ACTIONS(667), 1,
      ts_builtin_sym_end,
    ACTIONS(671), 1,
      anon_sym_primary_id_as_attribute,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(669), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [8327] = 4,
    ACTIONS(673), 1,
      ts_builtin_sym_end,
    ACTIONS(677), 1,
      aux_sym_CREATE_DIRECTED_EDGE_token2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(675), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [8347] = 4,
    ACTIONS(679), 1,
      ts_builtin_sym_end,
    ACTIONS(683), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(681), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [8367] = 3,
    ACTIONS(665), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(663), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AT_AT,
      aux_sym_CREATE_VERTEX_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token2,
      aux_sym_ADD_INDEX_token4,
  [8385] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(685), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(687), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [8403] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(625), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(627), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [8421] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(689), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(691), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [8439] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(693), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(695), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [8457] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(522), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [8473] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(697), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(699), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [8491] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(516), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [8507] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(701), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(703), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [8525] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(118), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [8541] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(618), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    ACTIONS(620), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [8559] = 3,
    ACTIONS(707), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(705), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AT_AT,
      aux_sym_CREATE_VERTEX_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token2,
      aux_sym_ADD_INDEX_token4,
  [8577] = 3,
    ACTIONS(711), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(709), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AT_AT,
      aux_sym_CREATE_VERTEX_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token2,
      aux_sym_ADD_INDEX_token4,
  [8595] = 4,
    ACTIONS(713), 1,
      ts_builtin_sym_end,
    ACTIONS(717), 1,
      aux_sym_CREATE_DIRECTED_EDGE_token2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(715), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [8615] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(719), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(721), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [8633] = 4,
    ACTIONS(723), 1,
      ts_builtin_sym_end,
    ACTIONS(727), 1,
      aux_sym_CREATE_DIRECTED_EDGE_token2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(725), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [8653] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(729), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(731), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [8671] = 3,
    ACTIONS(721), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(719), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AT_AT,
      aux_sym_CREATE_VERTEX_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token2,
      aux_sym_ADD_INDEX_token4,
  [8689] = 4,
    ACTIONS(733), 1,
      ts_builtin_sym_end,
    ACTIONS(737), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(735), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [8709] = 4,
    ACTIONS(739), 1,
      ts_builtin_sym_end,
    ACTIONS(743), 1,
      aux_sym_CREATE_DIRECTED_EDGE_token2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(741), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [8729] = 3,
    ACTIONS(657), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(655), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AT_AT,
      aux_sym_CREATE_VERTEX_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token2,
      aux_sym_ADD_INDEX_token4,
  [8747] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(745), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(747), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [8765] = 9,
    ACTIONS(55), 1,
      sym_name,
    ACTIONS(749), 1,
      anon_sym_LBRACE,
    ACTIONS(751), 1,
      anon_sym_LPAREN,
    ACTIONS(753), 1,
      aux_sym_gsqlSelectClause_token1,
    STATE(335), 1,
      sym_vertexSetName,
    STATE(374), 1,
      sym_simpleSet,
    STATE(582), 1,
      sym_gsqlSelectClause,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(626), 2,
      sym_seedSet,
      sym_gsqlSelectBlock,
  [8795] = 4,
    ACTIONS(755), 1,
      ts_builtin_sym_end,
    ACTIONS(759), 1,
      anon_sym_primary_id_as_attribute,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(757), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [8815] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(491), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [8831] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(761), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(763), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [8849] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(767), 3,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      sym_name,
    ACTIONS(765), 6,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AT_AT,
      anon_sym_DOT,
      anon_sym_DQUOTE,
      aux_sym_integer_token1,
  [8867] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(771), 3,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      sym_name,
    ACTIONS(769), 6,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AT_AT,
      anon_sym_DOT,
      anon_sym_DQUOTE,
      aux_sym_integer_token1,
  [8885] = 3,
    ACTIONS(731), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(729), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AT_AT,
      aux_sym_CREATE_VERTEX_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token2,
      aux_sym_ADD_INDEX_token4,
  [8903] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(705), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(707), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [8921] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(709), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(711), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [8939] = 4,
    ACTIONS(773), 1,
      ts_builtin_sym_end,
    ACTIONS(777), 1,
      aux_sym_CREATE_DIRECTED_EDGE_token2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(775), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [8959] = 3,
    ACTIONS(763), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(761), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_AT_AT,
      aux_sym_CREATE_VERTEX_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token2,
      aux_sym_ADD_INDEX_token4,
  [8977] = 3,
    ACTIONS(779), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(625), 7,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token2,
      aux_sym_ADD_INDEX_token4,
  [8994] = 3,
    ACTIONS(781), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(783), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [9011] = 7,
    ACTIONS(785), 1,
      anon_sym_DASH,
    ACTIONS(787), 1,
      aux_sym_integer_token1,
    ACTIONS(789), 1,
      sym_name,
    STATE(379), 1,
      aux_sym_integer_repeat1,
    STATE(774), 1,
      sym_simpleSize,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(486), 3,
      sym_integer,
      sym_paramName,
      sym_varName,
  [9036] = 4,
    ACTIONS(791), 1,
      anon_sym_DASH,
    STATE(260), 1,
      aux_sym_pathPattern_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(537), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [9055] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(659), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token2,
      aux_sym_ADD_INDEX_token4,
  [9070] = 3,
    ACTIONS(793), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(795), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [9087] = 3,
    ACTIONS(797), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(799), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [9104] = 3,
    ACTIONS(801), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(803), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [9121] = 3,
    ACTIONS(805), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(807), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [9138] = 7,
    ACTIONS(785), 1,
      anon_sym_DASH,
    ACTIONS(787), 1,
      aux_sym_integer_token1,
    ACTIONS(789), 1,
      sym_name,
    STATE(379), 1,
      aux_sym_integer_repeat1,
    STATE(679), 1,
      sym_simpleSize,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(486), 3,
      sym_integer,
      sym_paramName,
      sym_varName,
  [9163] = 3,
    ACTIONS(809), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(811), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [9180] = 3,
    ACTIONS(813), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(815), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [9197] = 3,
    ACTIONS(817), 1,
      aux_sym_elementType_token1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(625), 7,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token2,
      aux_sym_ADD_INDEX_token4,
  [9214] = 3,
    ACTIONS(819), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(821), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [9231] = 3,
    ACTIONS(823), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(825), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [9248] = 3,
    ACTIONS(827), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(829), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [9265] = 3,
    ACTIONS(831), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(833), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [9282] = 3,
    ACTIONS(835), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(837), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [9299] = 3,
    ACTIONS(839), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(841), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [9316] = 3,
    ACTIONS(843), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(845), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [9333] = 8,
    ACTIONS(591), 1,
      aux_sym_accumClause_token1,
    ACTIONS(593), 1,
      aux_sym_postAccumClause_token1,
    ACTIONS(595), 1,
      aux_sym_perClauseV2_token1,
    ACTIONS(847), 1,
      anon_sym_SEMI,
    STATE(296), 1,
      sym_accumClause,
    STATE(605), 1,
      sym_perClauseV2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(306), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [9360] = 3,
    ACTIONS(849), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(851), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [9377] = 3,
    ACTIONS(853), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(855), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [9394] = 3,
    ACTIONS(857), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(859), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [9411] = 3,
    ACTIONS(861), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(863), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [9428] = 4,
    ACTIONS(865), 1,
      anon_sym_DASH,
    STATE(260), 1,
      aux_sym_pathPattern_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(530), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [9447] = 9,
    ACTIONS(328), 1,
      aux_sym_accumType_token1,
    ACTIONS(338), 1,
      aux_sym_accumType_token7,
    ACTIONS(340), 1,
      aux_sym_accumType_token8,
    ACTIONS(342), 1,
      aux_sym_accumType_token9,
    ACTIONS(344), 1,
      aux_sym_accumType_token10,
    ACTIONS(346), 1,
      aux_sym_accumType_token13,
    ACTIONS(348), 1,
      aux_sym_accumType_token14,
    STATE(487), 1,
      sym_accumType,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [9476] = 9,
    ACTIONS(868), 1,
      aux_sym_createSignature_token2,
    ACTIONS(870), 1,
      aux_sym_createSignature_token4,
    ACTIONS(872), 1,
      anon_sym_QUERY,
    ACTIONS(874), 1,
      aux_sym_baseType_token3,
    ACTIONS(876), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_token1,
    ACTIONS(878), 1,
      aux_sym_CREATE_DIRECTED_EDGE_token1,
    ACTIONS(880), 1,
      aux_sym_CREATE_GRAPH_token1,
    ACTIONS(882), 1,
      aux_sym_create_loading_job_token1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [9505] = 3,
    ACTIONS(884), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(886), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [9522] = 7,
    ACTIONS(785), 1,
      anon_sym_DASH,
    ACTIONS(787), 1,
      aux_sym_integer_token1,
    ACTIONS(789), 1,
      sym_name,
    STATE(379), 1,
      aux_sym_integer_repeat1,
    STATE(814), 1,
      sym_simpleSize,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(486), 3,
      sym_integer,
      sym_paramName,
      sym_varName,
  [9547] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(543), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [9562] = 4,
    ACTIONS(791), 1,
      anon_sym_DASH,
    STATE(238), 1,
      aux_sym_pathPattern_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(569), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [9581] = 3,
    ACTIONS(888), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(555), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_WHERE,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [9598] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(547), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [9613] = 7,
    ACTIONS(785), 1,
      anon_sym_DASH,
    ACTIONS(787), 1,
      aux_sym_integer_token1,
    ACTIONS(789), 1,
      sym_name,
    STATE(379), 1,
      aux_sym_integer_repeat1,
    STATE(864), 1,
      sym_simpleSize,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(486), 3,
      sym_integer,
      sym_paramName,
      sym_varName,
  [9638] = 3,
    ACTIONS(890), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(892), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [9655] = 3,
    ACTIONS(894), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(896), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [9672] = 3,
    ACTIONS(898), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(900), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [9689] = 3,
    ACTIONS(631), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(633), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [9706] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(612), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      aux_sym_fromClause_token1,
      anon_sym_WHERE,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [9721] = 3,
    ACTIONS(667), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(669), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [9738] = 8,
    ACTIONS(749), 1,
      anon_sym_LBRACE,
    ACTIONS(751), 1,
      anon_sym_LPAREN,
    ACTIONS(902), 1,
      sym_name,
    STATE(335), 1,
      sym_vertexSetName,
    STATE(364), 1,
      sym_simpleSet,
    STATE(582), 1,
      sym_gsqlSelectClause,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(742), 2,
      sym_seedSet,
      sym_gsqlSelectBlock,
  [9765] = 3,
    ACTIONS(904), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(906), 7,
      aux_sym_createSignature_token1,
      aux_sym_interpretQuery_token1,
      aux_sym_fromClause_token1,
      sym_name,
      aux_sym_USE_GRAPH_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token1,
  [9782] = 4,
    ACTIONS(908), 1,
      anon_sym_COMMA,
    STATE(288), 1,
      aux_sym_fromClause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(581), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [9800] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(604), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_WHERE,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [9814] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(689), 7,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token2,
      aux_sym_ADD_INDEX_token4,
  [9828] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(701), 7,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token2,
      aux_sym_ADD_INDEX_token4,
  [9842] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(910), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [9856] = 4,
    ACTIONS(908), 1,
      anon_sym_COMMA,
    STATE(278), 1,
      aux_sym_fromClause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(637), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [9874] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(608), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_WHERE,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [9888] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(693), 7,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token2,
      aux_sym_ADD_INDEX_token4,
  [9902] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(745), 7,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token2,
      aux_sym_ADD_INDEX_token4,
  [9916] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(625), 7,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token2,
      aux_sym_ADD_INDEX_token4,
  [9930] = 4,
    ACTIONS(912), 1,
      anon_sym_COMMA,
    STATE(288), 1,
      aux_sym_fromClause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(618), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [9948] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(697), 7,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token2,
      aux_sym_ADD_INDEX_token4,
  [9962] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(685), 7,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token1,
      aux_sym_DROP_token1,
      aux_sym_ADD_INDEX_token2,
      aux_sym_ADD_INDEX_token4,
  [9976] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(600), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_WHERE,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [9990] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(385), 7,
      aux_sym_queryBodyIfStmt_token1,
      aux_sym_queryBodyIfStmt_token3,
      aux_sym_queryBodyIfStmt_token4,
      aux_sym_queryBodyWhileStmt_token1,
      aux_sym_printStmt_token1,
      aux_sym_returnStmt_token1,
      sym_name,
  [10004] = 4,
    ACTIONS(915), 1,
      anon_sym_COMMA,
    STATE(293), 1,
      aux_sym_dmlSubStmtList_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(918), 4,
      anon_sym_SEMI,
      aux_sym_queryBodyIfStmt_token4,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [10021] = 7,
    ACTIONS(370), 1,
      anon_sym_AT_AT,
    ACTIONS(508), 1,
      anon_sym_AT,
    ACTIONS(920), 1,
      sym_name,
    STATE(531), 1,
      sym_localAccumName,
    STATE(766), 1,
      sym_attrName,
    STATE(767), 1,
      sym_globalAccumName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [10044] = 6,
    ACTIONS(593), 1,
      aux_sym_postAccumClause_token1,
    ACTIONS(595), 1,
      aux_sym_perClauseV2_token1,
    ACTIONS(847), 1,
      anon_sym_SEMI,
    STATE(636), 1,
      sym_perClauseV2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(310), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [10065] = 6,
    ACTIONS(593), 1,
      aux_sym_postAccumClause_token1,
    ACTIONS(595), 1,
      aux_sym_perClauseV2_token1,
    ACTIONS(922), 1,
      anon_sym_SEMI,
    STATE(636), 1,
      sym_perClauseV2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(318), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [10086] = 7,
    ACTIONS(924), 1,
      anon_sym_LBRACE,
    ACTIONS(926), 1,
      anon_sym_FOR,
    ACTIONS(928), 1,
      anon_sym_API,
    ACTIONS(930), 1,
      anon_sym_SYNTAX,
    ACTIONS(932), 1,
      anon_sym_RETURNS,
    STATE(445), 1,
      sym_returns,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [10109] = 4,
    ACTIONS(934), 1,
      anon_sym_COMMA,
    STATE(316), 1,
      aux_sym_dmlSubStmtList_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(936), 4,
      anon_sym_SEMI,
      aux_sym_queryBodyIfStmt_token4,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [10126] = 5,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(938), 1,
      sym_name,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(467), 2,
      sym_stringLiteral,
      sym_paramName,
    STATE(782), 2,
      sym_fileVar,
      sym_filePath,
  [10145] = 7,
    ACTIONS(932), 1,
      anon_sym_RETURNS,
    ACTIONS(940), 1,
      anon_sym_LBRACE,
    ACTIONS(942), 1,
      anon_sym_FOR,
    ACTIONS(944), 1,
      anon_sym_API,
    ACTIONS(946), 1,
      anon_sym_SYNTAX,
    STATE(443), 1,
      sym_returns,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [10168] = 7,
    ACTIONS(932), 1,
      anon_sym_RETURNS,
    ACTIONS(948), 1,
      anon_sym_LBRACE,
    ACTIONS(950), 1,
      anon_sym_FOR,
    ACTIONS(952), 1,
      anon_sym_API,
    ACTIONS(954), 1,
      anon_sym_SYNTAX,
    STATE(458), 1,
      sym_returns,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [10191] = 6,
    ACTIONS(593), 1,
      aux_sym_postAccumClause_token1,
    ACTIONS(595), 1,
      aux_sym_perClauseV2_token1,
    ACTIONS(847), 1,
      anon_sym_SEMI,
    STATE(636), 1,
      sym_perClauseV2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(306), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [10212] = 5,
    ACTIONS(469), 1,
      anon_sym_AT_AT,
    ACTIONS(956), 1,
      sym_name,
    STATE(187), 1,
      sym_vertexSetType,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(207), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexType,
  [10231] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(960), 2,
      anon_sym_AND,
      anon_sym_OR,
    ACTIONS(958), 4,
      anon_sym_SEMI,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [10246] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(962), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PIPE,
      aux_sym_CREATE_UNDIRECTED_EDGE_token2,
  [10259] = 6,
    ACTIONS(593), 1,
      aux_sym_postAccumClause_token1,
    ACTIONS(595), 1,
      aux_sym_perClauseV2_token1,
    ACTIONS(922), 1,
      anon_sym_SEMI,
    STATE(636), 1,
      sym_perClauseV2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(310), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [10280] = 3,
    ACTIONS(409), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(385), 5,
      aux_sym_queryBodyIfStmt_token1,
      aux_sym_queryBodyWhileStmt_token1,
      aux_sym_printStmt_token1,
      aux_sym_returnStmt_token1,
      sym_name,
  [10295] = 6,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(785), 1,
      anon_sym_DASH,
    ACTIONS(787), 1,
      aux_sym_integer_token1,
    STATE(379), 1,
      aux_sym_integer_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(658), 2,
      sym_stringLiteral,
      sym_integer,
  [10316] = 5,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(938), 1,
      sym_name,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(467), 2,
      sym_stringLiteral,
      sym_paramName,
    STATE(692), 2,
      sym_fileVar,
      sym_filePath,
  [10335] = 6,
    ACTIONS(964), 1,
      anon_sym_SEMI,
    ACTIONS(966), 1,
      aux_sym_postAccumClause_token1,
    ACTIONS(969), 1,
      aux_sym_perClauseV2_token1,
    STATE(636), 1,
      sym_perClauseV2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(310), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [10356] = 5,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(938), 1,
      sym_name,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(467), 2,
      sym_stringLiteral,
      sym_paramName,
    STATE(680), 2,
      sym_fileVar,
      sym_filePath,
  [10375] = 5,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(938), 1,
      sym_name,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(467), 2,
      sym_stringLiteral,
      sym_paramName,
    STATE(715), 2,
      sym_fileVar,
      sym_filePath,
  [10394] = 5,
    ACTIONS(370), 1,
      anon_sym_AT_AT,
    ACTIONS(972), 1,
      sym_name,
    STATE(158), 1,
      sym_vertexSetType,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(148), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexType,
  [10413] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(618), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [10426] = 5,
    ACTIONS(469), 1,
      anon_sym_AT_AT,
    ACTIONS(956), 1,
      sym_name,
    STATE(226), 1,
      sym_vertexSetType,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(207), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexType,
  [10445] = 4,
    ACTIONS(934), 1,
      anon_sym_COMMA,
    STATE(293), 1,
      aux_sym_dmlSubStmtList_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(974), 4,
      anon_sym_SEMI,
      aux_sym_queryBodyIfStmt_token4,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [10462] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(385), 6,
      aux_sym_queryBodyIfStmt_token1,
      aux_sym_queryBodyIfStmt_token4,
      aux_sym_queryBodyWhileStmt_token1,
      aux_sym_printStmt_token1,
      aux_sym_returnStmt_token1,
      sym_name,
  [10475] = 6,
    ACTIONS(593), 1,
      aux_sym_postAccumClause_token1,
    ACTIONS(595), 1,
      aux_sym_perClauseV2_token1,
    ACTIONS(976), 1,
      anon_sym_SEMI,
    STATE(636), 1,
      sym_perClauseV2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(310), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [10496] = 5,
    ACTIONS(370), 1,
      anon_sym_AT_AT,
    ACTIONS(978), 1,
      sym_name,
    STATE(474), 1,
      sym_edgeSetType,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(381), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_edgeType,
  [10515] = 7,
    ACTIONS(932), 1,
      anon_sym_RETURNS,
    ACTIONS(980), 1,
      anon_sym_LBRACE,
    ACTIONS(982), 1,
      anon_sym_FOR,
    ACTIONS(984), 1,
      anon_sym_API,
    ACTIONS(986), 1,
      anon_sym_SYNTAX,
    STATE(468), 1,
      sym_returns,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [10538] = 7,
    ACTIONS(932), 1,
      anon_sym_RETURNS,
    ACTIONS(988), 1,
      anon_sym_LBRACE,
    ACTIONS(990), 1,
      anon_sym_FOR,
    ACTIONS(992), 1,
      anon_sym_API,
    ACTIONS(994), 1,
      anon_sym_SYNTAX,
    STATE(442), 1,
      sym_returns,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [10561] = 5,
    ACTIONS(370), 1,
      anon_sym_AT_AT,
    ACTIONS(972), 1,
      sym_name,
    STATE(132), 1,
      sym_vertexSetType,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(148), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexType,
  [10580] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(996), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(998), 3,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [10594] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(918), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_queryBodyIfStmt_token4,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [10606] = 5,
    ACTIONS(1001), 1,
      anon_sym_RPAREN,
    ACTIONS(1003), 1,
      anon_sym_COMMA,
    STATE(397), 1,
      aux_sym_accumType_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1005), 2,
      aux_sym_accumType_token11,
      aux_sym_accumType_token12,
  [10624] = 6,
    ACTIONS(1007), 1,
      anon_sym_RPAREN,
    ACTIONS(1009), 1,
      anon_sym_COMMA,
    ACTIONS(1011), 1,
      anon_sym_PIPE,
    STATE(350), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_repeat1,
    STATE(439), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [10644] = 6,
    ACTIONS(302), 1,
      anon_sym_LPAREN,
    ACTIONS(308), 1,
      anon_sym_AT_AT,
    ACTIONS(1013), 1,
      sym_name,
    STATE(171), 1,
      sym_globalAccumName,
    STATE(174), 1,
      sym_setBagExpr,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [10664] = 5,
    ACTIONS(1003), 1,
      anon_sym_COMMA,
    ACTIONS(1015), 1,
      anon_sym_RPAREN,
    STATE(429), 1,
      aux_sym_accumType_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1017), 2,
      aux_sym_accumType_token11,
      aux_sym_accumType_token12,
  [10682] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1019), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_queryBodyIfStmt_token4,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [10694] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1021), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_queryBodyIfStmt_token4,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [10706] = 6,
    ACTIONS(302), 1,
      anon_sym_LPAREN,
    ACTIONS(308), 1,
      anon_sym_AT_AT,
    ACTIONS(1013), 1,
      sym_name,
    STATE(168), 1,
      sym_setBagExpr,
    STATE(171), 1,
      sym_globalAccumName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [10726] = 6,
    ACTIONS(932), 1,
      anon_sym_RETURNS,
    ACTIONS(1023), 1,
      anon_sym_LBRACE,
    ACTIONS(1025), 1,
      anon_sym_API,
    ACTIONS(1027), 1,
      anon_sym_SYNTAX,
    STATE(441), 1,
      sym_returns,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [10746] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1029), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [10758] = 6,
    ACTIONS(932), 1,
      anon_sym_RETURNS,
    ACTIONS(948), 1,
      anon_sym_LBRACE,
    ACTIONS(952), 1,
      anon_sym_API,
    ACTIONS(954), 1,
      anon_sym_SYNTAX,
    STATE(458), 1,
      sym_returns,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [10778] = 3,
    ACTIONS(1031), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1029), 4,
      anon_sym_SEMI,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [10792] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(996), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [10804] = 3,
    ACTIONS(1035), 1,
      aux_sym_accumType_token5,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1033), 4,
      aux_sym_accumType_token2,
      aux_sym_accumType_token3,
      aux_sym_accumType_token4,
      aux_sym_accumType_token6,
  [10818] = 5,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(1037), 1,
      sym_name,
    STATE(741), 1,
      sym_filePath,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(467), 2,
      sym_stringLiteral,
      sym_paramName,
  [10836] = 6,
    ACTIONS(1039), 1,
      anon_sym_COMMA,
    ACTIONS(1041), 1,
      anon_sym_SEMI,
    ACTIONS(1043), 1,
      aux_sym_printStmt_token2,
    ACTIONS(1045), 1,
      aux_sym_printStmt_token3,
    STATE(354), 1,
      aux_sym_printStmt_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [10856] = 6,
    ACTIONS(1009), 1,
      anon_sym_COMMA,
    ACTIONS(1011), 1,
      anon_sym_PIPE,
    ACTIONS(1047), 1,
      anon_sym_RPAREN,
    STATE(355), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_repeat1,
    STATE(436), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [10876] = 3,
    ACTIONS(425), 1,
      aux_sym_printExpr_token1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(423), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
  [10890] = 3,
    ACTIONS(1051), 1,
      aux_sym_accumType_token5,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1049), 4,
      aux_sym_accumType_token2,
      aux_sym_accumType_token3,
      aux_sym_accumType_token4,
      aux_sym_accumType_token6,
  [10904] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1053), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      anon_sym_RBRACK,
  [10916] = 6,
    ACTIONS(924), 1,
      anon_sym_LBRACE,
    ACTIONS(928), 1,
      anon_sym_API,
    ACTIONS(930), 1,
      anon_sym_SYNTAX,
    ACTIONS(932), 1,
      anon_sym_RETURNS,
    STATE(445), 1,
      sym_returns,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [10936] = 5,
    ACTIONS(1057), 1,
      anon_sym_GT,
    ACTIONS(1059), 1,
      anon_sym_PIPE,
    STATE(382), 1,
      aux_sym_stepEdgeTypes_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1055), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [10954] = 6,
    ACTIONS(932), 1,
      anon_sym_RETURNS,
    ACTIONS(1061), 1,
      anon_sym_LBRACE,
    ACTIONS(1063), 1,
      anon_sym_API,
    ACTIONS(1065), 1,
      anon_sym_SYNTAX,
    STATE(424), 1,
      sym_returns,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [10974] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1067), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
  [10986] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1069), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_queryBodyIfStmt_token4,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [10998] = 5,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(1037), 1,
      sym_name,
    STATE(631), 1,
      sym_filePath,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(467), 2,
      sym_stringLiteral,
      sym_paramName,
  [11016] = 6,
    ACTIONS(1009), 1,
      anon_sym_COMMA,
    ACTIONS(1011), 1,
      anon_sym_PIPE,
    ACTIONS(1071), 1,
      anon_sym_RPAREN,
    STATE(356), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_repeat1,
    STATE(423), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [11036] = 6,
    ACTIONS(932), 1,
      anon_sym_RETURNS,
    ACTIONS(1073), 1,
      anon_sym_LBRACE,
    ACTIONS(1075), 1,
      anon_sym_API,
    ACTIONS(1077), 1,
      anon_sym_SYNTAX,
    STATE(416), 1,
      sym_returns,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [11056] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1079), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
  [11068] = 4,
    ACTIONS(1081), 1,
      anon_sym_COMMA,
    STATE(353), 1,
      aux_sym_printStmt_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1084), 3,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
  [11084] = 6,
    ACTIONS(1039), 1,
      anon_sym_COMMA,
    ACTIONS(1086), 1,
      anon_sym_SEMI,
    ACTIONS(1088), 1,
      aux_sym_printStmt_token2,
    ACTIONS(1090), 1,
      aux_sym_printStmt_token3,
    STATE(353), 1,
      aux_sym_printStmt_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [11104] = 6,
    ACTIONS(1009), 1,
      anon_sym_COMMA,
    ACTIONS(1011), 1,
      anon_sym_PIPE,
    ACTIONS(1092), 1,
      anon_sym_RPAREN,
    STATE(356), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_repeat1,
    STATE(421), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [11124] = 4,
    ACTIONS(1096), 1,
      anon_sym_PIPE,
    STATE(356), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1094), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [11139] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(423), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
  [11150] = 4,
    ACTIONS(1099), 1,
      aux_sym_queryBodyWhileStmt_token2,
    ACTIONS(1101), 1,
      aux_sym_queryBodyWhileStmt_token3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(960), 2,
      anon_sym_AND,
      anon_sym_OR,
  [11165] = 5,
    ACTIONS(920), 1,
      sym_name,
    ACTIONS(1103), 1,
      anon_sym_AT,
    STATE(43), 1,
      sym_attrName,
    STATE(54), 1,
      sym_localAccumName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [11182] = 4,
    ACTIONS(1105), 1,
      anon_sym_SEMI,
    ACTIONS(1107), 1,
      aux_sym_printStmt_token3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(960), 2,
      anon_sym_AND,
      anon_sym_OR,
  [11197] = 4,
    ACTIONS(1109), 1,
      sym_name,
    STATE(589), 1,
      sym_alias,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(546), 2,
      sym_vertexAlias,
      sym_edgeAlias,
  [11212] = 4,
    ACTIONS(1113), 1,
      anon_sym_PIPE,
    STATE(362), 1,
      aux_sym_stepEdgeTypes_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1111), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [11227] = 4,
    ACTIONS(1116), 1,
      anon_sym_SEMI,
    ACTIONS(1118), 1,
      aux_sym_printStmt_token3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(960), 2,
      anon_sym_AND,
      anon_sym_OR,
  [11242] = 3,
    ACTIONS(1120), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1122), 3,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [11255] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1084), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
  [11266] = 4,
    ACTIONS(1109), 1,
      sym_name,
    STATE(462), 1,
      sym_alias,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(546), 2,
      sym_vertexAlias,
      sym_edgeAlias,
  [11281] = 5,
    ACTIONS(1124), 1,
      anon_sym_RPAREN,
    ACTIONS(1126), 1,
      anon_sym_EQ,
    ACTIONS(1128), 1,
      anon_sym_COMMA,
    STATE(453), 1,
      aux_sym_parameterList_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [11298] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1130), 4,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_COLON,
  [11309] = 4,
    ACTIONS(65), 1,
      aux_sym_integer_token1,
    STATE(10), 1,
      aux_sym_integer_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(59), 2,
      anon_sym_COMMA,
      aux_sym_queryBodyWhileStmt_token3,
  [11324] = 5,
    ACTIONS(1133), 1,
      anon_sym_EQ,
    ACTIONS(1135), 1,
      anon_sym_COMMA,
    ACTIONS(1137), 1,
      anon_sym_SEMI,
    STATE(437), 1,
      aux_sym_accumDeclStmt_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [11341] = 5,
    ACTIONS(751), 1,
      anon_sym_LPAREN,
    ACTIONS(902), 1,
      sym_name,
    STATE(333), 1,
      sym_vertexSetName,
    STATE(380), 1,
      sym_simpleSet,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [11358] = 4,
    ACTIONS(1139), 1,
      anon_sym_RBRACE,
    ACTIONS(1141), 1,
      aux_sym_define_statement_token1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(384), 2,
      sym_define_statement,
      aux_sym_create_loading_job_repeat1,
  [11373] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1143), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
  [11384] = 3,
    ACTIONS(1145), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1122), 3,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [11397] = 5,
    ACTIONS(920), 1,
      sym_name,
    ACTIONS(1147), 1,
      anon_sym_AT,
    STATE(54), 1,
      sym_localAccumName,
    STATE(702), 1,
      sym_attrName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [11414] = 4,
    ACTIONS(370), 1,
      anon_sym_AT_AT,
    ACTIONS(508), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(370), 2,
      sym_localAccumName,
      sym_globalAccumName,
  [11429] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1149), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(1151), 2,
      aux_sym_accumType_token11,
      aux_sym_accumType_token12,
  [11442] = 4,
    ACTIONS(1153), 1,
      aux_sym_queryBodyWhileStmt_token2,
    ACTIONS(1155), 1,
      aux_sym_queryBodyWhileStmt_token3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(960), 2,
      anon_sym_AND,
      anon_sym_OR,
  [11457] = 4,
    ACTIONS(65), 1,
      aux_sym_integer_token1,
    STATE(10), 1,
      aux_sym_integer_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(78), 2,
      anon_sym_COMMA,
      aux_sym_queryBodyWhileStmt_token3,
  [11472] = 3,
    ACTIONS(1157), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1122), 3,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [11485] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1159), 4,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_COLON,
  [11496] = 4,
    ACTIONS(1059), 1,
      anon_sym_PIPE,
    STATE(362), 1,
      aux_sym_stepEdgeTypes_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1161), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [11511] = 5,
    ACTIONS(751), 1,
      anon_sym_LPAREN,
    ACTIONS(902), 1,
      sym_name,
    STATE(323), 1,
      sym_simpleSet,
    STATE(333), 1,
      sym_vertexSetName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [11528] = 4,
    ACTIONS(1163), 1,
      anon_sym_RBRACE,
    ACTIONS(1165), 1,
      aux_sym_define_statement_token1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(384), 2,
      sym_define_statement,
      aux_sym_create_loading_job_repeat1,
  [11543] = 5,
    ACTIONS(1168), 1,
      anon_sym_EQ,
    ACTIONS(1170), 1,
      anon_sym_COMMA,
    ACTIONS(1172), 1,
      anon_sym_SEMI,
    STATE(412), 1,
      aux_sym_baseDeclStmt_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [11560] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1174), 4,
      anon_sym_LBRACE,
      anon_sym_API,
      anon_sym_SYNTAX,
      anon_sym_RETURNS,
  [11571] = 5,
    ACTIONS(1178), 1,
      anon_sym_DQUOTE,
    ACTIONS(1180), 1,
      aux_sym_stringLiteral_token1,
    ACTIONS(1182), 1,
      sym_escape_sequence,
    STATE(390), 1,
      aux_sym_stringLiteral_repeat1,
    ACTIONS(1176), 2,
      sym_comment,
      anon_sym_,
  [11588] = 5,
    ACTIONS(1184), 1,
      anon_sym_RPAREN,
    ACTIONS(1186), 1,
      anon_sym_STAR,
    ACTIONS(1188), 1,
      sym_name,
    STATE(404), 1,
      aux_sym_CREATE_GRAPH_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [11605] = 5,
    ACTIONS(1135), 1,
      anon_sym_COMMA,
    ACTIONS(1190), 1,
      anon_sym_EQ,
    ACTIONS(1192), 1,
      anon_sym_SEMI,
    STATE(479), 1,
      aux_sym_accumDeclStmt_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [11622] = 5,
    ACTIONS(1194), 1,
      anon_sym_DQUOTE,
    ACTIONS(1196), 1,
      aux_sym_stringLiteral_token1,
    ACTIONS(1198), 1,
      sym_escape_sequence,
    STATE(392), 1,
      aux_sym_stringLiteral_repeat1,
    ACTIONS(1176), 2,
      sym_comment,
      anon_sym_,
  [11639] = 4,
    ACTIONS(1141), 1,
      aux_sym_define_statement_token1,
    ACTIONS(1200), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    STATE(372), 2,
      sym_define_statement,
      aux_sym_create_loading_job_repeat1,
  [11654] = 5,
    ACTIONS(1202), 1,
      anon_sym_DQUOTE,
    ACTIONS(1204), 1,
      aux_sym_stringLiteral_token1,
    ACTIONS(1207), 1,
      sym_escape_sequence,
    STATE(392), 1,
      aux_sym_stringLiteral_repeat1,
    ACTIONS(1176), 2,
      sym_comment,
      anon_sym_,
  [11671] = 3,
    ACTIONS(1212), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1210), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [11683] = 4,
    ACTIONS(1135), 1,
      anon_sym_COMMA,
    ACTIONS(1214), 1,
      anon_sym_SEMI,
    STATE(455), 1,
      aux_sym_accumDeclStmt_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [11697] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1049), 3,
      aux_sym_accumType_token2,
      aux_sym_accumType_token3,
      aux_sym_accumType_token4,
  [11707] = 4,
    ACTIONS(1003), 1,
      anon_sym_COMMA,
    ACTIONS(1216), 1,
      anon_sym_RPAREN,
    STATE(418), 1,
      aux_sym_accumType_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [11721] = 4,
    ACTIONS(1003), 1,
      anon_sym_COMMA,
    ACTIONS(1218), 1,
      anon_sym_RPAREN,
    STATE(418), 1,
      aux_sym_accumType_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [11735] = 4,
    ACTIONS(1003), 1,
      anon_sym_COMMA,
    ACTIONS(1218), 1,
      anon_sym_RPAREN,
    STATE(396), 1,
      aux_sym_accumType_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [11749] = 4,
    ACTIONS(1220), 1,
      anon_sym_DOT,
    ACTIONS(1222), 1,
      aux_sym_integer_token1,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [11763] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1033), 3,
      aux_sym_accumType_token2,
      aux_sym_accumType_token3,
      aux_sym_accumType_token4,
  [11773] = 3,
    ACTIONS(1224), 1,
      aux_sym_queryBodyIfStmt_token2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(960), 2,
      anon_sym_AND,
      anon_sym_OR,
  [11785] = 4,
    ACTIONS(1147), 1,
      anon_sym_AT,
    ACTIONS(1226), 1,
      sym_name,
    STATE(21), 1,
      sym_localAccumName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [11799] = 4,
    ACTIONS(1228), 1,
      anon_sym_RPAREN,
    ACTIONS(1230), 1,
      anon_sym_COMMA,
    STATE(473), 1,
      aux_sym_CREATE_VERTEX_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [11813] = 4,
    ACTIONS(1232), 1,
      anon_sym_RPAREN,
    ACTIONS(1234), 1,
      sym_name,
    STATE(444), 1,
      aux_sym_CREATE_GRAPH_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [11827] = 4,
    ACTIONS(1236), 1,
      anon_sym_RPAREN,
    ACTIONS(1238), 1,
      anon_sym_COMMA,
    STATE(405), 1,
      aux_sym_CREATE_VERTEX_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [11841] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1241), 3,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_COMMA,
  [11851] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1057), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COLON,
  [11861] = 3,
    ACTIONS(1245), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1243), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [11873] = 3,
    ACTIONS(1247), 1,
      aux_sym_elementType_token1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(625), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [11885] = 3,
    ACTIONS(1249), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(960), 2,
      anon_sym_AND,
      anon_sym_OR,
  [11897] = 3,
    ACTIONS(1253), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1251), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [11909] = 4,
    ACTIONS(1170), 1,
      anon_sym_COMMA,
    ACTIONS(1255), 1,
      anon_sym_SEMI,
    STATE(477), 1,
      aux_sym_baseDeclStmt_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [11923] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1257), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [11933] = 3,
    ACTIONS(1261), 1,
      aux_sym_CREATE_VERTEX_token1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1259), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [11945] = 4,
    ACTIONS(1226), 1,
      sym_name,
    ACTIONS(1263), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym_localAccumName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [11959] = 4,
    ACTIONS(1265), 1,
      anon_sym_LBRACE,
    ACTIONS(1267), 1,
      anon_sym_API,
    ACTIONS(1269), 1,
      anon_sym_SYNTAX,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [11973] = 4,
    ACTIONS(1128), 1,
      anon_sym_COMMA,
    ACTIONS(1271), 1,
      anon_sym_RPAREN,
    STATE(469), 1,
      aux_sym_parameterList_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [11987] = 4,
    ACTIONS(1149), 1,
      anon_sym_RPAREN,
    ACTIONS(1273), 1,
      anon_sym_COMMA,
    STATE(418), 1,
      aux_sym_accumType_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12001] = 4,
    ACTIONS(1276), 1,
      anon_sym_RPAREN,
    ACTIONS(1278), 1,
      anon_sym_COMMA,
    STATE(419), 1,
      aux_sym_parameterList_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12015] = 4,
    ACTIONS(1003), 1,
      anon_sym_COMMA,
    ACTIONS(1281), 1,
      anon_sym_RPAREN,
    STATE(418), 1,
      aux_sym_accumType_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12029] = 4,
    ACTIONS(1009), 1,
      anon_sym_COMMA,
    ACTIONS(1283), 1,
      anon_sym_RPAREN,
    STATE(422), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12043] = 4,
    ACTIONS(1285), 1,
      anon_sym_RPAREN,
    ACTIONS(1287), 1,
      anon_sym_COMMA,
    STATE(422), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12057] = 4,
    ACTIONS(1009), 1,
      anon_sym_COMMA,
    ACTIONS(1290), 1,
      anon_sym_RPAREN,
    STATE(422), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12071] = 4,
    ACTIONS(1073), 1,
      anon_sym_LBRACE,
    ACTIONS(1075), 1,
      anon_sym_API,
    ACTIONS(1077), 1,
      anon_sym_SYNTAX,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12085] = 4,
    ACTIONS(1292), 1,
      anon_sym_DOLLAR,
    ACTIONS(1294), 1,
      sym_name,
    STATE(686), 1,
      sym_columnId,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12099] = 3,
    ACTIONS(1296), 1,
      aux_sym_queryBodyIfStmt_token2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(960), 2,
      anon_sym_AND,
      anon_sym_OR,
  [12111] = 4,
    ACTIONS(1298), 1,
      anon_sym_RBRACE,
    ACTIONS(1300), 1,
      anon_sym_COMMA,
    STATE(472), 1,
      aux_sym_seedSet_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12125] = 4,
    ACTIONS(1302), 1,
      aux_sym_queryBodyIfStmt_token3,
    ACTIONS(1305), 1,
      aux_sym_queryBodyIfStmt_token4,
    STATE(438), 1,
      aux_sym_queryBodyIfStmt_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12139] = 4,
    ACTIONS(1003), 1,
      anon_sym_COMMA,
    ACTIONS(1308), 1,
      anon_sym_RPAREN,
    STATE(418), 1,
      aux_sym_accumType_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12153] = 4,
    ACTIONS(1310), 1,
      anon_sym_COMMA,
    ACTIONS(1312), 1,
      anon_sym_GT,
    STATE(480), 1,
      aux_sym_tupleFields_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12167] = 4,
    ACTIONS(1135), 1,
      anon_sym_COMMA,
    ACTIONS(1314), 1,
      anon_sym_SEMI,
    STATE(394), 1,
      aux_sym_accumDeclStmt_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12181] = 3,
    ACTIONS(962), 1,
      anon_sym_DOT_STAR,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1316), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [12193] = 4,
    ACTIONS(528), 1,
      anon_sym_RPAREN,
    ACTIONS(1319), 1,
      anon_sym_COMMA,
    STATE(433), 1,
      aux_sym_argList_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12207] = 4,
    ACTIONS(1003), 1,
      anon_sym_COMMA,
    ACTIONS(1308), 1,
      anon_sym_RPAREN,
    STATE(420), 1,
      aux_sym_accumType_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12221] = 3,
    ACTIONS(1324), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1322), 2,
      anon_sym_RBRACE,
      aux_sym_define_statement_token1,
  [12233] = 4,
    ACTIONS(1009), 1,
      anon_sym_COMMA,
    ACTIONS(1092), 1,
      anon_sym_RPAREN,
    STATE(422), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12247] = 4,
    ACTIONS(1135), 1,
      anon_sym_COMMA,
    ACTIONS(1192), 1,
      anon_sym_SEMI,
    STATE(455), 1,
      aux_sym_accumDeclStmt_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12261] = 4,
    ACTIONS(1326), 1,
      aux_sym_queryBodyIfStmt_token3,
    ACTIONS(1328), 1,
      aux_sym_queryBodyIfStmt_token4,
    STATE(478), 1,
      aux_sym_queryBodyIfStmt_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12275] = 4,
    ACTIONS(1009), 1,
      anon_sym_COMMA,
    ACTIONS(1071), 1,
      anon_sym_RPAREN,
    STATE(422), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12289] = 4,
    ACTIONS(1263), 1,
      anon_sym_AT,
    ACTIONS(1330), 1,
      sym_name,
    STATE(28), 1,
      sym_localAccumName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12303] = 4,
    ACTIONS(1061), 1,
      anon_sym_LBRACE,
    ACTIONS(1063), 1,
      anon_sym_API,
    ACTIONS(1065), 1,
      anon_sym_SYNTAX,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12317] = 4,
    ACTIONS(980), 1,
      anon_sym_LBRACE,
    ACTIONS(984), 1,
      anon_sym_API,
    ACTIONS(986), 1,
      anon_sym_SYNTAX,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12331] = 4,
    ACTIONS(988), 1,
      anon_sym_LBRACE,
    ACTIONS(992), 1,
      anon_sym_API,
    ACTIONS(994), 1,
      anon_sym_SYNTAX,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12345] = 4,
    ACTIONS(1332), 1,
      anon_sym_RPAREN,
    ACTIONS(1334), 1,
      sym_name,
    STATE(444), 1,
      aux_sym_CREATE_GRAPH_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12359] = 4,
    ACTIONS(1023), 1,
      anon_sym_LBRACE,
    ACTIONS(1025), 1,
      anon_sym_API,
    ACTIONS(1027), 1,
      anon_sym_SYNTAX,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12373] = 4,
    ACTIONS(1337), 1,
      anon_sym_RPAREN,
    ACTIONS(1339), 1,
      anon_sym_COMMA,
    STATE(446), 1,
      aux_sym_perClauseV2_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12387] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1342), 3,
      anon_sym_SEMI,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [12397] = 4,
    ACTIONS(1344), 1,
      anon_sym_COMMA,
    ACTIONS(1346), 1,
      anon_sym_RBRACK,
    STATE(464), 1,
      aux_sym_vExprSet_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12411] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1348), 3,
      anon_sym_SEMI,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [12421] = 3,
    ACTIONS(1350), 1,
      aux_sym_queryBodyIfStmt_token2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(960), 2,
      anon_sym_AND,
      anon_sym_OR,
  [12433] = 4,
    ACTIONS(1352), 1,
      anon_sym_COMMA,
    ACTIONS(1355), 1,
      anon_sym_GT,
    STATE(451), 1,
      aux_sym_tupleFields_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12447] = 4,
    ACTIONS(1135), 1,
      anon_sym_COMMA,
    ACTIONS(1314), 1,
      anon_sym_SEMI,
    STATE(455), 1,
      aux_sym_accumDeclStmt_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12461] = 4,
    ACTIONS(1128), 1,
      anon_sym_COMMA,
    ACTIONS(1357), 1,
      anon_sym_RPAREN,
    STATE(419), 1,
      aux_sym_parameterList_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12475] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1359), 3,
      anon_sym_LBRACE,
      anon_sym_API,
      anon_sym_SYNTAX,
  [12485] = 4,
    ACTIONS(1361), 1,
      anon_sym_COMMA,
    ACTIONS(1364), 1,
      anon_sym_SEMI,
    STATE(455), 1,
      aux_sym_accumDeclStmt_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12499] = 3,
    ACTIONS(1366), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1364), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12511] = 4,
    ACTIONS(1135), 1,
      anon_sym_COMMA,
    ACTIONS(1368), 1,
      anon_sym_SEMI,
    STATE(452), 1,
      aux_sym_accumDeclStmt_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12525] = 4,
    ACTIONS(924), 1,
      anon_sym_LBRACE,
    ACTIONS(928), 1,
      anon_sym_API,
    ACTIONS(930), 1,
      anon_sym_SYNTAX,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12539] = 4,
    ACTIONS(1170), 1,
      anon_sym_COMMA,
    ACTIONS(1370), 1,
      anon_sym_SEMI,
    STATE(477), 1,
      aux_sym_baseDeclStmt_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12553] = 4,
    ACTIONS(1344), 1,
      anon_sym_COMMA,
    ACTIONS(1372), 1,
      anon_sym_RBRACK,
    STATE(448), 1,
      aux_sym_vExprSet_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12567] = 4,
    ACTIONS(1374), 1,
      anon_sym_RBRACE,
    ACTIONS(1376), 1,
      anon_sym_COMMA,
    STATE(461), 1,
      aux_sym_seedSet_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12581] = 4,
    ACTIONS(1379), 1,
      anon_sym_RPAREN,
    ACTIONS(1381), 1,
      anon_sym_COMMA,
    STATE(463), 1,
      aux_sym_perClauseV2_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12595] = 4,
    ACTIONS(1381), 1,
      anon_sym_COMMA,
    ACTIONS(1383), 1,
      anon_sym_RPAREN,
    STATE(446), 1,
      aux_sym_perClauseV2_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12609] = 4,
    ACTIONS(1385), 1,
      anon_sym_COMMA,
    ACTIONS(1388), 1,
      anon_sym_RBRACK,
    STATE(464), 1,
      aux_sym_vExprSet_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12623] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1390), 3,
      anon_sym_SEMI,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [12633] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1392), 3,
      anon_sym_SEMI,
      aux_sym_postAccumClause_token1,
      aux_sym_perClauseV2_token1,
  [12643] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1394), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12653] = 4,
    ACTIONS(948), 1,
      anon_sym_LBRACE,
    ACTIONS(952), 1,
      anon_sym_API,
    ACTIONS(954), 1,
      anon_sym_SYNTAX,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12667] = 4,
    ACTIONS(1128), 1,
      anon_sym_COMMA,
    ACTIONS(1396), 1,
      anon_sym_RPAREN,
    STATE(419), 1,
      aux_sym_parameterList_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12681] = 4,
    ACTIONS(479), 1,
      anon_sym_COMMA,
    ACTIONS(1398), 1,
      anon_sym_RPAREN,
    STATE(433), 1,
      aux_sym_argList_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12695] = 4,
    ACTIONS(1400), 1,
      aux_sym_queryBodyIfStmt_token3,
    ACTIONS(1402), 1,
      aux_sym_queryBodyIfStmt_token4,
    STATE(438), 1,
      aux_sym_queryBodyIfStmt_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12709] = 4,
    ACTIONS(1300), 1,
      anon_sym_COMMA,
    ACTIONS(1404), 1,
      anon_sym_RBRACE,
    STATE(461), 1,
      aux_sym_seedSet_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12723] = 4,
    ACTIONS(1230), 1,
      anon_sym_COMMA,
    ACTIONS(1406), 1,
      anon_sym_RPAREN,
    STATE(405), 1,
      aux_sym_CREATE_VERTEX_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12737] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1111), 3,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COLON,
  [12747] = 4,
    ACTIONS(1170), 1,
      anon_sym_COMMA,
    ACTIONS(1408), 1,
      anon_sym_SEMI,
    STATE(459), 1,
      aux_sym_baseDeclStmt_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12761] = 3,
    ACTIONS(1410), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1412), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12773] = 4,
    ACTIONS(1412), 1,
      anon_sym_SEMI,
    ACTIONS(1414), 1,
      anon_sym_COMMA,
    STATE(477), 1,
      aux_sym_baseDeclStmt_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12787] = 4,
    ACTIONS(1417), 1,
      aux_sym_queryBodyIfStmt_token3,
    ACTIONS(1420), 1,
      aux_sym_queryBodyIfStmt_token4,
    STATE(478), 1,
      aux_sym_queryBodyIfStmt_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12801] = 4,
    ACTIONS(1135), 1,
      anon_sym_COMMA,
    ACTIONS(1368), 1,
      anon_sym_SEMI,
    STATE(455), 1,
      aux_sym_accumDeclStmt_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12815] = 4,
    ACTIONS(1310), 1,
      anon_sym_COMMA,
    ACTIONS(1422), 1,
      anon_sym_GT,
    STATE(451), 1,
      aux_sym_tupleFields_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12829] = 3,
    ACTIONS(1426), 1,
      aux_sym_CREATE_VERTEX_token1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1424), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [12841] = 3,
    ACTIONS(1428), 1,
      sym_name,
    STATE(351), 1,
      sym_graphName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12852] = 3,
    ACTIONS(1430), 1,
      sym_name,
    STATE(820), 1,
      sym_fileVar,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12863] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1432), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [12872] = 3,
    ACTIONS(1434), 1,
      sym_name,
    STATE(775), 1,
      sym_tupleType,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12883] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1436), 2,
      anon_sym_COMMA,
      aux_sym_queryBodyWhileStmt_token3,
  [12892] = 3,
    ACTIONS(370), 1,
      anon_sym_AT_AT,
    STATE(389), 1,
      sym_globalAccumName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12903] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1438), 2,
      anon_sym_COMMA,
      aux_sym_queryBodyWhileStmt_token3,
  [12912] = 3,
    ACTIONS(1441), 1,
      aux_sym_integer_token1,
    STATE(369), 1,
      aux_sym_integer_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12923] = 3,
    ACTIONS(1443), 1,
      sym_name,
    STATE(847), 1,
      sym_vertexType,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12934] = 3,
    ACTIONS(1443), 1,
      sym_name,
    STATE(845), 1,
      sym_vertexType,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12945] = 3,
    ACTIONS(1445), 1,
      sym_name,
    STATE(325), 1,
      sym_fieldName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12956] = 3,
    ACTIONS(1447), 1,
      sym_name,
    STATE(723), 1,
      sym_syntaxName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12967] = 3,
    ACTIONS(1428), 1,
      sym_name,
    STATE(344), 1,
      sym_graphName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12978] = 3,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    STATE(720), 1,
      sym_stringLiteral,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [12989] = 3,
    ACTIONS(1449), 1,
      aux_sym_CREATE_GRAPH_token1,
    ACTIONS(1451), 1,
      aux_sym_DROP_token2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13000] = 3,
    ACTIONS(1443), 1,
      sym_name,
    STATE(834), 1,
      sym_vertexType,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13011] = 3,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    STATE(854), 1,
      sym_stringLiteral,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13022] = 3,
    ACTIONS(1443), 1,
      sym_name,
    STATE(758), 1,
      sym_vertexType,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13033] = 3,
    ACTIONS(1453), 1,
      sym_name,
    STATE(167), 1,
      sym_accumName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13044] = 3,
    ACTIONS(1455), 1,
      sym_name,
    STATE(167), 1,
      sym_accumName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13055] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1457), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13064] = 3,
    ACTIONS(1459), 1,
      anon_sym_DASH,
    ACTIONS(1461), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13075] = 3,
    ACTIONS(1463), 1,
      sym_name,
    STATE(284), 1,
      sym_vertexAlias,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13086] = 3,
    ACTIONS(1465), 1,
      sym_name,
    STATE(24), 1,
      sym_accumName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13097] = 3,
    ACTIONS(1467), 1,
      anon_sym_LPAREN,
    ACTIONS(1469), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13108] = 3,
    ACTIONS(1471), 1,
      aux_sym_integer_token1,
    STATE(16), 1,
      aux_sym_integer_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13119] = 3,
    ACTIONS(1434), 1,
      sym_name,
    STATE(759), 1,
      sym_tupleType,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13130] = 3,
    ACTIONS(1473), 1,
      sym_name,
    STATE(757), 1,
      sym_queryName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13141] = 3,
    ACTIONS(1455), 1,
      sym_name,
    STATE(76), 1,
      sym_accumName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13152] = 3,
    ACTIONS(1037), 1,
      sym_name,
    STATE(367), 1,
      sym_paramName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13163] = 3,
    ACTIONS(1443), 1,
      sym_name,
    STATE(769), 1,
      sym_vertexType,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13174] = 3,
    ACTIONS(625), 1,
      sym_name,
    ACTIONS(1475), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13185] = 3,
    ACTIONS(1477), 1,
      sym_name,
    STATE(9), 1,
      sym_accumName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13196] = 3,
    ACTIONS(1443), 1,
      sym_name,
    STATE(629), 1,
      sym_vertexType,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13207] = 3,
    ACTIONS(1473), 1,
      sym_name,
    STATE(625), 1,
      sym_queryName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13218] = 3,
    ACTIONS(1447), 1,
      sym_name,
    STATE(855), 1,
      sym_syntaxName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13229] = 3,
    ACTIONS(1479), 1,
      sym_name,
    STATE(755), 1,
      sym_edgeType,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13240] = 3,
    ACTIONS(1465), 1,
      sym_name,
    STATE(9), 1,
      sym_accumName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13251] = 3,
    ACTIONS(1481), 1,
      anon_sym_LBRACE,
    ACTIONS(1483), 1,
      anon_sym_FOR,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13262] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1485), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13271] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1388), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13280] = 3,
    ACTIONS(1487), 1,
      anon_sym_LBRACE,
    ACTIONS(1489), 1,
      anon_sym_FOR,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13291] = 3,
    ACTIONS(1463), 1,
      sym_name,
    STATE(291), 1,
      sym_vertexAlias,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13302] = 3,
    ACTIONS(1445), 1,
      sym_name,
    STATE(430), 1,
      sym_fieldName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13313] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1491), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13322] = 3,
    ACTIONS(1493), 1,
      sym_name,
    STATE(732), 1,
      sym_edgeAlias,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13333] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1495), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [13342] = 3,
    ACTIONS(1479), 1,
      sym_name,
    STATE(753), 1,
      sym_edgeType,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13353] = 3,
    ACTIONS(1497), 1,
      anon_sym_RPAREN,
    ACTIONS(1499), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13364] = 3,
    ACTIONS(1501), 1,
      anon_sym_EQ,
    ACTIONS(1504), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13375] = 3,
    ACTIONS(1477), 1,
      sym_name,
    STATE(39), 1,
      sym_accumName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13386] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1506), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [13395] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1508), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [13404] = 3,
    ACTIONS(1447), 1,
      sym_name,
    STATE(752), 1,
      sym_syntaxName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13415] = 3,
    ACTIONS(1510), 1,
      aux_sym_DROP_token1,
    ACTIONS(1512), 1,
      aux_sym_ADD_INDEX_token2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13426] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1514), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [13435] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1516), 2,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
  [13444] = 3,
    ACTIONS(1493), 1,
      sym_name,
    STATE(674), 1,
      sym_edgeAlias,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13455] = 3,
    ACTIONS(1518), 1,
      anon_sym_LBRACE,
    ACTIONS(1520), 1,
      anon_sym_SYNTAX,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13466] = 3,
    ACTIONS(1522), 1,
      anon_sym_DASH,
    ACTIONS(1524), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13477] = 3,
    ACTIONS(1447), 1,
      sym_name,
    STATE(747), 1,
      sym_syntaxName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13488] = 3,
    ACTIONS(1526), 1,
      anon_sym_LBRACE,
    ACTIONS(1528), 1,
      anon_sym_SYNTAX,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13499] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1374), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [13508] = 3,
    ACTIONS(1447), 1,
      sym_name,
    STATE(740), 1,
      sym_syntaxName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13519] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1530), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13528] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1532), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13537] = 3,
    ACTIONS(1428), 1,
      sym_name,
    STATE(334), 1,
      sym_graphName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13548] = 3,
    ACTIONS(110), 1,
      aux_sym_integer_token1,
    STATE(19), 1,
      aux_sym_integer_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13559] = 3,
    ACTIONS(1535), 1,
      aux_sym_primary_id_name_type_token1,
    STATE(403), 1,
      sym_primary_id_name_type,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13570] = 3,
    ACTIONS(1447), 1,
      sym_name,
    STATE(661), 1,
      sym_syntaxName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13581] = 3,
    ACTIONS(1447), 1,
      sym_name,
    STATE(735), 1,
      sym_syntaxName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13592] = 3,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    STATE(734), 1,
      sym_stringLiteral,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13603] = 3,
    ACTIONS(1428), 1,
      sym_name,
    STATE(332), 1,
      sym_graphName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13614] = 3,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    STATE(651), 1,
      sym_stringLiteral,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13625] = 3,
    ACTIONS(1537), 1,
      anon_sym_LBRACE,
    ACTIONS(1539), 1,
      anon_sym_SYNTAX,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13636] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1541), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [13645] = 3,
    ACTIONS(1443), 1,
      sym_name,
    STATE(413), 1,
      sym_vertexType,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13656] = 3,
    ACTIONS(924), 1,
      anon_sym_LBRACE,
    ACTIONS(930), 1,
      anon_sym_SYNTAX,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13667] = 3,
    ACTIONS(1543), 1,
      sym_name,
    STATE(183), 1,
      sym_vertexAlias,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13678] = 3,
    ACTIONS(1545), 1,
      anon_sym_DQUOTE,
    ACTIONS(1547), 1,
      anon_sym_DQUOTEnone_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13689] = 3,
    ACTIONS(1549), 1,
      anon_sym_LBRACE,
    ACTIONS(1551), 1,
      anon_sym_SYNTAX,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13700] = 3,
    ACTIONS(1447), 1,
      sym_name,
    STATE(722), 1,
      sym_syntaxName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13711] = 3,
    ACTIONS(1443), 1,
      sym_name,
    STATE(326), 1,
      sym_vertexType,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13722] = 3,
    ACTIONS(1443), 1,
      sym_name,
    STATE(340), 1,
      sym_vertexType,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13733] = 3,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    STATE(721), 1,
      sym_stringLiteral,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13744] = 3,
    ACTIONS(1553), 1,
      anon_sym_EQ,
    ACTIONS(1555), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13755] = 3,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    STATE(719), 1,
      sym_stringLiteral,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13766] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1557), 2,
      aux_sym_queryBodyIfStmt_token3,
      aux_sym_queryBodyIfStmt_token4,
  [13775] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1559), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13784] = 3,
    ACTIONS(1473), 1,
      sym_name,
    STATE(704), 1,
      sym_queryName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13795] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1561), 2,
      anon_sym_RBRACE,
      aux_sym_define_statement_token1,
  [13804] = 3,
    ACTIONS(1445), 1,
      sym_name,
    STATE(328), 1,
      sym_fieldName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13815] = 3,
    ACTIONS(1473), 1,
      sym_name,
    STATE(799), 1,
      sym_queryName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13826] = 3,
    ACTIONS(1428), 1,
      sym_name,
    STATE(825), 1,
      sym_graphName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13837] = 3,
    ACTIONS(1445), 1,
      sym_name,
    STATE(614), 1,
      sym_fieldName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13848] = 3,
    ACTIONS(1037), 1,
      sym_name,
    STATE(393), 1,
      sym_paramName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13859] = 3,
    ACTIONS(1265), 1,
      anon_sym_LBRACE,
    ACTIONS(1269), 1,
      anon_sym_SYNTAX,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13870] = 3,
    ACTIONS(1447), 1,
      sym_name,
    STATE(709), 1,
      sym_syntaxName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13881] = 3,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    STATE(707), 1,
      sym_stringLiteral,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13892] = 3,
    ACTIONS(1563), 1,
      aux_sym_condition_token1,
    ACTIONS(1565), 1,
      aux_sym_condition_token4,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13903] = 3,
    ACTIONS(1567), 1,
      aux_sym_fromClause_token1,
    STATE(179), 1,
      sym_fromClause,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13914] = 3,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    STATE(572), 1,
      sym_stringLiteral,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13925] = 3,
    ACTIONS(1443), 1,
      sym_name,
    STATE(697), 1,
      sym_vertexType,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13936] = 3,
    ACTIONS(1569), 1,
      sym_name,
    STATE(373), 1,
      sym_jsonKey,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13947] = 3,
    ACTIONS(1571), 1,
      aux_sym_createSignature_token4,
    ACTIONS(1573), 1,
      anon_sym_QUERY,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13958] = 3,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    STATE(693), 1,
      sym_stringLiteral,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13969] = 3,
    ACTIONS(1073), 1,
      anon_sym_LBRACE,
    ACTIONS(1077), 1,
      anon_sym_SYNTAX,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [13980] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1337), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13989] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1575), 2,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
  [13998] = 3,
    ACTIONS(1447), 1,
      sym_name,
    STATE(688), 1,
      sym_syntaxName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14009] = 3,
    ACTIONS(1292), 1,
      anon_sym_DOLLAR,
    STATE(628), 1,
      sym_columnId,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14020] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1577), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [14029] = 3,
    ACTIONS(1428), 1,
      sym_name,
    STATE(346), 1,
      sym_graphName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14040] = 3,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    STATE(630), 1,
      sym_stringLiteral,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14051] = 3,
    ACTIONS(1434), 1,
      sym_name,
    STATE(813), 1,
      sym_tupleType,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14062] = 3,
    ACTIONS(1579), 1,
      anon_sym_LPAREN,
    STATE(484), 1,
      sym_selectVertParams,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14073] = 3,
    ACTIONS(1447), 1,
      sym_name,
    STATE(632), 1,
      sym_syntaxName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14084] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1581), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [14093] = 3,
    ACTIONS(1445), 1,
      sym_name,
    STATE(377), 1,
      sym_fieldName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14104] = 3,
    ACTIONS(1428), 1,
      sym_name,
    STATE(746), 1,
      sym_graphName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14115] = 3,
    ACTIONS(1543), 1,
      sym_name,
    STATE(181), 1,
      sym_vertexAlias,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14126] = 3,
    ACTIONS(1023), 1,
      anon_sym_LBRACE,
    ACTIONS(1027), 1,
      anon_sym_SYNTAX,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14137] = 3,
    ACTIONS(1147), 1,
      anon_sym_AT,
    STATE(456), 1,
      sym_localAccumName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14148] = 3,
    ACTIONS(1583), 1,
      aux_sym_accumClause_token1,
    ACTIONS(1585), 1,
      aux_sym_postAccumClause_token1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14159] = 3,
    ACTIONS(1061), 1,
      anon_sym_LBRACE,
    ACTIONS(1065), 1,
      anon_sym_SYNTAX,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14170] = 3,
    ACTIONS(1569), 1,
      sym_name,
    STATE(521), 1,
      sym_jsonKey,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14181] = 3,
    ACTIONS(1447), 1,
      sym_name,
    STATE(667), 1,
      sym_syntaxName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14192] = 3,
    ACTIONS(1443), 1,
      sym_name,
    STATE(779), 1,
      sym_vertexType,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14203] = 3,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    STATE(664), 1,
      sym_stringLiteral,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14214] = 3,
    ACTIONS(1443), 1,
      sym_name,
    STATE(788), 1,
      sym_vertexType,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14225] = 3,
    ACTIONS(1463), 1,
      sym_name,
    STATE(675), 1,
      sym_vertexAlias,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14236] = 3,
    ACTIONS(1447), 1,
      sym_name,
    STATE(841), 1,
      sym_syntaxName,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14247] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1587), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [14256] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
    ACTIONS(1589), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14265] = 2,
    ACTIONS(1591), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14273] = 2,
    ACTIONS(1593), 1,
      sym_name,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14281] = 2,
    ACTIONS(1595), 1,
      sym_name,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14289] = 2,
    ACTIONS(1597), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14297] = 2,
    ACTIONS(1599), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14305] = 2,
    ACTIONS(1601), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14313] = 2,
    ACTIONS(1603), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14321] = 2,
    ACTIONS(1605), 1,
      anon_sym_GRAPH,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14329] = 2,
    ACTIONS(376), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14337] = 2,
    ACTIONS(1607), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14345] = 2,
    ACTIONS(1145), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14353] = 2,
    ACTIONS(1609), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14361] = 2,
    ACTIONS(1611), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14369] = 2,
    ACTIONS(1613), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14377] = 2,
    ACTIONS(1615), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14385] = 2,
    ACTIONS(1617), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14393] = 2,
    ACTIONS(1061), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14401] = 2,
    ACTIONS(1619), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14409] = 2,
    ACTIONS(1621), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14417] = 2,
    ACTIONS(1623), 1,
      sym_name,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14425] = 2,
    ACTIONS(1585), 1,
      aux_sym_postAccumClause_token1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14433] = 2,
    ACTIONS(1625), 1,
      aux_sym_CREATE_GRAPH_token2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14441] = 2,
    ACTIONS(1627), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14449] = 2,
    ACTIONS(1629), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14457] = 2,
    ACTIONS(1631), 1,
      sym_name,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14465] = 2,
    ACTIONS(1633), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14473] = 2,
    ACTIONS(1635), 1,
      aux_sym_fromClause_token1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14481] = 2,
    ACTIONS(1637), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14489] = 2,
    ACTIONS(1639), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14497] = 2,
    ACTIONS(1641), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14505] = 2,
    ACTIONS(1643), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14513] = 2,
    ACTIONS(1645), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14521] = 2,
    ACTIONS(1647), 1,
      aux_sym_WITH_token2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14529] = 2,
    ACTIONS(1649), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14537] = 2,
    ACTIONS(1651), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14545] = 2,
    ACTIONS(1653), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14553] = 2,
    ACTIONS(1655), 1,
      sym_name,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14561] = 2,
    ACTIONS(1657), 1,
      anon_sym_GRAPH,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14569] = 2,
    ACTIONS(1659), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14577] = 2,
    ACTIONS(1661), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14585] = 2,
    ACTIONS(1663), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14593] = 2,
    ACTIONS(1665), 1,
      aux_sym_queryBodyIfStmt_token4,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14601] = 2,
    ACTIONS(1667), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14609] = 2,
    ACTIONS(1669), 1,
      anon_sym_DOT_STAR,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14617] = 2,
    ACTIONS(1671), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14625] = 2,
    ACTIONS(1023), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14633] = 2,
    ACTIONS(1673), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14641] = 2,
    ACTIONS(1675), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14649] = 2,
    ACTIONS(1677), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14657] = 2,
    ACTIONS(1679), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14665] = 2,
    ACTIONS(1681), 1,
      sym_name,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14673] = 2,
    ACTIONS(1073), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14681] = 2,
    ACTIONS(1683), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14689] = 2,
    ACTIONS(1685), 1,
      anon_sym_DQUOTEtrue_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14697] = 2,
    ACTIONS(1687), 1,
      sym_name,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14705] = 2,
    ACTIONS(1689), 1,
      aux_sym_queryBodyIfStmt_token4,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14713] = 2,
    ACTIONS(1691), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14721] = 2,
    ACTIONS(1693), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14729] = 2,
    ACTIONS(1695), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14737] = 2,
    ACTIONS(1697), 1,
      aux_sym_fromClause_token1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14745] = 2,
    ACTIONS(1699), 1,
      aux_sym_CREATE_DIRECTED_EDGE_token3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14753] = 2,
    ACTIONS(1701), 1,
      aux_sym_queryBodyIfStmt_token4,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14761] = 2,
    ACTIONS(1703), 1,
      aux_sym_gsqlSelectClause_token1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14769] = 2,
    ACTIONS(1705), 1,
      aux_sym_queryBodyWhileStmt_token3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14777] = 2,
    ACTIONS(1707), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14785] = 2,
    ACTIONS(1709), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14793] = 2,
    ACTIONS(1711), 1,
      sym_name,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14801] = 2,
    ACTIONS(1713), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14809] = 2,
    ACTIONS(1715), 1,
      aux_sym_condition_token2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14817] = 2,
    ACTIONS(1717), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14825] = 2,
    ACTIONS(1719), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14833] = 2,
    ACTIONS(1721), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14841] = 2,
    ACTIONS(1265), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14849] = 2,
    ACTIONS(1723), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14857] = 2,
    ACTIONS(1725), 1,
      aux_sym_queryBodyIfStmt_token4,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14865] = 2,
    ACTIONS(1727), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14873] = 2,
    ACTIONS(1105), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14881] = 2,
    ACTIONS(1729), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14889] = 2,
    ACTIONS(1731), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14897] = 2,
    ACTIONS(1733), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14905] = 2,
    ACTIONS(1735), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14913] = 2,
    ACTIONS(1737), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_token2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14921] = 2,
    ACTIONS(1739), 1,
      anon_sym_QUERY,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14929] = 2,
    ACTIONS(1741), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14937] = 2,
    ACTIONS(1743), 1,
      aux_sym_CREATE_DIRECTED_EDGE_token3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14945] = 2,
    ACTIONS(1745), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14953] = 2,
    ACTIONS(1747), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14961] = 2,
    ACTIONS(1749), 1,
      anon_sym_GRAPH,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14969] = 2,
    ACTIONS(1751), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14977] = 2,
    ACTIONS(1753), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14985] = 2,
    ACTIONS(1755), 1,
      aux_sym_typedef_token2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [14993] = 2,
    ACTIONS(1757), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15001] = 2,
    ACTIONS(1759), 1,
      aux_sym_define_statement_token2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15009] = 2,
    ACTIONS(1549), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15017] = 2,
    ACTIONS(1761), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15025] = 2,
    ACTIONS(1763), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15033] = 2,
    ACTIONS(1765), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15041] = 2,
    ACTIONS(1767), 1,
      anon_sym_DQUOTEtrue_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15049] = 2,
    ACTIONS(1769), 1,
      anon_sym_DQUOTEtrue_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15057] = 2,
    ACTIONS(1116), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15065] = 2,
    ACTIONS(1771), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15073] = 2,
    ACTIONS(1773), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15081] = 2,
    ACTIONS(1775), 1,
      aux_sym_CREATE_DIRECTED_EDGE_token3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15089] = 2,
    ACTIONS(1777), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15097] = 2,
    ACTIONS(1779), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15105] = 2,
    ACTIONS(1781), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15113] = 2,
    ACTIONS(1537), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15121] = 2,
    ACTIONS(924), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15129] = 2,
    ACTIONS(1783), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15137] = 2,
    ACTIONS(1785), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15145] = 2,
    ACTIONS(1788), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15153] = 2,
    ACTIONS(1790), 1,
      anon_sym_GRAPH,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15161] = 2,
    ACTIONS(1792), 1,
      sym_name,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15169] = 2,
    ACTIONS(1794), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15177] = 2,
    ACTIONS(1796), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15185] = 2,
    ACTIONS(1798), 1,
      aux_sym_constant_token1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15193] = 2,
    ACTIONS(1800), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15201] = 2,
    ACTIONS(1802), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15209] = 2,
    ACTIONS(1804), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15217] = 2,
    ACTIONS(1526), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15225] = 2,
    ACTIONS(1806), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15233] = 2,
    ACTIONS(1808), 1,
      sym_name,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15241] = 2,
    ACTIONS(1810), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15249] = 2,
    ACTIONS(1812), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15257] = 2,
    ACTIONS(1518), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15265] = 2,
    ACTIONS(1814), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15273] = 2,
    ACTIONS(1120), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15281] = 2,
    ACTIONS(1816), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15289] = 2,
    ACTIONS(1818), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15297] = 2,
    ACTIONS(1820), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15305] = 2,
    ACTIONS(1822), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15313] = 2,
    ACTIONS(1824), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15321] = 2,
    ACTIONS(1826), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15329] = 2,
    ACTIONS(1330), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15337] = 2,
    ACTIONS(1828), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15345] = 2,
    ACTIONS(1830), 1,
      aux_sym_selectVertParams_token1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15353] = 2,
    ACTIONS(1832), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15361] = 2,
    ACTIONS(1834), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15369] = 2,
    ACTIONS(1836), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15377] = 2,
    ACTIONS(1838), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15385] = 2,
    ACTIONS(1840), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15393] = 2,
    ACTIONS(1842), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15401] = 2,
    ACTIONS(1844), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15409] = 2,
    ACTIONS(1846), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15417] = 2,
    ACTIONS(1848), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15425] = 2,
    ACTIONS(1850), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15433] = 2,
    ACTIONS(1852), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15441] = 2,
    ACTIONS(1854), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15449] = 2,
    ACTIONS(1856), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15457] = 2,
    ACTIONS(1858), 1,
      aux_sym_CREATE_GRAPH_token2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15465] = 2,
    ACTIONS(1860), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15473] = 2,
    ACTIONS(1862), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15481] = 2,
    ACTIONS(1864), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15489] = 2,
    ACTIONS(1866), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15497] = 2,
    ACTIONS(1868), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15505] = 2,
    ACTIONS(1870), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15513] = 2,
    ACTIONS(1872), 1,
      aux_sym_ADD_INDEX_token4,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15521] = 2,
    ACTIONS(1874), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15529] = 2,
    ACTIONS(1876), 1,
      aux_sym_queryBodyWhileStmt_token3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15537] = 2,
    ACTIONS(1878), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15545] = 2,
    ACTIONS(1880), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15553] = 2,
    ACTIONS(1882), 1,
      sym_name,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15561] = 2,
    ACTIONS(1884), 1,
      aux_sym_create_loading_job_token3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15569] = 2,
    ACTIONS(1886), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15577] = 2,
    ACTIONS(1888), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15585] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_,
    ACTIONS(1890), 1,
      anon_sym_LT,
  [15595] = 2,
    ACTIONS(1892), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15603] = 2,
    ACTIONS(1894), 1,
      aux_sym_create_loading_job_token2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15611] = 2,
    ACTIONS(1896), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15619] = 2,
    ACTIONS(1898), 1,
      anon_sym_GRAPH,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15627] = 2,
    ACTIONS(1900), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15635] = 2,
    ACTIONS(1902), 1,
      aux_sym_CREATE_GRAPH_token1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15643] = 2,
    ACTIONS(1904), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15651] = 2,
    ACTIONS(1232), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15659] = 2,
    ACTIONS(1906), 1,
      aux_sym_fromClause_token1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15667] = 2,
    ACTIONS(1908), 1,
      aux_sym_fromClause_token1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15675] = 2,
    ACTIONS(1910), 1,
      aux_sym_queryBodyIfStmt_token4,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15683] = 2,
    ACTIONS(1912), 1,
      sym_name,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15691] = 2,
    ACTIONS(1914), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15699] = 2,
    ACTIONS(1916), 1,
      sym_name,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15707] = 2,
    ACTIONS(1918), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15715] = 2,
    ACTIONS(1920), 1,
      aux_sym_baseType_token4,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15723] = 2,
    ACTIONS(378), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15731] = 2,
    ACTIONS(1922), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15739] = 2,
    ACTIONS(1924), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15747] = 2,
    ACTIONS(1926), 1,
      aux_sym_queryBodyIfStmt_token4,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15755] = 2,
    ACTIONS(1928), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15763] = 2,
    ACTIONS(1930), 1,
      sym_name,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15771] = 2,
    ACTIONS(1932), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15779] = 2,
    ACTIONS(1934), 1,
      sym_name,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15787] = 2,
    ACTIONS(1936), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15795] = 2,
    ACTIONS(1938), 1,
      aux_sym_baseType_token4,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15803] = 2,
    ACTIONS(1940), 1,
      sym_name,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15811] = 2,
    ACTIONS(701), 1,
      sym_name,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15819] = 2,
    ACTIONS(693), 1,
      sym_name,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15827] = 2,
    ACTIONS(689), 1,
      sym_name,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15835] = 2,
    ACTIONS(625), 1,
      sym_name,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15843] = 2,
    ACTIONS(1942), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15851] = 2,
    ACTIONS(1944), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15859] = 2,
    ACTIONS(1946), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15867] = 2,
    ACTIONS(1948), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15875] = 2,
    ACTIONS(128), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15883] = 2,
    ACTIONS(685), 1,
      sym_name,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15891] = 2,
    ACTIONS(1950), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15899] = 2,
    ACTIONS(1952), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15907] = 2,
    ACTIONS(1954), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15915] = 2,
    ACTIONS(1956), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15923] = 2,
    ACTIONS(1958), 1,
      anon_sym_GRAPH,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15931] = 2,
    ACTIONS(1960), 1,
      aux_sym_ADD_INDEX_token3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15939] = 2,
    ACTIONS(1962), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15947] = 2,
    ACTIONS(1964), 1,
      anon_sym_QUERY,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15955] = 2,
    ACTIONS(1966), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15963] = 2,
    ACTIONS(1968), 1,
      sym_name,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15971] = 2,
    ACTIONS(1970), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15979] = 2,
    ACTIONS(1972), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15987] = 2,
    ACTIONS(1974), 1,
      aux_sym_createSignature_token3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [15995] = 2,
    ACTIONS(1976), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [16003] = 2,
    ACTIONS(1978), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [16011] = 2,
    ACTIONS(1980), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [16019] = 2,
    ACTIONS(1982), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [16027] = 2,
    ACTIONS(1984), 1,
      sym_name,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [16035] = 2,
    ACTIONS(1986), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_token2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [16043] = 2,
    ACTIONS(1988), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [16051] = 2,
    ACTIONS(1990), 1,
      aux_sym_ADD_INDEX_token3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [16059] = 2,
    ACTIONS(380), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [16067] = 2,
    ACTIONS(980), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [16075] = 2,
    ACTIONS(1992), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [16083] = 2,
    ACTIONS(1994), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_token2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [16091] = 2,
    ACTIONS(1996), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [16099] = 2,
    ACTIONS(1998), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [16107] = 2,
    ACTIONS(2000), 1,
      aux_sym_condition_token4,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [16115] = 2,
    ACTIONS(2002), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [16123] = 2,
    ACTIONS(2004), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [16131] = 2,
    ACTIONS(2006), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [16139] = 2,
    ACTIONS(2008), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [16147] = 2,
    ACTIONS(2010), 1,
      aux_sym_baseType_token3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [16155] = 2,
    ACTIONS(2012), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [16163] = 2,
    ACTIONS(2014), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [16171] = 2,
    ACTIONS(2016), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [16179] = 2,
    ACTIONS(948), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [16187] = 2,
    ACTIONS(2018), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [16195] = 2,
    ACTIONS(2020), 1,
      anon_sym_GRAPH,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [16203] = 2,
    ACTIONS(2022), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [16211] = 2,
    ACTIONS(2024), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [16219] = 2,
    ACTIONS(2026), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [16227] = 2,
    ACTIONS(2028), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [16235] = 2,
    ACTIONS(2030), 1,
      aux_sym_CREATE_GRAPH_token1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [16243] = 2,
    ACTIONS(2032), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [16251] = 2,
    ACTIONS(2034), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [16259] = 2,
    ACTIONS(2036), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [16267] = 2,
    ACTIONS(2038), 1,
      anon_sym_QUERY,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_,
  [16275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_,
  [16282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_,
  [16289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_,
  [16296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_,
  [16303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_,
  [16310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2040), 1,
      anon_sym_,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 129,
  [SMALL_STATE(4)] = 258,
  [SMALL_STATE(5)] = 387,
  [SMALL_STATE(6)] = 516,
  [SMALL_STATE(7)] = 645,
  [SMALL_STATE(8)] = 759,
  [SMALL_STATE(9)] = 812,
  [SMALL_STATE(10)] = 859,
  [SMALL_STATE(11)] = 910,
  [SMALL_STATE(12)] = 963,
  [SMALL_STATE(13)] = 1009,
  [SMALL_STATE(14)] = 1059,
  [SMALL_STATE(15)] = 1105,
  [SMALL_STATE(16)] = 1155,
  [SMALL_STATE(17)] = 1205,
  [SMALL_STATE(18)] = 1255,
  [SMALL_STATE(19)] = 1305,
  [SMALL_STATE(20)] = 1355,
  [SMALL_STATE(21)] = 1400,
  [SMALL_STATE(22)] = 1447,
  [SMALL_STATE(23)] = 1498,
  [SMALL_STATE(24)] = 1542,
  [SMALL_STATE(25)] = 1586,
  [SMALL_STATE(26)] = 1630,
  [SMALL_STATE(27)] = 1674,
  [SMALL_STATE(28)] = 1718,
  [SMALL_STATE(29)] = 1762,
  [SMALL_STATE(30)] = 1806,
  [SMALL_STATE(31)] = 1850,
  [SMALL_STATE(32)] = 1927,
  [SMALL_STATE(33)] = 2004,
  [SMALL_STATE(34)] = 2060,
  [SMALL_STATE(35)] = 2101,
  [SMALL_STATE(36)] = 2142,
  [SMALL_STATE(37)] = 2175,
  [SMALL_STATE(38)] = 2207,
  [SMALL_STATE(39)] = 2241,
  [SMALL_STATE(40)] = 2274,
  [SMALL_STATE(41)] = 2334,
  [SMALL_STATE(42)] = 2394,
  [SMALL_STATE(43)] = 2454,
  [SMALL_STATE(44)] = 2514,
  [SMALL_STATE(45)] = 2574,
  [SMALL_STATE(46)] = 2634,
  [SMALL_STATE(47)] = 2666,
  [SMALL_STATE(48)] = 2726,
  [SMALL_STATE(49)] = 2786,
  [SMALL_STATE(50)] = 2833,
  [SMALL_STATE(51)] = 2888,
  [SMALL_STATE(52)] = 2935,
  [SMALL_STATE(53)] = 2990,
  [SMALL_STATE(54)] = 3050,
  [SMALL_STATE(55)] = 3080,
  [SMALL_STATE(56)] = 3140,
  [SMALL_STATE(57)] = 3174,
  [SMALL_STATE(58)] = 3231,
  [SMALL_STATE(59)] = 3288,
  [SMALL_STATE(60)] = 3345,
  [SMALL_STATE(61)] = 3402,
  [SMALL_STATE(62)] = 3453,
  [SMALL_STATE(63)] = 3510,
  [SMALL_STATE(64)] = 3567,
  [SMALL_STATE(65)] = 3624,
  [SMALL_STATE(66)] = 3681,
  [SMALL_STATE(67)] = 3738,
  [SMALL_STATE(68)] = 3795,
  [SMALL_STATE(69)] = 3852,
  [SMALL_STATE(70)] = 3900,
  [SMALL_STATE(71)] = 3954,
  [SMALL_STATE(72)] = 4002,
  [SMALL_STATE(73)] = 4056,
  [SMALL_STATE(74)] = 4104,
  [SMALL_STATE(75)] = 4158,
  [SMALL_STATE(76)] = 4206,
  [SMALL_STATE(77)] = 4232,
  [SMALL_STATE(78)] = 4280,
  [SMALL_STATE(79)] = 4334,
  [SMALL_STATE(80)] = 4385,
  [SMALL_STATE(81)] = 4436,
  [SMALL_STATE(82)] = 4487,
  [SMALL_STATE(83)] = 4534,
  [SMALL_STATE(84)] = 4581,
  [SMALL_STATE(85)] = 4632,
  [SMALL_STATE(86)] = 4683,
  [SMALL_STATE(87)] = 4734,
  [SMALL_STATE(88)] = 4785,
  [SMALL_STATE(89)] = 4836,
  [SMALL_STATE(90)] = 4887,
  [SMALL_STATE(91)] = 4938,
  [SMALL_STATE(92)] = 4989,
  [SMALL_STATE(93)] = 5040,
  [SMALL_STATE(94)] = 5091,
  [SMALL_STATE(95)] = 5137,
  [SMALL_STATE(96)] = 5183,
  [SMALL_STATE(97)] = 5229,
  [SMALL_STATE(98)] = 5275,
  [SMALL_STATE(99)] = 5321,
  [SMALL_STATE(100)] = 5367,
  [SMALL_STATE(101)] = 5413,
  [SMALL_STATE(102)] = 5445,
  [SMALL_STATE(103)] = 5491,
  [SMALL_STATE(104)] = 5533,
  [SMALL_STATE(105)] = 5579,
  [SMALL_STATE(106)] = 5625,
  [SMALL_STATE(107)] = 5671,
  [SMALL_STATE(108)] = 5717,
  [SMALL_STATE(109)] = 5763,
  [SMALL_STATE(110)] = 5810,
  [SMALL_STATE(111)] = 5857,
  [SMALL_STATE(112)] = 5890,
  [SMALL_STATE(113)] = 5937,
  [SMALL_STATE(114)] = 5960,
  [SMALL_STATE(115)] = 5988,
  [SMALL_STATE(116)] = 6026,
  [SMALL_STATE(117)] = 6054,
  [SMALL_STATE(118)] = 6082,
  [SMALL_STATE(119)] = 6120,
  [SMALL_STATE(120)] = 6148,
  [SMALL_STATE(121)] = 6176,
  [SMALL_STATE(122)] = 6204,
  [SMALL_STATE(123)] = 6242,
  [SMALL_STATE(124)] = 6280,
  [SMALL_STATE(125)] = 6318,
  [SMALL_STATE(126)] = 6353,
  [SMALL_STATE(127)] = 6394,
  [SMALL_STATE(128)] = 6421,
  [SMALL_STATE(129)] = 6462,
  [SMALL_STATE(130)] = 6503,
  [SMALL_STATE(131)] = 6544,
  [SMALL_STATE(132)] = 6574,
  [SMALL_STATE(133)] = 6600,
  [SMALL_STATE(134)] = 6626,
  [SMALL_STATE(135)] = 6652,
  [SMALL_STATE(136)] = 6690,
  [SMALL_STATE(137)] = 6716,
  [SMALL_STATE(138)] = 6744,
  [SMALL_STATE(139)] = 6782,
  [SMALL_STATE(140)] = 6811,
  [SMALL_STATE(141)] = 6846,
  [SMALL_STATE(142)] = 6867,
  [SMALL_STATE(143)] = 6902,
  [SMALL_STATE(144)] = 6937,
  [SMALL_STATE(145)] = 6962,
  [SMALL_STATE(146)] = 6997,
  [SMALL_STATE(147)] = 7032,
  [SMALL_STATE(148)] = 7053,
  [SMALL_STATE(149)] = 7074,
  [SMALL_STATE(150)] = 7099,
  [SMALL_STATE(151)] = 7128,
  [SMALL_STATE(152)] = 7163,
  [SMALL_STATE(153)] = 7198,
  [SMALL_STATE(154)] = 7223,
  [SMALL_STATE(155)] = 7258,
  [SMALL_STATE(156)] = 7293,
  [SMALL_STATE(157)] = 7322,
  [SMALL_STATE(158)] = 7357,
  [SMALL_STATE(159)] = 7378,
  [SMALL_STATE(160)] = 7413,
  [SMALL_STATE(161)] = 7448,
  [SMALL_STATE(162)] = 7477,
  [SMALL_STATE(163)] = 7512,
  [SMALL_STATE(164)] = 7536,
  [SMALL_STATE(165)] = 7560,
  [SMALL_STATE(166)] = 7580,
  [SMALL_STATE(167)] = 7600,
  [SMALL_STATE(168)] = 7618,
  [SMALL_STATE(169)] = 7636,
  [SMALL_STATE(170)] = 7668,
  [SMALL_STATE(171)] = 7692,
  [SMALL_STATE(172)] = 7710,
  [SMALL_STATE(173)] = 7732,
  [SMALL_STATE(174)] = 7764,
  [SMALL_STATE(175)] = 7782,
  [SMALL_STATE(176)] = 7806,
  [SMALL_STATE(177)] = 7826,
  [SMALL_STATE(178)] = 7846,
  [SMALL_STATE(179)] = 7869,
  [SMALL_STATE(180)] = 7902,
  [SMALL_STATE(181)] = 7923,
  [SMALL_STATE(182)] = 7942,
  [SMALL_STATE(183)] = 7961,
  [SMALL_STATE(184)] = 7980,
  [SMALL_STATE(185)] = 7999,
  [SMALL_STATE(186)] = 8020,
  [SMALL_STATE(187)] = 8043,
  [SMALL_STATE(188)] = 8064,
  [SMALL_STATE(189)] = 8085,
  [SMALL_STATE(190)] = 8114,
  [SMALL_STATE(191)] = 8137,
  [SMALL_STATE(192)] = 8160,
  [SMALL_STATE(193)] = 8183,
  [SMALL_STATE(194)] = 8206,
  [SMALL_STATE(195)] = 8227,
  [SMALL_STATE(196)] = 8245,
  [SMALL_STATE(197)] = 8263,
  [SMALL_STATE(198)] = 8281,
  [SMALL_STATE(199)] = 8307,
  [SMALL_STATE(200)] = 8327,
  [SMALL_STATE(201)] = 8347,
  [SMALL_STATE(202)] = 8367,
  [SMALL_STATE(203)] = 8385,
  [SMALL_STATE(204)] = 8403,
  [SMALL_STATE(205)] = 8421,
  [SMALL_STATE(206)] = 8439,
  [SMALL_STATE(207)] = 8457,
  [SMALL_STATE(208)] = 8473,
  [SMALL_STATE(209)] = 8491,
  [SMALL_STATE(210)] = 8507,
  [SMALL_STATE(211)] = 8525,
  [SMALL_STATE(212)] = 8541,
  [SMALL_STATE(213)] = 8559,
  [SMALL_STATE(214)] = 8577,
  [SMALL_STATE(215)] = 8595,
  [SMALL_STATE(216)] = 8615,
  [SMALL_STATE(217)] = 8633,
  [SMALL_STATE(218)] = 8653,
  [SMALL_STATE(219)] = 8671,
  [SMALL_STATE(220)] = 8689,
  [SMALL_STATE(221)] = 8709,
  [SMALL_STATE(222)] = 8729,
  [SMALL_STATE(223)] = 8747,
  [SMALL_STATE(224)] = 8765,
  [SMALL_STATE(225)] = 8795,
  [SMALL_STATE(226)] = 8815,
  [SMALL_STATE(227)] = 8831,
  [SMALL_STATE(228)] = 8849,
  [SMALL_STATE(229)] = 8867,
  [SMALL_STATE(230)] = 8885,
  [SMALL_STATE(231)] = 8903,
  [SMALL_STATE(232)] = 8921,
  [SMALL_STATE(233)] = 8939,
  [SMALL_STATE(234)] = 8959,
  [SMALL_STATE(235)] = 8977,
  [SMALL_STATE(236)] = 8994,
  [SMALL_STATE(237)] = 9011,
  [SMALL_STATE(238)] = 9036,
  [SMALL_STATE(239)] = 9055,
  [SMALL_STATE(240)] = 9070,
  [SMALL_STATE(241)] = 9087,
  [SMALL_STATE(242)] = 9104,
  [SMALL_STATE(243)] = 9121,
  [SMALL_STATE(244)] = 9138,
  [SMALL_STATE(245)] = 9163,
  [SMALL_STATE(246)] = 9180,
  [SMALL_STATE(247)] = 9197,
  [SMALL_STATE(248)] = 9214,
  [SMALL_STATE(249)] = 9231,
  [SMALL_STATE(250)] = 9248,
  [SMALL_STATE(251)] = 9265,
  [SMALL_STATE(252)] = 9282,
  [SMALL_STATE(253)] = 9299,
  [SMALL_STATE(254)] = 9316,
  [SMALL_STATE(255)] = 9333,
  [SMALL_STATE(256)] = 9360,
  [SMALL_STATE(257)] = 9377,
  [SMALL_STATE(258)] = 9394,
  [SMALL_STATE(259)] = 9411,
  [SMALL_STATE(260)] = 9428,
  [SMALL_STATE(261)] = 9447,
  [SMALL_STATE(262)] = 9476,
  [SMALL_STATE(263)] = 9505,
  [SMALL_STATE(264)] = 9522,
  [SMALL_STATE(265)] = 9547,
  [SMALL_STATE(266)] = 9562,
  [SMALL_STATE(267)] = 9581,
  [SMALL_STATE(268)] = 9598,
  [SMALL_STATE(269)] = 9613,
  [SMALL_STATE(270)] = 9638,
  [SMALL_STATE(271)] = 9655,
  [SMALL_STATE(272)] = 9672,
  [SMALL_STATE(273)] = 9689,
  [SMALL_STATE(274)] = 9706,
  [SMALL_STATE(275)] = 9721,
  [SMALL_STATE(276)] = 9738,
  [SMALL_STATE(277)] = 9765,
  [SMALL_STATE(278)] = 9782,
  [SMALL_STATE(279)] = 9800,
  [SMALL_STATE(280)] = 9814,
  [SMALL_STATE(281)] = 9828,
  [SMALL_STATE(282)] = 9842,
  [SMALL_STATE(283)] = 9856,
  [SMALL_STATE(284)] = 9874,
  [SMALL_STATE(285)] = 9888,
  [SMALL_STATE(286)] = 9902,
  [SMALL_STATE(287)] = 9916,
  [SMALL_STATE(288)] = 9930,
  [SMALL_STATE(289)] = 9948,
  [SMALL_STATE(290)] = 9962,
  [SMALL_STATE(291)] = 9976,
  [SMALL_STATE(292)] = 9990,
  [SMALL_STATE(293)] = 10004,
  [SMALL_STATE(294)] = 10021,
  [SMALL_STATE(295)] = 10044,
  [SMALL_STATE(296)] = 10065,
  [SMALL_STATE(297)] = 10086,
  [SMALL_STATE(298)] = 10109,
  [SMALL_STATE(299)] = 10126,
  [SMALL_STATE(300)] = 10145,
  [SMALL_STATE(301)] = 10168,
  [SMALL_STATE(302)] = 10191,
  [SMALL_STATE(303)] = 10212,
  [SMALL_STATE(304)] = 10231,
  [SMALL_STATE(305)] = 10246,
  [SMALL_STATE(306)] = 10259,
  [SMALL_STATE(307)] = 10280,
  [SMALL_STATE(308)] = 10295,
  [SMALL_STATE(309)] = 10316,
  [SMALL_STATE(310)] = 10335,
  [SMALL_STATE(311)] = 10356,
  [SMALL_STATE(312)] = 10375,
  [SMALL_STATE(313)] = 10394,
  [SMALL_STATE(314)] = 10413,
  [SMALL_STATE(315)] = 10426,
  [SMALL_STATE(316)] = 10445,
  [SMALL_STATE(317)] = 10462,
  [SMALL_STATE(318)] = 10475,
  [SMALL_STATE(319)] = 10496,
  [SMALL_STATE(320)] = 10515,
  [SMALL_STATE(321)] = 10538,
  [SMALL_STATE(322)] = 10561,
  [SMALL_STATE(323)] = 10580,
  [SMALL_STATE(324)] = 10594,
  [SMALL_STATE(325)] = 10606,
  [SMALL_STATE(326)] = 10624,
  [SMALL_STATE(327)] = 10644,
  [SMALL_STATE(328)] = 10664,
  [SMALL_STATE(329)] = 10682,
  [SMALL_STATE(330)] = 10694,
  [SMALL_STATE(331)] = 10706,
  [SMALL_STATE(332)] = 10726,
  [SMALL_STATE(333)] = 10746,
  [SMALL_STATE(334)] = 10758,
  [SMALL_STATE(335)] = 10778,
  [SMALL_STATE(336)] = 10792,
  [SMALL_STATE(337)] = 10804,
  [SMALL_STATE(338)] = 10818,
  [SMALL_STATE(339)] = 10836,
  [SMALL_STATE(340)] = 10856,
  [SMALL_STATE(341)] = 10876,
  [SMALL_STATE(342)] = 10890,
  [SMALL_STATE(343)] = 10904,
  [SMALL_STATE(344)] = 10916,
  [SMALL_STATE(345)] = 10936,
  [SMALL_STATE(346)] = 10954,
  [SMALL_STATE(347)] = 10974,
  [SMALL_STATE(348)] = 10986,
  [SMALL_STATE(349)] = 10998,
  [SMALL_STATE(350)] = 11016,
  [SMALL_STATE(351)] = 11036,
  [SMALL_STATE(352)] = 11056,
  [SMALL_STATE(353)] = 11068,
  [SMALL_STATE(354)] = 11084,
  [SMALL_STATE(355)] = 11104,
  [SMALL_STATE(356)] = 11124,
  [SMALL_STATE(357)] = 11139,
  [SMALL_STATE(358)] = 11150,
  [SMALL_STATE(359)] = 11165,
  [SMALL_STATE(360)] = 11182,
  [SMALL_STATE(361)] = 11197,
  [SMALL_STATE(362)] = 11212,
  [SMALL_STATE(363)] = 11227,
  [SMALL_STATE(364)] = 11242,
  [SMALL_STATE(365)] = 11255,
  [SMALL_STATE(366)] = 11266,
  [SMALL_STATE(367)] = 11281,
  [SMALL_STATE(368)] = 11298,
  [SMALL_STATE(369)] = 11309,
  [SMALL_STATE(370)] = 11324,
  [SMALL_STATE(371)] = 11341,
  [SMALL_STATE(372)] = 11358,
  [SMALL_STATE(373)] = 11373,
  [SMALL_STATE(374)] = 11384,
  [SMALL_STATE(375)] = 11397,
  [SMALL_STATE(376)] = 11414,
  [SMALL_STATE(377)] = 11429,
  [SMALL_STATE(378)] = 11442,
  [SMALL_STATE(379)] = 11457,
  [SMALL_STATE(380)] = 11472,
  [SMALL_STATE(381)] = 11485,
  [SMALL_STATE(382)] = 11496,
  [SMALL_STATE(383)] = 11511,
  [SMALL_STATE(384)] = 11528,
  [SMALL_STATE(385)] = 11543,
  [SMALL_STATE(386)] = 11560,
  [SMALL_STATE(387)] = 11571,
  [SMALL_STATE(388)] = 11588,
  [SMALL_STATE(389)] = 11605,
  [SMALL_STATE(390)] = 11622,
  [SMALL_STATE(391)] = 11639,
  [SMALL_STATE(392)] = 11654,
  [SMALL_STATE(393)] = 11671,
  [SMALL_STATE(394)] = 11683,
  [SMALL_STATE(395)] = 11697,
  [SMALL_STATE(396)] = 11707,
  [SMALL_STATE(397)] = 11721,
  [SMALL_STATE(398)] = 11735,
  [SMALL_STATE(399)] = 11749,
  [SMALL_STATE(400)] = 11763,
  [SMALL_STATE(401)] = 11773,
  [SMALL_STATE(402)] = 11785,
  [SMALL_STATE(403)] = 11799,
  [SMALL_STATE(404)] = 11813,
  [SMALL_STATE(405)] = 11827,
  [SMALL_STATE(406)] = 11841,
  [SMALL_STATE(407)] = 11851,
  [SMALL_STATE(408)] = 11861,
  [SMALL_STATE(409)] = 11873,
  [SMALL_STATE(410)] = 11885,
  [SMALL_STATE(411)] = 11897,
  [SMALL_STATE(412)] = 11909,
  [SMALL_STATE(413)] = 11923,
  [SMALL_STATE(414)] = 11933,
  [SMALL_STATE(415)] = 11945,
  [SMALL_STATE(416)] = 11959,
  [SMALL_STATE(417)] = 11973,
  [SMALL_STATE(418)] = 11987,
  [SMALL_STATE(419)] = 12001,
  [SMALL_STATE(420)] = 12015,
  [SMALL_STATE(421)] = 12029,
  [SMALL_STATE(422)] = 12043,
  [SMALL_STATE(423)] = 12057,
  [SMALL_STATE(424)] = 12071,
  [SMALL_STATE(425)] = 12085,
  [SMALL_STATE(426)] = 12099,
  [SMALL_STATE(427)] = 12111,
  [SMALL_STATE(428)] = 12125,
  [SMALL_STATE(429)] = 12139,
  [SMALL_STATE(430)] = 12153,
  [SMALL_STATE(431)] = 12167,
  [SMALL_STATE(432)] = 12181,
  [SMALL_STATE(433)] = 12193,
  [SMALL_STATE(434)] = 12207,
  [SMALL_STATE(435)] = 12221,
  [SMALL_STATE(436)] = 12233,
  [SMALL_STATE(437)] = 12247,
  [SMALL_STATE(438)] = 12261,
  [SMALL_STATE(439)] = 12275,
  [SMALL_STATE(440)] = 12289,
  [SMALL_STATE(441)] = 12303,
  [SMALL_STATE(442)] = 12317,
  [SMALL_STATE(443)] = 12331,
  [SMALL_STATE(444)] = 12345,
  [SMALL_STATE(445)] = 12359,
  [SMALL_STATE(446)] = 12373,
  [SMALL_STATE(447)] = 12387,
  [SMALL_STATE(448)] = 12397,
  [SMALL_STATE(449)] = 12411,
  [SMALL_STATE(450)] = 12421,
  [SMALL_STATE(451)] = 12433,
  [SMALL_STATE(452)] = 12447,
  [SMALL_STATE(453)] = 12461,
  [SMALL_STATE(454)] = 12475,
  [SMALL_STATE(455)] = 12485,
  [SMALL_STATE(456)] = 12499,
  [SMALL_STATE(457)] = 12511,
  [SMALL_STATE(458)] = 12525,
  [SMALL_STATE(459)] = 12539,
  [SMALL_STATE(460)] = 12553,
  [SMALL_STATE(461)] = 12567,
  [SMALL_STATE(462)] = 12581,
  [SMALL_STATE(463)] = 12595,
  [SMALL_STATE(464)] = 12609,
  [SMALL_STATE(465)] = 12623,
  [SMALL_STATE(466)] = 12633,
  [SMALL_STATE(467)] = 12643,
  [SMALL_STATE(468)] = 12653,
  [SMALL_STATE(469)] = 12667,
  [SMALL_STATE(470)] = 12681,
  [SMALL_STATE(471)] = 12695,
  [SMALL_STATE(472)] = 12709,
  [SMALL_STATE(473)] = 12723,
  [SMALL_STATE(474)] = 12737,
  [SMALL_STATE(475)] = 12747,
  [SMALL_STATE(476)] = 12761,
  [SMALL_STATE(477)] = 12773,
  [SMALL_STATE(478)] = 12787,
  [SMALL_STATE(479)] = 12801,
  [SMALL_STATE(480)] = 12815,
  [SMALL_STATE(481)] = 12829,
  [SMALL_STATE(482)] = 12841,
  [SMALL_STATE(483)] = 12852,
  [SMALL_STATE(484)] = 12863,
  [SMALL_STATE(485)] = 12872,
  [SMALL_STATE(486)] = 12883,
  [SMALL_STATE(487)] = 12892,
  [SMALL_STATE(488)] = 12903,
  [SMALL_STATE(489)] = 12912,
  [SMALL_STATE(490)] = 12923,
  [SMALL_STATE(491)] = 12934,
  [SMALL_STATE(492)] = 12945,
  [SMALL_STATE(493)] = 12956,
  [SMALL_STATE(494)] = 12967,
  [SMALL_STATE(495)] = 12978,
  [SMALL_STATE(496)] = 12989,
  [SMALL_STATE(497)] = 13000,
  [SMALL_STATE(498)] = 13011,
  [SMALL_STATE(499)] = 13022,
  [SMALL_STATE(500)] = 13033,
  [SMALL_STATE(501)] = 13044,
  [SMALL_STATE(502)] = 13055,
  [SMALL_STATE(503)] = 13064,
  [SMALL_STATE(504)] = 13075,
  [SMALL_STATE(505)] = 13086,
  [SMALL_STATE(506)] = 13097,
  [SMALL_STATE(507)] = 13108,
  [SMALL_STATE(508)] = 13119,
  [SMALL_STATE(509)] = 13130,
  [SMALL_STATE(510)] = 13141,
  [SMALL_STATE(511)] = 13152,
  [SMALL_STATE(512)] = 13163,
  [SMALL_STATE(513)] = 13174,
  [SMALL_STATE(514)] = 13185,
  [SMALL_STATE(515)] = 13196,
  [SMALL_STATE(516)] = 13207,
  [SMALL_STATE(517)] = 13218,
  [SMALL_STATE(518)] = 13229,
  [SMALL_STATE(519)] = 13240,
  [SMALL_STATE(520)] = 13251,
  [SMALL_STATE(521)] = 13262,
  [SMALL_STATE(522)] = 13271,
  [SMALL_STATE(523)] = 13280,
  [SMALL_STATE(524)] = 13291,
  [SMALL_STATE(525)] = 13302,
  [SMALL_STATE(526)] = 13313,
  [SMALL_STATE(527)] = 13322,
  [SMALL_STATE(528)] = 13333,
  [SMALL_STATE(529)] = 13342,
  [SMALL_STATE(530)] = 13353,
  [SMALL_STATE(531)] = 13364,
  [SMALL_STATE(532)] = 13375,
  [SMALL_STATE(533)] = 13386,
  [SMALL_STATE(534)] = 13395,
  [SMALL_STATE(535)] = 13404,
  [SMALL_STATE(536)] = 13415,
  [SMALL_STATE(537)] = 13426,
  [SMALL_STATE(538)] = 13435,
  [SMALL_STATE(539)] = 13444,
  [SMALL_STATE(540)] = 13455,
  [SMALL_STATE(541)] = 13466,
  [SMALL_STATE(542)] = 13477,
  [SMALL_STATE(543)] = 13488,
  [SMALL_STATE(544)] = 13499,
  [SMALL_STATE(545)] = 13508,
  [SMALL_STATE(546)] = 13519,
  [SMALL_STATE(547)] = 13528,
  [SMALL_STATE(548)] = 13537,
  [SMALL_STATE(549)] = 13548,
  [SMALL_STATE(550)] = 13559,
  [SMALL_STATE(551)] = 13570,
  [SMALL_STATE(552)] = 13581,
  [SMALL_STATE(553)] = 13592,
  [SMALL_STATE(554)] = 13603,
  [SMALL_STATE(555)] = 13614,
  [SMALL_STATE(556)] = 13625,
  [SMALL_STATE(557)] = 13636,
  [SMALL_STATE(558)] = 13645,
  [SMALL_STATE(559)] = 13656,
  [SMALL_STATE(560)] = 13667,
  [SMALL_STATE(561)] = 13678,
  [SMALL_STATE(562)] = 13689,
  [SMALL_STATE(563)] = 13700,
  [SMALL_STATE(564)] = 13711,
  [SMALL_STATE(565)] = 13722,
  [SMALL_STATE(566)] = 13733,
  [SMALL_STATE(567)] = 13744,
  [SMALL_STATE(568)] = 13755,
  [SMALL_STATE(569)] = 13766,
  [SMALL_STATE(570)] = 13775,
  [SMALL_STATE(571)] = 13784,
  [SMALL_STATE(572)] = 13795,
  [SMALL_STATE(573)] = 13804,
  [SMALL_STATE(574)] = 13815,
  [SMALL_STATE(575)] = 13826,
  [SMALL_STATE(576)] = 13837,
  [SMALL_STATE(577)] = 13848,
  [SMALL_STATE(578)] = 13859,
  [SMALL_STATE(579)] = 13870,
  [SMALL_STATE(580)] = 13881,
  [SMALL_STATE(581)] = 13892,
  [SMALL_STATE(582)] = 13903,
  [SMALL_STATE(583)] = 13914,
  [SMALL_STATE(584)] = 13925,
  [SMALL_STATE(585)] = 13936,
  [SMALL_STATE(586)] = 13947,
  [SMALL_STATE(587)] = 13958,
  [SMALL_STATE(588)] = 13969,
  [SMALL_STATE(589)] = 13980,
  [SMALL_STATE(590)] = 13989,
  [SMALL_STATE(591)] = 13998,
  [SMALL_STATE(592)] = 14009,
  [SMALL_STATE(593)] = 14020,
  [SMALL_STATE(594)] = 14029,
  [SMALL_STATE(595)] = 14040,
  [SMALL_STATE(596)] = 14051,
  [SMALL_STATE(597)] = 14062,
  [SMALL_STATE(598)] = 14073,
  [SMALL_STATE(599)] = 14084,
  [SMALL_STATE(600)] = 14093,
  [SMALL_STATE(601)] = 14104,
  [SMALL_STATE(602)] = 14115,
  [SMALL_STATE(603)] = 14126,
  [SMALL_STATE(604)] = 14137,
  [SMALL_STATE(605)] = 14148,
  [SMALL_STATE(606)] = 14159,
  [SMALL_STATE(607)] = 14170,
  [SMALL_STATE(608)] = 14181,
  [SMALL_STATE(609)] = 14192,
  [SMALL_STATE(610)] = 14203,
  [SMALL_STATE(611)] = 14214,
  [SMALL_STATE(612)] = 14225,
  [SMALL_STATE(613)] = 14236,
  [SMALL_STATE(614)] = 14247,
  [SMALL_STATE(615)] = 14256,
  [SMALL_STATE(616)] = 14265,
  [SMALL_STATE(617)] = 14273,
  [SMALL_STATE(618)] = 14281,
  [SMALL_STATE(619)] = 14289,
  [SMALL_STATE(620)] = 14297,
  [SMALL_STATE(621)] = 14305,
  [SMALL_STATE(622)] = 14313,
  [SMALL_STATE(623)] = 14321,
  [SMALL_STATE(624)] = 14329,
  [SMALL_STATE(625)] = 14337,
  [SMALL_STATE(626)] = 14345,
  [SMALL_STATE(627)] = 14353,
  [SMALL_STATE(628)] = 14361,
  [SMALL_STATE(629)] = 14369,
  [SMALL_STATE(630)] = 14377,
  [SMALL_STATE(631)] = 14385,
  [SMALL_STATE(632)] = 14393,
  [SMALL_STATE(633)] = 14401,
  [SMALL_STATE(634)] = 14409,
  [SMALL_STATE(635)] = 14417,
  [SMALL_STATE(636)] = 14425,
  [SMALL_STATE(637)] = 14433,
  [SMALL_STATE(638)] = 14441,
  [SMALL_STATE(639)] = 14449,
  [SMALL_STATE(640)] = 14457,
  [SMALL_STATE(641)] = 14465,
  [SMALL_STATE(642)] = 14473,
  [SMALL_STATE(643)] = 14481,
  [SMALL_STATE(644)] = 14489,
  [SMALL_STATE(645)] = 14497,
  [SMALL_STATE(646)] = 14505,
  [SMALL_STATE(647)] = 14513,
  [SMALL_STATE(648)] = 14521,
  [SMALL_STATE(649)] = 14529,
  [SMALL_STATE(650)] = 14537,
  [SMALL_STATE(651)] = 14545,
  [SMALL_STATE(652)] = 14553,
  [SMALL_STATE(653)] = 14561,
  [SMALL_STATE(654)] = 14569,
  [SMALL_STATE(655)] = 14577,
  [SMALL_STATE(656)] = 14585,
  [SMALL_STATE(657)] = 14593,
  [SMALL_STATE(658)] = 14601,
  [SMALL_STATE(659)] = 14609,
  [SMALL_STATE(660)] = 14617,
  [SMALL_STATE(661)] = 14625,
  [SMALL_STATE(662)] = 14633,
  [SMALL_STATE(663)] = 14641,
  [SMALL_STATE(664)] = 14649,
  [SMALL_STATE(665)] = 14657,
  [SMALL_STATE(666)] = 14665,
  [SMALL_STATE(667)] = 14673,
  [SMALL_STATE(668)] = 14681,
  [SMALL_STATE(669)] = 14689,
  [SMALL_STATE(670)] = 14697,
  [SMALL_STATE(671)] = 14705,
  [SMALL_STATE(672)] = 14713,
  [SMALL_STATE(673)] = 14721,
  [SMALL_STATE(674)] = 14729,
  [SMALL_STATE(675)] = 14737,
  [SMALL_STATE(676)] = 14745,
  [SMALL_STATE(677)] = 14753,
  [SMALL_STATE(678)] = 14761,
  [SMALL_STATE(679)] = 14769,
  [SMALL_STATE(680)] = 14777,
  [SMALL_STATE(681)] = 14785,
  [SMALL_STATE(682)] = 14793,
  [SMALL_STATE(683)] = 14801,
  [SMALL_STATE(684)] = 14809,
  [SMALL_STATE(685)] = 14817,
  [SMALL_STATE(686)] = 14825,
  [SMALL_STATE(687)] = 14833,
  [SMALL_STATE(688)] = 14841,
  [SMALL_STATE(689)] = 14849,
  [SMALL_STATE(690)] = 14857,
  [SMALL_STATE(691)] = 14865,
  [SMALL_STATE(692)] = 14873,
  [SMALL_STATE(693)] = 14881,
  [SMALL_STATE(694)] = 14889,
  [SMALL_STATE(695)] = 14897,
  [SMALL_STATE(696)] = 14905,
  [SMALL_STATE(697)] = 14913,
  [SMALL_STATE(698)] = 14921,
  [SMALL_STATE(699)] = 14929,
  [SMALL_STATE(700)] = 14937,
  [SMALL_STATE(701)] = 14945,
  [SMALL_STATE(702)] = 14953,
  [SMALL_STATE(703)] = 14961,
  [SMALL_STATE(704)] = 14969,
  [SMALL_STATE(705)] = 14977,
  [SMALL_STATE(706)] = 14985,
  [SMALL_STATE(707)] = 14993,
  [SMALL_STATE(708)] = 15001,
  [SMALL_STATE(709)] = 15009,
  [SMALL_STATE(710)] = 15017,
  [SMALL_STATE(711)] = 15025,
  [SMALL_STATE(712)] = 15033,
  [SMALL_STATE(713)] = 15041,
  [SMALL_STATE(714)] = 15049,
  [SMALL_STATE(715)] = 15057,
  [SMALL_STATE(716)] = 15065,
  [SMALL_STATE(717)] = 15073,
  [SMALL_STATE(718)] = 15081,
  [SMALL_STATE(719)] = 15089,
  [SMALL_STATE(720)] = 15097,
  [SMALL_STATE(721)] = 15105,
  [SMALL_STATE(722)] = 15113,
  [SMALL_STATE(723)] = 15121,
  [SMALL_STATE(724)] = 15129,
  [SMALL_STATE(725)] = 15137,
  [SMALL_STATE(726)] = 15145,
  [SMALL_STATE(727)] = 15153,
  [SMALL_STATE(728)] = 15161,
  [SMALL_STATE(729)] = 15169,
  [SMALL_STATE(730)] = 15177,
  [SMALL_STATE(731)] = 15185,
  [SMALL_STATE(732)] = 15193,
  [SMALL_STATE(733)] = 15201,
  [SMALL_STATE(734)] = 15209,
  [SMALL_STATE(735)] = 15217,
  [SMALL_STATE(736)] = 15225,
  [SMALL_STATE(737)] = 15233,
  [SMALL_STATE(738)] = 15241,
  [SMALL_STATE(739)] = 15249,
  [SMALL_STATE(740)] = 15257,
  [SMALL_STATE(741)] = 15265,
  [SMALL_STATE(742)] = 15273,
  [SMALL_STATE(743)] = 15281,
  [SMALL_STATE(744)] = 15289,
  [SMALL_STATE(745)] = 15297,
  [SMALL_STATE(746)] = 15305,
  [SMALL_STATE(747)] = 15313,
  [SMALL_STATE(748)] = 15321,
  [SMALL_STATE(749)] = 15329,
  [SMALL_STATE(750)] = 15337,
  [SMALL_STATE(751)] = 15345,
  [SMALL_STATE(752)] = 15353,
  [SMALL_STATE(753)] = 15361,
  [SMALL_STATE(754)] = 15369,
  [SMALL_STATE(755)] = 15377,
  [SMALL_STATE(756)] = 15385,
  [SMALL_STATE(757)] = 15393,
  [SMALL_STATE(758)] = 15401,
  [SMALL_STATE(759)] = 15409,
  [SMALL_STATE(760)] = 15417,
  [SMALL_STATE(761)] = 15425,
  [SMALL_STATE(762)] = 15433,
  [SMALL_STATE(763)] = 15441,
  [SMALL_STATE(764)] = 15449,
  [SMALL_STATE(765)] = 15457,
  [SMALL_STATE(766)] = 15465,
  [SMALL_STATE(767)] = 15473,
  [SMALL_STATE(768)] = 15481,
  [SMALL_STATE(769)] = 15489,
  [SMALL_STATE(770)] = 15497,
  [SMALL_STATE(771)] = 15505,
  [SMALL_STATE(772)] = 15513,
  [SMALL_STATE(773)] = 15521,
  [SMALL_STATE(774)] = 15529,
  [SMALL_STATE(775)] = 15537,
  [SMALL_STATE(776)] = 15545,
  [SMALL_STATE(777)] = 15553,
  [SMALL_STATE(778)] = 15561,
  [SMALL_STATE(779)] = 15569,
  [SMALL_STATE(780)] = 15577,
  [SMALL_STATE(781)] = 15585,
  [SMALL_STATE(782)] = 15595,
  [SMALL_STATE(783)] = 15603,
  [SMALL_STATE(784)] = 15611,
  [SMALL_STATE(785)] = 15619,
  [SMALL_STATE(786)] = 15627,
  [SMALL_STATE(787)] = 15635,
  [SMALL_STATE(788)] = 15643,
  [SMALL_STATE(789)] = 15651,
  [SMALL_STATE(790)] = 15659,
  [SMALL_STATE(791)] = 15667,
  [SMALL_STATE(792)] = 15675,
  [SMALL_STATE(793)] = 15683,
  [SMALL_STATE(794)] = 15691,
  [SMALL_STATE(795)] = 15699,
  [SMALL_STATE(796)] = 15707,
  [SMALL_STATE(797)] = 15715,
  [SMALL_STATE(798)] = 15723,
  [SMALL_STATE(799)] = 15731,
  [SMALL_STATE(800)] = 15739,
  [SMALL_STATE(801)] = 15747,
  [SMALL_STATE(802)] = 15755,
  [SMALL_STATE(803)] = 15763,
  [SMALL_STATE(804)] = 15771,
  [SMALL_STATE(805)] = 15779,
  [SMALL_STATE(806)] = 15787,
  [SMALL_STATE(807)] = 15795,
  [SMALL_STATE(808)] = 15803,
  [SMALL_STATE(809)] = 15811,
  [SMALL_STATE(810)] = 15819,
  [SMALL_STATE(811)] = 15827,
  [SMALL_STATE(812)] = 15835,
  [SMALL_STATE(813)] = 15843,
  [SMALL_STATE(814)] = 15851,
  [SMALL_STATE(815)] = 15859,
  [SMALL_STATE(816)] = 15867,
  [SMALL_STATE(817)] = 15875,
  [SMALL_STATE(818)] = 15883,
  [SMALL_STATE(819)] = 15891,
  [SMALL_STATE(820)] = 15899,
  [SMALL_STATE(821)] = 15907,
  [SMALL_STATE(822)] = 15915,
  [SMALL_STATE(823)] = 15923,
  [SMALL_STATE(824)] = 15931,
  [SMALL_STATE(825)] = 15939,
  [SMALL_STATE(826)] = 15947,
  [SMALL_STATE(827)] = 15955,
  [SMALL_STATE(828)] = 15963,
  [SMALL_STATE(829)] = 15971,
  [SMALL_STATE(830)] = 15979,
  [SMALL_STATE(831)] = 15987,
  [SMALL_STATE(832)] = 15995,
  [SMALL_STATE(833)] = 16003,
  [SMALL_STATE(834)] = 16011,
  [SMALL_STATE(835)] = 16019,
  [SMALL_STATE(836)] = 16027,
  [SMALL_STATE(837)] = 16035,
  [SMALL_STATE(838)] = 16043,
  [SMALL_STATE(839)] = 16051,
  [SMALL_STATE(840)] = 16059,
  [SMALL_STATE(841)] = 16067,
  [SMALL_STATE(842)] = 16075,
  [SMALL_STATE(843)] = 16083,
  [SMALL_STATE(844)] = 16091,
  [SMALL_STATE(845)] = 16099,
  [SMALL_STATE(846)] = 16107,
  [SMALL_STATE(847)] = 16115,
  [SMALL_STATE(848)] = 16123,
  [SMALL_STATE(849)] = 16131,
  [SMALL_STATE(850)] = 16139,
  [SMALL_STATE(851)] = 16147,
  [SMALL_STATE(852)] = 16155,
  [SMALL_STATE(853)] = 16163,
  [SMALL_STATE(854)] = 16171,
  [SMALL_STATE(855)] = 16179,
  [SMALL_STATE(856)] = 16187,
  [SMALL_STATE(857)] = 16195,
  [SMALL_STATE(858)] = 16203,
  [SMALL_STATE(859)] = 16211,
  [SMALL_STATE(860)] = 16219,
  [SMALL_STATE(861)] = 16227,
  [SMALL_STATE(862)] = 16235,
  [SMALL_STATE(863)] = 16243,
  [SMALL_STATE(864)] = 16251,
  [SMALL_STATE(865)] = 16259,
  [SMALL_STATE(866)] = 16267,
  [SMALL_STATE(867)] = 16275,
  [SMALL_STATE(868)] = 16282,
  [SMALL_STATE(869)] = 16289,
  [SMALL_STATE(870)] = 16296,
  [SMALL_STATE(871)] = 16303,
  [SMALL_STATE(872)] = 16310,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(866),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(862),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(496),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(851),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(706),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(796),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(871),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(870),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(869),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(868),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(756),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(829),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(827),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(816),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(815),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(781),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_localAccumName, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_localAccumName, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2), SHIFT_REPEAT(10),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringLiteral, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringLiteral, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 4),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real, 4),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringLiteral, 3),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringLiteral, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expr, 1), REDUCE(sym_setBagExpr, 1),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_expr, 1), REDUCE(sym_setBagExpr, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 3),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumName, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumName, 1),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expr, 3), REDUCE(sym_setBagExpr, 3),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_expr, 3), REDUCE(sym_setBagExpr, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 3),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 3),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expr, 3), SHIFT(229),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_expr, 3), SHIFT(229),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 1),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_globalAccumName, 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_globalAccumName, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 4),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 4),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setBagExpr, 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setBagExpr, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(261),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(796),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(871),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(870),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(869),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(868),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(202),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(756),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(829),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(827),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(816),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(815),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declStmts_repeat1, 2),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(483),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(781),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declStmts, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typedefs, 1),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_typedefs_repeat1, 2), SHIFT_REPEAT(706),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_typedefs_repeat1, 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(858),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(780),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(859),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(685),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(860),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(861),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(262),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(866),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(126),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(49),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(862),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(496),
  [295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(851),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attrName, 1),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attrName, 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(827),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [382] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_queryBodyStmts_repeat1, 2), SHIFT_REPEAT(62),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_queryBodyStmts_repeat1, 2),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_queryBodyStmts_repeat1, 2), SHIFT_REPEAT(59),
  [390] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_queryBodyStmts_repeat1, 2), SHIFT_REPEAT(53),
  [393] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_queryBodyStmts_repeat1, 2), SHIFT_REPEAT(84),
  [396] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_queryBodyStmts_repeat1, 2), SHIFT_REPEAT(282),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_queryBodyStmts, 1),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBodyStmts, 1),
  [405] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym_expr, 1), REDUCE(sym_setBagExpr, 1), REDUCE(sym_tableName, 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_queryBodyStmts_repeat1, 2),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printExpr, 1),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldName, 1),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gAccumAccumStmt, 3),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(809),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(810),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(811),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(812),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(513),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lAccumAccumStmt, 3),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignStmt, 3),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gAccumAccumStmt, 5),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lAccumAccumStmt, 5),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignStmt, 5),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argList, 1),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepVertexTypes, 2),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stepVertexTypes, 2),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepVertexTypes, 3),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stepVertexTypes, 3),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stepVertexTypes_repeat1, 2),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stepVertexTypes_repeat1, 2),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stepVertexTypes_repeat1, 2), SHIFT_REPEAT(313),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vSetProj, 1),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setBagExpr, 1),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(567),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_CREATE_UNDIRECTED_EDGE_repeat2, 5),
  [516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_paramName, 1), REDUCE(sym_vertexType, 1),
  [519] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_paramName, 1), REDUCE(sym_vertexType, 1),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertexSetType, 1),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vertexSetType, 1),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_CREATE_VERTEX_repeat1, 5),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argList_repeat1, 2),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pathPattern_repeat1, 2),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pathPattern_repeat1, 2),
  [534] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pathPattern_repeat1, 2), SHIFT_REPEAT(786),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pathPattern, 2),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pathPattern, 2),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomicVertexType, 1),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atomicVertexType, 1),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepVertexTypes, 1),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stepVertexTypes, 1),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 4),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnStmt, 2),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepVertexSet, 1),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stepVertexSet, 1),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(599),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(597),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pathPattern, 1),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pathPattern, 1),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 2),
  [575] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_condition, 2), SHIFT(57),
  [578] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_condition, 3), SHIFT(57),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fromClause, 3, .production_id = 1),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fromClause, 3, .production_id = 1),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsqlSelectBlock, 2),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stepVertexTypes_repeat1, 2), SHIFT_REPEAT(315),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepVertexSet, 3),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stepVertexSet, 3),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pathPattern_repeat1, 6),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pathPattern_repeat1, 6),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepVertexSet, 2),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stepVertexSet, 2),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertexAlias, 1),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vertexAlias, 1),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fromClause_repeat1, 2),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_fromClause_repeat1, 2),
  [622] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fromClause_repeat1, 2), SHIFT_REPEAT(130),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseType, 1),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_baseType, 1),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_VERTEX, 7),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CREATE_VERTEX, 7),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fromClause, 2, .production_id = 1),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fromClause, 2, .production_id = 1),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_VERTEX, 6),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CREATE_VERTEX, 6),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_WITH, 1),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_WITH, 1),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(849),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(848),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumType, 9),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumType, 9),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tupleType, 1),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tupleType, 1),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumType, 1),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumType, 1),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_WITH, 4),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_WITH, 4),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(639),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_GRAPH, 6),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CREATE_GRAPH, 6),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(765),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ADD_INDEX, 10),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ADD_INDEX, 10),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseType, 4),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_baseType, 4),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseType, 1, .production_id = 4),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_baseType, 1, .production_id = 4),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseType, 1, .production_id = 3),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_baseType, 1, .production_id = 3),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseType, 1, .production_id = 2),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_baseType, 1, .production_id = 2),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumType, 4),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumType, 4),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumType, 4, .production_id = 5),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumType, 4, .production_id = 5),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_DIRECTED_EDGE, 11),
  [715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CREATE_DIRECTED_EDGE, 11),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(676),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumType, 11),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumType, 11),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_GRAPH, 5),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CREATE_GRAPH, 5),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(637),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumType, 10),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumType, 10),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DROP_INDEX, 6),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_DROP_INDEX, 6),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_DIRECTED_EDGE, 13),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CREATE_DIRECTED_EDGE, 13),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(718),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 2),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(612),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_WITH, 6),
  [757] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_WITH, 6),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(694),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumType, 6),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumType, 6),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparisonOperator, 1),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparisonOperator, 1),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mathOperator, 1),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mathOperator, 1),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_DIRECTED_EDGE, 12),
  [775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CREATE_DIRECTED_EDGE, 12),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(700),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DROP, 3),
  [783] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_DROP, 3),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpretQuery, 8),
  [795] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpretQuery, 8),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_GRAPH, 8),
  [799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CREATE_GRAPH, 8),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ADD_INDEX, 11),
  [803] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ADD_INDEX, 11),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_WITH, 7),
  [807] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_WITH, 7),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_UNDIRECTED_EDGE, 13),
  [811] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CREATE_UNDIRECTED_EDGE, 13),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpretQuery, 11),
  [815] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpretQuery, 11),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_WITH, 9),
  [821] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_WITH, 9),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_DIRECTED_EDGE, 17),
  [825] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CREATE_DIRECTED_EDGE, 17),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_VERTEX, 8),
  [829] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CREATE_VERTEX, 8),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_DIRECTED_EDGE, 18),
  [833] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CREATE_DIRECTED_EDGE, 18),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createQuery, 4),
  [837] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_createQuery, 4),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_USE_GRAPH, 3),
  [841] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_USE_GRAPH, 3),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_UNDIRECTED_EDGE, 11),
  [845] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CREATE_UNDIRECTED_EDGE, 11),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsqlSelectBlock, 3),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_UNDIRECTED_EDGE, 12),
  [851] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CREATE_UNDIRECTED_EDGE, 12),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_GRAPH, 9),
  [855] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CREATE_GRAPH, 9),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_loading_job, 9),
  [859] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_loading_job, 9),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_DIRECTED_EDGE, 19),
  [863] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CREATE_DIRECTED_EDGE, 19),
  [865] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pathPattern_repeat1, 2), SHIFT_REPEAT(865),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DROP_INDEX, 7),
  [886] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_DROP_INDEX, 7),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpretQuery, 10),
  [892] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpretQuery, 10),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpretQuery, 7),
  [896] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpretQuery, 7),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_loading_job, 10),
  [900] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_loading_job, 10),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DROP, 2),
  [906] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_DROP, 2),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertexSetName, 1),
  [912] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fromClause_repeat1, 2), SHIFT_REPEAT(129),
  [915] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dmlSubStmtList_repeat1, 2), SHIFT_REPEAT(169),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dmlSubStmtList_repeat1, 2),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsqlSelectBlock, 4),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 9),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dmlSubStmtList, 1),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 5),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 8),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_whereClause, 2),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertexType, 1),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gsqlSelectBlock_repeat1, 2),
  [966] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gsqlSelectBlock_repeat1, 2), SHIFT_REPEAT(154),
  [969] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gsqlSelectBlock_repeat1, 2), SHIFT_REPEAT(641),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dmlSubStmtList, 2),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsqlSelectBlock, 5),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 7),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(856),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 6),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simpleSet, 3),
  [998] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_simpleSet, 3), SHIFT(383),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dmlSubWhileStmt, 7),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dmlSubWhileStmt, 5),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 10),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simpleSet, 1),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [1035] = {.entry = {.count = 1, .reusable = false}}, SHIFT(763),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printStmt, 2),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [1051] = {.entry = {.count = 1, .reusable = false}}, SHIFT(833),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonKey, 1),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepEdgeTypes, 2),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomicEdgeType, 1),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 11),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vExprSet, 4),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dmlSubStmt, 1),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 12),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vExprSet, 5),
  [1081] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_printStmt_repeat1, 2), SHIFT_REPEAT(55),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_printStmt_repeat1, 2),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printStmt, 3),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_CREATE_UNDIRECTED_EDGE_repeat1, 2),
  [1096] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_CREATE_UNDIRECTED_EDGE_repeat1, 2), SHIFT_REPEAT(642),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printStmt, 5),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stepEdgeTypes_repeat1, 2),
  [1113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stepEdgeTypes_repeat1, 2), SHIFT_REPEAT(319),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printStmt, 4),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vSetVarDeclStmt, 6),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterList, 2),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_paramName, 1), REDUCE(sym_edgeType, 1),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumDeclStmt, 2),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [1143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printExpr, 3),
  [1145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vSetVarDeclStmt, 3),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accumType_repeat1, 2),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edgeSetType, 1),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepEdgeTypes, 3),
  [1163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_loading_job_repeat1, 2),
  [1165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_loading_job_repeat1, 2), SHIFT_REPEAT(708),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseDeclStmt, 3),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphName, 1),
  [1176] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumDeclStmt, 3),
  [1194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stringLiteral_repeat1, 2),
  [1204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stringLiteral_repeat1, 2), SHIFT_REPEAT(392),
  [1207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stringLiteral_repeat1, 2), SHIFT_REPEAT(392),
  [1210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameterList_repeat1, 3),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumDeclStmt, 6),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_CREATE_VERTEX_repeat1, 2),
  [1238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_CREATE_VERTEX_repeat1, 2), SHIFT_REPEAT(618),
  [1241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paramName, 1),
  [1243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomicEdgePattern, 1),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectVertParams, 11),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [1255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseDeclStmt, 4),
  [1257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_CREATE_UNDIRECTED_EDGE_repeat1, 5),
  [1259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_CREATE_UNDIRECTED_EDGE_repeat2, 3),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 13),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterList, 4),
  [1273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accumType_repeat1, 2), SHIFT_REPEAT(600),
  [1276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameterList_repeat1, 2),
  [1278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameterList_repeat1, 2), SHIFT_REPEAT(103),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_CREATE_UNDIRECTED_EDGE_repeat2, 2),
  [1287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_CREATE_UNDIRECTED_EDGE_repeat2, 2), SHIFT_REPEAT(359),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_queryBodyIfStmt_repeat1, 5), SHIFT(108),
  [1305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_queryBodyIfStmt_repeat1, 5), SHIFT(647),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tupleFields, 2),
  [1314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumDeclStmt, 5),
  [1316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_paramName, 1), REDUCE(sym_vertexSetName, 1),
  [1319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argList_repeat1, 2), SHIFT_REPEAT(80),
  [1322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_statement, 3),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_CREATE_GRAPH_repeat1, 2),
  [1334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_CREATE_GRAPH_repeat1, 2), SHIFT_REPEAT(444),
  [1337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_perClauseV2_repeat1, 2),
  [1339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_perClauseV2_repeat1, 2), SHIFT_REPEAT(361),
  [1342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postAccumClause, 2),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumClause, 2),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tupleFields_repeat1, 2), SHIFT_REPEAT(125),
  [1355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tupleFields_repeat1, 2),
  [1357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterList, 3),
  [1359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returns, 4),
  [1361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accumDeclStmt_repeat1, 2), SHIFT_REPEAT(604),
  [1364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accumDeclStmt_repeat1, 2),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumDeclStmt, 4),
  [1370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseDeclStmt, 6),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seedSet_repeat1, 2),
  [1376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seedSet_repeat1, 2), SHIFT_REPEAT(189),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vExprSet_repeat1, 2), SHIFT_REPEAT(72),
  [1388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vExprSet_repeat1, 2),
  [1390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumClause, 3),
  [1392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postAccumClause, 3),
  [1394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filePath, 1),
  [1396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterList, 5),
  [1398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argList, 2),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseDeclStmt, 5),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_baseDeclStmt_repeat1, 2),
  [1414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseDeclStmt_repeat1, 2), SHIFT_REPEAT(682),
  [1417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_queryBodyIfStmt_repeat1, 2), SHIFT_REPEAT(687),
  [1420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_queryBodyIfStmt_repeat1, 2),
  [1422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tupleFields, 3),
  [1424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_CREATE_VERTEX_repeat1, 3),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [1432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed, 2),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simpleSize, 1),
  [1438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_paramName, 1), REDUCE(sym_varName, 1),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_id_name_type, 3),
  [1459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [1485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vSetProj, 3),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [1491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accumDeclStmt_repeat1, 4),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [1495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepEdgeTypes, 1),
  [1497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepEdgeSet, 1),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_attrName, 1), SHIFT(90),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementType, 1),
  [1508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectVertParams, 16),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [1514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementType, 2),
  [1516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_perClauseV2, 4),
  [1518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 17),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 16),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 1),
  [1532] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_vertexAlias, 1), REDUCE(sym_edgeAlias, 1),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [1537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 15),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomicEdgePattern, 2),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(648),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 14),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_queryBodyIfStmt_repeat1, 5),
  [1559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accumType_repeat1, 3),
  [1561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_statement, 5),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_perClauseV2, 5),
  [1577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_baseDeclStmt_repeat1, 4),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed, 1),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tupleFields_repeat1, 3),
  [1589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameterList_repeat1, 5),
  [1591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectStmt, 1),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBodyIfStmt, 8),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edgeType, 1),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [1619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBodyWhileStmt, 5),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [1631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seedSet, 2),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBodyIfStmt, 5),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBody, 3),
  [1653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterType, 4),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_columnId, 2),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBody, 1),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterType, 3),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declStmt, 1),
  [1693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBodyStmt, 1),
  [1695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepEdgeSet, 3),
  [1697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsqlSelectClause, 4),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printStmt, 7),
  [1709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBodyWhileStmt, 7),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pathEdgePattern, 3),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBodyIfStmt, 7),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryName, 1),
  [1767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edgeAlias, 1),
  [1785] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_fileVar, 1), REDUCE(sym_paramName, 1),
  [1788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [1794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [1796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [1798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [1800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepEdgeSet, 2),
  [1802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seedSet, 4),
  [1804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [1810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fileDeclStmt, 5),
  [1822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 18),
  [1826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seedSet, 3),
  [1828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [1832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 19),
  [1834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [1836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [1840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [1848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [1860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pathEdgePattern, 1),
  [1866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [1880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [1886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [1888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printStmt, 6),
  [1894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [1896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [1898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [1906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [1914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBodyIfStmt, 6),
  [1916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [1928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterType, 1),
  [1932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [1942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 6),
  [1944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBody, 2),
  [1952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fileVar, 1),
  [1956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [1982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntaxName, 1),
  [1994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [2000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [2002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [2004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [2006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [2008] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [2012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [2014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [2016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [2018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [2020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [2022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [2024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [2026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [2028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [2030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [2032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [2034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [2036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [2038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [2040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
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
