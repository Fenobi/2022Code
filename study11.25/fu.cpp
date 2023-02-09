#define _CRT_SECURE_NO_WARNINGS
//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//    string s;
//    char ch = 0;
//    while ((ch = getchar()) != '\n')
//    {
//        s.push_back(ch);
//    }
//    iterator
//    string s1, s2;
//    for (int i = 0; i <= s.size(); ++i)
//    {
//        if (s[i] >= '0' && s[i] <= '9' && i < s.size())
//        {
//            s1.push_back(s[i]);
//        }
//        else
//        {
//            if (s1.size() > s2.size())
//            {
//                s2 = s1;
//            }
//            s1.clear();
//        }
//    }
//    cout << s2 << endl;
//}

//#include <iostream>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//bool huiwen(string& s)
//{
//    string tmp(s);
//    reverse(tmp.begin(), tmp.end());
//    return tmp == s;
//}
//
//int main()
//{
//    string s1;
//    //s1.resize(101);
//    char ch = 0;
//    while ((ch = getchar()) != '\n')
//    {
//        s1.push_back(ch);
//    }
//    string s2;
//    //s2.resize(101);
//    ch =0;
//    while ((ch = getchar()) != '\n')
//    {
//        s2.push_back(ch);
//    }
//    int len = s1.size();
//    string::iterator it = s1.begin();
//    int count = 0;
//    for (int i = 0; i <= len; ++i)
//    {
//        string s(s1);
//        s.insert(i, s2);
//        if (huiwen(s))
//        {
//            ++count;
//        }
//    }
//    cout << count << endl;
//}

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//    vector<int> v;
//    int n;
//    int t;
//    long long sum1 = 0;
//    long long sum2 = 0;
//    scanf("%d", &n);
//    while (n--)
//    {
//        scanf("%d", &t);
//        v.push_back(t);
//    }
//    for (int i = 0; i <= v.size(); ++i)
//    {
//        if (i < v.size() && v[i] > 0)
//        {
//            sum1 += v[i];
//        }
//        else
//        {
//            if (sum1 > sum2)
//            {
//                sum2 = sum1;
//            }
//            sum1 = 0;
//        }
//    }
//    cout << sum2 << endl;
//
//}

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v;
    int t;
    int sum1 = 0;
    int sum2 = 0;
    int n;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &t);
        v.push_back(t);
    }
    int count = 0;
    int max1 = v[0];
    for (int i = 0; i < v.size(); ++i)
    {
        if (v[i] < 0)
        {
            ++count;
            max1 = max(v[i], max1);
            if (count == v.size())
            {
                cout << max1 << endl;
                return 0;
            }
        }
        sum1 = max(sum1 + v[i], v[i]);
        sum2 = max(sum2, sum1);
    }
    cout << sum2 << endl;
    return 0;
}