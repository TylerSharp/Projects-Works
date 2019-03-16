/*
CSC 150 Workshop 12
Jonny Comes, 2015-10-9
This program converts roman numerals to numbers
*/

#include <iostream>

using namespace std;

/**
	convert a single roman letter to its decimal value
	@param value
	@param roman_letter is one of I, V, X, L, C, D, M
	@param decimal value. Return 0 for invalid input
*/
int decimal_value(string roman_letter)
{
	if(roman_letter == "I")
	{
		return 1;
	}
	else if(roman_letter == "V")
	{
		return 5;
	}
	else if(roman_letter == "X")
	{
		return 10;
	}
	else if(roman_letter == "L")
	{
		return 50;
	}
	else if(roman_letter == "C")
	{
		return 100;
	}
	else if(roman_letter == "D")
	{
		return 500;
	}
	else if(roman_letter == "M")
	{
		return 1000;
	}
	else
	{
		return 0;
	}
}
/**
	converts a Roman number to a decimal
	@param roman_number any Roman number
	@return deccimal value of roman_number
*/

int roman_to_decimal(string roman_number)
{
	int total = 0;
	while(roman_number != "")
	{
		string first = roman_number.substr(0,1);
		string second = roman_number.substr(1,1);
		if(decimal_value(first) >= decimal_value(second))
		{
			total = total + decimal_value(first);
			roman_number = roman_number.substr(1);
		}
		else
		{
			total = total + decimal_value(second) - decimal_value(first);
			roman_number = roman_number.substr(2);
		}
	}
	return total;
}

int main()
{
	cout << "Enter a Roman Number: ";
	string number;
	cin >> number;
	cout << roman_to_decimal(number) << endl;

	return 0;
}