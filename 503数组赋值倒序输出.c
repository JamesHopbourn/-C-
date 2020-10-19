#include <stdio.h>
#define N 10

int main(int argc, char const *argv[]) {
  int a[N], i;
  printf("请输入十个数字，以空格间隔：");
  for (i = 0; i < 10; ++i) scanf("%d", &a[i]);
  for (i = 9; i >= 0; i--) printf("%3d", a[i]);
  printf("\n");
  return 0;
}