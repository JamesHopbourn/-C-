#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  int  number = 10;
  char str[12];
  printf("请输入数字：");
  scanf("%d", &number);
  sprintf(str, "%d", number);
  printf("%lu\n", strlen(str));
}