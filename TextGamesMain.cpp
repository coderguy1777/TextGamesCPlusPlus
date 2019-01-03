#include "pch.h"
#include <iostream>
#include <string>
using namespace std;


void GameA() {
	cout << "Hello user, Welcome to the game! Please enter your name!\n" << endl;
	string input; 
	cin >> input;
	cout << "   " << endl;
	cout << "Your name is: " << input << endl;
}

void GameB() {
	cout << "Hello Player, Welcometh to the game! Please type thy name!\n" << endl;
	string input2;
	cin >> input2;
	cout << "  " << endl;
	cout << "Your namest is: " << input2 << endl;
}

void GameC() {
	cout << "Welcome Citizen, please enter your identifying name! \n" << endl;
	string input3;
	cin >> input3;
	cout << "   " << endl;
	cout << "Your identifying name is: " << input3 << endl;
}

void GameD() {
	cout << "Hello Visitor, what is your name?" << endl;
}

int main()
{
	int a;
	int b;
	int c;
	int d;

	cout << "Hello user! 4 numbers will appear, please type 1-4 to start a text game or something, whatever I code is what you do.\n" << endl;

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

	if (input == 1) {
		GameA();
	}

	if (input == 2) {
		GameB();
	}

	if (input == 3) {
		GameC();
	}

	if (input == 4) {
		GameD();
	}

	system("pause");
	return EXIT_SUCCESS;
}