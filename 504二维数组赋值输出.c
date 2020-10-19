#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a[3][4], i, j;

  printf("请输入 12 个数字组成的数组，以空格间隔：");
  for (i = 0; i < 3; i++)
    for (j = 0; j < 4; j++) scanf("%d", &a[i][j]);

  printf("输入的数组为：\n");

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 4; j++) printf("%3d", a[i][j]);
    printf("\n");
  }
  return 0;
}