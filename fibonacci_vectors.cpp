/*
CSC 150 Workshop 19
Tyler Sharp, 11/18/15
This program will shuffle elements of a vector of the Fibonacci numbers
*/
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

/**
	Print all the entries in a vector
	@param v the vector
*/
void print_vector(vector<int> v)
{
	int size=v.size();
	for(int i=0; i < size; i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}

int main()
{
	srand(time(0));
	cout << "Enter a positive integer: ";
	int n;
	cin >> n;
	vector<int> fibonacci(0);
	// fibonacci[0]=0;
	// fibonacci[1]=1;
	for (int i = 0; i < n; ++i)
	{
		if(i==0)
		{
			fibonacci.push_back(0);
		}
		else if(i==1)
		{
			fibonacci.push_back(1);
		}
		else
		{
			int next=fibonacci[i-1]+fibonacci[i-2];
			fibonacci.push_back(next);
		}
	}
	vector<int> shuffle=fibonacci;
	shuffle.pop_back();
	print_vector(shuffle);
	for (int i = 0; i < 10; ++i)
	{
		int pos=rand()%(shuffle.size()-1);
		int temp=shuffle[pos];
		shuffle[pos]=shuffle[pos+1];
		shuffle[pos+1]=temp;
		print_vector(shuffle);
	}
	print_vector(fibonacci);

	return 0;
}