#include <stdio.h>

int main(int argc, char const *argv[]) {
  float C, F;
  printf("请输入华氏温度F：");
  scanf("%f", &F);
  // 注意此处必须是 5.0 而不是 5，否则无论输入多少输出都是 0.00
  C = 5.0 / 9 * (F - 32);

  if (C > 40) {
    printf("过热\n");
  } else if (30 < C && C <= 40) {
    printf("暖和\n");
  } else if (20 < C && C <= 30) {
    printf("室温\n");
  } else if (10 < C && C <= 20) {
    printf("凉水\n");
  } else if (0 < C && C <= 10) {
    printf("冰水\n");
  } else if (C <= 0) {
    printf("结冰\n");
  }

  return 0;
}