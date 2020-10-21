#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  int    i;
  char * ps[6] = {"FORTRAN", "PASCAL", "BASIC", "COBOL", "C", "C++"}, s[20];
  char **pp = ps;
  printf("请输入要查找的字符：");
  gets(s);
  for (i = 0; i < 6; i++) {
    if (strcmp(*pp, s) == 0) {
      printf("元素位置：%d\n", i + 1);
      break;
    }
    pp++;
  }
  if (i == 6)
    printf("未找到\n");
  return 0;
}