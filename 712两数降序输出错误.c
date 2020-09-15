#include <stdio.h>

void swap(int *pa, int *pb);

int main(int argc, char const *argv[]) {
  int a, b;
  int *pa, *pb;
  printf("请输入两个整数，以空格间隔：");
  scanf("%d %d", &a, &b);
  pa = &a;
  pb = &b;
  if (a < b)
    // 交换内存地址
    swap(pa, pb);
  printf("最大值：%d   最小值：%d\n", a, b);
  return 0;
}

void swap(int *pa, int *pb) {
  int temp;
  temp = pa;
  pa = pb;
  pb = temp;
}