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
    string input4;
    cin >> input4;
    cout << "   " << endl;
    cout << "Visitor, your name is: " << input4 << endl;
    cout << input4 << ", we need your help, we have recently lost an oil drill in our off coastal sea colony, can you fix it? \n" << endl;
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
    if(decision == option1) {
        cout << "Wonderful! We thank you for your assistance" << input4 << "and will now give you the resources to complete the task at hand. \n " << endl;
    }
    if(decision == option2) {
        cout << "We do not know, we were hoping you could find this out for us, if given the right tools of course " << input4 << endl;
    }

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