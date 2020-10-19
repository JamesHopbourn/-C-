#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *fp;
  char  ch, filename[20];
  printf("请输入文件名：");
  gets(filename);

  fp = fopen(filename, "r");
  if (fp == NULL) {
    printf("无法打开文件\n");
    exit(1);
  }

  for (;(ch=fgetc(fp)!=EOF;)
    putchar(ch);

  fclose(fp);
  return 0;
}