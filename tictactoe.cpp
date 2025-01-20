
// This code implements the Tic-Tac-Toe game.
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int SIZE = 3;

void display_table(char board[SIZE][SIZE]) {
    cout << "The current state of the game is:" << endl;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] == '_') {
                cout << "_ ";
            } else {
                cout << board[i][j] << " ";
            }
        }
        cout << endl;
    }
}

void clear_table(char board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            board[i][j] = '_';
        }
    }
}

bool check_table_full(char board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] == '_') {
                return false;
            }
        }
    }
    return true;
}

bool check_legal_option(char board[SIZE][SIZE], int row, int col) {
    return row >= 0 && row < SIZE && col >= 0 && col < SIZE && board[row][col] == '_';
}

void generate_player2_move(char board[SIZE][SIZE]) {
    int row, col;
    srand(time(NULL)); 
    do {
        row = rand() % SIZE;
        col = rand() % SIZE;
    } while (!check_legal_option(board, row, col));
    board[row][col] = 'X';
    cout << "Player 2 has entered [" << row << ", " << col << "]" << endl;
    display_table(board);
}

int check_three_in_a_row(char board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        if ((board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != '_') ||
            (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != '_')) {
            return board[i][0] == 'O' ? 1 : 2;
        }
    }
    if ((board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != '_') ||
        (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != '_')) {
        return board[1][1] == 'O' ? 1 : 2;
    }
    return 0;
}

bool check_end_of_game(char board[SIZE][SIZE]) {
    return check_table_full(board) || check_three_in_a_row(board) != 0;
}

void get_player1_move(char board[SIZE][SIZE]) {
    int row, col;
    do {
        cout << "Player 1 enter your selection [row col]: ";
        cin >> row >> col;
        row--; 
        col--;
    } while (!check_legal_option(board, row, col));
    board[row][col] = 'O';
    display_table(board);
}

void print_winner(char board[SIZE][SIZE]) {
    int result = check_three_in_a_row(board);
    if (result == 1) {
        cout << "Congratulations, Player 1 wins!" << endl;
    } else if (result == 2) {
        cout << "Congratulations, Player 2 wins!" << endl;
    } else {
        cout << "Game over, no player wins." << endl;
    }
}

int main() {
    char board[SIZE][SIZE];

    clear_table(board);
    display_table(board);

    do {
        get_player1_move(board);
        if (check_end_of_game(board)) break;
        generate_player2_move(board);
        if (check_end_of_game(board)) break;
    } while (true);

    print_winner(board);
    return 0;
}
