#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a[5], i;
  for (i = 0; i < 5; i++)
    a[i] = i + 1;
  for (i = 0; i < 5; i++)
    printf("%3d", a[i]);
  printf("\n");
  return 0;
}