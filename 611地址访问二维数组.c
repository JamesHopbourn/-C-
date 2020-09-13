#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a[3][4] = {{0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 3, 6}};
  int i, j;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 4; j++)
      // *(a[i]+j) == a[i][j]
      printf("a[%d][%d]=%d  ", i, j, *(a[i] + j));
    printf("\n");
  }
  return 0;
}