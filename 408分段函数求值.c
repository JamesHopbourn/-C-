#include <stdio.h>

int main(int argc, char const *argv[]) {
  float x, y;
  printf("请输入变量值x：");
  scanf("%f", &x);
  if (x < 0)
    y = 0;
  else if (x < 50)
    y = x;
  else
    y = x * x;
  printf("x=%.2f y=%.2f\n", x, y);
  return 0;
}