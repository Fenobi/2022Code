#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <assert.h>
#include <vector>

using namespace std;

void* my_memcpy(void* dest, const void* stc, size_t num)
{
	assert(dest && stc);
	void* ret = dest;
	while (num--)
	{
		*(char*)ret = *(char*)stc;
		ret = (char*)ret + 1;
		stc = (char*)stc + 1;
	}
	return dest;
}

//int main()
//{
//	char arr[] = "abcd";
//
//	my_memcpy(arr, "efg",3);
//	printf("%s\n", arr);
//	return 0;
//}

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	long long n;
	vector<int> v;
	vector<int>::iterator it= v.begin();
	cin >> n;
	v.resize(n);
	int a = n;
	while (n--)
	{
		int t;
		cin >> t;
		v[a - n - 1] = t;
	}
	long long q = 0;
	int count = 0;
	int r = 0;
	int x = 0;
	while (q != v.size())
	{
		
		for (long long i = q; i < v.size()-1; ++i)
		{
			if (v[i] >= v[i + 1])//µÝ¼õ
			{
				r = 1;

			}
			else
			{
				if (r)
				{
					x = 1;
					r = 0;
					count++;
				}
				q = i;
				break;
			}
		}
		r = 0;
		for (long long i = q; i < v.size()-1; ++i)
		{
			if (v[i] <= v[i + 1])//µÝÔö
			{
				r = 2;
			}
			else
			{
				if (r)
				{
					x = 2;
					r = 0;
					count++;
				}
				q = i;
				break;
			}
		}
		++q;
	}
	if (x == 1 && v[v.size()-1] > v[v.size() - 2])
	{
		count++;
	}
	if (x == 2 && v[v.size()-1] < v[v.size() - 2])
	{
		count++;
	}
	printf("%d\n", count);

}
//#include <string>
//#include <algorithm>
//#include <iostream>
//int main()
//{
//	char arr[101] = { 0 };
//	char ch;
//	int t = 0;
//	while (scanf("%c", &ch) && ch != '\n')
//	{
//		arr[t++] = ch;
//	}
//	string s(arr);
//	string::iterator it = s.begin();
//	reverse(s.begin(), s.end());
//	int begin = 0;
//	int end = 0;
//	for (int i = 0; i < s.size(); ++i)
//	{
//		if (s[i] == ' ')
//		{
//			end = i;
//			reverse(it + begin, it + end);
//			begin = i + 1;
//		}
//	}
//	cout << s << endl;
//	return 0;
//}