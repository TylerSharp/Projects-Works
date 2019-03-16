/*
	CSC 150 Workshop 16, Functions
	Tyler Sharp 2015-10-28
	runs several functions
*/

#include <iostream>

using namespace std;

/**
	Prints the elements of an array separated by spaces
	@param a name of the array of integers
	@param side is the size of the array
*/
void print_array(int a[], int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
/**
	replaces all even elements in an array with 0
	@param a any array of integers
	@param size the size of the array
*/
void zero_evens(int a[], int size)
{
	for(int i = 0; i < size; i++)
	{
		if(a[i] % 2 == 0) //checks if a[i] is even
		{
			a[i] = 0;
		}
	}
}
/**
	copies an array of integers
	@param a array to be copied
	@param result the copy of a
	@param size the size of the array
*/
void copy_array(int a[], int size, int result[])
{
	for(int i = 0; i < size; i++)
	{
		result[i] = a[i];
	}
}
/**
	ckechs if an array is sorted in inreasing order
	@param a any array of integers
	@param size the size of the array
	@return true if a is sorted
*/
bool is_sorted(int a[], int size)
{
	for(int i = 0; i < size; i++)
	{
		if(a[i] > a[i+1]) //not in increasing order
		{
			return false;
		}
	}
	return true;
}

/**
	computes the average of the values in an array
	@param a any array of integers
	@param size the size of the array
	@return the average
*/
double average(int a[], int size)
{
	double sum = 0;
	for(int i = 0; i < size; i++)
	{
		sum = sum + a[i];
	}
	return sum / size;
}
/**
	appends an element to the end of an array
	@param n is the integer to append
	@param a the array
	@param size the current size of a
	@param CAPACITY the capacity of the array
*/

void append(int n, int a[], int& size, int CAPACITY)
{
	if(size < CAPACITY)
	{
		a[size] = n;
		size++;
	}
}

int main()
{
	const int CAPACITY = 1000;
	int size = 5;
	int dragon[CAPACITY];
	dragon[0] = 1;
	dragon[1] = 2;
	dragon[2] = 4;
	dragon[3] = 7;
	dragon[4] = 10;

	print_array(dragon, 5);
	cout << average(dragon, 5) << endl;

	append(7, dragon, size, CAPACITY);
	print_array(dragon, size);

	// cout << is_sorted(dragon, 5); << endl;

	// zero_evens(dragon, 5);
	// print_array(dragon, 5);

	// int copy[5];
	// copy_array(dragon, 5, copy);
	// print_array(copy, 5);

	// cout << is_sorted(dragon, 5); <<endl;

	return 0;
}