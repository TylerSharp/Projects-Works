/*
	CSC 150 Workshop 14, Array Practice
	Tyler Sharp 2015-10-26
	This program takes random numbers and prints them in different orders.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));

	const int SIZE = 10;
	int values[SIZE];

	//initialize array with random integers
	for(int i = 0; i < SIZE; i++)
	{
		values[i] = rand() % 100 + 1;
	}

	//print all the elements
	for(int i = 0; i < SIZE; i++)
	{
		cout << values[i] << " ";
	}
	cout << endl;

	//print all the elements at even index
	for(int i = 0; i < SIZE; i = i + 2)
	{
		cout << values[i] << " ";
	}
	cout << endl;

	//print all the even elements
	for(int i = 0; i < SIZE; i++)
	{
		if(values[i] % 2 == 0)
		{
			cout << values[i] << " ";
		}
	}
	cout << endl;

	//print all elements in reverse order
	for(int i = SIZE - 1; i >= 0; i--)
	{
		cout << values[i] << " ";
	}
	cout << endl;

	//print only the first and last element
	cout << values[0] << " " << values[SIZE - 1] << endl;

	return 0;
}