/*
	CSC 150 Assignment 5, array_functions
	Tyler Sharp 2015-11-2
	Checks largest number, duplicates and oders them evens first
*/

#include <iostream>
#include <algorithm>
using namespace std;

void copy_array(int a[], int size, int result[])
{
	for(int i = 0; i < size; ++i)
	{
		result[i]=a[i];
	}
}

void print_array(int a[], int size)
{
	for(int i = 0; i < size; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

void get_set_from_user(string set_name, int set[], int& size)
{
	int input;
	cout << set_name << ": ";
	while(cin >> input)
	{
		set[size] = input;
		size++;
	}

	cin.clear();
	string trash;
	cin >> trash;
}

int second_largest(int a[], int size)
{
	sort(a,a+size);
	return a[size-2];
}

bool has_duplicates(int a[], int size)
{
	sort(a,a+size);
	for(int i = 0; i < size; ++i)
	{
		if(a[i] == a[i+1])
		{
			return true;
		}
	}
	return false;
}

void evens_first(int a[], int size)
{
	for(int i = 0; i < size; ++i)
	{
		if (a[i]%2==0)
		{
			cout << a[i] << " ";
		}
	}
	for(int i = 0; i < size; ++i)
	{
		if(a[i]%2==1)
		{
			cout << a[i] << " ";
		}
	}
}

int main()
{
	cout <<"Enter some integers to store in an array. Enter Q to quit." << endl;
	const int CAPACITY = 1000;
	int set[CAPACITY];
	int size = 0;

	get_set_from_user("Array 1", set,size);

	int copy[CAPACITY];
	copy_array(set,size,copy);

	cout << "Second largest entry: " << second_largest(set,size) << endl;

	if(has_duplicates(set,size)== true)
	{
		cout << "There are duplicate values." << endl;
	}
	else
	{
		cout << "There are no duplicates values." << endl;
	}

	cout << "After executing evens_first():" << endl;
	evens_first(copy,size);

	return 0;
}