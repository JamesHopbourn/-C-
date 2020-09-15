#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i;
  char c;
  scanf("%d", &i);

  fflush(stdin);

  scanf("%c", &c);
  printf("i=%d  c=%d\n", i, c);
  return 0;
}