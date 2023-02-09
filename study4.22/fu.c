#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//void sushu(void)
//{
//	int a = 0;
//	int b = 0;
//	for (a = 100; a <= 200; a++)
//	{
//		for (b = 2; b < a; b++)
//		{
//			if (a % b == 0)
//			{
//				break;
//			}
//		}
//		if (a == b)
//		{
//			printf("%d ", a);
//		}
//	}
//}
//
//int main()
//{
//	sushu();
//	return 0;
//}

//int num(int n)
//{
//	int i = 0;
//	if (n == 1)
//		return 0;
//	for (i = 2; i <= n; ++i)
//	{
//		if (n % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int j;
//	for (j = 100; j <= 200; ++j)
//	{
//		int ret = num(j);
//		if (ret == 1)
//			printf("%d", j);
//	}
//}

//int main()
//{
//	for (int i = 0; i++ < 3;)
//	{
//		printf("%d", i);
//	}
//	return 0;
//}

//int main()
//{
//    int a[4] = { 1, 2, 3, 4 };
//    int* ptr1 = (int*)(&a + 1);
//    int* ptr2 = (int*)((int)a + 1);
//
//   printf("%p,%x", ptr1[-1], ptr2);
//    return 0;
//}

//int my_strlen(char* str)
//{
//	if(*str!='\0')
//	return 1 + my_strlen(++str);
//}

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char str[] = "abcde";
//	int n = my_strlen(str);
//	printf("%d\n", n);
//	return 0;
//}
// 
//int count = 0;
//int FeBo(int n)
//{
//	count++;
//	if (n>2)
//	{
//		return FeBo(n - 1) + FeBo(n - 2);
//	}
//	else
//	{
//		return 1;
//	}
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a = FeBo(n);
//	printf("%d\n调用次数：%d\n", a, count);
//	return 0;
//}

//int FeBo(int n)
//{
//	int i = 0;
//	int old = 1;
//	int new = 1;
//	i = old + new;
//	while (n > 2)
//	{
//		n--;
//		i = old + new;
//		old = new;
//		new = i;
//	}
//	return i;
//
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = FeBo(n);
//	printf("%d\n", i);
//	return 0;
//}

//void split(int n)
//{
//	if (n)
//	{
//		split(n / 10);
//		printf("%d ", n % 10);
//	}
//}
//
// 

//int main()
//{
//	int n = 0;
//	printf("请输入一个整数\n");
//	scanf("%d", &n);
//	split(n);
//	return 0;
//}

//int JieCheng(int n)
//{
//	if(n>1)
//	{
//		return n * JieCheng(n - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}

//int JieCheng(int n)
//{
//	int sum = 1;
//	while (n>1)
//	{
//		sum *= n;
//		n--;
//	}
//	return sum;
//}
//
//int main()
//{
//	int n = 0;
//	printf("请输入一个整数\n");
//	scanf("%d", &n);
//	int i = JieCheng(n);
//	printf("%d\n", i);
//	return 0;
//}

//void reverse_string(char* string, int n)
//{
//	char* left = string;
//	char* right = string + n;
//	char tmp = *left;
//	*left = *right;
//	*right = tmp;
//	if (*left == *right || *(left + 1) == *right)
//	{
//		return;
//	}
//	else
//	{
//		reverse_string(string + 1, n - 2);
//	}
//}
//
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(++str);
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int n = my_strlen(arr) - 1;
//	reverse_string(arr, n);
//	printf("%s\n", arr);
//	return 0;
//}

//int DigitSum(int n)
//{
//	if (n==0)
//	{
//		return 0;
//	}
//	else
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//}
//
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	int n = DigitSum(x);
//	printf("%d\n", n);
//	return 0;
//}

