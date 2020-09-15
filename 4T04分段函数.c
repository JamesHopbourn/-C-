#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int x, a, result;
  printf("请输入 x 和 a(a>0) 的值，以空格分隔：");
  scanf("%d %d", &x, &a);
  if (-a < x < a) {
    result = sqrt(a ^ 2 - x ^ 2);
    printf("%d\n", result);
  } else if (x == a || x == -a) {
    printf("0\n");
  } else {
    printf("%d\n", x - 1);
  }
  return 0;
}