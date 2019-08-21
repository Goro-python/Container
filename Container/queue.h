#include<iostream>

using namespace std;

template<class T> 


class Queue
{

	int capacity;

	int start;

	T *storage;

	int end;

public:


	Queue()
	{
		capacity = 10000;
		storage = new T[capacity];
		start = -1;
		end = -1;
	}

	~Queue()
	{

	}

	void push(T data)
	{
		if (end < capacity-1)
		{
			end += 1;
			storage[end] = data;
		}

		else
		{
			cout << "Capacity over";
			return;
		}
	}

	T pop()
	{
		if (start < end)
		{
			start += 1;
			return storage[start];
		}
		else
		{
			cout << "Queue empty";
			return 0;
		}
	}

	bool isEmpty()
	{
		return start >= end;
	}

	void printQueue()
	{
		int i = start + 1;
		


		while (i <=end)
		{
			cout << storage[i];
			i += 1;
		}
	}

};
