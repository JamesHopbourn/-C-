#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  float a, b, c, fa, fb, fc;
  do {
    printf("输入系数 a b，以空格间隔：");
    scanf("%f %f", &a, &b);
    fa = ((a + 1.1) * a + 0.9) * a - 1.4;
    fb = ((b + 1.1) * a + 0.9) * b - 1.4;
  } while (fa * fb >= 0);

  do {
    c  = (a + b) / 2;
    fc = ((c + 1.1) * c + 0.9) * c - 1.4;
    fa = ((a + 1.1) * a + 0.9) * a - 1.4;
    if (fc * fa > 0)
      a = c;
    else
      b = c;
  } while (fabs(fc) >= 1e-6);
  printf("方程的一个根为：%8.2f\n", c);
  return 0;
}