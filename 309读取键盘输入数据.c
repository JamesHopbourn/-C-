#include <stdio.h>

// scanf 函数接收地址应该是变量地址，而不是变量名

int main(int argc, char const *argv[]) {
  int i, j;
  float x, y, z;
  printf("输入两个整数，以空格间隔：");
  scanf("%d %d", &i, &j);

  printf("输入三个浮点数，以空格间隔：");
  scanf("%f %f %f", &x, &y, &z);

  printf("整数A = %d\n整数B = %d\n浮点数A = %f\n浮点数B = %f\n浮点数C = %f\n",
         i, j, x, y, z);
  return 0;
}