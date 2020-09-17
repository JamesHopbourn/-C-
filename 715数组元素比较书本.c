#include <stdio.h>

int compare(int x, int y);

int main(int argc, char const *argv[]) {
  int a[10], b[10], i, n = 0, m = 0, k = 0;
  
  printf("请输入第一个数组，以空格间隔：");
  for (i = 0; i < 10; i++)
    scanf("%d", &a[i]);
  printf("\n");

  printf("请输入第二个数组，以空格间隔：");
  for (i = 0; i < 10; i++)
    scanf("%d", &b[i]);
  printf("\n");

  for (i = 0; i < 10; i++) {
    if (compare(a[i], b[i]) == 1)
      n++;
    else if (compare(a[i], b[i]) == 0)
      m++;
    else
      k++;
  }

  printf("a[i]>b[i] %d次\
          a[i]=b[i] %d次\
          a[i]<b[i] %d次\n",
         n, m, k);

  printf("\n");

  if (n > k)
    printf("第一个数组大于第二个数组\n");
  else if (n < k)
    printf("第一个数组小于第二个数组\n");
  else
    printf("两个数组相等\n");
  return 0;
}

int compare(int x, int y) {
  int flag;
  if (x > y)
    flag = 1;
  else if (x < y)
    flag = -1;
  else
    flag = 0;
  return (flag);
}