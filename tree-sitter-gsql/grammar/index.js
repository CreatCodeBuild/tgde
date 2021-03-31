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

module.exports = {
    kw: kw,
    TRUE: kw("TRUE"),
    FALSE: kw("FALSE")
}
