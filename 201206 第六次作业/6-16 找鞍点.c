
#include <stdio.h>
int main()
{
    int a[6][6];//定义二维数组
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    int k=0,y=0,flag=1,p=0;
    if(n==1)
        printf("0 0");//只有一个点时，一定是鞍点
    else
    {
        for(i=0; i<n; i++)
        {
            y=i;
            for(p=0; p<n; p++) //找行最大值
            {
                if(a[i][k]<=a[i][p])//数组元素之间比较，若比a[i][k]大，则将数组列标赋给k
                {
                    k=p;
                }
            }
            for(j=0; j<n; j++)//判断是否为列最小值
            {
                if(a[y][k]>a[j][k])//若此行最大值不是列所在最小值，把小的行标赋给y
                {
                    y=j;
                    break;
                }
            }
            if(i==y)//行最大且列最小，判断条件行标不改变
            {
                flag=0;
                break;
            }
        }
        if(flag==0)
            printf("%d %d",i,k);
        else printf("NONE");
    }
    return 0;
 
}


