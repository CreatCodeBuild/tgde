
export interface Config {
    TAGGABLE: boolean;
    STATS: string;
    PRIMARY_ID_AS_ATTRIBUTE: boolean;
}

export interface AttributeType {
    Name: string;
}

export interface Attribute {
    AttributeType: AttributeType;
    IsPartOfCompositeKey: boolean;
    PrimaryIdAsAttribute: boolean;
    AttributeName: string;
    HasIndex: boolean;
    internalAttribute: boolean;
    IsPrimaryKey: boolean;
}

export interface AttributeType2 {
    Name: string;
}

export interface PrimaryId {
    AttributeType: AttributeType2;
    IsPartOfCompositeKey: boolean;
    PrimaryIdAsAttribute: boolean;
    AttributeName: string;
    HasIndex: boolean;
    internalAttribute: boolean;
    IsPrimaryKey: boolean;
}

export interface VertexType {
    Usage: string[];
    Config: Config;
    Attributes: Attribute[];
    PrimaryId: PrimaryId;
    Name: string;
}

export interface Config2 {
}

export interface AttributeType3 {
    Name: string;
}

export interface Attribute2 {
    AttributeType: AttributeType3;
    IsPartOfCompositeKey: boolean;
    PrimaryIdAsAttribute: boolean;
    AttributeName: string;
    HasIndex: boolean;
    internalAttribute: boolean;
    IsPrimaryKey: boolean;
}

export interface EdgeType {
    IsDirected: boolean;
    ToVertexTypeName: string;
    Usage: string[];
    Config: Config2;
    Attributes: Attribute2[];
    FromVertexTypeName: string;
    Name: string;
}

export interface Schema {
    VertexTypes: VertexType[];
    EdgeTypes: EdgeType[];
}

// Result type of /gsqlserver/gsql/schema
export interface RootObject {
    error: boolean;
    message: string;
    results: Schema;
}
