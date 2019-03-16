/*
	CSC 150 Workshop 20
	Tyler Sharp, 11/2/15
	This program performs multiple functions with arrays
*/
#include <iostream>

using namespace std;

/**
	prints the elemeents of an array separated by spaces.
	@param a name of the array of integers
	@param size is the size of the array
*/
void print_array(int a[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

/**
	Replaces all even elemens in an array with 0
	@param a any array of integers
	@param size the size of the array
*/
void zero_evens(int a[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		if(a[i]%2==0)
		{
			a[i]=0;
		}
	}
}

/**
	Coppies array a[] int the result[] array
	@param a any array of integer
	@param size the size of the array
	@param result the copy of a
*/
void copy_array(int a[], int size, int result[])
{
	for (int i = 0; i < size; ++i)
	{
		result[i]=a[i];
	}
}

/**
	Checks if the array is currently sorted in increasing order
	@param a any array of integers
	@param size the size of the array
	@return true if a is sorted
*/
bool is_sorted(int a[], int size)
{
	for (int i = 0; i < size-1; ++i)
	{
		if(a[i]>a[i+1])
		{
			return false;
		}
	}
	return true;
}

/**
	Computes the average of the values in an array
	@param a any array of integers
	@param size the size of the array
	@return the average
*/
double average(int a[], int size)
{
	double sum=0;
	for (int i = 0; i < size; ++i)
	{
		sum=sum+a[i];
	}
	return sum/size;
}

/**
	Appends an element to the end of an array
	@param n the integer to append
	@param a any array of integers
	@param size the size of the array
	@param CAPACITY the capacity of the array
*/
void append(int n, int a[], int& size, int CAPACITY)
{
	if (size<CAPACITY)
	{
		a[size]=n;
		size++;
	}
}

int main()
{
	const int CAPACITY=1000;
	int size=5;
	int dragon[CAPACITY];
	dragon[0]=1;
	dragon[1]=2;
	dragon[2]=4;
	dragon[3]=7;
	dragon[4]=10;

	print_array(dragon,size);

	append(7, dragon, size, CAPACITY);

	cout<<is_sorted(dragon, size)<<endl;

	cout<<average(dragon, size)<<endl;

	zero_evens(dragon, size);
	print_array(dragon, size);

	int copy[size];
	copy_array(dragon, size, copy);
	print_array(copy, size);
	
	cout<<is_sorted(dragon, size)<<endl;

	cout<<average(dragon, size)<<endl;

	return 0;
}