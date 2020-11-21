#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
  int N = sizeof(a) / sizeof(a[0]);
  int i, delete_at;
  printf("请输入删除元素位置：");
  scanf("%d", &delete_at);
  for (i = delete_at; i < (N - 1); i++)
    a[i] = a[i + 1];
  for (i = 0; i < (N - 1); i++)
    printf("%4d", a[i]);
  printf("\n");
  return 0;
}