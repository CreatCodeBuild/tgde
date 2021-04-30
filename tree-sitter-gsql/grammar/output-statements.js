/*
## Output Statements ##

printlnStmt := fileVar ".println" "(" expr ("," expr)* ")"

logStmt := LOG "(" condition "," argList ")"

returnStmt := RETURN expr
*/
const { kw, TRUE, FALSE } = require("./index");
module.exports = {
    // printStmt := PRINT printExpr ("," printExpr)* [WHERE condition] [TO_CSV (filePath | fileVar)]
    printStmt: $ => seq(
        kw("PRINT"),
        $.printExpr,
        repeat(seq(",", $.printExpr)),
        optional(
            seq(kw("WHERE"), $.condition)
        ),
        optional(seq(
            kw("TO_CSV"),
            choice($.filePath, $.fileVar)
        ))
    ),

    // printExpr := (expr | vExprSet) [ AS jsonKey]
    //            | tableName
    printExpr: $ => choice(
        seq(
            choice($.expr, $.vExprSet), optional(seq(kw("AS"), $.jsonKey))
        ),
        $.tableName
    ),

    // vExprSet  := expr "[" vSetProj ("," vSetProj)* "]"
    // vSetProj  := expr [ AS jsonKey]
    // jsonKey := name
    vExprSet: $ => seq(
        $.expr, "[", $.vSetProj, repeat(seq(",", $.vSetProj)), ']'
    ),
    vSetProj: $ => seq(
        $.expr, optional(seq(kw('AS'), $.jsonKey))
    ),
    jsonKey: $ => $.name,

    // returnStmt := RETURN expr
    returnStmt: $=>seq(kw("return"), $.expr)
}