#include <stdio.h>

int main(int argc, char const *argv[]) {
  int   a[3][4] = {{0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 0, 6}};
  int * b[3] = {a[0], a[1], a[2]};
  int **p = b;
  int   i, j;
  for (i = 0; i < 3; i++)
    for (j = 0; j < 4; j++)
      printf("%d %d %d %d\n", a[i][j], *(*(a + i) + j), *(b[i] + j),
             *(*(p + i) + j));
  return 0;
}