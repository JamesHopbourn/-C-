#include <stdio.h>

int SumAndMinus(int a, int b, int *p);

int main( ) {
  int a = 10, b = 5, sum, minus;
  sum = SumAndMinus(a, b, &minus);
  printf("相加=%d   相减=%d\n", sum, minus);
  return 0;
}

int SumAndMinus(int a, int b, int *p) {
  *p = a - b;
  return a + b;
}
