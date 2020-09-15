#include <stdio.h>

int main() {
  int i, j;
  j = (i = 2, i++, i++);
  printf("i=%d,j=%d\n", i, j);
  return 0;
}
