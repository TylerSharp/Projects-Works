#include <iostream>
#include <string>

using namespace std;

int main()
{
  string name;
  int age;
  cout <<"Please enter your name: ";
  cin >> name;
  cout << " Hello, " << name << " How old are you? " << endl;
  cin >> age;
  cout << "In ten years " << name << " will be " << age + 10 << " years old" << endl;
  
  return 0;
}