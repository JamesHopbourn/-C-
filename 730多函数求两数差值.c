#include <stdio.h>

int dif(int x, int y, int z); // 做差函数
int max(int x, int y, int z); // 取最大值
int min(int x, int y, int z); // 取最小值

int main(int argc, char const *argv[]) {
  int a, b, c, result;
  printf("请输入三个数字，以空格间隔：");
  scanf("%d %d %d", &a, &b, &c);
  result = dif(a, b, c);
  printf("最大最小值差：%d\n", result);
  return 0;
}

int dif(int x, int y, int z) {
  int m1, m2;
  m1 = max(x, y, z);
  m2 = min(x, y, z);
  return (m1 - m2);
}

int max(int x, int y, int z) {
  int result;
  result = (x > y) ? (x > z) ? x : y : z;
  return (result);
}

int min(int x, int y, int z) {
  int result;
  result = (x < y) ? (x < z) ? x : y : z;
  return (result);
}
