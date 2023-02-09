//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//int findPeakElement(int* nums, int numsLen)
//{
//	int left = 0;
//	int right = numsLen - 1;
//	while (left < right)
//	{
//		int mid = (left + right) / 2;
//		if (nums[mid] < nums[mid + 1])
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			right = mid;
//		}
//	}
//	return left;
//}
//
//int main()
//{
//	int arr[] = { 1,3,2,4,5,6 };
//	int a = findPeakElement(arr, sizeof(arr) / 4);
//	printf("ÏÂ±êÎª£º%d\n", a);
//	return 0;
//}