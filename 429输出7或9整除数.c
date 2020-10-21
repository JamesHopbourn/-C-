#include <stdio.h>

int main(int argc, char const *argv[]) {
  int n = 0;
  for (int i = 0; i < 200; i++) {
    if ((i % 7 != 0) | (i % 9 != 0))
      continue;
    printf("%5d  ", i);
    n++;
    // 输出5个数值之后换行
    if (n % 5 == 0)
      printf("\n");
  }
  return 0;
}