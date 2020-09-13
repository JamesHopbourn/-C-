#include <stdio.h>

int main(int argc, char const *argv[]) {
  char strings;
  printf("请输入一个字符：");
  strings = getchar();
  if (strings >= '0' && strings <= '9')
    printf("这是一个数字\n");
  else if (strings >= 'A' && strings <= 'Z')
    printf("这是一个大写字母\n");
  else if (strings >= 'a' && strings <= 'z')
    printf("这是一个小写字母\n");
  else
    printf("这是一个其他字符\n");
  return 0;
}