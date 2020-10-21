#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i, j, k, m1, m2;
  printf("水仙花数：");
  for (i = 1; i <= 9; i++)
    for (j = 0; j <= 9; j++)
      for (k = 0; k <= 9; k++) {
        m1 = i * 100 + j * 10 + k;
        m2 = pow(i, 3) + pow(j, 3) + pow(k, 3);
        if (m1 == m2)
          printf("%d ", m1);
      }
  printf("\n");
  return 0;
}