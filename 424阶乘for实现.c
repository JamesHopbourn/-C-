#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i, n;
  float p = 1;
  printf("请输入一个实数：");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
    p *= i;
  printf("n!=%f\n", p);
  return 0;
}