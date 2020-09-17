#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i = 1, j = 0;
  printf("i：%d   j：%d\n", i, i++);

  int m = 1, n = 0;
  printf("m：%d   n：%d\n", m, ++m);
  return 0;
}

/*
Execute result
i：1   j：1
m：1   n：2
*/