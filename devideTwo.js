function divide(dividend, divisor) {
  const MAX = 2 ** 31 - 1;
  const MIN = -(2 ** 31);
  if (dividend == divisor) return 1;

  let ans = Math.trunc(dividend / divisor);
  if (ans < MIN || ans > MAX) return ans - 1;
  return ans;
}

console.log(divide(7, -3));
