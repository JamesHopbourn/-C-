#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a, b, x;
  printf("请输入两个整数，以空格间隔：");
  scanf("%d %d", &a, &b);
  if (a > b) {
    x = a;
    a = b;
    b = x;
  }
  printf("升序输出：%d %d\n", a, b);
  return 0;
}