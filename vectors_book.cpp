/Vectors/
<vector>
when defining a vector you specify the type of elements in angle brackets
vector<double> values;
you can optionally specify the initial size
vector<double> values(10);
you access the vector elements as values[i] just as you do with arrays
the size member function returns the current size of a vector. in a loop that visits all vector elements, use the size member function like this
for(int i = 0; i < values.size(); i++)
{
	cout << values[i] << endl;
}
Use push_back to add an element to the end of the vector, increasing size by 1.
values.push_back(37.5);
fill a vector
vector<double> values;

double input;
while(cin >> input)
{
	values.push_back(input);
}
pop_back removes the last element of a vector.

/vectors and functions/
you can use vectors as function arguments in exactly the same way as any other values. this function computes the sum of a vector of floating point numbers.
double sum(vector<double> values)
{
	double total = 0;
	for(int i = 0; i < values.size(); i++)
	{
		total = total + values[i]; 
	}
	return total;
}
This funtion visits the vector elements, but it does not modify them. if your function modifies the elements, use a reference parameter. The following multiplies all values of a vector with a given factor.
void multiply(vector<double>& values, double factor)
{
	for(int i = 0; i < values.size(); i++)
	{
		values[i] = values[i] * factor;
	}
}
a function can return a vector. again, vectors are no different from any other values in this regard. simply build up the result in the function and return it. in this example, the squares finction returns a vector of squares from 0^2 up to (n-1)^2
vector<int> squares(int n)
{
	vector<int> squares(int n)
	{
		vector<int> result;
		for(int i = 0; i < n; i++)
		{
			result.push_back(i*i)
		}
		return result;
	}
}

copying: you simply assign it to another vector
vector<int> squares;
for(int i = 0; i < 5; i++)
{
	squares.push_back(i * i);
}
vector<int> lucky_numbers;
lucky_numbers = squares;

finding matches:
simple using vectors. collect all elements that are greater than 100
vector<double> matches;
for(int i = 0; i < values.size(); i++)
{
	if(values[i] > 100)
	{
		matches.push_back(values[i]);
	}
}

removing an element:
int last_pos = values.size() - 1;
values[pos] = values[last_pos]; //replace element at pos with last element
values.pop_back();
when removing an element from an ordered vector, first move the elements, then reduce the size
for(int i = pos + 1; i < values.size(); i++)
{
	values[i - 1] = values[i];
}
values.pop_back();

inserting an element:
when you insert an element in the middle, you still want to call push_back so that the size of the vector is increased.
int last_pos = values.size() - 1;
values.push_back(values[last pos]);
for(int i = last_pos; i > pos; i--)
{
	values[i] = values[i - 1];
}
values[pos] = new_element;