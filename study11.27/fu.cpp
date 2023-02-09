#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
using namespace std;

int StrToInt(string str)
{
	int len = str.size();
	int tmp = 1;
	int k = 0;
	int num = 0;
	for (int i = len-1; i >=0; --i)
	{
		if (i == 0 && str[i] == '-')
		{
			tmp = -1;
			str[i] = '0';
		}
		else if(i==0&&str[i]=='+')
		{
			str[i] = '0';
		}
		if (str[i] >= '0' && str[i] <= '9')
		{
			num += pow(10, k) * (str[i] - '0');
			++k;
		}
		else
		{
			return 0;
		}
	}
	return tmp * num;
}

int main()
{
	string s("+2147483647");
	cout<<StrToInt(s);
	return 0;
}