#include <stdio.h>

int main(int argc, char const *argv[]) {
  int k = 1, x1, x2 = 1;
  while (k <= 9) {
    x1 = (x2 + 1) * 2;
    x2 = x1;
    k++;
  }
  printf("总数：%d\n", x1);
  return 0;
}