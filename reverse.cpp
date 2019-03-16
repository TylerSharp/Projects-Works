#include <iostream>

using namespace std;

int main()
{
	cout << "Please write something: ";
	string phrase;
	getline(cin,phrase);
	int length = phrase.length();
	int count = length;
	
	for(int i = 0; i <= length; i++)
	{
		cout << phrase.substr(count,1);
		count = count - 1;
	}
	cout << endl;

	return 0;
}