#include <stdio.h>
#include <string.h>

struct Student {
  int number;
  char name[20];
  int age;
  char sex;
};

int main(int argc, char const *argv[]) {
  // 创建结构指针
  struct Student student, *p;
  p = &student;
  strcpy(student.name, "James Bond");
  student.number = 1007;
  student.age = 18;
  student.sex = 'M';
  printf("名字：%s  学号：%d  年龄：%d  性别：%c\n", student.name,
         student.number, student.age, student.sex);
  printf("名字：%s  学号：%d  年龄：%d  性别：%c\n", (*p).name, (*p).number,
         (*p).age, (*p).sex);
  printf("名字：%s  学号：%d  年龄：%d  性别：%c\n", p->name, p->number, p->age,
         p->sex);
  return 0;
}
