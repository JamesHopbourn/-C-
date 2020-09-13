#include <stdio.h>

int *fun(int *x, int *y, int *z);

int main(int argc, char const *argv[]) {
  int a, b, c, *p;
  printf("请输入三个数字，以空格作为间隔：");
  scanf("%d %d %d", &a, &b, &c);
  p = fun(&a, &b, &c);
  printf("a  = %d\nb  = %d\nc  = %d\n*p = %d\np  = %p\n", a, b, c, *p, p);

  return 0;
}

int *fun(int *x, int *y, int *z) {
  if (*x >= *y && *x >= *z)
    return (x);
  if (*y >= *x && *y >= *z)
    return (y);
  return (z);
}