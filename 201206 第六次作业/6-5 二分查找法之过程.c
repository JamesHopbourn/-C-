#include <stdio.h>

int main(int argc, char const *argv[]) {
  int n, x;
  scanf("%d %d", &n, &x);
  int a[n];
  //////////////////////////////////////
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  //////////////////////////////////////
  for (int i = 0; i <= n - 2; i++) {
    if (a[i] >= a[i + 1]) {
      printf("Invalid Value\n");
      return 0;
    }
  }
  //////////////////////////////////////
  int low = 0, high = n - 1, mid;
  do {
    mid = (low + high) / 2;
    printf("[%d,%d][%d]\n", low, high, mid);
    if (x == a[mid]) {
      printf("%d\n", mid);
      break;
    } else if (x > a[mid])
      low = mid + 1;
    else
      high = mid - 1;
  } while (low <= high);
  if (low > high)
    printf("Not Found\n");
  return 0;
}
