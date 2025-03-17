#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    string name;
    int amount, random, betamount, user;
    srand(time(0));
    random = rand() % 10 + 1;
    cout << "\t======Casino Game======" << endl;
    cout << "You Choose Number Between 1 to 10 :" << endl;
    cout << "Enter Your Name : ";
    cin >> name;
    cout << "Enter Deposit Amount : $";
    cin >> amount;
    cout << "WELCOME " << name << " ARE YOU READY TO PLAY!" << endl;
    cout << "Enter Bet Amount : $";
    cin >> betamount;
    if (betamount <= amount) {
        cout << "Enter Number Between (1-10) : ";
        cin >> user;
        if (user < 1 || user > 10) {
            cout << "Invalid number! Please choose a number between 1 and 10." << endl;
        } else {
            if (user == random) {
                cout << "You Win! Your winnings are: $" << betamount * 10 << endl;
            } else {
                cout << "You Lose! You bet $" << betamount << ". Available Amount Is: $" << amount - betamount << endl;
            }
        }
    } else {
        cout << "Insufficient Amount! Deposit and Play." << endl;
    }
    return 0;
}
