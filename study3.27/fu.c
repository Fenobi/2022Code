#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//#include <string.h>
//int main()
//{
//	char arr[50] = { 0 };//大写65`90  小写97~122
//	scanf("%s", &arr);
//	int n = strlen(arr);
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] >= 65 && arr[i] <= 85 || arr[i] >= 97 && arr[i] <= 117)
//		{
//			arr[i] = arr[i] + 5;
//		}
//		else
//		{
//			arr[i] = arr[i] - 21;
//		}
//	}
//	printf("%s", arr);
//	return 0;
//}

//int digui(int n)
//{
//	if (n)
//	{
//		return n * digui(n-1);
//	}
//}
//
//int main()
//{
//
//	int n;
//	scanf("%d", &n);
//	int c = digui(n);
//	printf("%d\n", c);
//	return 0;
//}

//#include <limits.h>
//#include <float.h>
//int main()
//{
//	int n = 9;
//	float* pfloat = (float*)&n;
//	printf("%d ", n);
//	printf("%f ", *pfloat);
//
//	*pfloat = 9.0;
//	printf("%d ", n);
//	printf("%f ", *pfloat);
//	return 0;
//}
//
//int main()
//{
//	int a = 1;
//	if (*(char*)&a==1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}
//

//int shushu(int a)
//{
//	int i = 0;
//	while (a)
//	{
//		if (a % 10 == 2)
//		{
//			i++;
//		}
//		a /= 10;
//	}
//	return i;
//}
//
//int main()
//{
//	int i = 1;
//	int count = 0;
//	for (i = 10; i <= 2020; i++)
//	{
//		count += shushu(i);
//	}
//	printf("%d\n", count + 1);
//	return 0;
//}

//int main()
//{
//	float f = 5.5f;
//	//101.1 --> 1.011*2^2 
//	// S=0,E=2,M=1.011
//	// S=0,E=2+127,M=011
//	//0100 0000 1011 0000 0000 0000 0000 0000
//	//40        b0        00         00
//	double lf = 5.5;
//	//S=0,E=2+2047,M=011
//	//0100 0000 0001 0110 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 000 0000
//	// 40        16        000000000
//	float a= 9.0f;
//	return 0;
//}

