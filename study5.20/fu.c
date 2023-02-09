#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= 101; i+=2)
//	{
//		sum = -sum;
//		sum += i;
//	}
//	
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i, m = 0, n = 0, k = 0;
//	for (i = 9; i <= 11; i++)
//	{
//		switch (i / 10)
//		{
//		case 0:m++; n++; break;
//		case 10:n++; break;
//		default:k++; n++;
//		}
//		printf("%d %d %d", m, n, k);
//		getchar();
//	}
//}

//int main()
//{
//	int x = 10, y = 20, z = 30;
//	if (x > y)
//		z = x; x = y; y = z;
//	printf("%d%d%d", x, y, z);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 4; i<=10;i++)
//	{
//		if (i % 3 == 0)
//		{
//			continue;
//		}
//		printf("%d", i);
//	}
//	getchar();
//	return 0;
//}

//void daozhi(char* arr,int right)
//{
//	int left = 0;
//	
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//	}
//}
//
//int main()
//{
//	char arr[100];
//	while (scanf("%s", &arr) != EOF)
//	{
//		int right = strlen(arr) - 1;
//		daozhi(arr,right);
//		printf("%s ", arr);
//	}
//}