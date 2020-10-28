#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Reverse(char str[]);

int main()
{
    char str[100];
    printf("Input a string:");
    gets(str);
    Reverse(str);
    printf("Inversed results:%s\n",str);
}

void Reverse(char str[]){
    int n=strlen(str);
    int i;
    char temp;
    for(i=0;i<(n/2);i++){
        temp=str[i];
        str[i]=str[n-i-1];
        str[n-i-1]=temp;
    }
}