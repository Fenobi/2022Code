#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int number1(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n>>i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//int number1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//}

//int number2(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		count++;
//		n = n & (n - 1);
//	}
//	if (count == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//
//}

//int number2(int n)
//{
//	if (n & (n - 1))
//	{
//		return 0;
//	}
//	return 1;
//}

//int number3(int i,int j)
//{
//	int a = 0;
//	int count = 0;
//	a = (i ^ j);
//	while (a)
//	{
//		a = a & (a - 1);
//		count++;
//	}
//	return count;
//}

//int main()
//{
//	int i = 8;
//	int j = 4;
//	int a = 0;
//	a = number1(i);
//	a = number2(i);
//	a = number3(i,j);
//	printf("%d\n", a);
//	return 0;
//}

int jiecheng(int n)
{
	int i = 0;
	int sum = 1;
	for (i = 1; i <= n; i++)
	{
		sum *= i;
	}
	return sum;
}

int jiecheng_plus(int n)
{
	int i = 0;
	int sum = 0;
	int a = 1;
	for (i = 1; i <= n; i++)
	{
		a *= i;
		sum += a;
	}
	return sum;
}

//int chazhao(int* arr, int len,int n)
//{
//	int right = len - 1;
//	int left = 0;
//	while (right >= left)
//	{
//		int mid = (left + right) / 2;
//		if (n > *(arr+mid))
//		{
//			right = mid - 1;
//		}
//		else if (n < *(arr + mid))
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//}

//int main()
//{
//	int a = 0;
//	int n = 5;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	a = jiecheng(n);
//	a = jiecheng_plus(n);
//	a = chazhao(arr,len,n);
//	printf("%d\n", a);
//	return 0;
//}

//#include <string.h>
//#include <windows.h>
//int main()
//{
//	char arr1[] = "wo dai ni men da";
//	char arr2[] = "****************";
//	int right = strlen(arr1)-1;
//	int left = 0;
//	while (strcmp(arr1, arr2))
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//		Sleep(500);
//		system("cls");
//	}
//	return 0;
//}


//#include <string.h>
//int main()
//{
//	int n = 2;
//	char arr[] = "wdnmd";
//	printf("请输入密码：>");
//	char password[20] = { 0 };
//	scanf("%s", password);
//	int tmp = 0;
//	while (strcmp(password, arr))
//	{
//		printf("输入错误，你还有%d次机会\n", n);
//		printf("请重新输入：>");
//		scanf("%s", password);
//		n--;
//		while ((tmp = getchar()) != '\n')
//		{
//			;
//		}
//		if (n == 0)
//		{
//			printf("登陆失败\n");
//			goto x;
//		}
//	}
//	printf("登陆成功！\n");
//x:
//	return 0;
//}