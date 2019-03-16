/*
CSC 150 workshop 3, Phone Numbers
Tyler SHarp 2015-09-11
This program converts a phone number of the form
1234567 to (123) 555-4567
*/

#include <iostream>

using namespace std;

int main()
{
	cout << "Enter a 10-digit phone number in the form 1234567: ";
	string number;
	cin >> number;

	cout << "(" << number.substr(0,3) << ")"
	 << number.substr(3,3) << "-" << number.substr(6,4) << endl;
}