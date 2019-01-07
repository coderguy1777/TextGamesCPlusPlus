#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include <Windows.h>
#include <conio.h>
using namespace std;

int healthmethodforGameD(int x) {
	int y = 10;
	return x - y;
}

namespace roomitems {
	vector<string>roomitem;
	void func() {
		string item1 = "canteen";
		string item2 = "nano-ions";
		string item3 = "haloinien";
		string item4 = "thermal grenade";
		string item5 = "remote detonater";
		roomitem.push_back(item1);
		roomitem.push_back(item2);
		roomitem.push_back(item3);
		roomitem.push_back(item4);
		roomitem.push_back(item5);

		for (unsigned int loopvar = 0; loopvar < roomitem.size(); loopvar++) {
			cout << "Item " << loopvar + 1 << ": " << roomitem[loopvar] << endl;
		}

	}
}

namespace craftinglist {
	vector<string>craftrecipies;
	vector<string>food;
	vector<string>weapons;
	vector<string>ammo;
	void listfunction() {
		string recipe1 = "Explosives";
		string recipe2 = "Weapons";
		string recipe3 = "Buildings";
		string recipe4 = "Furniture";
		string recipe5 = "Food";

		craftrecipies.push_back(recipe1);
		craftrecipies.push_back(recipe2);
		craftrecipies.push_back(recipe3);
		craftrecipies.push_back(recipe4);
		craftrecipies.push_back(recipe5);
	}
	void listfunction2() {
		string food1 = "Apples";
		string food2 = "Hamburgers";
		string food3 = "Hot Dogs";
		string food4 = "M&M's";
		string food5 = "Carrots";

		food.push_back(food1);
		food.push_back(food2);
		food.push_back(food3);
		food.push_back(food4);
		food.push_back(food5);
	}

	void listfunction3() {
		string weapon1 = "Sword";
		string weapon2 = "Hunting Rifle";
		string weapon3 = "Knife";
		string weapon4 = "Dagger";
		string weapon5 = "Gattling gun";
		string weapon6 = "Broadsword";
		string weapon7 = "Pot";
		string weapon8 = "Sniper Rifle";
		string weapon9 = "MiniGun";
		string weapon10 = "Katana Blade"; 
		string weapon11 = "Laser Gun";
		string weapon12 = "Gattling Laser Cannon";
		string weapon13 = "Fusion Cannon";
		string weapon14 = "Helios Gun";
		string weapon15 = "Sun Gun";
		string weapon16 = "Demerit Gattling gun";
		string weapon17 = "The Infinity Blade";
		string weapon18 = "Battle Mace";
		string weapon19 = "Warthog";
		string weapon20 = "Stevianian Sword";

		weapons.push_back(weapon1);
		weapons.push_back(weapon2);
		weapons.push_back(weapon3);
		weapons.push_back(weapon4);
		weapons.push_back(weapon5);
		weapons.push_back(weapon6);
		weapons.push_back(weapon7);
		weapons.push_back(weapon8);
		weapons.push_back(weapon9);
		weapons.push_back(weapon10);
		weapons.push_back(weapon11);
		weapons.push_back(weapon12);
		weapons.push_back(weapon13);
		weapons.push_back(weapon14);
		weapons.push_back(weapon15);
		weapons.push_back(weapon16);
		weapons.push_back(weapon17);
		weapons.push_back(weapon18);
		weapons.push_back(weapon19);
		weapons.push_back(weapon20);
	}

	void ammofunction() {
		string ammo1 = "Laser ammo";
		string ammo2 = "Demerits";
		string ammo3 = "5.56mm rounds";
		string ammo4 = "Nuclear Fusion Cores";
		string ammo5 = "Laser cores";
		string ammo6 = "Hydrogen Fuel";
		string ammo7 = ".50 Caliber Rounds";
		string ammo8 = ".24 Caliber Rounds";
		string ammo9 = "Knife Sharpening tools";
		string ammo10 = "Battle Mace Spikes";
	}
}

using namespace roomitems;
void suboptiongamed1() {
	vector<string>playerinv;
	cout << "You need to the blow the vehicle as quickly as possible, there are items all around, would you like to scan for these items, if yes, type yes, if no, type no." << endl;
	cout << "You have to blow up the vehicle, you have 30 seconds to do so." << '\n' << endl;
	cout << "To blow up the vehicle, you'll need explosive items." << '\n' << endl;
	cout << "Hold the key, (x), for 3 seconds to scan for nearby items" << endl;

	char in = _getch();

	if (in == 'x') {
		int scantime = 3;
		for (int timeleft = scantime; timeleft > 0; timeleft--) {
			Sleep(1000);
			cout << "Scanning vehicle...." << '\n' << endl;
			if (timeleft < 0) {
				cout << "Scanning has stopped, stop pressing x" << endl;
				continue;
			}

		}
	}

	cout << "The room is now scanned, here are the results: " << '\n' << endl;
	func();
	cout << "---------------------------------------------" << endl;
	cout << "Now with the items known, you can pick 3 items, please input the item number in the vehicle that you would like in your inventory, but add the items as array indicies." << endl;
	cout << "---------------------------------------------" << endl;
	cout << "Type 0 for item 1, 1 for item 2, and so on when selecting items in this case." << endl;


	int item1, item2, item3;
	cout << "Type the first item index you would like." << endl;
	cin >> item1;
	playerinv.push_back(roomitem[item1 - 1]);
	cout << "Now type the second item index you would like." << endl;
	cin >> item2;
	playerinv.push_back(roomitem[item2 - 1]);
	cout << "Now type the final item index you would like, and be quick about it you piece of shit." << endl;
	cin >> item3;
	cout << '\n' << endl;
	cout << "Now, you must craft these items into a standard 1 megaton bomb to blow up your vehicle of choice." << endl;
	cout << "-------------------------------------------------------------------------------------------------" << endl;
	cout << "To Craft any item, you will need to type a letter combination in order to craft the item needed." << endl;
	cout << "This list can be shown via pressing i, which will bring up the item list for crafting." << endl;

}

void suboptiongamed2() {
	cout << "You have decided to fight the enemy with a makeshift weapon while you repair the vehicle" << endl;
}

void OptionSub1GameD() {
	cout << "You have decided to knock out the man that attacked you with a lightsaber, you flee the area, and find three vehicles, a hovercar, a jet, and a spaceship with half a tank of fuel, type 1, 2, or 3 for the vehicle you want" << endl;

	enum vehiclevals { hovercar = 1, jet, spaceship };

	vector<string> playervals;
	int vehicleselection;
	cin >> vehicleselection;

	vehiclevals v;

	switch (vehicleselection)
	{
	case hovercar: {
		string hoverrcar = "Hovercar";
		playervals.push_back(hoverrcar);
		break;
	}

	case jet: {
		string jett = "Jet";
		playervals.push_back(jett);
		break;
	}

	case spaceship: {
		string spacceship = "Spaceship";
		playervals.push_back(spacceship);
		break;
	}
	default: {
		cout << "Invalid choice try again for a vehicle selection, you typed an invalid input." << endl;
	}
	}

	cout << "You enter your vehicle of choice, which is the: " << playervals[0] << endl;
	cout << "---------------------------------------------------------------------" << endl;
	cout << "There is a problem however, troops are closing in, and your engine wont start, and system navigation is down." << '\n' << endl;
	cout << "You have three options available to you here in this case." << endl;
	cout << "---------------------------------------------------------------------" << endl;
	cout << "Your first option is to blow up your vehicle of choice, and flee the scene" << endl;
	cout << "Your second option is to make a weapon from the ship you make, and fight off the approaching threat while you fix the vehicle you are using." << endl;
	cout << "Your third and final option is to fight the threat off with every weapon you can make." << endl;
	cout << "---------------------------------------------------------------------" << endl;
	cout << "To choose an option, as it has been before, type 1 for option 1, 2 for option 2, and 3 for option 3." << endl;

	enum enemyfightchoices { option111 = 1, option222, option333 };

	int userinput2;
	cin >> userinput2;


	switch (userinput2) {

	case option111: {
		cout << "You have chosen to blow up the vehicle and flee the scene with the encroaching enemy in sight." << endl;
		suboptiongamed1();
		break;
	}

	case option222: {
		cout << "You have chosen to make a weapon from the items in your vehicle, and to hold off the encroaching enemy during the repair process." << endl;
		break;
	}

	case option333: {
		cout << "You have chosen to fight the encroaching enemy until you are the last man standing, get ready to fight with every possible weapon in your vehile available to you." << endl;
		break;
	}

	default: {
		cout << "You have typed an invalid option for choice selection for this part of the game, please try again." << endl;
	}
	}
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
		cout << "Type Option33 for a surprize option/outcome in this case for that option in particular." << '\n' << endl;

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
	cout << "For all of the games that are available, you will start out with 200 health on each game, and have the ability to gain shield as the game goes on. \n" << endl;

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