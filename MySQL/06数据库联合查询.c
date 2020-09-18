#include <mysql/mysql.h>
#include <stdio.h>
#include <stdlib.h>

void finish_with_error(MYSQL *con) {
  fprintf(stderr, "%s\n", mysql_error(con));
  mysql_close(con);
  exit(1);
}

int main(int argc, char *argv[]) {
  int status = 0;
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

  // 这里会被 clang-fromat 错误格式化
  if (mysql_query(connect, "select * from `Cars` where `Id` = '2';select * "
                           "from `Cars` where `Name` = 'Bentley'")) {
    finish_with_error(connect);
  }

  do {
    MYSQL_RES *result = mysql_store_result(connect);
    if (result == NULL) {
      finish_with_error(connect);
    }

    MYSQL_ROW row = mysql_fetch_row(result);
    printf("%s\n", row[0]);
    mysql_free_result(result);

    status = mysql_next_result(connect);

    if (status > 0) {
      finish_with_error(connect);
    }

  } while (status == 0);

  return 0;
}