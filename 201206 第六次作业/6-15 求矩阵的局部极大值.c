#include <stdio.h>
#define N 20
int main()
{
	int i, j, m, n, flag = -1;
	int a[N][N];
	scanf("%d%d",&m,&n);
 
	for (i = 0; i<m; i++)  //数据存储
	{
		for (j = 0; j<n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 1; i<m-1; i++) //寻找矩阵的局部最大值
	{
		for (j = 1; j<n-1; j++)
		{
			if (a[i][j] > a[i - 1][j] && a[i][j] > a[i + 1][j] && a[i][j] > a[i][j - 1] && a[i][j] > a[i][j + 1])
			{
				printf("%d %d %d\n", a[i][j], i+1, j+1);
				flag = 1; //找到局部最大值时，将flag设置为1
			}
		}
	}
	if (flag == -1)
	{
		printf("None %d %d\n",m,n);
	}
	return 0;

}
