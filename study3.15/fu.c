#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 123;
	float b = 123.123;
	//printf("%-06d***\n", a);
	//printf("%#o***\n", a);
	//printf("%%%d\n", a);
	printf("a=%d b=%d\n", a);
	printf("%2d\n", a);
	return 0;
}