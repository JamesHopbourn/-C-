#include <stdio.h>

// 如果不在开头声明存在这个函数，报错如下
// error: implicit declaration of function 'mult' is invalid in C99
// [-Werror,-Wimplicit-function-declaration]

int mult(int n);

int main(int argc, char const *argv[]) {
  int number, result;
  number = 668;
  result = mult(number);
  printf("Number = %d\n", number);
  printf("Result = %d\n", result);
  return 0;
}

int mult(int n) {
  n *= 10;
  return (n);
}