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

## Function Call Statement ##
funcCallStmt := name ["<" type ["," type"]* ">"] "(" [argList] ")"
              | globalAccumName ("." funcName "(" [argList] ")")+
           
argList := expr ["," expr]*
*/
module.exports = {
    /*
        ## Assignment Statements ##
        assignStmt := name "=" expr
                    | name "." attrName "=" expr
        */
    assignStmt: $ => choice(
        seq($.name, "=", $.expr),
        seq($.name, ".", choice($.attrName, $.localAccumName), "=", $.expr)
    ),


    // argList := expr ["," expr]*
    argList: $ => seq(
        $.expr, repeat(seq(",", $.expr))
    )
}