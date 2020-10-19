#include <stdio.h>

int bin(int x);

int main(int argc, char const *argv[]) {
  int a;
  printf("请输入一个十进制数：");
  scanf("%d", &a);
  bin(a);
  return 0;
}

int bin(int x) {
  {
    unsigned i;
    for (i = 1 << 31; i > 0; i = i / 2) (x & i) ? printf("1") : printf("0");
  }
  printf("\n");
}