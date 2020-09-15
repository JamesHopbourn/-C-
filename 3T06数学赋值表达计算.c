#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i = 2;
  printf("%d\n", i -= 3);
  printf("%d\n", i += i);
  printf("%d\n", i *= 3 + 4);
  printf("%d\n", i /= i + i);
  printf("%d\n", i += i -= i * i);
  printf("%d\n", i = i % 2 > 0 ? 1 : 0);
  return 0;
}