// https://docs.tigergraph.com/dev/gsql-ref/ddl-and-loading/defining-a-graph-schema


const { kw } = require("./index");
module.exports = {
    /*
       CREATE VERTEX vertex_type_name "(" primary_id_name_type
           ["," attribute_name type [DEFAULT default_value] ]* ")"
           [WITH [STATS="none"|"outdegree_by_edgetype"][primary_id_as_attribute="true"]]
       */
    CREATE_VERTEX: $ => seq(
        kw.CREATE, kw.VERTEX, $.vertexType, "(", $.primary_id_name_type,
        repeat(seq(
            ",", $.name, $.type, optional(seq(kw.DEFAULT, $.expr))
        )),
        ")",
        optional($.WITH)
    ),

    /*
    CREATE UNDIRECTED EDGE edge_type_name "("
            FROM vertex_type_name "," TO vertex_type_name
            ["|" FROM vertex_type_name, TO vertex_type_name]*
            ["," attribute_name type [DEFAULT default_value]]* ")"        
    */
    CREATE_UNDIRECTED_EDGE: $ => seq(
        kw.CREATE, kw.UNDIRECTED, kw.EDGE, $.edgeType, "(",
        kw.FROM, $.vertexType, ",", kw.TO, $.vertexType,
        repeat(seq(
            "|", kw.FROM, $.vertexType, kw.TO, $.vertexType
        )),
        repeat(seq(
            ",", $.attrName, $.type, optional(seq(kw.DEFAULT, $.expr))
        )),
        ")"
    ),

    /*
    CREATE DIRECTED EDGE edge_type_name "("
            FROM vertex_type_name "," TO vertex_type_name
            ["|" FROM vertex_type_name, TO vertex_type_name]*
            ["," attribute_name type [DEFAULT default_value]]* ")"
            [WITH REVERSE_EDGE="rev_name"]        
    */
    CREATE_DIRECTED_EDGE: $ => seq(
        kw.CREATE, kw.DIRECTED, kw.EDGE, $.edgeType, "(",
        kw.FROM, $.vertexType, ",", kw.TO, $.vertexType,
        repeat(seq(
            "|", kw.FROM, $.vertexType, kw.TO, $.vertexType
        )),
        repeat(seq(
            ",", $.attrName, $.type, optional(seq(kw.DEFAULT, $.expr))
        )),
        ")",
        optional(seq(
            kw.WITH, kw.REVERSE_EDGE, "=", '"', $.name, '"',
        ))
    ),

    WITH: $ => seq(
        kw.WITH,
        optional(
            seq(kw.STATS, "=",
                choice(
                    '"none"',
                    seq('"', kw.OUTDEGREE_BY_EDGETYPE, '"')
                )
            )
        ),
        optional(
            seq(
                "primary_id_as_attribute",
                "=",
                '"true"'
            )
        )
    ),

    /*
    CREATE GRAPH graph_name (vertex_or_edge_type, vertex_or_edge_type...)
                    [WITH ADMIN username]
    // Replace graph_name with the name you want to name the graph with
    // Replace vertex_or_edge_type with the vertex and edge types you
    //     want to include in the graph
    */
    CREATE_GRAPH: $ => seq(
        kw.CREATE, kw.GRAPH, $.name, "(", choice(repeat($.name), "*"), ")",
        optional(seq(
            kw.WITH, kw.ADMIN, $.name,
        ))
    ),

    USE_GRAPH: $ => seq(
        kw.USE, kw.GRAPH, $.name
    ),

    // primary_id_name_type := PRIMARY_ID id_name id_type
    primary_id_name_type: $ => seq(
        kw.PRIMARY_ID,
        $.name,
        $.type
    ),

    // DROP ALL
    DROP: $ => seq(
        kw.DROP,
        choice(
            kw.ALL,
            seq(kw.GRAPH, $.name)
        )
    ),

    /*
    CREATE GLOBAL SCHEMA_CHANGE job <job-name> 
    {
        ALTER VERTEX object_type_name ADD INDEX index_type_name ON (attribute_name);
        ALTER VERTEX vertex_type_name DROP INDEX index_type_name;
    };  
    */
    ADD_INDEX: $ => seq(
        kw.ALTER, kw.VERTEX, $.type, kw.ADD, kw.INDEX, $.type, kw.ON, "(", $.attrName, ")", optional(";")
    ),
    DROP_INDEX: $ => seq(
        kw.ALTER, kw.VERTEX, $.type, kw.DROP, kw.INDEX, $.type, optional(";")
    )
}