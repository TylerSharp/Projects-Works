/*
CSC 150 Workshop 19
Tyler Sharp, 11/18/15
This program appends one vector to another
*/
#include <iostream>
#include <vector>

using namespace std;

/**
	Appends one vector to the end of another
	@param a the first vecotr
	@param b the second vector
	@return the vector obtained by appending b to the end of a
*/
vector<int> append(vector<int> a,vector<int> b)
{
	vector<int> result=a;
	for (int i = 0; i < b.size(); ++i)
	{
		result.push_back(b[i]);
	}
	return result;
}

/**
	Print all the entries in a vector
	@param v the vector
*/
void print_vector(vector<int> v)
{
	int size=v.size();
	for(int i=0;i<size;i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}

/**
	Gets a vector from the user
	@return the vector supplied by the user
*/
vector<int> get_vector_from_user()
{
	vector<int> result;
	int input;
	while(cin >> input)
	{
		result.push_back(input);
	}
	cin.clear();
	string trash;
	cin >> trash;
	return result;
}

int main()
{
	cout << "Enter integers to store in vectors. Enter Q to quit." << endl;
	cout << "a: ";
	vector<int> a=get_vector_from_user();
	cout << "b: ";
	vector<int> b=get_vector_from_user();
	cout << "Appending those vectors gives: " << endl;
	print_vector(append(a,b));

	return 0;
}