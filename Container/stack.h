#include<iostream>


using namespace std;

template<class T>

class stack
{

public:

	int capacity;
	int top;
	T *storage;

	stack()
	{
		capacity = 100;
		storage = new T[capacity];
		top = -1;
	}

	~stack()
	{
	}

	void push(T data)
	{
		top += 1;
		storage[top] = data;
	}


	T pop()
	{
		if (top == -1)
			return 0;
		
		T data = storage[top];
		top = -1;
		return data;
	}

	void printStack()
	{
		for (int i = 0; i <= top; i++)
			cout << storage[i];
	}

	bool isEmpty()
	{
		if (top == -1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};