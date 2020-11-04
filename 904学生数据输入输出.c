#include <stdio.h>
#include <stdlib.h>

struct stu {
  char name[10];
  int num;
  int age;
  char addr[15];
} boya[2], boyb[2], *pp, *qq;

int main(int argc, char const *argv[]) {
  FILE *fp;
  int i;
  pp = boya;
  qq = boyb;

  fp = fopen("./stu.txt", "wb+");
  if (fp == NULL) {
    printf("无法打开文件！\n");
    // getch() 函数无法使用
    exit(1);
  }

  printf("输入学生数据，名字 学号 年龄 地址：\n");
  for (i = 0; i < 2; i++, pp++)
    scanf("%s %d %d %s", pp->name, &pp->num, &pp->age, pp->addr);
  pp = boya;
  fwrite(pp, sizeof(struct stu), 2, fp);

  rewind(fp);
  fread(qq, sizeof(struct stu), 2, fp);
  printf("\n数据如下：\n");
  for (i = 0; i < 2; i++, qq++)
    printf("%s\t%5d%7d  %s\n", qq->name, qq->num, qq->age, qq->addr);
  fclose(fp);
  return 0;
}