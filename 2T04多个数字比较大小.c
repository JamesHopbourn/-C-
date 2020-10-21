#include <stdio.h>

int main(int argc, char const *argv[]) {
  int   number;
  float a, b, c, max;
  printf("请选择要比较的数字个数 2 或 3：");
  scanf("%d", &number);
  switch (number) {
    case 2:
      printf("请输入两个数字，以空格间隔：");
      scanf("%f %f", &a, &b);
      max = a > b ? a : b;
      printf("最大值为：%.2f\n", max);
      break;

    case 3:
      printf("请输入三个数字，以空格间隔：");
      scanf("%f %f %f", &a, &b, &c);
      max = (a > b) ? (a > c) ? a : b : c;
      printf("最大值为：%.2f\n", max);
      break;
  }
  return 0;
}