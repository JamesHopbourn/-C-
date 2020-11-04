#include <stdio.h>

struct Student {
  int number;
  char *name;
};

int main(int argc, char const *argv[]) {
  struct Student stu = {1007, "James Bond"};
  printf("%d %s\n", stu.number, stu.name);
  return 0;
}