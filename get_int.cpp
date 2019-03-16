#include <iostream>

using namespace std;

int get_int_input()
{
	int get_int_input;
	cin >> get_int_input;
	while(cin.fail())
	{
		cin.clear();
		string trash;
		cin >> trash;
		cout << "Invalid input. Try again: ";
		cin >> get_int_input;
	}
	return get_int_input;
}
int get_int_between(int m, int n)
{
	cout << "Enter an integer between " << m << " and " << n << ": ";
	int input = get_int_input();
	while(input < m || input > n);

}

int main()
{
	int a = get_int_between(1,100);
	int b = get_int_between(2,6);
	int c = get_int_between(10,20);
	cout << "Thank you!The sum is " << a+b+c << endl;

	return 0;
}