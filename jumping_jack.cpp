/*
CSC-150 Workshop 9, jumping jacks
Tyler Sharp, 2015-09-28
prints a guy doing jumping jacks
*/

#include <iostream>

using namespace std;

int main()
{
	int jack = 0; //jack's position (either 0 or 1)
	string input; //either Q or "" (for enter)
	do
	{
		for(int i = 0; i < 20; i++)//print space above jack
		{
			cout << endl;
		}
		if(jack == 0)
		{
			cout << " O " << endl;
			cout << "/|\\" << endl;
			cout << "( )" << endl;
			jack = 1;
		}
		else
		{
			cout << "\\O/" << endl;
			cout << " |" << endl;
			cout << "/ \\" << endl;
			jack = 0;
		}
		for(int i = 0; i < 15; i++)// print ground
		{
			cout << "-";
		}
		cout << endl << "Press ENTER to continue or q to quit." << endl;
		getline(cin, input);
	}while(input == "");

	return 0;
}