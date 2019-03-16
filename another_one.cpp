#include <iostream>

using namespace std;

double smallest(double x, double y, double z)
{
	double smallest = x;

	if(y < smallest) 
	{
		smallest = y;
	}
	if (z < smallest)
	{
		smallest = z;
	} 

	return smallest;
}

double average(double x, double y, double z)
{
	return (x + y + z)/3;
}

int main()
{
	double x, y, z;
	cout << "Enter 3 numbers: ";
	cin >> x >> y >> z;
	cout << "The smallest of " << x << ", " << y << ", and " << z << " is " << smallest(x,y,z) << endl;
	cout << "The average of " << x << ", " << y << ", and " << z << " is " << average(x,y,z);

	return 0;
}