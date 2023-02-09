#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <assert.h>
#include <limits.h>
//int* productExceptSelf(int* nums, int numsSize, int* returnSize)
//{
//    int left = 1, right = 1;
//    *returnSize = numsSize;
//    int* arr = (int*)malloc(sizeof(int) * 500000);
//    for (int i = 0; i < numsSize; i++)
//    {
//        arr[i] *= left;
//        left *= nums[i];
//
//        arr[numsSize - 1 - i] *= right;
//        right *= nums[numsSize - 1 - i];
//    }
//    return arr;
//}
//
//int main()
//{
//    int arr[] = { 1,2,3,4 };
//    int arr1[10];
//    productExceptSelf(arr, 4, arr1);
//    return 0;
//}

//int main()
//{
//	int a = 0;
//	int n = 0;
//	int i = -1;
//	while (i)
//	{
//		n++;
//		i = i >> 1;
//		a = a < a + 1;
//	}
//	printf("%d", n);
//	return 0;
//}


//enum
//{
//	A,
//	B
//}s = B;
//
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
//	char arr[] = "a-0132a23";
//	printf("%d\n", atoi(arr));
//	printf("%d\n", my_atoi(arr));
//	return 0;
//}


//int myAtoi(char* s)
//{
//    assert(s);
//
//    int a = 1;
//    long long n = 0;
//    while (*s == ' ')
//    {
//        s++;
//    }
//    if (*s == '-')
//    {
//        a = -1;
//        s++;
//    }
//    else if (*s == '+')
//    {
//        s++;
//    }
//
//    while (*s >= 48 && *s <= 57)
//    {
//        n *= 10;
//        n += *s - '0';
//        s++;
//    }
//    if (n >= INT_MAX)
//    {
//        return INT_MAX * a - 1;
//    }
//    return n * a;
//}

//int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize)
//{
//    int a = 0;
//
//    int* arr = (int*)malloc(sizeof(int) * 100000);
//    for (int i = 0; i < numsSize; i++)
//    {
//        nums[abs(nums[i]) - 1] = -abs(nums[abs(nums[i]) - 1]);
//    }
//    for (int i = 0; i < numsSize; i++)
//    {
//        if (nums[i] > 0)
//        {
//            arr[a] = i + 1;
//            a++;
//        }
//    }
//    *returnSize = a;
//    return arr;
//
//}
//
//int main()
//{
//    int arr[] = { 1,3,4,8,7,2,3,2 };
//    int arr1[100];
//    findDisappearedNumbers(arr, 8, arr1);
//    printf("%d", 1 << 1);
//    return 0;
//}

//int main()
//{
//	int a = -1;
//	unsigned int b = 2;
//	if (a > b)
//	{
//		if (1 ^ (1 >> 31 << 31))
//		{
//			printf("%d\n",sizeof(a++));
//		}
//		printf("%d\n", a);;
//	}
//	return 0;
//}

int findMaxConsecutiveOnes(int* nums, int numsSize)
{
    int max = 0;
    for (int i = 0; i < numsSize; i++)
    {
        int count = 0;
        if (nums[i] == 0)
        {
            int n = i + 1;
            for (int j = n; j < numsSize; j++)
            {
                if (nums[j] == 1)
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
        }
        else
        {
            for (int j = i; j < numsSize; j++)
            {
                if (nums[j] == 1)
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            if (max < count)
            {
                max = count;
            }
        }
    }
    return max;

}