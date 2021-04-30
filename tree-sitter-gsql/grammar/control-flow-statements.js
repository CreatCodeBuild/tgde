/*
#########################################################
## Control Flow Statements ##

queryBodyIfStmt := IF condition THEN queryBodyStmts
                 [ELSE IF condition THEN queryBodyStmts ]*
                 [ELSE queryBodyStmts ] END
dmlSubIfStmt :=    IF condition THEN dmlSubStmtList
                 [ELSE IF condition THEN dmlSubStmtList ]*
                 [ELSE dmlSubStmtList ] END

queryBodyCaseStmt := CASE  (WHEN condition THEN queryBodyStmts)+ [ELSE queryBodyStmts] END
               | CASE expr (WHEN constant  THEN queryBodyStmts)+ [ELSE queryBodyStmts] END
dmlSubCaseStmt := CASE     (WHEN condition THEN dmlSubStmtList)+ [ELSE dmlSubStmtList] END
               | CASE expr (WHEN constant  THEN dmlSubStmtList)+ [ELSE dmlSubStmtList] END

queryBodyWhileStmt := WHILE condition [LIMIT simpleSize] DO queryBodyStmts END
dmlSubWhileStmt :=    WHILE condition [LIMIT simpleSize] DO dmlSubStmtList END
simpleSize := integer | varName | paramName

queryBodyForEachStmt := FOREACH forEachControl DO queryBodyStmts END
dmlSubForEachStmt :=    FOREACH forEachControl DO dmlSubStmtList END
 
forEachControl := ( iterationVar | "(" keyVar ("," valueVar)+ ")") (IN | ":") setBagExpr
                | iterationVar IN RANGE "[" expr "," expr"]" ["." STEP "(" expr ")"]
iterationVar := name
keyVar := name
valueVar := name
*/
const { kw } = require("./index");
const { escape_sequence } = require("./types-and-names");
const IF = kw("IF")
const ELSE = kw("ELSE")
const THEN = kw("THEN")
const END = kw("END")
module.exports = {
    /*
    queryBodyIfStmt := IF condition THEN queryBodyStmts
                    [ELSE IF condition THEN queryBodyStmts ]*
                    [ELSE queryBodyStmts ] END    
    */
    queryBodyIfStmt: $=>seq(
        IF, $.condition, THEN, $.queryBodyStmts,
        repeat(seq(ELSE, IF, $.condition, THEN, $.queryBodyStmts)),
        optional(seq(ELSE, $.queryBodyStmts)), END
    ),
    simpleSize: $ => choice($.integer, $.varName, $.paramName)
}