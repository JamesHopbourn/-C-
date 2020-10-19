#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i, j, k;
  for (i = 8; i >= 1; i--) {
    for (j = 1; j <= 8 - i; j++) printf(" ");
    for (k = 1; k <= 2 * i - 1; k++) printf("*");
    printf("\n");
  }
  return 0;
}