/*
CSC 150 Workshop 12
Jonny Comes, 2015-10-9
This program converts numbers to roman numberals
*/
#include <iostream>
#include <sstream>

using namespace std;

string roman_digit(int n, string one, string five, string ten)
{
	if(n == 0)
	{
		return "";
	}
	else if(n == 1)
	{
		return one;
	}

	else if(n == 2)
	{
		return one + one;
	}
	else if(n == 3)
	{
		return one + one + one;
	}
	else if(n == 4)
	{
		return one + five;
	}
	else if(n == 5)
	{
		return five;
	}
	else if(n == 6)
	{
		return five + one;
	}
	else if(n == 7)
	{
		return five + one + one;
	}
	else if(n == 8)
	{
		return five + one + one + one;
	}
	else if(n == 9)
	{
		return one + ten;
	}

	else
	{
		return "";
	}
}

string decimal_to_roman(int n)
{
	int ones, tens, hunds, thous;
	ones = n % 10;
	n = n / 10;
	tens = n % 10;
	n = n / 10;
	hunds = n % 10;
	thous = n / 10;
	string rom_one = roman_digit(ones, "I", "V", "X");
	string rom_ten = roman_digit(tens, "X", "L", "C");
	string rom_hund = roman_digit(hunds, "C", "D", "M");
	string rom_thous = roman_digit(thous, "M", "?", "!");
	return rom_thous + rom_hund + rom_ten + rom_one;

}

int roman_values(char roman_input)
{
	if(roman_input == 'I')
	{
		return 1;
	}
	else if(roman_input == 'V')
	{
		return 5;
	}
	else if(roman_input == 'X')
	{
		return 10;
	}
	else if(roman_input== 'L')
	{
		return 50;
	}
	else if(roman_input == 'C')
	{
		return 100;
	}
	else if(roman_input == 'D')
	{
		return 500;
	}
	else if(roman_input == 'M')
	{
		return 1000;
	}
	else
	{
		return 0;
	}
}

int roman_to_integer(string roman_input)
{
	int return_value = 0;

	for(int i = 0; i < roman_input.length(); i++)
	{
		if(roman_values(roman_input[i]) >= (roman_values(roman_input[i + 1])))
		{
			return_value = return_value + roman_values(roman_input[i]);
		}
		else
		{
			return_value = return_value - roman_values(roman_input[i]);
		}
	}
	return return_value;
}


int main()
{
	cout << "Please enter an integer between 4000 and 0: ";
	int n;
	cin >> n;
	cout << decimal_to_roman(n) << endl;

	cout << "Please enter a roman numeral: ";
	string roman_input;
	cin >> roman_input;
	cout << roman_to_integer(roman_input) << endl;

	for(int i = 0; i < 4000; i++)
	{
		int test;
		test = roman_to_integer(decimal_to_roman(i));
		if(i != test)
		{
			cout << "ERROR: Loop variable = " << i << ",  roman numeral = " << roman_input << ",  value = " << n << endl;
		}
	}

	cout << "Please enter either an integer value or a roman numeral: ";
	string new_input;
	cin >> new_input;

	if(roman_to_integer(new_input) == 0)
	{
		stringstream string_to_int;
		int last_input;
		string_to_int << new_input;
		string_to_int >> last_input;
		cout << decimal_to_roman(last_input) << endl;
	}
	else
	{
		cout << roman_to_integer(new_input);
	}

	return 0;
}