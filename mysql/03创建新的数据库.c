#include <mysql/mysql.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
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
    printf("mysql_init failed!\n");
    exit(0);
  }

  connect = mysql_real_connect(connect, host, username, password, database, 0,
                               NULL, 0);
  if (connect) {
    printf("connect success!\n");
  } else {
    printf("connect failed!\n");
  }

  if (mysql_query(connect, "CREATE DATABASE testdb2")) {
    fprintf(stderr, "%s\n", mysql_error(connect));
    mysql_close(connect);
    exit(1);
  }

  mysql_close(connect);

  return 0;
}