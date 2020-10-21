#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  float a[100], sum = 0;
  int   i;
  for (i = 0; i < 2; i++) {
    scanf("%f", &a[i]);
    if (a[i] > 0)
      sum = sum + sqrt(a[i]);
  }
  printf("求和：%f\n", sum);
  return 0;
}