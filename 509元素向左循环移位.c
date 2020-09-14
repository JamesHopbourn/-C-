#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int i, j, n, temp;
  printf("请输入左移次数：");
  scanf("%d", &n);
  for (i = 1; i <= n; i++) {
    temp = a[0];
    for (j = 0; j <= 7; j++)
      a[j] = a[j + 1];
    a[8] = temp;
  }

  for (i = 0; i < 9; i++)
    printf("%4d", a[i]);
  printf("\n");
  return 0;
}