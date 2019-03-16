/*
CSC 150 Workshop 4
Tyler Sharp, 2015-09-16
This program picks the largest number
*/

#include <iostream>

using namespace std;

int main()
{
	cout << "Enter three numbers: ";
	double first, second, third;
	cin >> first >> second >> third;

	double max = first;
	//initialize max = first, then adjust...

	if(max < second)
	{
		max = second;
	}	
	if(max < third)
	{
		max = third;
	}

	cout << "max = " << max << endl;

	return 0;
}