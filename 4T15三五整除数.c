#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i, j;
  for (int i = 0; i < 300; i++) {
    if (i % 3 == 0 && i % 5 == 0) {
      printf("%d\n", i);
    }
  }
  return 0;
}