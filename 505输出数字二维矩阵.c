#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a[3][5], i, j;
  for (i = 0; i < 3; i++)
    for (j = 0; j < 5; j++)
      a[i][j] = 5 * i + j + 1;
  printf("自然数数组：\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 5; j++)
      printf("%3d", a[i][j]);
    printf("\n");
  }
  return 0;
}