#include <stdio.h>

int main(int argc, char const *argv[]) {
  int N;
  scanf("%d", &N);
  int a[N], i, j;

  for (i = 0; i < N; i++)
      scanf("%d", &a[i]);

  for (i = N-1; i >= 0; i--){
    printf("%d", a[i]);
    if (i != 0)
      printf(" ");
  }
  
  return 0;
}
