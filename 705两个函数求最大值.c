#include <stdio.h>

int max(int x, int y);

int main(int argc, char const *argv[]) {
  int a, b;
  printf("请输入两个数字，以空格作为间隔：");
  scanf("%d %d", &a, &b);
  printf("最大值为：%d\n", max(a, b));
  return 0;
}

int max(int x, int y) { return (x > y ? x : y); }