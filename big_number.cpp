#include <iostream>

using namespace std;

int main()
{
  cout << "Enter a big number" << endl;
  double number;
  cin >> number;
  if(number < 100)
  {
  	cout << "That's not so big" << endl;
  }
  else if(number > 1000)
  {
  	cout << "WOW, that IS a big number!" << endl;
  }
  else if(number >= 100)
  {
  	cout << "Thank you for entering a big number" << endl;
  }

  return 0;
}