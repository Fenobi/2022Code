#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//
//	int i = 0;
//	int j = 0;
//	int n;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0;j <= i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//
//}

//int main()
//{
//    int a[5][5];
//    int(*p)[4];
//    p = a;
//    printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//    return 0;
//}

//int main()
//{
//	int i = 0, j = 0;
//	
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= 10;j++)
//		{
//			printf(" ");
//			if (j > 9 - i)
//			{
//				printf("*");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i, j;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 10; j >= i; j--)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int x;
//	scanf("%d", &x);
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < x - i - 1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < x - 1; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (x - i - 1) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char c;
//	int i, k;
//	k = 0;
//	for (i = 0; i < 4; i++)
//	{
//		while (1)
//		{
//			c = getchar();
//			if (c >= '0' && c <= '9')break;
//		}
//		k = k * 10 + c - '0';
//	}
//	printf("%d\n", k);
//}

//int main()
//{
//	int i = 0;
//	int x = 0;
//	for (i = 1;i <= 100; i++)
//	{
//		x = i;
//		if (++x % 2 == 0)
//			if (++x % 3 == 0)
//				if (++x % 7 == 0)
//					printf("%d ", x);
//	}
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	/*fputs("abc\n", pf);
//	fputs("def\n", pf);
//	fputs("hij\t", pf);
//	fputs("klm",pf);*/
//	char arr[20];
//	fgets(arr, 5, pf);
//	printf("%s\n", arr);
//	fgets(arr, 5, pf);
//	printf("%s\n", arr); 
//	fgets(arr, 5, pf);
//	printf("%s\n", arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

struct S
{
	char arr[20];
	int i;
	float f;
};


//int main()
//{
//	struct S s = { "¸¶ÇàÔÆ",20,179.2f };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fprintf(pf, "%s %d %f\n", s.arr, s.i, s.f);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//fprintf(pf, "%s %d %f\n", s.arr, s.i, s.f);
//	fscanf(pf, "%s %d %f", &s.arr, &s.i, &s.f);
//
//	fprintf(stdout,"%s %d %f\n", s.arr, s.i, s.f);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

int main()
{
	int i = 5;
	float* pi = (float*)&i;
	printf("i=%d\n", i);
	printf("pi=%f\n", *pi);
	*pi = 5.0;
	printf("i=%d\n", i);
	printf("pi=%f\n", *pi);
	return;
}