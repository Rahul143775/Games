#include<iostream>
#include<conio.h>
using namespace std;
int checkwin();
void print_board();
char board[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

int main() {
    system("color 2");
    int player = 1, input, status = -1;
    print_board();
    while (status == -1) {
        player = (player % 2 == 0) ? 2 : 1;
        char mark = (player == 1) ? 'X' : 'O';
        cout << "\033[34;44mEnter the number player " << player << " :";
        cin >> input; 
        
        if (input < 1 || input > 9 || board[input] == 'X' || board[input] == 'O') {
            cout << "Invalid input! Please try again.";
            continue; 
        }
        
        board[input] = mark;
        print_board();
        int result = checkwin();
        if (result == 1) {
            cout << "Player " << player << " is the winner!" << endl;
            return 0;
        } else if (result == 0) {
            cout << "Draw!" << endl;
            return 0;
        }
        player++;
    }
    return 0;
}

void print_board() {
    cout << "\n\n"; 
    cout << "=== TIC TAC TOE ===\n\n";
    cout << "     |     |     \n";
    cout << board[1] << "    |  " << board[2] << "  |  " << board[3] << "\n";
    cout << "_____|_____|_____\n";
    cout << "     |     |     \n";
    cout << board[4] << "    |  " << board[5] << "  |  " << board[6] << "\n";
    cout << "_____|_____|_____\n";
    cout << "     |     |     \n";
    cout << board[7] << "    |  " << board[8] << "  |  " << board[9] << "\n";
    cout << "     |     |     \n";
    cout << "\n\n";
}

int checkwin() {
    if (board[1] == board[2] && board[2] == board[3]) {
        return 1;
    }
    if (board[4] == board[5] && board[5] == board[6]) {
        return 1;
    }
    if (board[7] == board[8] && board[8] == board[9]) {
        return 1;
    }
    if (board[3] == board[6] && board[6] == board[9]) {
        return 1;
    }
    if (board[2] == board[5] && board[5] == board[8]) {
        return 1;
    }
    if (board[1] == board[4] && board[4] == board[7]) {
        return 1;
    }
    if (board[1] == board[5] && board[5] == board[9]) {
        return 1;
    }
    if (board[3] == board[5] && board[5] == board[7]) {
        return 1;
    }
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if (board[i] == 'X' || board[i] == 'O') {
            count++;
        }
    }
    if (count == 9) {
        return 0;
    }
    return -1;
}
