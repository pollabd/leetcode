const readline = require('readline').createInterface({
  input: process.stdin,
  output: process.stdout,
});

readline.question('', (num) => {
  const even = parseInt(num);
  if (even % 2 == 0 && even > 2) {
    console.log('YES');
  } else {
    console.log('NO');
  }
  readline.close();
});
