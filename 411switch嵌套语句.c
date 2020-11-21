#include <stdio.h>

int main(int argc, char const *argv[]) {
  int x, y, a = 0, b = 0;
  printf("请输入两个整数，以空格分隔：");
  scanf("%d %d", &x, &y);
  switch (x) {
  case 1:
    switch (y) {
    case 0:
      a++;
    case 1:
      b++;
    default:
      a++;
      b++;
    }
    break;
  case 2:
    a += 2;
    b += 2;
    break;
  default:
    a += 3;
    b += 3;
  }
  printf("a=%d b=%d\n", a, b);
  return 0;
}