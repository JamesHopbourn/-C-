#include <stdio.h>

int main(int argc, char const *argv[]) {
  float a, b, max;
  printf("请输入两个小数，以空格间隔：");
  scanf("%f %f", &a, &b);
  max = (a > b) ? a : b;
  printf("最大值：%f\n", max);
  return 0;
}