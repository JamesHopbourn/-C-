#include <stdio.h>

int main(int argc, char const *argv[]) {
  float sum, term, x;
  int   n, k, sign;
  printf("输入 n 和 x，以空格间隔：");
  scanf("%d %d", &n, &x);
  sum  = x;
  term = x;
  sign = 1;
  for (k = 2; k <= n; k++) {
    term *= x * x / (2 * k - 2) / (2 * k - 1);
    sign = -sign;
    sum += sign * term;
  }
  printf("总和：%f\n", sum);
  return 0;
}