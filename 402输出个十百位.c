#include <stdio.h>

int main(int argc, char const *argv[]) {
  int m, m0, m1, m2;
  printf("请输入一个 100~999 之间的数值：");
  scanf("%d", &m);
  m0 = m % 10;
  m1 = (m / 10) % 10;
  m2 = m / 100;
  printf("个十百位分别为：%d %d %d\n", m0, m1, m2);
  return 0;
}