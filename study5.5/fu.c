#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//int main()
//{
//	int a = -2222;
//	int b = a << 1;
//	int c = a >> 1;
//	printf("%d %d %d\n", a, b,c);
//	return 0;
//}

//int main()
//{
//	int i, b, k = 0;
//	for (i = 1; i <= 5; i++)
//	{
//		b = i % 2;
//		while (b-- == 0)k++;
//	}
//	printf("%d %d", k, b);
//	return 0;
//}

//int main()
//{
//	int s, i;
//	for (s = 0, i = 1; i < 3; i++, s += i);
//	printf("%d", s);
//}//5

//int main()
//{
//	int i = 10, j = 0;
//	do
//	{
//		j = j + i;
//		i--;
//	} while (i > 2);
//	printf("%d", j);
//	//52
//}

int main()
{
	int n1, n2;
	scanf("%d", &n2);
	while (n2 != 0)
	{
		n1 = n2 % 10;
		n2 = n2 / 10;
		printf("%d", n1);
	}
}