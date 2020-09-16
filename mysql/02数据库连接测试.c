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

  // 步骤1： 初始化连接句柄
  connect = mysql_init(NULL);

  // 如果返回NULl说明初始化失败
  if (connect == NULL) {
    printf("数据库连接初始化失败\n");
    exit(0);
  }

  // 步骤2：实际进行连接
  // 参数分别为，connect连接句柄，host是MySQL所在主机或地址，user用户名，password密码，database_name数据库名，后面的都是默认
  connect = mysql_real_connect(connect, host, username, password, database, 0,
                               NULL, 0);
  // 连接成功
  if (connect) {
    printf("数据库连接成功\n");
  } else {
    printf("数据库连接失败\n");
  }

  // 步骤3： 退出前关闭连接
  mysql_close(connect);
  return 0;
}