#include<iostream>

using namespace std;


template<class T1,class T2>

class doub
{
public:
	T1 x;
	T2 y;
	void print()
	{
		cout << "(" << x << "," << y << ")";
	}
};