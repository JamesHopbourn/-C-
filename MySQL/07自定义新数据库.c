#include <mysql.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  char name[20];
  char command[64] = "CREATE DATABASE ";
  char commandend[4] = ";";
  printf("请输入新建数据库名：");
  scanf("%s", name);
  strcat(command, name);
  strcat(command, commandend);

  char host[20];
  char username[20];
  char password[20];
  char database[20];

  sprintf(host, "127.0.0.1");
  sprintf(username, "root");
  sprintf(password, "123456");
  sprintf(database, "phpdb");

  MYSQL *connect;
  connect = mysql_init(NULL);

  if (connect == NULL) {
    printf("数据库连接初始化失败\n");
    exit(0);
  }

  connect = mysql_real_connect(connect, host, username, password, database, 0,
                               NULL, 0);
  if (connect) {
    printf("数据库连接成功\n");
  } else {
    printf("数据库连接失败\n");
  }

  if (mysql_query(connect, command)) {
    fprintf(stderr, "%s\n", mysql_error(connect));
    mysql_close(connect);
    exit(1);
  }

  return 0;
}