#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

//int main()
//{
//	int i = 0;
//	while (i <= 10000)
//	{
//		int num = 0;
//		int j = i;
//		while (j > 0)
//		{
//			j /= 10;
//			num++;
//		}
//		if ((i * i)%(int)pow(10,num) == i)
//		{
//			cout << i << ' ';
//		}
//		i++;
//	}
//	return 0;
//}

int main()
{
	int n;
	cin >> n;
	int count = 0;
	while (n--)
	{
		int i = sqrt(n);
		int j = 2;
		for (; j <= i+1; j++)
		{
			if (n % j == 0)
			{
				break;
			}
		}
		if (j == i + 2)
		{
			count++;
		}
	}
	return 0;
}