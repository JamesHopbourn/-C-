#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i, x1 = 1, x2 = 1;
  for (i = 0; i <= 10; i++) {
    printf("%10d  %10d  ", x1, x2);
    if (i % 2 == 0) printf("\n");
    x1 = x1 + x2;
    x2 = x2 + x1;
  }
  return 0;
}