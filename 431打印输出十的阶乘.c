#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i, n = 10, j;
  float s = 0, t;
  for (i = 1; i <= n; i++) {
    for (t = 1, j = 1; j <= i; j++) {
      t *= j;
      s += t;
    }
  }
  printf("s=%.0f\n", s);
  return 0;
}