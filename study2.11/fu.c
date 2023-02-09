#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	int x = 1;
//	scanf("%d", &n);
//	for (int a = 1; a <= n; a++)
//	{
//		x = x * a;
//		sum = x + sum;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
int main()
{
	char arr[] = {1,2,3,4,5,6,7,8,9,10,11 };
	int x = 0;
	scanf("%d", &x);
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (right >= left)
	{
		int Mid = (left+right) / 2;
		if (arr[Mid]<x)
		{
			left = Mid + 1;
		}
		else if (arr[Mid] > x)
		{
			right = Mid - 1;
		}
		else
		{
			printf("找到目标，下标为：%d", Mid);
			break;
		}
	}
	if (right < left)
	{
		printf("没有找到");
	}
	return 0;
}