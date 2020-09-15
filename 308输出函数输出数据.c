#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i = 100;
  double s = 35.6;
  // 在 IDE 里面 double 编译会是随机数，需要从命令行 gcc 编译
  printf("Integer Number = %d\nDouble Number = %f\n", i, s);
  return 0;
}