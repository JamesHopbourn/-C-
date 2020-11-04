#include <stdio.h>

int StringLen(char s[]);

int main(int argc, char const *argv[]) {
  char str[80];
  int StringLength;
  printf("请输入一个字符串：");
  gets(str);
  StringLength = StringLen(str);
  printf("字符串的长度为：%d\n", StringLength);
  return 0;
}

int StringLen(char s[]) {
  int i = 0, len = 0;
  while (s[i] != '\0') {
    len++;
    i++;
  }
  return len;
}