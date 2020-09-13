#include <stdio.h>

#include "742外部函数删除字符.c"
#include "742外部函数打印字符.c"
#include "742外部函数输入字符.c"

extern void enter_string(char str[]);
extern void delete_string(char str[], char ch);
extern void print_string(char str[]);

int main(int argc, char const *argv[]) {
  char c;
  static char str[80];
  enter_string(str);
  scanf("%c", &c);
  delete_string(str, c);
  print_string(str);
  return 0;
}