#include <stdio.h>

struct Date {
  int month;
  int day;
  int year;
};

struct Student {
  int         number;
  char        name[9];
  int         age;
  char        sex;
  struct Date brithday1;
};

int main(int argc, char const *argv[]) {
  // 注意名字 lili 不可以用单引号，要用双引号，否则会报错
  struct Student student1 = {1001, "lili", 18, 'M', 12, 15, 1982}, student2;
  student2                = student1;
  printf("student1: %d %s %d %c %d/%d/%d\n", student1.number, student1.name,
         student1.age, student1.sex, student1.brithday1.month,
         student1.brithday1.day, student1.brithday1.year);
  printf("student2: %d %s %d %c %d/%d/%d\n", student2.number, student2.name,
         student2.age, student2.sex, student2.brithday1.month,
         student2.brithday1.day, student2.brithday1.year);
  return 0;
}