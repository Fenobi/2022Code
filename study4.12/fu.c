#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int score;
//	printf("请输入成绩\n");
//	scanf("%d", &score);
//		if (score > 100 || score < 0)
//		{
//			printf("你输入的成绩不合法\n");
//		}
//		else
//		{
//			score /= 10;
//			switch (score)
//			{
//			case 10:
//				printf("优秀\n");
//			case 9:
//				printf("优秀\n");
//				break;
//			case 8:
//				printf("良好\n");
//				break;
//			case 7:
//				printf("中等\n");
//				break;
//			case 6:
//				printf("及格\n");
//				break;
//			default:
//				printf("不及格\n");
//				break;
//			}
//		}
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	switch (year % 12)
//	{
//	case 6:
//	{
//		printf("虎年\n");
//		break;
//	}
//	case 7:
//	{
//		printf("兔年\n");
//		break;
//	}
//	case 8:
//	{
//		printf("龙年\n");
//		break;
//	}
//
//	case 9:
//	{
//		printf("蛇年\n");
//		break;
//	}
//	case 10:
//	{
//		printf("马年\n");
//		break;
//	}
//	case 11:
//	{
//		printf("羊年\n");
//		break;
//	}
//	case 0:
//	{
//		printf("猴年\n");
//		break;
//	}
//	case 1:
//	{
//		printf("鸡年\n");
//		break;
//	}
//	case 2:
//	{
//		printf("狗年\n");
//		break;
//	}
//	case 3:
//	{
//		printf("猪年\n");
//		break;
//	}
//	case 4:
//	{
//		printf("鼠年\n");
//		break;
//	}
//	case 5:
//	{
//		printf("牛年\n");
//		break;
//	}
//}
//	return 0;
//}

//int main()
//{
//
//	int a = 0;
//	char ch = 0;
//	int b = 0;
//	scanf("%d%c%d", &a, &ch, &b);
//	switch (ch)
//	{
//	case '+':
//	{
//		printf("=%d", a + b);
//		break;
//	}
//	case '-':
//	{
//		printf("=%d", a - b);
//		break;
//	}
//	case '*':
//	{
//		printf("=%d", a * b);
//		break;
//	}
//	case '/':
//	{
//		printf("=%d", a / b);
//		break;
//	}
//defaule:
//	{
//		printf("计算错误\n");
//	}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 2; i <= 100; i++)
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

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 2; i <= 100; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				printf("%d ", i);
//				break;
//			}
//		}
//	}
//	return 0;
//}

//void zhishu(int a, int b)
//{
//	int i = 0;
//	int j = 0;
//	for (i = a; i <= b; i++)
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
//}
//
//int main()
//{
//	
//	int a = 0;
//	int b = 0;
//	printf("计算a~b之间的质数\n请输入a~b之间的整数:>");
//	scanf("%d %d", &a, &b);
//	zhishu(a,b);
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7 };
//	char arr2[] = { 'a','b','c','d','e','f','g' };
//	for (int i = 0; i < 7; i++)
//	{
//		printf("%p\n", &arr1[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < 7; i++)
//	{
//		printf("%p\n", &arr2[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[][4] = { 1,2,3,4,5,6,7,8 };
//	char arr2[][4] = { 'a','b','c','d','e','f','g' };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%p\n", &arr1[i][j]);
//		}
//	}
//	printf("\n");
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%p\n", &arr2[i][j]);
//		}
//	}
//	return 0;
//}

int main()
{ 
	int a[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	
	return 0;
}