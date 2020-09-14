#include <stdio.h>

int max(float x, float y);

int main(int argc, char const *argv[]) {
  float a, b;
  printf("请输入两个浮点数，以空格作为间隔：");
  scanf("%f %f", &a, &b);
  printf("最大值为：%d\n", max(a, b));
  return 0;
}

int max(float x, float y) { return (x > y ? x : y); }