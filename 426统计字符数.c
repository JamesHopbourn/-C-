#include <stdio.h>

int main(int argc, char const *argv[]) {
  int  n;
  char strings;
  printf("输入一串字符：");
  for (n = 0; (strings = getchar()) != '\n'; n++)
    ;
  printf("字符数为：%d\n", n);
  return 0;
}