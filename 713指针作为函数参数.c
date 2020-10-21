#include <stdio.h>

void function(int x, int y, int *z);

int main(int argc, char const *argv[]) {
  int a = 10, b = 90, c;
  function(a, b, &a);
  function(a, b, &b);
  function(a, b, &c);
  printf("a=%d  b=%d  c=%d\n", a, b, c);
  return 0;
}

void function(int x, int y, int *z) {
  *z = y - x;
}