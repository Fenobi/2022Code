#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}


//void test()
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "abcd");
//	printf(str);
//	free(str);
//	str = NULL;
//}

//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//



//int main()
//{
//	int arr[6] = { 1,2,3,4,1,2 };
//
//	int t = 0;
//	for (int i = 0; i < 6; i++)
//	{
//		int j = i + 1;
//		for (; j < 6; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				break;
//			}
//		}
//		if (j == 6 && t < 2)
//		{
//			printf("%d ", arr[i]);
//			t++;
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,1,2 };
//	int arr1[2] = { 0 };
//	int sum = 0;
//	for (int i = 0; i < 6; i++)
//	{
//		sum += arr[i];
//	}
//	sum /= 2;
//	for (int i = 0; i < 6; i++)
//	{
//		sum -= arr[i];
//	}
//
//	return 0;
//}

//char* my_strncpy(char* dest,const char* src, int n)
//{
//	assert(src && dest);
//
//	char* ret = dest;
//	while (n--)
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "abcd";
//	char arr2[5] = { 0 };
//	//strncpy(arr2, arr1, 3);
//	my_strncpy(arr2, arr1,3);
//	printf("%s", arr2);
//	return 0;
//}

//char* my_strncat(char* dest, const char* src, int n)
//{
//	assert(dest && src);
//
//	char* ret = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (n--)
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	return dest;
//}
//
//int main()
//{
//	char arr1[] = "defg";
//	char arr2[7] = "abc";
//
//	strncat(arr2, arr1, 3);
//	my_strncat(arr2, arr1, 3);
//	printf("%s", arr2);
//	return 0;
//}

//int my_atoi(const char* str)
//{
//	assert(str);
//
//	int n = 0;
//	while (*str >= 48 && *str <= 57)
//	{
//		n *= 10;
//		n += *str - '0';
//		str++;
//	}
//	return n;
//}
//
//int main()
//{
//	char arr[] = "0132a23";
//	//printf("%d\n", atoi(arr));
//	printf("%d\n", my_atoi(arr));
//	return 0;
//}

//int main()
//{
//	int a[] = { 4,0,2,3,1 }, i, j, t;
//	for (i = 1; i < 5; i++)
//	{
//		t = a[i];
//		j = i - 1;
//		while (j >= 0 && t < a[j])
//		{
//			a[j + 1] = a[j];
//			--j;
//		} 
//		a[j + 1] = t;
//	}
//	
//	return 0;
//}

void int_t(void* e1, void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

int* findErrorNums(int* nums, int numsSize)
{
	qsort(nums, numsSize, sizeof(int), int_t);
	int* arr = (int*)malloc(sizeof(int) * 2);
	int sum1 = (numsSize * numsSize + numsSize) / 2;
	int sum2 = 0;
	for (int i = 1; i <= numsSize; i++)
	{
		if (*(nums + i - 1) < i)
		{
			*(arr) = *(nums + i - 1);
		}
		else if (*(nums + i - 1) < i)
		{
			*(arr + 1) = i;

		}
		else
		{
			;
		}
	}
	
	return arr;
}

int main()
{
	int arr[] = { 1,2,3,5,6,6 };

	findErrorNums(arr, 6);
	return 0;
}


