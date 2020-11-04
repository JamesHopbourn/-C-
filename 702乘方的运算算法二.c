#include <stdio.h>

double mypow(double x, double y);

int main(int argc, char const *argv[]) {
  double x, z;
  int y;
  printf("请输入数字和次方，以空格间隔：");
  scanf("%lf %d", &x, &y);
  z = mypow(x, y);
  printf("底数：%.2f  指数：%d  结果：%.2f\n", x, y, z);
  return 0;
}

double mypow(double x, double y) {
  int i;
  double z = 1.0;
  for (i = 1; i <= y; i++) z = z * x;
  return z;
}