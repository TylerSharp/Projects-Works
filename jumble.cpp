/*
csc 150 workshop 15, #3
Tyler Sharp, 10-27-2015
Writing a program that jumbles a sentence.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));
	cout << "Please write a sentence that" << endl;
	cout << "1. ends with a period, but doesn't use any other punctuation, and" << endl;
	cout << "2. uses only lowercase letters." << endl;
	cout << "Sentence: ";

	//initialize an array called sentence with large capacity, but size = 0 since it currently holds no words
	const int CAPACITY = 1000;
	string sentence[CAPACITY];
	int size = 0;

	//use a loop to fill the entries of the array with the user's input. Break out of the loop when we find a "."
	bool period = false;
	while(!period)
	{
		string word;
		cin >> word;
		int n = word.length();
		if(word.substr(n - 1, 1) == ".") //checks for "."
		{
			period = true;
			word = word.substr(0, n - 1);
		}
		sentence[size] = word; //adding word to array
		size++; //keeps track of the number of words
	}

	//jumble the words
	for(int i = 0; i < 10; i++) //repeat 10 times
	{
		int pos1, pos2; //positions to swap
		pos1 = rand() % size;
		do
		{
			pos2 = rand() % size;
		}while(pos1 == pos2); //make sure pos1 != pos2

		//swapping the words
		string temp = sentence[pos2];
		sentence[pos2] = sentence[pos1];
		sentence[pos1] = temp;

	}

	//prints the entries of the array, with a "." at the end.

	for(int i = 0; i < size; i++)
	{
		cout << sentence[i];
		if(i < size - 1)
		{
			cout << " ";
		}
	}
	cout << "." << endl;

	return 0;
}