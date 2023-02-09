#define _CRT_SECURE_NO_WARNINGS 

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s("12345");
	string s1(3, 'a');
	string s2(s1);
	for (int i = 0; i < s.size(); i++)
	{
		s[i]++;
		cout << s[i] << endl;
	}
	cout << s.at(3) << endl;

	return 0;
}