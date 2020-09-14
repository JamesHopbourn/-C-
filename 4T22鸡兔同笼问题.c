#include <stdio.h>

int main(int argc, char const *argv[]) {
  int heads = 88;
  int foots = 224;
  int rabbit, chicken;
  rabbit = (foots / 2) - heads;
  chicken = heads - rabbit;
  printf("鸡的数量：%d   兔子的数量：%d\n", chicken, rabbit);
  return 0;
}