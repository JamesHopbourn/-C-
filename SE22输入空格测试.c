#include <stdio.h>

int main(int argc, char const *argv[]) {
  char strings[30];
  printf("输入包含空格的字符串: ");
  scanf("%[^\n]", strings);
  printf("%s\n", strings);
  return 0;
}