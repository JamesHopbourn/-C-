#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  int i, *p;
  p = a;
  for (i = 0; i < 10; ++i)
    printf("%d ", a[i]);
  printf("\n");

  for (i = 0; i < 10; ++i)
    printf("%d ", p[i]);
  printf("\n");

  for (i = 0; i < 10; ++i)
    printf("%d ", *(a + i));
  printf("\n");

  for (i = 0; i < 10; ++i)
    printf("%d ", *(p + i));
  printf("\n");
  return 0;
}