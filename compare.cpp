/*
csc 150 Assignment 2
Tyler Sharp 9/21/2015
Write a program that tells if the numbers are the same or not
*/

#include <iostream>

using namespace std;

int main()
{

 	double a;
 	double b;
 	double c;
 
 	cout << "Please enter three numbers: ";
 	cin >> a >> b >> c;

 if(a == b && b == c)
 	{
 		cout << "all the same";
 	}
 else if(a != b && b != c && c != a)
 	{
 		cout << "all different";
 	}
 else
 	{
 		cout << "neither";
 	}

 return 0;
}