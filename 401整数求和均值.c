#include <stdio.h>

int main(int argc, char const *argv[]) {
  int num1, num2, sum;
  float aver;
  printf("请输入两个整数，以空格间隔：");
  scanf("%d %d", &num1, &num2);
  sum = num1 + num2;
  aver = sum / 2.0;
  printf("求和：%d\n均值：%f\n", sum, aver);
  return 0;
}