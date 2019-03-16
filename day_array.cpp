/*
	CSC 150 Workshop 14, Day Array
	Tyler Sharp 2015-10-26
	This program prints the days of the week using an array.
*/


#include <iostream>

using namespace std;

int main()
{
	string days [7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
	cout << days[0] << " " << days[1] << " " << days[2] << " " << days[3] << " " << days[4] << " " << days[5] << " " << days[6] << endl;
	
	for(int i = 0; i < 7; i++)
	{
		string sub = days[i].substr(0,3);
		cout << sub << " ";
	}

	cout << endl;

	return 0;
}