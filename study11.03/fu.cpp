#define _CRT_SECURE_NO_WARNINGS 

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1("abcdefg");

	s1+="abcd";

	s1.insert(0, "123");
	s1.erase(9,30);
	cout << s1 << endl;
	
	return 0;
}