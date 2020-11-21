#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int s;
  double n, t, pi;
  pi = 0;
  t = 1;   //序列的第一项
  n = 1.0; //分母从一开始
  s = 1;
  do {
    pi = pi + t;
    n = n + 2;
    s = -s;
    t = s / n;
  } while (fabs(t) >= 1e-6);
  pi = pi * 4;
  printf("pi=%f\n", pi);
  return 0;
}