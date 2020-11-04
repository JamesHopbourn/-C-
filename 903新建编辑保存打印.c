#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  FILE *fp;
  char filename[10], string[81];
  printf("请输入文件名：");
  gets(filename);

  fp = fopen(filename, "w");
  if (fp == NULL) {
    printf("无法打开文件\n");
    exit(1);
  }

  printf("请输入字符串：");
  gets(string);
  // 使用 fputs 存储到指定文件内
  fputs(string, fp);
  fclose(fp);

  fp = fopen(filename, "r");
  if (fp == NULL) {
    printf("无法打开文件\n");
    exit(0);
  }

  fgets(string, strlen(string + 1), fp);
  printf("文件内容：");
  /*
  注意区别 fputs 和 puts
  fputs 是存储到文件内
  puts  是文件内输出
  */
  puts(string);
  fclose(fp);
  return 0;
}