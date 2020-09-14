#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a[10] = {7, 9, 12, 18, 21, 25, 33, 39, 45, 60};
  int x, left = 0, mid, right = 9, flag = 0;
  printf("请输入要查找的数字：");
  scanf("%d", &x);
  if (x >= a[left] && x <= a[right])
    while (!flag && left <= right) {
      mid = (left + right) / 2;
      if (a[mid] == x)
        flag = 1;
      else if (x > a[mid])
        left = mid + 1;
      else
        right = mid - 1;
    }
  if (flag == 1)
    printf("%d 已找到，位于 %d\n", x, mid);
  else
    printf("%d 未找到\n", x);
  return 0;
}