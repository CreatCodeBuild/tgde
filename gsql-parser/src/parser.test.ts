import { GSQLParser } from "./parser";
import * as csp from "@creatcodebuild/csp";

(async () => {
    const p = await GSQLParser.New();
    
    // Test 1
    console.log(p.parser.parse(`SELECT t
    FROM :s -(LIKES>:e1)- Comment:msg -(HAS_CREATOR>)- :t
    WHERE s.firstName == "Viktor" AND s.lastName == "Akhiezer"`).rootNode.lastChild?.type)
    
    console.log(1234)
    
})();