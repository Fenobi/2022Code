#define _CRT_SECURE_NO_WARNINGS 

#include <iostream>

using namespace std;

//typedef struct Stack
//{
//	int* a;
//	size_t top;
//	size_t capacity;
//
//}stack;
//
//void StackInit(stack* ps);

class Stack
{
private://к╫сп
	int* a;
	int top;
	int capacity;

public://╧╚сп
	void Init(int N = 4)
	{
		top = 0;
		capacity = 0;
	}

	void Push(int x)
	{
		// ...
	}
};


int main()
{
	Stack s;
	s.Init();
	s.Push(1);
	s.Push(2);
	s.Push(3);
	s.Push(4);
	s.Push(5);
	return 0;
}