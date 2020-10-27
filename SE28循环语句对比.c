#include <stdio.h>

int main(int argc, char const *argv[]) {
  for (int i = 0; i < 10; i++) {
    printf("%d\n", i);
  }

  int j = 0;
  // 当括号内条件不满足继续执行
  while (j < 10) {
    printf("%d\n", j++);
  }

  int k = 0;
  do {
    printf("%d\n", k++);
  } while (k < 10);
  // 当括号内条件不满足继续执行

  return 0;
}