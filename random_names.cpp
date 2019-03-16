#include <iostream>
#include <cstdlib> // use C++ standard libraries.
using namespace std;

int main()  // Your not using cmd line args.
{
   string NameArray[10] = { "budz", "pain", "konan", "nagato", "itachi", "tobi", "madara", "naruto", "danzou", "kakashi" };

   cout<< "Before the Name Random\n";

   for (int i =0; i <=9; i++)
      cout << NameArray[i] << endl;

   cout << endl;
   cout <<"After the randomizing\n";

   srand(time(0));

   for (int j =0; j<=9; j++)
   {
      string Random;
      Random = NameArray[rand()%10]; 
      cout << Random << endl;
      NameArray[j] = Random ; // this won't work you need another array.
   }

   //system("PAUSE");  only if you don't know how to use your IDE settings properly.
   return 0;
}