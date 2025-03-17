#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

int main()
{
    int choice, User = 0, computer = 0, AI;
    cout << "\t=====Rock--Paper--Scissors--Game=====\n" << endl;
    cout << " User\t computer" << endl;
    cout << "  " << User << "\t    " << computer << "\n" << endl;
    cout << "1.Rock\t2.Paper\t3.Scissors\n" << endl;
    srand(time(0)); 
    while (true)
    {
        cout << "Select Your Choice (1-3): ";
        cin >> choice;
        if (choice < 1 || choice > 3) {
            cout << "Invalid choice! Please select 1, 2, or 3." << endl;
            continue; 
        }
        AI = rand() % 3 + 1; 
        if (choice == AI) {
            cout << "Match Draw!" << endl;
        } else if ((choice == 1 && AI == 3) || (choice == 2 && AI == 1) || (choice == 3 && AI == 2)) {
            cout << "You Win!" << endl;
            User++;
        } else {
            cout << "Computer Wins!" << endl;
            computer++;
        }
    }
    return 0;
}
