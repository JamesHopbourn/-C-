#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  double x, z;
  int    y;
  printf("请输入数字和次方，以空格间隔：");
  scanf("%lf %d", &x, &y);
  z = pow(x, y);
  printf("底数：%.2f  指数：%d  结果：%.2f\n", x, y, z);
  return 0;
}