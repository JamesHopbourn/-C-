#include <stdio.h>

int maxNumber(int a, int b, int c);

int main(int argc, char const *argv[]) {
  int a, b, c;
  printf("请输入三个数字，以空格间隔：");
  scanf("%d %d %d", &a, &b, &c);
  printf("最大值为：%d\n", maxNumber(a, b, c));
  return 0;
}

int maxNumber(int a, int b, int c) {
  return ((a > b) ? (a > c) ? a : b : c);
}