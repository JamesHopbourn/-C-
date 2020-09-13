#include <stdio.h>

int main(int argc, char const *argv[]) {
  float x, y;
  printf("请输入变量值x：");
  scanf("%f", &x);
  y = (x < 0) ? (x < 50) ? 0 : x : x * x;
  printf("x=%.2f y=%.2f\n", x, y);
  return 0;
}