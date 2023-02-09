#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//int main()
//{
//    int n;
//    char p;
//    
//    scanf("%d", &n);
//    char s = getchar();
//    for (int i = 0; i < n; i++)
//    {
//        int t = 0;
//        int a = 0, b = 0, c = 0;
//
//        while ((p = getchar()) != ' ')
//        {
//            if (((p >= 48 && p <= 57)) ||
//                (b = (p >= 65 && p <= 90)) ||
//                (c = (p >= 97 && p <= 122)))
//            {
//                
//                if (t == 0 && (p >= 48 && p <= 57))
//                {
//                    break;
//                }
//                else
//                {
//                    t++;
//                }
//            }
//            else
//            {
//                break;
//            }
//        }
//        if (((b + c) == 1 || p == '\n') && t >= 8)
//        {
//            printf("YES\n");
//        }
//        else
//        {
//            printf("NO\n");
//        }
//    }
//    return 0;
//}

//int main()
//{
//	int t = 0;
//	while (printf("*"))
//	{
//		t++;
//		if (t < 3)
//		{
//			break;
//		}
//	}
//	return 0;
//}

//int GetNumberOfK(int* data, int dataLen, int k)
//{
//    int left = 0;
//    int right = dataLen - 1;
//    int count = 0;
//    while (left < right)
//    {
//        int mid = (left + right) / 2;
//        if (data[mid] > k)
//        {
//            right = mid - 1;
//        }
//        else if (data[mid] < k)
//        {
//            left = mid + 1;
//        }
//        else
//        {
//            for (int i = 1; i <= (right - left); i++)
//                count += (data[mid - i] + data[mid + i]);
//            break;
//        }
//    }
//    return count;
//}


//int GetNumberOfK(int* data, int dataLen, int k)
//{
//    if (dataLen <= 1 && data[0] == k)
//    {
//        return dataLen;
//    }
//    int left = 0;
//    int right = dataLen - 1;
//    int count = 0;
//    while (left < right)
//    {
//        int mid = (left + right) / 2;
//        if (data[mid] > k)
//        {
//            right = mid - 1;
//        }
//        else if (data[mid] < k)
//        {
//            left = mid + 1;
//        }
//        else
//        {
//            count++;
//            int i = 1;
//            while (data[mid] == data[mid + i])
//            {
//                i++;
//                count++;
//            }
//            i = 1;
//            while (data[mid] == data[mid - i])
//            {
//                i++;
//                count++;
//            }
//            break;
//        }
//    }
//    return count;
//}
//
//int main()
//{
//    int arr[] = { 3,3,3,3 };
//    int len = sizeof(arr) / sizeof(arr[0]);
//    int n = 3;
//    printf("%d\n", GetNumberOfK(arr, len, n));
//    return 0;
//}


int dominantIndex(int* nums, int numsSize)
{
	int max = nums[0];
	int a = 0, b = 0;
	for (int i = 1; i < numsSize; i++)
	{
		if (max < nums[i])
		{
			max = nums[i];
			a = i;
		}
	}
	for (int i = 0; i < numsSize; i++)
	{
		if (max < nums[i] * 2 && a != i)
		{
			return -1;
		}

	}
	return a;

}
int main()
{
	int arr[] = { 3,6,0,1 };
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("%d",dominantIndex(arr, len));
	return 0;
}