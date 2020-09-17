#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i = 1, j = 0;
  printf("i：%d   j：%d\n", i, i++);

  int m = 1, n = 0;
  printf("m：%d   n：%d\n", m, ++m);
  return 0;
}

/*
Execute result
i：1   j：1
m：1   n：2
*/

/*
这里要区分一下：前置++是先自加1再使用，后置++先使用再自加1
j=(i=2,i++,i++)可以拆分为i=2; i++; j=i++;
执行第二步后，i值为3，到第三步时，i=3先赋值给j，然后i再加1。
最终结果为i值为4，j值为3。
如果改为j=(i=2,++i,++i)，j值与i值均为4
*/