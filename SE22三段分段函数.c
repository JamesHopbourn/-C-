#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a,b,c,d;
	printf("请输入四个数字：");
	scanf("%d",&a);
	d=a>0?1:a==0?0:-1;
	printf("%d\n", d);
	return 0;
}