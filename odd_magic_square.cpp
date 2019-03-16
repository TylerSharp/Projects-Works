/*
CSC 150 Workshop 18
Tyler Sharp, 11/18/15
This program will create a magic nxn square if n is odd.
*/
#include <iostream>
#include <iomanip>

using namespace std;

const int CAPACITY=50;

/**
	fills a 2d array with 0s
	@param a the 2D array
*/
void zero_entries(int a[][CAPACITY])
{
	for(int row=0;row<CAPACITY;row++)
	{
		for(int column=0;column<CAPACITY;column++)
		{
			a[row][column]=0;
		}
	}
}

/**
	creates an nxn magic square
	@param a array to hold the values of the square
	@param n size of the magic square
*/
void make_magic(int a[][CAPACITY],int n)
{
	zero_entries(a); //fills array with 0s
	int row=n-1;
	int column=n/2;
	for(int k = 0; k <= n*n; ++k)
	{
		a[row][column]=k;
		row++;
		column++;
		if(row==n)
		{
			row=0;
		}
		if(column==0)
		{
			column=0;
		}
		if(a[row][column]!=0)
		{
			if(row==0)
			{
				row=n;
			}
			if(column==0)
			{
				row=n;
			}
			row--;
			column--;
			row--;
		}
	}
}

/**
	prints a nxn array of integers
	@param a the array
	@param n size of the array
*/
void print_nxn_array(int a[][CAPACITY],int n)
{
	for(int row = 0; row < n; ++row)
	{
		for(int column = 0; column < n; ++column)
		{
			cout << setw(3) << a[row][column] << " ";
		}
		cout << endl;
	}
}

int main()
{
	cout<<"Enter an odd positive integer (be reasonable): ";
	int n;
	cin>>n;
	int a[CAPACITY][CAPACITY];
	make_magic(a,n);
	print_nxn_array(a,n);

	return 0;
}