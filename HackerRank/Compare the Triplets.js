/*
Function Description

Complete the function compareTriplets in the editor below.

compareTriplets has the following parameter(s):
    -int a[3]: Alice's challenge rating
    -int b[3]: Bob's challenge rating

Return

    -int[2]: Alice's score is in the first position, and Bob's score is in the second.
*/

'use strict';

const fs = require('fs');

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', function(inputStdin) {
    inputString += inputStdin;
});

process.stdin.on('end', function() {
    inputString = inputString.split('\n');

    main();
});

function readLine() {
    return inputString[currentLine++];
}

/*
 * Complete the 'compareTriplets' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER_ARRAY b
 */

function compareTriplets(a, b) {
    let aScore = 0
    let bScore = 0
    for(let i = 0; i<4; i++){
        if (a[i]>b[i]){
            aScore +=1
        } else if (b[i]>a[i]) {
            bScore +=1
        } 
    }
    
    return [aScore, bScore]

}

function main() {
    const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

    const a = readLine().replace(/\s+$/g, '').split(' ').map(aTemp => parseInt(aTemp, 10));

    const b = readLine().replace(/\s+$/g, '').split(' ').map(bTemp => parseInt(bTemp, 10));

    const result = compareTriplets(a, b);

    ws.write(result.join(' ') + '\n');

    ws.end();
}
