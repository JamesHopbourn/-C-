#include <stdio.h>

int main() {
  // 打印上三角形
  int i, j;
  for (i = 0; i < 8; i++) {
    for (j = i; j < 8; j++) //改变初始值
      printf(" ");

    printf("*\n");
  }

  // 打印下三角形
  int k, l;
  for (k = 0; k < 8; k++) {
    for (l = 0; l < k + 1; l++) //改变循环条件
      printf(" ");

    printf("*\n");
  }
  return 0;
}