#include <stdio.h>

int main(int argc, char const *argv[]) {
  for (int i = 0; i < 10; i++)
    printf("%d ", i);
  printf("\n");

  for (int j = 0; j < 10; ++j)
    printf("%d ", j);
  printf("\n");
  return 0;
}

/*
前缀后缀问题 
++a 等价于 a =a+1;  return a;
a++ 等价于 int temp;  temp = a;  a= a+1;  return temp;
temp是个临时变量
*/