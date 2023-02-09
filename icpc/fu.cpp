#define _CRT_SECURE_NO_WARNINGS 

#include <iostream>

using namespace std;

class Time
{
public:
	Time(int hour,int minute,int second)
		:_hour(hour)
		,_minute(minute)
		,_second(second)
	{
		_hour = hour;
		_minute = minute;
		_second = second;
	}
	bool operator!=(const Time& t)
	{
		if (_hour == t._hour&& _minute == t._minute&& _second == t._second)
		{
			return false;
		}
		return true;
	}
	Time operator+=(int i)
	{
		_second += i;
		while (_second >= 60)
		{
			_minute++;
			_second -= 60;
			while (_minute >= 60)
			{
				_hour++;
				_minute -= 60;
			}
			
		}
		return *this;
	}

	int operator-(const Time& t)
	{
		Time temp(t);
		int count = 0;
		while (*this != temp)
		{
			count++;
			temp += 1;
		}
		return count;
	}

private:
	int _hour;
	int _minute;
	int _second;
};

//int main()
//{
//	int h1, m1, s1;
//	int h2, m2, s2;
//	cin >> h1 >> m1 >> s1;
//	cin >> h2 >> m2 >> s2;
//	Time t1(h1, m1, s1);
//	Time t2(h2, m2, s2);
//	int time = t1 - t2;
//	if (time > 43200)
//	{
//		time = 43200 * 2 - time;
//	}
//	cout << time << endl;
//	return 0;
//}

int main()
{
	int h1, m1, s1;
	int h2, m2, s2;
	cin >> h1 >> m1 >> s1;
	cin >> h2 >> m2 >> s2;
	int time = abs((m1 - m2) * 60) + abs((s1 - s2)) + abs((h1 - h2) * 3600);
	if (time > 43200)
	{
		time = 43200 * 2 - time;
	}
	cout << time << endl;
	return 0;
}