#include <iostream>
#include <fstream>
#include <cstring>


using namespace std;

int main(void)
{
	char word[81];
	do
	{
		bool palindrome=true;

		cout << "Please enter a word" << endl;
		cin>>word;
		int length = strlen(word);
		for (int i=0; i<length; i++){
		word[i] = toupper(word[i]); 
	}

	int(length/2);
	if (length>0)
	{
		for(int i=0;i<(length);i++)
		{
			if(word[i]!=word[length-1-i]) 
			{
				palindrome=false;
			}
		} 
	}
	if(palindrome==true)
	{ 
		cout << "The word is a palindrome" << endl; 
	}
	else
	{
		cout << "The word is not a palindrome" << endl; 
	} 
	}while (word!="END");

	return 0;
}

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
 
int show(int random)
{
    cout << random << endl;
    return 0;
}

int genRandom()
{
	int i = 1;
	int random[10];
	srand((unsigned)time(NULL));
	for (int i = 1; i < 11; i++)
	{
		random[i] = 1+ rand() % 100;
		if(random[i] % 2 == 0)
		{
			show (random[i]);
		}
	}
	return 0;
}
 
int main()
{
	genRandom();

	return 0;
}