/*
CSC 150 Workshop 4
Tyler Sharp, 2015-09-16
This program determines whether a number set is increasing or decreasing
*/

#include <iostream>

using namespace std;

int main()
{
	cout << "Enter three numbers: ";
	double first, second, third;
	cin >> first >> second >> third;

	if(first < second && second < third)
	{
		cout << "increasing" << endl;
	}
	else if(first > second && second > third)
	{
		cout << "decreasing" << endl;
	}
	else
	{
		cout << "neither" << endl;
	}


}