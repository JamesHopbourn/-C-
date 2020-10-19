#include <stdio.h>

int main(int argc, char const *argv[]) {
  int m, i, k;
  printf("请输入一个正整数：");
  scanf("%d", &m);
  k = m / 2;
  for (i = 2; i <= k; i++)
    if (m % i == 0) break;
  if (i > k)
    printf("%d 是素数\n", m);
  else
    printf("%d 非素数\n", m);
  return 0;
}