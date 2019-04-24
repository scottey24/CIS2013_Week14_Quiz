#include <stdio.h>
#include <ctime>
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

struct DefineCard
{
	string suit;
	string face;
	int pointsValue;   
	int cardStatus;  
} Deck[53]; 


int main()
{
	srand((unsigned)time(0));
	int New_Suit = 0;
	string faces[13] = { "Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };
	string suits[4] = { "Diamonds", "Clubs", "Hearts", "Spades" };
	string Status[3] = { "In Play", "In Deck", "Discard Pile" };
	int CardValue[13] = { 11, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10 };
	for (int x = 0; x < 52; x++)
	{

		Deck[x].face = faces[x % 13];
		Deck[x].suit = suits[New_Suit];
		Deck[x].pointsValue = CardValue[x % 13];
		Deck[x].cardStatus = 1;
		if ((x + 1) % 13 == 0)
			New_Suit++;
	}
	cout << "Straight deck of cards.." << endl << endl;
	for (int x = 0; x < 52; x ++)
	{
		
		cout << Deck[x].face << " of " << Deck[x].suit << " : Value of " << Deck[x].pointsValue << " : " << Status[Deck[x].cardStatus] << endl;
	}

	for (int x = 0; x < 600; x++)
	{
		int a = rand() % 52;
	
		
		Deck[52].face = Deck[a].face;
		Deck[52].suit = Deck[a].suit;
		Deck[52].pointsValue = Deck[a].pointsValue;
		Deck[52].cardStatus = Deck[a].cardStatus;

	
	}

	cout << endl << "Shuffled deck of cards.." << endl << endl;

	for (int x = 0; x < 52; x ++)
	{
		
		cout << Deck[x].face << " of " << Deck[x].suit << " : Value of " << Deck[x].pointsValue << " : " << Status[Deck[x].cardStatus] << endl;
	}

	cout << endl << endl;
	cin >> New_Suit;
}
		