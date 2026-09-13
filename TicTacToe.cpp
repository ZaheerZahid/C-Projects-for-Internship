#include<iostream>
using namespace std;

char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char player = 'X';

void showBoard() {
    cout << "\n";
    for(int i=0; i<3; i++) {
        cout << board[i][0] << " | " << board[i][1] << " | " << board[i][2] << endl;
        if(i<2) cout << "--+---+--" << endl;
    }
}

int main() {
    int choice, row, col;
    
    cout << "=== TIC TAC TOE ===" << endl;
    cout << "Player 1 = X, Player 2 = O" << endl;
    
    for(int turn = 0; turn < 9; turn++) {
        showBoard();
        cout << "Player " << player << " Enter position 1-9: ";
        cin >> choice;
        
        row = (choice-1)/3;
        col = (choice-1)%3;
        
        if(board[row][col]!= 'X' && board[row][col]!= 'O') {
            board[row][col] = player;
        } else {
            cout << "Already taken! Try again." << endl;
            turn--;
            continue;
        }
        
        if(player == 'X') player = 'O';
        else player = 'X';
    }
    
    showBoard();
    cout << "Game Over!" << endl;
    return 0;
}
