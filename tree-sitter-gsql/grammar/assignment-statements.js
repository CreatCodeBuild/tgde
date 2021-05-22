/*
## Assignment Statements ##
assignStmt := name "=" expr
            | name "." attrName "=" expr
            
attrAccumStmt := name "." attrName "+=" expr
            
lAccumAssignStmt := vertexAlias "." localAccumName ("+="| "=") expr

gAccumAssignStmt :=  globalAccumName ("+=" | "=") expr

loadAccumStmt := globalAccumName "=" "{" LOADACCUM loadAccumParams
                                  ["," LOADACCUM loadAccumParams]* "}"

loadAccumParams := "(" filePath "," columnId ["," [columnId]* ","
                stringLiteral "," (TRUE | FALSE) ")" ["." FILTER "(" condition ")"]
*/
module.exports = {
    /*
        ## Assignment Statements ##
        assignStmt := name "=" expr
                    | name "." attrName "=" expr
        */
    assignStmt: $ => choice(
        seq($.name, "=", $.expr),
        seq($.name, ".", $.attrName, "=", $.expr)
    ),

    // lAccumAssignStmt := vertexAlias "." localAccumName ("+="| "=") expr
    lAccumAssignStmt: $ => seq($.vertexAlias, ".", $.localAccumName, choice("+=", "="), $.expr),
}