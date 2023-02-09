#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
//int main()
//{
//	int arr[][4] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };
//	int n = sizeof(arr) / sizeof(arr[0][0]);
//	int t, i = 3, j = 0;
//	scanf("%d", &t);
//	while (i >= 0 && j < 4)
//	{
//		if (arr[i][j] == t)
//		{
//			printf("有");
//			return 0;
//		}
//		else
//		{
//			if (arr[i][j] < t)
//			{
//				j++;
//			}
//			else
//			{
//				i--;
//			}
//		}
//	}
//	printf("无");
//	return 0;
//}

//int add(int a, int b)
//{
//	return a + b;
//}
//
//int rev(int a, int b)
//{
//	return a - b;
//}
//
//int main()
//{
//	int a[] = { 1,2,3,4,5 };
//	int b[] = { 2,3,4,5,6 };
//	int(*c)[5] = &a;//数组指针
//	int(*d)(int, int) = &add;//函数指针
//	int* (e[2]) = { &a,&b };//指针数组
//	int (*f[2])(int, int) = { &add,&rev };//函数指针数组
//	printf("%d\n", e[0][1]);
//	printf("%d %d", f[0](1, 1), f[1](1, 1));
//	return 0;
//}

//int* a(void* e1, void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//int main()
//{
//	int arr[] = { 2,5,4,9,8,6,3,1,7 };
//	qsort(arr,(sizeof(arr) / sizeof(arr[0])), sizeof(arr[0]), a);
//
//	return 0;
//}

//int main()
//{
//	char p[] = "abde";
//	printf("%d\n", strlen(&p));
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int n = 3;
//    int a[3];
//    int t = 0, h = 0;
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &a[i]);
//    }
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = i; j < n - i - 1; j++)
//        {
//            if (a[j] < a[j + 1])
//            {
//                t++;
//            }
//        }
//    }
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = i; j < n - i - 1; j++)
//        {
//            if (a[j] > a[j + 1])
//            {
//                h++;
//            }
//        }
//    }
//    if (h == 0 || t == 0)
//    {
//        printf("sorted");
//    }
//    else
//    {
//        printf("unsorted");
//    }
//    return 0;
//}