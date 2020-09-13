#include <stdio.h>

int main(int argc, char const *argv[]) {
  int Animals = 88;
  int SumFoots = 0;
  int RabbitFoots = 4;
  int ChickenFoots = 2;
  do {
    SumFoots = RabbitFoots * Animals;
    Animals = Animals - 1;
    printf("%d\n", Animals);
  } while (SumFoots == 244);
  return 0;
}