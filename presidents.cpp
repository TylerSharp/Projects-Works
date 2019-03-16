#include <iostream>

using namespace std;

int main()
{
  string presidents[4] = {"George Washington", "Thomas Jefferson",
                          "Abraham Lincoln",   "Theodore Roosevelt"};

  int indices[17] = {0, 114, 304, 6, 201, 316, 1, 9, 9, 6,
                     200, 206, 1, 3, 11, 211, 8};

  for (int i = 0; i < 4; i++)
    cout << presidents[i] << endl;

  for (int i = 0; i < 17; i++)
    cout << presidents [indices[i] / 100] [indices[i] % 100];
  cout << endl;

  return 0;
}