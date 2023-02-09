#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>


//int shu(int* num, int numsSize)
//{
//    int tmp = 0;
//    int n = numsSize-1;
//    for (int i = 0; i < numsSize; i++)
//    {
//        tmp += num[i] * pow(10,n);
//        n--;
//    }
//    return tmp;
//}
//
//void shu1(int* arr,int tmp)
//{
//    int i = 0;
//    if(tmp)
//    {
//       shu1(arr+1,tmp / 10);
//    }
//    *arr = tmp % 10;
//}
//
//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    int arr1[20];
//    shu1(arr1, shu(arr, 5));
//   
//
//    return 0;
//}

//int main()
//{
//	char const* p1 = 0;
//	const char* p2 = 0;
//	char* const p3 = 0;
//	*p1 = 1;
//	*p2 = 1;
//	*p3 = 1;
//}


//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}

//#include <assert.h>
//int my_strlen(const char* arr)
//{
//	int count = 0;
//	assert(arr);
//	while (*arr)
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}

//#include <assert.h>
//
//char* my_strcpy(char* str1, const char* str2)
//{
//	assert(str2);
//	char* ret = str1;
//	while (*str1++ = *str2++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char str1[] = "abc";
//	char str2[] = "bc";
//	
//	printf("%s\n",my_strcpy(str1, str2));
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