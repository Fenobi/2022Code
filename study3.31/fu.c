#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int a = 0;
//	scanf("%d", a);
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}

//int main()
//{
//    int i = 0;//栈区地址是由高到低存放的
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//所以数组下标在增长的过程中可能越界访问到i
//    for (i = 0; i <= 12; i++)//此循环为死循环
//    {
//        arr[i] = 0;//经vs2019调试，i的地址与arr[12]地址相同。
//        printf("hehe\n");
//    }
//    return 0;
//}

//#include <stdio.h>
//#include <assert.h>
//char* my_strcpy(char* dest, const char* src)//二、const为修饰常变量
//{//返回型
//	assert(src != NULL);//一、断言
//
//	char* ret = dest;
//		while (*dest++ = *src++)//2、当位置写反时，程序错误
//		{//既copy了\0，又使得循环停止
//			;
//		}
//	return ret;//返回目标空间的起始地址
//}
//int main()
//{
//	char arr1[20] = "*******************";
//	char arr2[] = "hello!";
//	//使用strcpy时arr2中的\0也会被拷贝
//	my_strcpy(arr1, arr2);//1、当arr2为NULL时，无法进行解引用操作
//	 //链式访问
//	printf("%s\n", arr1);
//	return 0;
//}



int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int n = sizeof(arr) / sizeof(arr[0]);
	JO_paixv(arr, n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}