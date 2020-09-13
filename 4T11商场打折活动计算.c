#include <stdio.h>

int main(int argc, char const *argv[]) {
  float price;
  printf("请输入消费金额：");
  scanf("%f", &price);
  if (price >= 3000) {
    price = price * 0.7;
  } else if (price >= 2000 && price < 3000) {
    price = price * 0.8;
  } else if (price >= 1000 && price < 2000) {
    price = price * 0.9;
  } else if (price < 10000) {
    price = price;
  }
  printf("打折后的消费金额为：%.2f\n", price);
  return 0;
}