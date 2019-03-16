/*
	CSC 150 Assignment 5, remove_duplicates
	Tyler Sharp 2015-11-2
	removes duplicates from an array, otherwise 
	preserving the order of the elements.
*/

#include <iostream>
#include <algorithm>
using namespace std;

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

void print_array(int a[], int size)
{
	for(int i = 0; i < size;++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

void replace(int a[], int x, int& size)
{
	for(int i = x; i < size; ++i)
	{
		a[i]=a[i+1];
	}

}

void zero_repeats(int a[], int& size)
{
	for(int i = 0; i < size; ++i)
	{
		for(int j = 0; j < size; ++j)
		{
			if(a[i] == a[j]&&i!=j)
			{
				replace(a,j,size);
			}
		}
	}
}

int main()
{
	const int CAPACITY = 1000;
	int set[CAPACITY];
	int size = 0;
	cout << "Enter some integers to store in an array. Enter Q to quit." << endl;
	get_set_from_user("Array",set,size);

	zero_repeats(set,size);

	print_array(set,size);

	return 0;
}