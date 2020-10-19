#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i, num, counter, temp;
  counter = 1;
  printf("请输入一个整数：");
  scanf("%d", &num);
  temp = num;
  while (temp / 10) {
    temp /= 10;
    counter++;
  }
  while (counter) {
    temp = 1;
    for (i = 1; i <= counter - 1; i++) temp *= 10;
    printf("%d ", num / temp);
    num %= temp;
    counter--;
  }
  printf("\n");
  return 0;
}