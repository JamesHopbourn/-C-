#include <stdio.h>

void spc(int n);

int main(int argc, char const *argv[]) {
  spc(10);
  return 0;
}

void spc(int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("%c\n", '#');
  }
}