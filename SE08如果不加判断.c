#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a = 0, b = 1;
  if (a) {
    printf("a=%d\n", a);
  }

  if (b) {
    printf("b=%d\n", b);
  }
  return 0;
}