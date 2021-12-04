#include <stdio.h>

int gcd(int x, int y){
  return y ? gcd(y, x%y) : x;
}

int main(int argc, char const *argv[])
{
  int num, result;
  scanf("输入数字：%d", &num);
  result = gcd(num,num);
  printf("%d", result);
  return 0;
}