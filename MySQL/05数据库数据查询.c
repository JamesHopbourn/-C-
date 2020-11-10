#include <mysql.h>
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

  if (mysql_query(connect, "SELECT * FROM Cars")) {
    finish_with_error(connect);
  }

  MYSQL_RES *result = mysql_store_result(connect);

  if (result == NULL) {
    finish_with_error(connect);
  }

  int num_fields = mysql_num_fields(result);

  MYSQL_ROW row;

  while ((row = mysql_fetch_row(result))) {
    for (int i = 0; i < num_fields; i++) {
      printf("%s ", row[i] ? row[i] : "NULL");
    }
    printf("\n");
  }

  mysql_free_result(result);

  return 0;
}