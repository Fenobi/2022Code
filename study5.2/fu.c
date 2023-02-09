#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//char* GetMemory(char* p)
//{
//	return p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}

//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//}

//char* GetMemory(void)
//{
//	//char p[] = "hello world";
//	return "hello world";
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}

//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	free(str);
//	str = NULL;
//}

//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	str = NULL;
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main()
//{
//	//Test();
//	return 0;
//}

//struct S1
//{
//	int i;
//	char arr[];
//};
//
//struct S2
//{
//	int i;
//	int arr[0];
//};
//
//int main()
//{
//	struct S2* ps1 = malloc(sizeof(struct S1) + 10 * sizeof(char));
//	struct S2* ps2 = malloc(sizeof(struct S2) + 10 * sizeof(int));
//	ps1->i = 10;
//	ps2->i = 10;
//	
//	//增加
//	struct S2* ptr = realloc(ps2, sizeof(struct S2) + 20 * sizeof(int));
//	if (ptr != NULL)
//	{
//		ps2 = ptr;
//	}
//	for (int n = 0; n < 20; n++)
//	{
//		//ps1->arr[n] = 'a' + n;
//		ps2->arr[n] = n;
//	}
//	for (int n = 0; n < 20; n++)
//	{
//		printf("%d ", ps2->arr[n]);
//	}
//	return 0;
//}

//int main()
//{
//    int i = 0;
//    int j = 0;
//    int n;
//    while (scanf("%d", &n) != EOF)
//    {
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < n; j++)
//            {
//                if (i == j || (j == n - i - 1) || (i == n - j - 1))
//				//if (i == j ||(i+j)==n-1)
//                {
//                    printf("*");
//                }
//                else
//                {
//                    printf(" ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//int main()
//{
//    int arr[7] = { 0 };
//    int n = 7;
//    int i = 0;
//    int j = 0;
//    while (scanf("%d", &arr[0]) != EOF)
//    {
//        for (i = 0; i < n; i++)
//        {
//            scanf("%d", &arr[i]);
//        }
//        int max = arr[0];
//        int min = arr[0];
//        for (j = 1; j < n; j++)
//        {
//            if (max < arr[j])
//            {
//                max = arr[j];
//            }
//            if (min > arr[j])
//            {
//                min = arr[j];
//            }
//        }
//        int sum = 0;
//        for (i = 0; i < n; i++)
//        {
//            sum += arr[i];
//        }
//        printf("%.2f\n", (float)((sum - min - max) / 5.0));
//    }
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int year = 0;
//    int mon = 0;
//    while ((scanf("%d %d", &year, &mon) != EOF))
//    {
//        if (year % 100 != 0 && year % 4 == 0 || year % 400 == 0)
//        {
//            if (mon == 2)
//            {
//                printf("29");
//            }
//            else if (mon == 1 || mon == 3 || mon == 5 || mon == 7 || mon == 8 || mon == 10 || mon == 12)
//            {
//                printf("31");
//            }
//            else
//            {
//                printf("30");
//            }
//        }
//        else
//        {
//            if (mon == 2)
//            {
//                printf("28");
//            }
//            else if (mon == 1 || mon == 3 || mon == 5 || mon == 7 || mon == 8 || mon == 10 || mon == 12)
//            {
//                printf("31");
//            }
//            else
//            {
//                printf("30");
//            }
//        }
//    }
//    return 0;
//}

//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int arr[50];
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    scanf("%d", &arr[n]);
//    int j = 0;
//    for (i = 0; i <= n; i++)
//    {
//        for (j = 0; i < n - j; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                int tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//    for (i = 0; i <= n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int arr[50];
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int t;
//    scanf("%d", &t);
//    for (i = n - 1; i >= 0; i--)
//    {
//        if (t < arr[i])
//        {
//            arr[i + 1] = arr[i];
//        }
//        else
//        {
//            arr[i + 1] = t;
//            break;
//        }
//    }
//    arr[i+1] = t;    
//    for (i = 0; i <= n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}


//int main()
//{
//	FILE* pf = fopen("abc.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//关闭文件
//	fclose(pf);
//
//	pf = NULL;
//
//	return 0;
//}

int main()
{

	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("pf");
		return 1;
	}

	//写数据
	/*fputc('K', pf);
	fputc('e', pf);
	fputc('n', pf);
	fputc('o', pf);
	fputc('b', pf);
	fputc('i', pf);*/

	//读文件
	//fgetc从标准输入流输入信息
	int ret = fgetc(stdin);

	printf("%c\n",ret);

	fclose(pf);
	pf = NULL;
	return 0;

}

  