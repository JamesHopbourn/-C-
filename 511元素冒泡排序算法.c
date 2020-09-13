#include <stdio.h>
#define N 10

int main(int argc, char const *argv[]) {
  int a[N];
  int i, j, k, temp;
  printf("请输入一个数组，以空格作为元素间隔：");
  for (i = 0; i < N; i++)
    scanf("%d", &a[i]);
  for (i = N - 1; i >= 1; i--) {
    k = i;
    for (j = 0; j < k - 1; j++) {
      if (a[j] > a[j + 1]) {
        temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
  }
  printf("排序后的数组\n");
  for (i = 0; i < N; i++)
    printf("%4d", a[i]);
  printf("\n");
  return 0;
}