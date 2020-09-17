#include <stdio.h>

int sum(int m, int n);

int main() {
  int a, b, total;
  printf("Input two numbers: ");
  scanf("%d %d", &a, &b);
  total = sum(a, b);
  printf("a=%d, b=%d\n", a, b);
  printf("total=%d\n", total);
  return 0;
}

//计算从m加到n的值
int sum(int m, int n) {
  int i;
  for (i = m + 1; i <= n; ++i) {
    m += i;
  }
  return m;
}

// 在这段代码中，函数定义处的 m、n 是形参，函数调用处的 a、b 是实参。通过
// scanf() 可以读取用户输入的数据，并赋值给 a、b，在调用 sum()
// 函数时，这份数据会传递给形参 m、n。 从运行情况看，输入 a 值为 1，即实参 a
// 的值为 1，把这个值传递给函数 sum() 后，形参 m 的初始值也为
// 1，在函数执行过程中，形参 m 的值变为 5050。函数运行结束后，输出实参 a
// 的值仍为 1，可见实参的值不会随形参的变化而变化。
// http://c.biancheng.net/view/1853.html