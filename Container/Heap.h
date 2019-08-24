#include<iostream>

using namespace std;
template<class T,class T1>

class Heap
{
	int capacity;
	T* storage;
	int curIndex;

public:

	Heap()
	{
		capacity = 10000;
		storage = new T[capacity];
		curIndex = -1;
	}
	~Heap()
	{

	}

	void push(T val)
	{
		if (curIndex + 1 < capacity)
		{
			curIndex += 1;
			storage[curIndex] = val;
			int i = curIndex;

			while (i != 0 and storage[i / 2] > storage[i])
			{
				T temp = storage[i / 2];
				storage[i / 2] = storage[i];
				storage[i] = temp;
				i = int(i / 2);
			}
		}
		else
		{
			cout << "capacity over";
		}
		
	}

	T pop()
	{
		T val = storage[0];
		storage[0] = storage[curIndex];
		curIndex -= 1;
		heapify(0);
		return val;
	}

	void heapify(int index)  // producing minheap
	{
		int leftChild = 2 * index + 1;
		int rightChild = 2 * index + 2;
		int smallest = index;

		if (leftChild <= curIndex and storage[leftChild] < storage[smallest])
			smallest = leftChild;

		if (rightChild <= curIndex and storage[rightChild] < storage[smallest])
			smallest = rightChild;

		if (smallest != index) 
		{
			T temp = storage[index];
			storage[index] = storage[smallest];
			storage[smallest] = temp;
			heapify(smallest);
		}
	}


	void makeHeap(T *arr, int N, T1(*func)(T))
	{
	}

	T nLargest(int n)
	{


	}

	T nSmallest(int n )
	{
	}

	T* heapSort()
	{
	
	}

	void printHeap()
	{

		if (T==int or T==double or T==char)
		{
			for (int i = 0; i <= curIndex; i++)
			cout << storage[i];

		}
		else
		{
			for (int i = 0; i <= curIndex; i++)
				cout << storage[i].print();;

		}
		
	}

};


