#include <iostream>

using namespace std;

char matrix[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
char player = 'X';
int counter;

/**
Expected Display of the game:

+-+-+-+
|1|2|3|
+-+-+-+
|1|2|3|
+-+-+-+
|1|2|3|
+-+-+-+

**/

void Display() {
    system("cls"); // This refreshes the command line whenever the new input is entered
    cout << "Tic Tac Toe" << "\n\n";
    for (int i = 0; i < 3; i++) {
        cout << "+---+---+---+" << endl;
        cout << "| ";
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " | ";
        }
        cout << endl;
    }
    cout << "+---+---+---+" << endl;
    cout << endl;
}


void Input() {
    int a;
    cout << "Player " << player << ", Enter the field's number (1 to 9): ";
    cin >> a;

    if (cin.fail()) {
        cin.clear();
        cin.sync();
    }

    if (a == 1) {
        if (matrix[0][0] == '1') {
            matrix[0][0] = player;
        } else {
            cout << "You can't change the occupied field again!" << endl;
            Input();
        }
    } else if (a == 2) {
        if (matrix[0][1] == '2') {
            matrix[0][1] = player;
        } else {
            cout << "You can't change the occupied field again!" << endl;
            Input();
        }
    } else if (a == 3) {
        if (matrix[0][2] == '3') {
            matrix[0][2] = player;
        } else {
            cout << "You can't change the occupied field again!" << endl;
            Input();
        }
    } else if (a == 4) {
        if (matrix[1][0] == '4') {
            matrix[1][0] = player;
        } else {
            cout << "You can't change the occupied field again!" << endl;
            Input();
        }
    } else if (a == 5) {
        if (matrix[1][1] == '5') {
            matrix[1][1] = player;
        } else {
            cout << "You can't change the occupied field again!" << endl;
            Input();
        }
    } else if (a == 6) {
        if (matrix[1][2] == '6') {
            matrix[1][2] = player;
        } else {
            cout << "You can't change the occupied field again!" << endl;
            Input();
        }
    } else if (a == 7) {
        if (matrix[2][0] == '7') {
            matrix[2][0] = player;
        } else {
            cout << "You can't change the occupied field again!" << endl;
            Input();
        }
    } else if (a == 8) {
        if (matrix[2][1] == '8') {
            matrix[2][1] = player;
        } else {
            cout << "You can't change the occupied field again!" << endl;
            Input();
        }
    } else if (a == 9) {
        if (matrix[2][2] == '9') {
            matrix[2][2] = player;
        } else {
            cout << "You can't change the occupied field again!" << endl;
            Input();
        }
    } else {
        cout << "Please enter a valid number." << endl;
        Input();
    }
}


void TogglePlayer() {
    if (player == 'X') {
        player = 'O';
    } else {
        player = 'X';
    }
}


char Win() {
    // Checking process for player X
    // Checking each row EX) {'1','2','3'} or {'4','5','6'} or {'7','8','9'}
    if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X') {
        return 'X';
    }
    if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X') {
        return 'X';
    }
    if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X') {
        return 'X';
    }

    // Checking each column EX) {'1','4','7'}, {'2','5','8'}, {'3','6','9'}
    if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X') {
        return 'X';
    }
    if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X') {
        return 'X';
    }
    if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X') {
        return 'X';
    }

    // Checking diagonally from left to right && right to left EX) {'1','5','9'}, {'3','5','7'}
    if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X') {
        return 'X';
    }
    if (matrix[0][2] == 'X' && matrix[1][1] == 'X' && matrix[2][0] == 'X') {
        return 'X';
    }

    // Checking process for player O
    // Checking each row EX) {'1','2','3'} or {'4','5','6'} or {'7','8','9'}
    if (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O') {
        return 'O';
    }
    if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O') {
        return 'O';
    }
    if (matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O') {
        return 'O';
    }

    // Checking each column EX) {'1','4','7'}, {'2','5','8'}, {'3','6','9'}
    if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O') {
        return 'O';
    }
    if (matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O') {
        return 'O';
    }
    if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O') {
        return 'O';
    }

    // Checking diagonally from left to right && right to left EX) {'1','5','9'}, {'3','5','7'}
    if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O') {
        return 'O';
    }
    if (matrix[0][2] == 'O' && matrix[1][1] == 'O' && matrix[2][0] == 'O') {
        return 'O';
    }

    return '/';
}


int main()
{
    counter = 0;
    cout << "Tic Tac Toe" << endl;
    Display();
    while (1) {
        counter++;
        Input();
        Display();

        if (Win() == 'X') {
            cout << "Player X won the game!" << endl;
            break;
        } else if (Win() == 'X') {
            cout << "Player O won the game!" << endl;
            break;
        } else if (Win() == '/' && counter == 9) {
            cout << "It's a draw!" << endl;
            break;
        }

        TogglePlayer();
    }
    return 0;
}
