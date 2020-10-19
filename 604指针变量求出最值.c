#include <stdio.h>

int main(int argc, char const *argv[]) {
  int  a, b, c;
  int *pmax, *pmin;
  printf("请输入三个数字，以空格间隔：");
  scanf("%d %d %d", &a, &b, &c);
  pmax = (a > b) ? (a > c) ? &a : &b : &c;
  pmin = (a < b) ? (a < c) ? &a : &b : &c;
  printf("最大值：%d\n", *pmax);
  printf("最小值：%d\n", *pmin);
  return 0;
}