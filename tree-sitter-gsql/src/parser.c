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
#define STATE_COUNT 852
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 252
#define ALIAS_COUNT 6
#define TOKEN_COUNT 127
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
  aux_sym_CREATE_VERTEX_token1 = 44,
  aux_sym_CREATE_VERTEX_token2 = 45,
  aux_sym_CREATE_UNDIRECTED_EDGE_token1 = 46,
  aux_sym_CREATE_UNDIRECTED_EDGE_token2 = 47,
  aux_sym_CREATE_UNDIRECTED_EDGE_token3 = 48,
  aux_sym_CREATE_UNDIRECTED_EDGE_token4 = 49,
  aux_sym_CREATE_DIRECTED_EDGE_token1 = 50,
  aux_sym_CREATE_DIRECTED_EDGE_token2 = 51,
  aux_sym_CREATE_DIRECTED_EDGE_token3 = 52,
  anon_sym_DQUOTE = 53,
  aux_sym_CREATE_DIRECTED_EDGE_token4 = 54,
  aux_sym_WITH_token1 = 55,
  anon_sym_DQUOTEnone_DQUOTE = 56,
  aux_sym_WITH_token2 = 57,
  anon_sym_primary_id_as_attribute = 58,
  anon_sym_DQUOTEtrue_DQUOTE = 59,
  aux_sym_CREATE_GRAPH_token1 = 60,
  aux_sym_CREATE_GRAPH_token2 = 61,
  aux_sym_primary_id_name_type_token1 = 62,
  aux_sym_DROP_token1 = 63,
  aux_sym_DROP_token2 = 64,
  aux_sym_accumDeclStmt_token1 = 65,
  anon_sym_AT = 66,
  anon_sym_AT_AT = 67,
  aux_sym_accumType_token1 = 68,
  aux_sym_accumType_token2 = 69,
  aux_sym_accumType_token3 = 70,
  aux_sym_accumType_token4 = 71,
  aux_sym_accumType_token5 = 72,
  aux_sym_accumType_token6 = 73,
  aux_sym_accumType_token7 = 74,
  aux_sym_accumType_token8 = 75,
  aux_sym_accumType_token9 = 76,
  aux_sym_accumType_token10 = 77,
  aux_sym_accumType_token11 = 78,
  aux_sym_accumType_token12 = 79,
  aux_sym_accumType_token13 = 80,
  aux_sym_accumType_token14 = 81,
  aux_sym_elementType_token1 = 82,
  anon_sym_PLUS_EQ = 83,
  anon_sym_DOT = 84,
  aux_sym_queryBodyIfStmt_token1 = 85,
  aux_sym_queryBodyIfStmt_token2 = 86,
  aux_sym_queryBodyIfStmt_token3 = 87,
  aux_sym_queryBodyIfStmt_token4 = 88,
  aux_sym_fileDeclStmt_token1 = 89,
  aux_sym_simpleSet_token1 = 90,
  aux_sym_simpleSet_token2 = 91,
  aux_sym_simpleSet_token3 = 92,
  anon_sym__ = 93,
  aux_sym_seed_token1 = 94,
  anon_sym_DOT_STAR = 95,
  aux_sym_seed_token2 = 96,
  aux_sym_selectVertParams_token1 = 97,
  anon_sym_DOLLAR = 98,
  anon_sym_SQUOTE = 99,
  aux_sym_printStmt_token1 = 100,
  aux_sym_printStmt_token2 = 101,
  aux_sym_printStmt_token3 = 102,
  aux_sym_printExpr_token1 = 103,
  anon_sym_LBRACK = 104,
  anon_sym_RBRACK = 105,
  aux_sym_returnStmt_token1 = 106,
  aux_sym_gsqlSelectClause_token1 = 107,
  anon_sym_DASH_GT = 108,
  anon_sym_COLON = 109,
  anon_sym_WHERE = 110,
  aux_sym_accumClause_token1 = 111,
  aux_sym_postAccumClause_token1 = 112,
  aux_sym_perClauseV2_token1 = 113,
  aux_sym_stringLiteral_token1 = 114,
  sym_escape_sequence = 115,
  aux_sym_integer_token1 = 116,
  aux_sym_name_token1 = 117,
  aux_sym_name_token2 = 118,
  aux_sym_baseType_token1 = 119,
  aux_sym_baseType_token2 = 120,
  aux_sym_baseType_token3 = 121,
  aux_sym_baseType_token4 = 122,
  aux_sym_baseType_token5 = 123,
  anon_sym_SET = 124,
  anon_sym_BAG = 125,
  anon_sym_FILE = 126,
  sym_source_file = 127,
  sym_createQuery = 128,
  sym_createSignature = 129,
  sym_returns = 130,
  sym_parameterList = 131,
  sym_syntaxName = 132,
  sym_queryBody = 133,
  sym_typedefs = 134,
  sym_typedef = 135,
  sym_tupleFields = 136,
  sym_declStmts = 137,
  sym_declStmt = 138,
  sym_queryBodyStmts = 139,
  sym_queryBodyStmt = 140,
  sym_constant = 141,
  sym_mathOperator = 142,
  sym_condition = 143,
  sym_comparisonOperator = 144,
  sym_pathPattern = 145,
  sym_pathEdgePattern = 146,
  sym_atomicEdgePattern = 147,
  sym_CREATE_VERTEX = 148,
  sym_CREATE_UNDIRECTED_EDGE = 149,
  sym_CREATE_DIRECTED_EDGE = 150,
  sym_WITH = 151,
  sym_CREATE_GRAPH = 152,
  sym_primary_id_name_type = 153,
  sym_DROP = 154,
  sym_accumDeclStmt = 155,
  sym_localAccumName = 156,
  sym_globalAccumName = 157,
  sym_accumType = 158,
  sym_elementType = 159,
  sym_gAccumAccumStmt = 160,
  sym_assignStmt = 161,
  sym_argList = 162,
  sym_queryBodyIfStmt = 163,
  sym_simpleSize = 164,
  sym_baseDeclStmt = 165,
  sym_fileDeclStmt = 166,
  sym_fileVar = 167,
  sym_vSetVarDeclStmt = 168,
  sym_simpleSet = 169,
  sym_seedSet = 170,
  sym_seed = 171,
  sym_selectVertParams = 172,
  sym_columnId = 173,
  sym_expr = 174,
  sym_setBagExpr = 175,
  sym_printStmt = 176,
  sym_printExpr = 177,
  sym_vExprSet = 178,
  sym_vSetProj = 179,
  sym_jsonKey = 180,
  sym_returnStmt = 181,
  sym_selectStmt = 182,
  sym_gsqlSelectBlock = 183,
  sym_gsqlSelectClause = 184,
  sym_tableName = 185,
  sym_fromClause = 186,
  sym_stepEdgeSet = 187,
  sym_stepVertexSet = 188,
  sym_alias = 189,
  sym_vertexAlias = 190,
  sym_edgeAlias = 191,
  sym_stepEdgeTypes = 192,
  sym_atomicEdgeType = 193,
  sym_edgeSetType = 194,
  sym_stepVertexTypes = 195,
  sym_atomicVertexType = 196,
  sym_vertexSetType = 197,
  sym_whereClause = 198,
  sym_accumClause = 199,
  sym_postAccumClause = 200,
  sym_perClauseV2 = 201,
  sym_dmlSubStmtList = 202,
  sym_dmlSubStmt = 203,
  sym_stringLiteral = 204,
  sym_integer = 205,
  sym_real = 206,
  sym_numeric = 207,
  sym_name = 208,
  sym_graphName = 209,
  sym_queryName = 210,
  sym_paramName = 211,
  sym_vertexType = 212,
  sym_edgeType = 213,
  sym_accumName = 214,
  sym_vertexSetName = 215,
  sym_attrName = 216,
  sym_varName = 217,
  sym_tupleType = 218,
  sym_fieldName = 219,
  sym_filePath = 220,
  sym_type = 221,
  sym_baseType = 222,
  sym_parameterType = 223,
  aux_sym_source_file_repeat1 = 224,
  aux_sym_parameterList_repeat1 = 225,
  aux_sym_typedefs_repeat1 = 226,
  aux_sym_tupleFields_repeat1 = 227,
  aux_sym_declStmts_repeat1 = 228,
  aux_sym_queryBodyStmts_repeat1 = 229,
  aux_sym_pathPattern_repeat1 = 230,
  aux_sym_CREATE_VERTEX_repeat1 = 231,
  aux_sym_CREATE_UNDIRECTED_EDGE_repeat1 = 232,
  aux_sym_CREATE_UNDIRECTED_EDGE_repeat2 = 233,
  aux_sym_CREATE_GRAPH_repeat1 = 234,
  aux_sym_accumDeclStmt_repeat1 = 235,
  aux_sym_accumType_repeat1 = 236,
  aux_sym_argList_repeat1 = 237,
  aux_sym_queryBodyIfStmt_repeat1 = 238,
  aux_sym_baseDeclStmt_repeat1 = 239,
  aux_sym_seedSet_repeat1 = 240,
  aux_sym_printStmt_repeat1 = 241,
  aux_sym_vExprSet_repeat1 = 242,
  aux_sym_gsqlSelectBlock_repeat1 = 243,
  aux_sym_fromClause_repeat1 = 244,
  aux_sym_stepEdgeTypes_repeat1 = 245,
  aux_sym_stepVertexTypes_repeat1 = 246,
  aux_sym_perClauseV2_repeat1 = 247,
  aux_sym_dmlSubStmtList_repeat1 = 248,
  aux_sym_stringLiteral_repeat1 = 249,
  aux_sym_integer_repeat1 = 250,
  aux_sym_name_repeat1 = 251,
  anon_alias_sym_CREATE = 252,
  anon_alias_sym_DOUBLE = 253,
  anon_alias_sym_FLOAT = 254,
  anon_alias_sym_INT = 255,
  anon_alias_sym_from = 256,
  anon_alias_sym_string = 257,
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
  [aux_sym_CREATE_UNDIRECTED_EDGE_token1] = "UNDIRECTED",
  [aux_sym_CREATE_UNDIRECTED_EDGE_token2] = "EDGE",
  [aux_sym_CREATE_UNDIRECTED_EDGE_token3] = "FROM",
  [aux_sym_CREATE_UNDIRECTED_EDGE_token4] = "TO",
  [aux_sym_CREATE_DIRECTED_EDGE_token1] = "DIRECTED",
  [aux_sym_CREATE_DIRECTED_EDGE_token2] = "WITH",
  [aux_sym_CREATE_DIRECTED_EDGE_token3] = "REVERSE_EDGE",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_CREATE_DIRECTED_EDGE_token4] = "rev_name",
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
  [anon_sym_DASH_GT] = "->",
  [anon_sym_COLON] = ":",
  [anon_sym_WHERE] = "WHERE",
  [aux_sym_accumClause_token1] = "ACCUM",
  [aux_sym_postAccumClause_token1] = "POST-ACCUM",
  [aux_sym_perClauseV2_token1] = "PER",
  [aux_sym_stringLiteral_token1] = "stringLiteral_token1",
  [sym_escape_sequence] = "escape_sequence",
  [aux_sym_integer_token1] = "integer_token1",
  [aux_sym_name_token1] = "name_token1",
  [aux_sym_name_token2] = "name_token2",
  [aux_sym_baseType_token1] = "UINT",
  [aux_sym_baseType_token2] = "BOOL",
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
  [sym_CREATE_UNDIRECTED_EDGE] = "CREATE_UNDIRECTED_EDGE",
  [sym_CREATE_DIRECTED_EDGE] = "CREATE_DIRECTED_EDGE",
  [sym_WITH] = "WITH",
  [sym_CREATE_GRAPH] = "CREATE_GRAPH",
  [sym_primary_id_name_type] = "primary_id_name_type",
  [sym_DROP] = "DROP",
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
  [aux_sym_CREATE_UNDIRECTED_EDGE_repeat1] = "CREATE_UNDIRECTED_EDGE_repeat1",
  [aux_sym_CREATE_UNDIRECTED_EDGE_repeat2] = "CREATE_UNDIRECTED_EDGE_repeat2",
  [aux_sym_CREATE_GRAPH_repeat1] = "CREATE_GRAPH_repeat1",
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
  [aux_sym_CREATE_VERTEX_token1] = aux_sym_CREATE_VERTEX_token1,
  [aux_sym_CREATE_VERTEX_token2] = aux_sym_CREATE_VERTEX_token2,
  [aux_sym_CREATE_UNDIRECTED_EDGE_token1] = aux_sym_CREATE_UNDIRECTED_EDGE_token1,
  [aux_sym_CREATE_UNDIRECTED_EDGE_token2] = aux_sym_CREATE_UNDIRECTED_EDGE_token2,
  [aux_sym_CREATE_UNDIRECTED_EDGE_token3] = aux_sym_CREATE_UNDIRECTED_EDGE_token3,
  [aux_sym_CREATE_UNDIRECTED_EDGE_token4] = aux_sym_CREATE_UNDIRECTED_EDGE_token4,
  [aux_sym_CREATE_DIRECTED_EDGE_token1] = aux_sym_CREATE_DIRECTED_EDGE_token1,
  [aux_sym_CREATE_DIRECTED_EDGE_token2] = aux_sym_CREATE_DIRECTED_EDGE_token2,
  [aux_sym_CREATE_DIRECTED_EDGE_token3] = aux_sym_CREATE_DIRECTED_EDGE_token3,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_CREATE_DIRECTED_EDGE_token4] = aux_sym_CREATE_DIRECTED_EDGE_token4,
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
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_WHERE] = anon_sym_WHERE,
  [aux_sym_accumClause_token1] = aux_sym_accumClause_token1,
  [aux_sym_postAccumClause_token1] = aux_sym_postAccumClause_token1,
  [aux_sym_perClauseV2_token1] = aux_sym_perClauseV2_token1,
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
  [sym_CREATE_UNDIRECTED_EDGE] = sym_CREATE_UNDIRECTED_EDGE,
  [sym_CREATE_DIRECTED_EDGE] = sym_CREATE_DIRECTED_EDGE,
  [sym_WITH] = sym_WITH,
  [sym_CREATE_GRAPH] = sym_CREATE_GRAPH,
  [sym_primary_id_name_type] = sym_primary_id_name_type,
  [sym_DROP] = sym_DROP,
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
  [aux_sym_CREATE_UNDIRECTED_EDGE_repeat1] = aux_sym_CREATE_UNDIRECTED_EDGE_repeat1,
  [aux_sym_CREATE_UNDIRECTED_EDGE_repeat2] = aux_sym_CREATE_UNDIRECTED_EDGE_repeat2,
  [aux_sym_CREATE_GRAPH_repeat1] = aux_sym_CREATE_GRAPH_repeat1,
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
  [aux_sym_CREATE_VERTEX_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_CREATE_VERTEX_token2] = {
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
  [aux_sym_CREATE_UNDIRECTED_EDGE_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_CREATE_UNDIRECTED_EDGE_token4] = {
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_CREATE_DIRECTED_EDGE_token4] = {
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
      if (eof) ADVANCE(492);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\r') SKIP(487)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '"') ADVANCE(552);
      if (lookahead == '#') ADVANCE(541);
      if (lookahead == '$') ADVANCE(598);
      if (lookahead == '%') ADVANCE(521);
      if (lookahead == '&') ADVANCE(528);
      if (lookahead == '\'') ADVANCE(599);
      if (lookahead == '(') ADVANCE(500);
      if (lookahead == ')') ADVANCE(501);
      if (lookahead == '*') ADVANCE(519);
      if (lookahead == '+') ADVANCE(523);
      if (lookahead == ',') ADVANCE(509);
      if (lookahead == '-') ADVANCE(525);
      if (lookahead == '.') ADVANCE(584);
      if (lookahead == '/') ADVANCE(520);
      if (lookahead == ':') ADVANCE(609);
      if (lookahead == ';') ADVANCE(510);
      if (lookahead == '<') ADVANCE(514);
      if (lookahead == '=') ADVANCE(508);
      if (lookahead == '>') ADVANCE(516);
      if (lookahead == '@') ADVANCE(565);
      if (lookahead == 'A') ADVANCE(683);
      if (lookahead == 'B') ADVANCE(727);
      if (lookahead == 'C') ADVANCE(731);
      if (lookahead == 'D') ADVANCE(689);
      if (lookahead == 'E') ADVANCE(696);
      if (lookahead == 'F') ADVANCE(692);
      if (lookahead == 'H') ADVANCE(697);
      if (lookahead == 'I') ADVANCE(709);
      if (lookahead == 'J') ADVANCE(738);
      if (lookahead == 'L') ADVANCE(715);
      if (lookahead == 'M') ADVANCE(694);
      if (lookahead == 'N') ADVANCE(730);
      if (lookahead == 'O') ADVANCE(686);
      if (lookahead == 'P') ADVANCE(699);
      if (lookahead == 'R') ADVANCE(702);
      if (lookahead == 'S') ADVANCE(688);
      if (lookahead == 'T') ADVANCE(712);
      if (lookahead == 'U') ADVANCE(718);
      if (lookahead == 'V') ADVANCE(700);
      if (lookahead == 'W') ADVANCE(681);
      if (lookahead == '[') ADVANCE(604);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == ']') ADVANCE(605);
      if (lookahead == '_') ADVANCE(593);
      if (lookahead == 'a') ADVANCE(658);
      if (lookahead == 'b') ADVANCE(664);
      if (lookahead == 'c') ADVANCE(668);
      if (lookahead == 'd') ADVANCE(624);
      if (lookahead == 'e') ADVANCE(631);
      if (lookahead == 'f') ADVANCE(627);
      if (lookahead == 'h') ADVANCE(632);
      if (lookahead == 'i') ADVANCE(645);
      if (lookahead == 'j') ADVANCE(675);
      if (lookahead == 'l') ADVANCE(651);
      if (lookahead == 'm') ADVANCE(629);
      if (lookahead == 'n') ADVANCE(667);
      if (lookahead == 'p') ADVANCE(634);
      if (lookahead == 'r') ADVANCE(638);
      if (lookahead == 's') ADVANCE(635);
      if (lookahead == 't') ADVANCE(648);
      if (lookahead == 'u') ADVANCE(654);
      if (lookahead == 'v') ADVANCE(636);
      if (lookahead == 'w') ADVANCE(649);
      if (lookahead == '{') ADVANCE(493);
      if (lookahead == '|') ADVANCE(529);
      if (lookahead == '}') ADVANCE(494);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(679);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(622);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(442)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(443)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(444)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(445)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(446)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(447)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(448)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(449)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(450)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(451)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(452)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(453)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(454)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(455)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(456)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(457)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(458)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(459)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(460)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(461)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(462)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(463)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(464)
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(465)
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(466)
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(467)
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(468)
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(469)
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(470)
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(471)
      END_STATE();
    case 31:
      if (lookahead == '\n') SKIP(472)
      END_STATE();
    case 32:
      if (lookahead == '\n') SKIP(473)
      END_STATE();
    case 33:
      if (lookahead == '\n') SKIP(474)
      END_STATE();
    case 34:
      if (lookahead == '\n') SKIP(475)
      END_STATE();
    case 35:
      if (lookahead == '\n') SKIP(476)
      END_STATE();
    case 36:
      if (lookahead == '\n') SKIP(477)
      END_STATE();
    case 37:
      if (lookahead == '\n') SKIP(478)
      END_STATE();
    case 38:
      if (lookahead == '"') ADVANCE(555);
      END_STATE();
    case 39:
      if (lookahead == '"') ADVANCE(558);
      END_STATE();
    case 40:
      if (lookahead == '*') ADVANCE(42);
      if (lookahead == '/') ADVANCE(541);
      END_STATE();
    case 41:
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '/') ADVANCE(540);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == '*') ADVANCE(41);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == '*') ADVANCE(595);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(152);
      END_STATE();
    case 45:
      if (lookahead == '<') ADVANCE(526);
      END_STATE();
    case 46:
      if (lookahead == '=') ADVANCE(539);
      END_STATE();
    case 47:
      if (lookahead == '=') ADVANCE(583);
      END_STATE();
    case 48:
      if (lookahead == '=') ADVANCE(538);
      END_STATE();
    case 49:
      if (lookahead == '>') ADVANCE(527);
      END_STATE();
    case 50:
      if (lookahead == '@') ADVANCE(566);
      END_STATE();
    case 51:
      if (lookahead == 'A') ADVANCE(92);
      END_STATE();
    case 52:
      if (lookahead == 'A') ADVANCE(75);
      END_STATE();
    case 53:
      if (lookahead == 'A') ADVANCE(64);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(328);
      END_STATE();
    case 54:
      if (lookahead == 'D') ADVANCE(534);
      END_STATE();
    case 55:
      if (lookahead == 'D') ADVANCE(534);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(594);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(81);
      if (lookahead == 'e') ADVANCE(353);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(610);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(610);
      if (lookahead == 'e') ADVANCE(601);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(88);
      if (lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(749);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(86);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(359);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(79);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(83);
      END_STATE();
    case 64:
      if (lookahead == 'G') ADVANCE(748);
      END_STATE();
    case 65:
      if (lookahead == 'H') ADVANCE(503);
      END_STATE();
    case 66:
      if (lookahead == 'H') ADVANCE(63);
      END_STATE();
    case 67:
      if (lookahead == 'I') ADVANCE(504);
      END_STATE();
    case 68:
      if (lookahead == 'I') ADVANCE(69);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(330);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(326);
      END_STATE();
    case 69:
      if (lookahead == 'L') ADVANCE(60);
      END_STATE();
    case 70:
      if (lookahead == 'N') ADVANCE(85);
      END_STATE();
    case 71:
      if (lookahead == 'N') ADVANCE(54);
      if (lookahead == 'P') ADVANCE(67);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(171);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(305);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(276);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(603);
      END_STATE();
    case 72:
      if (lookahead == 'N') ADVANCE(54);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(603);
      END_STATE();
    case 73:
      if (lookahead == 'N') ADVANCE(84);
      END_STATE();
    case 74:
      if (lookahead == 'O') ADVANCE(78);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(288);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(290);
      END_STATE();
    case 75:
      if (lookahead == 'P') ADVANCE(65);
      END_STATE();
    case 76:
      if (lookahead == 'R') ADVANCE(535);
      END_STATE();
    case 77:
      if (lookahead == 'R') ADVANCE(535);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(410);
      END_STATE();
    case 78:
      if (lookahead == 'R') ADVANCE(502);
      END_STATE();
    case 79:
      if (lookahead == 'R') ADVANCE(94);
      END_STATE();
    case 80:
      if (lookahead == 'R') ADVANCE(73);
      END_STATE();
    case 81:
      if (lookahead == 'R') ADVANCE(58);
      if (lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 82:
      if (lookahead == 'R') ADVANCE(52);
      END_STATE();
    case 83:
      if (lookahead == 'R') ADVANCE(57);
      END_STATE();
    case 84:
      if (lookahead == 'S') ADVANCE(506);
      END_STATE();
    case 85:
      if (lookahead == 'T') ADVANCE(51);
      END_STATE();
    case 86:
      if (lookahead == 'T') ADVANCE(747);
      END_STATE();
    case 87:
      if (lookahead == 'T') ADVANCE(91);
      END_STATE();
    case 88:
      if (lookahead == 'T') ADVANCE(91);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(281);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(101);
      END_STATE();
    case 89:
      if (lookahead == 'U') ADVANCE(486);
      if (lookahead == 'u') ADVANCE(482);
      if (lookahead == 'x') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(621);
      if (lookahead != 0) ADVANCE(619);
      END_STATE();
    case 90:
      if (lookahead == 'U') ADVANCE(62);
      END_STATE();
    case 91:
      if (lookahead == 'U') ADVANCE(80);
      END_STATE();
    case 92:
      if (lookahead == 'X') ADVANCE(505);
      END_STATE();
    case 93:
      if (lookahead == 'Y') ADVANCE(70);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(143);
      END_STATE();
    case 94:
      if (lookahead == 'Y') ADVANCE(499);
      END_STATE();
    case 95:
      if (lookahead == '_') ADVANCE(113);
      END_STATE();
    case 96:
      if (lookahead == '_') ADVANCE(104);
      END_STATE();
    case 97:
      if (lookahead == '_') ADVANCE(105);
      END_STATE();
    case 98:
      if (lookahead == '_') ADVANCE(154);
      END_STATE();
    case 99:
      if (lookahead == '_') ADVANCE(161);
      END_STATE();
    case 100:
      if (lookahead == '_') ADVANCE(264);
      END_STATE();
    case 101:
      if (lookahead == '_') ADVANCE(318);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(361);
      END_STATE();
    case 102:
      if (lookahead == '_') ADVANCE(224);
      END_STATE();
    case 103:
      if (lookahead == '_') ADVANCE(243);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 107:
      if (lookahead == 'b') ADVANCE(127);
      END_STATE();
    case 108:
      if (lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(557);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 115:
      if (lookahead == 'm') ADVANCE(106);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(112);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(345);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(380);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 122:
      if (lookahead == 's') ADVANCE(97);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 127:
      if (lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 128:
      if (lookahead == 'u') ADVANCE(111);
      END_STATE();
    case 129:
      if (lookahead == 'y') ADVANCE(95);
      END_STATE();
    case 130:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(617);
      if (lookahead == '\n') SKIP(477)
      if (lookahead == '\r') ADVANCE(618);
      if (lookahead == '"') ADVANCE(551);
      if (lookahead == '#') ADVANCE(618);
      if (lookahead == '/') ADVANCE(614);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead != 0) ADVANCE(618);
      END_STATE();
    case 131:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(398);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(248);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(355);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(417);
      END_STATE();
    case 132:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(288);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(290);
      END_STATE();
    case 133:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(438);
      END_STATE();
    case 134:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 135:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(343);
      END_STATE();
    case 136:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(396);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(265);
      END_STATE();
    case 137:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(419);
      END_STATE();
    case 138:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(351);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 139:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(335);
      END_STATE();
    case 140:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 141:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(386);
      END_STATE();
    case 142:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(348);
      END_STATE();
    case 143:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(400);
      END_STATE();
    case 144:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(304);
      END_STATE();
    case 145:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(405);
      END_STATE();
    case 146:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 147:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(177);
      END_STATE();
    case 148:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(178);
      END_STATE();
    case 149:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 150:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(181);
      END_STATE();
    case 151:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(183);
      END_STATE();
    case 152:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 153:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(274);
      END_STATE();
    case 154:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(441);
      END_STATE();
    case 155:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(432);
      END_STATE();
    case 156:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(286);
      END_STATE();
    case 157:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(579);
      END_STATE();
    case 158:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(564);
      END_STATE();
    case 159:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(578);
      END_STATE();
    case 160:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(162);
      END_STATE();
    case 161:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(370);
      END_STATE();
    case 162:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(421);
      END_STATE();
    case 163:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(422);
      END_STATE();
    case 164:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(423);
      END_STATE();
    case 165:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(424);
      END_STATE();
    case 166:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(388);
      END_STATE();
    case 167:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(425);
      END_STATE();
    case 168:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(427);
      END_STATE();
    case 169:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(390);
      END_STATE();
    case 170:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(428);
      END_STATE();
    case 171:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(429);
      END_STATE();
    case 172:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(430);
      END_STATE();
    case 173:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(214);
      END_STATE();
    case 174:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(395);
      END_STATE();
    case 175:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(394);
      END_STATE();
    case 176:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(163);
      END_STATE();
    case 177:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(164);
      END_STATE();
    case 178:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(165);
      END_STATE();
    case 179:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(167);
      END_STATE();
    case 180:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(407);
      END_STATE();
    case 181:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(168);
      END_STATE();
    case 182:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(408);
      END_STATE();
    case 183:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(170);
      END_STATE();
    case 184:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(171);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(305);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(276);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(603);
      END_STATE();
    case 185:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(172);
      END_STATE();
    case 186:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(333);
      END_STATE();
    case 187:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(251);
      END_STATE();
    case 188:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(588);
      END_STATE();
    case 189:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(498);
      END_STATE();
    case 190:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(561);
      END_STATE();
    case 191:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(548);
      END_STATE();
    case 192:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(544);
      END_STATE();
    case 193:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(273);
      END_STATE();
    case 194:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(210);
      END_STATE();
    case 195:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(223);
      END_STATE();
    case 196:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(252);
      END_STATE();
    case 197:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(254);
      END_STATE();
    case 198:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 199:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(345);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(380);
      END_STATE();
    case 200:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(345);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 201:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(545);
      END_STATE();
    case 202:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(587);
      END_STATE();
    case 203:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(589);
      END_STATE();
    case 204:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(517);
      END_STATE();
    case 205:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(518);
      END_STATE();
    case 206:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(435);
      END_STATE();
    case 207:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(601);
      END_STATE();
    case 208:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(495);
      END_STATE();
    case 209:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(570);
      END_STATE();
    case 210:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 211:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(746);
      END_STATE();
    case 212:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 213:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(512);
      END_STATE();
    case 214:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(497);
      END_STATE();
    case 215:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(553);
      END_STATE();
    case 216:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(550);
      END_STATE();
    case 217:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(556);
      END_STATE();
    case 218:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 219:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 220:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 221:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(436);
      END_STATE();
    case 222:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 223:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 224:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 225:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(353);
      END_STATE();
    case 226:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 227:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 228:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(310);
      END_STATE();
    case 229:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 230:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(401);
      END_STATE();
    case 231:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 232:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 233:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 234:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 235:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 236:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 237:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 238:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 239:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 240:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 241:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 242:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(364);
      END_STATE();
    case 243:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 244:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(362);
      END_STATE();
    case 245:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 246:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(511);
      END_STATE();
    case 247:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(137);
      END_STATE();
    case 248:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(137);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(157);
      END_STATE();
    case 249:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(571);
      END_STATE();
    case 250:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(572);
      END_STATE();
    case 251:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(201);
      END_STATE();
    case 252:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(216);
      END_STATE();
    case 253:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(354);
      END_STATE();
    case 254:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(236);
      END_STATE();
    case 255:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(549);
      END_STATE();
    case 256:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(559);
      END_STATE();
    case 257:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(228);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 258:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(228);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(99);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(426);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(340);
      END_STATE();
    case 259:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(225);
      END_STATE();
    case 260:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(225);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(392);
      END_STATE();
    case 261:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(317);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 262:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(303);
      END_STATE();
    case 263:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 264:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 265:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(314);
      END_STATE();
    case 266:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 267:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(331);
      END_STATE();
    case 268:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(313);
      END_STATE();
    case 269:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      END_STATE();
    case 270:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(302);
      END_STATE();
    case 271:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(319);
      END_STATE();
    case 272:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(381);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(327);
      END_STATE();
    case 273:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(365);
      END_STATE();
    case 274:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(238);
      END_STATE();
    case 275:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(743);
      END_STATE();
    case 276:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(563);
      END_STATE();
    case 277:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(533);
      END_STATE();
    case 278:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(330);
      END_STATE();
    case 279:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(330);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(326);
      END_STATE();
    case 280:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(203);
      END_STATE();
    case 281:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(140);
      END_STATE();
    case 282:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(226);
      END_STATE();
    case 283:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(226);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(147);
      END_STATE();
    case 284:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(277);
      END_STATE();
    case 285:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(389);
      END_STATE();
    case 286:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(209);
      END_STATE();
    case 287:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(213);
      END_STATE();
    case 288:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(378);
      END_STATE();
    case 289:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(240);
      END_STATE();
    case 290:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(411);
      END_STATE();
    case 291:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(546);
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
          lookahead == 'm') ADVANCE(581);
      END_STATE();
    case 295:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(567);
      END_STATE();
    case 296:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(577);
      END_STATE();
    case 297:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(580);
      END_STATE();
    case 298:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(574);
      END_STATE();
    case 299:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(611);
      END_STATE();
    case 300:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(612);
      END_STATE();
    case 301:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(341);
      END_STATE();
    case 302:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(142);
      END_STATE();
    case 303:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(211);
      END_STATE();
    case 304:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(215);
      END_STATE();
    case 305:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(268);
      END_STATE();
    case 306:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(342);
      END_STATE();
    case 307:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(148);
      END_STATE();
    case 308:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(531);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(532);
      END_STATE();
    case 309:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 310:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(586);
      END_STATE();
    case 311:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(590);
      END_STATE();
    case 312:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(606);
      END_STATE();
    case 313:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(560);
      END_STATE();
    case 314:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(249);
      END_STATE();
    case 315:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(418);
      END_STATE();
    case 316:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(250);
      END_STATE();
    case 317:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(385);
      END_STATE();
    case 318:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 319:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(387);
      END_STATE();
    case 320:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(391);
      END_STATE();
    case 321:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(328);
      END_STATE();
    case 322:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(417);
      END_STATE();
    case 323:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(547);
      END_STATE();
    case 324:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(384);
      END_STATE();
    case 325:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(384);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(284);
      END_STATE();
    case 326:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(291);
      END_STATE();
    case 327:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(334);
      END_STATE();
    case 328:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(275);
      END_STATE();
    case 329:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(309);
      END_STATE();
    case 330:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 331:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(311);
      END_STATE();
    case 332:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(301);
      END_STATE();
    case 333:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(306);
      END_STATE();
    case 334:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(562);
      END_STATE();
    case 335:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(256);
      END_STATE();
    case 336:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(134);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(146);
      END_STATE();
    case 337:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(281);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(101);
      END_STATE();
    case 338:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(218);
      END_STATE();
    case 339:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(217);
      END_STATE();
    case 340:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(287);
      END_STATE();
    case 341:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(356);
      END_STATE();
    case 342:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(360);
      END_STATE();
    case 343:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(149);
      END_STATE();
    case 344:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 345:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(613);
      END_STATE();
    case 346:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(597);
      END_STATE();
    case 347:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(496);
      END_STATE();
    case 348:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(439);
      END_STATE();
    case 349:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(263);
      END_STATE();
    case 350:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 351:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(350);
      END_STATE();
    case 352:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(312);
      END_STATE();
    case 353:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 354:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 355:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(234);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(402);
      END_STATE();
    case 356:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(233);
      END_STATE();
    case 357:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(403);
      END_STATE();
    case 358:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 359:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(265);
      END_STATE();
    case 360:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 361:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(382);
      END_STATE();
    case 362:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(383);
      END_STATE();
    case 363:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(269);
      END_STATE();
    case 364:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(409);
      END_STATE();
    case 365:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(245);
      END_STATE();
    case 366:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(603);
      END_STATE();
    case 367:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(157);
      END_STATE();
    case 368:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(592);
      END_STATE();
    case 369:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(554);
      END_STATE();
    case 370:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(433);
      END_STATE();
    case 371:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(582);
      END_STATE();
    case 372:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(573);
      END_STATE();
    case 373:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(416);
      END_STATE();
    case 374:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(329);
      END_STATE();
    case 375:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(202);
      END_STATE();
    case 376:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(159);
      END_STATE();
    case 377:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(371);
      END_STATE();
    case 378:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(205);
      END_STATE();
    case 379:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(372);
      END_STATE();
    case 380:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(393);
      END_STATE();
    case 381:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(402);
      END_STATE();
    case 382:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(222);
      END_STATE();
    case 383:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(241);
      END_STATE();
    case 384:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(530);
      END_STATE();
    case 385:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(742);
      END_STATE();
    case 386:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(569);
      END_STATE();
    case 387:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(600);
      END_STATE();
    case 388:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(607);
      END_STATE();
    case 389:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(543);
      END_STATE();
    case 390:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(744);
      END_STATE();
    case 391:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(568);
      END_STATE();
    case 392:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(255);
      END_STATE();
    case 393:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(44);
      END_STATE();
    case 394:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(591);
      END_STATE();
    case 395:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(434);
      END_STATE();
    case 396:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(266);
      END_STATE();
    case 397:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(440);
      END_STATE();
    case 398:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(230);
      END_STATE();
    case 399:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(420);
      END_STATE();
    case 400:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(369);
      END_STATE();
    case 401:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(262);
      END_STATE();
    case 402:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(349);
      END_STATE();
    case 403:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(206);
      END_STATE();
    case 404:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(359);
      END_STATE();
    case 405:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(208);
      END_STATE();
    case 406:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(227);
      END_STATE();
    case 407:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(231);
      END_STATE();
    case 408:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(232);
      END_STATE();
    case 409:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(221);
      END_STATE();
    case 410:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(195);
      END_STATE();
    case 411:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(235);
      END_STATE();
    case 412:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(143);
      END_STATE();
    case 413:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(244);
      END_STATE();
    case 414:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(363);
      END_STATE();
    case 415:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(147);
      END_STATE();
    case 416:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(150);
      END_STATE();
    case 417:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(156);
      END_STATE();
    case 418:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(368);
      END_STATE();
    case 419:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(285);
      END_STATE();
    case 420:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(352);
      END_STATE();
    case 421:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(292);
      END_STATE();
    case 422:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(293);
      END_STATE();
    case 423:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(294);
      END_STATE();
    case 424:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(295);
      END_STATE();
    case 425:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(296);
      END_STATE();
    case 426:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(204);
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
          lookahead == 'u') ADVANCE(299);
      END_STATE();
    case 430:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(300);
      END_STATE();
    case 431:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(410);
      END_STATE();
    case 432:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(406);
      END_STATE();
    case 433:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(602);
      END_STATE();
    case 434:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(242);
      END_STATE();
    case 435:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(542);
      END_STATE();
    case 436:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(596);
      END_STATE();
    case 437:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(594);
      END_STATE();
    case 438:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(745);
      END_STATE();
    case 439:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(100);
      END_STATE();
    case 440:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(339);
      END_STATE();
    case 441:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(103);
      END_STATE();
    case 442:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(442)
      if (lookahead == '\r') SKIP(1)
      if (lookahead == '"') ADVANCE(551);
      if (lookahead == '#') ADVANCE(541);
      if (lookahead == '%') ADVANCE(521);
      if (lookahead == '&') ADVANCE(528);
      if (lookahead == '(') ADVANCE(500);
      if (lookahead == ')') ADVANCE(501);
      if (lookahead == '*') ADVANCE(519);
      if (lookahead == '+') ADVANCE(522);
      if (lookahead == ',') ADVANCE(509);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead == '.') ADVANCE(584);
      if (lookahead == '/') ADVANCE(520);
      if (lookahead == ';') ADVANCE(510);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '=') ADVANCE(507);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == 'B') ADVANCE(727);
      if (lookahead == 'D') ADVANCE(690);
      if (lookahead == 'E') ADVANCE(695);
      if (lookahead == 'F') ADVANCE(716);
      if (lookahead == 'H') ADVANCE(697);
      if (lookahead == 'I') ADVANCE(710);
      if (lookahead == 'J') ADVANCE(738);
      if (lookahead == 'L') ADVANCE(715);
      if (lookahead == 'M') ADVANCE(693);
      if (lookahead == 'O') ADVANCE(736);
      if (lookahead == 'P') ADVANCE(732);
      if (lookahead == 'R') ADVANCE(702);
      if (lookahead == 'S') ADVANCE(706);
      if (lookahead == 'T') ADVANCE(741);
      if (lookahead == 'U') ADVANCE(717);
      if (lookahead == 'V') ADVANCE(700);
      if (lookahead == '_') ADVANCE(593);
      if (lookahead == 'b') ADVANCE(664);
      if (lookahead == 'd') ADVANCE(625);
      if (lookahead == 'e') ADVANCE(630);
      if (lookahead == 'f') ADVANCE(652);
      if (lookahead == 'h') ADVANCE(632);
      if (lookahead == 'i') ADVANCE(646);
      if (lookahead == 'j') ADVANCE(675);
      if (lookahead == 'l') ADVANCE(651);
      if (lookahead == 'm') ADVANCE(628);
      if (lookahead == 'o') ADVANCE(673);
      if (lookahead == 'p') ADVANCE(669);
      if (lookahead == 'r') ADVANCE(638);
      if (lookahead == 's') ADVANCE(642);
      if (lookahead == 't') ADVANCE(678);
      if (lookahead == 'u') ADVANCE(653);
      if (lookahead == 'v') ADVANCE(636);
      if (lookahead == '|') ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(679);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(622);
      END_STATE();
    case 443:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(443)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == '"') ADVANCE(123);
      if (lookahead == '#') ADVANCE(541);
      if (lookahead == ')') ADVANCE(501);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == ',') ADVANCE(509);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == ':') ADVANCE(609);
      if (lookahead == '>') ADVANCE(515);
      if (lookahead == 'B') ADVANCE(727);
      if (lookahead == 'D') ADVANCE(690);
      if (lookahead == 'E') ADVANCE(695);
      if (lookahead == 'F') ADVANCE(716);
      if (lookahead == 'H') ADVANCE(697);
      if (lookahead == 'I') ADVANCE(710);
      if (lookahead == 'J') ADVANCE(738);
      if (lookahead == 'L') ADVANCE(715);
      if (lookahead == 'M') ADVANCE(693);
      if (lookahead == 'O') ADVANCE(736);
      if (lookahead == 'P') ADVANCE(732);
      if (lookahead == 'R') ADVANCE(702);
      if (lookahead == 'S') ADVANCE(706);
      if (lookahead == 'U') ADVANCE(717);
      if (lookahead == 'V') ADVANCE(700);
      if (lookahead == '_') ADVANCE(593);
      if (lookahead == 'b') ADVANCE(664);
      if (lookahead == 'd') ADVANCE(625);
      if (lookahead == 'e') ADVANCE(630);
      if (lookahead == 'f') ADVANCE(652);
      if (lookahead == 'h') ADVANCE(632);
      if (lookahead == 'i') ADVANCE(646);
      if (lookahead == 'j') ADVANCE(675);
      if (lookahead == 'l') ADVANCE(651);
      if (lookahead == 'm') ADVANCE(628);
      if (lookahead == 'o') ADVANCE(673);
      if (lookahead == 'p') ADVANCE(669);
      if (lookahead == 'r') ADVANCE(638);
      if (lookahead == 's') ADVANCE(642);
      if (lookahead == 'u') ADVANCE(653);
      if (lookahead == 'v') ADVANCE(636);
      if (lookahead == '|') ADVANCE(529);
      if (lookahead == '}') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(679);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 444:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(444)
      if (lookahead == '\r') SKIP(3)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '#') ADVANCE(541);
      if (lookahead == '%') ADVANCE(521);
      if (lookahead == '&') ADVANCE(528);
      if (lookahead == '\'') ADVANCE(599);
      if (lookahead == ')') ADVANCE(501);
      if (lookahead == '*') ADVANCE(519);
      if (lookahead == '+') ADVANCE(522);
      if (lookahead == ',') ADVANCE(509);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead == '.') ADVANCE(584);
      if (lookahead == '/') ADVANCE(520);
      if (lookahead == ';') ADVANCE(510);
      if (lookahead == '<') ADVANCE(514);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(516);
      if (lookahead == 'A') ADVANCE(72);
      if (lookahead == 'O') ADVANCE(76);
      if (lookahead == '[') ADVANCE(604);
      if (lookahead == ']') ADVANCE(605);
      if (lookahead == 'a') ADVANCE(366);
      if (lookahead == '|') ADVANCE(529);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(308);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(324);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(200);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(257);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(622);
      END_STATE();
    case 445:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(445)
      if (lookahead == '\r') SKIP(4)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '#') ADVANCE(541);
      if (lookahead == '%') ADVANCE(521);
      if (lookahead == '&') ADVANCE(528);
      if (lookahead == '\'') ADVANCE(599);
      if (lookahead == ')') ADVANCE(501);
      if (lookahead == '*') ADVANCE(519);
      if (lookahead == '+') ADVANCE(522);
      if (lookahead == ',') ADVANCE(509);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead == '/') ADVANCE(520);
      if (lookahead == ';') ADVANCE(510);
      if (lookahead == '<') ADVANCE(514);
      if (lookahead == '=') ADVANCE(508);
      if (lookahead == '>') ADVANCE(516);
      if (lookahead == 'A') ADVANCE(72);
      if (lookahead == 'O') ADVANCE(76);
      if (lookahead == '[') ADVANCE(604);
      if (lookahead == ']') ADVANCE(605);
      if (lookahead == 'a') ADVANCE(366);
      if (lookahead == '|') ADVANCE(529);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(308);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(324);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(198);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(257);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(259);
      END_STATE();
    case 446:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(446)
      if (lookahead == '\r') SKIP(5)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '#') ADVANCE(541);
      if (lookahead == '%') ADVANCE(521);
      if (lookahead == '&') ADVANCE(528);
      if (lookahead == '\'') ADVANCE(599);
      if (lookahead == '*') ADVANCE(519);
      if (lookahead == '+') ADVANCE(522);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead == '.') ADVANCE(584);
      if (lookahead == '/') ADVANCE(520);
      if (lookahead == ';') ADVANCE(510);
      if (lookahead == '<') ADVANCE(514);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(516);
      if (lookahead == 'A') ADVANCE(684);
      if (lookahead == 'I') ADVANCE(723);
      if (lookahead == 'N') ADVANCE(730);
      if (lookahead == 'O') ADVANCE(686);
      if (lookahead == 'T') ADVANCE(729);
      if (lookahead == '_') ADVANCE(593);
      if (lookahead == 'i') ADVANCE(660);
      if (lookahead == 'n') ADVANCE(667);
      if (lookahead == 't') ADVANCE(666);
      if (lookahead == '|') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(622);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(679);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 447:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(447)
      if (lookahead == '\r') SKIP(6)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '#') ADVANCE(541);
      if (lookahead == '%') ADVANCE(521);
      if (lookahead == '&') ADVANCE(528);
      if (lookahead == '\'') ADVANCE(599);
      if (lookahead == '*') ADVANCE(519);
      if (lookahead == '+') ADVANCE(522);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead == '.') ADVANCE(584);
      if (lookahead == '/') ADVANCE(520);
      if (lookahead == ';') ADVANCE(510);
      if (lookahead == '<') ADVANCE(514);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(516);
      if (lookahead == 'A') ADVANCE(684);
      if (lookahead == 'I') ADVANCE(723);
      if (lookahead == 'N') ADVANCE(730);
      if (lookahead == 'O') ADVANCE(686);
      if (lookahead == 'P') ADVANCE(698);
      if (lookahead == '_') ADVANCE(593);
      if (lookahead == 'i') ADVANCE(660);
      if (lookahead == 'n') ADVANCE(667);
      if (lookahead == 'p') ADVANCE(633);
      if (lookahead == '|') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(622);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(679);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 448:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(448)
      if (lookahead == '\r') SKIP(7)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '#') ADVANCE(541);
      if (lookahead == '%') ADVANCE(521);
      if (lookahead == '&') ADVANCE(528);
      if (lookahead == '\'') ADVANCE(599);
      if (lookahead == '*') ADVANCE(519);
      if (lookahead == '+') ADVANCE(522);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead == '.') ADVANCE(584);
      if (lookahead == '/') ADVANCE(520);
      if (lookahead == '<') ADVANCE(514);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(516);
      if (lookahead == 'A') ADVANCE(684);
      if (lookahead == 'I') ADVANCE(723);
      if (lookahead == 'N') ADVANCE(730);
      if (lookahead == 'O') ADVANCE(686);
      if (lookahead == 'T') ADVANCE(711);
      if (lookahead == '_') ADVANCE(593);
      if (lookahead == 'i') ADVANCE(660);
      if (lookahead == 'n') ADVANCE(667);
      if (lookahead == 't') ADVANCE(647);
      if (lookahead == '|') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(622);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(679);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 449:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(449)
      if (lookahead == '\r') SKIP(8)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '#') ADVANCE(541);
      if (lookahead == '%') ADVANCE(521);
      if (lookahead == '&') ADVANCE(528);
      if (lookahead == '\'') ADVANCE(599);
      if (lookahead == ')') ADVANCE(501);
      if (lookahead == '*') ADVANCE(519);
      if (lookahead == '+') ADVANCE(522);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead == '.') ADVANCE(584);
      if (lookahead == '/') ADVANCE(520);
      if (lookahead == '<') ADVANCE(514);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(516);
      if (lookahead == 'A') ADVANCE(684);
      if (lookahead == 'I') ADVANCE(723);
      if (lookahead == 'N') ADVANCE(730);
      if (lookahead == 'O') ADVANCE(686);
      if (lookahead == '_') ADVANCE(593);
      if (lookahead == 'i') ADVANCE(660);
      if (lookahead == 'n') ADVANCE(667);
      if (lookahead == '|') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(622);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(679);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 450:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(450)
      if (lookahead == '\r') SKIP(9)
      if (lookahead == '"') ADVANCE(551);
      if (lookahead == '#') ADVANCE(541);
      if (lookahead == '$') ADVANCE(598);
      if (lookahead == '%') ADVANCE(521);
      if (lookahead == '&') ADVANCE(528);
      if (lookahead == '\'') ADVANCE(599);
      if (lookahead == '(') ADVANCE(500);
      if (lookahead == ')') ADVANCE(501);
      if (lookahead == '*') ADVANCE(519);
      if (lookahead == '+') ADVANCE(523);
      if (lookahead == ',') ADVANCE(509);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead == '.') ADVANCE(584);
      if (lookahead == '/') ADVANCE(520);
      if (lookahead == ':') ADVANCE(609);
      if (lookahead == ';') ADVANCE(510);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '=') ADVANCE(507);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == '@') ADVANCE(565);
      if (lookahead == ']') ADVANCE(605);
      if (lookahead == '_') ADVANCE(593);
      if (lookahead == '{') ADVANCE(493);
      if (lookahead == '|') ADVANCE(529);
      if (lookahead == '}') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(622);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(679);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 451:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(451)
      if (lookahead == '\r') SKIP(10)
      if (lookahead == '#') ADVANCE(541);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '=') ADVANCE(507);
      if (lookahead == 'B') ADVANCE(727);
      if (lookahead == 'D') ADVANCE(690);
      if (lookahead == 'E') ADVANCE(695);
      if (lookahead == 'F') ADVANCE(720);
      if (lookahead == 'H') ADVANCE(697);
      if (lookahead == 'I') ADVANCE(725);
      if (lookahead == 'J') ADVANCE(738);
      if (lookahead == 'L') ADVANCE(715);
      if (lookahead == 'M') ADVANCE(693);
      if (lookahead == 'O') ADVANCE(736);
      if (lookahead == 'S') ADVANCE(707);
      if (lookahead == 'U') ADVANCE(717);
      if (lookahead == 'V') ADVANCE(700);
      if (lookahead == '_') ADVANCE(593);
      if (lookahead == 'b') ADVANCE(664);
      if (lookahead == 'd') ADVANCE(625);
      if (lookahead == 'e') ADVANCE(630);
      if (lookahead == 'f') ADVANCE(656);
      if (lookahead == 'h') ADVANCE(632);
      if (lookahead == 'i') ADVANCE(662);
      if (lookahead == 'j') ADVANCE(675);
      if (lookahead == 'l') ADVANCE(651);
      if (lookahead == 'm') ADVANCE(628);
      if (lookahead == 'o') ADVANCE(673);
      if (lookahead == 's') ADVANCE(643);
      if (lookahead == 'u') ADVANCE(653);
      if (lookahead == 'v') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(622);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(679);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 452:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(452)
      if (lookahead == '\r') SKIP(11)
      if (lookahead == '"') ADVANCE(551);
      if (lookahead == '#') ADVANCE(541);
      if (lookahead == '(') ADVANCE(500);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead == '.') ADVANCE(584);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '@') ADVANCE(50);
      if (lookahead == 'F') ADVANCE(691);
      if (lookahead == 'T') ADVANCE(734);
      if (lookahead == '_') ADVANCE(593);
      if (lookahead == 'f') ADVANCE(626);
      if (lookahead == 't') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(622);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(679);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 453:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(453)
      if (lookahead == '\r') SKIP(12)
      if (lookahead == '#') ADVANCE(541);
      if (lookahead == '%') ADVANCE(521);
      if (lookahead == '&') ADVANCE(528);
      if (lookahead == '\'') ADVANCE(599);
      if (lookahead == '*') ADVANCE(519);
      if (lookahead == '+') ADVANCE(522);
      if (lookahead == ',') ADVANCE(509);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead == '.') ADVANCE(584);
      if (lookahead == '/') ADVANCE(520);
      if (lookahead == ';') ADVANCE(510);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == 'A') ADVANCE(737);
      if (lookahead == 'T') ADVANCE(729);
      if (lookahead == 'W') ADVANCE(713);
      if (lookahead == '[') ADVANCE(604);
      if (lookahead == '_') ADVANCE(593);
      if (lookahead == 'a') ADVANCE(674);
      if (lookahead == 't') ADVANCE(666);
      if (lookahead == 'w') ADVANCE(649);
      if (lookahead == '|') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(622);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(679);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 454:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(454)
      if (lookahead == '\r') SKIP(13)
      if (lookahead == '#') ADVANCE(541);
      if (lookahead == '%') ADVANCE(521);
      if (lookahead == '&') ADVANCE(528);
      if (lookahead == '\'') ADVANCE(599);
      if (lookahead == '*') ADVANCE(519);
      if (lookahead == '+') ADVANCE(522);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead == '.') ADVANCE(584);
      if (lookahead == '/') ADVANCE(520);
      if (lookahead == ';') ADVANCE(510);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == 'A') ADVANCE(684);
      if (lookahead == 'O') ADVANCE(686);
      if (lookahead == 'T') ADVANCE(729);
      if (lookahead == '_') ADVANCE(593);
      if (lookahead == 't') ADVANCE(666);
      if (lookahead == '|') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(622);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(679);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 455:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(455)
      if (lookahead == '\r') SKIP(14)
      if (lookahead == '#') ADVANCE(541);
      if (lookahead == '%') ADVANCE(521);
      if (lookahead == '&') ADVANCE(528);
      if (lookahead == '\'') ADVANCE(599);
      if (lookahead == '*') ADVANCE(519);
      if (lookahead == '+') ADVANCE(522);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead == '.') ADVANCE(584);
      if (lookahead == '/') ADVANCE(520);
      if (lookahead == ';') ADVANCE(510);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == 'A') ADVANCE(684);
      if (lookahead == 'O') ADVANCE(686);
      if (lookahead == 'P') ADVANCE(698);
      if (lookahead == '_') ADVANCE(593);
      if (lookahead == 'p') ADVANCE(633);
      if (lookahead == '|') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(622);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(679);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 456:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(456)
      if (lookahead == '\r') SKIP(15)
      if (lookahead == '#') ADVANCE(541);
      if (lookahead == '%') ADVANCE(521);
      if (lookahead == '&') ADVANCE(528);
      if (lookahead == '\'') ADVANCE(599);
      if (lookahead == '*') ADVANCE(519);
      if (lookahead == '+') ADVANCE(522);
      if (lookahead == ',') ADVANCE(509);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead == '.') ADVANCE(584);
      if (lookahead == '/') ADVANCE(520);
      if (lookahead == ';') ADVANCE(510);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == 'P') ADVANCE(698);
      if (lookahead == '_') ADVANCE(593);
      if (lookahead == 'p') ADVANCE(633);
      if (lookahead == '|') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(622);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(679);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 457:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(457)
      if (lookahead == '\r') SKIP(16)
      if (lookahead == '#') ADVANCE(541);
      if (lookahead == '%') ADVANCE(521);
      if (lookahead == '&') ADVANCE(528);
      if (lookahead == '\'') ADVANCE(599);
      if (lookahead == '*') ADVANCE(519);
      if (lookahead == '+') ADVANCE(522);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead == '.') ADVANCE(584);
      if (lookahead == '/') ADVANCE(520);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == 'A') ADVANCE(684);
      if (lookahead == 'O') ADVANCE(686);
      if (lookahead == 'T') ADVANCE(711);
      if (lookahead == '_') ADVANCE(593);
      if (lookahead == 't') ADVANCE(647);
      if (lookahead == '|') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(622);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(679);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 458:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(458)
      if (lookahead == '\r') SKIP(17)
      if (lookahead == '#') ADVANCE(541);
      if (lookahead == '%') ADVANCE(521);
      if (lookahead == '&') ADVANCE(528);
      if (lookahead == '\'') ADVANCE(599);
      if (lookahead == ')') ADVANCE(501);
      if (lookahead == '*') ADVANCE(519);
      if (lookahead == '+') ADVANCE(522);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead == '.') ADVANCE(584);
      if (lookahead == '/') ADVANCE(520);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == 'A') ADVANCE(684);
      if (lookahead == 'O') ADVANCE(686);
      if (lookahead == '_') ADVANCE(593);
      if (lookahead == '|') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(622);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(679);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 459:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(459)
      if (lookahead == '\r') SKIP(18)
      if (lookahead == '#') ADVANCE(541);
      if (lookahead == '(') ADVANCE(500);
      if (lookahead == ')') ADVANCE(501);
      if (lookahead == ',') ADVANCE(509);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == ':') ADVANCE(609);
      if (lookahead == ';') ADVANCE(510);
      if (lookahead == '<') ADVANCE(513);
      if (lookahead == '>') ADVANCE(515);
      if (lookahead == '@') ADVANCE(565);
      if (lookahead == 'B') ADVANCE(53);
      if (lookahead == 'F') ADVANCE(68);
      if (lookahead == 'Q') ADVANCE(90);
      if (lookahead == 'S') ADVANCE(61);
      if (lookahead == 'W') ADVANCE(66);
      if (lookahead == 'b') ADVANCE(321);
      if (lookahead == 'f') ADVANCE(279);
      if (lookahead == 's') ADVANCE(404);
      if (lookahead == '|') ADVANCE(529);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(376);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(332);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(187);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(358);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(320);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(374);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(347);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(198);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(323);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(261);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(220);
      END_STATE();
    case 460:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(460)
      if (lookahead == '\r') SKIP(19)
      if (lookahead == '#') ADVANCE(541);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == 'E') ADVANCE(719);
      if (lookahead == 'I') ADVANCE(708);
      if (lookahead == 'P') ADVANCE(732);
      if (lookahead == 'R') ADVANCE(702);
      if (lookahead == '_') ADVANCE(593);
      if (lookahead == 'e') ADVANCE(655);
      if (lookahead == 'i') ADVANCE(644);
      if (lookahead == 'p') ADVANCE(669);
      if (lookahead == 'r') ADVANCE(638);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(679);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 461:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(461)
      if (lookahead == '\r') SKIP(20)
      if (lookahead == '#') ADVANCE(541);
      if (lookahead == '%') ADVANCE(521);
      if (lookahead == '&') ADVANCE(528);
      if (lookahead == '\'') ADVANCE(599);
      if (lookahead == '*') ADVANCE(519);
      if (lookahead == '+') ADVANCE(522);
      if (lookahead == ',') ADVANCE(509);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead == '.') ADVANCE(584);
      if (lookahead == '/') ADVANCE(520);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == 'A') ADVANCE(737);
      if (lookahead == ']') ADVANCE(605);
      if (lookahead == '_') ADVANCE(593);
      if (lookahead == 'a') ADVANCE(674);
      if (lookahead == '|') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(622);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(679);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 462:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(462)
      if (lookahead == '\r') SKIP(21)
      if (lookahead == '#') ADVANCE(541);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == 'I') ADVANCE(708);
      if (lookahead == 'P') ADVANCE(732);
      if (lookahead == 'R') ADVANCE(702);
      if (lookahead == '_') ADVANCE(593);
      if (lookahead == 'i') ADVANCE(644);
      if (lookahead == 'p') ADVANCE(669);
      if (lookahead == 'r') ADVANCE(638);
      if (lookahead == '}') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(679);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 463:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(463)
      if (lookahead == '\r') SKIP(22)
      if (lookahead == '#') ADVANCE(541);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == 'B') ADVANCE(727);
      if (lookahead == 'D') ADVANCE(690);
      if (lookahead == 'E') ADVANCE(695);
      if (lookahead == 'F') ADVANCE(720);
      if (lookahead == 'I') ADVANCE(725);
      if (lookahead == 'J') ADVANCE(738);
      if (lookahead == 'S') ADVANCE(740);
      if (lookahead == 'U') ADVANCE(717);
      if (lookahead == 'V') ADVANCE(700);
      if (lookahead == '_') ADVANCE(593);
      if (lookahead == 'b') ADVANCE(664);
      if (lookahead == 'd') ADVANCE(625);
      if (lookahead == 'e') ADVANCE(630);
      if (lookahead == 'f') ADVANCE(656);
      if (lookahead == 'i') ADVANCE(662);
      if (lookahead == 'j') ADVANCE(675);
      if (lookahead == 's') ADVANCE(677);
      if (lookahead == 'u') ADVANCE(653);
      if (lookahead == 'v') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(622);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(679);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 464:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(464)
      if (lookahead == '\r') SKIP(23)
      if (lookahead == '#') ADVANCE(541);
      if (lookahead == '(') ADVANCE(500);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == ':') ADVANCE(609);
      if (lookahead == '<') ADVANCE(513);
      if (lookahead == '@') ADVANCE(50);
      if (lookahead == 'A') ADVANCE(721);
      if (lookahead == '_') ADVANCE(593);
      if (lookahead == 'a') ADVANCE(657);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(679);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 465:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(465)
      if (lookahead == '\r') SKIP(24)
      if (lookahead == '#') ADVANCE(541);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '@') ADVANCE(50);
      if (lookahead == 'A') ADVANCE(721);
      if (lookahead == 'S') ADVANCE(704);
      if (lookahead == '_') ADVANCE(593);
      if (lookahead == 'a') ADVANCE(657);
      if (lookahead == 's') ADVANCE(640);
      if (lookahead == '}') ADVANCE(494);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(679);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 466:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(466)
      if (lookahead == '\r') SKIP(25)
      if (lookahead == '#') ADVANCE(541);
      if (lookahead == ')') ADVANCE(501);
      if (lookahead == ',') ADVANCE(509);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == ':') ADVANCE(609);
      if (lookahead == '<') ADVANCE(513);
      if (lookahead == '>') ADVANCE(515);
      if (lookahead == '_') ADVANCE(593);
      if (lookahead == '|') ADVANCE(529);
      if (lookahead == '}') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(622);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(679);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 467:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(467)
      if (lookahead == '\r') SKIP(26)
      if (lookahead == '#') ADVANCE(541);
      if (lookahead == ',') ADVANCE(509);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == ':') ADVANCE(609);
      if (lookahead == ';') ADVANCE(510);
      if (lookahead == 'P') ADVANCE(698);
      if (lookahead == 'W') ADVANCE(682);
      if (lookahead == '_') ADVANCE(593);
      if (lookahead == 'p') ADVANCE(633);
      if (lookahead == '|') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(622);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(679);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 468:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(468)
      if (lookahead == '\r') SKIP(27)
      if (lookahead == '#') ADVANCE(541);
      if (lookahead == '(') ADVANCE(500);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == 'S') ADVANCE(705);
      if (lookahead == '_') ADVANCE(593);
      if (lookahead == 's') ADVANCE(641);
      if (lookahead == '{') ADVANCE(493);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(679);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 469:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(469)
      if (lookahead == '\r') SKIP(28)
      if (lookahead == '#') ADVANCE(541);
      if (lookahead == '(') ADVANCE(500);
      if (lookahead == ')') ADVANCE(501);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == ';') ADVANCE(510);
      if (lookahead == '=') ADVANCE(507);
      if (lookahead == 'I') ADVANCE(726);
      if (lookahead == 'M') ADVANCE(714);
      if (lookahead == 'U') ADVANCE(724);
      if (lookahead == '_') ADVANCE(593);
      if (lookahead == 'i') ADVANCE(663);
      if (lookahead == 'm') ADVANCE(650);
      if (lookahead == 'u') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(622);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(679);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 470:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(470)
      if (lookahead == '\r') SKIP(29)
      if (lookahead == '#') ADVANCE(541);
      if (lookahead == ',') ADVANCE(509);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == ';') ADVANCE(510);
      if (lookahead == 'T') ADVANCE(729);
      if (lookahead == 'W') ADVANCE(713);
      if (lookahead == '_') ADVANCE(593);
      if (lookahead == 't') ADVANCE(666);
      if (lookahead == 'w') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(622);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(679);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 471:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(471)
      if (lookahead == '\r') SKIP(30)
      if (lookahead == '#') ADVANCE(541);
      if (lookahead == ')') ADVANCE(501);
      if (lookahead == ',') ADVANCE(509);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == 'A') ADVANCE(739);
      if (lookahead == 'D') ADVANCE(703);
      if (lookahead == '_') ADVANCE(593);
      if (lookahead == 'a') ADVANCE(676);
      if (lookahead == 'd') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(622);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(679);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 472:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(472)
      if (lookahead == '\r') SKIP(31)
      if (lookahead == '#') ADVANCE(541);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == 'A') ADVANCE(685);
      if (lookahead == 'R') ADVANCE(680);
      if (lookahead == 'S') ADVANCE(687);
      if (lookahead == '_') ADVANCE(593);
      if (lookahead == '{') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(622);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(679);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 473:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(473)
      if (lookahead == '\r') SKIP(32)
      if (lookahead == '#') ADVANCE(541);
      if (lookahead == ')') ADVANCE(501);
      if (lookahead == ',') ADVANCE(509);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == 'D') ADVANCE(701);
      if (lookahead == '_') ADVANCE(593);
      if (lookahead == 'd') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(622);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(679);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 474:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(474)
      if (lookahead == '\r') SKIP(33)
      if (lookahead == '#') ADVANCE(541);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == 'T') ADVANCE(728);
      if (lookahead == '_') ADVANCE(593);
      if (lookahead == 't') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(622);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(679);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 475:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(475)
      if (lookahead == '\r') SKIP(34)
      if (lookahead == '#') ADVANCE(541);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == 'F') ADVANCE(735);
      if (lookahead == '_') ADVANCE(593);
      if (lookahead == 'f') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(622);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(679);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 476:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(476)
      if (lookahead == '\r') SKIP(35)
      if (lookahead == '#') ADVANCE(541);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(322);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(278);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(320);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(414);
      END_STATE();
    case 477:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(477)
      if (lookahead == '\r') SKIP(36)
      if (lookahead == '"') ADVANCE(551);
      if (lookahead == '#') ADVANCE(541);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(89);
      END_STATE();
    case 478:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(478)
      if (lookahead == '\r') SKIP(37)
      if (lookahead == '#') ADVANCE(541);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == 'E') ADVANCE(722);
      if (lookahead == 'I') ADVANCE(708);
      if (lookahead == 'P') ADVANCE(732);
      if (lookahead == 'R') ADVANCE(702);
      if (lookahead == '_') ADVANCE(593);
      if (lookahead == 'e') ADVANCE(659);
      if (lookahead == 'i') ADVANCE(644);
      if (lookahead == 'p') ADVANCE(669);
      if (lookahead == 'r') ADVANCE(638);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(679);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 479:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(619);
      END_STATE();
    case 480:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(479);
      END_STATE();
    case 481:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(480);
      END_STATE();
    case 482:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(481);
      END_STATE();
    case 483:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(482);
      END_STATE();
    case 484:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(483);
      END_STATE();
    case 485:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(484);
      END_STATE();
    case 486:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(485);
      END_STATE();
    case 487:
      if (eof) ADVANCE(492);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 488:
      if (eof) ADVANCE(492);
      if (lookahead == '\n') SKIP(490)
      END_STATE();
    case 489:
      if (eof) ADVANCE(492);
      if (lookahead == '\n') SKIP(491)
      END_STATE();
    case 490:
      if (eof) ADVANCE(492);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(490)
      if (lookahead == '\r') SKIP(488)
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '"') ADVANCE(551);
      if (lookahead == '#') ADVANCE(541);
      if (lookahead == '%') ADVANCE(521);
      if (lookahead == '&') ADVANCE(528);
      if (lookahead == '\'') ADVANCE(599);
      if (lookahead == ')') ADVANCE(501);
      if (lookahead == '*') ADVANCE(519);
      if (lookahead == '+') ADVANCE(523);
      if (lookahead == ',') ADVANCE(509);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead == '.') ADVANCE(584);
      if (lookahead == '/') ADVANCE(520);
      if (lookahead == ':') ADVANCE(609);
      if (lookahead == ';') ADVANCE(510);
      if (lookahead == '<') ADVANCE(514);
      if (lookahead == '=') ADVANCE(508);
      if (lookahead == '>') ADVANCE(516);
      if (lookahead == 'A') ADVANCE(71);
      if (lookahead == 'F') ADVANCE(74);
      if (lookahead == 'G') ADVANCE(82);
      if (lookahead == 'O') ADVANCE(77);
      if (lookahead == 'P') ADVANCE(199);
      if (lookahead == 'Q') ADVANCE(90);
      if (lookahead == 'R') ADVANCE(59);
      if (lookahead == 'S') ADVANCE(93);
      if (lookahead == '[') ADVANCE(604);
      if (lookahead == ']') ADVANCE(605);
      if (lookahead == 'a') ADVANCE(184);
      if (lookahead == 'f') ADVANCE(132);
      if (lookahead == 'o') ADVANCE(431);
      if (lookahead == 'p') ADVANCE(119);
      if (lookahead == 'r') ADVANCE(212);
      if (lookahead == 's') ADVANCE(412);
      if (lookahead == '{') ADVANCE(493);
      if (lookahead == '|') ADVANCE(529);
      if (lookahead == '}') ADVANCE(494);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(344);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(272);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(308);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(325);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(258);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(622);
      END_STATE();
    case 491:
      if (eof) ADVANCE(492);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(491)
      if (lookahead == '\r') SKIP(489)
      if (lookahead == '#') ADVANCE(541);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == 'C') ADVANCE(731);
      if (lookahead == 'D') ADVANCE(733);
      if (lookahead == '_') ADVANCE(593);
      if (lookahead == 'c') ADVANCE(668);
      if (lookahead == 'd') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(622);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(679);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_createSignature_token1);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_createSignature_token2);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_createSignature_token3);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_createSignature_token4);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_QUERY);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_FOR);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_GRAPH);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_API);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_SYNTAX);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_RETURNS);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(538);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_typedef_token1);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_typedef_token2);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(526);
      if (lookahead == '=') ADVANCE(536);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(537);
      if (lookahead == '>') ADVANCE(527);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_constant_token2);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(42);
      if (lookahead == '/') ADVANCE(541);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(583);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(608);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_condition_token2);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_condition_token3);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_condition_token4);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(541);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_CREATE_VERTEX_token1);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_CREATE_VERTEX_token2);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_CREATE_UNDIRECTED_EDGE_token1);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_CREATE_UNDIRECTED_EDGE_token2);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_CREATE_UNDIRECTED_EDGE_token3);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_CREATE_UNDIRECTED_EDGE_token4);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_CREATE_DIRECTED_EDGE_token1);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_CREATE_DIRECTED_EDGE_token2);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_CREATE_DIRECTED_EDGE_token3);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_CREATE_DIRECTED_EDGE_token4);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_WITH_token1);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_DQUOTEnone_DQUOTE);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_WITH_token2);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_primary_id_as_attribute);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_DQUOTEtrue_DQUOTE);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_CREATE_GRAPH_token1);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_CREATE_GRAPH_token2);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_primary_id_name_type_token1);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_DROP_token1);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_DROP_token2);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_accumDeclStmt_token1);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(566);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_accumType_token1);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_accumType_token2);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_accumType_token3);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_accumType_token4);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_accumType_token5);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_accumType_token5);
      if (lookahead == ' ') ADVANCE(186);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_accumType_token6);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_accumType_token7);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_accumType_token8);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_accumType_token9);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_accumType_token10);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_accumType_token11);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_accumType_token12);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_accumType_token13);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_accumType_token14);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_elementType_token1);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_queryBodyIfStmt_token1);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_queryBodyIfStmt_token2);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_queryBodyIfStmt_token3);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_queryBodyIfStmt_token4);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_fileDeclStmt_token1);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_simpleSet_token1);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_simpleSet_token2);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_simpleSet_token3);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_seed_token1);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_DOT_STAR);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_seed_token2);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_selectVertParams_token1);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_printStmt_token1);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_printStmt_token2);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_printStmt_token3);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_printExpr_token1);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_returnStmt_token1);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_gsqlSelectClause_token1);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_WHERE);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_accumClause_token1);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_postAccumClause_token1);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_perClauseV2_token1);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_stringLiteral_token1);
      if (lookahead == '*') ADVANCE(616);
      if (lookahead == '/') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_stringLiteral_token1);
      if (lookahead == '*') ADVANCE(615);
      if (lookahead == '/') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(616);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_stringLiteral_token1);
      if (lookahead == '*') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(616);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_stringLiteral_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(617);
      if (lookahead == '\r') ADVANCE(618);
      if (lookahead == '#') ADVANCE(618);
      if (lookahead == '/') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_stringLiteral_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(619);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(620);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_name_token1);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(398);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(248);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(417);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(327);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(398);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(417);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(288);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(288);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(280);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(330);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(326);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(336);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(336);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(315);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(251);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(251);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(375);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(345);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(271);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(283);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(136);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(307);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(399);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(415);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(136);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(307);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(415);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(359);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(307);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(585);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(585);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(531);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(532);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(585);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(391);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(228);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(228);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(547);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(426);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(338);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(225);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(315);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(373);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(280);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(330);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(317);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(317);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(267);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(375);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(330);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(437);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(437);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(603);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(531);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(532);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(267);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(391);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(413);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(328);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(547);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(384);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(271);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(327);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(426);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(326);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(603);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(329);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(159);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(359);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(338);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_name_token2);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E') ADVANCE(87);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'H') ADVANCE(56);
      if (lookahead == 'h') ADVANCE(225);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'H') ADVANCE(63);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'N') ADVANCE(55);
      if (lookahead == 'P') ADVANCE(67);
      if (lookahead == 'n') ADVANCE(437);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(603);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'N') ADVANCE(54);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'P') ADVANCE(67);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'R') ADVANCE(535);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'Y') ADVANCE(70);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'Y') ADVANCE(70);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(283);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(136);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(307);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(398);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(248);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(417);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(327);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(398);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(417);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(288);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(288);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(280);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(330);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(326);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(336);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(336);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(315);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(251);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(251);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(375);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(345);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(271);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(399);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(415);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(136);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(307);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(415);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(359);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(307);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(585);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(585);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(531);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(532);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(585);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(391);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(228);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(228);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(547);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(426);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(338);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(225);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(315);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(373);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(280);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(330);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(317);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(317);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(267);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(375);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(330);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(437);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(531);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(532);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(267);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(391);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(413);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(328);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(547);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(384);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(271);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(327);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(426);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(326);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(603);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(329);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(159);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(359);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(338);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_baseType_token1);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_baseType_token2);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_baseType_token3);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_baseType_token4);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_baseType_token5);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_SET);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_BAG);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_FILE);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 442},
  [3] = {.lex_state = 443},
  [4] = {.lex_state = 490},
  [5] = {.lex_state = 490},
  [6] = {.lex_state = 443},
  [7] = {.lex_state = 444},
  [8] = {.lex_state = 443},
  [9] = {.lex_state = 444},
  [10] = {.lex_state = 444},
  [11] = {.lex_state = 444},
  [12] = {.lex_state = 444},
  [13] = {.lex_state = 445},
  [14] = {.lex_state = 444},
  [15] = {.lex_state = 444},
  [16] = {.lex_state = 444},
  [17] = {.lex_state = 444},
  [18] = {.lex_state = 444},
  [19] = {.lex_state = 444},
  [20] = {.lex_state = 444},
  [21] = {.lex_state = 444},
  [22] = {.lex_state = 444},
  [23] = {.lex_state = 444},
  [24] = {.lex_state = 444},
  [25] = {.lex_state = 444},
  [26] = {.lex_state = 444},
  [27] = {.lex_state = 446},
  [28] = {.lex_state = 446},
  [29] = {.lex_state = 447},
  [30] = {.lex_state = 446},
  [31] = {.lex_state = 447},
  [32] = {.lex_state = 442},
  [33] = {.lex_state = 442},
  [34] = {.lex_state = 447},
  [35] = {.lex_state = 448},
  [36] = {.lex_state = 449},
  [37] = {.lex_state = 449},
  [38] = {.lex_state = 449},
  [39] = {.lex_state = 448},
  [40] = {.lex_state = 448},
  [41] = {.lex_state = 442},
  [42] = {.lex_state = 450},
  [43] = {.lex_state = 451},
  [44] = {.lex_state = 450},
  [45] = {.lex_state = 451},
  [46] = {.lex_state = 451},
  [47] = {.lex_state = 443},
  [48] = {.lex_state = 451},
  [49] = {.lex_state = 450},
  [50] = {.lex_state = 451},
  [51] = {.lex_state = 452},
  [52] = {.lex_state = 444},
  [53] = {.lex_state = 452},
  [54] = {.lex_state = 444},
  [55] = {.lex_state = 444},
  [56] = {.lex_state = 451},
  [57] = {.lex_state = 451},
  [58] = {.lex_state = 444},
  [59] = {.lex_state = 444},
  [60] = {.lex_state = 444},
  [61] = {.lex_state = 451},
  [62] = {.lex_state = 444},
  [63] = {.lex_state = 444},
  [64] = {.lex_state = 452},
  [65] = {.lex_state = 452},
  [66] = {.lex_state = 452},
  [67] = {.lex_state = 452},
  [68] = {.lex_state = 452},
  [69] = {.lex_state = 444},
  [70] = {.lex_state = 453},
  [71] = {.lex_state = 444},
  [72] = {.lex_state = 452},
  [73] = {.lex_state = 444},
  [74] = {.lex_state = 453},
  [75] = {.lex_state = 452},
  [76] = {.lex_state = 451},
  [77] = {.lex_state = 452},
  [78] = {.lex_state = 452},
  [79] = {.lex_state = 452},
  [80] = {.lex_state = 453},
  [81] = {.lex_state = 452},
  [82] = {.lex_state = 452},
  [83] = {.lex_state = 444},
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
  [94] = {.lex_state = 452},
  [95] = {.lex_state = 452},
  [96] = {.lex_state = 452},
  [97] = {.lex_state = 452},
  [98] = {.lex_state = 452},
  [99] = {.lex_state = 452},
  [100] = {.lex_state = 452},
  [101] = {.lex_state = 452},
  [102] = {.lex_state = 452},
  [103] = {.lex_state = 452},
  [104] = {.lex_state = 452},
  [105] = {.lex_state = 452},
  [106] = {.lex_state = 452},
  [107] = {.lex_state = 452},
  [108] = {.lex_state = 452},
  [109] = {.lex_state = 442},
  [110] = {.lex_state = 454},
  [111] = {.lex_state = 455},
  [112] = {.lex_state = 454},
  [113] = {.lex_state = 454},
  [114] = {.lex_state = 455},
  [115] = {.lex_state = 455},
  [116] = {.lex_state = 456},
  [117] = {.lex_state = 457},
  [118] = {.lex_state = 458},
  [119] = {.lex_state = 458},
  [120] = {.lex_state = 459},
  [121] = {.lex_state = 459},
  [122] = {.lex_state = 459},
  [123] = {.lex_state = 458},
  [124] = {.lex_state = 460},
  [125] = {.lex_state = 456},
  [126] = {.lex_state = 459},
  [127] = {.lex_state = 461},
  [128] = {.lex_state = 461},
  [129] = {.lex_state = 461},
  [130] = {.lex_state = 457},
  [131] = {.lex_state = 460},
  [132] = {.lex_state = 456},
  [133] = {.lex_state = 457},
  [134] = {.lex_state = 462},
  [135] = {.lex_state = 478},
  [136] = {.lex_state = 462},
  [137] = {.lex_state = 462},
  [138] = {.lex_state = 463},
  [139] = {.lex_state = 464},
  [140] = {.lex_state = 462},
  [141] = {.lex_state = 462},
  [142] = {.lex_state = 463},
  [143] = {.lex_state = 462},
  [144] = {.lex_state = 462},
  [145] = {.lex_state = 462},
  [146] = {.lex_state = 464},
  [147] = {.lex_state = 462},
  [148] = {.lex_state = 463},
  [149] = {.lex_state = 478},
  [150] = {.lex_state = 463},
  [151] = {.lex_state = 459},
  [152] = {.lex_state = 444},
  [153] = {.lex_state = 464},
  [154] = {.lex_state = 463},
  [155] = {.lex_state = 444},
  [156] = {.lex_state = 444},
  [157] = {.lex_state = 463},
  [158] = {.lex_state = 459},
  [159] = {.lex_state = 464},
  [160] = {.lex_state = 444},
  [161] = {.lex_state = 463},
  [162] = {.lex_state = 464},
  [163] = {.lex_state = 444},
  [164] = {.lex_state = 444},
  [165] = {.lex_state = 444},
  [166] = {.lex_state = 444},
  [167] = {.lex_state = 444},
  [168] = {.lex_state = 444},
  [169] = {.lex_state = 444},
  [170] = {.lex_state = 444},
  [171] = {.lex_state = 444},
  [172] = {.lex_state = 444},
  [173] = {.lex_state = 444},
  [174] = {.lex_state = 444},
  [175] = {.lex_state = 442},
  [176] = {.lex_state = 444},
  [177] = {.lex_state = 444},
  [178] = {.lex_state = 465},
  [179] = {.lex_state = 444},
  [180] = {.lex_state = 442},
  [181] = {.lex_state = 444},
  [182] = {.lex_state = 442},
  [183] = {.lex_state = 444},
  [184] = {.lex_state = 444},
  [185] = {.lex_state = 444},
  [186] = {.lex_state = 444},
  [187] = {.lex_state = 442},
  [188] = {.lex_state = 490},
  [189] = {.lex_state = 465},
  [190] = {.lex_state = 442},
  [191] = {.lex_state = 466},
  [192] = {.lex_state = 467},
  [193] = {.lex_state = 467},
  [194] = {.lex_state = 468},
  [195] = {.lex_state = 466},
  [196] = {.lex_state = 442},
  [197] = {.lex_state = 466},
  [198] = {.lex_state = 490},
  [199] = {.lex_state = 467},
  [200] = {.lex_state = 442},
  [201] = {.lex_state = 490},
  [202] = {.lex_state = 490},
  [203] = {.lex_state = 490},
  [204] = {.lex_state = 490},
  [205] = {.lex_state = 442},
  [206] = {.lex_state = 490},
  [207] = {.lex_state = 442},
  [208] = {.lex_state = 442},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 464},
  [211] = {.lex_state = 450},
  [212] = {.lex_state = 469},
  [213] = {.lex_state = 442},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 469},
  [216] = {.lex_state = 450},
  [217] = {.lex_state = 452},
  [218] = {.lex_state = 469},
  [219] = {.lex_state = 467},
  [220] = {.lex_state = 452},
  [221] = {.lex_state = 450},
  [222] = {.lex_state = 450},
  [223] = {.lex_state = 450},
  [224] = {.lex_state = 470},
  [225] = {.lex_state = 450},
  [226] = {.lex_state = 450},
  [227] = {.lex_state = 450},
  [228] = {.lex_state = 450},
  [229] = {.lex_state = 470},
  [230] = {.lex_state = 450},
  [231] = {.lex_state = 471},
  [232] = {.lex_state = 471},
  [233] = {.lex_state = 459},
  [234] = {.lex_state = 472},
  [235] = {.lex_state = 466},
  [236] = {.lex_state = 450},
  [237] = {.lex_state = 471},
  [238] = {.lex_state = 459},
  [239] = {.lex_state = 472},
  [240] = {.lex_state = 472},
  [241] = {.lex_state = 470},
  [242] = {.lex_state = 450},
  [243] = {.lex_state = 450},
  [244] = {.lex_state = 460},
  [245] = {.lex_state = 450},
  [246] = {.lex_state = 450},
  [247] = {.lex_state = 450},
  [248] = {.lex_state = 459},
  [249] = {.lex_state = 491},
  [250] = {.lex_state = 473},
  [251] = {.lex_state = 450},
  [252] = {.lex_state = 491},
  [253] = {.lex_state = 450},
  [254] = {.lex_state = 450},
  [255] = {.lex_state = 491},
  [256] = {.lex_state = 473},
  [257] = {.lex_state = 473},
  [258] = {.lex_state = 459},
  [259] = {.lex_state = 459},
  [260] = {.lex_state = 450},
  [261] = {.lex_state = 450},
  [262] = {.lex_state = 450},
  [263] = {.lex_state = 459},
  [264] = {.lex_state = 466},
  [265] = {.lex_state = 442},
  [266] = {.lex_state = 459},
  [267] = {.lex_state = 459},
  [268] = {.lex_state = 490},
  [269] = {.lex_state = 466},
  [270] = {.lex_state = 450},
  [271] = {.lex_state = 462},
  [272] = {.lex_state = 469},
  [273] = {.lex_state = 450},
  [274] = {.lex_state = 478},
  [275] = {.lex_state = 490},
  [276] = {.lex_state = 450},
  [277] = {.lex_state = 450},
  [278] = {.lex_state = 450},
  [279] = {.lex_state = 459},
  [280] = {.lex_state = 450},
  [281] = {.lex_state = 490},
  [282] = {.lex_state = 459},
  [283] = {.lex_state = 459},
  [284] = {.lex_state = 466},
  [285] = {.lex_state = 459},
  [286] = {.lex_state = 474},
  [287] = {.lex_state = 450},
  [288] = {.lex_state = 450},
  [289] = {.lex_state = 459},
  [290] = {.lex_state = 466},
  [291] = {.lex_state = 466},
  [292] = {.lex_state = 450},
  [293] = {.lex_state = 450},
  [294] = {.lex_state = 490},
  [295] = {.lex_state = 459},
  [296] = {.lex_state = 475},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 466},
  [299] = {.lex_state = 459},
  [300] = {.lex_state = 459},
  [301] = {.lex_state = 450},
  [302] = {.lex_state = 459},
  [303] = {.lex_state = 450},
  [304] = {.lex_state = 466},
  [305] = {.lex_state = 475},
  [306] = {.lex_state = 459},
  [307] = {.lex_state = 450},
  [308] = {.lex_state = 459},
  [309] = {.lex_state = 490},
  [310] = {.lex_state = 450},
  [311] = {.lex_state = 450},
  [312] = {.lex_state = 459},
  [313] = {.lex_state = 474},
  [314] = {.lex_state = 450},
  [315] = {.lex_state = 490},
  [316] = {.lex_state = 450},
  [317] = {.lex_state = 450},
  [318] = {.lex_state = 475},
  [319] = {.lex_state = 459},
  [320] = {.lex_state = 450},
  [321] = {.lex_state = 450},
  [322] = {.lex_state = 442},
  [323] = {.lex_state = 450},
  [324] = {.lex_state = 490},
  [325] = {.lex_state = 459},
  [326] = {.lex_state = 450},
  [327] = {.lex_state = 490},
  [328] = {.lex_state = 450},
  [329] = {.lex_state = 474},
  [330] = {.lex_state = 450},
  [331] = {.lex_state = 459},
  [332] = {.lex_state = 459},
  [333] = {.lex_state = 459},
  [334] = {.lex_state = 450},
  [335] = {.lex_state = 450},
  [336] = {.lex_state = 490},
  [337] = {.lex_state = 450},
  [338] = {.lex_state = 450},
  [339] = {.lex_state = 450},
  [340] = {.lex_state = 450},
  [341] = {.lex_state = 450},
  [342] = {.lex_state = 450},
  [343] = {.lex_state = 450},
  [344] = {.lex_state = 469},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 490},
  [347] = {.lex_state = 450},
  [348] = {.lex_state = 450},
  [349] = {.lex_state = 450},
  [350] = {.lex_state = 450},
  [351] = {.lex_state = 450},
  [352] = {.lex_state = 450},
  [353] = {.lex_state = 450},
  [354] = {.lex_state = 450},
  [355] = {.lex_state = 450},
  [356] = {.lex_state = 490},
  [357] = {.lex_state = 450},
  [358] = {.lex_state = 490},
  [359] = {.lex_state = 450},
  [360] = {.lex_state = 450},
  [361] = {.lex_state = 450},
  [362] = {.lex_state = 450},
  [363] = {.lex_state = 450},
  [364] = {.lex_state = 450},
  [365] = {.lex_state = 476},
  [366] = {.lex_state = 450},
  [367] = {.lex_state = 450},
  [368] = {.lex_state = 450},
  [369] = {.lex_state = 490},
  [370] = {.lex_state = 450},
  [371] = {.lex_state = 450},
  [372] = {.lex_state = 450},
  [373] = {.lex_state = 450},
  [374] = {.lex_state = 459},
  [375] = {.lex_state = 459},
  [376] = {.lex_state = 450},
  [377] = {.lex_state = 450},
  [378] = {.lex_state = 450},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 450},
  [381] = {.lex_state = 490},
  [382] = {.lex_state = 490},
  [383] = {.lex_state = 490},
  [384] = {.lex_state = 450},
  [385] = {.lex_state = 450},
  [386] = {.lex_state = 450},
  [387] = {.lex_state = 469},
  [388] = {.lex_state = 469},
  [389] = {.lex_state = 459},
  [390] = {.lex_state = 450},
  [391] = {.lex_state = 450},
  [392] = {.lex_state = 450},
  [393] = {.lex_state = 450},
  [394] = {.lex_state = 450},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 490},
  [397] = {.lex_state = 459},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 450},
  [401] = {.lex_state = 450},
  [402] = {.lex_state = 450},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 450},
  [405] = {.lex_state = 450},
  [406] = {.lex_state = 450},
  [407] = {.lex_state = 450},
  [408] = {.lex_state = 459},
  [409] = {.lex_state = 450},
  [410] = {.lex_state = 490},
  [411] = {.lex_state = 450},
  [412] = {.lex_state = 450},
  [413] = {.lex_state = 459},
  [414] = {.lex_state = 450},
  [415] = {.lex_state = 459},
  [416] = {.lex_state = 459},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 490},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 450},
  [422] = {.lex_state = 450},
  [423] = {.lex_state = 490},
  [424] = {.lex_state = 490},
  [425] = {.lex_state = 450},
  [426] = {.lex_state = 450},
  [427] = {.lex_state = 490},
  [428] = {.lex_state = 490},
  [429] = {.lex_state = 450},
  [430] = {.lex_state = 450},
  [431] = {.lex_state = 459},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 450},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 450},
  [436] = {.lex_state = 443},
  [437] = {.lex_state = 450},
  [438] = {.lex_state = 450},
  [439] = {.lex_state = 450},
  [440] = {.lex_state = 469},
  [441] = {.lex_state = 450},
  [442] = {.lex_state = 450},
  [443] = {.lex_state = 450},
  [444] = {.lex_state = 450},
  [445] = {.lex_state = 450},
  [446] = {.lex_state = 450},
  [447] = {.lex_state = 490},
  [448] = {.lex_state = 450},
  [449] = {.lex_state = 450},
  [450] = {.lex_state = 450},
  [451] = {.lex_state = 450},
  [452] = {.lex_state = 450},
  [453] = {.lex_state = 450},
  [454] = {.lex_state = 450},
  [455] = {.lex_state = 490},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 469},
  [459] = {.lex_state = 450},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 450},
  [462] = {.lex_state = 469},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 442},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 450},
  [467] = {.lex_state = 450},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 490},
  [470] = {.lex_state = 490},
  [471] = {.lex_state = 459},
  [472] = {.lex_state = 490},
  [473] = {.lex_state = 130},
  [474] = {.lex_state = 459},
  [475] = {.lex_state = 490},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 443},
  [479] = {.lex_state = 490},
  [480] = {.lex_state = 490},
  [481] = {.lex_state = 442},
  [482] = {.lex_state = 442},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 130},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 443},
  [487] = {.lex_state = 490},
  [488] = {.lex_state = 450},
  [489] = {.lex_state = 450},
  [490] = {.lex_state = 459},
  [491] = {.lex_state = 469},
  [492] = {.lex_state = 490},
  [493] = {.lex_state = 490},
  [494] = {.lex_state = 442},
  [495] = {.lex_state = 130},
  [496] = {.lex_state = 490},
  [497] = {.lex_state = 450},
  [498] = {.lex_state = 459},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 490},
  [501] = {.lex_state = 490},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 490},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 443},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 443},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 442},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 450},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 442},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 442},
  [540] = {.lex_state = 443},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 459},
  [543] = {.lex_state = 443},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 450},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 450},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
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
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 443},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 443},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 442},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 442},
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
  [608] = {.lex_state = 442},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 442},
  [614] = {.lex_state = 442},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 442},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 490},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 442},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 442},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 443},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 442},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 443},
  [640] = {.lex_state = 442},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 444},
  [643] = {.lex_state = 443},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 442},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 490},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 442},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 442},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 490},
  [658] = {.lex_state = 442},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 490},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 490},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 442},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 490},
  [671] = {.lex_state = 490},
  [672] = {.lex_state = 442},
  [673] = {.lex_state = 442},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 442},
  [677] = {.lex_state = 0},
  [678] = {.lex_state = 0},
  [679] = {.lex_state = 442},
  [680] = {.lex_state = 490},
  [681] = {.lex_state = 442},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 443},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 442},
  [688] = {.lex_state = 490},
  [689] = {.lex_state = 442},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 442},
  [692] = {.lex_state = 490},
  [693] = {.lex_state = 442},
  [694] = {.lex_state = 490},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 490},
  [705] = {.lex_state = 443},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 442},
  [712] = {.lex_state = 442},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 490},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 490},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 442},
  [726] = {.lex_state = 442},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 0},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 443},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 0},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 490},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 0},
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
  [753] = {.lex_state = 442},
  [754] = {.lex_state = 442},
  [755] = {.lex_state = 0},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 0},
  [758] = {.lex_state = 0},
  [759] = {.lex_state = 443},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 490},
  [762] = {.lex_state = 0},
  [763] = {.lex_state = 0},
  [764] = {.lex_state = 443},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 0},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 443},
  [769] = {.lex_state = 490},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 443},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 490},
  [778] = {.lex_state = 0},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 443},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 442},
  [784] = {.lex_state = 490},
  [785] = {.lex_state = 0},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 490},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 443},
  [792] = {.lex_state = 490},
  [793] = {.lex_state = 443},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 490},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 0},
  [798] = {.lex_state = 0},
  [799] = {.lex_state = 0},
  [800] = {.lex_state = 0},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 0},
  [803] = {.lex_state = 0},
  [804] = {.lex_state = 443},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 443},
  [807] = {.lex_state = 443},
  [808] = {.lex_state = 443},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 0},
  [811] = {.lex_state = 490},
  [812] = {.lex_state = 0},
  [813] = {.lex_state = 0},
  [814] = {.lex_state = 0},
  [815] = {.lex_state = 0},
  [816] = {.lex_state = 0},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 0},
  [819] = {.lex_state = 0},
  [820] = {.lex_state = 0},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 0},
  [823] = {.lex_state = 490},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 0},
  [826] = {.lex_state = 0},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 0},
  [829] = {.lex_state = 0},
  [830] = {.lex_state = 0},
  [831] = {.lex_state = 0},
  [832] = {.lex_state = 0},
  [833] = {.lex_state = 0},
  [834] = {.lex_state = 0},
  [835] = {.lex_state = 0},
  [836] = {.lex_state = 0},
  [837] = {.lex_state = 0},
  [838] = {.lex_state = 0},
  [839] = {.lex_state = 0},
  [840] = {.lex_state = 490},
  [841] = {.lex_state = 0},
  [842] = {.lex_state = 0},
  [843] = {.lex_state = 0},
  [844] = {.lex_state = 0},
  [845] = {.lex_state = 0},
  [846] = {.lex_state = 0},
  [847] = {.lex_state = 0},
  [848] = {.lex_state = 490},
  [849] = {.lex_state = 490},
  [850] = {.lex_state = 0},
  [851] = {.lex_state = 0},
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
    [aux_sym_CREATE_VERTEX_token1] = ACTIONS(1),
    [aux_sym_CREATE_VERTEX_token2] = ACTIONS(1),
    [aux_sym_CREATE_UNDIRECTED_EDGE_token2] = ACTIONS(1),
    [aux_sym_CREATE_UNDIRECTED_EDGE_token3] = ACTIONS(1),
    [aux_sym_CREATE_UNDIRECTED_EDGE_token4] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEnone_DQUOTE] = ACTIONS(1),
    [aux_sym_DROP_token1] = ACTIONS(1),
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
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_WHERE] = ACTIONS(1),
    [aux_sym_perClauseV2_token1] = ACTIONS(1),
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
    [sym_source_file] = STATE(851),
    [sym_createQuery] = STATE(209),
    [sym_createSignature] = STATE(850),
    [sym_CREATE_VERTEX] = STATE(209),
    [sym_CREATE_UNDIRECTED_EDGE] = STATE(209),
    [sym_CREATE_DIRECTED_EDGE] = STATE(209),
    [sym_CREATE_GRAPH] = STATE(209),
    [sym_DROP] = STATE(209),
    [aux_sym_source_file_repeat1] = STATE(209),
    [aux_sym_createSignature_token1] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [aux_sym_DROP_token1] = ACTIONS(7),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 39,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_typedef_token1,
    ACTIONS(11), 1,
      aux_sym_CREATE_VERTEX_token1,
    ACTIONS(15), 1,
      aux_sym_accumDeclStmt_token1,
    ACTIONS(17), 1,
      aux_sym_accumType_token1,
    ACTIONS(19), 1,
      aux_sym_accumType_token2,
    ACTIONS(21), 1,
      aux_sym_accumType_token3,
    ACTIONS(23), 1,
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
    STATE(3), 1,
      sym_typedefs,
    STATE(6), 1,
      aux_sym_declStmts_repeat1,
    STATE(33), 1,
      aux_sym_typedefs_repeat1,
    STATE(134), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(147), 1,
      sym_declStmts,
    STATE(272), 1,
      sym_name,
    STATE(465), 1,
      sym_accumType,
    STATE(466), 1,
      sym_baseType,
    STATE(646), 1,
      sym_vertexSetName,
    STATE(647), 1,
      sym_gsqlSelectClause,
    STATE(824), 1,
      sym_gsqlSelectBlock,
    STATE(827), 1,
      sym_queryBodyStmt,
    STATE(828), 1,
      sym_queryBodyStmts,
    STATE(829), 1,
      sym_declStmt,
    STATE(830), 1,
      sym_typedef,
    STATE(831), 1,
      sym_queryBody,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(826), 3,
      sym_accumDeclStmt,
      sym_baseDeclStmt,
      sym_fileDeclStmt,
    STATE(825), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
    ACTIONS(13), 7,
      aux_sym_CREATE_UNDIRECTED_EDGE_token2,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
  [131] = 34,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_CREATE_VERTEX_token1,
    ACTIONS(15), 1,
      aux_sym_accumDeclStmt_token1,
    ACTIONS(17), 1,
      aux_sym_accumType_token1,
    ACTIONS(19), 1,
      aux_sym_accumType_token2,
    ACTIONS(21), 1,
      aux_sym_accumType_token3,
    ACTIONS(23), 1,
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
    STATE(6), 1,
      aux_sym_declStmts_repeat1,
    STATE(134), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(143), 1,
      sym_declStmts,
    STATE(272), 1,
      sym_name,
    STATE(465), 1,
      sym_accumType,
    STATE(466), 1,
      sym_baseType,
    STATE(646), 1,
      sym_vertexSetName,
    STATE(647), 1,
      sym_gsqlSelectClause,
    STATE(815), 1,
      sym_queryBodyStmts,
    STATE(824), 1,
      sym_gsqlSelectBlock,
    STATE(827), 1,
      sym_queryBodyStmt,
    STATE(829), 1,
      sym_declStmt,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(826), 3,
      sym_accumDeclStmt,
      sym_baseDeclStmt,
      sym_fileDeclStmt,
    STATE(825), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
    ACTIONS(13), 7,
      aux_sym_CREATE_UNDIRECTED_EDGE_token2,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
  [247] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 5,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PLUS,
    ACTIONS(49), 30,
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
    ACTIONS(55), 5,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PLUS,
    ACTIONS(53), 29,
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
    ACTIONS(11), 1,
      aux_sym_CREATE_VERTEX_token1,
    ACTIONS(15), 1,
      aux_sym_accumDeclStmt_token1,
    ACTIONS(17), 1,
      aux_sym_accumType_token1,
    ACTIONS(19), 1,
      aux_sym_accumType_token2,
    ACTIONS(21), 1,
      aux_sym_accumType_token3,
    ACTIONS(23), 1,
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
    STATE(8), 1,
      aux_sym_declStmts_repeat1,
    STATE(465), 1,
      sym_accumType,
    STATE(466), 1,
      sym_baseType,
    STATE(829), 1,
      sym_declStmt,
    ACTIONS(59), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(826), 3,
      sym_accumDeclStmt,
      sym_baseDeclStmt,
      sym_fileDeclStmt,
    ACTIONS(57), 4,
      aux_sym_queryBodyIfStmt_token1,
      anon_sym__,
      aux_sym_printStmt_token1,
      aux_sym_returnStmt_token1,
    ACTIONS(13), 7,
      aux_sym_CREATE_UNDIRECTED_EDGE_token2,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
  [411] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      aux_sym_integer_token1,
    STATE(7), 1,
      aux_sym_integer_repeat1,
    ACTIONS(63), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(61), 28,
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
  [456] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      aux_sym_CREATE_VERTEX_token1,
    ACTIONS(74), 1,
      aux_sym_accumDeclStmt_token1,
    ACTIONS(77), 1,
      aux_sym_accumType_token1,
    ACTIONS(80), 1,
      aux_sym_accumType_token2,
    ACTIONS(83), 1,
      aux_sym_accumType_token3,
    ACTIONS(86), 1,
      aux_sym_accumType_token4,
    ACTIONS(89), 1,
      aux_sym_accumType_token7,
    ACTIONS(92), 1,
      aux_sym_accumType_token8,
    ACTIONS(95), 1,
      aux_sym_accumType_token9,
    ACTIONS(98), 1,
      aux_sym_accumType_token10,
    ACTIONS(101), 1,
      aux_sym_accumType_token13,
    ACTIONS(104), 1,
      aux_sym_accumType_token14,
    ACTIONS(109), 1,
      aux_sym_fileDeclStmt_token1,
    STATE(8), 1,
      aux_sym_declStmts_repeat1,
    STATE(465), 1,
      sym_accumType,
    STATE(466), 1,
      sym_baseType,
    STATE(829), 1,
      sym_declStmt,
    ACTIONS(112), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(826), 3,
      sym_accumDeclStmt,
      sym_baseDeclStmt,
      sym_fileDeclStmt,
    ACTIONS(107), 4,
      aux_sym_queryBodyIfStmt_token1,
      anon_sym__,
      aux_sym_printStmt_token1,
      aux_sym_returnStmt_token1,
    ACTIONS(71), 7,
      aux_sym_CREATE_UNDIRECTED_EDGE_token2,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
  [535] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_DOT,
    ACTIONS(120), 1,
      aux_sym_integer_token1,
    STATE(7), 1,
      aux_sym_integer_repeat1,
    ACTIONS(116), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(114), 27,
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
    ACTIONS(120), 1,
      aux_sym_integer_token1,
    ACTIONS(126), 1,
      anon_sym_DOT,
    STATE(7), 1,
      aux_sym_integer_repeat1,
    ACTIONS(124), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(122), 27,
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
  [629] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      aux_sym_integer_token1,
    STATE(7), 1,
      aux_sym_integer_repeat1,
    ACTIONS(130), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(128), 27,
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
  [673] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      aux_sym_integer_token1,
    STATE(11), 1,
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
  [717] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(138), 28,
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
  [757] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      aux_sym_integer_token1,
    STATE(7), 1,
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
  [801] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      aux_sym_integer_token1,
    STATE(7), 1,
      aux_sym_integer_repeat1,
    ACTIONS(144), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(142), 27,
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
    ACTIONS(146), 1,
      aux_sym_integer_token1,
    STATE(15), 1,
      aux_sym_integer_repeat1,
    ACTIONS(130), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(128), 27,
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
    ACTIONS(154), 1,
      anon_sym_SQUOTE,
    ACTIONS(151), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(148), 27,
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
    ACTIONS(158), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(156), 27,
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
    ACTIONS(151), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(148), 27,
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
    ACTIONS(162), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(160), 27,
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
    ACTIONS(179), 3,
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
    ACTIONS(184), 3,
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
  [1234] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(186), 27,
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
    STATE(27), 1,
      aux_sym_name_repeat1,
    ACTIONS(194), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(197), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(192), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(190), 21,
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
  [1315] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(30), 1,
      aux_sym_name_repeat1,
    ACTIONS(204), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(206), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(202), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(200), 21,
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
  [1358] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(29), 1,
      aux_sym_name_repeat1,
    ACTIONS(208), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(211), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(192), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(190), 21,
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
  [1401] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(27), 1,
      aux_sym_name_repeat1,
    ACTIONS(218), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(220), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(216), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(214), 21,
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
  [1444] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(29), 1,
      aux_sym_name_repeat1,
    ACTIONS(222), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(224), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(216), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(214), 21,
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
    ACTIONS(226), 1,
      aux_sym_typedef_token1,
    STATE(32), 1,
      aux_sym_typedefs_repeat1,
    STATE(830), 1,
      sym_typedef,
    ACTIONS(231), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(229), 24,
      aux_sym_CREATE_VERTEX_token1,
      aux_sym_CREATE_UNDIRECTED_EDGE_token2,
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
  [1530] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_typedef_token1,
    STATE(32), 1,
      aux_sym_typedefs_repeat1,
    STATE(830), 1,
      sym_typedef,
    ACTIONS(235), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(233), 24,
      aux_sym_CREATE_VERTEX_token1,
      aux_sym_CREATE_UNDIRECTED_EDGE_token2,
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
  [1573] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(31), 1,
      aux_sym_name_repeat1,
    ACTIONS(237), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(239), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(202), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(200), 21,
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
  [1616] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(35), 1,
      aux_sym_name_repeat1,
    ACTIONS(241), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(244), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(192), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(190), 20,
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
  [1658] = 6,
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
    ACTIONS(192), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(190), 20,
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
    STATE(36), 1,
      aux_sym_name_repeat1,
    ACTIONS(253), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(255), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(216), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(214), 20,
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
  [1742] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(37), 1,
      aux_sym_name_repeat1,
    ACTIONS(257), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(259), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(202), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(200), 20,
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
  [1784] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(35), 1,
      aux_sym_name_repeat1,
    ACTIONS(261), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(263), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(216), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(214), 20,
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
    STATE(39), 1,
      aux_sym_name_repeat1,
    ACTIONS(265), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(267), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(202), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(200), 20,
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
  [1868] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(229), 25,
      aux_sym_typedef_token1,
      aux_sym_CREATE_VERTEX_token1,
      aux_sym_CREATE_UNDIRECTED_EDGE_token2,
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
  [1903] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(49), 1,
      aux_sym_name_repeat1,
    ACTIONS(202), 2,
      anon_sym_SLASH,
      anon_sym_PLUS,
    ACTIONS(269), 4,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(200), 19,
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
  [1941] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
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
    ACTIONS(271), 1,
      aux_sym_CREATE_VERTEX_token1,
    ACTIONS(275), 1,
      aux_sym_accumType_token2,
    ACTIONS(277), 1,
      aux_sym_accumType_token3,
    ACTIONS(279), 1,
      aux_sym_accumType_token4,
    ACTIONS(281), 1,
      aux_sym_accumType_token5,
    ACTIONS(283), 1,
      anon_sym__,
    STATE(413), 1,
      sym_name,
    STATE(601), 1,
      sym_type,
    ACTIONS(285), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(498), 3,
      sym_accumType,
      sym_tupleType,
      sym_baseType,
    ACTIONS(273), 6,
      aux_sym_CREATE_UNDIRECTED_EDGE_token2,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
  [2007] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(44), 1,
      aux_sym_name_repeat1,
    ACTIONS(192), 2,
      anon_sym_SLASH,
      anon_sym_PLUS,
    ACTIONS(287), 4,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(190), 19,
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
  [2045] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
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
    ACTIONS(271), 1,
      aux_sym_CREATE_VERTEX_token1,
    ACTIONS(275), 1,
      aux_sym_accumType_token2,
    ACTIONS(277), 1,
      aux_sym_accumType_token3,
    ACTIONS(279), 1,
      aux_sym_accumType_token4,
    ACTIONS(281), 1,
      aux_sym_accumType_token5,
    ACTIONS(283), 1,
      anon_sym__,
    STATE(413), 1,
      sym_name,
    STATE(554), 1,
      sym_type,
    ACTIONS(285), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(498), 3,
      sym_accumType,
      sym_tupleType,
      sym_baseType,
    ACTIONS(273), 6,
      aux_sym_CREATE_UNDIRECTED_EDGE_token2,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
  [2111] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_CREATE_VERTEX_token1,
    ACTIONS(17), 1,
      aux_sym_accumType_token1,
    ACTIONS(19), 1,
      aux_sym_accumType_token2,
    ACTIONS(21), 1,
      aux_sym_accumType_token3,
    ACTIONS(23), 1,
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
    ACTIONS(281), 1,
      aux_sym_accumType_token5,
    ACTIONS(290), 1,
      anon_sym__,
    STATE(413), 1,
      sym_name,
    STATE(807), 1,
      sym_type,
    ACTIONS(292), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(498), 3,
      sym_accumType,
      sym_tupleType,
      sym_baseType,
    ACTIONS(13), 6,
      aux_sym_CREATE_UNDIRECTED_EDGE_token2,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
  [2177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(107), 24,
      aux_sym_CREATE_VERTEX_token1,
      aux_sym_CREATE_UNDIRECTED_EDGE_token2,
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
  [2211] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_CREATE_VERTEX_token1,
    ACTIONS(17), 1,
      aux_sym_accumType_token1,
    ACTIONS(19), 1,
      aux_sym_accumType_token2,
    ACTIONS(21), 1,
      aux_sym_accumType_token3,
    ACTIONS(23), 1,
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
    ACTIONS(41), 1,
      anon_sym__,
    ACTIONS(281), 1,
      aux_sym_accumType_token5,
    STATE(413), 1,
      sym_name,
    STATE(644), 1,
      sym_type,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(498), 3,
      sym_accumType,
      sym_tupleType,
      sym_baseType,
    ACTIONS(13), 6,
      aux_sym_CREATE_UNDIRECTED_EDGE_token2,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
  [2277] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(44), 1,
      aux_sym_name_repeat1,
    ACTIONS(216), 2,
      anon_sym_SLASH,
      anon_sym_PLUS,
    ACTIONS(294), 4,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(214), 19,
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
  [2315] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_CREATE_VERTEX_token1,
    ACTIONS(17), 1,
      aux_sym_accumType_token1,
    ACTIONS(19), 1,
      aux_sym_accumType_token2,
    ACTIONS(21), 1,
      aux_sym_accumType_token3,
    ACTIONS(23), 1,
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
    ACTIONS(290), 1,
      anon_sym__,
    STATE(413), 1,
      sym_name,
    ACTIONS(292), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(768), 3,
      sym_accumType,
      sym_tupleType,
      sym_baseType,
    ACTIONS(13), 7,
      aux_sym_CREATE_UNDIRECTED_EDGE_token2,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
  [2376] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(304), 1,
      anon_sym_AT_AT,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(308), 1,
      anon_sym__,
    ACTIONS(310), 1,
      aux_sym_integer_token1,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(155), 1,
      sym_name,
    STATE(156), 1,
      sym_expr,
    STATE(381), 1,
      sym_printExpr,
    STATE(382), 1,
      sym_vExprSet,
    STATE(480), 1,
      sym_tableName,
    ACTIONS(298), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(312), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_integer,
      sym_real,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [2442] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_SLASH,
    ACTIONS(322), 1,
      aux_sym_condition_token1,
    ACTIONS(324), 1,
      aux_sym_condition_token2,
    ACTIONS(326), 1,
      aux_sym_condition_token3,
    STATE(100), 1,
      sym_mathOperator,
    STATE(102), 1,
      sym_comparisonOperator,
    ACTIONS(316), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(314), 4,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_printStmt_token3,
    ACTIONS(328), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(318), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [2490] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(304), 1,
      anon_sym_AT_AT,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(308), 1,
      anon_sym__,
    ACTIONS(310), 1,
      aux_sym_integer_token1,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(155), 1,
      sym_name,
    STATE(156), 1,
      sym_expr,
    STATE(382), 1,
      sym_vExprSet,
    STATE(480), 1,
      sym_tableName,
    STATE(493), 1,
      sym_printExpr,
    ACTIONS(298), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(312), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_integer,
      sym_real,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [2556] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_SLASH,
    ACTIONS(326), 1,
      aux_sym_condition_token3,
    ACTIONS(330), 1,
      aux_sym_condition_token1,
    ACTIONS(332), 1,
      aux_sym_condition_token2,
    STATE(103), 1,
      sym_mathOperator,
    STATE(106), 1,
      sym_comparisonOperator,
    ACTIONS(316), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(314), 4,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_perClauseV2_token1,
    ACTIONS(328), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(318), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [2604] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_SLASH,
    STATE(100), 1,
      sym_mathOperator,
    ACTIONS(336), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(338), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(334), 11,
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
  [2641] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(57), 1,
      aux_sym_name_repeat1,
    ACTIONS(344), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(346), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(200), 18,
      aux_sym_CREATE_VERTEX_token1,
      aux_sym_CREATE_UNDIRECTED_EDGE_token2,
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
  [2676] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(61), 1,
      aux_sym_name_repeat1,
    ACTIONS(348), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(350), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(214), 18,
      aux_sym_CREATE_VERTEX_token1,
      aux_sym_CREATE_UNDIRECTED_EDGE_token2,
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
  [2711] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_DOT,
    ACTIONS(179), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(176), 19,
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
  [2744] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_DOT,
    ACTIONS(179), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(176), 19,
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
  [2777] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_SLASH,
    ACTIONS(326), 1,
      aux_sym_condition_token3,
    ACTIONS(356), 1,
      aux_sym_condition_token1,
    ACTIONS(358), 1,
      aux_sym_condition_token2,
    STATE(89), 1,
      sym_comparisonOperator,
    STATE(91), 1,
      sym_mathOperator,
    ACTIONS(316), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(314), 3,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
    ACTIONS(328), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(318), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [2824] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(61), 1,
      aux_sym_name_repeat1,
    ACTIONS(360), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(363), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(190), 18,
      aux_sym_CREATE_VERTEX_token1,
      aux_sym_CREATE_UNDIRECTED_EDGE_token2,
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
  [2859] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_SLASH,
    ACTIONS(326), 1,
      aux_sym_condition_token3,
    ACTIONS(366), 1,
      aux_sym_condition_token1,
    ACTIONS(368), 1,
      aux_sym_condition_token2,
    STATE(86), 1,
      sym_comparisonOperator,
    STATE(87), 1,
      sym_mathOperator,
    ACTIONS(316), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(314), 3,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_queryBodyIfStmt_token2,
    ACTIONS(328), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(318), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [2906] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_SLASH,
    STATE(103), 1,
      sym_mathOperator,
    ACTIONS(336), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(338), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(334), 11,
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
  [2943] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(310), 1,
      aux_sym_integer_token1,
    ACTIONS(370), 1,
      anon_sym_AT_AT,
    ACTIONS(372), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(54), 1,
      sym_expr,
    STATE(59), 1,
      sym_name,
    STATE(499), 1,
      sym_condition,
    ACTIONS(298), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(374), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_integer,
      sym_real,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [3003] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(310), 1,
      aux_sym_integer_token1,
    ACTIONS(376), 1,
      anon_sym_AT_AT,
    ACTIONS(378), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(52), 1,
      sym_expr,
    STATE(58), 1,
      sym_name,
    STATE(470), 1,
      sym_condition,
    ACTIONS(298), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(380), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_integer,
      sym_real,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [3063] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(310), 1,
      aux_sym_integer_token1,
    ACTIONS(376), 1,
      anon_sym_AT_AT,
    ACTIONS(378), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(52), 1,
      sym_expr,
    STATE(58), 1,
      sym_name,
    STATE(455), 1,
      sym_condition,
    ACTIONS(298), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(380), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_integer,
      sym_real,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [3123] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(310), 1,
      aux_sym_integer_token1,
    ACTIONS(382), 1,
      anon_sym_AT_AT,
    ACTIONS(384), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(62), 1,
      sym_expr,
    STATE(73), 1,
      sym_name,
    STATE(564), 1,
      sym_condition,
    ACTIONS(298), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(386), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_integer,
      sym_real,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [3183] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(310), 1,
      aux_sym_integer_token1,
    ACTIONS(382), 1,
      anon_sym_AT_AT,
    ACTIONS(384), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(62), 1,
      sym_expr,
    STATE(73), 1,
      sym_name,
    STATE(507), 1,
      sym_condition,
    ACTIONS(298), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(386), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_integer,
      sym_real,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [3243] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_SLASH,
    STATE(87), 1,
      sym_mathOperator,
    ACTIONS(336), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(338), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(334), 10,
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
  [3279] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_SLASH,
    STATE(70), 1,
      aux_sym_name_repeat1,
    ACTIONS(388), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(391), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(190), 16,
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
  [3315] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_SLASH,
    STATE(91), 1,
      sym_mathOperator,
    ACTIONS(336), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(338), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(334), 10,
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
  [3351] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(310), 1,
      aux_sym_integer_token1,
    ACTIONS(382), 1,
      anon_sym_AT_AT,
    ACTIONS(384), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(62), 1,
      sym_expr,
    STATE(73), 1,
      sym_name,
    STATE(512), 1,
      sym_condition,
    ACTIONS(298), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(386), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_integer,
      sym_real,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [3411] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_DOT,
    ACTIONS(179), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(176), 18,
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
  [3443] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_SLASH,
    STATE(80), 1,
      aux_sym_name_repeat1,
    ACTIONS(396), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(398), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(200), 16,
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
  [3479] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(310), 1,
      aux_sym_integer_token1,
    ACTIONS(400), 1,
      anon_sym_AT_AT,
    ACTIONS(402), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(60), 1,
      sym_expr,
    STATE(83), 1,
      sym_name,
    STATE(574), 1,
      sym_condition,
    ACTIONS(298), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(404), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_integer,
      sym_real,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [3539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(406), 20,
      anon_sym_EQ,
      aux_sym_CREATE_VERTEX_token1,
      aux_sym_CREATE_UNDIRECTED_EDGE_token2,
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
  [3569] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(310), 1,
      aux_sym_integer_token1,
    ACTIONS(400), 1,
      anon_sym_AT_AT,
    ACTIONS(402), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(60), 1,
      sym_expr,
    STATE(83), 1,
      sym_name,
    STATE(520), 1,
      sym_condition,
    ACTIONS(298), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(404), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_integer,
      sym_real,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [3629] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(310), 1,
      aux_sym_integer_token1,
    ACTIONS(410), 1,
      anon_sym_AT_AT,
    ACTIONS(412), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(172), 1,
      sym_name,
    STATE(181), 1,
      sym_expr,
    STATE(651), 1,
      sym_vSetProj,
    ACTIONS(298), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(414), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_integer,
      sym_real,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [3689] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(310), 1,
      aux_sym_integer_token1,
    ACTIONS(376), 1,
      anon_sym_AT_AT,
    ACTIONS(378), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(52), 1,
      sym_expr,
    STATE(58), 1,
      sym_name,
    STATE(469), 1,
      sym_condition,
    ACTIONS(298), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(380), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_integer,
      sym_real,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [3749] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_SLASH,
    STATE(70), 1,
      aux_sym_name_repeat1,
    ACTIONS(416), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(418), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(214), 16,
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
  [3785] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(310), 1,
      aux_sym_integer_token1,
    ACTIONS(382), 1,
      anon_sym_AT_AT,
    ACTIONS(384), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(62), 1,
      sym_expr,
    STATE(73), 1,
      sym_name,
    STATE(587), 1,
      sym_condition,
    ACTIONS(298), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(386), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_integer,
      sym_real,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [3845] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym__,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(310), 1,
      aux_sym_integer_token1,
    ACTIONS(420), 1,
      anon_sym_AT_AT,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(175), 1,
      sym_expr,
    STATE(182), 1,
      sym_name,
    STATE(803), 1,
      sym_argList,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(298), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(22), 2,
      sym_integer,
      sym_real,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [3905] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_DOT,
    ACTIONS(179), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(176), 18,
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
  [3937] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(310), 1,
      aux_sym_integer_token1,
    ACTIONS(370), 1,
      anon_sym_AT_AT,
    ACTIONS(372), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(54), 1,
      sym_expr,
    STATE(59), 1,
      sym_name,
    STATE(463), 1,
      sym_condition,
    ACTIONS(298), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(374), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_integer,
      sym_real,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [3997] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(310), 1,
      aux_sym_integer_token1,
    ACTIONS(410), 1,
      anon_sym_AT_AT,
    ACTIONS(412), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(172), 1,
      sym_name,
    STATE(181), 1,
      sym_expr,
    STATE(545), 1,
      sym_vSetProj,
    ACTIONS(298), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(414), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_integer,
      sym_real,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [4057] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(310), 1,
      aux_sym_integer_token1,
    ACTIONS(424), 1,
      anon_sym_AT_AT,
    ACTIONS(426), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(173), 1,
      sym_name,
    STATE(176), 1,
      sym_expr,
    ACTIONS(298), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(428), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_integer,
      sym_real,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [4114] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(310), 1,
      aux_sym_integer_token1,
    ACTIONS(382), 1,
      anon_sym_AT_AT,
    ACTIONS(384), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(69), 1,
      sym_expr,
    STATE(73), 1,
      sym_name,
    ACTIONS(298), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(386), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_integer,
      sym_real,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [4171] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(310), 1,
      aux_sym_integer_token1,
    ACTIONS(410), 1,
      anon_sym_AT_AT,
    ACTIONS(412), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(169), 1,
      sym_expr,
    STATE(172), 1,
      sym_name,
    ACTIONS(298), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(414), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_integer,
      sym_real,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [4228] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(310), 1,
      aux_sym_integer_token1,
    ACTIONS(430), 1,
      anon_sym_AT_AT,
    ACTIONS(432), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(179), 1,
      sym_expr,
    STATE(186), 1,
      sym_name,
    ACTIONS(298), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(434), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_integer,
      sym_real,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [4285] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym__,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(310), 1,
      aux_sym_integer_token1,
    ACTIONS(420), 1,
      anon_sym_AT_AT,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(182), 1,
      sym_name,
    STATE(190), 1,
      sym_expr,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(298), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(22), 2,
      sym_integer,
      sym_real,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [4342] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(310), 1,
      aux_sym_integer_token1,
    ACTIONS(400), 1,
      anon_sym_AT_AT,
    ACTIONS(402), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(71), 1,
      sym_expr,
    STATE(83), 1,
      sym_name,
    ACTIONS(298), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(404), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_integer,
      sym_real,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [4399] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(310), 1,
      aux_sym_integer_token1,
    ACTIONS(436), 1,
      anon_sym_AT_AT,
    ACTIONS(438), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(174), 1,
      sym_name,
    STATE(185), 1,
      sym_expr,
    ACTIONS(298), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(440), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_integer,
      sym_real,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [4456] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(310), 1,
      aux_sym_integer_token1,
    ACTIONS(436), 1,
      anon_sym_AT_AT,
    ACTIONS(438), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(174), 1,
      sym_name,
    STATE(184), 1,
      sym_expr,
    ACTIONS(298), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(440), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_integer,
      sym_real,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [4513] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(304), 1,
      anon_sym_AT_AT,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(308), 1,
      anon_sym__,
    ACTIONS(310), 1,
      aux_sym_integer_token1,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(152), 1,
      sym_name,
    STATE(160), 1,
      sym_expr,
    ACTIONS(298), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(312), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_integer,
      sym_real,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [4570] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(310), 1,
      aux_sym_integer_token1,
    ACTIONS(430), 1,
      anon_sym_AT_AT,
    ACTIONS(432), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(171), 1,
      sym_expr,
    STATE(186), 1,
      sym_name,
    ACTIONS(298), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(434), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_integer,
      sym_real,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [4627] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym__,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(310), 1,
      aux_sym_integer_token1,
    ACTIONS(420), 1,
      anon_sym_AT_AT,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(182), 1,
      sym_name,
    STATE(208), 1,
      sym_expr,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(298), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(22), 2,
      sym_integer,
      sym_real,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [4684] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(310), 1,
      aux_sym_integer_token1,
    ACTIONS(424), 1,
      anon_sym_AT_AT,
    ACTIONS(426), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(173), 1,
      sym_name,
    STATE(177), 1,
      sym_expr,
    ACTIONS(298), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(428), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_integer,
      sym_real,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [4741] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym__,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(310), 1,
      aux_sym_integer_token1,
    ACTIONS(420), 1,
      anon_sym_AT_AT,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(180), 1,
      sym_expr,
    STATE(182), 1,
      sym_name,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(298), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(22), 2,
      sym_integer,
      sym_real,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [4798] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(310), 1,
      aux_sym_integer_token1,
    ACTIONS(436), 1,
      anon_sym_AT_AT,
    ACTIONS(438), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(170), 1,
      sym_expr,
    STATE(174), 1,
      sym_name,
    ACTIONS(298), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(440), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_integer,
      sym_real,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [4855] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(310), 1,
      aux_sym_integer_token1,
    ACTIONS(376), 1,
      anon_sym_AT_AT,
    ACTIONS(378), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(55), 1,
      sym_expr,
    STATE(58), 1,
      sym_name,
    ACTIONS(298), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(380), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_integer,
      sym_real,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [4912] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym__,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(310), 1,
      aux_sym_integer_token1,
    ACTIONS(420), 1,
      anon_sym_AT_AT,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(182), 1,
      sym_name,
    STATE(200), 1,
      sym_expr,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(298), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(22), 2,
      sym_integer,
      sym_real,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [4969] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(310), 1,
      aux_sym_integer_token1,
    ACTIONS(442), 1,
      anon_sym_AT_AT,
    ACTIONS(444), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(163), 1,
      sym_expr,
    STATE(165), 1,
      sym_name,
    ACTIONS(298), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(446), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_integer,
      sym_real,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [5026] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(310), 1,
      aux_sym_integer_token1,
    ACTIONS(370), 1,
      anon_sym_AT_AT,
    ACTIONS(372), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(59), 1,
      sym_name,
    STATE(63), 1,
      sym_expr,
    ACTIONS(298), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(374), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_integer,
      sym_real,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [5083] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym__,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(310), 1,
      aux_sym_integer_token1,
    ACTIONS(420), 1,
      anon_sym_AT_AT,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(182), 1,
      sym_name,
    STATE(213), 1,
      sym_expr,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(298), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(22), 2,
      sym_integer,
      sym_real,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [5140] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(310), 1,
      aux_sym_integer_token1,
    ACTIONS(442), 1,
      anon_sym_AT_AT,
    ACTIONS(444), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(165), 1,
      sym_name,
    STATE(166), 1,
      sym_expr,
    ACTIONS(298), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(446), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_integer,
      sym_real,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [5197] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(310), 1,
      aux_sym_integer_token1,
    ACTIONS(448), 1,
      anon_sym_AT_AT,
    ACTIONS(450), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(167), 1,
      sym_expr,
    STATE(168), 1,
      sym_name,
    ACTIONS(298), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(452), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_integer,
      sym_real,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [5254] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(310), 1,
      aux_sym_integer_token1,
    ACTIONS(448), 1,
      anon_sym_AT_AT,
    ACTIONS(450), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(164), 1,
      sym_expr,
    STATE(168), 1,
      sym_name,
    ACTIONS(298), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(452), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_integer,
      sym_real,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [5311] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(310), 1,
      aux_sym_integer_token1,
    ACTIONS(436), 1,
      anon_sym_AT_AT,
    ACTIONS(438), 1,
      anon_sym__,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(24), 1,
      sym_globalAccumName,
    STATE(174), 1,
      sym_name,
    STATE(183), 1,
      sym_expr,
    ACTIONS(298), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    ACTIONS(440), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(22), 2,
      sym_integer,
      sym_real,
    STATE(23), 2,
      sym_constant,
      sym_setBagExpr,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [5368] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_CREATE_VERTEX_token1,
    ACTIONS(17), 1,
      aux_sym_accumType_token1,
    ACTIONS(19), 1,
      aux_sym_accumType_token2,
    ACTIONS(21), 1,
      aux_sym_accumType_token3,
    ACTIONS(23), 1,
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
    STATE(755), 2,
      sym_accumType,
      sym_baseType,
    ACTIONS(13), 7,
      aux_sym_CREATE_UNDIRECTED_EDGE_token2,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
  [5418] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_SLASH,
    STATE(112), 1,
      aux_sym_name_repeat1,
    ACTIONS(454), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(456), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(200), 14,
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
  [5452] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_SLASH,
    STATE(114), 1,
      aux_sym_name_repeat1,
    ACTIONS(458), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(460), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(200), 14,
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
  [5486] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_SLASH,
    STATE(113), 1,
      aux_sym_name_repeat1,
    ACTIONS(462), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(464), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(214), 14,
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
  [5520] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_SLASH,
    STATE(113), 1,
      aux_sym_name_repeat1,
    ACTIONS(466), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(469), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(190), 14,
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
  [5554] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_SLASH,
    STATE(115), 1,
      aux_sym_name_repeat1,
    ACTIONS(472), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(474), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(214), 14,
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
  [5588] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_SLASH,
    STATE(115), 1,
      aux_sym_name_repeat1,
    ACTIONS(476), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(479), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(190), 14,
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
  [5622] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_SLASH,
    STATE(125), 1,
      aux_sym_name_repeat1,
    ACTIONS(482), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(484), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(200), 13,
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
  [5655] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_SLASH,
    STATE(117), 1,
      aux_sym_name_repeat1,
    ACTIONS(486), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(489), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(190), 13,
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
  [5688] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_SLASH,
    ACTIONS(494), 1,
      aux_sym_name_token2,
    STATE(123), 1,
      aux_sym_name_repeat1,
    ACTIONS(492), 3,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
    ACTIONS(214), 13,
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
  [5721] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_SLASH,
    ACTIONS(498), 1,
      aux_sym_name_token2,
    STATE(118), 1,
      aux_sym_name_repeat1,
    ACTIONS(496), 3,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
    ACTIONS(200), 13,
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
  [5754] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_CREATE_VERTEX_token1,
    ACTIONS(19), 1,
      aux_sym_accumType_token2,
    ACTIONS(21), 1,
      aux_sym_accumType_token3,
    ACTIONS(23), 1,
      aux_sym_accumType_token4,
    ACTIONS(500), 1,
      anon_sym_RPAREN,
    ACTIONS(502), 1,
      anon_sym_LT,
    ACTIONS(506), 1,
      anon_sym_FILE,
    STATE(406), 1,
      sym_parameterType,
    STATE(553), 1,
      sym_baseType,
    STATE(812), 1,
      sym_parameterList,
    ACTIONS(504), 2,
      anon_sym_SET,
      anon_sym_BAG,
    ACTIONS(13), 7,
      aux_sym_CREATE_UNDIRECTED_EDGE_token2,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
  [5801] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_CREATE_VERTEX_token1,
    ACTIONS(19), 1,
      aux_sym_accumType_token2,
    ACTIONS(21), 1,
      aux_sym_accumType_token3,
    ACTIONS(23), 1,
      aux_sym_accumType_token4,
    ACTIONS(502), 1,
      anon_sym_LT,
    ACTIONS(506), 1,
      anon_sym_FILE,
    ACTIONS(508), 1,
      anon_sym_RPAREN,
    STATE(406), 1,
      sym_parameterType,
    STATE(553), 1,
      sym_baseType,
    STATE(724), 1,
      sym_parameterList,
    ACTIONS(504), 2,
      anon_sym_SET,
      anon_sym_BAG,
    ACTIONS(13), 7,
      aux_sym_CREATE_UNDIRECTED_EDGE_token2,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
  [5848] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_CREATE_VERTEX_token1,
    ACTIONS(19), 1,
      aux_sym_accumType_token2,
    ACTIONS(21), 1,
      aux_sym_accumType_token3,
    ACTIONS(23), 1,
      aux_sym_accumType_token4,
    ACTIONS(502), 1,
      anon_sym_LT,
    ACTIONS(506), 1,
      anon_sym_FILE,
    ACTIONS(510), 1,
      anon_sym_RPAREN,
    STATE(406), 1,
      sym_parameterType,
    STATE(553), 1,
      sym_baseType,
    STATE(778), 1,
      sym_parameterList,
    ACTIONS(504), 2,
      anon_sym_SET,
      anon_sym_BAG,
    ACTIONS(13), 7,
      aux_sym_CREATE_UNDIRECTED_EDGE_token2,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
  [5895] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_SLASH,
    ACTIONS(515), 1,
      aux_sym_name_token2,
    STATE(123), 1,
      aux_sym_name_repeat1,
    ACTIONS(512), 3,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
    ACTIONS(190), 13,
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
  [5928] = 14,
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
    STATE(131), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(272), 1,
      sym_name,
    STATE(646), 1,
      sym_vertexSetName,
    STATE(647), 1,
      sym_gsqlSelectClause,
    STATE(756), 1,
      sym_queryBodyStmt,
    STATE(824), 1,
      sym_gsqlSelectBlock,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(518), 2,
      aux_sym_queryBodyIfStmt_token3,
      aux_sym_queryBodyIfStmt_token4,
    STATE(825), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [5977] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_SLASH,
    STATE(132), 1,
      aux_sym_name_repeat1,
    ACTIONS(520), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(522), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(214), 13,
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
  [6010] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_CREATE_VERTEX_token1,
    ACTIONS(19), 1,
      aux_sym_accumType_token2,
    ACTIONS(21), 1,
      aux_sym_accumType_token3,
    ACTIONS(23), 1,
      aux_sym_accumType_token4,
    ACTIONS(502), 1,
      anon_sym_LT,
    ACTIONS(506), 1,
      anon_sym_FILE,
    ACTIONS(524), 1,
      anon_sym_RPAREN,
    STATE(406), 1,
      sym_parameterType,
    STATE(553), 1,
      sym_baseType,
    STATE(796), 1,
      sym_parameterList,
    ACTIONS(504), 2,
      anon_sym_SET,
      anon_sym_BAG,
    ACTIONS(13), 7,
      aux_sym_CREATE_UNDIRECTED_EDGE_token2,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
  [6057] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_SLASH,
    STATE(128), 1,
      aux_sym_name_repeat1,
    ACTIONS(526), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(528), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(214), 13,
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
  [6090] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_SLASH,
    STATE(128), 1,
      aux_sym_name_repeat1,
    ACTIONS(530), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(533), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(190), 13,
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
  [6123] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_SLASH,
    STATE(127), 1,
      aux_sym_name_repeat1,
    ACTIONS(536), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(538), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(200), 13,
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
  [6156] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_SLASH,
    STATE(133), 1,
      aux_sym_name_repeat1,
    ACTIONS(540), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(542), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(200), 13,
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
  [6189] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(549), 1,
      anon_sym__,
    ACTIONS(552), 1,
      aux_sym_printStmt_token1,
    ACTIONS(555), 1,
      aux_sym_returnStmt_token1,
    STATE(131), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(272), 1,
      sym_name,
    STATE(646), 1,
      sym_vertexSetName,
    STATE(647), 1,
      sym_gsqlSelectClause,
    STATE(756), 1,
      sym_queryBodyStmt,
    STATE(824), 1,
      sym_gsqlSelectBlock,
    ACTIONS(547), 2,
      aux_sym_queryBodyIfStmt_token3,
      aux_sym_queryBodyIfStmt_token4,
    ACTIONS(558), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(825), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [6238] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_SLASH,
    STATE(132), 1,
      aux_sym_name_repeat1,
    ACTIONS(561), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(564), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(190), 13,
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
  [6271] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_SLASH,
    STATE(117), 1,
      aux_sym_name_repeat1,
    ACTIONS(567), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(569), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(214), 13,
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
  [6304] = 14,
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
    ACTIONS(518), 1,
      anon_sym_RBRACE,
    STATE(141), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(272), 1,
      sym_name,
    STATE(646), 1,
      sym_vertexSetName,
    STATE(647), 1,
      sym_gsqlSelectClause,
    STATE(824), 1,
      sym_gsqlSelectBlock,
    STATE(827), 1,
      sym_queryBodyStmt,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(825), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [6352] = 14,
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
    ACTIONS(518), 1,
      aux_sym_queryBodyIfStmt_token4,
    STATE(149), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(272), 1,
      sym_name,
    STATE(646), 1,
      sym_vertexSetName,
    STATE(647), 1,
      sym_gsqlSelectClause,
    STATE(770), 1,
      sym_queryBodyStmt,
    STATE(824), 1,
      sym_gsqlSelectBlock,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(825), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [6400] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym__,
    ACTIONS(43), 1,
      aux_sym_printStmt_token1,
    ACTIONS(45), 1,
      aux_sym_returnStmt_token1,
    ACTIONS(571), 1,
      aux_sym_queryBodyIfStmt_token1,
    STATE(135), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(272), 1,
      sym_name,
    STATE(646), 1,
      sym_vertexSetName,
    STATE(647), 1,
      sym_gsqlSelectClause,
    STATE(746), 1,
      sym_queryBodyStmts,
    STATE(770), 1,
      sym_queryBodyStmt,
    STATE(824), 1,
      sym_gsqlSelectBlock,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(825), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [6448] = 14,
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
    STATE(272), 1,
      sym_name,
    STATE(514), 1,
      sym_queryBodyStmts,
    STATE(646), 1,
      sym_vertexSetName,
    STATE(647), 1,
      sym_gsqlSelectClause,
    STATE(756), 1,
      sym_queryBodyStmt,
    STATE(824), 1,
      sym_gsqlSelectBlock,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(825), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [6496] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_CREATE_VERTEX_token1,
    ACTIONS(19), 1,
      aux_sym_accumType_token2,
    ACTIONS(21), 1,
      aux_sym_accumType_token3,
    ACTIONS(23), 1,
      aux_sym_accumType_token4,
    ACTIONS(41), 1,
      anon_sym__,
    ACTIONS(573), 1,
      aux_sym_accumType_token5,
    STATE(413), 1,
      sym_name,
    STATE(805), 1,
      sym_elementType,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(639), 2,
      sym_tupleType,
      sym_baseType,
    ACTIONS(13), 6,
      aux_sym_CREATE_UNDIRECTED_EDGE_token2,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
  [6540] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_LPAREN,
    ACTIONS(577), 1,
      anon_sym_LT,
    ACTIONS(579), 1,
      anon_sym_AT_AT,
    ACTIONS(581), 1,
      anon_sym__,
    ACTIONS(583), 1,
      aux_sym_seed_token1,
    ACTIONS(585), 1,
      anon_sym_COLON,
    STATE(478), 1,
      sym_name,
    STATE(509), 1,
      sym_edgeSetType,
    STATE(581), 1,
      sym_atomicEdgeType,
    STATE(626), 1,
      sym_stepEdgeTypes,
    STATE(663), 1,
      sym_atomicEdgePattern,
    STATE(742), 1,
      sym_stepEdgeSet,
    STATE(743), 1,
      sym_pathEdgePattern,
    ACTIONS(292), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(486), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_edgeType,
  [6592] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym__,
    ACTIONS(43), 1,
      aux_sym_printStmt_token1,
    ACTIONS(45), 1,
      aux_sym_returnStmt_token1,
    ACTIONS(571), 1,
      aux_sym_queryBodyIfStmt_token1,
    STATE(135), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(272), 1,
      sym_name,
    STATE(646), 1,
      sym_vertexSetName,
    STATE(647), 1,
      sym_gsqlSelectClause,
    STATE(732), 1,
      sym_queryBodyStmts,
    STATE(770), 1,
      sym_queryBodyStmt,
    STATE(824), 1,
      sym_gsqlSelectBlock,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(825), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [6640] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(547), 1,
      anon_sym_RBRACE,
    ACTIONS(549), 1,
      anon_sym__,
    ACTIONS(552), 1,
      aux_sym_printStmt_token1,
    ACTIONS(555), 1,
      aux_sym_returnStmt_token1,
    STATE(141), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(272), 1,
      sym_name,
    STATE(646), 1,
      sym_vertexSetName,
    STATE(647), 1,
      sym_gsqlSelectClause,
    STATE(824), 1,
      sym_gsqlSelectBlock,
    STATE(827), 1,
      sym_queryBodyStmt,
    ACTIONS(558), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(825), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [6688] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_CREATE_VERTEX_token1,
    ACTIONS(19), 1,
      aux_sym_accumType_token2,
    ACTIONS(21), 1,
      aux_sym_accumType_token3,
    ACTIONS(23), 1,
      aux_sym_accumType_token4,
    ACTIONS(290), 1,
      anon_sym__,
    ACTIONS(573), 1,
      aux_sym_accumType_token5,
    STATE(413), 1,
      sym_name,
    STATE(807), 1,
      sym_elementType,
    ACTIONS(292), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(639), 2,
      sym_tupleType,
      sym_baseType,
    ACTIONS(13), 6,
      aux_sym_CREATE_UNDIRECTED_EDGE_token2,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
  [6732] = 14,
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
    STATE(134), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(272), 1,
      sym_name,
    STATE(646), 1,
      sym_vertexSetName,
    STATE(647), 1,
      sym_gsqlSelectClause,
    STATE(801), 1,
      sym_queryBodyStmts,
    STATE(824), 1,
      sym_gsqlSelectBlock,
    STATE(827), 1,
      sym_queryBodyStmt,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(825), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [6780] = 14,
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
    STATE(272), 1,
      sym_name,
    STATE(563), 1,
      sym_queryBodyStmts,
    STATE(646), 1,
      sym_vertexSetName,
    STATE(647), 1,
      sym_gsqlSelectClause,
    STATE(756), 1,
      sym_queryBodyStmt,
    STATE(824), 1,
      sym_gsqlSelectBlock,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(825), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [6828] = 14,
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
    STATE(272), 1,
      sym_name,
    STATE(611), 1,
      sym_queryBodyStmts,
    STATE(646), 1,
      sym_vertexSetName,
    STATE(647), 1,
      sym_gsqlSelectClause,
    STATE(756), 1,
      sym_queryBodyStmt,
    STATE(824), 1,
      sym_gsqlSelectBlock,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(825), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [6876] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_LPAREN,
    ACTIONS(577), 1,
      anon_sym_LT,
    ACTIONS(579), 1,
      anon_sym_AT_AT,
    ACTIONS(581), 1,
      anon_sym__,
    ACTIONS(583), 1,
      aux_sym_seed_token1,
    ACTIONS(585), 1,
      anon_sym_COLON,
    STATE(436), 1,
      sym_edgeSetType,
    STATE(478), 1,
      sym_name,
    STATE(581), 1,
      sym_atomicEdgeType,
    STATE(626), 1,
      sym_stepEdgeTypes,
    STATE(663), 1,
      sym_atomicEdgePattern,
    STATE(729), 1,
      sym_pathEdgePattern,
    STATE(742), 1,
      sym_stepEdgeSet,
    ACTIONS(292), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(486), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_edgeType,
  [6928] = 14,
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
    STATE(134), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(272), 1,
      sym_name,
    STATE(646), 1,
      sym_vertexSetName,
    STATE(647), 1,
      sym_gsqlSelectClause,
    STATE(815), 1,
      sym_queryBodyStmts,
    STATE(824), 1,
      sym_gsqlSelectBlock,
    STATE(827), 1,
      sym_queryBodyStmt,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(825), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [6976] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_CREATE_VERTEX_token1,
    ACTIONS(19), 1,
      aux_sym_accumType_token2,
    ACTIONS(21), 1,
      aux_sym_accumType_token3,
    ACTIONS(23), 1,
      aux_sym_accumType_token4,
    ACTIONS(587), 1,
      anon_sym__,
    STATE(158), 1,
      sym_name,
    STATE(187), 1,
      sym_fieldName,
    STATE(450), 1,
      sym_baseType,
    STATE(791), 1,
      sym_tupleFields,
    ACTIONS(589), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(13), 7,
      aux_sym_CREATE_UNDIRECTED_EDGE_token2,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
  [7020] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      aux_sym_queryBodyIfStmt_token1,
    ACTIONS(547), 1,
      aux_sym_queryBodyIfStmt_token4,
    ACTIONS(549), 1,
      anon_sym__,
    ACTIONS(552), 1,
      aux_sym_printStmt_token1,
    ACTIONS(555), 1,
      aux_sym_returnStmt_token1,
    STATE(149), 1,
      aux_sym_queryBodyStmts_repeat1,
    STATE(272), 1,
      sym_name,
    STATE(646), 1,
      sym_vertexSetName,
    STATE(647), 1,
      sym_gsqlSelectClause,
    STATE(770), 1,
      sym_queryBodyStmt,
    STATE(824), 1,
      sym_gsqlSelectBlock,
    ACTIONS(558), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(825), 5,
      sym_queryBodyIfStmt,
      sym_vSetVarDeclStmt,
      sym_printStmt,
      sym_returnStmt,
      sym_selectStmt,
  [7068] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_CREATE_VERTEX_token1,
    ACTIONS(19), 1,
      aux_sym_accumType_token2,
    ACTIONS(21), 1,
      aux_sym_accumType_token3,
    ACTIONS(23), 1,
      aux_sym_accumType_token4,
    ACTIONS(587), 1,
      anon_sym__,
    STATE(158), 1,
      sym_name,
    STATE(205), 1,
      sym_fieldName,
    STATE(442), 1,
      sym_baseType,
    ACTIONS(589), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(13), 7,
      aux_sym_CREATE_UNDIRECTED_EDGE_token2,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
  [7109] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_CREATE_VERTEX_token1,
    ACTIONS(19), 1,
      aux_sym_accumType_token2,
    ACTIONS(21), 1,
      aux_sym_accumType_token3,
    ACTIONS(23), 1,
      aux_sym_accumType_token4,
    ACTIONS(502), 1,
      anon_sym_LT,
    ACTIONS(506), 1,
      anon_sym_FILE,
    STATE(401), 1,
      sym_parameterType,
    STATE(553), 1,
      sym_baseType,
    ACTIONS(504), 2,
      anon_sym_SET,
      anon_sym_BAG,
    ACTIONS(13), 7,
      aux_sym_CREATE_UNDIRECTED_EDGE_token2,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
  [7150] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_SLASH,
    ACTIONS(591), 1,
      anon_sym_DOT,
    ACTIONS(176), 14,
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
  [7176] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_LPAREN,
    ACTIONS(595), 1,
      anon_sym_AT_AT,
    ACTIONS(597), 1,
      anon_sym__,
    ACTIONS(599), 1,
      aux_sym_seed_token1,
    ACTIONS(601), 1,
      anon_sym_COLON,
    STATE(282), 1,
      sym_name,
    STATE(283), 1,
      sym_stepVertexSet,
    STATE(299), 1,
      sym_atomicVertexType,
    STATE(300), 1,
      sym_stepVertexTypes,
    STATE(302), 1,
      sym_vertexSetType,
    STATE(471), 1,
      sym_pathPattern,
    ACTIONS(603), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(267), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexType,
  [7222] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(154), 1,
      aux_sym_name_repeat1,
    ACTIONS(605), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(608), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(190), 11,
      aux_sym_CREATE_VERTEX_token1,
      aux_sym_CREATE_UNDIRECTED_EDGE_token2,
      aux_sym_accumType_token2,
      aux_sym_accumType_token3,
      aux_sym_accumType_token4,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
  [7250] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_SLASH,
    ACTIONS(591), 1,
      anon_sym_DOT,
    ACTIONS(611), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
    ACTIONS(176), 10,
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
  [7278] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_SLASH,
    ACTIONS(617), 1,
      aux_sym_printExpr_token1,
    ACTIONS(619), 1,
      anon_sym_LBRACK,
    STATE(94), 1,
      sym_mathOperator,
    ACTIONS(615), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
    ACTIONS(318), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7310] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(161), 1,
      aux_sym_name_repeat1,
    ACTIONS(621), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(623), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(200), 11,
      aux_sym_CREATE_VERTEX_token1,
      aux_sym_CREATE_UNDIRECTED_EDGE_token2,
      aux_sym_accumType_token2,
      aux_sym_accumType_token3,
      aux_sym_accumType_token4,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
  [7338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 16,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token1,
      aux_sym_CREATE_UNDIRECTED_EDGE_token2,
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
  [7360] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_LPAREN,
    ACTIONS(595), 1,
      anon_sym_AT_AT,
    ACTIONS(597), 1,
      anon_sym__,
    ACTIONS(599), 1,
      aux_sym_seed_token1,
    ACTIONS(601), 1,
      anon_sym_COLON,
    STATE(282), 1,
      sym_name,
    STATE(283), 1,
      sym_stepVertexSet,
    STATE(299), 1,
      sym_atomicVertexType,
    STATE(300), 1,
      sym_stepVertexTypes,
    STATE(302), 1,
      sym_vertexSetType,
    STATE(431), 1,
      sym_pathPattern,
    ACTIONS(603), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(267), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexType,
  [7406] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_SLASH,
    STATE(94), 1,
      sym_mathOperator,
    ACTIONS(334), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
      anon_sym_LBRACK,
    ACTIONS(338), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7434] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(154), 1,
      aux_sym_name_repeat1,
    ACTIONS(627), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(629), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(214), 11,
      aux_sym_CREATE_VERTEX_token1,
      aux_sym_CREATE_UNDIRECTED_EDGE_token2,
      aux_sym_accumType_token2,
      aux_sym_accumType_token3,
      aux_sym_accumType_token4,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
  [7462] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_LPAREN,
    ACTIONS(595), 1,
      anon_sym_AT_AT,
    ACTIONS(597), 1,
      anon_sym__,
    ACTIONS(599), 1,
      aux_sym_seed_token1,
    ACTIONS(601), 1,
      anon_sym_COLON,
    STATE(282), 1,
      sym_name,
    STATE(299), 1,
      sym_atomicVertexType,
    STATE(300), 1,
      sym_stepVertexTypes,
    STATE(302), 1,
      sym_vertexSetType,
    STATE(389), 1,
      sym_stepVertexSet,
    ACTIONS(603), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(267), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexType,
  [7505] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_SLASH,
    STATE(105), 1,
      sym_mathOperator,
    ACTIONS(631), 4,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_printStmt_token3,
    ACTIONS(318), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7531] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_SLASH,
    STATE(107), 1,
      sym_mathOperator,
    ACTIONS(334), 4,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_perClauseV2_token1,
    ACTIONS(338), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7557] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_SLASH,
    ACTIONS(633), 1,
      anon_sym_DOT,
    ACTIONS(176), 12,
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
  [7581] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_SLASH,
    STATE(105), 1,
      sym_mathOperator,
    ACTIONS(334), 4,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_printStmt_token3,
    ACTIONS(338), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7607] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_SLASH,
    STATE(107), 1,
      sym_mathOperator,
    ACTIONS(631), 4,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_perClauseV2_token1,
    ACTIONS(318), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7633] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_SLASH,
    ACTIONS(635), 1,
      anon_sym_DOT,
    ACTIONS(176), 12,
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
  [7657] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_SLASH,
    STATE(88), 1,
      sym_mathOperator,
    ACTIONS(334), 3,
      anon_sym_COMMA,
      aux_sym_printExpr_token1,
      anon_sym_RBRACK,
    ACTIONS(338), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7682] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_SLASH,
    STATE(99), 1,
      sym_mathOperator,
    ACTIONS(334), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
    ACTIONS(338), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7707] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_SLASH,
    STATE(95), 1,
      sym_mathOperator,
    ACTIONS(334), 3,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
    ACTIONS(338), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7732] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_SLASH,
    ACTIONS(637), 1,
      anon_sym_DOT,
    ACTIONS(176), 11,
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
  [7755] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_SLASH,
    ACTIONS(639), 1,
      anon_sym_DOT,
    ACTIONS(176), 11,
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
  [7778] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_SLASH,
    ACTIONS(641), 1,
      anon_sym_DOT,
    ACTIONS(176), 11,
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
  [7801] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_SLASH,
    ACTIONS(643), 1,
      anon_sym_RPAREN,
    ACTIONS(645), 1,
      anon_sym_COMMA,
    STATE(98), 1,
      sym_mathOperator,
    STATE(510), 1,
      aux_sym_argList_repeat1,
    ACTIONS(318), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7830] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_SLASH,
    STATE(97), 1,
      sym_mathOperator,
    ACTIONS(631), 3,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_queryBodyIfStmt_token2,
    ACTIONS(318), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7855] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_SLASH,
    STATE(97), 1,
      sym_mathOperator,
    ACTIONS(334), 3,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_queryBodyIfStmt_token2,
    ACTIONS(338), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7880] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_AT_AT,
    ACTIONS(647), 1,
      anon_sym_RBRACE,
    ACTIONS(649), 1,
      anon_sym__,
    ACTIONS(651), 1,
      aux_sym_seed_token1,
    ACTIONS(653), 1,
      aux_sym_seed_token2,
    STATE(511), 1,
      sym_seed,
    STATE(515), 1,
      sym_name,
    STATE(781), 1,
      sym_vertexType,
    ACTIONS(292), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(638), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexSetName,
  [7917] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_SLASH,
    STATE(95), 1,
      sym_mathOperator,
    ACTIONS(631), 3,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
    ACTIONS(318), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7942] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_SLASH,
    STATE(98), 1,
      sym_mathOperator,
    ACTIONS(334), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(338), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7967] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_SLASH,
    ACTIONS(657), 1,
      aux_sym_printExpr_token1,
    STATE(88), 1,
      sym_mathOperator,
    ACTIONS(655), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(318), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [7994] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_SLASH,
    ACTIONS(659), 1,
      anon_sym_DOT,
    ACTIONS(176), 11,
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
  [8017] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_SLASH,
    STATE(99), 1,
      sym_mathOperator,
    ACTIONS(661), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
    ACTIONS(318), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [8042] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_SLASH,
    STATE(99), 1,
      sym_mathOperator,
    ACTIONS(663), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
    ACTIONS(318), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [8067] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_SLASH,
    STATE(99), 1,
      sym_mathOperator,
    ACTIONS(665), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
    ACTIONS(318), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [8092] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_SLASH,
    ACTIONS(667), 1,
      anon_sym_DOT,
    ACTIONS(176), 11,
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
  [8115] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_CREATE_VERTEX_token1,
    ACTIONS(19), 1,
      aux_sym_accumType_token2,
    ACTIONS(21), 1,
      aux_sym_accumType_token3,
    ACTIONS(23), 1,
      aux_sym_accumType_token4,
    STATE(540), 1,
      sym_baseType,
    ACTIONS(13), 7,
      aux_sym_CREATE_UNDIRECTED_EDGE_token2,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
  [8143] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(310), 1,
      aux_sym_integer_token1,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(637), 1,
      sym_constant,
    ACTIONS(298), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(22), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [8177] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_AT_AT,
    ACTIONS(649), 1,
      anon_sym__,
    ACTIONS(651), 1,
      aux_sym_seed_token1,
    ACTIONS(653), 1,
      aux_sym_seed_token2,
    STATE(515), 1,
      sym_name,
    STATE(664), 1,
      sym_seed,
    STATE(781), 1,
      sym_vertexType,
    ACTIONS(292), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(638), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexSetName,
  [8211] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_SLASH,
    STATE(98), 1,
      sym_mathOperator,
    ACTIONS(669), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(318), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [8235] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(197), 1,
      aux_sym_name_repeat1,
    ACTIONS(671), 4,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(200), 7,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_DOT_STAR,
      anon_sym_COLON,
  [8257] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(192), 1,
      aux_sym_name_repeat1,
    ACTIONS(673), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(676), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(190), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [8281] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(192), 1,
      aux_sym_name_repeat1,
    ACTIONS(679), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(681), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(214), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [8305] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      anon_sym_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LPAREN,
    ACTIONS(687), 1,
      anon_sym__,
    ACTIONS(689), 1,
      aux_sym_gsqlSelectClause_token1,
    STATE(272), 1,
      sym_name,
    STATE(440), 1,
      sym_vertexSetName,
    STATE(491), 1,
      sym_simpleSet,
    STATE(647), 1,
      sym_gsqlSelectClause,
    ACTIONS(691), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(798), 2,
      sym_seedSet,
      sym_gsqlSelectBlock,
  [8341] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(195), 1,
      aux_sym_name_repeat1,
    ACTIONS(693), 4,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(190), 7,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_DOT_STAR,
      anon_sym_COLON,
  [8363] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_CREATE_VERTEX_token1,
    ACTIONS(19), 1,
      aux_sym_accumType_token2,
    ACTIONS(21), 1,
      aux_sym_accumType_token3,
    ACTIONS(23), 1,
      aux_sym_accumType_token4,
    STATE(793), 1,
      sym_baseType,
    ACTIONS(13), 7,
      aux_sym_CREATE_UNDIRECTED_EDGE_token2,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
  [8391] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(195), 1,
      aux_sym_name_repeat1,
    ACTIONS(696), 4,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(214), 7,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_DOT_STAR,
      anon_sym_COLON,
  [8413] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(310), 1,
      aux_sym_integer_token1,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(557), 1,
      sym_constant,
    ACTIONS(298), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(22), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [8447] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(193), 1,
      aux_sym_name_repeat1,
    ACTIONS(698), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(700), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(200), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [8471] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_SLASH,
    STATE(98), 1,
      sym_mathOperator,
    ACTIONS(702), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(318), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [8495] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(310), 1,
      aux_sym_integer_token1,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(544), 1,
      sym_constant,
    ACTIONS(298), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(22), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [8529] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(310), 1,
      aux_sym_integer_token1,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(607), 1,
      sym_constant,
    ACTIONS(298), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(22), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [8563] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(310), 1,
      aux_sym_integer_token1,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(656), 1,
      sym_constant,
    ACTIONS(298), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(22), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [8597] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(310), 1,
      aux_sym_integer_token1,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(516), 1,
      sym_constant,
    ACTIONS(298), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(22), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [8631] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_CREATE_VERTEX_token1,
    ACTIONS(19), 1,
      aux_sym_accumType_token2,
    ACTIONS(21), 1,
      aux_sym_accumType_token3,
    ACTIONS(23), 1,
      aux_sym_accumType_token4,
    STATE(643), 1,
      sym_baseType,
    ACTIONS(13), 7,
      aux_sym_CREATE_UNDIRECTED_EDGE_token2,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
  [8659] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(310), 1,
      aux_sym_integer_token1,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    STATE(537), 1,
      sym_constant,
    ACTIONS(298), 2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(22), 2,
      sym_integer,
      sym_real,
    STATE(26), 2,
      sym_stringLiteral,
      sym_numeric,
  [8693] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_CREATE_VERTEX_token1,
    ACTIONS(19), 1,
      aux_sym_accumType_token2,
    ACTIONS(21), 1,
      aux_sym_accumType_token3,
    ACTIONS(23), 1,
      aux_sym_accumType_token4,
    STATE(773), 1,
      sym_baseType,
    ACTIONS(13), 7,
      aux_sym_CREATE_UNDIRECTED_EDGE_token2,
      aux_sym_accumType_token5,
      aux_sym_baseType_token1,
      aux_sym_baseType_token2,
      aux_sym_baseType_token3,
      aux_sym_baseType_token4,
      aux_sym_baseType_token5,
  [8721] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_SLASH,
    STATE(98), 1,
      sym_mathOperator,
    ACTIONS(704), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(318), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [8745] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      aux_sym_createSignature_token1,
    ACTIONS(7), 1,
      aux_sym_DROP_token1,
    ACTIONS(706), 1,
      ts_builtin_sym_end,
    STATE(850), 1,
      sym_createSignature,
    STATE(214), 7,
      sym_createQuery,
      sym_CREATE_VERTEX,
      sym_CREATE_UNDIRECTED_EDGE,
      sym_CREATE_DIRECTED_EDGE,
      sym_CREATE_GRAPH,
      sym_DROP,
      aux_sym_source_file_repeat1,
  [8770] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_AT_AT,
    ACTIONS(583), 1,
      aux_sym_seed_token1,
    ACTIONS(708), 1,
      anon_sym__,
    STATE(478), 1,
      sym_name,
    STATE(509), 1,
      sym_edgeSetType,
    STATE(661), 1,
      sym_atomicEdgeType,
    ACTIONS(47), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(486), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_edgeType,
  [8801] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_DASH,
    ACTIONS(712), 1,
      aux_sym_integer_token1,
    STATE(535), 1,
      aux_sym_integer_repeat1,
    STATE(747), 1,
      sym_name,
    STATE(749), 1,
      sym_simpleSize,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(748), 3,
      sym_integer,
      sym_paramName,
      sym_varName,
  [8830] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(218), 1,
      aux_sym_name_repeat1,
    ACTIONS(714), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(716), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(214), 6,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [8853] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_SLASH,
    ACTIONS(718), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      sym_mathOperator,
    ACTIONS(318), 8,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
  [8876] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      ts_builtin_sym_end,
    ACTIONS(722), 1,
      aux_sym_createSignature_token1,
    ACTIONS(725), 1,
      aux_sym_DROP_token1,
    STATE(850), 1,
      sym_createSignature,
    STATE(214), 7,
      sym_createQuery,
      sym_CREATE_VERTEX,
      sym_CREATE_UNDIRECTED_EDGE,
      sym_CREATE_DIRECTED_EDGE,
      sym_CREATE_GRAPH,
      sym_DROP,
      aux_sym_source_file_repeat1,
  [8901] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(212), 1,
      aux_sym_name_repeat1,
    ACTIONS(728), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(730), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(200), 6,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [8924] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      anon_sym_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LPAREN,
    STATE(272), 1,
      sym_name,
    STATE(440), 1,
      sym_vertexSetName,
    STATE(458), 1,
      sym_simpleSet,
    STATE(647), 1,
      sym_gsqlSelectClause,
    STATE(741), 2,
      sym_seedSet,
      sym_gsqlSelectBlock,
    ACTIONS(687), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [8955] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(732), 9,
      anon_sym_LPAREN,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_AT_AT,
      anon_sym_DOT,
      anon_sym__,
      aux_sym_integer_token1,
  [8974] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(218), 1,
      aux_sym_name_repeat1,
    ACTIONS(736), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(739), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(190), 6,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [8997] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(193), 1,
      aux_sym_name_repeat1,
    ACTIONS(698), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(700), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(742), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [9020] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(745), 9,
      anon_sym_LPAREN,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_AT_AT,
      anon_sym_DOT,
      anon_sym__,
      aux_sym_integer_token1,
  [9039] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_AT_AT,
    STATE(477), 1,
      sym_dmlSubStmt,
    STATE(624), 1,
      sym_dmlSubStmtList,
    STATE(625), 1,
      sym_name,
    STATE(764), 1,
      sym_globalAccumName,
    STATE(594), 2,
      sym_gAccumAccumStmt,
      sym_assignStmt,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9067] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_AT_AT,
    STATE(477), 1,
      sym_dmlSubStmt,
    STATE(625), 1,
      sym_name,
    STATE(628), 1,
      sym_dmlSubStmtList,
    STATE(764), 1,
      sym_globalAccumName,
    STATE(594), 2,
      sym_gAccumAccumStmt,
      sym_assignStmt,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9095] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_AT_AT,
    STATE(478), 1,
      sym_name,
    STATE(565), 1,
      sym_edgeSetType,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(486), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_edgeType,
  [9118] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(224), 1,
      aux_sym_name_repeat1,
    ACTIONS(749), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(752), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(190), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
  [9139] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_AT_AT,
    STATE(279), 1,
      sym_vertexSetType,
    STATE(282), 1,
      sym_name,
    ACTIONS(755), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(267), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexType,
  [9162] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    STATE(786), 1,
      sym_name,
    STATE(523), 2,
      sym_stringLiteral,
      sym_paramName,
    STATE(787), 2,
      sym_fileVar,
      sym_filePath,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9185] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_AT_AT,
    STATE(258), 1,
      sym_vertexSetType,
    STATE(282), 1,
      sym_name,
    ACTIONS(755), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(267), 3,
      sym_globalAccumName,
      sym_paramName,
      sym_vertexType,
  [9208] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_AT_AT,
    STATE(518), 1,
      sym_dmlSubStmt,
    STATE(625), 1,
      sym_name,
    STATE(764), 1,
      sym_globalAccumName,
    STATE(594), 2,
      sym_gAccumAccumStmt,
      sym_assignStmt,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9233] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(241), 1,
      aux_sym_name_repeat1,
    ACTIONS(757), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(759), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(200), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
  [9254] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    STATE(786), 1,
      sym_name,
    STATE(523), 2,
      sym_stringLiteral,
      sym_paramName,
    STATE(765), 2,
      sym_fileVar,
      sym_filePath,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9277] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(231), 1,
      aux_sym_name_repeat1,
    ACTIONS(761), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(764), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(190), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_accumType_token11,
      aux_sym_accumType_token12,
  [9298] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(237), 1,
      aux_sym_name_repeat1,
    ACTIONS(767), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(769), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(200), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_accumType_token11,
      aux_sym_accumType_token12,
  [9319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 9,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [9334] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      aux_sym_name_token2,
    STATE(240), 1,
      aux_sym_name_repeat1,
    ACTIONS(771), 3,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
    ACTIONS(214), 4,
      anon_sym_LBRACE,
      anon_sym_API,
      anon_sym_SYNTAX,
      anon_sym_RETURNS,
  [9355] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_PIPE,
    STATE(197), 1,
      aux_sym_name_repeat1,
    ACTIONS(775), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COLON,
    ACTIONS(671), 4,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9376] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    STATE(786), 1,
      sym_name,
    STATE(523), 2,
      sym_stringLiteral,
      sym_paramName,
    STATE(744), 2,
      sym_fileVar,
      sym_filePath,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9399] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(231), 1,
      aux_sym_name_repeat1,
    ACTIONS(778), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(780), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(214), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_accumType_token11,
      aux_sym_accumType_token12,
  [9420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 9,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [9435] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      aux_sym_name_token2,
    STATE(234), 1,
      aux_sym_name_repeat1,
    ACTIONS(782), 3,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
    ACTIONS(200), 4,
      anon_sym_LBRACE,
      anon_sym_API,
      anon_sym_SYNTAX,
      anon_sym_RETURNS,
  [9456] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 1,
      aux_sym_name_token2,
    STATE(240), 1,
      aux_sym_name_repeat1,
    ACTIONS(786), 3,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
    ACTIONS(190), 4,
      anon_sym_LBRACE,
      anon_sym_API,
      anon_sym_SYNTAX,
      anon_sym_RETURNS,
  [9477] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(224), 1,
      aux_sym_name_repeat1,
    ACTIONS(792), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(794), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(214), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
  [9498] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    STATE(786), 1,
      sym_name,
    STATE(523), 2,
      sym_stringLiteral,
      sym_paramName,
    STATE(730), 2,
      sym_fileVar,
      sym_filePath,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9521] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      anon_sym_AT_AT,
    STATE(275), 1,
      sym_setBagExpr,
    STATE(281), 1,
      sym_globalAccumName,
    STATE(460), 1,
      sym_name,
    ACTIONS(432), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(547), 6,
      aux_sym_queryBodyIfStmt_token1,
      aux_sym_queryBodyIfStmt_token3,
      aux_sym_queryBodyIfStmt_token4,
      anon_sym__,
      aux_sym_printStmt_token1,
      aux_sym_returnStmt_token1,
  [9561] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      anon_sym_AT_AT,
    STATE(275), 1,
      sym_setBagExpr,
    STATE(281), 1,
      sym_globalAccumName,
    STATE(345), 1,
      sym_name,
    ACTIONS(450), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9585] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_AT_AT,
    STATE(268), 1,
      sym_setBagExpr,
    STATE(281), 1,
      sym_globalAccumName,
    STATE(502), 1,
      sym_name,
    ACTIONS(426), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9609] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_AT_AT,
    STATE(275), 1,
      sym_setBagExpr,
    STATE(281), 1,
      sym_globalAccumName,
    STATE(502), 1,
      sym_name,
    ACTIONS(426), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9633] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_PIPE,
    STATE(248), 1,
      aux_sym_stepVertexTypes_repeat1,
    ACTIONS(798), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [9651] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(255), 1,
      aux_sym_name_repeat1,
    ACTIONS(803), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(805), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(200), 3,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
  [9671] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(256), 1,
      aux_sym_name_repeat1,
    ACTIONS(807), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(809), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(214), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_CREATE_VERTEX_token2,
  [9691] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    STATE(531), 1,
      sym_name,
    STATE(740), 1,
      sym_filePath,
    STATE(523), 2,
      sym_stringLiteral,
      sym_paramName,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9713] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(252), 1,
      aux_sym_name_repeat1,
    ACTIONS(811), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(814), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(190), 3,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
  [9733] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(442), 1,
      anon_sym_AT_AT,
    STATE(268), 1,
      sym_setBagExpr,
    STATE(281), 1,
      sym_globalAccumName,
    STATE(346), 1,
      sym_name,
    ACTIONS(444), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9757] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    STATE(531), 1,
      sym_name,
    STATE(762), 1,
      sym_filePath,
    STATE(523), 2,
      sym_stringLiteral,
      sym_paramName,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9779] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(252), 1,
      aux_sym_name_repeat1,
    ACTIONS(817), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(819), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(214), 3,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
  [9799] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(256), 1,
      aux_sym_name_repeat1,
    ACTIONS(821), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(824), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(190), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_CREATE_VERTEX_token2,
  [9819] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(250), 1,
      aux_sym_name_repeat1,
    ACTIONS(827), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(829), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(200), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_CREATE_VERTEX_token2,
  [9839] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      anon_sym_PIPE,
    STATE(263), 1,
      aux_sym_stepVertexTypes_repeat1,
    ACTIONS(831), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [9857] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_SEMI,
    ACTIONS(837), 1,
      anon_sym_WHERE,
    ACTIONS(839), 1,
      aux_sym_perClauseV2_token1,
    STATE(297), 1,
      sym_whereClause,
    STATE(432), 1,
      sym_accumClause,
    STATE(660), 1,
      sym_perClauseV2,
    STATE(434), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [9883] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(442), 1,
      anon_sym_AT_AT,
    STATE(275), 1,
      sym_setBagExpr,
    STATE(281), 1,
      sym_globalAccumName,
    STATE(346), 1,
      sym_name,
    ACTIONS(444), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9907] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      anon_sym_AT_AT,
    STATE(268), 1,
      sym_setBagExpr,
    STATE(281), 1,
      sym_globalAccumName,
    STATE(345), 1,
      sym_name,
    ACTIONS(450), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9931] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      anon_sym_AT_AT,
    STATE(268), 1,
      sym_setBagExpr,
    STATE(281), 1,
      sym_globalAccumName,
    STATE(460), 1,
      sym_name,
    ACTIONS(432), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9955] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      anon_sym_PIPE,
    STATE(248), 1,
      aux_sym_stepVertexTypes_repeat1,
    ACTIONS(841), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [9973] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_DOT_STAR,
    STATE(197), 1,
      aux_sym_name_repeat1,
    ACTIONS(843), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(671), 4,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [9993] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
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
    STATE(631), 1,
      sym_accumType,
  [10021] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      aux_sym_createSignature_token2,
    ACTIONS(848), 1,
      aux_sym_createSignature_token4,
    ACTIONS(850), 1,
      anon_sym_QUERY,
    ACTIONS(852), 1,
      aux_sym_CREATE_VERTEX_token1,
    ACTIONS(854), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_token1,
    ACTIONS(856), 1,
      aux_sym_CREATE_DIRECTED_EDGE_token1,
    ACTIONS(858), 1,
      aux_sym_CREATE_GRAPH_token1,
  [10046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [10059] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 7,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_queryBodyIfStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_perClauseV2_token1,
  [10072] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      anon_sym_LT,
    ACTIONS(862), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10087] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_RPAREN,
    ACTIONS(868), 1,
      anon_sym_STAR,
    STATE(321), 2,
      sym_name,
      aux_sym_CREATE_GRAPH_repeat1,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(547), 5,
      anon_sym_RBRACE,
      aux_sym_queryBodyIfStmt_token1,
      anon_sym__,
      aux_sym_printStmt_token1,
      aux_sym_returnStmt_token1,
  [10121] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [10134] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(49), 1,
      aux_sym_name_repeat1,
    ACTIONS(775), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
    ACTIONS(269), 4,
      anon_sym__,
      aux_sym_integer_token1,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10151] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(547), 5,
      aux_sym_queryBodyIfStmt_token1,
      aux_sym_queryBodyIfStmt_token4,
      anon_sym__,
      aux_sym_printStmt_token1,
      aux_sym_returnStmt_token1,
  [10166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 7,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_queryBodyIfStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_perClauseV2_token1,
  [10179] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_LPAREN,
    STATE(272), 1,
      sym_name,
    STATE(344), 1,
      sym_vertexSetName,
    STATE(388), 1,
      sym_simpleSet,
    ACTIONS(687), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10200] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(617), 1,
      sym_name,
    STATE(659), 1,
      sym_alias,
    STATE(609), 2,
      sym_vertexAlias,
      sym_edgeAlias,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10219] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(606), 1,
      sym_alias,
    STATE(617), 1,
      sym_name,
    STATE(609), 2,
      sym_vertexAlias,
      sym_edgeAlias,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [10251] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_LPAREN,
    STATE(272), 1,
      sym_name,
    STATE(344), 1,
      sym_vertexSetName,
    STATE(462), 1,
      sym_simpleSet,
    ACTIONS(687), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 7,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_queryBodyIfStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_perClauseV2_token1,
  [10285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [10298] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_DASH,
    STATE(289), 1,
      aux_sym_pathPattern_repeat1,
    ACTIONS(879), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [10314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      aux_sym_CREATE_UNDIRECTED_EDGE_token3,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [10338] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_token4,
    STATE(329), 1,
      aux_sym_name_repeat1,
    ACTIONS(887), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(889), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10356] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym_localAccumName,
    STATE(19), 1,
      sym_name,
    ACTIONS(412), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10374] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      anon_sym_RPAREN,
    STATE(288), 2,
      sym_name,
      aux_sym_CREATE_GRAPH_repeat1,
    ACTIONS(895), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10390] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_DASH,
    STATE(295), 1,
      aux_sym_pathPattern_repeat1,
    ACTIONS(898), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [10406] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10430] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym_localAccumName,
    STATE(19), 1,
      sym_name,
    ACTIONS(402), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10448] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym_localAccumName,
    STATE(19), 1,
      sym_name,
    ACTIONS(378), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10466] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      anon_sym_LBRACE,
    ACTIONS(908), 1,
      anon_sym_FOR,
    ACTIONS(910), 1,
      anon_sym_API,
    ACTIONS(912), 1,
      anon_sym_SYNTAX,
    ACTIONS(914), 1,
      anon_sym_RETURNS,
    STATE(525), 1,
      sym_returns,
  [10488] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(918), 1,
      anon_sym_DASH,
    STATE(295), 1,
      aux_sym_pathPattern_repeat1,
    ACTIONS(916), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [10504] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_token3,
    STATE(296), 1,
      aux_sym_name_repeat1,
    ACTIONS(921), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(924), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10522] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      aux_sym_perClauseV2_token1,
    ACTIONS(927), 1,
      anon_sym_SEMI,
    STATE(403), 1,
      sym_accumClause,
    STATE(660), 1,
      sym_perClauseV2,
    STATE(398), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [10542] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(929), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [10566] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      anon_sym_COLON,
    ACTIONS(933), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [10580] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      anon_sym_AT,
    STATE(18), 2,
      sym_localAccumName,
      sym_name,
    ACTIONS(450), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [10608] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(941), 1,
      anon_sym_AT,
    STATE(18), 2,
      sym_localAccumName,
      sym_name,
    ACTIONS(432), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10636] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_token3,
    STATE(296), 1,
      aux_sym_name_repeat1,
    ACTIONS(945), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(947), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10654] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(951), 1,
      anon_sym_AT,
    ACTIONS(949), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token2,
      anon_sym_AT_AT,
  [10668] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(953), 1,
      anon_sym_AT,
    STATE(18), 2,
      sym_localAccumName,
      sym_name,
    ACTIONS(426), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10684] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      anon_sym_AT,
    ACTIONS(955), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token2,
      anon_sym_AT_AT,
  [10698] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      anon_sym_RETURNS,
    ACTIONS(959), 1,
      anon_sym_LBRACE,
    ACTIONS(961), 1,
      anon_sym_FOR,
    ACTIONS(963), 1,
      anon_sym_API,
    ACTIONS(965), 1,
      anon_sym_SYNTAX,
    STATE(567), 1,
      sym_returns,
  [10720] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym_localAccumName,
    STATE(19), 1,
      sym_name,
    ACTIONS(372), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10738] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(953), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym_localAccumName,
    STATE(19), 1,
      sym_name,
    ACTIONS(426), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10756] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 1,
      anon_sym_AT,
    ACTIONS(969), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token2,
      anon_sym_AT_AT,
  [10770] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_token4,
    STATE(313), 1,
      aux_sym_name_repeat1,
    ACTIONS(973), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(976), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10788] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(979), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym_localAccumName,
    STATE(19), 1,
      sym_name,
    ACTIONS(384), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10806] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      anon_sym_RETURNS,
    ACTIONS(981), 1,
      anon_sym_LBRACE,
    ACTIONS(983), 1,
      anon_sym_FOR,
    ACTIONS(985), 1,
      anon_sym_API,
    ACTIONS(987), 1,
      anon_sym_SYNTAX,
    STATE(529), 1,
      sym_returns,
  [10828] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(989), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym_localAccumName,
    STATE(19), 1,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10846] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(941), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym_localAccumName,
    STATE(19), 1,
      sym_name,
    ACTIONS(432), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10864] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_token3,
    STATE(305), 1,
      aux_sym_name_repeat1,
    ACTIONS(991), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(993), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10882] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(997), 1,
      anon_sym_AT,
    ACTIONS(995), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token2,
      anon_sym_AT_AT,
  [10896] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(999), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym_localAccumName,
    STATE(19), 1,
      sym_name,
    ACTIONS(444), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10914] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1001), 1,
      anon_sym_RPAREN,
    STATE(288), 2,
      sym_name,
      aux_sym_CREATE_GRAPH_repeat1,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10930] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(710), 1,
      anon_sym_DASH,
    ACTIONS(712), 1,
      aux_sym_integer_token1,
    STATE(535), 1,
      aux_sym_integer_repeat1,
    STATE(709), 2,
      sym_stringLiteral,
      sym_integer,
  [10950] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym_localAccumName,
    STATE(19), 1,
      sym_name,
    ACTIONS(450), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [10968] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      anon_sym_RETURNS,
    ACTIONS(1003), 1,
      anon_sym_LBRACE,
    ACTIONS(1005), 1,
      anon_sym_FOR,
    ACTIONS(1007), 1,
      anon_sym_API,
    ACTIONS(1009), 1,
      anon_sym_SYNTAX,
    STATE(591), 1,
      sym_returns,
  [10990] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1013), 1,
      anon_sym_AT,
    ACTIONS(1011), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token2,
      anon_sym_AT_AT,
  [11004] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1015), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym_localAccumName,
    STATE(19), 1,
      sym_name,
    ACTIONS(308), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11022] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      anon_sym_RETURNS,
    ACTIONS(1017), 1,
      anon_sym_LBRACE,
    ACTIONS(1019), 1,
      anon_sym_FOR,
    ACTIONS(1021), 1,
      anon_sym_API,
    ACTIONS(1023), 1,
      anon_sym_SYNTAX,
    STATE(524), 1,
      sym_returns,
  [11044] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1025), 1,
      anon_sym_DOLLAR,
    STATE(703), 2,
      sym_columnId,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11060] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_token4,
    STATE(313), 1,
      aux_sym_name_repeat1,
    ACTIONS(1027), 2,
      anon_sym__,
      aux_sym_integer_token1,
    ACTIONS(1029), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11078] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1031), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym_localAccumName,
    STATE(19), 1,
      sym_name,
    ACTIONS(438), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11096] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1035), 1,
      anon_sym_AT,
    ACTIONS(1033), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token2,
      anon_sym_AT_AT,
  [11110] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1039), 1,
      anon_sym_AT,
    ACTIONS(1037), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token2,
      anon_sym_AT_AT,
  [11124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1041), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PIPE,
      aux_sym_CREATE_UNDIRECTED_EDGE_token4,
  [11136] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(999), 1,
      anon_sym_AT,
    STATE(18), 2,
      sym_localAccumName,
      sym_name,
    ACTIONS(444), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11152] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(13), 1,
      sym_accumName,
    ACTIONS(412), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11167] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1045), 1,
      aux_sym_CREATE_DIRECTED_EDGE_token2,
    STATE(536), 1,
      sym_WITH,
    ACTIONS(1043), 3,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
  [11182] = 4,
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
  [11197] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(13), 1,
      sym_accumName,
    ACTIONS(378), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11212] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(333), 1,
      sym_name,
    STATE(843), 1,
      sym_vertexType,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11227] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(822), 1,
      sym_queryName,
    STATE(845), 1,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11242] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(13), 1,
      sym_accumName,
    ACTIONS(426), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11257] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(820), 1,
      sym_edgeType,
    STATE(821), 1,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11272] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(819), 1,
      sym_edgeType,
    STATE(821), 1,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1047), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [11298] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1049), 1,
      anon_sym_DOT,
    ACTIONS(874), 4,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_perClauseV2_token1,
  [11311] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1051), 1,
      anon_sym_DOT,
    ACTIONS(874), 4,
      anon_sym_SEMI,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_printStmt_token3,
  [11324] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(13), 1,
      sym_accumName,
    ACTIONS(308), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11339] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(816), 1,
      sym_name,
    STATE(817), 1,
      sym_fileVar,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11354] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(758), 1,
      sym_syntaxName,
    STATE(774), 1,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11369] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(333), 1,
      sym_name,
    STATE(759), 1,
      sym_vertexType,
    ACTIONS(290), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11384] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(396), 1,
      sym_graphName,
    STATE(501), 1,
      sym_name,
    ACTIONS(1053), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11399] = 4,
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
  [11414] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(5), 1,
      sym_accumName,
    ACTIONS(402), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11429] = 4,
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
  [11444] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(814), 1,
      sym_queryName,
    STATE(845), 1,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11459] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1057), 1,
      aux_sym_WITH_token1,
    ACTIONS(1059), 1,
      anon_sym_primary_id_as_attribute,
    ACTIONS(1055), 3,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
  [11474] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(13), 1,
      sym_accumName,
    ACTIONS(384), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11489] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1045), 1,
      aux_sym_CREATE_DIRECTED_EDGE_token2,
    STATE(549), 1,
      sym_WITH,
    ACTIONS(1061), 3,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
  [11504] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(5), 1,
      sym_accumName,
    ACTIONS(450), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11519] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(233), 1,
      sym_accumName,
    STATE(238), 1,
      sym_name,
    ACTIONS(755), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11534] = 4,
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
  [11549] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(413), 1,
      sym_name,
    STATE(750), 1,
      sym_tupleType,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11564] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(13), 1,
      sym_accumName,
    ACTIONS(432), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11579] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(333), 1,
      sym_name,
    STATE(808), 1,
      sym_vertexType,
    ACTIONS(290), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11594] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1065), 1,
      aux_sym_accumType_token5,
    ACTIONS(1063), 4,
      aux_sym_accumType_token2,
      aux_sym_accumType_token3,
      aux_sym_accumType_token4,
      aux_sym_accumType_token6,
  [11607] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(695), 1,
      sym_syntaxName,
    STATE(774), 1,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11622] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(690), 1,
      sym_syntaxName,
    STATE(774), 1,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11637] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(423), 1,
      sym_name,
    STATE(650), 1,
      sym_jsonKey,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1067), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
  [11663] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(683), 1,
      sym_syntaxName,
    STATE(774), 1,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11678] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(678), 1,
      sym_syntaxName,
    STATE(774), 1,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11693] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(333), 1,
      sym_name,
    STATE(596), 1,
      sym_vertexType,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11708] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(413), 1,
      sym_name,
    STATE(804), 1,
      sym_tupleType,
    ACTIONS(290), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11723] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1069), 1,
      anon_sym_COMMA,
    STATE(374), 1,
      aux_sym_fromClause_repeat1,
    ACTIONS(1072), 3,
      anon_sym_SEMI,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [11738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1074), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [11749] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(700), 1,
      sym_syntaxName,
    STATE(774), 1,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11764] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(669), 1,
      sym_syntaxName,
    STATE(774), 1,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11779] = 4,
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
  [11794] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      aux_sym_perClauseV2_token1,
    ACTIONS(1076), 1,
      anon_sym_SEMI,
    STATE(784), 1,
      sym_perClauseV2,
    STATE(419), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [11811] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(333), 1,
      sym_name,
    STATE(698), 1,
      sym_vertexType,
    ACTIONS(1078), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11826] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1080), 1,
      anon_sym_COMMA,
    ACTIONS(1082), 1,
      anon_sym_SEMI,
    ACTIONS(1084), 1,
      aux_sym_printStmt_token2,
    ACTIONS(1086), 1,
      aux_sym_printStmt_token3,
    STATE(427), 1,
      aux_sym_printStmt_repeat1,
  [11845] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      aux_sym_printExpr_token1,
    ACTIONS(615), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
  [11858] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      anon_sym_RETURNS,
    ACTIONS(1088), 1,
      anon_sym_LBRACE,
    ACTIONS(1090), 1,
      anon_sym_API,
    ACTIONS(1092), 1,
      anon_sym_SYNTAX,
    STATE(599), 1,
      sym_returns,
  [11877] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(686), 1,
      sym_syntaxName,
    STATE(774), 1,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11892] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(13), 1,
      sym_accumName,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11907] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(333), 1,
      sym_name,
    STATE(799), 1,
      sym_vertexType,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11922] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1094), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [11933] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1094), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(1096), 3,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [11946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1099), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [11957] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(736), 1,
      sym_syntaxName,
    STATE(774), 1,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11972] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(158), 1,
      sym_name,
    STATE(474), 1,
      sym_fieldName,
    ACTIONS(1101), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [11987] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(447), 1,
      sym_graphName,
    STATE(501), 1,
      sym_name,
    ACTIONS(1053), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12002] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(797), 1,
      sym_queryName,
    STATE(845), 1,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12017] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(5), 1,
      sym_accumName,
    ACTIONS(308), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12032] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1103), 1,
      anon_sym_RPAREN,
    ACTIONS(1105), 1,
      anon_sym_COMMA,
    ACTIONS(1107), 1,
      anon_sym_PIPE,
    STATE(476), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_repeat1,
    STATE(589), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_repeat2,
  [12051] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      anon_sym_RETURNS,
    ACTIONS(1017), 1,
      anon_sym_LBRACE,
    ACTIONS(1021), 1,
      anon_sym_API,
    ACTIONS(1023), 1,
      anon_sym_SYNTAX,
    STATE(524), 1,
      sym_returns,
  [12070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1109), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [12081] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      aux_sym_perClauseV2_token1,
    ACTIONS(1111), 1,
      anon_sym_SEMI,
    STATE(784), 1,
      sym_perClauseV2,
    STATE(419), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [12098] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1105), 1,
      anon_sym_COMMA,
    ACTIONS(1107), 1,
      anon_sym_PIPE,
    ACTIONS(1113), 1,
      anon_sym_RPAREN,
    STATE(476), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_repeat1,
    STATE(585), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_repeat2,
  [12117] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(233), 1,
      sym_accumName,
    STATE(238), 1,
      sym_name,
    ACTIONS(290), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12132] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(531), 1,
      sym_name,
    STATE(590), 1,
      sym_paramName,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12147] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(43), 1,
      sym_attrName,
    STATE(76), 1,
      sym_name,
    ACTIONS(1115), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12162] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      aux_sym_perClauseV2_token1,
    ACTIONS(1111), 1,
      anon_sym_SEMI,
    STATE(784), 1,
      sym_perClauseV2,
    STATE(379), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [12179] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(13), 1,
      sym_accumName,
    ACTIONS(402), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12194] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(706), 1,
      sym_syntaxName,
    STATE(774), 1,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12209] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(464), 1,
      sym_paramName,
    STATE(531), 1,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12224] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(285), 1,
      sym_name,
    STATE(375), 1,
      sym_vertexAlias,
    ACTIONS(755), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12239] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1117), 1,
      anon_sym_COMMA,
    STATE(374), 1,
      aux_sym_fromClause_repeat1,
    ACTIONS(1119), 3,
      anon_sym_SEMI,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [12254] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(383), 1,
      sym_graphName,
    STATE(501), 1,
      sym_name,
    ACTIONS(1053), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12269] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      anon_sym_RETURNS,
    ACTIONS(1121), 1,
      anon_sym_LBRACE,
    ACTIONS(1123), 1,
      anon_sym_API,
    ACTIONS(1125), 1,
      anon_sym_SYNTAX,
    STATE(573), 1,
      sym_returns,
  [12288] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(844), 1,
      sym_queryName,
    STATE(845), 1,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12303] = 4,
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
  [12318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1127), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token2,
  [12329] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(5), 1,
      sym_accumName,
    ACTIONS(372), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12344] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1129), 1,
      aux_sym_elementType_token1,
    ACTIONS(862), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token2,
  [12357] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1131), 1,
      anon_sym_RPAREN,
    ACTIONS(1133), 1,
      anon_sym_COMMA,
    STATE(562), 1,
      aux_sym_accumType_repeat1,
    ACTIONS(1135), 2,
      aux_sym_accumType_token11,
      aux_sym_accumType_token12,
  [12374] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1105), 1,
      anon_sym_COMMA,
    ACTIONS(1107), 1,
      anon_sym_PIPE,
    ACTIONS(1137), 1,
      anon_sym_RPAREN,
    STATE(395), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_repeat1,
    STATE(560), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_repeat2,
  [12393] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1139), 1,
      anon_sym_COMMA,
    STATE(418), 1,
      aux_sym_printStmt_repeat1,
    ACTIONS(1142), 3,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
  [12408] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1144), 1,
      anon_sym_SEMI,
    ACTIONS(1146), 1,
      aux_sym_perClauseV2_token1,
    STATE(784), 1,
      sym_perClauseV2,
    STATE(419), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [12425] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1105), 1,
      anon_sym_COMMA,
    ACTIONS(1107), 1,
      anon_sym_PIPE,
    ACTIONS(1149), 1,
      anon_sym_RPAREN,
    STATE(399), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_repeat1,
    STATE(558), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_repeat2,
  [12444] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(13), 1,
      sym_accumName,
    ACTIONS(450), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12459] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(13), 1,
      sym_accumName,
    ACTIONS(438), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      anon_sym_RBRACK,
  [12485] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      anon_sym_RETURNS,
    ACTIONS(1153), 1,
      anon_sym_LBRACE,
    ACTIONS(1155), 1,
      anon_sym_API,
    ACTIONS(1157), 1,
      anon_sym_SYNTAX,
    STATE(550), 1,
      sym_returns,
  [12504] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(423), 1,
      sym_name,
    STATE(492), 1,
      sym_jsonKey,
    ACTIONS(1159), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12519] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(714), 1,
      sym_syntaxName,
    STATE(774), 1,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12534] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1080), 1,
      anon_sym_COMMA,
    ACTIONS(1161), 1,
      anon_sym_SEMI,
    ACTIONS(1163), 1,
      aux_sym_printStmt_token2,
    ACTIONS(1165), 1,
      aux_sym_printStmt_token3,
    STATE(418), 1,
      aux_sym_printStmt_repeat1,
  [12553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
      aux_sym_printExpr_token1,
  [12564] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(410), 1,
      sym_graphName,
    STATE(501), 1,
      sym_name,
    ACTIONS(1053), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12579] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(285), 1,
      sym_name,
    STATE(397), 1,
      sym_vertexAlias,
    ACTIONS(755), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12594] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1117), 1,
      anon_sym_COMMA,
    STATE(408), 1,
      aux_sym_fromClause_repeat1,
    ACTIONS(1169), 3,
      anon_sym_SEMI,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [12609] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      aux_sym_perClauseV2_token1,
    ACTIONS(927), 1,
      anon_sym_SEMI,
    STATE(784), 1,
      sym_perClauseV2,
    STATE(398), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [12626] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(717), 1,
      sym_edgeAlias,
    STATE(727), 1,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12641] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      aux_sym_perClauseV2_token1,
    ACTIONS(927), 1,
      anon_sym_SEMI,
    STATE(784), 1,
      sym_perClauseV2,
    STATE(419), 2,
      sym_postAccumClause,
      aux_sym_gsqlSelectBlock_repeat1,
  [12658] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(5), 1,
      sym_accumName,
    ACTIONS(378), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12673] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1173), 1,
      anon_sym_GT,
    ACTIONS(1175), 1,
      anon_sym_PIPE,
    STATE(485), 1,
      aux_sym_stepEdgeTypes_repeat1,
    ACTIONS(1171), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [12690] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(285), 1,
      sym_name,
    STATE(780), 1,
      sym_vertexAlias,
    ACTIONS(1177), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12705] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(13), 1,
      sym_accumName,
    ACTIONS(444), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12720] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(727), 1,
      sym_name,
    STATE(728), 1,
      sym_edgeAlias,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12735] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1179), 1,
      anon_sym_EQ,
    ACTIONS(1047), 4,
      anon_sym_SEMI,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [12748] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(158), 1,
      sym_name,
    STATE(416), 1,
      sym_fieldName,
    ACTIONS(1101), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12763] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(158), 1,
      sym_name,
    STATE(643), 1,
      sym_fieldName,
    ACTIONS(290), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12778] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(333), 1,
      sym_name,
    STATE(417), 1,
      sym_vertexType,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12793] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(333), 1,
      sym_name,
    STATE(420), 1,
      sym_vertexType,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12808] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(774), 1,
      sym_name,
    STATE(775), 1,
      sym_syntaxName,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12823] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(5), 1,
      sym_accumName,
    ACTIONS(412), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12838] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      anon_sym_RETURNS,
    ACTIONS(981), 1,
      anon_sym_LBRACE,
    ACTIONS(985), 1,
      anon_sym_API,
    ACTIONS(987), 1,
      anon_sym_SYNTAX,
    STATE(529), 1,
      sym_returns,
  [12857] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_name,
    STATE(13), 1,
      sym_accumName,
    ACTIONS(372), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12872] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(424), 1,
      sym_graphName,
    STATE(501), 1,
      sym_name,
    ACTIONS(1053), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12887] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(158), 1,
      sym_name,
    STATE(540), 1,
      sym_fieldName,
    ACTIONS(290), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12902] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(333), 1,
      sym_name,
    STATE(772), 1,
      sym_vertexType,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12917] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(721), 1,
      sym_syntaxName,
    STATE(774), 1,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12932] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(333), 1,
      sym_name,
    STATE(771), 1,
      sym_vertexType,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12947] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(76), 1,
      sym_name,
    STATE(725), 1,
      sym_attrName,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [12962] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1181), 1,
      anon_sym_SEMI,
    ACTIONS(1185), 1,
      aux_sym_printStmt_token3,
    ACTIONS(1183), 2,
      anon_sym_AND,
      anon_sym_OR,
  [12976] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1187), 1,
      anon_sym_COMMA,
    STATE(456), 1,
      aux_sym_dmlSubStmtList_repeat1,
    ACTIONS(1190), 2,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
  [12990] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1192), 1,
      anon_sym_COMMA,
    STATE(456), 1,
      aux_sym_dmlSubStmtList_repeat1,
    ACTIONS(1194), 2,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
  [13004] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1196), 1,
      anon_sym_SEMI,
    ACTIONS(1198), 3,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [13016] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(841), 1,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [13028] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1200), 1,
      anon_sym_DOT,
    ACTIONS(874), 3,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_OR,
  [13040] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(45), 1,
      sym_name,
    ACTIONS(1115), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [13052] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1202), 1,
      anon_sym_RPAREN,
    ACTIONS(1198), 3,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [13064] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 2,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
    ACTIONS(1204), 2,
      anon_sym_AND,
      anon_sym_OR,
  [13076] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1207), 1,
      anon_sym_RPAREN,
    ACTIONS(1209), 1,
      anon_sym_EQ,
    ACTIONS(1211), 1,
      anon_sym_COMMA,
    STATE(528), 1,
      aux_sym_parameterList_repeat1,
  [13092] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_AT_AT,
    ACTIONS(1213), 1,
      anon_sym_AT,
    STATE(481), 2,
      sym_localAccumName,
      sym_globalAccumName,
  [13106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(482), 1,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [13118] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(548), 1,
      sym_name,
    ACTIONS(1215), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [13130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1217), 1,
      anon_sym_LT,
    ACTIONS(862), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_CREATE_VERTEX_token2,
  [13142] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 2,
      anon_sym_SEMI,
      aux_sym_printStmt_token3,
    ACTIONS(1219), 2,
      anon_sym_AND,
      anon_sym_OR,
  [13154] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1222), 1,
      anon_sym_SEMI,
    ACTIONS(1224), 1,
      aux_sym_printStmt_token3,
    ACTIONS(1183), 2,
      anon_sym_AND,
      anon_sym_OR,
  [13168] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1072), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      aux_sym_perClauseV2_token1,
  [13178] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1228), 1,
      aux_sym_CREATE_DIRECTED_EDGE_token2,
    ACTIONS(1226), 3,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
  [13190] = 5,
    ACTIONS(1230), 1,
      sym_comment,
    ACTIONS(1232), 1,
      anon_sym_DQUOTE,
    ACTIONS(1234), 1,
      aux_sym_stringLiteral_token1,
    ACTIONS(1236), 1,
      sym_escape_sequence,
    STATE(484), 1,
      aux_sym_stringLiteral_repeat1,
  [13206] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1238), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(1240), 2,
      aux_sym_accumType_token11,
      aux_sym_accumType_token12,
  [13218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1244), 1,
      aux_sym_CREATE_DIRECTED_EDGE_token2,
    ACTIONS(1242), 3,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
  [13230] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1248), 1,
      anon_sym_PIPE,
    STATE(476), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_repeat1,
    ACTIONS(1246), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13244] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1192), 1,
      anon_sym_COMMA,
    STATE(457), 1,
      aux_sym_dmlSubStmtList_repeat1,
    ACTIONS(1251), 2,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
  [13258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1253), 4,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_COLON,
  [13268] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1258), 1,
      anon_sym_primary_id_as_attribute,
    ACTIONS(1256), 3,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
  [13280] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
  [13290] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1260), 1,
      anon_sym_EQ,
    ACTIONS(1262), 1,
      anon_sym_COMMA,
    ACTIONS(1264), 1,
      anon_sym_SEMI,
    STATE(521), 1,
      aux_sym_accumDeclStmt_repeat1,
  [13306] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1266), 1,
      anon_sym_EQ,
    ACTIONS(1268), 1,
      anon_sym_COMMA,
    ACTIONS(1270), 1,
      anon_sym_SEMI,
    STATE(570), 1,
      aux_sym_baseDeclStmt_repeat1,
  [13322] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1274), 1,
      anon_sym_PIPE,
    STATE(483), 1,
      aux_sym_stepEdgeTypes_repeat1,
    ACTIONS(1272), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [13336] = 5,
    ACTIONS(1230), 1,
      sym_comment,
    ACTIONS(1277), 1,
      anon_sym_DQUOTE,
    ACTIONS(1279), 1,
      aux_sym_stringLiteral_token1,
    ACTIONS(1281), 1,
      sym_escape_sequence,
    STATE(495), 1,
      aux_sym_stringLiteral_repeat1,
  [13352] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1175), 1,
      anon_sym_PIPE,
    STATE(483), 1,
      aux_sym_stepEdgeTypes_repeat1,
    ACTIONS(1283), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [13366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1285), 4,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_COLON,
  [13376] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1289), 1,
      anon_sym_primary_id_as_attribute,
    ACTIONS(1287), 3,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
  [13388] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(519), 1,
      sym_name,
    ACTIONS(41), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [13400] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(48), 1,
      sym_name,
    ACTIONS(1115), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [13412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1291), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token2,
  [13422] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1293), 1,
      anon_sym_SEMI,
    ACTIONS(1198), 3,
      aux_sym_simpleSet_token1,
      aux_sym_simpleSet_token2,
      aux_sym_simpleSet_token3,
  [13434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1295), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
  [13444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1142), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_printStmt_token2,
      aux_sym_printStmt_token3,
  [13454] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1262), 1,
      anon_sym_COMMA,
    ACTIONS(1297), 1,
      anon_sym_EQ,
    ACTIONS(1299), 1,
      anon_sym_SEMI,
    STATE(580), 1,
      aux_sym_accumDeclStmt_repeat1,
  [13470] = 5,
    ACTIONS(1230), 1,
      sym_comment,
    ACTIONS(1301), 1,
      anon_sym_DQUOTE,
    ACTIONS(1303), 1,
      aux_sym_stringLiteral_token1,
    ACTIONS(1306), 1,
      sym_escape_sequence,
    STATE(495), 1,
      aux_sym_stringLiteral_repeat1,
  [13486] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1311), 1,
      aux_sym_CREATE_DIRECTED_EDGE_token2,
    ACTIONS(1309), 3,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
  [13498] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(578), 1,
      sym_name,
    ACTIONS(1215), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [13510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1313), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      aux_sym_CREATE_VERTEX_token2,
  [13520] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1315), 2,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
    ACTIONS(1317), 2,
      anon_sym_AND,
      anon_sym_OR,
  [13532] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1321), 1,
      aux_sym_CREATE_DIRECTED_EDGE_token2,
    ACTIONS(1319), 3,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
  [13544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1323), 4,
      anon_sym_LBRACE,
      anon_sym_API,
      anon_sym_SYNTAX,
      anon_sym_RETURNS,
  [13554] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1325), 1,
      anon_sym_DOT,
    ACTIONS(874), 3,
      anon_sym_AND,
      anon_sym_OR,
      aux_sym_queryBodyIfStmt_token2,
  [13566] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1329), 1,
      aux_sym_CREATE_DIRECTED_EDGE_token2,
    ACTIONS(1327), 3,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
  [13578] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1133), 1,
      anon_sym_COMMA,
    ACTIONS(1331), 1,
      anon_sym_RPAREN,
    STATE(592), 1,
      aux_sym_accumType_repeat1,
  [13591] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1333), 1,
      anon_sym_RPAREN,
    ACTIONS(1335), 1,
      anon_sym_COMMA,
    STATE(505), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_repeat2,
  [13604] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      aux_sym_integer_token1,
    ACTIONS(122), 1,
      anon_sym_COMMA,
    STATE(7), 1,
      aux_sym_integer_repeat1,
  [13617] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1340), 1,
      aux_sym_queryBodyIfStmt_token2,
    ACTIONS(1338), 2,
      anon_sym_AND,
      anon_sym_OR,
  [13628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1342), 3,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
  [13637] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1173), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COLON,
  [13646] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_COMMA,
    ACTIONS(1344), 1,
      anon_sym_RPAREN,
    STATE(547), 1,
      aux_sym_argList_repeat1,
  [13659] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1346), 1,
      anon_sym_RBRACE,
    ACTIONS(1348), 1,
      anon_sym_COMMA,
    STATE(571), 1,
      aux_sym_seedSet_repeat1,
  [13672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      aux_sym_queryBodyIfStmt_token2,
    ACTIONS(1350), 2,
      anon_sym_AND,
      anon_sym_OR,
  [13683] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1353), 1,
      anon_sym_RBRACE,
    ACTIONS(1355), 1,
      anon_sym_COMMA,
    STATE(513), 1,
      aux_sym_seedSet_repeat1,
  [13696] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      aux_sym_queryBodyIfStmt_token3,
    ACTIONS(1360), 1,
      aux_sym_queryBodyIfStmt_token4,
    STATE(576), 1,
      aux_sym_queryBodyIfStmt_repeat1,
  [13709] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1041), 1,
      anon_sym_DOT_STAR,
    ACTIONS(1362), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [13720] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1268), 1,
      anon_sym_COMMA,
    ACTIONS(1365), 1,
      anon_sym_SEMI,
    STATE(569), 1,
      aux_sym_baseDeclStmt_repeat1,
  [13733] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1367), 1,
      anon_sym_RPAREN,
    ACTIONS(1369), 1,
      anon_sym_COMMA,
    STATE(517), 1,
      aux_sym_perClauseV2_repeat1,
  [13746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1190), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
  [13755] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1372), 1,
      anon_sym_EQ,
    ACTIONS(1374), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13766] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_RPAREN,
    ACTIONS(1376), 2,
      anon_sym_AND,
      anon_sym_OR,
  [13777] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1262), 1,
      anon_sym_COMMA,
    ACTIONS(1299), 1,
      anon_sym_SEMI,
    STATE(533), 1,
      aux_sym_accumDeclStmt_repeat1,
  [13790] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1374), 1,
      anon_sym_SEMI,
    ACTIONS(1379), 1,
      anon_sym_COMMA,
    STATE(522), 1,
      aux_sym_baseDeclStmt_repeat1,
  [13803] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1382), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13812] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(981), 1,
      anon_sym_LBRACE,
    ACTIONS(985), 1,
      anon_sym_API,
    ACTIONS(987), 1,
      anon_sym_SYNTAX,
  [13825] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_LBRACE,
    ACTIONS(963), 1,
      anon_sym_API,
    ACTIONS(965), 1,
      anon_sym_SYNTAX,
  [13838] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1384), 1,
      anon_sym_COMMA,
    ACTIONS(1387), 1,
      anon_sym_RBRACK,
    STATE(526), 1,
      aux_sym_vExprSet_repeat1,
  [13851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1389), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [13860] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1211), 1,
      anon_sym_COMMA,
    ACTIONS(1391), 1,
      anon_sym_RPAREN,
    STATE(556), 1,
      aux_sym_parameterList_repeat1,
  [13873] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1153), 1,
      anon_sym_LBRACE,
    ACTIONS(1155), 1,
      anon_sym_API,
    ACTIONS(1157), 1,
      anon_sym_SYNTAX,
  [13886] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1393), 1,
      aux_sym_queryBodyIfStmt_token3,
    ACTIONS(1396), 1,
      aux_sym_queryBodyIfStmt_token4,
    STATE(530), 1,
      aux_sym_queryBodyIfStmt_repeat1,
  [13899] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1398), 3,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_COMMA,
  [13908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_CREATE_VERTEX_token2,
  [13917] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1400), 1,
      anon_sym_COMMA,
    ACTIONS(1403), 1,
      anon_sym_SEMI,
    STATE(533), 1,
      aux_sym_accumDeclStmt_repeat1,
  [13930] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1287), 3,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
  [13939] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    ACTIONS(120), 1,
      aux_sym_integer_token1,
    STATE(7), 1,
      aux_sym_integer_repeat1,
  [13952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1061), 3,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
  [13961] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1262), 1,
      anon_sym_COMMA,
    ACTIONS(1405), 1,
      anon_sym_SEMI,
    STATE(604), 1,
      aux_sym_accumDeclStmt_repeat1,
  [13974] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1407), 1,
      anon_sym_RPAREN,
    ACTIONS(1409), 1,
      anon_sym_COMMA,
    STATE(538), 1,
      aux_sym_CREATE_VERTEX_repeat1,
  [13987] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1412), 1,
      anon_sym_EQ,
    ACTIONS(1403), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13998] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1414), 1,
      anon_sym_COMMA,
    ACTIONS(1416), 1,
      anon_sym_GT,
    STATE(543), 1,
      aux_sym_tupleFields_repeat1,
  [14011] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1262), 1,
      anon_sym_COMMA,
    ACTIONS(1418), 1,
      anon_sym_SEMI,
    STATE(533), 1,
      aux_sym_accumDeclStmt_repeat1,
  [14024] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1420), 1,
      aux_sym_elementType_token1,
    ACTIONS(862), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [14035] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1414), 1,
      anon_sym_COMMA,
    ACTIONS(1422), 1,
      anon_sym_GT,
    STATE(586), 1,
      aux_sym_tupleFields_repeat1,
  [14048] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1262), 1,
      anon_sym_COMMA,
    ACTIONS(1424), 1,
      anon_sym_SEMI,
    STATE(541), 1,
      aux_sym_accumDeclStmt_repeat1,
  [14061] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1426), 1,
      anon_sym_COMMA,
    ACTIONS(1428), 1,
      anon_sym_RBRACK,
    STATE(588), 1,
      aux_sym_vExprSet_repeat1,
  [14074] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1430), 1,
      anon_sym_RPAREN,
    ACTIONS(1432), 1,
      anon_sym_COMMA,
    STATE(566), 1,
      aux_sym_CREATE_VERTEX_repeat1,
  [14087] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      anon_sym_RPAREN,
    ACTIONS(1434), 1,
      anon_sym_COMMA,
    STATE(547), 1,
      aux_sym_argList_repeat1,
  [14100] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1437), 3,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
  [14109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1439), 3,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
  [14118] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1121), 1,
      anon_sym_LBRACE,
    ACTIONS(1123), 1,
      anon_sym_API,
    ACTIONS(1125), 1,
      anon_sym_SYNTAX,
  [14131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_CREATE_VERTEX_token2,
  [14140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_CREATE_VERTEX_token2,
  [14149] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1441), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [14158] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1445), 1,
      aux_sym_CREATE_VERTEX_token2,
    ACTIONS(1443), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1447), 3,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
  [14178] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1449), 1,
      anon_sym_RPAREN,
    ACTIONS(1451), 1,
      anon_sym_COMMA,
    STATE(556), 1,
      aux_sym_parameterList_repeat1,
  [14191] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1211), 1,
      anon_sym_COMMA,
    ACTIONS(1454), 1,
      anon_sym_RPAREN,
    STATE(595), 1,
      aux_sym_parameterList_repeat1,
  [14204] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1105), 1,
      anon_sym_COMMA,
    ACTIONS(1113), 1,
      anon_sym_RPAREN,
    STATE(505), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_repeat2,
  [14217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1456), 3,
      anon_sym__,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [14226] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1103), 1,
      anon_sym_RPAREN,
    ACTIONS(1105), 1,
      anon_sym_COMMA,
    STATE(505), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_repeat2,
  [14239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(929), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_CREATE_VERTEX_token2,
  [14248] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1133), 1,
      anon_sym_COMMA,
    ACTIONS(1331), 1,
      anon_sym_RPAREN,
    STATE(593), 1,
      aux_sym_accumType_repeat1,
  [14261] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1458), 1,
      aux_sym_queryBodyIfStmt_token3,
    ACTIONS(1461), 1,
      aux_sym_queryBodyIfStmt_token4,
    STATE(576), 1,
      aux_sym_queryBodyIfStmt_repeat1,
  [14274] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1464), 1,
      aux_sym_queryBodyIfStmt_token2,
    ACTIONS(1338), 2,
      anon_sym_AND,
      anon_sym_OR,
  [14285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1272), 3,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COLON,
  [14294] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1432), 1,
      anon_sym_COMMA,
    ACTIONS(1466), 1,
      anon_sym_RPAREN,
    STATE(538), 1,
      aux_sym_CREATE_VERTEX_repeat1,
  [14307] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1017), 1,
      anon_sym_LBRACE,
    ACTIONS(1021), 1,
      anon_sym_API,
    ACTIONS(1023), 1,
      anon_sym_SYNTAX,
  [14320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_CREATE_VERTEX_token2,
  [14329] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1268), 1,
      anon_sym_COMMA,
    ACTIONS(1468), 1,
      anon_sym_SEMI,
    STATE(522), 1,
      aux_sym_baseDeclStmt_repeat1,
  [14342] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1268), 1,
      anon_sym_COMMA,
    ACTIONS(1470), 1,
      anon_sym_SEMI,
    STATE(522), 1,
      aux_sym_baseDeclStmt_repeat1,
  [14355] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1348), 1,
      anon_sym_COMMA,
    ACTIONS(1472), 1,
      anon_sym_RBRACE,
    STATE(513), 1,
      aux_sym_seedSet_repeat1,
  [14368] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1474), 1,
      anon_sym_RPAREN,
    ACTIONS(1476), 1,
      anon_sym_COMMA,
    STATE(517), 1,
      aux_sym_perClauseV2_repeat1,
  [14381] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1088), 1,
      anon_sym_LBRACE,
    ACTIONS(1090), 1,
      anon_sym_API,
    ACTIONS(1092), 1,
      anon_sym_SYNTAX,
  [14394] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1478), 1,
      anon_sym_RPAREN,
    ACTIONS(1480), 2,
      anon_sym_AND,
      anon_sym_OR,
  [14405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1482), 3,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
  [14414] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1484), 1,
      aux_sym_queryBodyIfStmt_token3,
    ACTIONS(1486), 1,
      aux_sym_queryBodyIfStmt_token4,
    STATE(530), 1,
      aux_sym_queryBodyIfStmt_repeat1,
  [14427] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1488), 3,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
  [14436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1490), 3,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
  [14445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1492), 3,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
  [14454] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1262), 1,
      anon_sym_COMMA,
    ACTIONS(1405), 1,
      anon_sym_SEMI,
    STATE(533), 1,
      aux_sym_accumDeclStmt_repeat1,
  [14467] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1496), 1,
      anon_sym_GT,
    ACTIONS(1494), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [14478] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1500), 1,
      anon_sym_DOT,
    ACTIONS(1498), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [14489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1502), 3,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
  [14498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1504), 3,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
  [14507] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1105), 1,
      anon_sym_COMMA,
    ACTIONS(1506), 1,
      anon_sym_RPAREN,
    STATE(505), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_repeat2,
  [14520] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1508), 1,
      anon_sym_COMMA,
    ACTIONS(1511), 1,
      anon_sym_GT,
    STATE(586), 1,
      aux_sym_tupleFields_repeat1,
  [14533] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1513), 1,
      aux_sym_queryBodyIfStmt_token2,
    ACTIONS(1338), 2,
      anon_sym_AND,
      anon_sym_OR,
  [14544] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1426), 1,
      anon_sym_COMMA,
    ACTIONS(1515), 1,
      anon_sym_RBRACK,
    STATE(526), 1,
      aux_sym_vExprSet_repeat1,
  [14557] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1105), 1,
      anon_sym_COMMA,
    ACTIONS(1517), 1,
      anon_sym_RPAREN,
    STATE(505), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_repeat2,
  [14570] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1521), 1,
      anon_sym_EQ,
    ACTIONS(1519), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14581] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      anon_sym_LBRACE,
    ACTIONS(910), 1,
      anon_sym_API,
    ACTIONS(912), 1,
      anon_sym_SYNTAX,
  [14594] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1133), 1,
      anon_sym_COMMA,
    ACTIONS(1523), 1,
      anon_sym_RPAREN,
    STATE(593), 1,
      aux_sym_accumType_repeat1,
  [14607] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1238), 1,
      anon_sym_RPAREN,
    ACTIONS(1525), 1,
      anon_sym_COMMA,
    STATE(593), 1,
      aux_sym_accumType_repeat1,
  [14620] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1528), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
  [14629] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1211), 1,
      anon_sym_COMMA,
    ACTIONS(1530), 1,
      anon_sym_RPAREN,
    STATE(556), 1,
      aux_sym_parameterList_repeat1,
  [14642] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1532), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [14651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1063), 3,
      aux_sym_accumType_token2,
      aux_sym_accumType_token3,
      aux_sym_accumType_token4,
  [14660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1534), 3,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
  [14669] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1536), 1,
      anon_sym_LBRACE,
    ACTIONS(1538), 1,
      anon_sym_API,
    ACTIONS(1540), 1,
      anon_sym_SYNTAX,
  [14682] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1542), 3,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
  [14691] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1546), 1,
      aux_sym_CREATE_VERTEX_token2,
    ACTIONS(1544), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1548), 3,
      ts_builtin_sym_end,
      aux_sym_createSignature_token1,
      aux_sym_DROP_token1,
  [14711] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1550), 3,
      anon_sym_LBRACE,
      anon_sym_API,
      anon_sym_SYNTAX,
  [14720] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1262), 1,
      anon_sym_COMMA,
    ACTIONS(1424), 1,
      anon_sym_SEMI,
    STATE(533), 1,
      aux_sym_accumDeclStmt_repeat1,
  [14733] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1552), 1,
      anon_sym_DOT,
    ACTIONS(1554), 1,
      aux_sym_integer_token1,
    STATE(10), 1,
      aux_sym_integer_repeat1,
  [14746] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1476), 1,
      anon_sym_COMMA,
    ACTIONS(1556), 1,
      anon_sym_RPAREN,
    STATE(572), 1,
      aux_sym_perClauseV2_repeat1,
  [14759] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1558), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14767] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    STATE(735), 1,
      sym_stringLiteral,
  [14777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1560), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14785] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1562), 1,
      anon_sym_LBRACE,
    ACTIONS(1564), 1,
      anon_sym_SYNTAX,
  [14795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1566), 2,
      aux_sym_queryBodyIfStmt_token3,
      aux_sym_queryBodyIfStmt_token4,
  [14803] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(981), 1,
      anon_sym_LBRACE,
    ACTIONS(987), 1,
      anon_sym_SYNTAX,
  [14813] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    STATE(696), 1,
      sym_stringLiteral,
  [14823] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    STATE(677), 1,
      sym_stringLiteral,
  [14833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1568), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14841] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1536), 1,
      anon_sym_LBRACE,
    ACTIONS(1540), 1,
      anon_sym_SYNTAX,
  [14851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1570), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14859] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    STATE(667), 1,
      sym_stringLiteral,
  [14869] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1573), 1,
      aux_sym_integer_token1,
    STATE(14), 1,
      aux_sym_integer_repeat1,
  [14879] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1575), 1,
      anon_sym_LBRACE,
    ACTIONS(1577), 1,
      anon_sym_SYNTAX,
  [14889] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1579), 1,
      anon_sym_DQUOTE,
    ACTIONS(1581), 1,
      anon_sym_DQUOTEnone_DQUOTE,
  [14899] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1583), 1,
      anon_sym_LBRACE,
    ACTIONS(1585), 1,
      anon_sym_SYNTAX,
  [14909] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1587), 2,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
  [14917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1589), 2,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
  [14925] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1591), 1,
      anon_sym_EQ,
    ACTIONS(1593), 1,
      anon_sym_DOT,
  [14935] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1595), 1,
      anon_sym_RPAREN,
    ACTIONS(1597), 1,
      anon_sym_COLON,
  [14945] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    STATE(701), 1,
      sym_stringLiteral,
  [14955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1599), 2,
      anon_sym_SEMI,
      aux_sym_perClauseV2_token1,
  [14963] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1088), 1,
      anon_sym_LBRACE,
    ACTIONS(1092), 1,
      anon_sym_SYNTAX,
  [14973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1601), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [14981] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_AT_AT,
    STATE(494), 1,
      sym_globalAccumName,
  [14991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1603), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [14999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1605), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [15007] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1121), 1,
      anon_sym_LBRACE,
    ACTIONS(1125), 1,
      anon_sym_SYNTAX,
  [15017] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1607), 1,
      anon_sym_LBRACE,
    ACTIONS(1609), 1,
      anon_sym_SYNTAX,
  [15027] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    STATE(699), 1,
      sym_stringLiteral,
  [15037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1611), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [15045] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1613), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [15053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1615), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [15061] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    STATE(702), 1,
      sym_stringLiteral,
  [15071] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1617), 1,
      aux_sym_integer_token1,
    STATE(506), 1,
      aux_sym_integer_repeat1,
  [15081] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1619), 1,
      aux_sym_primary_id_name_type_token1,
    STATE(546), 1,
      sym_primary_id_name_type,
  [15091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1621), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [15099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1623), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [15107] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      aux_sym_integer_token1,
    STATE(11), 1,
      aux_sym_integer_repeat1,
  [15117] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1625), 1,
      anon_sym_LPAREN,
    ACTIONS(1627), 1,
      anon_sym_EQ,
  [15127] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1629), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_token3,
    STATE(259), 1,
      sym_fromClause,
  [15137] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1153), 1,
      anon_sym_LBRACE,
    ACTIONS(1157), 1,
      anon_sym_SYNTAX,
  [15147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1631), 1,
      aux_sym_condition_token1,
    ACTIONS(1633), 1,
      aux_sym_condition_token4,
  [15157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1635), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [15165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1387), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [15173] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    STATE(757), 1,
      sym_stringLiteral,
  [15183] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(989), 1,
      anon_sym_AT,
    STATE(539), 1,
      sym_localAccumName,
  [15193] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    STATE(715), 1,
      sym_stringLiteral,
  [15203] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1025), 1,
      anon_sym_DOLLAR,
    STATE(716), 1,
      sym_columnId,
  [15213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1637), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [15221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1639), 2,
      aux_sym_accumClause_token1,
      aux_sym_postAccumClause_token1,
  [15229] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    STATE(707), 1,
      sym_stringLiteral,
  [15239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1367), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [15247] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1641), 1,
      aux_sym_accumClause_token1,
    ACTIONS(1643), 1,
      aux_sym_postAccumClause_token1,
  [15257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1645), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [15265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1647), 1,
      aux_sym_createSignature_token4,
    ACTIONS(1649), 1,
      anon_sym_QUERY,
  [15275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1651), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [15283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1353), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [15291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1653), 1,
      anon_sym_LPAREN,
    STATE(632), 1,
      sym_selectVertParams,
  [15301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1655), 1,
      anon_sym_LPAREN,
  [15308] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1657), 1,
      anon_sym_RPAREN,
  [15315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1659), 1,
      anon_sym_EQ,
  [15322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1562), 1,
      anon_sym_LBRACE,
  [15329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1661), 1,
      aux_sym_CREATE_DIRECTED_EDGE_token3,
  [15336] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1663), 1,
      aux_sym_CREATE_DIRECTED_EDGE_token4,
  [15343] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1665), 1,
      anon_sym_DQUOTE,
  [15350] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1667), 1,
      anon_sym_EQ,
  [15357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1669), 1,
      aux_sym_constant_token1,
  [15364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1671), 1,
      anon_sym_LPAREN,
  [15371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1673), 1,
      anon_sym_EQ,
  [15378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1675), 1,
      anon_sym_RPAREN,
  [15385] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1575), 1,
      anon_sym_LBRACE,
  [15392] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1677), 1,
      anon_sym_DQUOTE,
  [15399] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1679), 1,
      aux_sym_CREATE_DIRECTED_EDGE_token4,
  [15406] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1681), 1,
      anon_sym_DQUOTE,
  [15413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1683), 1,
      anon_sym_RPAREN,
  [15420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1583), 1,
      anon_sym_LBRACE,
  [15427] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1685), 1,
      anon_sym_DQUOTEtrue_DQUOTE,
  [15434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1687), 1,
      anon_sym_LPAREN,
  [15441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1536), 1,
      anon_sym_LBRACE,
  [15448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1689), 1,
      anon_sym_DQUOTE,
  [15455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1691), 1,
      aux_sym_CREATE_DIRECTED_EDGE_token4,
  [15462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1693), 1,
      anon_sym_DQUOTE,
  [15469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1695), 1,
      anon_sym_LBRACE,
  [15476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1697), 1,
      anon_sym_EQ,
  [15483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1699), 1,
      aux_sym_CREATE_DIRECTED_EDGE_token3,
  [15490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1701), 1,
      anon_sym_DQUOTE,
  [15497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1703), 1,
      aux_sym_selectVertParams_token1,
  [15504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1705), 1,
      anon_sym_LBRACE,
  [15511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1707), 1,
      anon_sym_COMMA,
  [15518] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1709), 1,
      anon_sym_LPAREN,
  [15525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1711), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_token4,
  [15532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1713), 1,
      anon_sym_RPAREN,
  [15539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1607), 1,
      anon_sym_LBRACE,
  [15546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1715), 1,
      anon_sym_RPAREN,
  [15553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1717), 1,
      anon_sym_RPAREN,
  [15560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1719), 1,
      anon_sym_COMMA,
  [15567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1721), 1,
      aux_sym_CREATE_DIRECTED_EDGE_token3,
  [15574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1723), 1,
      anon_sym_DQUOTEtrue_DQUOTE,
  [15581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1088), 1,
      anon_sym_LBRACE,
  [15588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1725), 1,
      anon_sym_RPAREN,
  [15595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1727), 1,
      anon_sym_LPAREN,
  [15602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1729), 1,
      anon_sym_COMMA,
  [15609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1731), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_token3,
  [15616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1733), 1,
      anon_sym_EQ,
  [15623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1735), 1,
      anon_sym_DQUOTE,
  [15630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1737), 1,
      anon_sym_LPAREN,
  [15637] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1121), 1,
      anon_sym_LBRACE,
  [15644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1739), 1,
      anon_sym_RPAREN,
  [15651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1741), 1,
      anon_sym_COMMA,
  [15658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1743), 1,
      anon_sym_RPAREN,
  [15665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1745), 1,
      anon_sym_RPAREN,
  [15672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1747), 1,
      anon_sym_SEMI,
  [15679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1749), 1,
      aux_sym_WITH_token2,
  [15686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1153), 1,
      anon_sym_LBRACE,
  [15693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1751), 1,
      anon_sym_GRAPH,
  [15700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1753), 1,
      anon_sym_LPAREN,
  [15707] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1755), 1,
      anon_sym_RPAREN,
  [15714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1757), 1,
      anon_sym_EQ,
  [15721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1759), 1,
      anon_sym_DASH,
  [15728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1761), 1,
      anon_sym_RPAREN,
  [15735] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1763), 1,
      anon_sym_RPAREN,
  [15742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1765), 1,
      anon_sym_RPAREN,
  [15749] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1767), 1,
      anon_sym_SEMI,
  [15756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1769), 1,
      aux_sym_queryBodyIfStmt_token1,
  [15763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1771), 1,
      aux_sym_queryBodyIfStmt_token4,
  [15770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1773), 1,
      anon_sym_SEMI,
  [15777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1775), 1,
      anon_sym_DQUOTEtrue_DQUOTE,
  [15784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1777), 1,
      anon_sym_RPAREN,
  [15791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(981), 1,
      anon_sym_LBRACE,
  [15798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1779), 1,
      anon_sym_LPAREN,
  [15805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1781), 1,
      anon_sym_GRAPH,
  [15812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1783), 1,
      anon_sym_SEMI,
  [15819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1785), 1,
      anon_sym_COMMA,
  [15826] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1196), 1,
      anon_sym_SEMI,
  [15833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1787), 1,
      anon_sym_RPAREN,
  [15840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1789), 1,
      anon_sym_RPAREN,
  [15847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1791), 1,
      anon_sym_SEMI,
  [15854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1793), 1,
      anon_sym_SEMI,
  [15861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1795), 1,
      aux_sym_queryBodyIfStmt_token4,
  [15868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1797), 1,
      anon_sym_COMMA,
  [15875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1800), 1,
      anon_sym_COMMA,
  [15882] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1802), 1,
      anon_sym_COMMA,
  [15889] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1804), 1,
      anon_sym_SEMI,
  [15896] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1806), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_token4,
  [15903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1808), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_token4,
  [15910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1810), 1,
      anon_sym_EQ,
  [15917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1812), 1,
      anon_sym_EQ,
  [15924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1814), 1,
      anon_sym_RPAREN,
  [15931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1816), 1,
      anon_sym_SEMI,
  [15938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1818), 1,
      anon_sym_RPAREN,
  [15945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1017), 1,
      anon_sym_LBRACE,
  [15952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1820), 1,
      anon_sym_GT,
  [15959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1822), 1,
      anon_sym_LPAREN,
  [15966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1824), 1,
      anon_sym_GRAPH,
  [15973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1826), 1,
      anon_sym_RPAREN,
  [15980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1828), 1,
      anon_sym_SEMI,
  [15987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1830), 1,
      anon_sym_PLUS_EQ,
  [15994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1222), 1,
      anon_sym_SEMI,
  [16001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1832), 1,
      anon_sym_SEMI,
  [16008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1834), 1,
      anon_sym_SEMI,
  [16015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1836), 1,
      anon_sym_GT,
  [16022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1838), 1,
      aux_sym_CREATE_GRAPH_token2,
  [16029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1840), 1,
      anon_sym_SEMI,
  [16036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1842), 1,
      anon_sym_COMMA,
  [16043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1844), 1,
      anon_sym_COMMA,
  [16050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1846), 1,
      anon_sym_GT,
  [16057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1848), 1,
      anon_sym_LBRACE,
  [16064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_LBRACE,
  [16071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1850), 1,
      anon_sym_LPAREN,
  [16078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1852), 1,
      anon_sym_GRAPH,
  [16085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_RPAREN,
  [16092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      aux_sym_gsqlSelectClause_token1,
  [16099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1854), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_token3,
  [16106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1856), 1,
      anon_sym_DOT_STAR,
  [16113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1858), 1,
      anon_sym_SEMI,
  [16120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1860), 1,
      anon_sym_EQ,
  [16127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1643), 1,
      aux_sym_postAccumClause_token1,
  [16134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1862), 1,
      anon_sym_LPAREN,
  [16141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1864), 1,
      anon_sym_SEMI,
  [16148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1181), 1,
      anon_sym_SEMI,
  [16155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1867), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_token3,
  [16162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1869), 1,
      aux_sym_condition_token4,
  [16169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1871), 1,
      anon_sym_LPAREN,
  [16176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1873), 1,
      anon_sym_GT,
  [16183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1875), 1,
      aux_sym_CREATE_GRAPH_token2,
  [16190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1877), 1,
      anon_sym_GT,
  [16197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1879), 1,
      anon_sym_LPAREN,
  [16204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1881), 1,
      anon_sym_GRAPH,
  [16211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      anon_sym_RPAREN,
  [16218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1883), 1,
      anon_sym_LPAREN,
  [16225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1293), 1,
      anon_sym_SEMI,
  [16232] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1885), 1,
      anon_sym_RPAREN,
  [16239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1887), 1,
      anon_sym_LPAREN,
  [16246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1889), 1,
      anon_sym_RBRACE,
  [16253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1891), 1,
      aux_sym_condition_token2,
  [16260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1893), 1,
      anon_sym_RPAREN,
  [16267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1895), 1,
      anon_sym_GT,
  [16274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1897), 1,
      anon_sym_COMMA,
  [16281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1899), 1,
      anon_sym_GT,
  [16288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1901), 1,
      anon_sym_GT,
  [16295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1903), 1,
      anon_sym_GT,
  [16302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1001), 1,
      anon_sym_RPAREN,
  [16309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1905), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_token3,
  [16316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1907), 1,
      aux_sym_DROP_token2,
  [16323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_RPAREN,
  [16330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1909), 1,
      anon_sym_LT,
  [16337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1911), 1,
      anon_sym_LPAREN,
  [16344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1913), 1,
      anon_sym_RBRACE,
  [16351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1915), 1,
      anon_sym_LPAREN,
  [16358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1917), 1,
      anon_sym_LPAREN,
  [16365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1919), 1,
      anon_sym_LT,
  [16372] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1921), 1,
      anon_sym_LPAREN,
  [16379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1923), 1,
      anon_sym_LPAREN,
  [16386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1925), 1,
      anon_sym_LPAREN,
  [16393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1927), 1,
      anon_sym_LPAREN,
  [16400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1929), 1,
      anon_sym_QUERY,
  [16407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1931), 1,
      anon_sym_SEMI,
  [16414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1933), 1,
      anon_sym_SEMI,
  [16421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1935), 1,
      anon_sym_SEMI,
  [16428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1937), 1,
      anon_sym_SEMI,
  [16435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1939), 1,
      anon_sym_RBRACE,
  [16442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1941), 1,
      anon_sym_SEMI,
  [16449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1943), 1,
      anon_sym_SEMI,
  [16456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1945), 1,
      anon_sym_RBRACE,
  [16463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1947), 1,
      aux_sym_condition_token2,
  [16470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1949), 1,
      anon_sym_LT,
  [16477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1951), 1,
      anon_sym_LT,
  [16484] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1953), 1,
      anon_sym_LT,
  [16491] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1955), 1,
      anon_sym_LT,
  [16498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1957), 1,
      aux_sym_condition_token2,
  [16505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1959), 1,
      anon_sym_LT,
  [16512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1961), 1,
      anon_sym_LT,
  [16519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1963), 1,
      aux_sym_typedef_token2,
  [16526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1965), 1,
      anon_sym_LPAREN,
  [16533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1967), 1,
      aux_sym_condition_token2,
  [16540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1969), 1,
      anon_sym_LPAREN,
  [16547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1971), 1,
      anon_sym_LPAREN,
  [16554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1973), 1,
      anon_sym_LPAREN,
  [16561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1975), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_token2,
  [16568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1977), 1,
      aux_sym_CREATE_UNDIRECTED_EDGE_token2,
  [16575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1979), 1,
      anon_sym_QUERY,
  [16582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1981), 1,
      aux_sym_createSignature_token3,
  [16589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1983), 1,
      anon_sym_LBRACE,
  [16596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1985), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 131,
  [SMALL_STATE(4)] = 247,
  [SMALL_STATE(5)] = 290,
  [SMALL_STATE(6)] = 332,
  [SMALL_STATE(7)] = 411,
  [SMALL_STATE(8)] = 456,
  [SMALL_STATE(9)] = 535,
  [SMALL_STATE(10)] = 582,
  [SMALL_STATE(11)] = 629,
  [SMALL_STATE(12)] = 673,
  [SMALL_STATE(13)] = 717,
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
  [SMALL_STATE(43)] = 1941,
  [SMALL_STATE(44)] = 2007,
  [SMALL_STATE(45)] = 2045,
  [SMALL_STATE(46)] = 2111,
  [SMALL_STATE(47)] = 2177,
  [SMALL_STATE(48)] = 2211,
  [SMALL_STATE(49)] = 2277,
  [SMALL_STATE(50)] = 2315,
  [SMALL_STATE(51)] = 2376,
  [SMALL_STATE(52)] = 2442,
  [SMALL_STATE(53)] = 2490,
  [SMALL_STATE(54)] = 2556,
  [SMALL_STATE(55)] = 2604,
  [SMALL_STATE(56)] = 2641,
  [SMALL_STATE(57)] = 2676,
  [SMALL_STATE(58)] = 2711,
  [SMALL_STATE(59)] = 2744,
  [SMALL_STATE(60)] = 2777,
  [SMALL_STATE(61)] = 2824,
  [SMALL_STATE(62)] = 2859,
  [SMALL_STATE(63)] = 2906,
  [SMALL_STATE(64)] = 2943,
  [SMALL_STATE(65)] = 3003,
  [SMALL_STATE(66)] = 3063,
  [SMALL_STATE(67)] = 3123,
  [SMALL_STATE(68)] = 3183,
  [SMALL_STATE(69)] = 3243,
  [SMALL_STATE(70)] = 3279,
  [SMALL_STATE(71)] = 3315,
  [SMALL_STATE(72)] = 3351,
  [SMALL_STATE(73)] = 3411,
  [SMALL_STATE(74)] = 3443,
  [SMALL_STATE(75)] = 3479,
  [SMALL_STATE(76)] = 3539,
  [SMALL_STATE(77)] = 3569,
  [SMALL_STATE(78)] = 3629,
  [SMALL_STATE(79)] = 3689,
  [SMALL_STATE(80)] = 3749,
  [SMALL_STATE(81)] = 3785,
  [SMALL_STATE(82)] = 3845,
  [SMALL_STATE(83)] = 3905,
  [SMALL_STATE(84)] = 3937,
  [SMALL_STATE(85)] = 3997,
  [SMALL_STATE(86)] = 4057,
  [SMALL_STATE(87)] = 4114,
  [SMALL_STATE(88)] = 4171,
  [SMALL_STATE(89)] = 4228,
  [SMALL_STATE(90)] = 4285,
  [SMALL_STATE(91)] = 4342,
  [SMALL_STATE(92)] = 4399,
  [SMALL_STATE(93)] = 4456,
  [SMALL_STATE(94)] = 4513,
  [SMALL_STATE(95)] = 4570,
  [SMALL_STATE(96)] = 4627,
  [SMALL_STATE(97)] = 4684,
  [SMALL_STATE(98)] = 4741,
  [SMALL_STATE(99)] = 4798,
  [SMALL_STATE(100)] = 4855,
  [SMALL_STATE(101)] = 4912,
  [SMALL_STATE(102)] = 4969,
  [SMALL_STATE(103)] = 5026,
  [SMALL_STATE(104)] = 5083,
  [SMALL_STATE(105)] = 5140,
  [SMALL_STATE(106)] = 5197,
  [SMALL_STATE(107)] = 5254,
  [SMALL_STATE(108)] = 5311,
  [SMALL_STATE(109)] = 5368,
  [SMALL_STATE(110)] = 5418,
  [SMALL_STATE(111)] = 5452,
  [SMALL_STATE(112)] = 5486,
  [SMALL_STATE(113)] = 5520,
  [SMALL_STATE(114)] = 5554,
  [SMALL_STATE(115)] = 5588,
  [SMALL_STATE(116)] = 5622,
  [SMALL_STATE(117)] = 5655,
  [SMALL_STATE(118)] = 5688,
  [SMALL_STATE(119)] = 5721,
  [SMALL_STATE(120)] = 5754,
  [SMALL_STATE(121)] = 5801,
  [SMALL_STATE(122)] = 5848,
  [SMALL_STATE(123)] = 5895,
  [SMALL_STATE(124)] = 5928,
  [SMALL_STATE(125)] = 5977,
  [SMALL_STATE(126)] = 6010,
  [SMALL_STATE(127)] = 6057,
  [SMALL_STATE(128)] = 6090,
  [SMALL_STATE(129)] = 6123,
  [SMALL_STATE(130)] = 6156,
  [SMALL_STATE(131)] = 6189,
  [SMALL_STATE(132)] = 6238,
  [SMALL_STATE(133)] = 6271,
  [SMALL_STATE(134)] = 6304,
  [SMALL_STATE(135)] = 6352,
  [SMALL_STATE(136)] = 6400,
  [SMALL_STATE(137)] = 6448,
  [SMALL_STATE(138)] = 6496,
  [SMALL_STATE(139)] = 6540,
  [SMALL_STATE(140)] = 6592,
  [SMALL_STATE(141)] = 6640,
  [SMALL_STATE(142)] = 6688,
  [SMALL_STATE(143)] = 6732,
  [SMALL_STATE(144)] = 6780,
  [SMALL_STATE(145)] = 6828,
  [SMALL_STATE(146)] = 6876,
  [SMALL_STATE(147)] = 6928,
  [SMALL_STATE(148)] = 6976,
  [SMALL_STATE(149)] = 7020,
  [SMALL_STATE(150)] = 7068,
  [SMALL_STATE(151)] = 7109,
  [SMALL_STATE(152)] = 7150,
  [SMALL_STATE(153)] = 7176,
  [SMALL_STATE(154)] = 7222,
  [SMALL_STATE(155)] = 7250,
  [SMALL_STATE(156)] = 7278,
  [SMALL_STATE(157)] = 7310,
  [SMALL_STATE(158)] = 7338,
  [SMALL_STATE(159)] = 7360,
  [SMALL_STATE(160)] = 7406,
  [SMALL_STATE(161)] = 7434,
  [SMALL_STATE(162)] = 7462,
  [SMALL_STATE(163)] = 7505,
  [SMALL_STATE(164)] = 7531,
  [SMALL_STATE(165)] = 7557,
  [SMALL_STATE(166)] = 7581,
  [SMALL_STATE(167)] = 7607,
  [SMALL_STATE(168)] = 7633,
  [SMALL_STATE(169)] = 7657,
  [SMALL_STATE(170)] = 7682,
  [SMALL_STATE(171)] = 7707,
  [SMALL_STATE(172)] = 7732,
  [SMALL_STATE(173)] = 7755,
  [SMALL_STATE(174)] = 7778,
  [SMALL_STATE(175)] = 7801,
  [SMALL_STATE(176)] = 7830,
  [SMALL_STATE(177)] = 7855,
  [SMALL_STATE(178)] = 7880,
  [SMALL_STATE(179)] = 7917,
  [SMALL_STATE(180)] = 7942,
  [SMALL_STATE(181)] = 7967,
  [SMALL_STATE(182)] = 7994,
  [SMALL_STATE(183)] = 8017,
  [SMALL_STATE(184)] = 8042,
  [SMALL_STATE(185)] = 8067,
  [SMALL_STATE(186)] = 8092,
  [SMALL_STATE(187)] = 8115,
  [SMALL_STATE(188)] = 8143,
  [SMALL_STATE(189)] = 8177,
  [SMALL_STATE(190)] = 8211,
  [SMALL_STATE(191)] = 8235,
  [SMALL_STATE(192)] = 8257,
  [SMALL_STATE(193)] = 8281,
  [SMALL_STATE(194)] = 8305,
  [SMALL_STATE(195)] = 8341,
  [SMALL_STATE(196)] = 8363,
  [SMALL_STATE(197)] = 8391,
  [SMALL_STATE(198)] = 8413,
  [SMALL_STATE(199)] = 8447,
  [SMALL_STATE(200)] = 8471,
  [SMALL_STATE(201)] = 8495,
  [SMALL_STATE(202)] = 8529,
  [SMALL_STATE(203)] = 8563,
  [SMALL_STATE(204)] = 8597,
  [SMALL_STATE(205)] = 8631,
  [SMALL_STATE(206)] = 8659,
  [SMALL_STATE(207)] = 8693,
  [SMALL_STATE(208)] = 8721,
  [SMALL_STATE(209)] = 8745,
  [SMALL_STATE(210)] = 8770,
  [SMALL_STATE(211)] = 8801,
  [SMALL_STATE(212)] = 8830,
  [SMALL_STATE(213)] = 8853,
  [SMALL_STATE(214)] = 8876,
  [SMALL_STATE(215)] = 8901,
  [SMALL_STATE(216)] = 8924,
  [SMALL_STATE(217)] = 8955,
  [SMALL_STATE(218)] = 8974,
  [SMALL_STATE(219)] = 8997,
  [SMALL_STATE(220)] = 9020,
  [SMALL_STATE(221)] = 9039,
  [SMALL_STATE(222)] = 9067,
  [SMALL_STATE(223)] = 9095,
  [SMALL_STATE(224)] = 9118,
  [SMALL_STATE(225)] = 9139,
  [SMALL_STATE(226)] = 9162,
  [SMALL_STATE(227)] = 9185,
  [SMALL_STATE(228)] = 9208,
  [SMALL_STATE(229)] = 9233,
  [SMALL_STATE(230)] = 9254,
  [SMALL_STATE(231)] = 9277,
  [SMALL_STATE(232)] = 9298,
  [SMALL_STATE(233)] = 9319,
  [SMALL_STATE(234)] = 9334,
  [SMALL_STATE(235)] = 9355,
  [SMALL_STATE(236)] = 9376,
  [SMALL_STATE(237)] = 9399,
  [SMALL_STATE(238)] = 9420,
  [SMALL_STATE(239)] = 9435,
  [SMALL_STATE(240)] = 9456,
  [SMALL_STATE(241)] = 9477,
  [SMALL_STATE(242)] = 9498,
  [SMALL_STATE(243)] = 9521,
  [SMALL_STATE(244)] = 9545,
  [SMALL_STATE(245)] = 9561,
  [SMALL_STATE(246)] = 9585,
  [SMALL_STATE(247)] = 9609,
  [SMALL_STATE(248)] = 9633,
  [SMALL_STATE(249)] = 9651,
  [SMALL_STATE(250)] = 9671,
  [SMALL_STATE(251)] = 9691,
  [SMALL_STATE(252)] = 9713,
  [SMALL_STATE(253)] = 9733,
  [SMALL_STATE(254)] = 9757,
  [SMALL_STATE(255)] = 9779,
  [SMALL_STATE(256)] = 9799,
  [SMALL_STATE(257)] = 9819,
  [SMALL_STATE(258)] = 9839,
  [SMALL_STATE(259)] = 9857,
  [SMALL_STATE(260)] = 9883,
  [SMALL_STATE(261)] = 9907,
  [SMALL_STATE(262)] = 9931,
  [SMALL_STATE(263)] = 9955,
  [SMALL_STATE(264)] = 9973,
  [SMALL_STATE(265)] = 9993,
  [SMALL_STATE(266)] = 10021,
  [SMALL_STATE(267)] = 10046,
  [SMALL_STATE(268)] = 10059,
  [SMALL_STATE(269)] = 10072,
  [SMALL_STATE(270)] = 10087,
  [SMALL_STATE(271)] = 10106,
  [SMALL_STATE(272)] = 10121,
  [SMALL_STATE(273)] = 10134,
  [SMALL_STATE(274)] = 10151,
  [SMALL_STATE(275)] = 10166,
  [SMALL_STATE(276)] = 10179,
  [SMALL_STATE(277)] = 10200,
  [SMALL_STATE(278)] = 10219,
  [SMALL_STATE(279)] = 10238,
  [SMALL_STATE(280)] = 10251,
  [SMALL_STATE(281)] = 10272,
  [SMALL_STATE(282)] = 10285,
  [SMALL_STATE(283)] = 10298,
  [SMALL_STATE(284)] = 10314,
  [SMALL_STATE(285)] = 10326,
  [SMALL_STATE(286)] = 10338,
  [SMALL_STATE(287)] = 10356,
  [SMALL_STATE(288)] = 10374,
  [SMALL_STATE(289)] = 10390,
  [SMALL_STATE(290)] = 10406,
  [SMALL_STATE(291)] = 10418,
  [SMALL_STATE(292)] = 10430,
  [SMALL_STATE(293)] = 10448,
  [SMALL_STATE(294)] = 10466,
  [SMALL_STATE(295)] = 10488,
  [SMALL_STATE(296)] = 10504,
  [SMALL_STATE(297)] = 10522,
  [SMALL_STATE(298)] = 10542,
  [SMALL_STATE(299)] = 10554,
  [SMALL_STATE(300)] = 10566,
  [SMALL_STATE(301)] = 10580,
  [SMALL_STATE(302)] = 10596,
  [SMALL_STATE(303)] = 10608,
  [SMALL_STATE(304)] = 10624,
  [SMALL_STATE(305)] = 10636,
  [SMALL_STATE(306)] = 10654,
  [SMALL_STATE(307)] = 10668,
  [SMALL_STATE(308)] = 10684,
  [SMALL_STATE(309)] = 10698,
  [SMALL_STATE(310)] = 10720,
  [SMALL_STATE(311)] = 10738,
  [SMALL_STATE(312)] = 10756,
  [SMALL_STATE(313)] = 10770,
  [SMALL_STATE(314)] = 10788,
  [SMALL_STATE(315)] = 10806,
  [SMALL_STATE(316)] = 10828,
  [SMALL_STATE(317)] = 10846,
  [SMALL_STATE(318)] = 10864,
  [SMALL_STATE(319)] = 10882,
  [SMALL_STATE(320)] = 10896,
  [SMALL_STATE(321)] = 10914,
  [SMALL_STATE(322)] = 10930,
  [SMALL_STATE(323)] = 10950,
  [SMALL_STATE(324)] = 10968,
  [SMALL_STATE(325)] = 10990,
  [SMALL_STATE(326)] = 11004,
  [SMALL_STATE(327)] = 11022,
  [SMALL_STATE(328)] = 11044,
  [SMALL_STATE(329)] = 11060,
  [SMALL_STATE(330)] = 11078,
  [SMALL_STATE(331)] = 11096,
  [SMALL_STATE(332)] = 11110,
  [SMALL_STATE(333)] = 11124,
  [SMALL_STATE(334)] = 11136,
  [SMALL_STATE(335)] = 11152,
  [SMALL_STATE(336)] = 11167,
  [SMALL_STATE(337)] = 11182,
  [SMALL_STATE(338)] = 11197,
  [SMALL_STATE(339)] = 11212,
  [SMALL_STATE(340)] = 11227,
  [SMALL_STATE(341)] = 11242,
  [SMALL_STATE(342)] = 11257,
  [SMALL_STATE(343)] = 11272,
  [SMALL_STATE(344)] = 11287,
  [SMALL_STATE(345)] = 11298,
  [SMALL_STATE(346)] = 11311,
  [SMALL_STATE(347)] = 11324,
  [SMALL_STATE(348)] = 11339,
  [SMALL_STATE(349)] = 11354,
  [SMALL_STATE(350)] = 11369,
  [SMALL_STATE(351)] = 11384,
  [SMALL_STATE(352)] = 11399,
  [SMALL_STATE(353)] = 11414,
  [SMALL_STATE(354)] = 11429,
  [SMALL_STATE(355)] = 11444,
  [SMALL_STATE(356)] = 11459,
  [SMALL_STATE(357)] = 11474,
  [SMALL_STATE(358)] = 11489,
  [SMALL_STATE(359)] = 11504,
  [SMALL_STATE(360)] = 11519,
  [SMALL_STATE(361)] = 11534,
  [SMALL_STATE(362)] = 11549,
  [SMALL_STATE(363)] = 11564,
  [SMALL_STATE(364)] = 11579,
  [SMALL_STATE(365)] = 11594,
  [SMALL_STATE(366)] = 11607,
  [SMALL_STATE(367)] = 11622,
  [SMALL_STATE(368)] = 11637,
  [SMALL_STATE(369)] = 11652,
  [SMALL_STATE(370)] = 11663,
  [SMALL_STATE(371)] = 11678,
  [SMALL_STATE(372)] = 11693,
  [SMALL_STATE(373)] = 11708,
  [SMALL_STATE(374)] = 11723,
  [SMALL_STATE(375)] = 11738,
  [SMALL_STATE(376)] = 11749,
  [SMALL_STATE(377)] = 11764,
  [SMALL_STATE(378)] = 11779,
  [SMALL_STATE(379)] = 11794,
  [SMALL_STATE(380)] = 11811,
  [SMALL_STATE(381)] = 11826,
  [SMALL_STATE(382)] = 11845,
  [SMALL_STATE(383)] = 11858,
  [SMALL_STATE(384)] = 11877,
  [SMALL_STATE(385)] = 11892,
  [SMALL_STATE(386)] = 11907,
  [SMALL_STATE(387)] = 11922,
  [SMALL_STATE(388)] = 11933,
  [SMALL_STATE(389)] = 11946,
  [SMALL_STATE(390)] = 11957,
  [SMALL_STATE(391)] = 11972,
  [SMALL_STATE(392)] = 11987,
  [SMALL_STATE(393)] = 12002,
  [SMALL_STATE(394)] = 12017,
  [SMALL_STATE(395)] = 12032,
  [SMALL_STATE(396)] = 12051,
  [SMALL_STATE(397)] = 12070,
  [SMALL_STATE(398)] = 12081,
  [SMALL_STATE(399)] = 12098,
  [SMALL_STATE(400)] = 12117,
  [SMALL_STATE(401)] = 12132,
  [SMALL_STATE(402)] = 12147,
  [SMALL_STATE(403)] = 12162,
  [SMALL_STATE(404)] = 12179,
  [SMALL_STATE(405)] = 12194,
  [SMALL_STATE(406)] = 12209,
  [SMALL_STATE(407)] = 12224,
  [SMALL_STATE(408)] = 12239,
  [SMALL_STATE(409)] = 12254,
  [SMALL_STATE(410)] = 12269,
  [SMALL_STATE(411)] = 12288,
  [SMALL_STATE(412)] = 12303,
  [SMALL_STATE(413)] = 12318,
  [SMALL_STATE(414)] = 12329,
  [SMALL_STATE(415)] = 12344,
  [SMALL_STATE(416)] = 12357,
  [SMALL_STATE(417)] = 12374,
  [SMALL_STATE(418)] = 12393,
  [SMALL_STATE(419)] = 12408,
  [SMALL_STATE(420)] = 12425,
  [SMALL_STATE(421)] = 12444,
  [SMALL_STATE(422)] = 12459,
  [SMALL_STATE(423)] = 12474,
  [SMALL_STATE(424)] = 12485,
  [SMALL_STATE(425)] = 12504,
  [SMALL_STATE(426)] = 12519,
  [SMALL_STATE(427)] = 12534,
  [SMALL_STATE(428)] = 12553,
  [SMALL_STATE(429)] = 12564,
  [SMALL_STATE(430)] = 12579,
  [SMALL_STATE(431)] = 12594,
  [SMALL_STATE(432)] = 12609,
  [SMALL_STATE(433)] = 12626,
  [SMALL_STATE(434)] = 12641,
  [SMALL_STATE(435)] = 12658,
  [SMALL_STATE(436)] = 12673,
  [SMALL_STATE(437)] = 12690,
  [SMALL_STATE(438)] = 12705,
  [SMALL_STATE(439)] = 12720,
  [SMALL_STATE(440)] = 12735,
  [SMALL_STATE(441)] = 12748,
  [SMALL_STATE(442)] = 12763,
  [SMALL_STATE(443)] = 12778,
  [SMALL_STATE(444)] = 12793,
  [SMALL_STATE(445)] = 12808,
  [SMALL_STATE(446)] = 12823,
  [SMALL_STATE(447)] = 12838,
  [SMALL_STATE(448)] = 12857,
  [SMALL_STATE(449)] = 12872,
  [SMALL_STATE(450)] = 12887,
  [SMALL_STATE(451)] = 12902,
  [SMALL_STATE(452)] = 12917,
  [SMALL_STATE(453)] = 12932,
  [SMALL_STATE(454)] = 12947,
  [SMALL_STATE(455)] = 12962,
  [SMALL_STATE(456)] = 12976,
  [SMALL_STATE(457)] = 12990,
  [SMALL_STATE(458)] = 13004,
  [SMALL_STATE(459)] = 13016,
  [SMALL_STATE(460)] = 13028,
  [SMALL_STATE(461)] = 13040,
  [SMALL_STATE(462)] = 13052,
  [SMALL_STATE(463)] = 13064,
  [SMALL_STATE(464)] = 13076,
  [SMALL_STATE(465)] = 13092,
  [SMALL_STATE(466)] = 13106,
  [SMALL_STATE(467)] = 13118,
  [SMALL_STATE(468)] = 13130,
  [SMALL_STATE(469)] = 13142,
  [SMALL_STATE(470)] = 13154,
  [SMALL_STATE(471)] = 13168,
  [SMALL_STATE(472)] = 13178,
  [SMALL_STATE(473)] = 13190,
  [SMALL_STATE(474)] = 13206,
  [SMALL_STATE(475)] = 13218,
  [SMALL_STATE(476)] = 13230,
  [SMALL_STATE(477)] = 13244,
  [SMALL_STATE(478)] = 13258,
  [SMALL_STATE(479)] = 13268,
  [SMALL_STATE(480)] = 13280,
  [SMALL_STATE(481)] = 13290,
  [SMALL_STATE(482)] = 13306,
  [SMALL_STATE(483)] = 13322,
  [SMALL_STATE(484)] = 13336,
  [SMALL_STATE(485)] = 13352,
  [SMALL_STATE(486)] = 13366,
  [SMALL_STATE(487)] = 13376,
  [SMALL_STATE(488)] = 13388,
  [SMALL_STATE(489)] = 13400,
  [SMALL_STATE(490)] = 13412,
  [SMALL_STATE(491)] = 13422,
  [SMALL_STATE(492)] = 13434,
  [SMALL_STATE(493)] = 13444,
  [SMALL_STATE(494)] = 13454,
  [SMALL_STATE(495)] = 13470,
  [SMALL_STATE(496)] = 13486,
  [SMALL_STATE(497)] = 13498,
  [SMALL_STATE(498)] = 13510,
  [SMALL_STATE(499)] = 13520,
  [SMALL_STATE(500)] = 13532,
  [SMALL_STATE(501)] = 13544,
  [SMALL_STATE(502)] = 13554,
  [SMALL_STATE(503)] = 13566,
  [SMALL_STATE(504)] = 13578,
  [SMALL_STATE(505)] = 13591,
  [SMALL_STATE(506)] = 13604,
  [SMALL_STATE(507)] = 13617,
  [SMALL_STATE(508)] = 13628,
  [SMALL_STATE(509)] = 13637,
  [SMALL_STATE(510)] = 13646,
  [SMALL_STATE(511)] = 13659,
  [SMALL_STATE(512)] = 13672,
  [SMALL_STATE(513)] = 13683,
  [SMALL_STATE(514)] = 13696,
  [SMALL_STATE(515)] = 13709,
  [SMALL_STATE(516)] = 13720,
  [SMALL_STATE(517)] = 13733,
  [SMALL_STATE(518)] = 13746,
  [SMALL_STATE(519)] = 13755,
  [SMALL_STATE(520)] = 13766,
  [SMALL_STATE(521)] = 13777,
  [SMALL_STATE(522)] = 13790,
  [SMALL_STATE(523)] = 13803,
  [SMALL_STATE(524)] = 13812,
  [SMALL_STATE(525)] = 13825,
  [SMALL_STATE(526)] = 13838,
  [SMALL_STATE(527)] = 13851,
  [SMALL_STATE(528)] = 13860,
  [SMALL_STATE(529)] = 13873,
  [SMALL_STATE(530)] = 13886,
  [SMALL_STATE(531)] = 13899,
  [SMALL_STATE(532)] = 13908,
  [SMALL_STATE(533)] = 13917,
  [SMALL_STATE(534)] = 13930,
  [SMALL_STATE(535)] = 13939,
  [SMALL_STATE(536)] = 13952,
  [SMALL_STATE(537)] = 13961,
  [SMALL_STATE(538)] = 13974,
  [SMALL_STATE(539)] = 13987,
  [SMALL_STATE(540)] = 13998,
  [SMALL_STATE(541)] = 14011,
  [SMALL_STATE(542)] = 14024,
  [SMALL_STATE(543)] = 14035,
  [SMALL_STATE(544)] = 14048,
  [SMALL_STATE(545)] = 14061,
  [SMALL_STATE(546)] = 14074,
  [SMALL_STATE(547)] = 14087,
  [SMALL_STATE(548)] = 14100,
  [SMALL_STATE(549)] = 14109,
  [SMALL_STATE(550)] = 14118,
  [SMALL_STATE(551)] = 14131,
  [SMALL_STATE(552)] = 14140,
  [SMALL_STATE(553)] = 14149,
  [SMALL_STATE(554)] = 14158,
  [SMALL_STATE(555)] = 14169,
  [SMALL_STATE(556)] = 14178,
  [SMALL_STATE(557)] = 14191,
  [SMALL_STATE(558)] = 14204,
  [SMALL_STATE(559)] = 14217,
  [SMALL_STATE(560)] = 14226,
  [SMALL_STATE(561)] = 14239,
  [SMALL_STATE(562)] = 14248,
  [SMALL_STATE(563)] = 14261,
  [SMALL_STATE(564)] = 14274,
  [SMALL_STATE(565)] = 14285,
  [SMALL_STATE(566)] = 14294,
  [SMALL_STATE(567)] = 14307,
  [SMALL_STATE(568)] = 14320,
  [SMALL_STATE(569)] = 14329,
  [SMALL_STATE(570)] = 14342,
  [SMALL_STATE(571)] = 14355,
  [SMALL_STATE(572)] = 14368,
  [SMALL_STATE(573)] = 14381,
  [SMALL_STATE(574)] = 14394,
  [SMALL_STATE(575)] = 14405,
  [SMALL_STATE(576)] = 14414,
  [SMALL_STATE(577)] = 14427,
  [SMALL_STATE(578)] = 14436,
  [SMALL_STATE(579)] = 14445,
  [SMALL_STATE(580)] = 14454,
  [SMALL_STATE(581)] = 14467,
  [SMALL_STATE(582)] = 14478,
  [SMALL_STATE(583)] = 14489,
  [SMALL_STATE(584)] = 14498,
  [SMALL_STATE(585)] = 14507,
  [SMALL_STATE(586)] = 14520,
  [SMALL_STATE(587)] = 14533,
  [SMALL_STATE(588)] = 14544,
  [SMALL_STATE(589)] = 14557,
  [SMALL_STATE(590)] = 14570,
  [SMALL_STATE(591)] = 14581,
  [SMALL_STATE(592)] = 14594,
  [SMALL_STATE(593)] = 14607,
  [SMALL_STATE(594)] = 14620,
  [SMALL_STATE(595)] = 14629,
  [SMALL_STATE(596)] = 14642,
  [SMALL_STATE(597)] = 14651,
  [SMALL_STATE(598)] = 14660,
  [SMALL_STATE(599)] = 14669,
  [SMALL_STATE(600)] = 14682,
  [SMALL_STATE(601)] = 14691,
  [SMALL_STATE(602)] = 14702,
  [SMALL_STATE(603)] = 14711,
  [SMALL_STATE(604)] = 14720,
  [SMALL_STATE(605)] = 14733,
  [SMALL_STATE(606)] = 14746,
  [SMALL_STATE(607)] = 14759,
  [SMALL_STATE(608)] = 14767,
  [SMALL_STATE(609)] = 14777,
  [SMALL_STATE(610)] = 14785,
  [SMALL_STATE(611)] = 14795,
  [SMALL_STATE(612)] = 14803,
  [SMALL_STATE(613)] = 14813,
  [SMALL_STATE(614)] = 14823,
  [SMALL_STATE(615)] = 14833,
  [SMALL_STATE(616)] = 14841,
  [SMALL_STATE(617)] = 14851,
  [SMALL_STATE(618)] = 14859,
  [SMALL_STATE(619)] = 14869,
  [SMALL_STATE(620)] = 14879,
  [SMALL_STATE(621)] = 14889,
  [SMALL_STATE(622)] = 14899,
  [SMALL_STATE(623)] = 14909,
  [SMALL_STATE(624)] = 14917,
  [SMALL_STATE(625)] = 14925,
  [SMALL_STATE(626)] = 14935,
  [SMALL_STATE(627)] = 14945,
  [SMALL_STATE(628)] = 14955,
  [SMALL_STATE(629)] = 14963,
  [SMALL_STATE(630)] = 14973,
  [SMALL_STATE(631)] = 14981,
  [SMALL_STATE(632)] = 14991,
  [SMALL_STATE(633)] = 14999,
  [SMALL_STATE(634)] = 15007,
  [SMALL_STATE(635)] = 15017,
  [SMALL_STATE(636)] = 15027,
  [SMALL_STATE(637)] = 15037,
  [SMALL_STATE(638)] = 15045,
  [SMALL_STATE(639)] = 15053,
  [SMALL_STATE(640)] = 15061,
  [SMALL_STATE(641)] = 15071,
  [SMALL_STATE(642)] = 15081,
  [SMALL_STATE(643)] = 15091,
  [SMALL_STATE(644)] = 15099,
  [SMALL_STATE(645)] = 15107,
  [SMALL_STATE(646)] = 15117,
  [SMALL_STATE(647)] = 15127,
  [SMALL_STATE(648)] = 15137,
  [SMALL_STATE(649)] = 15147,
  [SMALL_STATE(650)] = 15157,
  [SMALL_STATE(651)] = 15165,
  [SMALL_STATE(652)] = 15173,
  [SMALL_STATE(653)] = 15183,
  [SMALL_STATE(654)] = 15193,
  [SMALL_STATE(655)] = 15203,
  [SMALL_STATE(656)] = 15213,
  [SMALL_STATE(657)] = 15221,
  [SMALL_STATE(658)] = 15229,
  [SMALL_STATE(659)] = 15239,
  [SMALL_STATE(660)] = 15247,
  [SMALL_STATE(661)] = 15257,
  [SMALL_STATE(662)] = 15265,
  [SMALL_STATE(663)] = 15275,
  [SMALL_STATE(664)] = 15283,
  [SMALL_STATE(665)] = 15291,
  [SMALL_STATE(666)] = 15301,
  [SMALL_STATE(667)] = 15308,
  [SMALL_STATE(668)] = 15315,
  [SMALL_STATE(669)] = 15322,
  [SMALL_STATE(670)] = 15329,
  [SMALL_STATE(671)] = 15336,
  [SMALL_STATE(672)] = 15343,
  [SMALL_STATE(673)] = 15350,
  [SMALL_STATE(674)] = 15357,
  [SMALL_STATE(675)] = 15364,
  [SMALL_STATE(676)] = 15371,
  [SMALL_STATE(677)] = 15378,
  [SMALL_STATE(678)] = 15385,
  [SMALL_STATE(679)] = 15392,
  [SMALL_STATE(680)] = 15399,
  [SMALL_STATE(681)] = 15406,
  [SMALL_STATE(682)] = 15413,
  [SMALL_STATE(683)] = 15420,
  [SMALL_STATE(684)] = 15427,
  [SMALL_STATE(685)] = 15434,
  [SMALL_STATE(686)] = 15441,
  [SMALL_STATE(687)] = 15448,
  [SMALL_STATE(688)] = 15455,
  [SMALL_STATE(689)] = 15462,
  [SMALL_STATE(690)] = 15469,
  [SMALL_STATE(691)] = 15476,
  [SMALL_STATE(692)] = 15483,
  [SMALL_STATE(693)] = 15490,
  [SMALL_STATE(694)] = 15497,
  [SMALL_STATE(695)] = 15504,
  [SMALL_STATE(696)] = 15511,
  [SMALL_STATE(697)] = 15518,
  [SMALL_STATE(698)] = 15525,
  [SMALL_STATE(699)] = 15532,
  [SMALL_STATE(700)] = 15539,
  [SMALL_STATE(701)] = 15546,
  [SMALL_STATE(702)] = 15553,
  [SMALL_STATE(703)] = 15560,
  [SMALL_STATE(704)] = 15567,
  [SMALL_STATE(705)] = 15574,
  [SMALL_STATE(706)] = 15581,
  [SMALL_STATE(707)] = 15588,
  [SMALL_STATE(708)] = 15595,
  [SMALL_STATE(709)] = 15602,
  [SMALL_STATE(710)] = 15609,
  [SMALL_STATE(711)] = 15616,
  [SMALL_STATE(712)] = 15623,
  [SMALL_STATE(713)] = 15630,
  [SMALL_STATE(714)] = 15637,
  [SMALL_STATE(715)] = 15644,
  [SMALL_STATE(716)] = 15651,
  [SMALL_STATE(717)] = 15658,
  [SMALL_STATE(718)] = 15665,
  [SMALL_STATE(719)] = 15672,
  [SMALL_STATE(720)] = 15679,
  [SMALL_STATE(721)] = 15686,
  [SMALL_STATE(722)] = 15693,
  [SMALL_STATE(723)] = 15700,
  [SMALL_STATE(724)] = 15707,
  [SMALL_STATE(725)] = 15714,
  [SMALL_STATE(726)] = 15721,
  [SMALL_STATE(727)] = 15728,
  [SMALL_STATE(728)] = 15735,
  [SMALL_STATE(729)] = 15742,
  [SMALL_STATE(730)] = 15749,
  [SMALL_STATE(731)] = 15756,
  [SMALL_STATE(732)] = 15763,
  [SMALL_STATE(733)] = 15770,
  [SMALL_STATE(734)] = 15777,
  [SMALL_STATE(735)] = 15784,
  [SMALL_STATE(736)] = 15791,
  [SMALL_STATE(737)] = 15798,
  [SMALL_STATE(738)] = 15805,
  [SMALL_STATE(739)] = 15812,
  [SMALL_STATE(740)] = 15819,
  [SMALL_STATE(741)] = 15826,
  [SMALL_STATE(742)] = 15833,
  [SMALL_STATE(743)] = 15840,
  [SMALL_STATE(744)] = 15847,
  [SMALL_STATE(745)] = 15854,
  [SMALL_STATE(746)] = 15861,
  [SMALL_STATE(747)] = 15868,
  [SMALL_STATE(748)] = 15875,
  [SMALL_STATE(749)] = 15882,
  [SMALL_STATE(750)] = 15889,
  [SMALL_STATE(751)] = 15896,
  [SMALL_STATE(752)] = 15903,
  [SMALL_STATE(753)] = 15910,
  [SMALL_STATE(754)] = 15917,
  [SMALL_STATE(755)] = 15924,
  [SMALL_STATE(756)] = 15931,
  [SMALL_STATE(757)] = 15938,
  [SMALL_STATE(758)] = 15945,
  [SMALL_STATE(759)] = 15952,
  [SMALL_STATE(760)] = 15959,
  [SMALL_STATE(761)] = 15966,
  [SMALL_STATE(762)] = 15973,
  [SMALL_STATE(763)] = 15980,
  [SMALL_STATE(764)] = 15987,
  [SMALL_STATE(765)] = 15994,
  [SMALL_STATE(766)] = 16001,
  [SMALL_STATE(767)] = 16008,
  [SMALL_STATE(768)] = 16015,
  [SMALL_STATE(769)] = 16022,
  [SMALL_STATE(770)] = 16029,
  [SMALL_STATE(771)] = 16036,
  [SMALL_STATE(772)] = 16043,
  [SMALL_STATE(773)] = 16050,
  [SMALL_STATE(774)] = 16057,
  [SMALL_STATE(775)] = 16064,
  [SMALL_STATE(776)] = 16071,
  [SMALL_STATE(777)] = 16078,
  [SMALL_STATE(778)] = 16085,
  [SMALL_STATE(779)] = 16092,
  [SMALL_STATE(780)] = 16099,
  [SMALL_STATE(781)] = 16106,
  [SMALL_STATE(782)] = 16113,
  [SMALL_STATE(783)] = 16120,
  [SMALL_STATE(784)] = 16127,
  [SMALL_STATE(785)] = 16134,
  [SMALL_STATE(786)] = 16141,
  [SMALL_STATE(787)] = 16148,
  [SMALL_STATE(788)] = 16155,
  [SMALL_STATE(789)] = 16162,
  [SMALL_STATE(790)] = 16169,
  [SMALL_STATE(791)] = 16176,
  [SMALL_STATE(792)] = 16183,
  [SMALL_STATE(793)] = 16190,
  [SMALL_STATE(794)] = 16197,
  [SMALL_STATE(795)] = 16204,
  [SMALL_STATE(796)] = 16211,
  [SMALL_STATE(797)] = 16218,
  [SMALL_STATE(798)] = 16225,
  [SMALL_STATE(799)] = 16232,
  [SMALL_STATE(800)] = 16239,
  [SMALL_STATE(801)] = 16246,
  [SMALL_STATE(802)] = 16253,
  [SMALL_STATE(803)] = 16260,
  [SMALL_STATE(804)] = 16267,
  [SMALL_STATE(805)] = 16274,
  [SMALL_STATE(806)] = 16281,
  [SMALL_STATE(807)] = 16288,
  [SMALL_STATE(808)] = 16295,
  [SMALL_STATE(809)] = 16302,
  [SMALL_STATE(810)] = 16309,
  [SMALL_STATE(811)] = 16316,
  [SMALL_STATE(812)] = 16323,
  [SMALL_STATE(813)] = 16330,
  [SMALL_STATE(814)] = 16337,
  [SMALL_STATE(815)] = 16344,
  [SMALL_STATE(816)] = 16351,
  [SMALL_STATE(817)] = 16358,
  [SMALL_STATE(818)] = 16365,
  [SMALL_STATE(819)] = 16372,
  [SMALL_STATE(820)] = 16379,
  [SMALL_STATE(821)] = 16386,
  [SMALL_STATE(822)] = 16393,
  [SMALL_STATE(823)] = 16400,
  [SMALL_STATE(824)] = 16407,
  [SMALL_STATE(825)] = 16414,
  [SMALL_STATE(826)] = 16421,
  [SMALL_STATE(827)] = 16428,
  [SMALL_STATE(828)] = 16435,
  [SMALL_STATE(829)] = 16442,
  [SMALL_STATE(830)] = 16449,
  [SMALL_STATE(831)] = 16456,
  [SMALL_STATE(832)] = 16463,
  [SMALL_STATE(833)] = 16470,
  [SMALL_STATE(834)] = 16477,
  [SMALL_STATE(835)] = 16484,
  [SMALL_STATE(836)] = 16491,
  [SMALL_STATE(837)] = 16498,
  [SMALL_STATE(838)] = 16505,
  [SMALL_STATE(839)] = 16512,
  [SMALL_STATE(840)] = 16519,
  [SMALL_STATE(841)] = 16526,
  [SMALL_STATE(842)] = 16533,
  [SMALL_STATE(843)] = 16540,
  [SMALL_STATE(844)] = 16547,
  [SMALL_STATE(845)] = 16554,
  [SMALL_STATE(846)] = 16561,
  [SMALL_STATE(847)] = 16568,
  [SMALL_STATE(848)] = 16575,
  [SMALL_STATE(849)] = 16582,
  [SMALL_STATE(850)] = 16589,
  [SMALL_STATE(851)] = 16596,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(835),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumName, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumName, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_globalAccumName, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_globalAccumName, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declStmts, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declStmts, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2), SHIFT_REPEAT(7),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(269),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(290),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(265),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(839),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(298),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(304),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(284),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(312),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(838),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(836),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(835),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(834),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(833),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declStmts_repeat1, 2), SHIFT_REPEAT(348),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declStmts_repeat1, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 3),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 2),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_localAccumName, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_localAccumName, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 4),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real, 4),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expr, 3), REDUCE(sym_setBagExpr, 3),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_expr, 3), REDUCE(sym_setBagExpr, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setBagExpr, 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setBagExpr, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringLiteral, 2),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringLiteral, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringLiteral, 3),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringLiteral, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 1),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expr, 1), REDUCE(sym_setBagExpr, 1),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_expr, 1), REDUCE(sym_setBagExpr, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 4),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 4),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(27),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(27),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(29),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(29),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typedefs_repeat1, 2), SHIFT_REPEAT(840),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typedefs_repeat1, 2),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_typedefs_repeat1, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedefs, 1),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typedefs, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(35),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(35),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(36),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(36),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(44),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 3),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 3),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expr, 3), SHIFT(220),
  [341] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_expr, 3), SHIFT(220),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(61),
  [363] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(61),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(70),
  [391] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(70),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attrName, 1),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attrName, 1),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(113),
  [469] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(113),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(115),
  [479] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(115),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(117),
  [489] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(117),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [512] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(123),
  [515] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(123),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBodyStmts, 1),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [530] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(128),
  [533] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(128),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_queryBodyStmts_repeat1, 2), SHIFT_REPEAT(81),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_queryBodyStmts_repeat1, 2),
  [549] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_queryBodyStmts_repeat1, 2), SHIFT_REPEAT(42),
  [552] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_queryBodyStmts_repeat1, 2), SHIFT_REPEAT(51),
  [555] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_queryBodyStmts_repeat1, 2), SHIFT_REPEAT(104),
  [558] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_queryBodyStmts_repeat1, 2), SHIFT_REPEAT(42),
  [561] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(132),
  [564] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(132),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [605] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(154),
  [608] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(154),
  [611] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym_expr, 1), REDUCE(sym_setBagExpr, 1), REDUCE(sym_tableName, 1),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printExpr, 1),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldName, 1),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argList, 1),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vSetProj, 1),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignStmt, 5),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignStmt, 3),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gAccumAccumStmt, 3),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argList_repeat1, 2),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [673] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(192),
  [676] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(192),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [693] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(195),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_CREATE_VERTEX_repeat1, 5),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_CREATE_UNDIRECTED_EDGE_repeat2, 5),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnStmt, 2),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [722] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(266),
  [725] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(811),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparisonOperator, 1),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparisonOperator, 1),
  [736] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(218),
  [739] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(218),
  [742] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_atomicVertexType, 1), REDUCE(sym_name, 1),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mathOperator, 1),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mathOperator, 1),
  [749] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(224),
  [752] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(224),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [761] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(231),
  [764] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(231),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [775] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_atomicEdgeType, 1), REDUCE(sym_name, 1),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [786] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(240),
  [789] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(240),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [794] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [796] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_queryBodyStmts_repeat1, 2),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stepVertexTypes_repeat1, 2),
  [800] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stepVertexTypes_repeat1, 2), SHIFT_REPEAT(225),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [811] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(252),
  [814] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(252),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [821] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(256),
  [824] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(256),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [829] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepVertexTypes, 2),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsqlSelectBlock, 2),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepVertexTypes, 3),
  [843] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_seed, 1), REDUCE(sym_name, 1),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertexSetType, 1),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseType, 1),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertexSetName, 1),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 4),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setBagExpr, 1),
  [876] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_paramName, 1), REDUCE(sym_vertexType, 1),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pathPattern, 1),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseType, 1, .production_id = 3),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertexAlias, 1),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [889] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_CREATE_GRAPH_repeat1, 2),
  [895] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_CREATE_GRAPH_repeat1, 2), SHIFT_REPEAT(42),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pathPattern, 2),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseType, 4),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 6),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pathPattern_repeat1, 2),
  [918] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pathPattern_repeat1, 2), SHIFT_REPEAT(785),
  [921] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(296),
  [924] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(296),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsqlSelectBlock, 3),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseType, 1, .production_id = 1),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepVertexTypes, 1),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepVertexSet, 1),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomicVertexType, 1),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseType, 1, .production_id = 2),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [947] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumType, 4),
  [951] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumType, 4),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumType, 4, .production_id = 6),
  [957] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumType, 4, .production_id = 6),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 7),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumType, 1),
  [971] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumType, 1),
  [973] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(313),
  [976] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(313),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 9),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [993] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumType, 6),
  [997] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumType, 6),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 5),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumType, 9),
  [1013] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumType, 9),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 8),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1029] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumType, 10),
  [1035] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumType, 10),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumType, 11),
  [1039] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accumType, 11),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertexType, 1),
  [1043] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_VERTEX, 6, .production_id = 4),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simpleSet, 1),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_WITH, 1),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_VERTEX, 7, .production_id = 4),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [1065] = {.entry = {.count = 1, .reusable = false}}, SHIFT(806),
  [1067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vExprSet, 4),
  [1069] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fromClause_repeat1, 2), SHIFT_REPEAT(153),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fromClause_repeat1, 2),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepVertexSet, 3),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsqlSelectBlock, 5),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printStmt, 2),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 12),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simpleSet, 3),
  [1096] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_simpleSet, 3), SHIFT(276),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pathPattern_repeat1, 6),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepVertexSet, 2),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsqlSelectBlock, 4),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fromClause, 3, .production_id = 5),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 11),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tupleType, 1),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_printStmt_repeat1, 2), SHIFT_REPEAT(53),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_printStmt_repeat1, 2),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gsqlSelectBlock_repeat1, 2),
  [1146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gsqlSelectBlock_repeat1, 2), SHIFT_REPEAT(800),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonKey, 1),
  [1153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 10),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printStmt, 3),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vExprSet, 5),
  [1169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fromClause, 2, .production_id = 5),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepEdgeTypes, 2),
  [1173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomicEdgeType, 1),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printStmt, 4),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dmlSubStmtList_repeat1, 2), SHIFT_REPEAT(228),
  [1190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dmlSubStmtList_repeat1, 2),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dmlSubStmtList, 2),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vSetVarDeclStmt, 6),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_condition, 3), SHIFT(84),
  [1207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterList, 2),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_condition, 3), SHIFT(79),
  [1222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printStmt, 5),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_DIRECTED_EDGE, 13, .production_id = 4),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [1230] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [1238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accumType_repeat1, 2),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_DIRECTED_EDGE, 12, .production_id = 4),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [1246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_CREATE_UNDIRECTED_EDGE_repeat1, 2),
  [1248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_CREATE_UNDIRECTED_EDGE_repeat1, 2), SHIFT_REPEAT(710),
  [1251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dmlSubStmtList, 1),
  [1253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_paramName, 1), REDUCE(sym_edgeType, 1),
  [1256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_WITH, 6),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumDeclStmt, 2),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseDeclStmt, 2),
  [1272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stepEdgeTypes_repeat1, 2),
  [1274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stepEdgeTypes_repeat1, 2), SHIFT_REPEAT(223),
  [1277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [1283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepEdgeTypes, 3),
  [1285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edgeSetType, 1),
  [1287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_WITH, 4),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [1291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [1293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vSetVarDeclStmt, 3),
  [1295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printExpr, 3),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumDeclStmt, 3),
  [1301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stringLiteral_repeat1, 2),
  [1303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stringLiteral_repeat1, 2), SHIFT_REPEAT(495),
  [1306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stringLiteral_repeat1, 2), SHIFT_REPEAT(495),
  [1309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_GRAPH, 5, .production_id = 4),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [1313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [1315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_whereClause, 2),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_DIRECTED_EDGE, 11, .production_id = 4),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [1323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphName, 1),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_GRAPH, 6, .production_id = 4),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_CREATE_UNDIRECTED_EDGE_repeat2, 2),
  [1335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_CREATE_UNDIRECTED_EDGE_repeat2, 2), SHIFT_REPEAT(402),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DROP, 2),
  [1344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argList, 2),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_condition, 3), SHIFT(72),
  [1353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seedSet_repeat1, 2),
  [1355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seedSet_repeat1, 2), SHIFT_REPEAT(189),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [1362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_paramName, 1), REDUCE(sym_vertexSetName, 1),
  [1365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseDeclStmt, 4),
  [1367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_perClauseV2_repeat1, 2),
  [1369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_perClauseV2_repeat1, 2), SHIFT_REPEAT(277),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_baseDeclStmt_repeat1, 2),
  [1376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_condition, 3), SHIFT(77),
  [1379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseDeclStmt_repeat1, 2), SHIFT_REPEAT(488),
  [1382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filePath, 1),
  [1384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vExprSet_repeat1, 2), SHIFT_REPEAT(78),
  [1387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vExprSet_repeat1, 2),
  [1389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterType, 3),
  [1391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterList, 3),
  [1393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_queryBodyIfStmt_repeat1, 2), SHIFT_REPEAT(731),
  [1396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_queryBodyIfStmt_repeat1, 2),
  [1398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paramName, 1),
  [1400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accumDeclStmt_repeat1, 2), SHIFT_REPEAT(653),
  [1403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accumDeclStmt_repeat1, 2),
  [1405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumDeclStmt, 4),
  [1407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_CREATE_VERTEX_repeat1, 2),
  [1409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_CREATE_VERTEX_repeat1, 2), SHIFT_REPEAT(461),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tupleFields, 2),
  [1418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumDeclStmt, 6),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tupleFields, 3),
  [1424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumDeclStmt, 5),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argList_repeat1, 2), SHIFT_REPEAT(90),
  [1437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_GRAPH, 8, .production_id = 4),
  [1439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_VERTEX, 8, .production_id = 4),
  [1441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterType, 1),
  [1443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_CREATE_VERTEX_repeat1, 3),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_UNDIRECTED_EDGE, 11, .production_id = 4),
  [1449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameterList_repeat1, 2),
  [1451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameterList_repeat1, 2), SHIFT_REPEAT(151),
  [1454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterList, 4),
  [1456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterType, 4),
  [1458] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_queryBodyIfStmt_repeat1, 5), SHIFT(136),
  [1461] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_queryBodyIfStmt_repeat1, 5), SHIFT(767),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseDeclStmt, 5),
  [1470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseDeclStmt, 3),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createQuery, 4),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [1488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_DIRECTED_EDGE, 19, .production_id = 4),
  [1490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_GRAPH, 9, .production_id = 4),
  [1492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_DIRECTED_EDGE, 18, .production_id = 4),
  [1494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomicEdgePattern, 1),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectVertParams, 11),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [1502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_UNDIRECTED_EDGE, 12, .production_id = 4),
  [1504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_DIRECTED_EDGE, 17, .production_id = 4),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tupleFields_repeat1, 2), SHIFT_REPEAT(150),
  [1511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tupleFields_repeat1, 2),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameterList_repeat1, 3),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1525] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accumType_repeat1, 2), SHIFT_REPEAT(391),
  [1528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dmlSubStmt, 1),
  [1530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterList, 5),
  [1532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_CREATE_UNDIRECTED_EDGE_repeat1, 5),
  [1534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_WITH, 9),
  [1536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 13),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_WITH, 7),
  [1544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_CREATE_UNDIRECTED_EDGE_repeat2, 3),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CREATE_UNDIRECTED_EDGE, 13, .production_id = 4),
  [1550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returns, 4),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameterList_repeat1, 5),
  [1560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 1),
  [1562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 14),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_queryBodyIfStmt_repeat1, 5),
  [1568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accumType_repeat1, 3),
  [1570] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_vertexAlias, 1), REDUCE(sym_edgeAlias, 1),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 16),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(720),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 17),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_perClauseV2, 4),
  [1589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accumClause, 3),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepEdgeSet, 1),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postAccumClause, 3),
  [1601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectVertParams, 16),
  [1603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed, 2),
  [1605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementType, 2),
  [1607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 15),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_baseDeclStmt_repeat1, 4),
  [1613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed, 1),
  [1615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementType, 1),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tupleFields_repeat1, 3),
  [1623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_id_name_type, 3),
  [1625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vSetProj, 3),
  [1637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accumDeclStmt_repeat1, 4),
  [1639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_perClauseV2, 5),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomicEdgePattern, 2),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepEdgeTypes, 1),
  [1653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 18),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [1705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_createSignature, 19),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_columnId, 2),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepEdgeSet, 3),
  [1745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pathEdgePattern, 3),
  [1747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBodyIfStmt, 8),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edgeAlias, 1),
  [1763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stepEdgeSet, 2),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [1767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printStmt, 7),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [1773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBodyIfStmt, 7),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seedSet, 4),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pathEdgePattern, 1),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [1791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printStmt, 6),
  [1793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBodyIfStmt, 6),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [1797] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_paramName, 1), REDUCE(sym_varName, 1),
  [1800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simpleSize, 1),
  [1802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 6),
  [1806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [1812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [1828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seedSet, 3),
  [1830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fileDeclStmt, 5),
  [1834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBodyIfStmt, 5),
  [1836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [1844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [1846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntaxName, 1),
  [1850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsqlSelectClause, 4),
  [1856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seedSet, 2),
  [1860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1864] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_fileVar, 1), REDUCE(sym_paramName, 1),
  [1867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [1887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBody, 3),
  [1891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [1897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBody, 2),
  [1915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fileVar, 1),
  [1917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [1923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [1925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edgeType, 1),
  [1927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectStmt, 1),
  [1933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBodyStmt, 1),
  [1935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declStmt, 1),
  [1937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryBody, 1),
  [1941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [1965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_queryName, 1),
  [1975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [1983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1985] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
