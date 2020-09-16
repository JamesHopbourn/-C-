#include <stdio.h>

int main(int argc, char const *argv[]) {
  char *string;
  string = "This is a string";
  printf("原始的字符串：%s\n", string);
  string += 8;

  /*
  此处可以直接用 printf 打印位移后的字符串，但是出于教学演示，使用 while
  printf("移位后字符串：%s\n", string);
  */
  
  printf("位移后字符串：");
  while (*string) {
    putchar(string[0]);
    string++;
  }
  printf("\n");
  return 0;
}