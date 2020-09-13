#include <math.h>
#include <stdio.h>
#define π 3.14

int main(int argc, char const *argv[]) {
  float Area, h, r;
  printf("请输入高度和半径，以空格作为间隔：");
  scanf("%f %f", &h, &r);
  Area = π * pow(r, 2) + 2 * π * r * h;
  printf("面积：%.2f\n", Area);
  return 0;
}