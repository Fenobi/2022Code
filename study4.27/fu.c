#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>

//void reverse_string(char* string)
//{
//	char* left = string;
//	char* right = string + (my_strlen(string) - 1);
//	char tmp = *left;
//	*left = *right;
//	*right = tmp;
//	if (*left == *right || *(left + 1) == *right)
//	{
//		return;
//	}
//	else
//	{
//		reverse_string(string + 1);
//	}
//}
//
//
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(++str);
//	else
//		return 0;
//}

//int my_strlen(char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//}
//
//
//void reverse_string(char* string)
//{
//	int len = my_strlen(string);
//	if (len <= 1)
//	{
//		return;
//	}
//	else
//	{
//		char temp = string[0];
//			string[0] = string[len - 1];
//			string[len - 1] = '\0';
//			reverse_string(string + 1);
//			string[len - 1] = temp;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//#include <stdio.h>
//#include <time.h>
//
//void menu1()
//{
//	printf("------原神抽卡模拟器--------\n");
//	printf("****************************\n");
//	printf("********* 1、开始 **********\n");
//	printf("********* 0、结束 **********\n");
//	printf("****************************\n");
//	printf("------原神抽卡模拟器--------\n\n");
//}
//
//void menu2()
//{
//	printf("--------请选择抽奖池--------\n");
//	printf("******* 1、限定池 **********\n");
//	printf("******* 2、武器池 **********\n");
//	printf("******* 3、常驻池 **********\n");
//	printf("--------请选择抽奖池--------\n");
//}
//
//void menu3()
//{
//
//}
//void game(int n)
//{
//	;
//}
//
//
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)(time(NULL)));
//	do
//	{
//		menu1();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//			menu2();
//		case 1:
//		{
//			game(n);
//			break;
//		}
//		case 0:
//		{
//			printf("结束\n");
//			break;
//		}
//		}
//	} while (input);
//	return 0;
//}

//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}

//#include <stdio.h>
//int fib(int n)
//{
//    if (n <= 2)
//        return n;
//    else
//        return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    printf("%d\n", fib(n));
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int arr[50] = { 0 };
//    int m = 0;
//    //输入数据
//    scanf("%d", &n);
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    scanf("%d", &m);
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] != m)
//        {
//            arr[j++] = arr[i];
//        }
//    }
//    for (i = 0; i < j; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int arr[100] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int max = arr[0];
//    int min = arr[0];
//    for (i = 1; i < n; i++)
//    {
//        if (max < arr[i])
//        {
//            max = arr[i];
//        }
//    }
//    for (i = 1; i < n; i++)
//    {
//        if (min > arr[i])
//        {
//            min = arr[i];
//        }
//    }
//    printf("%d", (max - min));
//    return 0;
//}

//#include <stdio.h>
//#include <ctype.h>
//
//int main()
//{
//    char ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        if (islower(ch))
//        {
//            ch = toupper(ch);
//        }
//        else
//        {
//            ch = tolower(ch);
//        }
//        putchar(ch);
//        printf("\n");
//        int n = getchar();
//    }
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int arr[5] = { 0 };
//    for (int i = 0; i < 3; i++)
//    {
//        scanf("%d", arr[i]);
//    }
//    int max = arr[0];
//    for (int i = 1; i < 3; i++)
//    {
//        if (max < arr[i])
//        {
//            max = arr[i];
//        }
//    }
//    printf("%d", max);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int a = 10000;
//    for (a = 10000; a <= 99999; a++)
//    {
//        if (a = ((a % 10000) * (a - (a % 10000)))+ ((a % 1000) * (a - (a % 1000))) + ((a % 100) * (a - (a % 100))) + ((a % 10) * (a - (a % 10))))
//        {
//            printf("%d", a);
//        }
//    }
//    return 0;
//}