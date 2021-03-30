function caseInsensitive(word) {
    return new RegExp(word
        .split('')
        .map(letter => `[${letter.toLowerCase()}${letter.toUpperCase()}]`)
        .join('')
    )
}

module.exports = {
    kw: function kw(keyword) {
        return alias(caseInsensitive(keyword), keyword)
    }
}
