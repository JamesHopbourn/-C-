#include <stdio.h>

int main(int argc, char const *argv[]) {
    int N,number, odd=0,even=0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &number);
        if (number%2 == 1) odd++;
        if (number%2 == 0) even++;
    }
    printf("%d %d\n",odd,even);
}
