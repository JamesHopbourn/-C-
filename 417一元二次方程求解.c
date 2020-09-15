#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  float a, b, c, d, x1, x2, p, q;
  printf("请输入系数 a b c，以间隔空格：");
  scanf("%f %f %f", &a, &b, &c);
  if (a == 0)
    if (b == 0)
      if (c == 0)
        printf("infinite \n");
      else
        printf("无解\n");
    else
      printf("x=%0.4f\n", -c / b);
  else {
    d = b * b - 4 * a * c;
    if (d >= 0) {
      x1 = (-b + sqrt(d)) / (2 * a);
      x1 = (-b - sqrt(d)) / (2 * a);
      printf("两个实数解：x1=%.4f x2=%.4f\n", x1, x2);
    } else {
      p = -b / (2 * a);
      q = sqrt(-d) / (2 * a);
      printf("两个复数解：\nx1=%0.4f+%0.4fi \nx2=%0.4f-%0.4fi\n", p, q, p, q);
    }
  }
  return 0;
}