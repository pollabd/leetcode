const readline = require('readline');
const read = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

read.question('', (s) => {
  read.close();
});
