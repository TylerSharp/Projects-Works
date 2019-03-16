/*
	CSC 150 Workshop 15, Sort Array
	Tyler Sharp 2015-10-26
	This program takes numbers and sorts them from least to greatest.
*/

#include <iostream>
#include <algorithm> //Needed for sort()

using namespace std;

int main()
{

	cout << "Enter some numbers. Enter Q to quit." << endl;

	const int CAPACITY = 1000;
	double list[CAPACITY];
	double input;
	int size = 0;
	
	while(cin >> input)
	{
		list[size] = input;
		size++;
	}

	sort(list, list + size);

	//Print the elements in the array list
	for(int i = 0; i < size; i++)
	{
		cout << list[i] << " ";
	}

	cout << endl;

	return 0;
}