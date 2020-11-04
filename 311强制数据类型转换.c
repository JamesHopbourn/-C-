#include <stdio.h>

int main(int argc, char const *argv[]) {
  double x;
  int i;
  x = 3.6;
  i = (int)x;
  printf("原始数值 = %f\n强制转换 = %d\n", x, i);
  return 0;
}