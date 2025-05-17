#include <iostream>
#include <time.h>
#include <stdlib.h> 
using namespace std;

void gameGenerator(){
	char G;
	char answer;

	//check idea generator!
	//see if you see this message!
	
	//                  0               1           2                3             4
	string Type[5] = {"RPG", "Interactive Story", "FPS", "Chaotically Indie", "Fast Moving"};

	string something;
	
	string Bosses[3] = {"Simple but annoying", "Unlocked as a character afterwards", "possessing a baddass weapon"};
	
	int InventOrLives[4] = {3, 5, 9, 12};
	

	cout << "Welcome to the Game Idea Generator \n";
	
	while (answer != 'E'){
		srand(time(NULL));
		int randomType = (rand() % 5);
	
		srand(time(NULL));
		int randomBoss = (rand() % 3);
	
		srand(time(NULL));
		int randomSpaceOrLives = (rand() % 4);
		
		cout << " \n";
		cout << " \n";
		cout << "Press E to exit \n";
		cout << " \n";
		cout << "Press G to generate an idea \n";
		cin >> answer;
		cout << " \n";
		cout << " \n";
		
		if (answer == 'G'){
			cout << "The game type: " << Type[randomType] << endl;
			cout << "If it has Final Boss(es) the boss should be " << Bosses[randomBoss] << endl;
			cout << "The number of inventory space OR lives the character has should be " << InventOrLives[randomSpaceOrLives] << endl;
		}
		
	
	}
}

void filmGenerator(){
	char M;
	char answer;
	
	//                     0          1                 2                      3
	string Genre[5] = {"Horror", "Fantasy", "High School Stereotype Life", "Musical:(", "Ages 13-17"};
	
	int numMC[3] = { 1, 2, 0};
	
	string filmItem[9] = {"axe", "cherry tree", "blank tombstone", "burnt feather", "piano missing keys", "reptile scale", "origami swan","warm pillow", "damp passport"};
	//                      0          1               2                 3                      4               5               6             7                 8
	

	
	cout << "Welcome to the Film Idea Generator \n";

	
	while (answer != 'E'){
		//idk it's not random
		
		srand(time(NULL));
		int randomGenre = (rand() % 5);
	
		srand(time(NULL));
		int randomNum = (rand() % 3);
	
		srand(time(NULL));
		int randomItem = (rand() % 9);
        //for film items 
			
	
		cout << "(Press E to exit} \n";
		cout << " \n";
		cout << "Press M to generate an idea \n";
		cin >> answer;
		cout << " \n";
		cout << " \n";
	
		if (answer == 'M'){
			cout << "Genre: " << Genre[randomGenre] << endl;
			cout << "The film should have " << numMC[randomNum] << " main character(s) \n";
			cout << "Item that must included in the film: " << filmItem[randomItem] << endl;
		}
		
		if (answer == 'E'){
			break;
		}
	
	}
	
}


int main(){
	char E, F, G;
	char res;
	
	
	while (res != 'E'){
		cout << "Press F for the Film Idea Generator. Press G for the Game Idea Generator \n";
		cin >> res;
		
		if (res == 'F'){
			filmGenerator();
		}
		
		if (res == 'G'){
			gameGenerator();
		}
	}
	
	if (res == 'E'){
		return 0;
	}
	
	
	return 0;
}
