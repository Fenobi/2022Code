#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>

using namespace std;

bool chkParenthesis(string A, int n)
{
    if (n % 2 == 1)
    {
        return false;
    }
    int count = 0;
    for (int i = 0; i < n;)
    {
        if (A[i] == '(')
        {
            ++count;
            ++i;
            if (A[i] == ')')
            {
                --count;
                ++i;
            }
            else
            {
                while (A[i] != ')' && A[i] != '(')
                {
                    ++i;
                }
                if (A[i] == ')')
                {
                    --count;
                    ++i;
                }
            }
        }
        else if (A[i] == ')')
        {
            --count;
            ++i;
        }
        else
        {
            return false;
        }
    }
    if (!count)
    {
        return true;
    }
    return false;
}

int main()
{
    string s("(()())");
    cout << chkParenthesis(s, 6);
    return 0;
}
//int Fi[30] = { 1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,
//				2584,4181,6765,10946,17711,28657,46368,75025,
//				121393,196418,317811,514229,832040,1346269 };
//
//int main()
//{
//	int n;
//	cin >> n;
//	int fmin = Fi[29];
//	for (int i = 0; i < 30; i++)
//	{
//		fmin = min(abs(Fi[i] - n), fmin);
//	}
//	cout << fmin << endl;
//	return 0;
//}

//int main()
//{
//	int n;
//	cin >> n;
//
//	int i = 0;
//	int F = 0;
//	int a = 0;
//	int b = 1;
//	while (F <= 1000000)
//	{
//		//while (++i)
//		{
//			
//			F = a + b;
//			a = b;
//			b = F;
//			printf("%d,", F);
//			n++;
//		}
//	}
//	return 0;
//}