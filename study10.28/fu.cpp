#define _CRT_SECURE_NO_WARNINGS 

#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;


//bool isPalindrome(string s)
//{
//    int a = 0;
//    for (int i = 0; i < s.size(); ++i)
//    {
//        if (isalpha(s[i]))
//        {
//            s[a] = tolower(s[i]);
//            a++;
//        }
//    }
//    string s1(s);
//    int begin = 0;
//    int end = s1.size() - 1;
//    while (begin <= end)
//    {
//        s1[begin] = s[end];
//        begin++;
//        end--;
//    }
//    if (s1 == s)
//    {
//        return true;
//    }
//    return false;
//}
//
//int main()
//{
//    char arr[] = "A man, a plan, a canal: Panama";
//    isPalindrome(arr);
//    
//    return 0;
//
//
//}

void Rever(string::iterator s, int k)
{
    int begin = 0, end = k;
    while (begin < end)
    {
        s[begin] = s[end];
        begin++;
        end--;
    }
}
string reverseStr(string s, int k)
{
    string s1(s);
    string::iterator it1 = s1.begin();
    int t = 0;
    int i = 0;
    for (i = 0; i < s1.size(); i += 2 * k)
    {
        Rever(it1 + i, k);
        t += 2;
    }
    if (i < t)
    {
        Rever(it1 + i, k);
    }
    else if (t - i < 2 && (t - i) > 0)
    {
        Rever(it1 + i, t - i);
    }
    return s1;
}

int main()
{
    char a[] = "a";
    reverseStr(a, 2);
    cout << a << endl;
    return 0;
}

//int main()
//{
//	char a[] = "1ABCD";
//	string s1(a);
//	
//	//Iterators µü´úÆ÷
//	string::iterator it1 = s1.begin();
//	while (s1.end() != it1)
//	{
//		(*it1)++;
//		++it1;
//	}
//
//	for (int i = 0; i < s1.size(); ++i)
//	{
//		cout << s1[i] << endl;
//	}
//
//
//	return 0;
//}