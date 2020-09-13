#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i, j, n = 10;
  float t, s = 0;
  for (i = 0; i <= n; i++) {
    for (t = 1, j = 1; j <= i; j++) {
      t *= j;
      s += t;
    }
  }
  printf("s = %0.f\n", s);
  return 0;
  // 正确答案是 4037913
}