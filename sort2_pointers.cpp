/*
CSC 150 Workshop 20
Tyler Sharp, 11/13/15
Works the same as sort2 from Workshop 11
*/
#include <iostream>
using namespace std;

/**
	Swaps the values of two variables if they are not in increasing order
	@param p pointer to an integer
	@param q pointer to an integer
*/
void sort2(int* p,int* q)
{
	if(*p>*q)
	{
		int temp=*q;
		*q=*p;
		*p=temp;
	}
}

int main()
{ 
	cout << "Enter two integers:"<< endl;
	cout << "x = ";
	int x;
	cin >> x;
	cout<<"y = ";
	int y;
	cin>>y;
	sort2(&x,&y);
	cout << "After executing sort2(x,y) we have" << endl;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;

	return 0;
}