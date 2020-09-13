#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a[3][4] = {{0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11}};
  // 如果使用 %d 会报错：warning: format specifies type 'int' but the argument
  // has type 'unsigned long' [-Wformat]
  printf("数组大小：%ld\n", sizeof(a));
  printf("每列大小：%ld\n", sizeof(a[0]));
  printf("元素大小：%ld\n", sizeof(a[0][0]));
  return 0;
}