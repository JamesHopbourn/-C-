#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  double p, s;
  double a = 3.5, b = 4.5, c = 5.5;
  p = 0.5 * (a + b + c);
  s = sqrt(p * (p - a) * (p - b) * (p - c));
  printf("area = %f\n", s);
  return 0;
}