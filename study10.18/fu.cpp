#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>

using namespace std;

//int main()
//{
//	const char* arr = "abcd";
//	cout << arr << endl;
//	return 0;
//}

//int main()
//{
//	//内置类型（new，delete）
//	//相比malloc/free，除了用法没有其他区别
//	int* p1 = new int;
//	delete p1;
//
//	int* p2 = new int(0);//初始化
//	delete p2;
//
//	int* p3 = new int[10];
//	delete[] p3;
//
//	int* p4 = new int[10] {1, 2, 3, 4};
//	delete[] p4;
//
//	return 0;
//}

//class A
//{
//private:
//	int _a;
//public:
//	A(int a = 0)
//		:_a(a)
//	{
//		_a = a;
//		cout << "A()构造" << endl;
//	}
//
//	~A()
//	{
//		cout << "~A()析构" << endl;
//	}
//};
//
//struct ListNode
//{
//	ListNode* _next;
//	int _val;
//	ListNode(int val = 0)
//		:_next(nullptr)
//		, _val(val)
//	{}
//};
//
//int main()
//{
//	//自定义类型
//	//new和delete相比malloc，除了空间管理，还会调用构造函数和析构函数
//	A* p1 = new A;
//	A* p2 = (A*)malloc(sizeof(A));
//
//	delete p1;
//	free(p2);
//
//	ListNode* n1 = new ListNode(1);
//	ListNode* n2 = new ListNode(2);
//	ListNode* n3 = new ListNode(3);
//	ListNode* n4 = new ListNode(4);
//	n1->_next = n2;
//	n2->_next = n3;
//	n3->_next = n4;
//
//	return 0;
//}

//int main()
//{
//	while (1)
//	{
//		//申请失败返回空指针
//		int* p1 = (int*)malloc(1024*1024);
//		if (p1)
//		{
//			cout << p1 << endl;
//		}
//		else
//		{
//			cout << "申请失败" << endl;
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	try
//	{
//		while (1)
//		{
//			//申请失败抛异常,不需要检查返回值
//			int* p = new int[1024 * 1024 * 1024 * 1024 * 1024];
//			if (p)
//			{
//				cout << (void*)p << endl;
//			}
//			else
//			{
//				cout << "申请失败" << endl;
//				break;
//			}
//		}
//	}
//	catch (exception& e)
//	{
//		cout << e.what() << endl;
//	}
//	return 0;
//}

struct ListNode
{
	ListNode* _next;
	int _val;
	ListNode(int val = 0)
		:_next(nullptr)
		, _val(val)
	{}
};

int main()
{
	ListNode* p1 = new ListNode;
	delete p1;
	return 0;
}
