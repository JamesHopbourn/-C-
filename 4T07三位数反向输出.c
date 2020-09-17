#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i, count, number;
  printf("请输入一个三位的整数：");
  scanf("%d", &i);

  printf("反向输出：");
  while (i != 0) {
    number = i % 10;
    i /= 10;
    ++count;
    printf("%d", number);
  }
  
  printf("\n数字位数：%d\n", count);
  return 0;
}