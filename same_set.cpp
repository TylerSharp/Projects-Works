/*
	CSC 150 Workshop 16, same_set
	Tyler Sharp 2015-10-30
	checks whether two arrays have the same elements in some order
*/
#include <iostream>

using namespace std;

/**
	check if an integer is an element of an array
	@param x any int
	@param a any array of ints
	@param size the size of a
	@return trie if x is an element of a
*/

bool is_element(int x, int a[], int size)
{
	for(int i = 0; i < size; i++)
	{
		if(x == a[i])
		{
			return true;
		}
	}
	return false;
}

/**
	check if one set is a subset of another
	@param a any array of ints
	@param a_size size of a
	@param b any array of ints
	@param b_size size of b
	@return true if a is a subset of b
*/

bool subset(int a[], int a_size, int b[], int b_size)
{
	for(int i = 0; i < a_size; i++)
	{
		if(!is_element(a[i], b, b_size))
		{
			return false;
		}
	}
	return true;
}

/**
	check if two arrays are equal as sets
	@param a any array of ints
	@param a_size size of a
	@param b any array of ints
	@param b_size size of b
	@return true if a and b are equal as sets
*/

bool same_sets(int a[], int a_size, int b[], int b_size)
{
	if(subset(a, a_size, b, b_size) && subset(b, b_size, a, a_size))
	{
		return true;
	}
	return false;
}
/**
stores user inputs into an array, viewed as a set,
and clears the failed state of cin
@param set_name the name of the set
@param set the array holding the user inputs 
@size the size of the array
*/

void get_set_from_user(string set_name, int set[], int size)
{
	int input; //temporarily hold users inputs
	cout << set_name << ": ";
	while(cin >> input)
	{
		set[size] = input;
		size++;
	}

	//Need to clear the failed state of cin,
	//amd throw the "Q" in the trash

	cin.clear();
	string trash;
	cin >> trash;
}

int main()
{
	cout << "Enter some integers to form a set. Enter Q to quit.";

	//initialize two arrays to hold user input
	const int CAPACITY = 1000;
	int set1[CAPACITY];
	int set2[CAPACITY];
	int size1 = 0;
	int size2 = 0;

	//get the users inputs to fill the arrays
	get_set_from_user("Set 1", set1, size1);
	get_set_from_user("Set 2", set2, size2);

	//check if the sets are the same, and display message
	cout << "Same sets: ";
	if(same_sets(set1, size1, set2, size2))
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}

	return 0;
}

