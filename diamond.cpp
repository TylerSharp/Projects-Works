/*
CSC-150 Assignment 3, 2
Tyler Sharp, 9/28/2015
Displays a diamond based on the users input
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
   int number;
   cout << "Please enter a positive integer: ";
   cin >> number;

   for (int n = 0; n < number; ++n)
   {
      cout << string(number - n, ' ');

      for (int m = 0; m <= n; ++m)
      {
         cout << "* ";
      }

      cout << endl;
   }

   for (int n = 1; n < number; ++n)
   {
      cout << string(n+1, ' ');

      for (int m = 0; m < number - n; ++m)
      {
         cout << "* ";
      }

      cout << endl;
   }

   return 0;
}