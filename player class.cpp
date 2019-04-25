#ifndef PLAYER_CPP
#define PLAYER_CPP
#include <string>
#include "Card.cpp"


using namespace std;

class Person {
	
	private;
	
	string name;
	bool is_hitting;
	Card hand[9];
	
	public;
	
		Person (){
			set_name("unkinown);
			set_hitting(true);
			
			}
			//setters
			void set_name(string n) ({name = n;}
			void set_hitting (bool h) {is_hitting = h;}
			//getters
			string get_name() { return name;}
		
		}
};
#endif