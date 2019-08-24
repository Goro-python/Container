#include<iostream>
#include"../Container/pair.h"

#include"../Container/stack.h"

#include"../Container/queue.h"

#include"../Container/tree.h"

#include"../Container/Heap.h"

using namespace std;


int getElement(doub<int,int> element)
{
	return element.y;
}



int main(void)
{
	doub<int, int> *arr = new doub<int, int>[10];

	for (int i = 0; i < 10; i++)
	{
		cout << " X: " << endl;
		cin >> arr[i].x;
		cout << "Y: " << endl;
		cin >> arr[i].y;
	}

	Heap<doub<int, int>, int> h;

	
	h.push(arr[0]);
	//int(*funcptr)(doub<int, int>) = getElement;

	//h.makeHeap(arr,10,funcptr);
	
	
	system("PAUSE");

	return 0;

}