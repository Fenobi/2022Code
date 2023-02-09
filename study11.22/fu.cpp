#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>



using namespace std;

void Func(const vector<int>& v)
{
	size_t s = v.size();
}

void test1()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.insert(v.begin(),4);
	v.at(1) = v[1];//at和[]的功能相同
	v.reserve(10);
	size_t s = v.size();
	Func(v);
	for (auto e : v)
	{
		cout << e << ' ';
	}
	cout << endl;
}

void test2()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	//v.assign(10, 1);
	vector<int>::iterator it = v.begin();
	it = find(v.begin(), v.end(), 3);
	if (it != v.end())
	{
		//v.insert(it, 30);
	}
	v.erase(it);
	
	for (auto e : v)
	{
		cout << e << ' ';
	}
}

void test3()
{
	vector<int> v;
	v.reserve(5);
	v.resize(3);
	//v.clear();
	cout << v.size() << endl;
	cout << v.capacity() << endl;
	v.shrink_to_fit();
	cout << v.size() << endl;
	cout << v.capacity() << endl;
}

int main()
{
	try
	{
		//test1();
		//test2();
		test3();
	}
	catch (const exception& e)
	{
		cout << e.what() << endl;
	}
	return 0;
}