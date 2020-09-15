#include <stdio.h>

int SumAndMinus(int a, int b, int *p);

int main() {
  int a = 10;
  int b = 5;
  int sum;
  int minus;
  sum = SumAndMinus(a, b, &minus);
  printf("sum=%d,minus=%d\n", sum, minus);
  return 0;
}

int SumAndMinus(int a, int b, int *p) {
  *p = a - b;
  return a + b;
}
