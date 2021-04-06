// common types and data used by both server and client
export enum Request {
	SemanticHightlight = "SemanticHightlight",
	GQL = "GQL"
}

export interface SemanticHightlightHandler {
	(document: string): Promise<HighlightToken[]>
} 

export interface HighlightToken {
	start: TreeSitterPosition
	end: TreeSitterPosition
	type: string
}

export interface TreeSitterPosition {
	row: number
	column: number
}