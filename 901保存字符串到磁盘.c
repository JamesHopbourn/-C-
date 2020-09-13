#include <stdio.h>

int main(int argc, char const *argv[]) {
  FILE *fp;
  char strings, filename[20];
  gets(filename);
  if ((fp = fopen(filename, "w")) == NULL) {
    printf("无法打开文件\n");
    // exit(0);
  }
  for (; (strings = getchar()) != '@';)
    fputc(strings, fp);
  fclose(fp);
  return 0;
}