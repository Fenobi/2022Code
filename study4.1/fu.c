#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <assert.h>
//
//size_t my_strlen(const char* stc)//size_t=unsigned int
//{
//	assert(stc);
//	int i = 0;
//	while (*(stc++))
//	{
//		i++;
//	}
//	return i;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int n = my_strlen(arr);
//	printf("%d", n);
//	return 0;
//}

//int main()
//{
//	int a = 1, b = 0, y, z;
//	int x = (--a == b++) ? --a : ++b;
//	y = a++;
//	z = b;
//	printf("%d%d%d", x, y, z);
//	return 0;
//}

//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	
//	if (x % 2 == 0)
//	{
//		printf("这个是偶数\n");
//	}
//	else
//	{
//		printf("这个是奇数\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0; 
//	int b = 0;
//	int c = 0;
//	scanf("%d%d", &a, &b);
//	if (a = b)
//	{
//		
//	}
//	printf("a=%d b=%d", a, b);
//	return 0;
//}

//int main()
//{
//	//const int a = 5;
//	//int arr[a] = { 2,4,5,6 };
////	printf("\a\a\a\a\a\a\a");
//	printf("%c\n", '\x060');
//	printf("%c\n", '\120');
//	printf("%c\n", '\002');
//	return 0;
//}

//void JO_paixvX(int* arr, int n)
//{
//	int left = 0;
//	int right = n - 1;
//	while (left < right)
//	{
//		//从前往后找一个偶数
//		while (left < right && arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		//从后往左找一个奇数
//		while (left < right && arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 2,5,9,4,5,8,7,6,1,6,4,8,2,5,6,4 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//	JO_paixvX(arr, n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	char arr[] = "abcdef";
//	int a = strlen(arr);
//	printf("%d\n", a);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	if (a > b)
//	{
//		printf("%d\n", a);
//	}
//	else
//	{
//		printf("较大值=%d\n", b);
//	}
//	return 0;
//}

#include <stdio.h>
//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	char c = a + b;
//	printf("%d %d", a + b, c);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	if ((char)&a == 0)
//	{
//		printf("大端\n");
//	}
//	else
//	{
//		printf("小端\n");
//	}
//	return 0;
//}

#define ROW 8
#define COL 8

void YH_sanjiao(int arr[ROW][COL], int row, int col)
{
	//杨辉三角
	int i = 0;
	int j = 0;
	arr[0][0] = 1;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (j == i || j == 0)
			{
				arr[i][j] = arr[0][0];
			}
			else
			{
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}
		}
	}
}

void lingxin(int arr[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		//打印一行
		for (j = 0; j < col - i - 1; j++)//打印空格
		{
			printf(" ");
		}
		for (j = 0; j < i; j++)
		{
				printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int arr[ROW][COL] = { 0 };
	YH_sanjiao(arr, ROW, COL);
	lingxin(arr, ROW, COL);
	return 0;
}