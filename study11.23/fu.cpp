#define _CRT_SECURE_NO_WARNINGS

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int a(vector<int>& numbers)
//{
//	int len = numbers.size();
//	if (len < 2)
//	{
//		return numbers[0];
//	}
//	sort(numbers.begin(), numbers.end());
//	int tmp = 1;
//	for (int i = 0; i < len - 1; ++i)
//	{
//		if (numbers[i] == numbers[i + 1])
//		{
//			++tmp;
//			if (tmp > len / 2 && len % 2 == 1)
//			{
//				return numbers[i];
//			}
//			else if (tmp >= len / 2 && len % 2 == 0)
//			{
//				return numbers[i];
//			}
//		}
//		else
//		{
//			tmp = 1;
//		}
//	}
//	return numbers[0];
//}
//
//int main()
//{
//	vector<int> v;
//	v.push_back(3);
//	v.push_back(2);
//	v.push_back(3);
//	cout << a(v) << endl;
//	return 0;
//}


#include <iostream>
#include <string>

using namespace std;

int main()
{
    long long m;
    int n;
    string s;
    scanf("%lld %d", &m, &n);
    int num = 0;
    char arr[6] = { 'A','B','C','D','E','F' };
    while (m>0)
    {
        num = m % n;
        if (num >= 10)
        {
            s.push_back(arr[num % 10]);
        }
        else
        {
            s.push_back(num + '0');
        }
        m /= n;
    }
    for (int i = s.size() - 1; i >= 0; --i)
    {
        cout << s[i];
    }

    return 0;
}