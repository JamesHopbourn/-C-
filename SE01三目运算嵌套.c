#include <stdio.h>

int main(int argc, char const *argv[]) {
  int  a, b, c, d;
  int *pmax, *pmin;
  printf("请输入四个数字，以空格间隔：");
  scanf("%d %d %d %d", &a, &b, &c, &d);
  pmax = (a > b) ? (a > c) ? (a > d) ? &a : &b : &c : &d;
  pmin = (a < b) ? (a < c) ? (a < d) ? &a : &b : &c : &d;
  printf("最大值：%d\n", *pmax);
  printf("最小值：%d\n", *pmin);
  return 0;
}