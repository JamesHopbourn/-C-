#include <stdio.h>

void StringCopy(char s[], char *t);

int main(int argc, char const *argv[]) {
  char str1[] = "I love Beijing!";
  char *str2 = "I love China!";
  StringCopy(str1, str2);
  printf("str1 = %s\nstr2 = %s\n", str1, str2);
  return 0;
}

void StringCopy(char s[], char *t) {
  int i = 0;
  while (*t != '\0') {
    s[i] = *t;
    i++;
    t++;
  }
  s[i] = '\0';
}