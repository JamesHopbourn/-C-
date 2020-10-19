#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a = 100, *pa, **ppa;
  pa    = &a;
  ppa   = &pa;
  printf("%d %u %u\n", a, pa, ppa);
  printf("%d %d %d\n", a, *pa, **ppa);
  printf("%u %u %u\n", &a, pa, *ppa);
  return 0;
}

/*
Execute result
100 3826365292 3826365280
100 100 100
3826365292 3826365292 3826365292
*/