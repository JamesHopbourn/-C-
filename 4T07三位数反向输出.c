#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i, count, number;
  printf("请输入一个三位的正整数：");
  scanf("%d", &i);

  while (i != 0) {
    // 下面两行代码为止不可对调
    number = i % 10;
    i /= 10;
    ++count;
    // 后期优化可以考虑先存为一个数组，从 while 外部 print
    printf("%d", number);
  }
  printf("\n位数是：%d\n", count);
  return 0;
}