function caseInsensitive(word) {
    return new RegExp(word
        .split('')
        .map(letter => `[${letter.toLowerCase()}${letter.toUpperCase()}]`)
        .join('')
    )
}
function kw(keyword) {
    return alias(caseInsensitive(keyword), keyword)
}

const keywords = [
	"ACCUM", "AND", "ANY", "API", "AS", "ASC", "AVG", "ADMIN", "ALL", "ALTER", "ADD", 
	"BAG", "BATCH", "BETWEEN", "BOOL", "BOTH", "BREAK", "BY", "CASE", "CATCH", "COALESCE",
	"COMPRESS", "CONTINUE", "COUNT", "CREATE",
	"DATETIME", "DATETIME_ADD", "DATETIME_SUB", "DELETE", "DESC", "DISTRIBUTED", "DO", "DOUBLE", "DEFAULT", "DIRECTED", "DROP", "DEFINE", "FILENAME",
	"EDGE", "ELSE", "END", "ESCAPE", "EXCEPTION",
	"FALSE", "FILE", "FILTER", "FLOAT", "FOR", "FOREACH", "FROM",
	"GRAPH", "GROUP", "GSQL_INT_MAX", "GSQL_INT_MIN", "GSQL_UINT_MAX",
	"HAVING",
	"IF", "IN", "INSERT", "INT", "INTERPRET", "INTERSECT", "INTERVAL", "INTO", "IS", "ISEMPTY", "INDEX",
	"JSONARRAY", "JSONOBJECT", "JOB",
	"LASTHOP", "LEADING", "LIKE", "LIMIT", "LIST", "LOAD_ACCUM", "LOG", "LOADING",
	"MAP", "MATCH", "MAX", "MIN", "MINUS",
	"NOT", "NOW", "NULL",
	"OFFSET", "OR", "ORDER", "OUTDEGREE_BY_EDGETYPE", "ON",
	"PATH", "PER", "PINNED", "POST_ACCUM", "POST-ACCUM", "PRIMARY_ID", "PRINT",
	"QUERY",
	"RAISE", "RANGE", "REPLACE", "RESET_COLLECTION_ACCUM", "RETURN", "RETURNS", "RUN", "REVERSE_EDGE",
	"SAMPLE", "SELECT", "SELECT_VERTEX", "SET", "SRC", "STATIC", "STRING", "SUM", "SYNTAX", "STATS",
	"TARGET", "TAGS", "TGT", "THEN", "TO", "TO_CSV", "TO_DATETIME", "TRAILING", "TRIM", "TRUE", "TRY", "TUPLE", "TYPEDEF",
	"UINT", "UNION", "UPDATE", "UNDIRECTED", "USE",
	"VALUES", "VERTEX",
	"WHEN", "WHERE", "WHILE", "WITH"
]

const kws = {}
for(let w of keywords) {
    kws[w] = kw(w)
}

kw = Object.assign(kw, kws);

module.exports = {
    kw: kw,
}
