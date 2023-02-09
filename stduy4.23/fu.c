#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int CiFang(int n, int k)
//{
//	if (k)
//	{
//		return CiFang(n, k - 1) * n;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	printf("输入两个数：n的k次方\n");
//	scanf("%d %d" ,&n, &k);
//	int t = CiFang(n, k);
//	printf("%d\n", t);
//}

#include <stdio.h>

//int FeBo(int n)
//{
//	if (n > 2)
//	{
//		return FeBo(n - 1) + FeBo(n - 2);
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a = FeBo(n);
//	printf("%d\n", a);
//	return 0;
//}

//int FeBo(int n)
//{
//	int i = 0;
//	int old = 1;
//	int new = 1;
//	i = old + new;
//	while (n > 2)
//	{
//		n--;
//		i = old + new;
//		old = new;
//		new = i;
//	}
//	return i;
//
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = FeBo(n);
//	printf("%d\n", i);
//	return 0;
//}

