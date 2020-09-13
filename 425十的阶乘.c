#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i, n = 10;
  float s, t;
  for (i = 1, t = 1, s = 0; i <= n; i++) {
    t *= i;
    s += t;
  }
  printf("s=%.0f\n", s);
  return 0;
}