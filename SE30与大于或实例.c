#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a = 2, b = 4, c = 6;
  printf("与运算高于或运算实例\n");
  printf("a = 2,b = 4,c = 6\n\n");
  printf("a & b = %d\n", a & b);
  printf("0 | c = %d\n", a & b | c);
  printf("结果：a & b | c = %d\n\n", a & b | c);

  printf("(b | c) = %d\n", (b | c));
  printf("a & 6 = %d\n", a & 6);
  printf("结果：a & (b | c) = %d\n", a & (b | c));
  return 0;
}