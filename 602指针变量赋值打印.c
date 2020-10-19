#include <stdio.h>

int main(int argc, char const *argv[]) {
  int  a = 20, b = 30;
  int *pa, *pb;
  pa = &a, pb = &b;
  printf("*pa = %d *pb = %d\n", *pa, *pb);
  pa = pb;
  printf("*pa = %d *pb = %d\n", *pa, *pb);
  pa = &a, pb = pa;
  printf("*pa = %d *pb = %d\n", *pa, *pb);
  return 0;
}