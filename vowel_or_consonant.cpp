#include <iostream>

using namespace std;

int main()
{
	cout << "Eter a letter: ";
	string letter;
	cin >> letter;

	if(letter.length() != 1)
	{
		cout << "Error: invalid input." << endl;
		return 1;
	}

	if( !("a" <= letter && letter <= "z") &&
	!("A" <= letter && letter <= "Z"))
	{
		cout << "Error: invalid input." << endl;
		return 1;
	}

	if(letter == "a" || 
	letter == "e" ||
	letter == "i" ||
	letter == "o" ||
	letter == "u" ||
	letter == "A" || 
	letter == "E" ||
	letter == "I" ||
	letter == "O" ||
	letter == "U")//letter is a vowel
	{
		cout << "Vowel" << endl;
	}
	else
	{
		cout << "Consonant" << endl;
	}


	return 0;
}