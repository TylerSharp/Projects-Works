/*
CSC-150, workshop 10, parity
Tyler Sharp, 2015-09-30
This program uses a function parity() to check of an integer is even or odd.
*/

#include <iostream>

using namespace std;

/**
Determines the parity of an integer
@param n any integer
@return "even" or "odd" appropriately
*/

string parity(int n)
{
	if(n % 2 == 0)
	{
		return "even";
	}
	else
	{
		return "odd";
	}
}

int main()
{
	cout << "Enter an integer: ";
	int number;
	cin >> number;
	cout << number << " is " << parity(number) << endl;

	return 0;
}