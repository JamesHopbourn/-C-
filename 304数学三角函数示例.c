#include <math.h>
#include <stdio.h>
#define π 3.14159265

int main(int argc, char const *argv[]) {
  double x, y;
  x = 0.5 * π;
  y = sin(x);
  printf("sin(%f) = %f\n", x, y);
  y = cos(x);
  printf("cos(%f) = %f\n", x, y);
  x = 0.25 * π;
  y = tan(x);
  printf("tan(%f) = %f\n", x, y);
  return 0;
}