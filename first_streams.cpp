/*
CSC 150 Workshop 21
Tyler Sharp, 11/16/15
This program will store a message in a file, close it,
then reopens and prints the message.
*/
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	// ofstream -- can write to
	// ifstream -- can read from
	// fstream -- both
	fstream file;
	file.open("message.txt");
	if(file.fail())
	{
		cout << "Failed to open message.txt" << endl;
		return 0;
	}
	file << "Some message." << endl;
	file << "Another line of message." << endl;
	file.close();

	file.open("message.txt");
	if(file.fail())
	{
		cout << "Failed to reopen message.txt" << endl;
		return 0;
	}
// Prints first line.
	// string msg;
	// getline(file,msg);
	// cout << msg << endl;

// Prints one word per line.
	// string input;
	// while(file >> input)
	// {
	// 	cout << input << endl;
	// }

// Prints one line at a time.
	string msg_line;
	while(getline(file,msg_line))
	{
		cout << msg_line << endl;
	}

	return 0;
}