#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  int  start, length;
  char str[100];
  printf("请输入字符：");
  gets(str);
  length = (int)strlen(str);
  printf("%s\n", str);
  printf("%d\n", length);
}