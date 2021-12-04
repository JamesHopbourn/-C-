#include<stdio.h>
int main (){
int a[100],i,k=0,n,index,temp,max,j,m;
scanf("%d\n",&n);
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
if(n==1){
printf("%d",a[0]);
return 0;
}
for(j=0;j<n-1;j++){
for(i=j;i<n;i++){
if(a[k]>a[i]){
k=i;
}
}
temp=a[k];a[k]=a[j];a[j]=temp;
for(m = 0;m<n;m++){
if(m==0)
printf("%d",a[m]);
else
printf(" %d",a[m]);
if(m==n-1)
printf("\n",a[m]); 
}
k=j+1;
}

}
