// https://docs.tigergraph.com/dev/gsql-ref/ddl-and-loading/creating-a-loading-job
/*
CREATE LOADING JOB job_name FOR GRAPH graph_name {
   [zero or more DEFINE statements;]
   [zero or more LOAD statements;] | [zero or more DELETE statements;]
}
*/
const { kw } = require("./index");
module.exports = {
    create_loading_job: $=>seq(
        kw.CREATE, kw.LOADING, kw.JOB, $.name, kw.FOR, kw.GRAPH, $.name, "{",
            repeat($.define_statement),
            // choice(
            //     repeat($.load_statement),
            //     repeat($.delete_statement)
            // ),
        "}"
    ),

    /*
    DEFINE FILENAME filevar ["=" `filepath_string ]; 
    filepath_string = ( path | " all :" path | " any :" path | mach_aliases " :" path ["," mach_aliases ":" path ]* ) 
    mach_aliases = name["|"name]*`
    */
    define_statement: $=>seq(
        kw.DEFINE, kw.FILENAME, $.name, optional(seq("=", $.stringLiteral)) // todo: more semantic token for filepath_string
    )
}