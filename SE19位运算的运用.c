#include <stdio.h>

int main(int argc, char const *argv[]) {
  // 取模判断奇偶
  int a = 3;
  a % 2 ? printf("奇数\n") : printf("偶数\n");

  // 与运算判断奇偶
  printf("\n");
  int b = 3;
  b & 1 ? printf("奇数\n") : printf("偶数\n");

  // 加减法进行数值转换
  printf("\n");
  int c = 10, d = 20;
  printf("c=%d   d=%d\n", c, d);
  c = d - c;
  printf("c=%d   d=%d\n", c, d);
  d = d - c;
  printf("c=%d   d=%d\n", c, d);
  c = c + d;
  printf("c=%d   d=%d\n", c, d);

  // 位运算法进行数值转换
  printf("\n");
  int e = 10, f = 20;
  printf("e=%d   f=%d\n", e, f);
  e = e ^ f;
  printf("e=%d   f=%d\n", e, f);
  f = e ^ f;
  printf("e=%d   f=%d\n", e, f);
  e = e ^ f;
  printf("e=%d   f=%d\n", e, f);
  return 0;
}