#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h> 
//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//	{
//		z = x;
//	}
//	else
//		z = y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("%d\n", max);
//	return 0;
//}


////函数类型的地方写出：void，表示这个数不返回任何值，也不需要返回任何值
//void swap(int *pa, int *pb)
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//int main()
//{
//	int a = 20;
//	int b = 10;
//	printf("交换前：a=%d b=%d\n", a, b);
//	swap(&a, &b);
//	printf("交换后：a=%d b=%d\n", a, b);
//	return 0;
//}




//int main()
//{
//	char ch[] = "as13一定";
//	char arr[] = { 'a','dfe','12','我的','\0'};
//	float a = 12.3l;
//	printf("%s\n", ch);
//	printf("%s\n", arr);
//	printf("%f\n", a);
//	return 0;
//}

//int main()
//{
//	char ch[] = "我是sb";
//	int i = 1;
//	while (i <= 3)
//	{
//		char password[20];
//		scanf("%s", password);
//		if (strcmp(password, ch))
//		{
//			printf("输入错误,请重新输入\n");
//			i++;
//		}
//		else
//		{
//			printf("输入正确\n");
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//
//	return 0;
//}


//#include <string.h>
//#include <windows.h>
//int main()
//{
//	char arr1[] = "abcdefggfedcba";
//	char arr2[] = "**************";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (right >= left)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		
//		Sleep(500);
//		system("cls"); 
//		printf("%s\n", arr2);
//	}
//	return 0;
//
//}