#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
  // 原书中没有下面这句求数组长度，此处优化
  int N = sizeof(a) / sizeof(a[0]);
  int i, temp;
  for (i = 0; i < N / 2; i++) {
    temp = a[i];
    a[i] = a[(N - 1) - i];
    a[(N - 1) - i] = temp;
  }

  for (i = 0; i < N; i++) printf("%4d ", a[i]);
  printf("\n");
  return 0;
}