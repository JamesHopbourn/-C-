#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int sum = 0;
  for (int i = 1; i <= 30; i++) {
    sum = sum + pow(i, 2);
    printf("%d\n", sum);
  }
  return 0;
}