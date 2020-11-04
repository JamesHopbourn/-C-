#include <stdio.h>

int main( ) {
  char a, b;
  printf("请输入两个字母，以空格间隔：");
  scanf("%c %c", &a, &b);
  printf("字符对应的ASCII 码为：%d\n", a > b ? a : b);
}