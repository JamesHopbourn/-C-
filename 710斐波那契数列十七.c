#include <stdio.h>

int fib(int a, int b);

int main(int argc, char const *argv[]) {
  int i, first = 0, second = 1;
  printf("%3d %3d", first, second);
  for (i = 1; i <= 15; i++)
    printf("%3d", fib(first, second));
  printf("\n");
  return 0;
}

int fib(int a, int b) {
  int c;
  c = a + b;
  a = b;
  b = c;
  return c;
}