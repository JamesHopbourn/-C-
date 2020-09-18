#include <stdio.h>
#include "SE00add.h"

int main()
{
    int sum = add(7, 8);
    printf("7+8 = %d\n", sum);
    return 0;
}

/*
gcc -shared -o libadd.so add.c

gcc -o main SE16动态库的引用.c -L./include/ -ladd
*/