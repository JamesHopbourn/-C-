#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a[5] = {5, 20, 8, 6, 13};
  int *p1, *p2, *p3;

  p1 = &a[1], p2 = &a[3];
  p3 = p1 > p2 ? p1 : p2;
  printf("P3：%d\n", *p3);

  p1 = p1 + 3, p2 = p2 - 3;
  p3 = p1 > p2 ? p1 : p2;
  printf("P3：%d\n", *p3);
  return 0;
}