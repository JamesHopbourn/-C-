#include <ctype.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  char strings;
  printf("请输入一个字符：");
  strings = getchar( );

  if (isdigit(strings)) {
    printf("这是一个数字\n");
  }

  if (ispunct(strings)) {
    printf("这是一个符号\n");
  }

  if (islower(strings)) {
    printf("这是一个小写字母\n");
  }

  if (isupper(strings)) {
    printf("这是一个大写字母\n");
  }
  return 0;
}