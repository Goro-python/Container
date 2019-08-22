#include<iostream>
#include"../Container/pair.h"

#include"../Container/stack.h"

#include"../Container/queue.h"

#include"../Container/tree.h"



using namespace std;

int main(void)
{
	Node<int> *root = new Node<int> (23);

	//root->printNode();
	Tree<int> *t = new Tree<int>;


	root = t->insert(root,12);

	root = t->insert(root, 6);

	root = t->insert(root, 9);

	cout << t->search(root,6);

	system("PAUSE");

	return 0;

}