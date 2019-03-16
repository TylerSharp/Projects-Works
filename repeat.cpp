/*
CSC-150 Workshop 8, Repeat
Tyler Sharp, 2015-09-27
can repeat what the user types in
*/

#include <iostream>

using namespace std;

int main()
{
	string answer;
	do
	{
		cout << "Thomas Sucks!" << endl;
		cout << "Repeat (y/n)? ";
		cin >> answer;

	}while(answer == "y" || answer == "Y");

	cout << "Good bye, Thomas! No one will miss you!" << endl;

	return 0;
}