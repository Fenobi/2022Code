#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("交换前:a=%d b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换后:a=%d b=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int arr[5][6] = { 0 };
//	int i, j, t = 0;
//	int x = 0, y = 0;
//	int max = arr[0][0];
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 6; j++)
//		{
//			arr[i][j] = t;
//			t++;
//		}
//	}
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 6; j++)
//		{
//			if (arr[i][j] > max)
//			{
//				max = arr[i][j];
//				x = i;
//				y = j;
//			}
//		}
//	}
//	printf("max=%d 下标为：%d %d", max, x, y);
//	return 0;
//}

int main()
{
	int i = 0;
	int t = 3;
	for (i = 100; t>0; i--)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%d ", i);
			t--;
		}
	}
	return 0;
}