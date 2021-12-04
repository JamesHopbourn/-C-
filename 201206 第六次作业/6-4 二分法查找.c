#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a[] = {1, 2, 5, 6, 7, 12, 15, 67, 88, 99, 100, 200};
  int n = sizeof(a) / sizeof(a[0]);
  int x, low = 0, high = n - 1, mid, times = 1;
  scanf("%d", &x);
  do {
    mid = (low + high) / 2;
    if (x == a[mid]) {
      printf("found! %d %d\n", mid, times);
      break;
    } else if (x > a[mid])
      low = mid + 1;
    else
      high = mid - 1;
  	times++;
  } while (low <= high);
  if(low > high) printf("not found!\n");
  return 0;
}


