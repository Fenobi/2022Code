#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int sum(int x, int y)
//{
//	int a;
//	a= x + y;
//	return a;
//}


//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int a=sum(num1, num2);
//	//int sum = num1 + num2;
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	int k;
//	scanf("%d", &k);
//	
//	while (right >= left)
//	{
//		int mid = (left + right) / 2;
//		if (k > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (k < arr[mid])
//		{
//			right=mid - 1;
//		}
//		else
//		{
//			printf("%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("’“≤ªµΩ\n");
//	}
//	
//	return 0;
//}