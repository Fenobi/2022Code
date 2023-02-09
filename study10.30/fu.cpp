#define _CRT_SECURE_NO_WARNINGS 

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1("abcd");
	string::reverse_iterator rit1 = s1.rbegin();
	while (rit1 != s1.rend())
	{
		cout << *rit1 << endl;
		rit1++;
	}
	cout << endl;

	string s2("hello world");
	s2.resize(5);
	cout << s2.size() << endl;
	cout << s2.capacity() << endl;
	cout << s2 << endl;
	cout << endl;
	string s3("hello world");
	s3.resize(14, 'x');
	cout << s3.size() << endl;
	cout << s3.capacity() << endl;
	cout << s3 << endl;
	cout << endl;
	string s4("1234");
	s4 += "567";
	s4.append("8910");
	cout << s4 << endl;

	return 0;
}