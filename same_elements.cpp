/*
	CSC 150 Assignment 5, same_elements
	Tyler Sharp 2015-11-2
	checks whether two arrays have the same elements in some order,
	with the same multiplicities.
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

bool check_elements(int a, int b)
{
	if(a==b)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool same_elements(int a[], int a_size, int b[], int b_size)
{
	sort(a,a+a_size);
	sort(b,b+b_size);
	if(a_size==b_size)
	{
		for(int i = 0; i < a_size; ++i)
		{
			if(check_elements(a[i], b[i])==false)
			{
				return false;
			}
		}
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	cout << "Enter some integers to store in an array. Enter Q to quit." << endl;
	const int CAPACITY = 1000;
	int set1[CAPACITY];
	int set2[CAPACITY];
	int size1 = 0;
	int size2 = 0;

	get_set_from_user("Array 1", set1,size1);
	get_set_from_user("Array 2", set2,size2);

	cout << "Same elements with same multiplicities: ";
	if(same_elements(set1, size1, set2, size2)==true)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}

	return 0;
}