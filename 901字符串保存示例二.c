#include <stdio.h>
#include <stdlib.h>

int main() {
  int num;
  FILE *fptr;

  // use appropriate location if you are using MacOS or Linux
  fptr = fopen("/Users/james/Desktop/password", "w");

  if (fptr == NULL) {
    printf("无法打开文件!");
    exit(1);
  }

  printf("输入数字: ");
  scanf("%d", &num);

  fprintf(fptr, "%d", num);
  fclose(fptr);

  return 0;
}