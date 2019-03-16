/*
CSC-150 Workshop 7, Perfect Squares
Tyler Sharp, 2015-09-27
prints all perfect squares between 1 and n (inclusive) and their sum
*/

#include <iostream>

using namespace std;

int main()
{
	cout << "Enter a postive integer: ";
	long long number;
	cin >> number;

	long long sum = 0;

	long long i = 1; //initialize i
	while(i*i <= number)
	{
		cout << i*i << endl;
		sum = sum + i*i;
		i++; // same as i = i+1
	}
	cout << "sum: " << sum << endl;

	return 0;
}