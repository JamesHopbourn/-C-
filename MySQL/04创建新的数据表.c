#include <mysql/mysql.h>
#include <stdio.h>
#include <stdlib.h>

void finish_with_error(MYSQL *con) {
  fprintf(stderr, "%s\n", mysql_error(con));
  mysql_close(con);
  exit(1);
}

int main(int argc, char *argv[]) {
  char host[20];
  char username[20];
  char password[20];
  char database[20];

  sprintf(host, "127.0.0.1");
  sprintf(username, "root");
  sprintf(password, "123456");
  sprintf(database, "testdb");

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

  if (mysql_query(connect, "DROP TABLE IF EXISTS Cars")) {
    finish_with_error(connect);
  }

  if (mysql_query(connect, "CREATE TABLE Cars(Id INT, Name TEXT, Price INT)")) {
    finish_with_error(connect);
  }

  if (mysql_query(connect, "INSERT INTO Cars VALUES(1,'Audi',52642)")) {
    finish_with_error(connect);
  }

  if (mysql_query(connect, "INSERT INTO Cars VALUES(2,'Mercedes',57127)")) {
    finish_with_error(connect);
  }

  if (mysql_query(connect, "INSERT INTO Cars VALUES(3,'Skoda',9000)")) {
    finish_with_error(connect);
  }

  if (mysql_query(connect, "INSERT INTO Cars VALUES(4,'Volvo',29000)")) {
    finish_with_error(connect);
  }

  if (mysql_query(connect, "INSERT INTO Cars VALUES(5,'Bentley',350000)")) {
    finish_with_error(connect);
  }

  if (mysql_query(connect, "INSERT INTO Cars VALUES(6,'Citroen',21000)")) {
    finish_with_error(connect);
  }

  if (mysql_query(connect, "INSERT INTO Cars VALUES(7,'Hummer',41400)")) {
    finish_with_error(connect);
  }

  if (mysql_query(connect, "INSERT INTO Cars VALUES(8,'Volkswagen',21600)")) {
    finish_with_error(connect);
  }

  return 0;
}