#include <stdio.h>

int main(int argc, char const *argv[]) {
  int   i, n;
  float p;
  printf("输入一个整数：");
  scanf("%d", &n);
  i = 1;
  p = 1;
  while (i <= n) {
    p *= i;
    i++;
  }
  printf("n!=%.0f\n", p);
  return 0;
}