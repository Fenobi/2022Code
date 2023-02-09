#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <assert.h>
//void zuoxuan(char str[], int k)//字符串左旋
//{
//	int n = strlen(str);
//	while (k--)
//	{
//		char c = str[0];
//		for (int i = 0; i < n - 1; i++)
//		{
//			str[i] = str[i + 1];
//		}
//		*(str + n - 1) = c;
//	}
//}

////更好的代码
//void NiXv(char* left, char* right)//字符串逆序
//{
//	assert(left);
//	assert(right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int ZuoXuan_PanDuan(char* str, char* str1)
//{
//	assert(str);
//	assert(str1);
//
//	int n = strlen(str);
//	
//	for (int i = 0; i < n; i++)
//	{
//		NiXv(str, str + 1);//左
//		NiXv(str + 2, str + n - 1);//右
//		NiXv(str, str + n - 1);//整体
//
//		if (strcmp(str, str1) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//


//int main()
//{
//	char str[] = "abcdefg";
//	char str1[] = "cdefgab";
//
//	int n = ZuoXuan_PanDuan(str, str1);
//	if (n == 1)
//	{
//		printf("ture\n");
//	}
//	else
//	{
//		printf("false\n");
//	}
//	return 0;
//}

//优化代码
//abcdef
//bcdefa
//cdefab
//defabc
//efabcd
//fabcde
//以上字符串都可在下面这个字符串中找到
//abcdefabcdef

//#include <string.h>
//
//void BiJiao(char* str1, char* str2)
//{
//	//1、str1后加一个str1
//	// abcdefgabcdef
//	strncat(str1, str1, 7);
//	//2、判断str2中是否有str1
//	char* ret = strstr(str1, str2);
//	if (ret == NULL)
//	{
//		printf("no\n");
//	}
//	else
//	{
//		printf("yes\n");
//	}
//}
//
//int main()
//{
//	char str[20] = "abcdefg";
//	char str1[] = "cdefgaab";
//
//	BiJiao(str, str1);
//	
//	return 0;
//}

//#include <windows.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("你电脑将在60s后关机，输入“我是猪”取消关机\n");
//	scanf("%s", &input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//		printf("取消关机\n");
//	}
//	else
//	{
//		printf("输入错误\n");
//		goto again;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,4,6,7,8,9 };//3,5,10
//	int i = 0;
//	int j = 0;
//	printf("请输入要插入的三位数\n");
//	scanf("%d %d %d", &arr[7], &arr[8], &arr[9]);
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10 - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,3,5,6,7,8,9 };
//	int n = 0;
//	int i = 0;
//	while (1)
//	{
//		scanf("%d", &n);
//		for (i = 0; i < 10; i++)
//		{
//			if (n < arr[i])
//			{
//				break;
//			}
//		}
//		int j = 0;
//		for (j = 9; j >= i; j--)
//		{
//			arr[j + 1] = arr[j];
//		}
//		arr[i] = n;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include <string.h>
//#include <stdio.h>
//
//int BiJiao(char* str1, char* str2)
//{
//	//判断长度是否相等
//	if (strlen(str1) != strlen(str2))
//	{
//		return 0;
//	}
//
//	//1、str1后加一个str1
//	// abcdefgabcdef
//	strncat(str1, str1, 7);
//
//	//2、判断str2中是否有str1
//	char* ret = strstr(str1, str2);
//
//	return ret != NULL;
//
//	/*if (ret == NULL)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}*/
//}
//
//int main()
//{
//	char str[20] = "abcdefg";
//	char str1[] = "cdefg";
//
//	int n=BiJiao(str, str1);
//	if (n == 1)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//#include <stdio.h>
//
//void swap(int* a, int* b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前:%d %d\n", a, b);
//	swap(&a, &b);
//	printf("交换后:%d %d\n", a, b);
//	return 0;
//}

//#include <stdio.h>
//
//void table(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = i; j <= n; j++)
//		{
//			printf("%d*%d=%d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	table(n);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = i; j <= 9; j++)
//		{
//			printf("%d*%d=%d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

