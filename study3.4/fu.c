#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b,c=0;
	scanf("%d %d", &a, &b);//a=12,b=34,c=3124
	c = b / 10 * 1000 + a / 10 * 100 + a % 10 * 10 + b % 10;
	printf("%d\n", c);
	return 0;
}