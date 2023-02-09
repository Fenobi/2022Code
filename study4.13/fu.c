#define _CRT_SECURE_NO_WARNINGS



//void test(void);
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9 };
//    int i = 0;
//    for (i = 0; i < 9; i++)
//    {
//        printf("%d ", func(45));
//    }
//}
//	test();
//	return 0;
//}
//void test(void)
//{
//	;
//}

//int func(float a)
//{
//    int b;
//    switch (a)
//    {
//    case 1: b = 30;
//    case 2: b = 20;
//    case 3: b = 16;
//    default: b = 0;
//    }
//    return b;
//}

//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//
//}

int main()
{
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("%d ", i);
		}
	}
	return 0;
}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	if (a > b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	int i = 0;
//	for (i = a; i >= 1; i--)
//	{
//		if (a % i == 0 && b % i == 0)
//		{
//			printf("%d", i);
//			break;
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//#include <math.h>
//
//int main()
//{
//	int i = 0;	
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < (int)sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if ((int)sqrt(i)== j)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

