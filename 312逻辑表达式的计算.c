#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a, b, c, d;
  a = 0;
  b = 1;
  c = a++ && b++;
  d = a++ || b++;
  printf("a=%d  b=%d  c=%d  d=%d\n", a, b, c, d);
  return 0;
}