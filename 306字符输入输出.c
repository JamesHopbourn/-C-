#include <stdio.h>

int main(int argc, char const *argv[]) {
  char c1 = 'A', c2 = 65, c3 = '\x41';
  putchar(c1);
  putchar(c2);
  putchar(c3);
  putchar('\n');
  putchar(21);
  putchar('3');
  return 0;
}