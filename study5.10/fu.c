#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 5; i++)
//	{
//		for (j = 1; j <= 5 - i; j++)
//		{
//			printf(" ");
//		}
//
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d", j);
//		}
//		for (j = i - 1; j >= 1; j--)
//		{
//			printf("%d", j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include <math.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	double sum = 0;
//	double s = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum += sqrt(i);
//		s += sum;
//
//	}
//	
//	printf("%lf", s);
//}


//int main()
//{   
//    int i=0, n;
//    int sum = 0;
//    scanf("%d", &n);
//    for (i = 2; i < n; i++)
//    {
//        if (n % i == 0)
//        {
//            sum += i;
//        }
//    }
//    printf("sum=%d\n", sum);
//    return 0;
//}

//int main()
//{
//	char ch = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		if ((ch - '0') % 2 == 0)
//		{
//			printf("%c", ch);
//		}
//	}
//	return 0;
//}

int main()
{
	double n = 0;
	scanf("%lf", &n);

	int i = 0;
	double pi = 0.0;
	int a = 1;
	int b = 1;
	double sum = 1.0;
	while(sum >= n)
	{
		pi += sum;
		i++;

		a *= i;
		b *= (2 * i + 1);
		sum = (double)a / (double)b;
	}
	printf("%lf", pi * 2);
	return 0;
}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1;j <= i; j++)
//		{
//			printf("%d*%d=%d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


