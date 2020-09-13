#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a, b, x, side;
  printf("请输入任意两边长度和夹角，以空格作为间隔：");
  scanf("%d %d %d", &a, &b, &x);
  side = sqrt(pow(a, 2) + pow(b, 2) - 2 * a * b * cos(x));
  printf("边长：%d\n", side);
  return 0;
}