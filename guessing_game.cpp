/*
CSC-150 Workshop 7, Guessing game
Tyler Sharp, 2015-09-27
randomly picks an integer between 1 and 100 (inclusive) and
then repeatedly prompts the user to guess the number.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));
	int number = rand() % 100 + 1;

	cout << "I'm thinking of an integer between 1 and 100." << endl;

	cout << "Guess: ";
	int guess;
	cin >> guess;
	while(cin.fail())
	{
		cin.clear();
		string trash;
		cin >> trash;

		cout << "Guess again: ";
		cin >> guess;
	}

	while(guess != number)
	{
		if(guess > number)
		{
			cout << "too high" << endl;
		}
		else
		{
			cout << "too low" << endl;
		}
		cout << "Guess again: ";
		cin >> guess; 
		while(cin.fail())
		{
			cin.clear();
			string trash;
			cin >> trash;
		
			cout << "Guess again: ";
			cin >> guess;
		}
	}

	cout << "Correct!" << endl;

	return 0;
}