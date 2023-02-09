#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//void JO_paixv(int* arr, int n)//奇偶排序，奇数在前，偶数在后
//{
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j < n - i - 1; j++)
//		{
//			if ((*(arr + j) % 2 == 0) && (*(arr + j + 1) % 2 != 0))
//			{
//				tmp = *(arr + j);
//				*(arr + j) = *(arr + j + 1);
//				*(arr + j + 1) = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 2,5,9,4,5,8,7,6,1,6,4,8,2,5,6,4 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//	JO_paixv(arr, n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
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
//		if (left < right)//交换
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

//int main()
//{
//	char killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//		{
//			printf("%c\n", killer);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) 
//							&& ((b == 2) + (e == 4) == 1) 
//							&& ((c == 1) + (d == 2) == 1) 
//							&& ((c == 5) + (d == 3) == 1) 
//							&& ((e == 4) + (a == 1) == 1))
//						{
//							if (a * b * c * d * e == 120)
//							{
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//void print(int* pa, int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", *(pa + i));
//	}
//}
//
//void test(char* p)
//{
//	;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int* parr = arr;
//	int n = sizeof(arr) / sizeof(arr[0]);
//	print(parr, n);
//
//	char a = 'A';
//	char* pa = &a;
//	test(&a);//char* 
//	//上下都相同的
//	test(pa);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//		int ch1 = getchar();
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//void test(int** p)
//{
//	**p=20;
//}
//int main()
//{
//	int a = 1;
//	int* pa = &a;//一级指针
//	int** ppa = &pa;//二级指针
//	test(ppa);
//	test(&pa);
//	int* arr[10] = { 0 };
//	test(arr);
//	
//	printf("%d\n", a);
//	return 0;
//}

