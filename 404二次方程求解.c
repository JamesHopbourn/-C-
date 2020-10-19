#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  float a, b, c, d, x1, x2;
  printf("请输入方程的 a b c 三个系数值，以空格间隔：");
  scanf("%f %f %f", &a, &b, &c);
  d  = b * b - 4 * a * c;
  x1 = (-b + sqrt(d)) / (2 * a);
  x1 = (-b - sqrt(d)) / (2 * a);
  printf("x1 = %.4f\nx2=%.4f\n", x1, x2);
  return 0;
}