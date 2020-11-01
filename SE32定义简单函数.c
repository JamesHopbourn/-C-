#include <stdio.h>

#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))

int main(){
   int a, b, c, max_number,min_number;
   scanf("%d %d %d",&a,&b,&c);
   min_number = min(min(a, b), c);
   max_number = max(max(a, b), c);
   printf("LOWEST %d\n", min_number);
   printf("MIDDLE %d\n", a+b+c-max_number-min_number);
   printf("HIGHEST %d\n", max_number);  

   getchar(); 
}