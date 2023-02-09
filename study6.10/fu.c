#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//int main()
//{
//	int a[10];
//	int i = 0;
//	int b = 2;
//	int sum = 0;
//	for (i = 0; i < 10; i++)
//	{
//		a[i] = b;
//		b += 2;
//		sum += a[i];
//	}
//	printf("%d", sum);
//	return 0;
//}

int main()
{
	int i = 0;
	for (i = 20; i <= 50; i++)
	{
		if (i % 2 == 0 && i % 7 == 0)
		{
			printf("%d ", i);
		}
	}
	return 0;
}