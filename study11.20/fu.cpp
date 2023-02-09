#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>

using namespace std;

void test_vector1()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	for (size_t i = 0; i < v.size(); ++i)
	{
		cout << v[i] << ' ';
	}
	cout << endl;

	vector<int>::iterator it = v.begin();
	while (it != v.end())
	{
		cout << *it << ' ';
		++it;
	}
	cout << endl;

	for (auto e : v)
	{
		cout << e << ' ';
	}
	cout << endl;
	
}

void test_vector2()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	vector<int>::iterator it = v.begin();
	v.erase(v.begin(),it+2);

	for (auto e : v)
	{
		cout << e << ' ';
	}
	cout << endl;
}

void test_vector3()
{
	vector<int> v;

}


//int main()
//{
//	//test_vector1();
//	test_vector2();
//
//	return 0;
//}

//#include <algorithm>
//
//int main()
//{
//	int n = 0;
//	while (cin >> n) {
//		vector<int> arr;
//		arr.resize(3 * n);
//		for (int i = 0; i < 3 * n; ++i)
//			cin >> arr[i];
//		sort(arr.begin(), arr.end());
//		long long sum = 0;
//		for (int i = 3 * n - 2; i >= n; i -= 2)
//			sum += arr[i];
//		cout << sum << endl;
//	}
//	return 0;
//}