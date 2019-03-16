#include <iostream>

using namespace std;

int main()
 {
 	cout << "Please enter a length in meters: " << endl;
 	int length;
 	cin >> length;
 	cout << length << "meters is equal to: " << endl;
 	cout << length * .000621371 << " miles" << endl;
 	cout << length * 3.28084 << " feet" << endl;
 	cout << length * 39.3701 << " inches" << endl;

 	return 0;
 }
