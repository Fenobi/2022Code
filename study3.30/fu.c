#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//void JO_paixv(int* arr,int n)//奇偶排序，奇数在前，偶数在后
//{
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	for (i = 0; i < n-1; i++)
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
//	JO_paixv(arr,n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

