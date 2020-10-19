#include <stdio.h>

int main(int argc, char const *argv[]) {
  int heads = 88;
  int foots = 224;
  int rabbit, chicken;
  /* 鸡兔同笼新算法：已知共有鸡和兔15只，共有40只脚，问鸡和兔各有几只。
  算法：假设鸡和兔训练有素，吹一声哨，它们抬起一只脚，(40-15=25)
  。再吹一声哨，它们又抬起一只脚，(25-15=10)这时鸡都一屁股坐地上了，兔子还两只脚立着。所以，兔子有10/2=5只，鸡有15-5=10只。
  */
  rabbit  = (foots / 2) - heads;
  chicken = heads - rabbit;
  printf("鸡的数量：%d   兔子的数量：%d\n", chicken, rabbit);
  return 0;
}