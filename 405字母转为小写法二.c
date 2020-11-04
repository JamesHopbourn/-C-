#include <ctype.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  char strings;
  printf("输入一个字母：");
  strings = getchar( );
  strings = tolower(strings);
  printf("%c\n", strings);
  return 0;
}
