#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a[3][4] = {{
                     0,
                     1,
                     2,
                     3,
                 },
                 {4, 5, 6, 7},
                 {8, 9, 10, 11}};
  printf("%u,%u,%u,%u,%u\n", (unsigned int)a, (unsigned int)*a,
         (unsigned int)a[0], (unsigned int)&a[0], (unsigned int)&a[0][0]);
  printf("%u,%u,%u,%u,%u\n", (unsigned int)a + 1, (unsigned int)*(a + 1),
         (unsigned int)a[1], (unsigned int)&a[1], (unsigned int)&a[1][0]);
  printf("%u,%u,%u,%u,%u\n", (unsigned int)a + 2, (unsigned int)*(a + 2),
         (unsigned int)a[2], (unsigned int)&a[2], (unsigned int)&a[2][0]);
  printf("%u,%u\n", (unsigned int)a[1] + 1, (unsigned int)*(a + 1) + 1);
  return 0;
}

// 编译报错解决方案
// https://blog.csdn.net/weixin_42934172/article/details/97617207