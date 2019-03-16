/* 
CSC 150 Homework 3.
Written by Tyler Sharp on Feb 17, 2016.
This program prints the change due
*/

#include <iostream>

using namespace std;

int main()
 {
 	cout << "Amount due: " << endl;
 	double due;
 	cin >> due;
 	cout << "Amount received: " << endl;
 	double received;
 	cin >> received;


 	if(cin.fail())
 	{
 		cout << "Error: invalid input." << endl;
 		return 1;
 	}
 	if(received < 0)
 	{
 		cout << "Error: The amount received cannot be negative." << endl;
 		return 1;
 	}
 	if(due > received)
 	{
 		cout << "Error: amount received cannot be less than due." << endl;
 		return 1;
 	}

 	if(cin.fail())
 	{
 		cout << "Error: invalid input." << endl;
 		return 1;
 	}
 	if(due < 0)
 	{
 		cout << "Error: The amount due cannot be negative." << endl;
 		return 1;
 	}

 	cout << "Change due: " << endl;
 	double change;

 	change = received - due;
 	int dollars, quarters, dimes, nickels, pennies;

 	change = change*100;
 	dollars = change/100;
 	cout << dollars << " dollars" << endl;

 	change = change - (dollars * 100);
 	quarters = change/25;
 	cout << quarters << " quarters" << endl;

 	change = change - (quarters * 25);
 	dimes = change/10;
 	cout << dimes << " dimes" << endl;

 	change = change - (dimes * 10);
 	nickels = change/5;
 	cout << nickels << " nickels" << endl;

 	change = change - (nickels * 5);
 	pennies = change/1; 
 	cout << pennies << " pennies" << endl;

 	return 0;
 }