#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

/**
randomly inititalize the number of piles and the number of cards in each pile
@param piles the number of cards in each ple
@size number of piles
*/
void initialize_piles(int piles[], int& size)
{
	int unpiled_cards = 45;
	While(unpiled_cards > 0)
	{
		//generate a number between 1 and unpiled_cards to make the next pile
		piles[size] = rand() % unpiled_cards + 1;
		unpiled_cards = unpiled_cards - piles[size];
		size++;

	}
}

/**
prints the current state of the game to the screen
@param piles the numbers of cards in each pile
@param isze then number of piles 
*/
void print_piles(int piles[], int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << piles[i] << " ";
	}
	cout << endl;
}

/**
check if the game is over
param piles the numbers of cards in each pile
@param isze then number of piles
@return true if the piles are 1,2,3,.....9 in any order
*/

bool game_over(int piles[], int size)
{

}
/**
play a single round of the game
param piles the numbers of cards in each pile
@param isze then number of piles
*/
void play_round(int pile[], int size)
{
	remove_a_card_from_each_pile(pile, size);
	add_new_pile_to_end(piles, size);
	remove_zero_piles(pile, size);
}

int main()
{
	srand(time(0));
	int piles[50]; //need at least 45
	int size = 0;
	initialize_piles(piles, size);
	print_piles(piles, size);
	while(!game_over(piles, size))
	{
		play_round(pilles, size);
		print_piles(piles, size);
	}
	return 0;
	
}