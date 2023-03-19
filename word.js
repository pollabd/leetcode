const readline = require('readline');
const read = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

read.question('', (s) => {
  let countUP = 0;
  let countLOW = 0;

  for (let i in s) {
    if (s[i] === s[i].toUpperCase()) {
      countUP++;
    } else {
      countLOW++;
    }
  }

  if (countUP > countLOW) {
    console.log(s.toUpperCase());
  } else {
    console.log(s.toLowerCase());
  }
  read.close();
});
