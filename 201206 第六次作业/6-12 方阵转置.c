#include <stdio.h>

int main() {
  int N;
  scanf("%d", &N);
  int a[N][N], b[N][N];
  for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++)
      scanf("%d", &a[i][j]);

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++)
      b[j][i] = a[i][j];
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++)
      printf("%4d", b[i][j]);
    printf("\n");
  }
  return 0;
}
