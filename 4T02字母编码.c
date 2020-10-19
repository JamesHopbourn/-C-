#include <stdio.h>

int main(int argc, char const *argv[]) {
  char strings;
  char CapitalLetter;
  char LowerCaseLetter;
  printf("输入一个字母：");
  strings = getchar();
  if (strings >= 'A' && strings <= 'Z') {
    CapitalLetter = strings;
    strings       = strings + 32;
    printf("大写字母：%c → %d\n", CapitalLetter, CapitalLetter);
    printf("小写字母：%c → %d\n", strings, strings);
  } else {
    LowerCaseLetter = strings;
    strings         = strings - 32;
    printf("大写字母：%c → %d\n", LowerCaseLetter, LowerCaseLetter);
    printf("小写字母：%c → %d\n", strings, strings);
  }
  return 0;
}
