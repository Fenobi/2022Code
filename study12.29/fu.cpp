#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
using namespace std;
//
//int main()
//{
//    int n;
//    cin >> n;
//    while (n--)
//    {
//        string s;
//        char ch = 0;
//        while ((ch = getchar()) != '\n')
//        {
//            s += ch;
//        }
//        if (s.size() <= 10)
//        {
//            cout << s << '\n';
//        }
//        else
//        {
//            cout << s[0] << s.size() - 2 << s[s.size() - 1] << '\n';
//        }
//    }
//
//}

//#include<stdio.h>
//int main()
//{
//	int A, B, max, min, C, D;
//	printf("请输入两个整数");
//	scanf("%d %d", &A, &B);
//	if (A > B)
//	{
//		max = A; min = B; 
//	}
//	else 
//	{ 
//		max = B; min = A;
//	}
//	while (A % min != 0 || B % min != 0)
//	{ 
//		min--;
//	}
//	printf("最大公约数为%d\n", min);
//
//	return 0;
//}

#include <iostream>
using namespace std;

long long mo(int n)
{
    long long a = 1;
    long long b = 2;
    if (n < 3)
    {
        return n;
    }
    else
    {
        while (n > 2)
        {
            long long t = 2 * b + a;
            a = b % 32767;
            b = t % 32767;
            --n;
        }
        return b % 32767;
    }
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;




        cout << mo(a) << '\n';
    }
    return 0;
}
