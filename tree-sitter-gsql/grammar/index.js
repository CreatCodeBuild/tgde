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

const kws = {
    TRUE: kw("TRUE"),
    FALSE: kw("FALSE"),
    CREATE: kw('CREATE'),
    VERTEX: kw('VERTEX'),
    DEFAULT: kw('DEFAULT'),
    WITH: kw('WITH'),
    STATS: kw('STATS'),
    PRIMARY_ID: kw('PRIMARY_ID'),
    DROP: kw('DROP'),
    ALL: kw('ALL'),
    OUTDEGREE_BY_EDGETYPE: kw('OUTDEGREE_BY_EDGETYPE'),
    UNDIRECTED: kw('UNDIRECTED'),
    DIRECTED: kw('DIRECTED'),
    EDGE: kw('EDGE'),
    FROM: kw('FROM'),
    TO: kw('TO'),
    REV_NAME: kw('rev_name'),
    REVERSE_EDGE: kw('REVERSE_EDGE'),
    ADMIN: kw('ADMIN'),
    GRAPH: kw('GRAPH'),
}

kw = Object.assign(kw, kws);

module.exports = {
    kw: kw,
}
