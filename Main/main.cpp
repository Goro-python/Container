#include<iostream>
#include"../Container/pair.h"

#include"../Container/stack.h"

#include"../Container/queue.h"
using namespace std;




int main(void)
{

	Queue<int> q;

	//cout << q.isEmpty();

	q.push(23);
	q.push(47);

	q.push(53);

	q.pop();

	q.pop();

	q.pop();

	q.printQueue();


	system("PAUSE");

	return 0;

}