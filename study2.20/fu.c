#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int my_strlen(char* str)
//{
//	int n = 0;
//	while (*str != '\0')
//	{
//		n++;
//		str++;
//	}
//	return n;
//}
//
//
//void nixiang(char* str)
//{
//	char tmp = *str;
//	int len = my_strlen(str) ;
//	*str = *(str + len - 1);
//	*(str + len - 1) ='\0';
//	if (my_strlen(str+1) >= 2)
//	{
//		nixiang(str + 1);
//	}
//	*(str + len - 1) = tmp;
//
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	nixiang(arr);
//	printf("%s\n",arr);
//	return 0;
//}

//int he(int n)
//{
//	if (n > 9)
//	{
//		return he(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int sum = he(num);
//	printf("%d\n", sum);
//	return 0;
//}

double Pow(int n, int k)
{
	if (k == 0)
	{
		return 1.0;
	}
	else if (k > 0)
	{
		return n * Pow(n, k - 1);
	}
	else
	{
		return 1 / Pow(n, -k);
	}
}
int main()
{
	int n = 0, k = 0;
	scanf("%d %d", &n, &k);
	double ret = Pow(n, k);
	printf("%lf",ret);
	return 0;
}