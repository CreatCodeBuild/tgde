// common types and data used by both server and client
export enum Request {
	SemanticHightlight = "SemanticHightlight",
	Hover = "Hover"
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