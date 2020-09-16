#include <stdio.h>

int main(int argc, char const *argv[]) {
  printf("gets() 函数：获取输入\n");
  char str[10];
  printf("输入字符：");
  gets(str);

  printf("\nputs() 函数：输出字符\n输出结果：");
  puts(str);
  return 0;
}