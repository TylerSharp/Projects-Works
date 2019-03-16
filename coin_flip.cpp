#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));

	int coin = rand() % 2;
	// coin is either 0 (heads) or 1 (tails)

	if(coin == 0)
	{
		cout << "Heads" << endl;
	}
	else
	{
		cout << "Tails" << endl;
	}

	return 0;
}
