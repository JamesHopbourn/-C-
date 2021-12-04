#include <stdio.h>

int main(int argc, char const *argv[]) {
  int times;
  scanf("%d", &times);
  for (int j = 0; j < times; j++) {
    int N, rowFlag = 0, sum = 0;
    scanf("%d", &N);
    int a[N][N];

    // 存入数组
    for (int i = 0; i < N; i++)
      for (int j = 0; j < N; j++)
        scanf("%d", &a[i][j]);

    // 输出数组
    for (int i = 1; i <= N - 1; i++) {
      for (int j = 0; j <= rowFlag; j++) {
        // printf("a[%d][%d] = %d\t", i,j,a[i][j]);
        sum = sum + a[i][j];
      }
      rowFlag++;
    }

    // 判断总和是否大于0
    if (sum == 0)
      printf("YES\n");
    else
      printf("NO\n");
  }
}
