#include <stdio.h>

int main(int argc, char const *argv[]) {
  int  a = 20;
  int *pa;
  pa = &a;
  printf("a   = %d\n", a);
  printf("*pa = %d\n", *pa);
  printf("&a  = %p\n", &a);
  printf("pa  = %p\n", pa);
  /*
  macOS 下打印内存地址需要用 %p
  否则报错 format specifies type 'int' but the argument has type 'int *'
  [-Wformat]
  */
  printf("%d,%d\n", pa == &a, *pa == a);
  return 0;
}
