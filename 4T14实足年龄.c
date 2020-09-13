#include <stdio.h>
#include <time.h>

int main(int argc, char const *argv[]) {
  int Y1, M1, D1;
  int Y2, M2, D2;
  time_t seconds;
  seconds = time(NULL);
  printf("自 1970-01-01 起的小时数 = %ld\n", seconds / 3600);
  // printf("请输入学生出生日期，格式 YYYY/MM/DD：");
  // scanf("%d/%d/%d",&Y1,&M1,&D1)
  return 0;
}