#include <stdio.h>
#include <string.h>
#include <openssl/sha.h>
/*
TODO
getpass 函数星号密码

gcc -I/usr/local/Cellar/openssl@1.1/1.1.1f/include/ -L/usr/local/Cellar/openssl@1.1/1.1.1f/lib/ -lcrypto
*/

int main( ) {
  FILE *fp;
  // 检测登陆记录文件存在性
  fp = fopen("/Users/James/Desktop/test.txt", "r");
  if (fp == NULL) {
    // 创建登陆记录文件
    fp = fopen("/Users/James/Desktop/test.txt", "w+");
    fputs("YES", fp);
    fclose(fp);
  } else {
    // 检测登陆尝试情况
    int LoginStatus;
    char status[24];
    fp = fopen("/Users/James/Desktop/test.txt", "r");
    fscanf(fp, "%s", status);
    fclose(fp);
    // 系统锁定情况检查
    LoginStatus = strcmp(status, "YES");
    if (LoginStatus != 0) {
      printf("系统已被锁定！\n");
      return 0;
    }
  }

  // 设置登陆密码
  char key[40] = "", pa[2] = "J", pb[2] = "a", pc[2] = "m", pd[2] = "e",
       pe[2] = "s", pf[2] = "0", pg[2] = "7";
  strcat(key, pa), strcat(key, pb), strcat(key, pc), strcat(key, pd),
      strcat(key, pe), strcat(key, pf), strcat(key, pf), strcat(key, pg);

  // 开始登陆
  char password[40], result;
  for (int i = 1; i <= 5; i++) {
    printf("请输入密码：");
    gets(password);
    result = strcmp(password, key);
    if (result == 0) {
      printf("欢迎登陆\n");
      break;
    } else {
      if (i == 5) {
        // 锁定系统
        fp = fopen("/Users/James/Desktop/test.txt", "w+");
        fputs("NO", fp);
        fclose(fp);
        printf("系统已被锁定！\n");
        break;
      }
      printf("密码错误，剩余尝试次数 %d\n\n", 5 - i);
    }
  }
}
