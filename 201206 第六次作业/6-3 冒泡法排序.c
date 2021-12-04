#include <stdio.h>

int main() {
  // 初始化数组 定义循环次数
  int N, times;
  scanf("%d %d", &N, &times);
  int a[N];
  
  // 输入数组
  for (int i = 0; i < N; i++)
      scanf("%d", &a[i]);

  // 排序次数
  for (int k = 0; k < times; k++) {
      // 遍历数组
	  for (int i = 0; i < N-1; i++) {
	      if(a[i] > a[i+1]){
	      	a[i]   = a[i] + a[i+1];
	      	a[i+1] = a[i] - a[i+1];
	      	a[i]   = a[i] - a[i+1];
	      }
	 }
  }
  
    // 输出数组
    for (int i = 0; i < N; i++){
      printf("%d", a[i]);
      if (i != N-1) printf(" ");
  }

}
