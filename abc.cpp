#include <iostream>

using namespace std;

int main()
{
	char letter;
	char letter2;
	cout << "Please enter a letter: ";
	cin >> letter;
	letter2 = letter + 1;
/*
	if(letter == 'a' || letter == 'A')
	{
		cout << letter << " is for "<< letter <<"pple";
	}
	else if(letter == 'b' || letter == 'B')
	{
		cout << letter << " is for " << letter <<"lueberry";
	}
	else if(letter == 'c' || letter == 'C')
	{
		cout << letter << " is for " << letter <<"arrot";
	}
*/
	switch(letter)
	{
		case 'a': cout << "a is for apple" << endl;
		          cout << letter2 <<" follows " << letter << " in the alphabet";
		break;
		case 'A': cout << "A is for Apple";
				  cout << letter2 <<" follows " << letter << " in the alphabet";
		break;
		case 'b': cout << "b is for blueberry";
				  cout << letter2 <<" follows " << letter << " in the alphabet";
		break;
		case 'B': cout << "B is for Blueberry";
				  cout << letter2 <<" follows " << letter << " in the alphabet";
		break;
		case 'c': cout << "c is for carrot";
				  cout << letter2 <<" follows " << letter << " in the alphabet";
		break;
		case 'C': cout << "C is for Carrot";
				  cout << letter2 <<" follows " << letter << " in the alphabet";
		break;
		default: cout << 
	}

	return 0;
}