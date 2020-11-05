#include <stdio.h>

int main(int argc, char const *argv[]) {
  int N;
  scanf("%d", &N);
  // N 指定行数   i 当前行数   j 控制空格
  for (int i = 1; i <= N; i++) {
    // 不显示偶数行
    if (i % 2 == 0) continue;
    // 为什么 j = N - 1，因为从中间行开始向上++，反向 --
    for (int j = N - 1; j >= i; j--) printf(" ");
    // 定义刚开始打印一个星号，之后逐行 ++ 递增
    for (int j = 1; j <= i; j++) printf("* ");
    printf("\n");
  }

  for (int i = 1; i <= N; i++) {
    // 不显示奇数行
    if (i % 2 == 1) continue;
    for (int j = 1; j <= i; j++) printf(" ");
    for (int j = N - 1; j >= i; j--) printf("* ");
    printf("\n");
  }
}
