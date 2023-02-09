#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int y = 1000;
//	//判断y是否为闰年
//	//1.能被4整除，不能被100整除是闰年
//	//2.能被400整除是闰年
//	for (; y <= 2000; y++)
//	{
//		if (y % 4 == 0)
//		{
//			if (y % 100 != 0)
//			{
//				printf("%d ", y);
//			}
//		}
//		if (y % 400 == 0)
//		{
//			printf("%d ", y);
//		}
//	}
//	return 0;
//}

////优化
//int main()
//{
//	int y = 1000;
//	int 合计 = 0;
//	for (; y <= 2000; y++)
//	{
//		if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
//		{
//			printf("%d ", y);
//			合计++;
//		}
//	}
//	printf("\n合计=%d\n", 合计);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	//打印100-200之间的素数
//	//素数：除了1和它本身以外，不能被任何整数整除的数
//	for (a=100; a <= 200; a++)
//	{
//		int i = 0;
//		for(i=2;i<a;i++)
//		{
//			if (a % i == 0)
//			{
//				break;;
//			}
//		}
//		if (a == i)
//		{
//			printf("%d ", a);
//		}
//	}
//	return 0;
//}

////优化
//#include <math.h>
//int main()
//{
//	int a = 0;
//	int sum = 0;
//	for (a = 101; a <= 200; a+=2)
//	{
//		int b = 0;
//		int flag = 1;
//		for (b = 2; b <=sqrt(a); b++)
//		{
//			if (a % b == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag==1)
//		{
//			printf("%d ", a);
//			sum++;
//		}
//	}
//	printf("\nsum=%d\n", sum);
//	return 0;
//}

//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//
//again:
//	printf("电脑将在60s内关机，输入“我是猪”即可终止关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪")==0)//两个字符串之间比较不能用‘==’
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

