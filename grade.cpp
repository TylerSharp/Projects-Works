/*
CSC 150 Workshop 4
Tyler Sharp, 2015-09-16
This program calculates grades
*/

#include <iostream>

using namespace std;

int main()
{
	cout << "Percentage: ";
	double percentage;
	cin >> percentage;

	cout << "Grade: ";

	if(percentage > 92.9)
	{
		cout << "A" << endl;
	}
	else if(percentage > 89.9)
	{
		cout << "A-" << endl;
	}
	else if(percentage > 86.9)
	{
		cout << "B+" << endl;
	}
	else if(percentage > 82.9)
	{
		cout << "B" << endl;
	}
	else if(percentage > 79.9)
	{
		cout << "B-" << endl;
	}
	else if(percentage > 76.9)
	{
		cout << "C+" << endl;
	}
	else if(percentage > 72.9)
	{
		cout << "C" << endl;
	}
	else if(percentage > 69.9)
	{
		cout << "C-" << endl;
	}
	else if(percentage >= 56)
	{
		cout << "D" << endl;
	}
	else
	{
		cout << "F" << endl;
	}

	return 0;
}