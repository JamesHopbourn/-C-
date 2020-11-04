#include <math.h>
#include <stdio.h>
#define PI 3.14159

int main(int argc, char const *argv[]) {
  int r;
  float s;
  printf("请输入圆的半径：");
  scanf("%d", &r);
  s = PI * pow(r, 2);
  printf("圆的面积是：%.2f\n", s);
  return 0;
}