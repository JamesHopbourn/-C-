#include <stdio.h>

int main(int argc, char const *argv[]) {
  int score;
  printf("请输入一个 0~100 之间的分数：");
  scanf("%d", &score);
  switch (score / 10) {
    case 10:
    case 9:
      printf("A\n");
      break;

    case 8:
      printf("B\n");
      break;

    case 7:
      printf("C\n");
      break;

    case 6:
      printf("D\n");
      break;

    default:
      printf("E\n");
      break;
  }
  return 0;
}