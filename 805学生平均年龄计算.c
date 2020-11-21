#include <stdio.h>

struct Student {
  int number;
  char name[9];
  int age;
} stu[4] = {{1011, "莉莉", 21},
            {1022, "李红", 23},
            {1023, "王伟", 22},
            {1024, "张三", 24}};

int main(int argc, char const *argv[]) {
  float ave, s = 0;
  for (int i = 0; i < 4; i++)
    s += stu[i].age;
  printf("s=%f\n", s);
  ave = s / 4;
  printf("平均年龄：%f\n", ave);
  return 0;
}