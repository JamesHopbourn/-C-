#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int j, sum, base = 7;
  printf("请输入多项式次数：");
  scanf("%d", &j);
  for (int i = 1; i <= j; i++) {
    sum = sum + pow(base, i);
    printf("%d\n", sum);
  }
  return 0;
}