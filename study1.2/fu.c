#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int sum = 1;
//	int x = 0;
//	scanf("%d", &x);
//	for (i = 1; i <= x; i++)
//	{
//		sum = sum * i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int sum = 1;
//	int a = 1;
//	int x = 0;
//	scanf("%d", &x);
//	for (i = 1; i <= x; i++)
//	{
//		a = a * i;
//		sum = a + sum;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d", sizeof(arr));
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int Mid = (left + right) / 2;
//		if (arr[Mid]<k)
//		{
//			left = Mid + 1;
//		}
//		else if (arr[Mid] > k)
//		{
//			right = Mid + 1;
//		}
//		else
//		{
//			printf("�ҵ�Ŀ�꣬�±�Ϊ��%d\n",Mid);
//			break;
//		}
//	}
//	while (left > right)
//	{
//		printf("��Ŀ��");
//		break;
//	}
//	return 0;
//}
//#include <string.h>
//#include <windows.h>
//int main()
//{
//	char arr1[] = "wo de ming zi jiao xiao fu!!!!";
//	char arr2[] = "******************************";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//		Sleep(500);
//		system("cls");
//	}
//	printf("%s\n", arr2);
//	return 0;
//}


//#include <string.h>
//int main()
//{
//	int i = 1;
//	int a = 0;
//	int password[20] = { 0 };
//	for (i=1; i <= 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("������ȷ\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 4)
//	{
//		printf("��������ʧ�ܣ��˳�");
//	}
//	return 0;
//}

