#include <iostream>

using namespace std;

int main()
 {
 	cout << "Please enter an integer between 1,000 and 999,999: ";
 	string number;
 	cin >> number;

 	string first = number.substr(0, number.length() - 4);
 	string last = number.substr(number.length() - 3);

 	cout << first + last;

 	return 0;
 }