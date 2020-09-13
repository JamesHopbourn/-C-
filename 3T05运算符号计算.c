#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a = 5, b = 10, c = -6;
  printf("%d\n", a > b && a < c);
  printf("%d\n", a < b && a > c);
  printf("%d\n", a == c || b > a);
  printf("%d\n", b > 15 && c < 0 || a > 0);
  printf("%d\n", (a / 2.0 == 0.0 && b / 2.0 != 0.0) || c < 0.0);
  return 0;
}