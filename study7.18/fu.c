#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stddef.h>

//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//#define OFFSETOF(type,m_name) (size_t)&(((type*)0)->m_name)
////首先((type*)0)的意思是在地址0处有一个结构体变量
////然后((type*)0)->m_name的意思是通过结构体找到成员
////之后将成员的地址找到，最后后强制转换为size_t类型，此时就是该成员的偏移量
//
//
//int main()
//{
//	struct S s = { 0 };
//	printf("%d\n", OFFSETOF(struct S, c1));
//	printf("%d\n", OFFSETOF(struct S, i));
//	printf("%d\n", OFFSETOF(struct S, c2));
//	return 0;
//}

//#define SWAP(X) ((X & 0xaaaaaaaa) >> 1) ^ ((X & 0x55555555) << 1)
//
//int swap(int x)
//{
//	int a = x & 0xaaaaaaaa;
//	int b = x & 0x55555555;
//	x = (a >> 1) ^ (b << 1);
//	return x;
//	
//}
//
//int main()
//{
//	int a = 41;
//	printf("%d\n", SWAP(a));
//	printf("%d\n", swap(a));
//	
//	return 0;
//}