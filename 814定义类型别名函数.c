#include <stdio.h>

int main(int argc, char const *argv[]) {
  typedef int test;
  int         a = 10;
  test        b = 20;
  printf("a=%d  sizeof(a)=%d\n", a, sizeof(a));
  printf("b=%d  sizeof(b)=%d\n", b, sizeof(b));
  return 0;
}