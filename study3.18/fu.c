#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	int a = 5;
//	int* pa = &a;
//	int* parr = arr;
//	printf("%d\n", *pa);
//	printf("%d\n", *(arr+1));
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a=0, b=0,c=0;
//	int x=0;
//	scanf("%d%d%d", &a,&b,&c);
//	printf("a=%d b=%d c=%d", a,b,c);
//	return 0;
//}

//#include <stdlib.h>
//
//int main()
//{
//	float r, c, s, m = 3.14;
//	printf("请输入圆的半径：\n");
//	scanf("%f", &r);
//	c = 2 * m * r;
//	s = m * r * r;
//	printf("圆的周长是：%.2f\n 圆的面积是：%.2f\n", c, s);
//	getchar();
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    float y, x,a;
//    for (y = 1.5f; y > -1.5f; y -= 0.1f)
//    {
//        for (x = -1.5f; x < 1.5f; x += 0.05f)
//        {
//            a = x * x + y * y - 1;
//            putchar(a * a * a - x * x * y * y * y <= 0.0f ? '*' : ' ');
//        }
//        putchar('\n');
//    }
//    return 0;
//}

//#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//#define I 20
//#define R 340
//
//int main(void)
//{
//    int i, j, e;
//    int a;
//    long time;
//    system("title 爱心");
//    for (i = 1, a = I; i < I / 2; i++, a--)
//    {
//        for (j = (int)(I - sqrt(I * I - (a - i) * (a - i))); j > 0; j--)
//            printf(" ");
//        for (e = 1; e <= 2 * sqrt(I * I - (a - i) * (a - i)); e++)
//            printf("\3");
//        for (j = (int)(2 * (I - sqrt(I * I - (a - i) * (a - i)))); j > 0; j--)
//            printf(" ");
//        for (e = 1; e <= 2 * sqrt(I * I - (a - i) * (a - i)); e++)
//            printf("\3");
//        printf("\n");
//    }
//    for (i = 1; i < 80; i++)
//    {
//        if (i == 35)
//        {
//            printf(" 编程俱乐部 ");
//            i += 30;
//        }
//        printf("\3");
//    }
//    printf("\n");
//    for (i = 1; i <= R / 2; i++)
//    {
//        if (i % 2 || i % 3)
//            continue;
//        for (j = (int)(R - sqrt(R * R - i * i)); j > 0; j--)
//            printf(" ");
//        for (e = 1; e <= 2 * (sqrt(R * R - i * i) - (R - 2 * I)); e++)
//            printf("\3");
//        printf("\n");
//    }
//
//    for (;;)
//    {
//        system("color a");
//        for (time = 0; time < 99999999; time++);
//
//        system("color b");
//        for (time = 0; time < 99999999; time++);
//
//        system("color c");
//        for (time = 0; time < 99999999; time++);
//
//        system("color d");
//        for (time = 0; time < 99999999; time++);
//
//        system("color e");
//        for (time = 0; time < 99999999; time++);
//
//        system("color f");
//        for (time = 0; time < 99999999; time++);
//
//        system("color 0");
//        for (time = 0; time < 99999999; time++);
//
//        system("color 1");
//        for (time = 0; time < 99999999; time++);
//
//        system("color 2");
//        for (time = 0; time < 99999999; time++);
//
//        system("color 3");
//        for (time = 0; time < 99999999; time++);
//
//        system("color 4");
//        for (time = 0; time < 99999999; time++);
//
//        system("color 5");
//        for (time = 0; time < 99999999; time++);
//
//        system("color 6");
//        for (time = 0; time < 99999999; time++);
//
//        system("color 7");
//        for (time = 0; time < 99999999; time++);
//
//        system("color 8");
//        for (time = 0; time < 99999999; time++);
//
//        system("color 9");
//        for (time = 0; time < 99999999; time++);
//
//    }
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,11};
//	int n = 0;
//	scanf("%d", &n);
//	int left = 0;
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int right = len - 1;
//	int mid = 0;
//	while (right > left)
//	{
//		mid = (left + right) / 2;
//		if (n < arr[mid])
//		{
//			right = mid + 1;
//		}
//		else if (n > arr[mid])
//		{
//			left = mid - 1;
//		}
//		else
//		{
//			printf("%d\n", mid);
//			break;
//		}
//	}
//	return 0;
//}

//void my_strcpy(char* arr1, char* arr2)
//{
//	while (*arr1++ = *arr2++)//既copy了\0，又使得循环停止
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[20] = "*******************";
//	char arr2[] = "hello!";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}