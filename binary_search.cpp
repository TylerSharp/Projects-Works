/*
csc 150 workshop 15, #2
Tyler Sharp, 10-27-2015
Writing a binary search.
*/

#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	//initialize an array with
	//30 random integers between 1 and 50 (inclusive)
	srand(time(0));
	const int SIZE = 30;
	int array[SIZE] ;
	for(int i = 0; i < SIZE; i++)
	{
		array[i] = rand() % 50 +1;
	}

	sort (array, array + SIZE);

	// print the array for testing (should be removed)
	//for(int i = 0; i < SIZE; i++)
	//{
	//	cout << array[i] << " ";
	//}
	//cout << endl;

	cout << "Enter an integer between 1 and 50: ";
	int guess;
	cin >> guess;

	bool found = false;
	int low = 0;
	int high = SIZE - 1;
	int pos; //where we're checking
	while(!found && low <= high)
	{
		pos = (low + high) / 2;
		if(guess == array[pos])
		{
			found = true;
		}
		else if(guess < array[pos])
		{
			high = pos - 1;
		}
		else // guess > array[pos]
		{
			low = pos + 1;
		}
	}

	if(found)
	{
		cout << guess << " is in the aray. " << endl;
	}
	else
	{
		cout << guess << " is not in the array." << endl;
	}

	return 0;

}