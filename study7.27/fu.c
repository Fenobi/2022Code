#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include <stdlib.h>

void f(int i)
{
	int a = 0;
	int* pa = (int*)malloc(sizeof(int*) * 10);
	printf("%x\n", pa);
	if (pa == NULL)
	{
		exit(-1);
	}
	pa[0] = 1;
	free(pa);
}

int main()
{
	f(10);
	f(10);
	return 0;
}