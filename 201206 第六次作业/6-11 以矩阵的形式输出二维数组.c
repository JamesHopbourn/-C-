#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i,j,row,cloum;
	scanf("%d %d",&row,&cloum);
	int a[row][cloum];

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < cloum; j++)
		{
			a[i][j] = i+j;
		}
	}

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < cloum; j++)
		{
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
