#include <stdio.h>

int main(int argc, char const *argv[]) {
  char strings;
  printf("输入一个字母：");
  strings = getchar();
  if (strings >= 'A' && strings <= 'Z')
    strings = strings + 32;
  printf("%c\n\n", strings);
  return 0;
}

/*
if不要带花括号，否则在输入小写字母的情况下不会有任何输出，因为 printf
 会被包在 if 的花括号里面
*/