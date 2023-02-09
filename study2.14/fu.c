#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<math.h>
//int sushu(int i)
//{
//	int a = 2;
//	while (a <= sqrt(i))
//	{
//		if (i%a == 0)
//		{
//			return 0;
//		}
//		else
//		{
//			a++;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i;
//	scanf("%d", &i);
//	int a= sushu(i);
//	if (a)
//	{
//		printf("yes");
//	}
//	else
//	{
//		printf("no");
//	}
//	return 0;
//}

//int runnian(int i)
//{
//	if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	int b = runnian(a);
//	if (b)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}


//int binard_search(int i, int b, int s[])
//{
//
//	int left = 0;
//	int right = b - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (s[mid] > i)
//		{
//			right = mid - 1;
//		}
//		else if (s[mid] < i)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key;
//	scanf("%d", &key);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//找到写出下标
//	//找不到返回-1
//	int b=binard_search(key, sz, arr);
//	if (b != -1)
//	{
//		printf("%d\n", b);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}

