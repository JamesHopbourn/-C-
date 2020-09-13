#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a, b, c, d, min;
  printf("请输入四个不相等的整数，以空格间隔：");
  scanf("%d %d %d %d", &a, &b, &c, &d);

  if (a == b == c == d) {
    printf("四个数要求不相等！\n");
    return 0;
  }

  min = (a < b) ? (a < c) ? (a < d) ? a : b : c : d;
  printf("最小值为：%d\n", min);
  return 0;
}