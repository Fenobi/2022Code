#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//    char arr[1000] = { 0 };
//    int l = 0;
//    while (scanf("%c", &arr[l]))
//    {
//        if (arr[l] != '\n')
//        {
//            l++;
//        }
//        else
//        {
//            break;
//        }
//        
//    }
//    for (int i = 0; i < l; i++)
//    {
//        for (int j = 0; j < l - i - 1; j++)
//        {
//            if ((int)arr[j] > (int)arr[j + 1])
//            {
//                char tmp = arr[j + 1];
//                arr[j + 1] = arr[j];
//                arr[j] = tmp;
//            }
//        }
//    }
//    for (int i = 0; i < l; i++)
//    {
//        printf("%c", arr[i]);
//    }
//    return 0;
//}

//int pivotIndex(int* nums, int numsSize)
//{
//    int i = 1;
//    
//    while (i < numsSize)
//    {   
//        int sum1 = 0, sum2 = 0;
//        for (int a = 0; a < i; a++)
//        {
//            sum1 += nums[a];
//        }
//        for (int b = i + 1; b < numsSize; b++)
//        {
//            sum2 += nums[b];
//        }
//        if (sum2 == sum1)
//        {
//            break;
//        }
//        else
//        {
//            i++;
//        }
//    }
//    if (i == numsSize)
//    {
//        return -1;
//    }
//    return i;
//}

//int main()
//{
//    int arr[] = { 1,7,3,6,5,6 };
//    int len = 6;
//    printf("%d", pivotIndex(arr, len));
//    return 0;
//}


//int main()
//{
//
//	char a[10] = '4';
//	char b[10] = "x+y=5.";
//	printf("%s", a);
//	return 0;
//}

//int majorityElement(int* nums, int numsSize)
//{
//    int t = 0;
//    for (int i = 0; i < numsSize; i++)
//    {
//        for (int j = 0; j < numsSize; j++)
//        {
//            if (nums[i] == nums[j] && i != j)
//            {
//                t++;
//            }
//
//        }
//        if (t >= numsSize / 2)
//        {
//            return nums[i];
//        }
//    }
//    return;
//}
//
//int main()
//{
//    int arr[] = { 8,8,7,7,7 };
//    int len = 5;
//    printf("%d", majorityElement(arr, len));
//    return 0;
//}