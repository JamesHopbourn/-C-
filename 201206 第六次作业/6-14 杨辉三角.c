#include <stdio.h>
int main(){
	int a[10][10];
	int n;
	scanf("%d",&n);

	for (int i = 0; i < n; ++i)
	{
		a[i][0]=a[i][i]=1;
	}

	for (int i = 2; i < n; ++i)
	{
		for (int j = 1; j < i; ++j)
		{
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j <=i; ++j)
		{
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
