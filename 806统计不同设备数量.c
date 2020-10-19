#include <stdio.h>
#define N 10

struct Device {
  char type;
  int  count;
};

int main(int argc, char const *argv[]) {
  struct Device array[] = {'A', 0, 'B', 0, 'C', 0};
  int           i, j;
  char          device_type;
  printf("输入设备类型，按回车继续输入\n");
  for (i = 0; i <= N; i++) {
    scanf("%c", &device_type);
    for (j = 0; j < 3; j++)
      if (device_type == array[j].type) array[j].count++;
  }
  for (i = 0; i < 3; i++)
    printf("类型：%c   数量：%d\n", array[i].type, array[i].count);

  return 0;
}