#include<stdio.h>
int main()
{
int i,n,sum=0;
scanf("%d",&n);
int a[100];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
int j;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(j!=i)
{
sum+=a[i]*10+a[j];
}
}
}
	printf("%d\n",sum);
return 0;
}
