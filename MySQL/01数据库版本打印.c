#include <mysql.h>
#include <stdio.h>

int main(int argc, const char **argv) {
  printf("MySQL 客户端版本: %s\n", mysql_get_client_info());
  return 0;
}
