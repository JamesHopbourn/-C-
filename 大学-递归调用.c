#include <stdio.h>

float fac(int n);

int main(int argc, char const *argv[]) {
  int n;
  float sum;
  printf("请输入数字：");
  scanf("%d", &n);
  if (n < 0) {
    printf("输入错误，请重新输入\n");
  } else {
    sum = fac(n);
  }
  printf("!%d = %.0f\n", n, sum);
  return 0;
}

float fac(int n) {
  float f;
  if (n == 0 || n == 1) {
    f = 1;
  } else {
    f = n * fac(n - 1);
  }
  return (f);
}
