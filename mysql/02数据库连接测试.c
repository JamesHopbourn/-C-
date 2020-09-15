#include <mysql/mysql.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  MYSQL *coonnect;

  // 步骤1： 初始化连接句柄
  coonnect = mysql_init(NULL);

  // 如果返回NULl说明初始化失败
  if (coonnect == NULL) {
    printf("mysql_init failed!\n");
    return EXIT_FAILURE;
  }

  // 步骤2：实际进行连接
  // 参数分别为，coonnect连接句柄，host是MySQL所在主机或地址，user用户名，password密码，database_name数据库名，后面的都是默认
  coonnect = mysql_real_connect(coonnect, "127.0.0.1", "root", "123456",
                                "phpdb", 0, NULL, 0);

  if (coonnect) { // 连接成功
    printf("connect success!\n");
  } else {
    printf("connect failed!\n");
  }

  // 步骤3： 退出前关闭连接
  mysql_close(coonnect);

  return 0;
}