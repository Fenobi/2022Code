#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

//class Septinary
//{
//public:
//	char* data;
//	int size;
//public:
//	Septinary(int num)
//	{
//		data = new char[100];
//		size = CreateSeptinary(num);
//	}
//
//	int CreateSeptinary(int num)
//	{
//		int i = 0;
//		while (num > 7)
//		{
//			data[i] = numberToChar(num % 8);
//			
//			num /= 8;
//			++i;
//		}
//		data[i] = numberToChar(num);
//		return i;
//	}
//	int numberToChar(int num)
//	{
//		return num + '0';
//	}
//
//	int Returnsize()
//	{
//		return size;
//	}
//};
//int main()
//{
//	int n;
//	cin >> n;
//	Septinary s(n);
//	for (int i = s.Returnsize(); i >= 0; i--)
//	{
//		cout << s.data[i];
//	}
//	return 0;
//}

int findmax(vector<int> v,int m)
{
	int n = v[1];

	for (int i = 1; i < 2 * (m - 1); i += 2)
	{
		int t=max(v[i], v[i + 2]);
		if (n < t)
		{
			n = t;
		}
	}
	return n;
}

int main()
{
	//int n, m;
	//cin >> n >> m;
	//vector<int> v;
	//v.resize(1000);
	//for (int i = 0; i < 2 * m; ++i)
	//	scanf("%d", &v[i]);
	//for (int i = 0; i < 2 * m; i+=2)
	//{
	//	if (v[i] >= n)
	//	{

	//	}
	//}
	/*int i = 0;
	int* pi = &i;
	int& t = i;
	t++;
	cout << (*pi)++;
	return 0;*/
}