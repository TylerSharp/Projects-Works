#include <iostream>

using namespace std;

int main()
{
	int frogs;
	cout << "Enter the number of frogs: ";
	cin >> frogs;
	cout << "Number of frogs: " << frogs << endl;

	if(frogs == 1)
	{
		cout << "There is only one frog." << endl;
	}
	else if(frogs == 0)
	{
		cout << "There are no frogs." << endl;
	}
	else
	{
		cout << "There are " << frogs << " frogs." << endl;
	}
	
	if(frogs % 2== 1 && frogs > 1)
	{
		cout << "Thats odd." << endl;
	}

	return 0;
}