#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a[15] = {21, 13, 52, 0, -25, 6, 18, 1, 36, 2, -20, 17, 9, 33, 8};
  int i, x, findat, flag = 0;
  printf("请输入要查找的数字：");
  scanf("%d", &x);
  for (i = 0; i < 15; i++) {
    if (a[i] == x) {
      flag = 1;
      findat = i;
      break;
    }
  }

  if (flag == 1)
    printf("%d 已找到，位于 %d\n", x, findat);
  else
    printf("%d 未找到\n", x);
  return 0;
}