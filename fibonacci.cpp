#include <iostream>

using namespace std;

int fibonacci(int n)
{
	if(n == 0)
	{
		return 0;
	}

	else if(n == 1)
	{
		return 1;
	}

	else
	{
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}

int main()
{
	cout << "How many Fibonacci numbers to list? ";
	int input;
	cin >> input;
	for(int i = 0; i < input; i++)
	{
		cout << i;
	}

	cout << endl;

	return 0;
}