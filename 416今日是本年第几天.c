#include <stdio.h>

int main(int argc, char const *argv[]) {
  int day, month, year, sum = 0;
  printf("请输入今天日期，年月日之间用 - 分隔：");
  scanf("%d-%d-%d", &year, &month, &day);
  if (month > 1) sum += 31;
  if (month > 2) {
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) sum += 29;
  } else {
    sum += 28;
  }
  if (month > 3) sum += 31;
  if (month > 4) sum += 30;
  if (month > 5) sum += 31;
  if (month > 6) sum += 30;
  if (month > 7) sum += 31;
  if (month > 8) sum += 31;
  if (month > 9) sum += 30;
  if (month > 10) sum += 31;
  if (month > 11) sum += 30;
  sum += day;
  printf("这是今年的第 %d 天\n", sum);
  return 0;
}