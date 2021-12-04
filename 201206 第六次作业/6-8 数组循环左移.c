
#include <stdio.h>
int main()
{
    int m, n, i, j;
    int a[101];
    scanf("%d %d", &n, &m);
    for(i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    m = m % n;
    for(i = 0; i < m; ++i)
    {
        int temp;
        temp = a[0];
        for(j = 0; j < n - 1; j++)
            a[j] = a[j+1];
        a[n - 1] = temp;
    }
    for(i = 0; i < n; ++i)
    {
        if(i)
            printf(" ");
        printf("%d", a[i]);
    }
}


