#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  printf("abc  cmp to abc  = %+d\n", strcmp("abc", "abc"));
  printf("abc  cmp to abcd = %+d\n", strcmp("abc", "abcd"));
  printf("abcd cmp to abc  = %+d\n", strcmp("abcd", "abc"));
  return 0;
}