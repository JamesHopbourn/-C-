#include <stdio.h>

int main(int argc, char const *argv[]) {
  char str[] = "This is a string";
  char *string;
  string = str;
  printf("数组输出：%s\n", str);
  printf("指针输出：%s\n", string);

  string += 8;
  printf("位移后指针输出的字符串：");
  while (*string) {
    putchar(string[0]);
    string++;
  }
  printf("\n");
  return 0;
}