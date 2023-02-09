#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//99³Ë·¨±í
int main()
{
	for (int i = 1; i <= 9; i++)
	{
		for (int b = 1; b <= i; b++)
		{
			printf("%d*%d=%-2d ", i, b,i*b);
		}
		printf("\n");
	}
	return 0;
}