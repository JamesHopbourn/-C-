#include "stdlib.h"
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i;
  system("clear");
  printf("\t\t\t\t 欢迎使用学生信息管理系统 v1.0 by:James Hopbourn \t\t\t\t\n");
  printf("\t\t\t\t\t\t 1. 添加学生信息 \t\t\t\t\t\t\n");
  printf("\t\t\t\t\t\t 2. 修改学生信息 \t\t\t\t\t\t\n");
  printf("\t\t\t\t\t\t 3. 删除学生信息 \t\t\t\t\t\t\n");
  printf("\t\t\t\t\t\t 4. 查询学生信息 \t\t\t\t\t\t\n");
  printf("\t\t\t\t\t\t 5. 学生成绩导入 \t\t\t\t\t\t\n");
  printf("\t\t\t\t 请输入数字选择功能：");
  scanf("%d", &i);
  system("clear");
  switch (i) {
  case 1:
    printf("1\n");
    break;

  case 2:
    printf("2\n");
    break;

  case 3:
    printf("3\n");
    break;

  case 4:
    printf("4\n");
    break;

  case 5:
    printf("5\n");
    break;

  default:
    printf("error\n");
    break;
  }
  return 0;
}