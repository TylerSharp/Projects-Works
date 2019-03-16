/*
CSC 150 Assignment 6
Tyler Sharp, 11/18/15
This program will check if the users input form a magic square
*/

#include <iostream>
#include <algorithm>

using namespace std;

void get_4x4_array(int a[][4])
{
	for(int row=0;row<4;row++)
	{
		for(int column=0;column<4;column++)
		{
			int input;
			cin>>input;
			a[row][column]=input;
		}
	}
}

bool check_inputs(int a[4][4])
{
	int check[16];
	for (int row = 0; row < 4; ++row)
	{
		for (int column = 0; column < 4; ++column)
		{
			for (int i = 0; i < 16; ++i)
			{
				check[i]=a[row][column];
			}
		}
	}
	sort(check,check+16);
	for (int i = 0; i < 16; ++i)
	{
		if(check[i]!=(i+1))
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int magic[4][4];
	cout << "Enter 4 rows of 4 integers separated with spaces." << endl;
	get_4x4_array(magic);
	if(check_inputs(magic)==false)
	{
		cout << "false" << endl;
	}
	else
	{
		cout << "true" << endl;
	}

	return 0;
}