#include <stdio.h>

int main(int argc, char const *argv[]) {
  float a, b;
  char strings;
  printf("请输入计算表达式：");
  scanf("%f%c%f", &a, &strings, &b);
  switch (strings) {
  case '+':
    printf("=%f\n", a + b);
    break;

  case '-':
    printf("=%f\n", a - b);
    break;

  case '*':
    printf("=%f\n", a * b);
    break;

  case '/':
    if (b == 0)
      printf("除数不可以为零！\n");
    else
      printf("=%f\n", a / b);
    break;

  default:
    printf("输入语句错误！\n");
  }
  return 0;
}