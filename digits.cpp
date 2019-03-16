/*
CSC-150 Assignment 4 
Tyler Sharp, 10/6/2015
Prints the first and last digits of an integer
and prints the length
*/


#include <iostream>
#include <string>

using namespace std;

int first_digit(int n)
{
	while(n > 9)
	{
		n = n/10;
	}

	return n;
}

int last_digit(int n)
{
	int divisor = 1;

	for(int i = 0; i < sizeof(n); i++)
	{
		n = n / divisor % 10;
	}

	return n;
}

int digits(int n)
{
	int length = 0;
	while(n > 0)
	{
		n = n/10;
		length = length + 1;
	}
	return length;
}

int main()
{
	cout << "Please enter an integer: ";
	int input;
	cin >> input;

	cout << "First digit: " << first_digit(input) << endl;
	cout << "Last digit: " << last_digit(input) << endl;
	cout << "Number of digits: " << digits(input) << endl;

	return 0;
}
