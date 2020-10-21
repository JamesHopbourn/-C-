#include <stdio.h>

int main(int argc, char const *argv[]) {
  char * ps[6] = {"FORTRAN", "PASCAL", "BASIC", "COBOL", "C", "C++"};
  char **pp = ps;
  for (int i = 0; i < 6; i++) {
    puts(*pp++);
  }
  return 0;
}