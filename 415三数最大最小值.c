#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a, b, c, max, min;
  printf("请输入三个整数,以空格间隔：");
  scanf("%d %d %d", &a, &b, &c);
  max = (a > b) ? (a > c) ? a : b : c;
  min = (a < b) ? (a < c) ? a : b : c;
  printf("最大值为：%d 最小值为：%d\n", max, min);
  return 0;
}