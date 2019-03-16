/*
CSC 150 Assignment 6
Tyler Sharp, 11/18/15
This program will merge 2 vectors, making a single vector alternating between their elements.
*/
#include <iostream>
#include <vector>

using namespace std;

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

void print_vector(vector<int> v)
{
	int size=v.size();
	for(int i=0;i<size;i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}

vector<int> merge(vector<int> a,vector<int> b)
{
	vector<int> result;
	if(a.size()<b.size())
	{
		for (int i = 0; i < b.size(); ++i)
		{
			if(i<a.size())
			{
				result.push_back(a[i]);
			}
			result.push_back(b[i]);
		}
	}
	else
	{
		for (int i = 0; i < a.size(); ++i)
		{
			result.push_back(a[i]);
			if(i<b.size())
			{
				result.push_back(b[i]);
			}
		}
	}
	return result;
}

int main()
{
	cout << "Enter integers to store in vectors. Enter Q to quit." << endl;
	cout << "a: ";
	vector<int> a = get_vector_from_user();
	cout << "b: ";
	vector<int> b = get_vector_from_user();
	cout << "Appending those vectors gives: " << endl;
	print_vector(merge(a,b));

	return 0;
}