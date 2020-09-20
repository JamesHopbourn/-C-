#include <stdio.h>

int main(int argc, char const *argv[]) {
  int x;
  printf("请输入数字1-100:");
  scanf("%d", &x);
  switch (x) {
  case 1 ... 25:
    printf("The number you entered is >= 1 and <= 25\n");
    break;

  case 26 ... 50:
    printf("The number you entered is >= 26 and <= 50\n");
    break;

  case 51 ... 75:
    printf("The number you entered is >= 51 and <= 75\n");
    break;

  case 76 ... 100:
    printf("The number you entered is >= 75 and <= 100\n");
    break;
  }
  return 0;
}