#pragma once

#include <iostream>
#include <list>
#include <vector>
#include <string>
#include <algorithm>
#include <assert.h>
using namespace std;

namespace fu
{
	template<class T>
	struct list_node
	{
		list_node* _prve;
		list_node* _next;
		T _data;

		list_node(const T& x)
			:_prve(nullptr),
			_next(nullptr),
			_data(x)
		{}
	};

	template<class T>
	struct __list_iterator
	{
		typedef list_node<T> node;
		node* _pnode;

		__list_iterator(node* p)
			:_pnode(p)
		{}

		T& operator*()
		{
			return _pnode->_data;
		}

		__list_iterator<T>& operator++()
		{
			_pnode = _pnode->_next;
			return *this;
		}

		__list_iterator<T>& operator--()
		{
			_pnode = _pnode->_prve;
			return *this;
		}

		bool operator!=(const __list_iterator<T>& it)
		{
			return _pnode != it._pnode;
		}
	};


	template<class T>
	class list
	{
		typedef list_node<T> node;
	public:
		typedef __list_iterator<T> iterator;

		list(const list<T>& lt)
		{
			empty_initialize();

			for (const auto& e : lt)
			{
				push_back(e);
			}
		}

		void empty_initialize()
		{
			_head = new node(T());
			_head->_next = _head;
			_head->_prev = _head;
		}

		list()
		{
			empty_initialize();
		}

		~list()
		{
			clear();

			delete _head;
			_head = nullptr;
		}

		void clear()
		{
			iterator it = begin();
			while (it != end())
			{
				it = erase(it);
			}
		}

		iterator begin() const
		{
			return iterator(_head->_next);
		}

		iterator end() const
		{
			return iterator(_head);
		}

		iterator begin()
		{
			return iterator(_head->_next);
		}

		iterator end()
		{
			return iterator(_head);
		}

		size_t size()
		{
			size_t count = 0;
			list<T>::iterator it = this->begin();
			while (it != this->end())
			{
				++count;
				++it;
			}
			return count;
		}

		bool empty()
		{
			return !this->size();
		}

		T& front()
		{
			return _head->_next->_data;
		}

		T& back()
		{
			return _head->_prve->_data;
		}

		void resize(size_t size)
		{
			int len = this->size() - size;
			if (len > 0)
			{
				while (len--)
				{
					this->pop_back();
				}
			}
			else
			{
				while (len++)
				{
					this->push_back(T());
				}
			}
		}

		void push_back(const T& x)
		{
			/*node* newnode = new node(x);
			node* tail = _head->_prve;
			tail->_next = newnode;
			newnode->_next = _head;
			newnode->_prve = tail;
			_head->_prve = newnode;*/
			insert(begin(), x);
		}

		void push_front(const T& x)
		{
			/*node* newnode = new node(T(x));
			node* head = _head->_next;
			head->_prve = newnode;
			newnode->_prve = _head;
			newnode->_next = head;
			_head->_next = newnode;*/
			insert(end(), x);
		}

		void pop_back()
		{
			/*assert(this->size());
			node* tail = _head->_prve;
			node* newtail = tail->_prve;
			_head->_prve = newtail;
			newtail->_next = _head;
			delete tail;*/
			erase(end());
		}

		void pop_front()
		{
			/*assert(this->size());
			node* head = _head->_next;
			node* newhead = head->_next;
			_head->_next = newhead;
			newhead->_prve = _head;
			delete head;*/
			erase(begin());
		}

		iterator insert(iterator it,const T& x)
		{
			node* newnode = new node(T(x));
			node* prve = it._pnode->_prve;
			prve->_next = newnode;
			newnode->_prve = prve;
			newnode->_next = it._pnode;
			it._pnode->_prve = newnode;
			return iterator(newnode);
		}
		
		iterator& find(const T& x)
		{
			;
		}
		
		void erase(iterator& it)
		{
			assert(pos != end());

			node* prev = pos._pnode->_prev;
			node* next = pos._pnode->_next;

			prev->_next = next;
			next->_prev = prev;

			delete pos._pnode;

			return iterator(next);
		}

	private:
		node* _head;
	};

	void test1()
	{
		list<int> lt;

		lt.push_back(1);
		lt.push_back(2);
		lt.push_back(3);
		lt.push_back(4);
		list<int>::iterator it = lt.begin();
		while (it != lt.end())
		{
			cout << *it << ' ';
			++it;
		}
		cout << endl;
		for (auto e : lt)
		{
			cout << e << ' ';
		}
		cout << endl;
		cout << lt.size() << endl;
		cout << lt.back() << endl;
		cout << lt.front() << endl;
	}
	void test2()
	{
		list<int> lt;
		lt.push_back(1);
		lt.push_back(2);
		lt.push_back(3);
		lt.pop_back();
		lt.push_front(10);
		lt.pop_front();
		//		lt.pop_back();
				//lt.resize(10);
		for (auto e : lt)
		{
			cout << e << ' ';
		}
	}
	void test3()
	{
		list<int> lt;
		lt.push_back(1);
		lt.push_back(2);
		lt.push_back(3);
		lt.push_back(4);
		lt.push_back(5);
		list<int>::iterator it = lt.end();
		//it = find(lt.begin(), lt.end(), 3);
		lt.insert(it, 10);
		for (auto e : lt)
		{
			cout << e << ' ';
		}
	}
}
