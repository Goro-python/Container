#include<iostream>


using namespace std;

template<class T>


class Heap
{
	int capacity;
	T* storage;
	
	int parent;

	int leftChild;

	int rightChild;

	int curIndex;

public:

	Heap()
	{
		capacity = 10000;
		storage = new <T>[capacity];
		curIndex = -1;
	}
	~= Heap()
	{

	}

	void push(T val)
	{
		curIndex += 1;
		heapify();

	}

	T pop()
	{
		T val = storage[0];

		hea[ify();
		
		return val;
	}

	void heapify()
	{
		

	}

	T nLargest(int n)
	{

	}

	T nSmallest(int n )
	{
	}

	void heapSort()
	{

	}

};


