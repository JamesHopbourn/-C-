#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a[5] = {4, 6, 9, 0, 12};
  int b[5] = {1, 5};
  int c[5];

  printf("\n数组 A：");
  for (int i = 0; i < 5; i++) printf("%6d", a[i]);

  printf("\n数组 B：");
  for (int i = 0; i < 5; i++) printf("%6d", b[i]);

  printf("\n数组 C：");
  for (int i = 0; i < 5; i++) printf("%6d", a[i]);

  printf("\n");
  return 0;
}