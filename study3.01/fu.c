#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i;
	scanf("%d", &i);
	int count = 0;
	for(int a=1;a<32;a++)
	{
		if (i & 1 == 1)
		{
			count++;
		}
		a++;
		i =i>> 1;
	}
	printf("%d\n", count);
	return 0;
}