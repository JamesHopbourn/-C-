// [漫画算法：辗转相除法是什么鬼](https://zhuanlan.zhihu.com/p/31824895)  
#include <stdio.h>

int gcd1(int a, int b) {
  if(a%b ==0)
    return b;
  else
    return gcd1(b, a%b);
}

int gcd2(int a, int b) {
  if(a == b)
    return b;
  if(a < b)
    return gcd2(b - a, a);
  else
    return gcd2(a - b, b);
}

int main(){
  int a, b, result;
  printf("请输入 a b:");
  scanf("%d %d", &a, &b);
  if(a > b)
    result = gcd2(a, b);
  else
    result = gcd2(b, a);
  printf("%d", result);
}

