export type Maybe<T> = T | null;
export type Exact<T extends { [key: string]: unknown }> = { [K in keyof T]: T[K] };
export type MakeOptional<T, K extends keyof T> = Omit<T, K> & { [SubKey in K]?: Maybe<T[SubKey]> };
export type MakeMaybe<T, K extends keyof T> = Omit<T, K> & { [SubKey in K]: Maybe<T[SubKey]> };
/** All built-in and custom scalars, mapped to their actual values */
export type Scalars = {
  ID: string;
  String: string;
  Boolean: boolean;
  Int: number;
  Float: number;
};

export type HighlightToken = {
  __typename?: 'HighlightToken';
  start?: Maybe<TreeSitterPosition>;
  end?: Maybe<TreeSitterPosition>;
  type?: Maybe<Scalars['String']>;
};

export type Position = {
  line?: Maybe<Scalars['Int']>;
  character?: Maybe<Scalars['Int']>;
};

export type Query = {
  __typename?: 'Query';
  SemanticHightlight?: Maybe<Array<Maybe<HighlightToken>>>;
  Hover?: Maybe<Array<Maybe<Scalars['String']>>>;
};


export type QueryHoverArgs = {
  line?: Maybe<Scalars['Int']>;
  character?: Maybe<Scalars['Int']>;
};

export type TreeSitterPosition = {
  __typename?: 'TreeSitterPosition';
  row?: Maybe<Scalars['Int']>;
  column?: Maybe<Scalars['Int']>;
};
