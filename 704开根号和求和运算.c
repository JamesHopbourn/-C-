#include <math.h>
#include <stdio.h>

float myfac(int n);

int main(int argc, char const *argv[]) {
  int   n = 0;
  float y = 0, z = 0;
  printf("请输入数字：");
  scanf("%d", &n);
  printf("%d 根号为：%0.f\n", n, sqrt(n));
  printf("%d 阶乘为：%0.f\n", n, myfac(n));
}

float myfac(int n) {
  int   i;
  float y = 1;
  for (i = 1; i <= n; i++) y = y * i;
  return y;
}