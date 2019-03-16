#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));

	int prize = rand() % 5 + 1;

	cout << "open door 1 or 2.
	enter \"1\" or \"2\"." << endl;

	int first_door;
	cin >> first_door;

	string second_door;

	if(first_door == 1)
	{
		cout << "Open door A or B?
		Enter \"A\" or \"B\"." << endl;

		string second_door;
		cin >> second_door;

		if(second_door == "A")
		{
			if(prize == 1)
			{
				cout << "You found a prize!" << endl;
			}
			else
			{
				cout << "There's nothing behind that door..." << endl;
			}
		}
		else
		{
			if(prize == 2)
			{
				cout << "You found a prize!" << endl;
			}
			else
			{
				cout << "There's nothing behind that door..." << endl;
			}
		}

	}
	else//first_door = 2
	{
		cout << "Open door A, B, or C? Enter \"A\", \"B\", or \"C\"." << endl;
		cin >> second_door == "A"

	}


	return 0;
}