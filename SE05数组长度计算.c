#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a[] = {1, 2, 3, 4, 5};
  int N   = sizeof(a) / sizeof(a[0]);
  printf("N = %d\n", N);
  return 0;
}
