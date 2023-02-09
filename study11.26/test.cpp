#define _CRT_SECURE_NO_WARNINGS

//#include <iostream>
//#include <algorithm>

//int main()
//{
//	long long a, b;
//	scanf("%lld %lld", &a, &b);
//	if ((b > 0 && a < 0) || (b < 0 && a>0))
//	{
//		a = -a;
//		printf("%lld\n", a);
//	}
//	else
//	{
//		printf("%lld\n", a);
//	}
//	
//	return 0;
//}
//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//
//	vector<int> v1;
//	vector<int> v2;
//	vector<int> v;
//	
//	int t = 0;
//	while (n--)
//	{
//		scanf("%d", &t);
//		v1.push_back(t);
//	}
//	while (m--)
//	{
//		scanf("%d", &t);
//		v2.push_back(t);
//	}
//	reverse(v1.begin(), v1.end());
//	reverse(v2.begin(), v2.end());
//	int len1 = v1.size();
//	int len2 = v2.size();
//	int lenmin = min(len1, len2);
//	int lenmax = max(len1, len2);
//	v.resize(lenmax + 1, 0);
//	int q = 0;
//	if (lenmax == len1)
//	{
//		q = 1;
//	}
//	else
//	{
//		q = 2;
//	}
//	int i = 0;
//	for (i = 0; i < lenmin; ++i)
//	{
//		v[i] += v1[i] + v2[i];
//		while (v[i] >= i+2)
//		{
//			++v[i + 1];
//			v[i] -= (i + 2);
//		}
//	}
//	for (int j = i; j < lenmax; ++j)
//	{
//		if (q == 1)
//		{
//			v[j] += v1[j];
//			while (v[j] >= j + 2)
//			{
//				++v[j + 1];
//				v[j] -= (j + 2);
//			}
//		}
//		else
//		{
//			v[j] += v2[j];
//			while (v[j] >= j + 2)
//			{
//				++v[j + 1];
//				v[j] -= (j + 2);
//			}
//		}
//	}
//	reverse(v.begin(), v.end());
//	for (auto e : v)
//	{
//		cout << e << ' ';
//	}
//	return 0;
//}

//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	int n, m;
//	scanf("%d", &n);
//	
//	int t = 0;
//	vector<int> v;
//	while (n--)
//	{
//		scanf("%d", &t);
//		v.push_back(t);
//	}
//	sort(v.begin(), v.end());
//	int vmin = v[v.size()] - v[0];
//	if (v.size() < 2)
//	{
//		printf("%d", v[0]);
//	}
//	while (n--)
//	{
//
//	}
//
//	return 0;
//}


//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//int main() 
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//
//	vector<int> v1;
//	vector<int> v2;
//
//	int t = 0;
//	while (n--)
//	{
//		scanf("%d", &t);
//		v1.push_back(t);
//	}
//	while (m--)
//	{
//		scanf("%d", &t);
//		v2.push_back(t);
//	}
//
//	vector<int> v;
//	int tmp = 0;
//	int len1 = v1.size();
//	int len2 = v2.size();
//	int vmax = max(len1, len2);
//	int k = 2;
//	reverse(v1.begin(), v1.end());
//	reverse(v2.begin(), v2.end());
//
//	for (int i = 0; i < vmax; ++i) 
//	{
//		int x = i < len1 ? v1[i] : 0;
//		int y = i < len2 ? v2[i] : 0;
//		int temp = (x + y + tmp) % k;
//		tmp = (x + y + tmp) / k;
//		v.push_back(temp);
//		++k;
//	}
//	if (tmp) 
//	{
//		v.push_back(tmp);
//	}
//	reverse(v.begin(), v.end());
//	for (auto e : v) 
//	{
//		cout << e << ' ';
//	}
//
//	return 0;
//}

//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//int main()
//{
//	int q, k;
//	cin >> q;
//	while (q--)
//	{
//
//	}
//}


//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <math.h>
//
//using namespace std;
//int main()
//{
//	long long x = 2;
//	long long t = 4 * pow(10, 18);
//	long long n;
//	scanf("%lld", &n);
//	while ((x * x * 2 - x) < t)
//	{
//		long long sum1 = (x * x * 2 - x);
//		long long sum2 = ((x - 1) * (x - 1) * 2 - (x - 1));
//		long long c = sum1 - sum2 - 1;
//		//int T = c / 4;
//		if (sum1 >= n && sum2 <= n)
//		{
//			if (sum2 == n)
//			{
//				printf("0\n");
//			}
//			n -= sum2;
//			long long r = n / (x - 1);
//			long long p = n % (x - 1);
//			switch (r)
//			{
//			case 1:
//			{
//				if (p == 0)
//				{
//					printf("%lld\n", x - 1);
//				}
//				else
//				{
//					printf("%lld\n", p);
//				}
//				break;
//			}
//			case 2:
//			{
//				if (p == 0)
//				{
//					printf("%lld\n", 0);
//				}
//				else
//				{
//					printf("%lld\n", p);
//				}
//				break;
//			}
//			case 3:
//				if (p == 0)
//				{
//					printf("%lld\n", -(x - 1));
//				}
//				else
//				{
//					printf("%lld\n", p);
//				}
//				break;
//			case 4:
//				if (p == 0)
//				{
//					printf("%lld\n", 0);
//				}
//				else
//				{
//					printf("%lld\n", p);
//				}
//				break;
//			}
//		}
//		//cout << x << ' ';
//		++x;
//	}
//
//
//}
