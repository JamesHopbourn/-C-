#include <stdio.h>

int main(int argc, char const *argv[]) {
  char grade;
  printf("请输入一个等级字母：");
  grade = getchar();
  grade = (grade >= 'a' && grade <= 'z') ? grade - 32 : grade;
  switch (grade) {
  case 'A':
    printf("90~100\n");
    break;

  case 'B':
    printf("80~89\n");
    break;

  case 'C':
    printf("70~79\n");
    break;

  case 'D':
    printf("60~69\n");
    break;

  case 'E':
    printf("<60\n");
    break;

  default:
    printf("输入错误，输入值应为 A~E 之间的等级\n");
  }
  return 0;
}