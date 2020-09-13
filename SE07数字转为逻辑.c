#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a = 0, b = 1, c = 2;
  printf("a=%d  !!a=%d\n", a, !!a);
  printf("b=%d  !!b=%d\n", b, !!b);
  printf("c=%d  !!c=%d\n", c, !!c);
  return 0;
}