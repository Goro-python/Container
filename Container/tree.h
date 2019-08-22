#include<iostream>

using namespace std;

template<class T>

class Node
{

public:

	T val;
	Node *left;
	Node *right;
	int height;

	Node(T data)
	{
		val = data;
		left = NULL;
		right = NULL;
		height = 1;
	}
	~Node()
	{
	}

	void printNode()
	{
		cout << val;
	}
	
};



template<typename T1>

class Tree
{

public:

	void preorder(Node<T1> *root)
	{
		if (root==NULL)
		{
			return;
		}

		else
		{
			cout << root->val;
			preorder(root->left);
			preorder(root->right);
		}
	
	}
	//O(N)

	void inorder(Node<T1> *root)
	{
		if (root == NULL)
		{
			return;
		}
		else
		{
			inorder(root->left);
			cout << root->val;
			inorder(root->right);
		}

	}//O(N)

	void postorder(Node<T1> *root)
	{
		if (root!=NULL)
		{
			postorder(root->left);
			postorder(root->right);
			cout << root->val;
		}

	} //O(N)


	Node<T1>* insert(Node<T1> *root, T1 data)  //O(N)
	{
		if (root==NULL)
		{
			Node<T1> *nd = new Node<T1>(data);
			return nd;
		}
		else
		{
			if (data <= root->val)
			{
				root->left = insert(root->left, data);

			}
			else
			{
				root->right = insert(root->right, data);

			}

			int leftHeight = getHeight(root->left);
			int rightHeight = getHeight(root->right);

			root->height = 1+getMax(leftHeight, rightHeight);

			return root;

		}

	}

	bool search(Node<T1> *root, T1 data)  //O(logn)
	{
		
		if (root==NULL)
		{
			return false;
		}
		else
		{
			if (data == root->val)
			{
				return true;
			}

			else if (data <= root->val)
			{
				return search(root->left,data);
			}
			else
			{
				return search(root->right,data);
			}
		}	
	}

	int getHeight(Node<T1> *root)
	{
		if (root==NULL)
		{
			return 0;
		}
		else
		{
			return root->height;
		}
	}

	int getBalance(Node<T1> *root)
	{

		return (getHeight(root->left) - getHeight(root->right));

	}


	T1 getMax(T1 val1, T1 val2)
	{
		if (val1 < val2)
		{
			return val2;

		}
		else
		{
			return val1;
		}

	}
	
};



