#include <stdio.h>

void star( );             //输出特定数量的星号
void star_number(int n);  //输出指定数量的星号

int main(int argc, char const *argv[]) {
  star( );
  star_number(6);
  star_number(12);
  star_number(6);
  star( );
  return 0;
}

void star( ) {
  int i = 1;
  for (i = 0; i < 18; i++) printf("*");
  printf("\n");
}

void star_number(int n) {
  int i = 0;
  for (i = 0; i <= n; i++) printf("*");
  printf("\n");
}