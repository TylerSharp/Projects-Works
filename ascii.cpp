#include <iostream>

using namespace std;

int main()
{
	// char ch = 'A'; //ch is set to 'A'
	// ch++; //now ch = 'B'
	// ch--; //now ch = 'A' again

	// int ch_value = ch; // ch_value stores the value of 'A'

	// cout << ch << " " << ch_value << endl;

	// int value = 50;
	// char value_char = value; // character associated with 50
	for(int value = 0; value < 120; value++)
	{
		char ch = value;
		cout << ch << " " << value << endl;
	}

	return 0;
}