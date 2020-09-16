#include <stdio.h>

int main(int argc, char const *argv[]) {
  if (argc == 2) {
    printf("传入参数：%s\n", argv[1]);
  } else if (argc == 3) {
    printf("传入参数一：%s\n传入参数二：%s\n", argv[1], argv[2]);
  } else {
    printf("请输入参数\n");
  }
}