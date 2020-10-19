#include <stdio.h>

int main(int argc, char const *argv[]) {
  int  a[5] = {5, 20, 8, 6, 13};
  int *p1, *p2;
  p1 = &a[1], p2 = &a[4];
  printf("%d %d\n", *p1, *p2);
  printf("%d\n", *p2 - *p1);
  // 如果下面使用 %d 会报错：warning: format specifies type 'int' but the
  // argument has type 'long' [-Wformat]
  printf("%ld\n", p2 - p1);
  return 0;
}