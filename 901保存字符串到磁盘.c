#include <stdio.h>
#include <stdlib.h>

/*
如果没有 #include <stdlib.h> 报错：
error: implicitly declaring library function 'exit' with type 'void (int)
      __attribute__((noreturn))' [-Werror,-Wimplicit-function-declaration]
*/

int main() {
  FILE *fp;
  char  strings, filename[20];
  printf("请输入文件名：");
  gets(filename);

  fp = fopen(filename, "w");
  if (fp == NULL) {
    printf("无法打开文件\n");
    exit(1);
  }

  printf("请输入文件内容，以@符号结束：");
  for (; (strings = getchar()) != '@';) fputc(strings, fp);

  fclose(fp);
  return 0;
}