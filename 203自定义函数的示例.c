#include <stdio.h>

int add(int x, int y);

int main(int argc, char const *argv[]) {
  int a, b, c;
  printf("请输入两个整数，以空格间隔：");
  scanf("%d %d", &a, &b);
  c = add(a, b);
  printf("%d + %d = %d\n", a, b, c);
  return 0;
}

int add(int x, int y) {
  return (x + y);
}