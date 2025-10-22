function reverse(x) {
  const MAX = 2 ** 31 - 1;
  const MIN = -(2 ** 31);
  let res = 0;
  let y = Math.abs(x);
  while (y !== 0) {
    let r = y % 10;
    y = Math.floor(y / 10);
    if (res > MAX / 10 || (res === MAX / 10 && r > 7)) return 0;
    res = res * 10 + r;
  }

  res = x < 0 ? -res : res;
  if (res < MIN || res > MAX) return 0;

  return res;
}

console.log(reverse(-123));
// reverse(123);
