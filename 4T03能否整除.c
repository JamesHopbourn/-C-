#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i;
  printf("请输入一个整数：");
  scanf("%d", &i);
  if (i % 3 == 0 || i % 7 == 0) {
    printf("YES\n");
  } else {
    printf("NO\n");
  }
  return 0;
}