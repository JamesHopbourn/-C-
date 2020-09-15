#include <stdio.h>

int main(int argc, char const *argv[]) {
  unsigned a, b;
  printf("请输入一个数字：");
  scanf("%d", &a);
  b = a >> 5;
  // 逻辑左移5位，即2^5=32，即100/32=3
  b = b & 15;
  // 3与15相与得 3，可用python验算
  printf("a=%d  b=%d\n", a, b);
  return 0;
}