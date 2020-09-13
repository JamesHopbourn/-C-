#include <stdio.h>

int main(int argc, char const *argv[]) {
  unsigned a, b, c, d;
  scanf("%x", &a);
  b = a >> 4;
  c = ~(~0u << 4);
  d = b & c;
  printf("%x\n%x\n", a, d);
  return 0;
}

// 编译报错解决方案参考链接
// warning: shifting a negative signed value is undefined
// [-Wshift-negative-value]
// https://stackoverflow.com/questions/40508958/shifting-a-negative-signed-value-is-undefined
