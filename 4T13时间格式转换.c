#include <stdio.h>

int main(int argc, char const *argv[]) {
  int hour, minute;
  printf("请输入时间，以半角冒号间隔：");
  scanf("%d:%d", &hour, &minute);
  if (hour > 24 || minute > 60) {
    printf("时间格式输入有误，请重新输入\n");
    return 0;
  } else if (hour < 12) {
    printf("时间 %d:%.2d AM\n", hour, minute);
  } else if (hour == 12)
  // 12点需要单独处理，因为如果放在上面的输出中会变成 12:10
  // AM，放在下面的输出中会变成 00:10 PM
  {
    printf("时间 %d:%.2d PM\n", hour, minute);
  } else if (hour > 12) {
    hour = hour - 12;
    printf("时间 %d:%.2d PM\n", hour, minute);
  }
  return 0;
}