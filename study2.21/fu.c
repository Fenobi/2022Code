#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int n = 2;
//	int arr[10]={0};
//	arr[0] = 5;
//	printf("%d\n", *arr);
//	return 0;
//}

//int main()
//{
//	int arr1[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int arr2[3][4] = { {1,2}, {3, 4}, {5, 6} };
//	return 0;
//}

void shengxv(int arr[], int sz)
{
	int n = 0;
	int flag = 1;
	for (n = 0; n < sz; n++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - n; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag == 0)
		{
			break;
		}
	}
}


int main()
{
	int arr[] = { 8,7,5,9,6,1,2,4,3,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	shengxv(arr, sz);
	return 0;
}

//int my_strlen(char *arr)
//{
//	int n = 0;
//	while (*arr != '\0')
//	{
//		n++;
//		arr++;
//	}
//	return n;
//}
//void nixiang(char* arr)
//{
//	char tmp = *arr;
//	int sz = my_strlen(arr);
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	nixiang(arr);
//	printf("%s\n",arr);
//	return 0;
//}