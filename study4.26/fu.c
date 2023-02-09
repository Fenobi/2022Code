#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int sum = 0;
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			sum += i;
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n%d\n", sum);
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", strlen(arr));//6
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	const char* str1 = "abcdef";
//	const char* str2 = "abc";
//	if (strlen(str2) - strlen(str1) > 0)
//	{
//		printf("str2>str1\n");
//	}
//	else
//	{
//		printf("srt1>str2\n");
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = { 0 };
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//struct Book
//{
//	char name[20];
//	int price;
//	char sex[5];
//	char id[12];
//}b54, b5, b6;//全局
//
//int main()
//{
//	//局部
//	struct Book b1;
//	struct Book b2;
//	struct Book b3;
//
//	return 0;
//}

//struct S	
//{
//	int i;
//	char c;
//};
//
//struct S1
//{
//	int i;
//	struct S s;
//	double d;
//};
//
//int main()
//{
//	struct S1 s = { 3,{1,'a'},3.14 };
//	printf("%d\n", sizeof(s));
//	printf("%d %d %c %.2lf", s.i, s.s.i, s.s.c, s.d);
//	return 0;
//}

//int main()
//{
//	struct S s = { 0 };
//	printf("%d\n", sizeof(s));
//	return 0;
//}

struct S
{
	char ch;
	double d;
	int i;
};

int main()
{
	struct S s = { 0 };
	printf("%d\n", sizeof(s));
	return 0;
}