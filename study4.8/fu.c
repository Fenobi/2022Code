#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//void tian_jia(char* p1, char* p2)
//{
//	char* pa1 = p1;
//	char* pa2 = p2;
//	while (*pa1!='\0')
//	{
//		pa1++;
//	}
//	while (*pa2!='\0')
//	{
//		*pa1 = *pa2;
//		pa2++;
//		pa1++;
//	}
//	*pa1 = '\0';
//}
//
//int main()
//{
//	char arr1[10]="abcde";
//	char arr2[5] = "1234";
//	tian_jia(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n <= 100 && n >= 0)
//	{
//		if (n >= 90)
//		{
//			printf("优\n");
//		}
//		else if (n >= 80)
//		{
//			printf("良\n");
//		}
//		else if (n >= 70)
//		{
//			printf("中\n");
//		}
//		else if (n >= 60)
//		{
//			printf("及\n");
//		}
//		else
//		{
//			printf("不及\n");
//		}
//	}
//	else
//	{
//		printf("输入分数不合法\n");
//	}
//	return 0;
//}

#include <stdio.h>

int cmp(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

void swap(char* e1, char* e2, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		char tmp = *e1;
		*e1 = *e2;
		*e2 = tmp;
		e1++;
		e2++;
	}
}

void my_qsort(void* arr, int n, int sz, int(*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	int j = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (cmp((char*)arr + j * sz, (char*)arr + (j + 1) * sz) > 0)
			{
				swap((char*)arr + sz * j, (char*)arr + (j + 1) * sz, sz);
			}
		}
	}
}

int main()
{
	int arr[] = { 1,5,7,2,3,11,4,8 };
	int n = sizeof(arr) / sizeof(arr[0]);
	my_qsort(arr, n, 4, cmp);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

//#include <stdio.h>
//int main()
//{
//    int i=printf("Hello world!");
//    printf("\n");
//    printf("%d", i);
//    return 0;
//}