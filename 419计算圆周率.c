#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i = 1, n;
  double π = 0;
  printf("请输入迭代次数：");
  scanf("%d", &n);
  while (i <= n) {
    π += 1.0 / (i * i);
    i++;
  }
  π = sqrt(π * 6);
  printf("π = %lf\n", π);
  return 0;
}