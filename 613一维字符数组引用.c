#include <stdio.h>

int main(int argc, char const *argv[]) {
  // 为什么\0 是单引号，双引号行不行
  // 因为一个字符需要占用2个字节，无法放入1个字节的 char 中
  char a[] = {"Beijing2008"}, b[] = {'\0'};
  int  i;
  for (i = 0; i < 4; i++) b[i] = a[i + 7];
  for (i = 0; i < 11; i++) printf("%c", a[i]);
  printf("\n");

  for (i = 0; i < 4; i++) printf("%c", b[i]);
  printf("\n");
  printf("%d\n", a[0]);
  return 0;
}