#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int a = -20;
//	//10000000000000000000000000010100
//	//11111111111111111111111111101011
//	//11111111111111111111111111101100
//	//11101100
//	unsigned int b = 10;
//	//00000000000000000000000000001010 - 原反补相同
//	printf("%d\n", a + b);
//	//11111111111111111111111111101100
//	//00000000000000000000000000001010 
//	//11111111111111111111111111110110 - 补码
//	//11111111111111111111111111110101 - 反码
//	//10000000000000000000000000001010 - 原码=-10
//	return 0;
//}
#include <string.h>

//void R_yiwei(char* arr, int n,int x)
//{
//	while (x--)
//	{
//		char a = *(arr + n - 1);
//		int right = n - 1;
//		for (int i = right; i >= 0; i--)
//		{
//			*(arr + i) = *(arr + i - 1);
//		}
//		*(arr) = a;
//	}
//}

void L_yiwei(char* arr, int n, int x)
{
	char tmp = 0;
	for(int i=1;i<n;i+=x)
	{
		tmp = *(arr + i);
		*(arr + i) = *arr;
		*arr = tmp;
	}
}

int main()
{
	char arr[] = "abcdefhij";
	int n = strlen(arr);
	int x;
	scanf("%d", &x);
	//R_yiwei(arr, n, x);//fabcde
	L_yiwei(arr, n, x);//bcdefa
	printf("%s", arr);
	return 0;
}