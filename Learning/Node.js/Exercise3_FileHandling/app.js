const fs = require("fs");

fs.writeFileSync('./test.txt', "Hey there, this text was written by app.js.");

const result = fs.readFileSync('./contacts.txt', "utf-8");
console.log(result);

fs.appendFileSync('./test.txt', "\nAppending to file form app.js.")