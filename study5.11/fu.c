#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d\n", a + b);
//	return 0;
//}

//int main()
//{
//	int* p;
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(p));
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	for (int i = 0; i < 9; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	return 0;
//}

//int main()
//{
//	char str[10000];
//	scanf("%[^\n]", &str);
//	int n = strlen(str);
//	int left = 0;
//	int right = n - 1;
//
//	while (left <= right)
//	{
//		char tmp = *(str + left);
//		*(str + left) = *(str + right);
//		*(str + right) = tmp;
//		left++;
//		right--;
//	}
//
//	printf("%s\n", str);
//	return 0;
//}

//#include <math.h>
//int shuzi(int n,int i)
//{
//	if (i)
//	{
//		return shuzi(n, i - 1) + pow(10, i) * n;//2 5
//	}
//	else
//	{
//		return n;
//	}
//}
//
//int main()
//{
//	int n;
//	int i = 5;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 0;i < 5; i++)
//	{
//		sum += shuzi(n, i);
//	}
//	printf("%d\n", sum);
//	return 0;
//}

#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	x = pow(10, x);
//	int i = 0;
//	for (i = 0; i <= x; i++)
//
//	{
//		int n = 0;
//		int tmp1 = i;
//		while (tmp1)//确定位数n
//		{
//			tmp1 /= 10;
//			n++;
//		}
//		int tmp2 = i;
//		int sum = 0;
//		while (tmp2)//计算
//		{
//			sum += pow(tmp2 % 10, n);
//			tmp2 /= 10;
//		}
//		if (sum == i)//判断
//		{
//			printf("水仙花数=%d\n", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 8; i++)
//	{
//		for (j = 0; j < 7 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < 7; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (7 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}