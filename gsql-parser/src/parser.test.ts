import { GSQLParser, filterTokens } from "./parser";
import assert from 'assert';
import { promises } from 'fs';

describe("", async () => {
    it("", async () => {
        const p = await GSQLParser.New();
        const testdata = __dirname + "/testdata";
        const files = await promises.readdir(testdata);
        for (const filename of files) {
            const filepath = testdata + "/" + filename
            console.log(filepath)
            const f = await promises.readFile(filepath);
            const tree = p.parser.parse(f.toString())
            for (let token of filterTokens(tree.rootNode, (node) => { return node.type == "ERROR" } ) ) {
                assert.equal('', token.tree.rootNode.toString())
                return
            }
            console.log("passed\n")
        }
    })
})