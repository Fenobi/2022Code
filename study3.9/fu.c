#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int main()
//{
//    int i = 0;
//    int j = 0;
//    int a = 0;
//    int arr[] = { 2,5,8,4,3,6,9,10,1,7 };
//    for (i = 0; i < 9; i++)
//    {
//        for (j = 0; j < 9-i; j++)
//        {
//            if (arr[j] < arr[j + 1])
//            {
//                a = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = a;
//            }
//        }
//    }
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//void paixv(int arr[],int n)
//{
//	int i = 0;
//	int j = 0;
//	int a = 0;
//	for (i = 0; i < n-1; i++)
//	{
//		for (j = 0; j < n-1-i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				a = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = a;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] ={ 2,5,8,4,3,6,9,10,1,7 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//	paixv(arr, n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	*pa = 0;
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(float));
//	return 0;
//}


int main()
{
	int arr[3][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15} };
	int* parr = arr;

	printf("%d\n", *parr);
	return 0;
}