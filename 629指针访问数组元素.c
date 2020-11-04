#include <stdio.h>
#define Row 3
#define Column 4

int main(int argc, char const *argv[]) {
  int a[Row][Column] = {{0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 1, 2}};
  int *pa[Row];
  int i, j;
  for (i = 0; i < Row; i++) pa[i] = a[i];
  for (i = 0; i < Row; i++) {
    for (j = 0; j < Column; j++) {
      printf("a[%d][%d]=%d  ", i, j, *(pa[i] + j));
    }
    printf("\n");
  }
  return 0;
}