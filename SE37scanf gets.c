#include <stdio.h>

int main(int argc, char const *argv[])
{
	char str1[10],str2[10];
	gets(str2);
	scanf("%s", str1);
	printf("scanf: %s\n", str1);
	printf("gets:  %s\n", str2);
	return 0;
}