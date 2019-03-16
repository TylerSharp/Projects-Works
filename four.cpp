#include <iostream>

using namespace std;

int main()
 {
  cout << "Please enter a four letter word?";
  string word;
  cin >> word;

 cout << word.substr(0,1) << " " << word.substr(1,1) << " " 
  << word.substr(2,1) << " " << word.substr(3,1) << endl;

 cout << word.substr(3,1) << word.substr(2,1)
   << word.substr(1,1) << word.substr(0,1) << endl;

  cout << word.substr(1,1) << word.substr(2,1) << word.substr(3,1)
    << word.substr(0,1) << endl;


  return 0;
 }