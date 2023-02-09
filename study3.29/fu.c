#define _CRT_SECURE_NO_WARNINGS

//#define PI 3.1415926
#include <stdio.h>
//int main()
//{
//	float r, h, c, s, v;
//	printf("请分别输入半径和高：>");
//	scanf("%f %f", &r, &h);
//	c = 2 * PI * r;
//	s = c * h + 2 * PI * r * r;
//	v = PI * r * r * h;
//	printf("该圆柱的底面周长=%.2f，表面积=%.2f，体积=%.2f", c, s, v);
//	return 0;
//}

//int main()
//{
//	int a, b, c = -1,s;
//	a = b = c;
//	s=(++a && ++b && ++c);
//	printf("%d %d %d %d\n", a, b, c, s);
//	/*s = (++a && ++b || ++c);
//	printf("%d %d %d %d\n", a, b, c, s);*/
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a,&n);
//	int Sn = 0;
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = 10 * ret + a;
//		Sn += ret;
//	}
//	printf("%d\n", Sn);
//	return 0;
//}

//void print(int (*arr)[3], int n,int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *((*(arr + i)) + j));
//		}
//	}
//}
//
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	print(arr, 3, 3);
//	return 0;
//}

//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 1000000000; i++)
//	{
//		int n = 0;
//		int tmp1 = i;
//		while (tmp1)//确定位数n
//		{
//			tmp1 /= 10;
//			n++;
//		}
//		int tmp2 = i;
//		int sum = 0;
//		while (tmp2)//计算
//		{
//			sum += pow(tmp2 % 10, n);
//			tmp2 /= 10;
//		}
//		if (sum == i)//判断
//		{
//			printf("水仙花数=%d\n", i);
//		}
//	}
//	return 0;
//}

//#include <assert.h>
//void nixv(char* arr)
//{
//	assert(arr);
//
//	char tmp = *arr;
//	int right = strlen(arr) - 1;
////  char* right=arr+strlen(arr)-1;
//	int left = 0;
////	char* left = 0;
//	while (right > left)
//	{
//		tmp = *(arr + left);
//		*(arr + left) = *(arr + right);
//		*(arr + right) = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	nixv(arr);//"fedcba"
//	printf("%s\n", arr);
//	return 0;
//}

//void lingxin(int x)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		//打印一行
//		for (j = 0; j < x - i-1; j++)//打印空格
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
//		for (j = 0; j < 2 * (x - i - 1)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	lingxin(a);
//	return 0;
//}

//int heshui(int n)//喝汽水：一个汽水1元，两个空瓶换一瓶，先有n元，可喝多少瓶
//{// =return 2*n-1
//	if (n>=2)
//	{
//		return heshui(n / 2) + n + n % 2;
//	}
//}
//
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int a = heshui(money);
//	printf("%d\n", a);
//	return 0;
//}



