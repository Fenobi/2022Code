#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//void print(unsigned int a)
//{
//	if (a > 9)
//	{
//		print(a/10);
//	}
//	printf("%d ", a%10);
//}
//int main()
//{
//	unsigned int a =0 ;
//	scanf("%u", &a);
//	print(a);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "kenobi";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//	
//int main()
//{
//	char arr[] = "kenobi";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}

//int jiecheng(int a)
//{
//	if (a > 0)
//	{
//		return a * jiecheng(a - 1);
//	}
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d\n", jiecheng(n));
//	return 0;
//}
//

////斐波那契数列第n项值
//int shulie(int n)
//{
//	if (n  <=2)
//	{
//		return 1;
//	}
//	else
//	{
//		return shulie(n - 1) + shulie(n - 2);
//	}
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d\n", shulie(n));
//	return 0;
//}

int fac(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;

}

int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d\n", fac(n));
	return 0;
}