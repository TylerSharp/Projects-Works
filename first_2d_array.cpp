/*
CSC 150 Workshop 18
Tyler Sharp, 11/18/15
This program will replace the second column of an array with 0s
*/
#include <iostream>

using namespace std;

/**
	gets a 4x3 array of ints from the user
	@param a the array
*/
void get_4x3_array(int a[][3])
{
	for(int row=0;row<4;row++)
	{
		for(int column=0;column<3;column++)
		{
			int input;
			cin>>input;
			a[row][column]=input;
		}
	}
}

/**
	prints a 4x3 array of ints
	@param a the array
*/
void print_4x3_array(int a[][3])
{
	for(int row=0;row<4;row++)
	{
		for(int column=0;column<3;column++)
		{
			cout << a[row][column] << " ";
		}
		cout << endl;
	}
}

int main()
{
	// int a[4][3]={
	// 				{1,0,2},
	// 				{3,5,3},
	// 				{0,1,2},
	// 				{7,8,9},
	// 			};
	int a[4][3];
	cout<<"Enter 4 rows of 3 integers separated with spaces." << endl;
	get_4x3_array(a);
	for (int i = 0; i < 4; ++i)
	{
		a[i][1]=0;
	}
	print_4x3_array(a);

	return 0;
}