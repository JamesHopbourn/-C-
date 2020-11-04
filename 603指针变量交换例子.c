#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a = 10, b = 50, temp;
  int *pa, *pb;
  pa = &a, pb = &b;
  printf("a = %d  b = %d\n", a, b);
  temp = *pa, *pa = *pb, *pb = temp;
  printf("a = %d  b = %d\n", a, b);
  return 0;
}