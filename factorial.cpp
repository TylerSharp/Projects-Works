#include <iostream>

using namespace std;

int main()
{
	int number;
	int factorial = 1;
	cout << "Please enter a positive integer: ";
	cin >> number;

	for(int i=1; i <= number; i++)
	{
		factorial=factorial*i;
	}

	cout << number << "! = " << factorial << endl;

	return 0;

}