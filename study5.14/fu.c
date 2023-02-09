#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()//阶乘
//{
//	int n = 1;
//	int sum = 0;
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		n *= i;
//		sum += n;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int sushu(int n)
//{
//	int i = 0;
//	for (i = 2; i < n; i++)
//	{
//		if (n % i == 0)//判断是否能被整除
//		{
//			break;//能被整除则直接跳出
//		}
//		return n;//当全部不能整除说明是素数，返回自己
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int t = 5;
//	int i = 0;
//	while (t--)
//	{
//		scanf("%d", &n);
//		if (i = sushu(n))//判断是否输出
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int a = arr[9];
//	for (int i = 9; i > 0; i--)
//	{
//		arr[i] = arr[i - 1];
//	}
//	arr[0] = a;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}