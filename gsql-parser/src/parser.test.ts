import { GSQLParser, filterTokens } from "./parser";
import assert from 'assert';
import { readFile } from 'fs/promises';

describe("", async () => {
    it("", async () => {
        const p = await GSQLParser.New();

        const f = await readFile(__dirname+"/testdata/create-query.gsql");
        const tree = p.parser.parse(f.toString())
        for(let token of filterTokens(tree.rootNode, (node) => node.type == "Error")) {
            assert.equal(token, '')
        }

        const f2 = await readFile(__dirname+"/testdata/schema.gsql");
        const tree2 = p.parser.parse(f2.toString())
        for(let token of filterTokens(tree2.rootNode, (node) => node.type == "Error")) {
            assert.equal(token, '')
        }
    })
})