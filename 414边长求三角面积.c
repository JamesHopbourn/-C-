#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  float a, b, c, s, area;
  printf("请输入三边边长，以空格分隔：");
  scanf("%f %f %f", &a, &b, &c);
  if (a + b > c && a + c > b && b + c > a) {
    s    = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("三角形面积是：%7.2f\n", area);
  } else
    printf("输入边长值无法构成三角形\n");
  return 0;
}