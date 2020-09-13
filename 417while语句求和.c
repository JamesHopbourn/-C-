#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i = 1, sum = 0;
  while (i <= 100) {
    sum = sum + i;
    i++;
  }
  printf("1+2+3+···+100=%d\n", sum);
  return 0;
}