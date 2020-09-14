#include <stdio.h>

float sub(float x, float y);

int main(int argc, char const *argv[]) {
  float x, y;
  printf("请输入两个浮点数，以空格作为间隔：");
  scanf("%f %f", &x, &y);
  printf("两值相差：%f\n", sub(x, y));
  return 0;
}

float sub(float x, float y) { return (x - y); }