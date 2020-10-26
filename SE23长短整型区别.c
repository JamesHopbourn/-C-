#include <stdio.h>

int main(int argc, char const *argv[]) {
  // short int 取值范围：-32768~32767
  // 下面是正确的示例
  short int short_int = 32767;
  printf("%hd\n", short_int);

  // 下面是 short int 错误示例，会导致溢出
  // 打印结果：-32767，实际上是 32769
  short int short_int_overflow = 32769;
  printf("%hd\n", short_int_overflow);

  // int 取值范围：-2147483647~2147483647
  int int_number = 40000;
  printf("%d\n", int_number);
}

/*
0x7fffffff的意思
7fffffff是8位16进制
每个16进制代表4个bit
8✖4bit=32bit=4Byte
f的二进制为：1111，7的二进制位0111
int类型的长度位4Byte
左边起，第一位为符号位，0代表正数，1代表负数
0x7fffffff代表int的最大值
*/