#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i, sum = 0;
  for (int i = 0; i <= 100; ++i) {
    sum = sum + i;
  }
  printf("1+2+3+···+100=%d\n", sum);
  return 0;
}