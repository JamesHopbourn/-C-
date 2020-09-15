#include <math.h>
#include <stdio.h>
#define π 3.14

int main(int argc, char const *argv[]) {
  float r, s;
  r = 20;
  s = π * r * r;
  printf("S = %.1f\n", s);
  return 0;
}