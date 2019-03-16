/*
CSC-150 Assignment 4 
Tyler Sharp, 10/6/2015
Changes lower case vowels to upper case
*/


#include <iostream>

using namespace std;

string capitalize_vowels(string letter)
{
	if(letter == "a")
	{
		letter = "A";
	}
	else if(letter == "e")
	{
		letter = "E";
	}
	else if(letter == "i")
	{
		letter = "I";
	}
	else if(letter == "u")
	{
		letter = "U";
	}
	else if(letter == "o")
	{
		letter = "O";
	}

	return letter;
}

int main()
{
	cout << "Enter a word: ";
	string word;
	cin >> word;

	for(int i = 0; i < word.length(); i++)
	{
		string letter = word.substr(i, 1);
		string x = capitalize_vowels(letter);
		cout << x;
	}

	return 0;
}