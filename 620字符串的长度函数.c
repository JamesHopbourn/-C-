#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char *s0 = "ABC 123\n";
  char  s1[10] = {'A', 'B', 'C', '\0', '1', '2', '3', '\n'};
  printf("ABC 123\\n is %lu\n", strlen(s0));
  printf("s[10] is %lu\n", strlen(s1));
  printf("abc0 is %lu\n", strlen("abc0"));
  return 0;
}