#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int healthmethodforGameD(int x) {
	int y = 10;
	return x - y;
}

void OptionSub1GameD() {
	cout << "You have decided to knock out the man that attacked you with a lightsaber, you flee the area, and find three vehicles, a hovercar, a jet, and a spaceship with half a tank of fuel, type 1, 2, or 3 for the vehicle you want" << endl;

	enum vehiclevals { hovercar = 1, jet, spaceship };

	vector<int> playervals;
	int vehicleselection;
	cin >> vehicleselection;
	playervals.push_back(vehicleselection);

	vehiclevals v;
	switch (vehicleselection)
	{
	case hovercar:
		cout << "You have pick the Hovercar!" << '\n' << endl;
		playervals.push_back(hovercar);
		break;

	case jet:
		cout << "You have picked the Jet!" << '\n' << endl;
		playervals.push_back(jet);
		break;
	case spaceship:
		cout << "You have picked the spaceship!" << '\n' << endl;
		playervals.push_back(spaceship);
		break;
	}

	cout << "You enter your vehicle of choice, which is the: " << playervals[0] << endl;
	cout << "---------------------------------------------------------------------" << endl;
	cout << "There is a problem however, troops are closing in, and your engine wont start, and system navigation is down." << '\n' << endl;
	cout << "You have three options available to you here in this case." << endl;
}

void OptionSub2GameD() {
	string input2;
}

void OptionSub3GameD() {
	string input3;
}
void GameA() {
	cout << "Hello user, Welcome to the game! Please enter your name!\n" << endl;
	int player1health = 200;
	string input;
	cin >> input;
	cout << "   " << endl;
	cout << "Your name is: " << input << endl;
}

void GameB() {
	cout << "Hello Player, Welcometh to the game! Please type thy name!\n" << endl;
	int playershealth = 200;
	string input2;
	cin >> input2;
	cout << "  " << endl;
	cout << "Your namest is: " << input2 << endl;
}

void GameC() {
	cout << "Welcome Citizen, please enter your identifying name! \n" << endl;
	int playerhealth = 200;
	string input3;
	cin >> input3;
	cout << "   " << endl;
	cout << "Your identifying name is: " << input3 << endl;
}

void GameD() {
	cout << "Hello Visitor, what is your name?" << endl;
	int userhealth = 200;
	string input4;

	cin >> input4;
	cout << "   " << endl;
	cout << "Visitor, your name is: " << input4 << endl;
	cout << input4 << ", we need your help, we have recently lost an oil drill in our off coastal sea colony, can you fix it? \n" << endl;

	std::vector<std::string> iteminventory;
	string option1 = "Option1";
	string option2 = "Option2";
	string option3 = "Option3";
	string option4 = "Option4";

	cout << "I can fix it, just give me the tools (Type Option1 to confirm this.) \n" << endl;
	cout << "Well when did this happen, and why can't you fix it? (Type Option2 to confirm this.) \n" << endl;
	cout << "I shall pass, I am not skilled enough to fix this. (Type Option3 to confirm this.) \n" << endl;
	cout << "(Shoot the person asking you for help) (Type Option4 to confirm this.) \n" << endl;
	string decision;
	cin >> decision;

	if (decision == option1) {
		cout << "Wonderful! We thank you for your assistance " << input4 << " and will now give you the resources to complete the task at hand. \n " << endl;
	}

	if (decision == option2) {
		cout << "We do not know, we were hoping you could find this out for us, if given the right tools of course " << input4 << '\n' << endl;
	}

	if (decision == option3) {
		cout << "Alright, do you need help with this, we can give you men to do this task " << input4 << '\n' << endl;
	}

	if (decision == option4) {
		cout << "Very well, then I shall now hit you " << input4 << " with my weapon, a lightsaber!" << endl;
		cout << "The Person Speaking to you about the broken oil rig gives you a minor wound, you lose 10 health" << '\n' << endl;
		int healthloss = healthmethodforGameD(userhealth);
		cout << "Player health as of now: " << healthloss << endl;
		cout << "-------------------------" << endl;
		cout << "The Person who attacked you begins to speak again: " << endl;
		cout << "Now in the name of all that is good, I shall kill you " << input4 << '\n' << endl;

		string option11 = "Option11";
		string option22 = "Option22";
		string option33 = "Option33";

		cout << "Type Option11 for the first option, which is to flee the area you are in from the attacker." << '\n' << endl;
		cout << "Type Option22 for the second option, which is to knockout the attacker, and see if a vehicle is at the location you are at, and flee that way." << '\n' << endl;
		cout << "Type Option33 for a suprise option/outcome in this case for that option in particular." << '\n' << endl;

		string selection;
		cin >> selection;

		if (selection == option11) {
			OptionSub1GameD();
		}

		if (selection == option22) {
			OptionSub2GameD();
		}

		if (selection == option33) {
			OptionSub3GameD();
		}
	}

}


int main()
{
	int a;
	int b;
	int c;
	int d;

	cout << "Hello user! 4 numbers will appear, please type 1-4 to start a text game or something, whatever I code is what you do.\n" << endl;
	cout << "For all of the games that are availible, you will start out with 200 health on each game, and have the ability to gain shield as the game goes on. \n" << endl;

	a = 1;
	b = 2;
	c = 3;
	d = 4;

	cout << "For Game A, type 1 \n" << endl;
	cout << "For Game B, type 2 \n" << endl;
	cout << "For Game C, type 3 \n" << endl;
	cout << "For Game D, type 4 \n" << endl;

	int input;
	cin >> input;

	if (input == a) {
		GameA();
	}

	if (input == b) {
		GameB();
	}

	if (input == c) {
		GameC();
	}

	if (input == d) {
		GameD();
	}

	system("pause");
	return EXIT_SUCCESS;
}