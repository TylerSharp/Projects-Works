#include <iostream>

using namespace std;

int main()
{
	char letter;
	cout << "<<<< Fruit Menu >>>>" << endl;
	cout << "a: apple" << endl;
	cout << "b: blueberry" << endl;
	cout << "c: carrot" << endl;
	cout << "Please enter a, b, or c: ";
	cin >> letter;

	bool apple = (letter == 'a');
	bool blueberry = (letter == 'b');
	bool carrot = (letter == 'c');
	bool round = (letter == 'a' or letter == 'b');
	if(apple or blueberry)
	{
		cout << "An apple a day keeps the doctor away" << endl;
		cout << "That is a round fruit" << endl;
	}
	if(blueberry)
		cout << "That is a round fruit" << endl;
	if(round)
		cout << "Round fruits make excellent pie." << endl;
	if(carrot)
		cout << "I do not carrot all for this excersise" << endl;

	return 0;
}