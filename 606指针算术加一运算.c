#include <stdio.h>
#define N 5;

int main(int argc, char const *argv[]) {
  int a[5], i, *pa;
  pa = a;
  for (i = 0; i < 5; i++) {
    *pa = i;
    pa++;
  }
  pa = a;
  for (i = 0; i < 5; i++) printf("a[%d] = %d\n", i, *pa++);
  return 0;
}