#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a = 10, y = 0;
  do {
    a += 2;
    y += a;
    if (y > 50) {
      break;
    }
  } while (a == 14);
  printf("a=%d,y=%d\n", a, y);

  int i, x;
  for (i = 1, x = 1; i <= 50; i++) {
    if (x >= 10) {
      break;
    }
    if (x % 2 == 1) {
      x += 5;
      continue;
    }
    x -= 3;
  }
  printf("x=%d,i=%d\n", x, i);
}