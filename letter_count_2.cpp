#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

/*
counts the letters in file
@parram lower_count the list of occurences of each lowercase letter
@param upper_count the list of occurences of each uppercase letter
@param file the file of text
*/

void count_letters(vector<int>& lower_count, vector<int>& upper_count, ifstream file)
{
	for(int i = 0; i < 26; i++)
	{
		lower_count[i] = 0;
		upper_count[i] = 0;
	}
	int a_value = 'a';
	int A_value = 'A';
	char ch;
	int ch_value = ch;
	while(file >> ch)
	{
		int ch_value = ch;
		if(islower(ch))//true if ch is a lowercase letter
		{
			int pos = ch_value - a_value;
			lower_count[pos]++

		} 
		else if 
		{
			int pos = ch_value - A_value;
			upper_count[pos]++;
		}
	}
}

void print_count(vector<int> lower_count, vector<int> upper_count)
{
	vector<char> lowers; // vector of lowercase letters
	for(int i = 0; i < 26; i++)
	{
		lowers.push_back('a' + i);
	}
	ector<char> uppers; // vector of uppercase letters
	for(int i = 0; i < 26; i++)
	{
		lowers.push_back('A' + i);
	}
	//print the vector
	for(int i = 0; i < 26; i++)
	{
		cout << lowercase[i]
			 << lower_count[i]
			 << uppers[i]
			 << upper_count[i]
			 << endl;
	}
}

int main()
{
	ifstream file;
	file.open("essay.txt")
	if(file.fail())
	{
		cout << "Failed to open essay.txt" << endl;
		return 1;
	}
	vector<int> lower_count(26);
	vector<int> upper_count(26);
	count_letters(lower_count, upper_count, file);
	print_count();
	return 0;
}