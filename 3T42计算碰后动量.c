#include <stdio.h>
#define g 10;

int main(int argc, char const *argv[]) {
  int Torque, m1, m2;
  printf("请输入两物体质量，以空格作为间隔：");
  scanf("%d %d", &m1, &m2);
  Torque = (2 * m1 * m2) / (m1 + m2) * g;
  printf("碰后动量：%d\n", Torque);
  return 0;
}