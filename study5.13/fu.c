#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//#define PRINT(X,FORMAT) printf("wo jiao fu qingyun "#X" TO BE ABC IS "FORMAT"",X)
//
//int main()
//{
//	char ha = "a";
//	PRINT(ha,"%s");
//	return 0;
//}


//#define MALLOC(num,type) (type*)malloc(num*sizeof(type))
//
//int main()
//{
//
//	int* p = MALLOC(10, int);
//	return 0;
//}


//#define MAX(X,Y) X>Y?X:Y
//int main()
//{
//#ifdef MAX
//	printf("%d", MAX(5, 10));
//#endif
//
//	return 0;
//}


//int five(int n)
//{
//	if (n % 5 == 0)
//	{
//		five(n / 5);
//	}
//	else
//	{
//		if (n == 1)
//		{
//			return 1;
//		}
//		else
//		{
//			return 0;
//		}
//	}
//}
//
//int three(int n)
//{
//	if (n % 3 == 0)
//	{
//		three(n / 3);
//	}
//	else
//	{
//		return five(n);
//	}
//}
//
//
//int tow(int n)
//{
//	if (n % 2 == 0)
//	{
//		tow(n / 2);
//	}
//	else
//	{
//		return three(n);
//	}
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		if (tow(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int five(int n)
//{
//	if (n % 5 == 0)
//	{
//		five(n / 5);
//	}
//	if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int three(int n)
//{
//	if (n % 3 == 0)
//	{
//		three(n / 3);
//	}
//	return five(n);
//}
//
//
//int tow(int n)
//{
//	if (n % 2 == 0)
//	{
//		tow(n / 2);
//	}
//	return three(n);
//}


//int a(int n)
//{
//	if (n == 0)
//	{
//		return 0;
//	}
//	while (n % 2 == 0)
//	{
//		n /= 2;
//	}
//	while (n % 3 == 0)
//	{
//		n /= 3;
//	}
//	while (n % 5 == 0)
//	{
//		n /= 5;
//	}
//	if (n == 1)
//	{
//		return n;
//	}
//	else
//	{
//		return 0;
//	}
//}

//int five(int n)
//{
//	if (n % 5 == 0)
//	{
//
//		return five(n / 5);
//	}
//	else
//	{
//		if (n == 1)
//		{
//			return 1;
//		}
//		else
//		{
//			return 0;
//		}
//	}
//}
//
//int three(int n)
//{
//	if (n % 3 == 0)
//	{
//		return three(n / 3);
//	}
//	else
//	{
//		return five(n);
//	}
//}


//int tow(int n)
//{
//	if (n % 2 == 0)
//	{
//		return tow(n / 2);
//	}
//	else
//	{
//		return three(n);
//	}
//}

//int a(int n, int* i)
//{
//	int t = n;
//	while (n % 2 == 0)
//	{
//		n /= 2;
//	}
//	while (n % 3 == 0)
//	{
//		n /= 3;
//	}
//	while (n % 5 == 0)
//	{
//		n /= 5;
//	}
//	if (n == 1)
//	{
//		(*i)--;
//		return t;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int n = 1;
//	int b = 0;
//	for (n = 1; n <= 2147483646; n++)
//	{
//		if (i)
//		{
//			b = a(n, &i);
//		}
//	}
//	printf("%d\n", b);
//	
//	return 0;
//}

//int main()
//{
//	int x, y;
//	scanf("%d", &x);
//	switch (x / 10)
//	{
//		case 1:
//		{
//			y = 1;
//		}
//		case 2:
//		{
//			y = 2;
//		}
//		case 3:
//		{
//			y = 3;
//		}
//		case 4:
//		{
//			y = 4;
//		}
//		case 5:
//		{
//			y = 5;
//			break;
//		}
//		default:
//		{
//			y = 6;
//			break;
//		}
//	}
//	printf("x=%d,y=%d\n", x, y);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0; 
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a + b > c && b + c > a)//判断是否为三角形
//	{
//		if (a == b && a == c)
//		{
//			printf("这个是等边三角形\n");
//		}
//		else if (a == b || a == c)
//		{
//			printf("这个是等腰三角形\n");
//		}
//		else
//		{
//			printf("这个是一般三角形\n");
//		}
//	}
//	else
//	{
//		printf("这个不是三角形\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	int x = 0;
//	int y = 10;
//	scanf("%d", &x);
//	if (x > y)//if嵌套
//	{
//		if (x * 10 == y)
//		{
//			printf("%d\n", x);
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int x = 0;
//	int y = 10;
//	scanf("%d", &x);
//	if (x > y)//if-else语句
//	{
//		printf("%d\n", x);
//	}
//	else
//	{
//		printf("%d\n", y);
//	}
//	return 0;
//}
//
//int main()
//{
//	int x = 0;
//	int y = 10;
//	scanf("%d", &x);
//	switch (x)//switch语句
//	{
//	case 1:
//	{
//		printf("%d\n", y * 10);
//		break;
//	}
//	default:
//	{
//		printf("%d\n", y);
//		break;
//	}
//	}
//	return 0;
//}
//
//
//int main()//回文数
//{
//    int num, m = 0, s = 0, n;
//
//    printf("请输入一个正整数：\n");
//    scanf("%d", &num);
//
//    s = num;
//    while (s != 0)
//    {
//        n = s % 10;   //n是s的末位数
//        m = m * 10 + n; //把s的末位数放到m的末位
//        s = s / 10;  //去掉末位数的新s
//    }
//
//    if (num == m)
//    {
//        printf("%d 是回文数\n", num);
//    }
//    else
//    {
//        printf("%d 不是回文数\n", num);
//    }
//    return 0;
//}

//int k = 0;
//void fun(int m)
//{
//	m += k;
//	k += m;
//	printf("%d %d\n", m, k++);
//}
//
//int main()
//{
//	int i = 4;
//	fun(i++);
//	printf("%d %d\n", i, k);
//	return 0;
//}


//int main()
//{
//	int  i = 0;
//	int sum = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		sum += i * i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int qishui(int n)
//{
//	if (n)
//	{
//		return qishui(n / 2) + n;
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
//	printf("%d\n",qishui(n));
//	return 0;
//}