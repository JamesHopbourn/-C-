#include <stdio.h>

// %2ld 是正确格式，%d 格式会报错

int main(int argc, char const *argv[]) {
  char ch;
  float f;
  printf("- Size of `5.0`:             %2ld bytes\n", sizeof(5.0));
  printf("- Size of `float`:           %2ld bytes\n", sizeof(f));
  printf("- Size of `int`:             %2ld bytes\n", sizeof(int));
  printf("- Size of `char`:            %2ld bytes\n", sizeof(char));
  printf("- Size of 'c':               %2ld bytes\n", sizeof('c'));
  return 0;
}

/*
Execute result
- Size of `5.0`:              8 bytes
- Size of `float`:            4 bytes
- Size of `int`:              4 bytes
- Size of `char`:             1 bytes
- Size of 'c':                4 bytes
*/