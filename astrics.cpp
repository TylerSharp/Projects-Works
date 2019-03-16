#include <iostream>

using namespace std;

int main()
{
	cout << "Enter a positive integer: ";
	int number;
	cin >> number;
	
	for(int row = 0; row < number; row++)
	{
		for(int column = 0; column < number; column ++)
		{
			cout << "*";
		}	
		cout << endl;
	}

	return 0;
}