#include<iostream>
//#include"../Container/pair.h"

using namespace std;

template<typename T>


int main(void)
{

	T *doubArr = new T[10];

	for (int i = 0; i <= 9; i++)
	{
		doubArr[i] = 'a';
		cout << doubArr[i];
	}


	system("PAUSE");
	return 0;


}