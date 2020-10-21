#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i;
  for (i = 1;; ++i)
    if (!((512 - i * 15) % 13))
      break;
  printf("%d+%d=512\n", i * 15, 512 - i * 15);
  return 0;
}