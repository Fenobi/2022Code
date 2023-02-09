#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <stdlib.h>
//
//
//#define N 100
//
//
//void menu()
//{
//	printf("出题神器\n");
//	printf("******************************\n");
//	printf("**********1. 开始  ***********\n");
//	printf("**********0. 结束  ***********\n");
//	printf("******************************\n");
//}
//
//
//void game()
//{
//	int a = 10;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	while (a)
//	{
//		int x = (rand() % 101) + 1;
//		int y = (rand() % 101) + 1;
//		int t = rand() % 4;
//		char ch = 0;
//		switch (t)
//		{
//		case 0:
//			ch = '+';
//			printf("%d%c%d=\n", x, ch, y);
//			b = x + y;
//			break;
//		case 1:
//			ch = '-';
//			printf("%d%c%d=\n", x, ch, y);
//			b = x - y;
//			break;
//		case 2:
//			ch = '*';
//			printf("%d%c%d=\n", x, ch, y);
//			b = x * y;
//			break;
//		case 3:
//			ch = '/';
//			if (y == 0)
//			{
//				continue;
//				a++;
//			}
//			printf("%d%c%d=\n", x, ch, y);
//			b = x / y;
//			break;
//		}
//		scanf("%d", &c);
//		if (c == b)
//		{
//			printf("正确！\n");
//			d++;
//		}
//		else
//		{
//			printf("错误！\n");
//		}
//		a--;
//	}
//	printf("结束,正确率为：%d\n", d * 10);
//}
//
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//		{
//			game();
//			break;
//		}
//		case 0:
//		{
//			printf("结束\n");
//			break;
//		}
//		}
//	} while (input);
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//	int i = 0;
//	int n = 0;
//	double a = 1.0;
//	scanf("%d", &n);
//	double sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		a = 1.0 / (i * i);
//		sum += a;
//	}
//	printf("%lf", sum);
//	return 0;
//}

//#include <math.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i < n; i++)
//	{
//		if (i % 3 == 0 && i % 7 == 0)
//		{
//			sum += i;
//		}
//	}
//	printf("%lf", sqrt(sum));
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	char ch[20] = { 0 };
//	scanf("%s", &ch);
//	while (ch[i])
//	{
//		if (ch[i] == '1')
//		{
//			count++;
//		}
//		i++;
//	}
//	printf("%d\n",count);
//	return 0;
//}

//int main()
//{
//	char ch = 0;
//	int count = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		if (ch == '1')
//		{
//			count++;
//		}
//
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	char ch = 0;
//	int count = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		if (ch == '1')
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//
//	return 0;
//}