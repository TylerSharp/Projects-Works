/*
	CSC 150 Assignment 7
	Tyler Sharp, 11/17/15
	This program prints the stages of hangman
*/

#include <iostream>

using namespace std;

void gallows(int wrong)
{
	if(wrong==0)
	{
		cout<<"  _____  "<<endl;
		cout<<"  |   |  "<<endl;
		cout<<"  |      "<<endl;
		cout<<"  |      "<<endl;
		cout<<"  |      "<<endl;
		cout<<"  |      "<<endl;
		cout<<"_________"<<endl;
	}
	else if(wrong==1)
	{
		cout<<"  _____  "<<endl;
		cout<<"  |   |  "<<endl;
		cout<<"  |   O  "<<endl;
		cout<<"  |      "<<endl;
		cout<<"  |      "<<endl;
		cout<<"  |      "<<endl;
		cout<<"_________"<<endl;
	}
	else if(wrong==2)
	{
		cout<<"  _____  "<<endl;
		cout<<"  |   |  "<<endl;
		cout<<"  |   O  "<<endl;
		cout<<"  |   |  "<<endl;
		cout<<"  |      "<<endl;
		cout<<"  |      "<<endl;
		cout<<"_________"<<endl;
	}
	else if(wrong==3)
	{
		cout<<"  _____  "<<endl;
		cout<<"  |   |  "<<endl;
		cout<<"  |   O  "<<endl;
		cout<<"  |  /|  "<<endl;
		cout<<"  |      "<<endl;
		cout<<"  |      "<<endl;
		cout<<"_________"<<endl;
	}
	else if(wrong==4)
	{
		cout<<"  _____  "<<endl;
		cout<<"  |   |  "<<endl;
		cout<<"  |   O  "<<endl;
		cout<<"  |  /|\\ "<<endl;
		cout<<"  |      "<<endl;
		cout<<"  |      "<<endl;
		cout<<"_________"<<endl;
	}
	else if(wrong==5)
	{
		cout<<"  _____  "<<endl;
		cout<<"  |   |  "<<endl;
		cout<<"  |   O  "<<endl;
		cout<<"  |  /|\\ "<<endl;
		cout<<"  |  (   "<<endl;
		cout<<"  |      "<<endl;
		cout<<"_________"<<endl;
	}
	else if(wrong==6)
	{
		cout<<"  _____  "<<endl;
		cout<<"  |   |  "<<endl;
		cout<<"  |   O  "<<endl;
		cout<<"  |  /|\\ "<<endl;
		cout<<"  |  ( ) "<<endl;
		cout<<"  |      "<<endl;
		cout<<"_________"<<endl;
	}
	else if(wrong==7)
	{
		cout<<"  _____  "<<endl;
		cout<<"  |   |  "<<endl;
		cout<<"  |   O  "<<endl;
		cout<<"  |  /|\\ "<<endl;
		cout<<"  |  ( ) "<<endl;
		cout<<"  |  '   "<<endl;
		cout<<"_________"<<endl;
	}
	else if(wrong==8)
	{
		cout<<"  _____  "<<endl;
		cout<<"  |   |  "<<endl;
		cout<<"  |   O  "<<endl;
		cout<<"  |  /|\\ "<<endl;
		cout<<"  |  ( ) "<<endl;
		cout<<"  |  ' ' "<<endl;
		cout<<"_________"<<endl;
	}
}

int main()
{
	for (int i = 0; i < 9; ++i)
	{
		gallows(i);
	}

	return 0;
}