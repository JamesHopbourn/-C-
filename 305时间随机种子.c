#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]) {
  srand((unsigned)time(NULL));
  printf("%6d\n", rand());
  printf("%6d\n", rand());
  printf("%6d\n", rand());
  return 0;
}