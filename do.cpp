#include <iostream>

using namespace std;

int main()
{
	int number;
	int factorial = 1;
	int i;
	cout << "Please enter a positive integer: ";
	cin >> number;

	do
	{
		factorial=factorial*i;
		cout << number << "! = " << factorial << endl;
	}while(int i=1; i <= number; i++);

	return 0;

}