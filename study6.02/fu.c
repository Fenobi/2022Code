#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//#include <stdlib.h>
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//int main()
//{
//	int arr[] = { 2,1,5,4,8,9,4,1,6,7,10 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, n, sizeof(arr[0]), cmp_int);
//	for (int i = 0; i < n ; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//struct S
//{
//	int i;
//	char ch[10];
//};
//
//int cmp_struct_i(const void* e1, const void* e2)
//{
//	return ((struct S*)e1)->i - ((struct S*)e2)->i;
//}
//
//int main()
//{
//	struct S s[] = { {20,"小付"},{19,"小刘"},{21,"小李"} };
//	int n = sizeof(s) / sizeof(s[0]);
//	qsort(s, n, sizeof(s[0]), cmp_struct_i);
//	for (int i = 0; i < n ; i++)
//	{
//		printf("%d%s ", s[i].i, s[i].ch);
//	}
//	return 0;
//}

//int cmp(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void swap(char* e1, char* e2, int size)
//{
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		char tmp = *e1;
//		*e1 = *e2;
//		*e2 = tmp;
//		e1++;
//		e2++;
//	}
//	
//}
//
//void my_qsort(void* arr, int n, int size, int(*cmp)(const void* e1, const void* e2))
//{
//	int i, j;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n - i - 1; j++)
//		{
//			if (cmp((char*)arr + j * size, (char*)arr + (j + 1) * size) > 0)
//			{
//				swap((char*)arr + j * size, (char*)arr + (j + 1) * size, size);
//			}
//		}
//	}
//}
//
//
//int main()
//{
//	int arr[] = { 1,2,5,2,4,9,8,4,6 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//	my_qsort(arr, n, 4, cmp);
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int cmp(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void swap(char* e1, char* e2, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		char tmp = *e1;
//		*e1 = *e2;
//		*e2 = tmp;
//		e1++;
//		e2++;
//	}
//}
//
//void my_qsort(void* arr, int n, int sz, int(*cmp)(const void* e1, const void* e2))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n - i - 1; j++)
//		{
//			if (cmp((char*)arr + j * sz, (char*)arr + (j + 1) * sz) > 0)
//			{
//				swap((char*)arr + sz * j, (char*)arr + (j + 1) * sz, sz);
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,5,7,2,3,11,4,8 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//	my_qsort(arr, n, 4, cmp);
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

