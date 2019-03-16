//this program prompts the user to enter two integers
//then displays their qoutient and remainer
//written by Tyler Sharp on Feb 10, 2016

int divisor;
int dividend;
int quotient;
int remainder;

#include <iostream>

using namespace std;

int main()
{
  cout << "Please enter a value for the dividend: ";
  cin  >> dividend;
  cout << "Please enter a value for the divisor: ";
  cin  >> divisor;

  quotient  = dividend / divisor;
  remainder = dividend % divisor;

  cout << dividend << " divided by " << divisor << " is " << quotient << " with a remainder of " << remainder << endl;

  //division with floating point variables is different from division with integer variables

  double dbl_dividend;
  double dbl_dividor;
  double dbl_quotient;

  dbl_dividend = dividend;

  cout << endl;
  cout << "dividend = " << dividend << endl;
  cout << "dbl_dividend = " << dbl_dividend << endl;

  return 0;
}