#include <stdio.h>

int add(int x, int y);

int main(int argc, char const *argv[]) {
  int a, b, c;
  scanf("%d %d", &a, &b);
  c = add(a, b);
  printf("c = %d\n", c);
  return 0;
}

int add(int x, int y) {
  int z;
  z = x + y;
  return (z);
}