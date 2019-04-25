#include <iostream>
#include <string>
#include "Player.cpp"
#include "Card.cpp"

using namespace std;
int main (){
	string player 1;
	char hors ='h';
	string suites[] = { "diamonds", "club", "spades", "hearts" };
	char vals [] = { 'A', '2','3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'}
	;
	card deck[52];
	Person dealer;
	Person player 
	
	
	dealer.set_name("Dealer");
	//create users
	cout << "Enter the name of yhour player:";
	cin >> player1;
	player.set_name(player1);
	
	//populate deck of cards
	int cnt = 0;
	for(int i=0;i<4;i++){
		string suite = suites [i];
		for(int j=1;j<=13;j++){
			char v = vals[j];
			deck[cnt].set_weight (j);
			deck[cnt].set_suite(s);
			cnt++;
		}
	}
	
	
	cout << " dealer has a A of diamond, and a 5 of club"<< endl;
	cout << player1>> "has a A of spades , and a K of Heart" << endl;
	cout << "(h)it or (s)tay;";
	cin >> hOrs
	palyer.set_hitting(hOrs); 
	
	cout << " Printing our deck of cards:" << endl;
	for(int i=0; i<52;i++){
		cout<< deck[i].get_ value() << "of" << deck [i].get_suites << endl;
	return 0
}
	