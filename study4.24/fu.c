#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <assert.h>

//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//
//	char* s1 = NULL;
//	char* s2 = NULL;
//	const char* sp = str1;
//
//	if (*str2 == '\0')
//	{
//		return (char*)str1;
//	}
//
//	while (*sp)
//	{
//		s1 = sp;
//		s2 = (char*)str2;
//		while (*s1 && *s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)sp;
//		}
//		sp++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char arr1[] = "abccccdefgh";
//	char arr2[] = "ccdef";
//	printf("%s\n", my_strstr(arr1, arr2));
//	return 0;
//}


//int main()
//{
//	int k1 = 0;
//	int k2 = 0;
//	int La = 0;
//	int Lb = 0;
//	int Lc = 0;
//	while (1)
//	{
//		if (k1 == 1 && k2 == 0)
//		{
//			La = 1;
//			Lb = 0;
//			Lc = 0;
//		}
//		else if (k1 && k2)
//		{
//			La = 0;
//			Lb = 1;
//			Lc = 0;
//		}
//		else if (k1 == 0 && k2 == 1)
//		{
//			La = 0;
//			Lb = 0;
//			Lc = 1;
//		}
//		else
//		{
//			La = 0;
//			Lb = 0;
//			Lc = 0;
//		}
//	}
//	return 0;
//}
//#include <string.h>
//
//int main()
//{
//	char arr1[] = "kenobi@qq.com";
//	char *arr2 = "@.";
//	char arr[20] = { 0 };
//	char* str = NULL;
//	strcpy(arr, arr1);
//	for (str = strtok(arr, arr2); str != NULL; str = strtok(NULL, arr2))
//	{
//		printf("%s\n", str);
//	}
//	return 0;
//}
// 

//#include <stdio.h>
//int main()
//{
//    char str[] = "hello bit";
//    printf("%d %d\n", sizeof(str), strlen(str));
//    return 0;
//}

//void swap(int* a, int* b,int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		char arr = *(a + i);
//		*(a + i) = *(b + i);
//		*(b + i) = arr;
//	}
//}
//
//int main()
//{
//	int A[] = { 1,2,3,4,5,6 };
//	int B[] = { 6,5,4,3,2,1 };
//	int n = sizeof(A) / sizeof(A[0]);
//	swap(A, B, n);
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", A[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", B[i]);
//	}
//	return 0;
//}

//void init(int* arr,int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		*(arr + i) = 0;
//	}
//}
//
//void print(int* arr, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//
//void reverse(int* arr, int n)
//{
//	int left = 0;
//	int right = n - 1;
//	while (left <= right)
//	{
//		int t = *(arr + left);
//		*(arr + left) = *(arr + right);
//		*(arr + right) = t;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[20];
//	int n = sizeof(arr) / sizeof(arr[0]);
//	init(arr, n);
//	print(arr, n);
//
//	printf("\n");
//
//	reverse(arr, n);
//	print(arr, n);
//
//	return 0;
//}


