#define _CRT_SECURE_NO_WARNINGS
//#define ROW 10
//#define COL 10
#include <stdio.h>
//int main()
//{
//	//杨辉三角
//	int arr[ROW][COL] = { 0 };
//	int i = 0;
//	int j = 0;
//	arr[0][0] = 1;
//	for (i = 0; i < ROW; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == i || j == 0)//打印两边
//			{
//				arr[i][j] = arr[0][0];
//				printf("%d ", arr[i][j]);
//			}
//			else//打印中间
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//				printf("%d ", arr[i][j]);
//			}
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//#define ROW 8
//#define COL 8
//#include <stdio.h>
//
//void YH_sanjiao(int arr[ROW][COL], int row, int col)
//{
//	//定义杨辉三角
//	int i = 0;
//	int j = 0;
//	arr[0][0] = 1;
//	for (i = 0; i < ROW; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == i || j == 0)
//			{
//				arr[i][j] = arr[0][0];
//			}
//			else
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//}
//
//void lingxin(int arr[ROW][COL], int row, int col)//打印杨辉三角的函数
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)//打印一行
//	{
//		for (j = 0; j < col - i - 1; j++)//打印空格
//		{
//			printf(" ");
//		}
//		for (j = 0; j < i; j++)
//		{
//			printf("%d ", arr[i][j]);//打印数字
//		}
//		printf("\n");
//	}
//}
//
//
//int main()
//{
//	int arr[ROW][COL] = { 0 };
//	YH_sanjiao(arr, ROW, COL);
//	lingxin(arr, ROW, COL);
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}

//void test(char* str)
//{
//	;
//}
//int main()
//{
//	int a = 5;
//	int b = 10;
//	Add(a, b);
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//
//	//pf为函数指针变量
//	int (*pf)(int, int) = &Add;
//	printf("%p\n", pf);
//
//	char (*pt)(char*) = &test;
//	printf("%p\n", pt);
//	printf("%p\n", test);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int (*pf)(int, int) = &Add;
////	int c = (*pf)(a, b);//这里的*是无意义的
//	int c = pf(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	//关于(*(void(*)())0)();
//	//void(*)() -- 函数指针类型
//	//( void(*)() )0 -- 对地址0进行强制类型转换，被解释为一个函数地址
//	//*(void(*)())0 -- 对0地址进行解引用操作
//	//(*(void(*)())0)() -- 调用0地址处的函数
//
//	//关于void(*signal(int, void(*)(int)))(int);
//	//1、signal先和()结合，说明signal是函数名
//	//2、signal函数的第一个参数类型为int，第二个参数类型为函数指针类型
//	//该函数指针，指向一个参数为int，返回类型为void的函数
//	//3、signal函数的返回类型也是一个函数指针
//	//该函数指针，指向一个参数为int，返回类型是void的函数
//	// signal是一个函数的声明
//	return 0;
//}

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}

void menu()
{
	printf("****************************\n");
	printf("*****  1、加  2、减  *******\n");
	printf("*****  3、乘  4、除  *******\n");
	printf("********* 0、退出 **********\n");
	printf("****************************\n");
}

int main()
{
	int input = 0;
	do 
	{
		int (*fpArr[5])(int, int) = { 0,Add,Sub,Mul,Div };
		int x = 0;
		int y = 0;
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("请输入两个整数：<");
			scanf("%d %d", &x, &y);
			int ret = fpArr[input](x, y);
			printf("ret=%d\n", ret);
		}
		else if (input == 0)
		{
			printf("退出\n");
			break;
		}
		else
		{
			printf("选择错误，重新输入\n");
		}
		
	} while (input);
	return 0;
}

//int main()
//{
//	int (*pf1)(int, int) = Add;
//	int (*pf2)(int, int) = Sub;
//	//存放同类型的函数指针
//	int(*pfArr[2])(int, int) = { pf1,Sub };//pfArr函数指针数组
//	int* p = pfArr[1];
//	printf("%p\n%p\n", p, pf2);
//	return 0;
//}

