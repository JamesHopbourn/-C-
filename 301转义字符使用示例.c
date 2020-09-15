#include <stdio.h>

int main(int argc, char const *argv[]) {
  // \012是 ACSII码的走纸换页
  // \42 是 hex 编码的字母 B
  printf("ab\tcd\n");
  printf("12345678\012student\x42\n");
  return 0;
}