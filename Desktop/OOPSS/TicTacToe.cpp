#include <iostream>

using namespace std;
 
int main() {
    
    char arr[3][3];
    char player1, player2;
    cout << "WELCOME TO TIC TAC TOE" << endl;

    for ( int row = 0; row < 3; row++ ) {
        for ( int col = 0; col < 3; col++ ) {
            arr[row][col] = '-';
        }
    }

    for ( int row = 0; row < 3; row++ ) {
        for ( int col = 0; col < 3; col++ ) {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    bool exit = true;
    bool forInput = true;

    int n, m;
    char c;

    while ( exit == true ) {

        cout << endl;
        cout << "Enter the row and column number for player 1" << endl;
        cin >> n >> m;
        cout << "Player1 move (X)" << endl;
        cin >> c;
        forInput = true;

        if ( n >= 3 || m >= 3 || c != 'X' || arr[n][m] !='-' ) {

            while ( forInput == true ) {
                cout << "Wrong input, again take your turn" << endl;
                cout << "Enter the row and column number for player 1" << endl;
                cout << "Enter input again" << endl;
                cin >> n >> m;
                cout << "Player1 move (X)" << endl;
                cin >> c;

                if ( (n == 0 || n == 1 || n == 2) && (m == 0 || m == 1 || m == 2) && (c == 'X') ) {
                    cout << "Now let's move forward" << endl;
                    forInput = false;
                    break;
                }
            }
        }

        if ( arr[n][m] == '-' && c == 'X' ) {
            for ( int row = 0; row < 3; row++ ) {
                for ( int col = 0; col < 3; col++ ) {
                    arr[n][m] = c;
                }
            }

            cout << endl;
            for ( int row = 0; row < 3; row++ ) {
                for ( int col = 0; col < 3; col++ ) {
                    cout << arr[row][col] << " ";
                }
                cout << endl;
            }
        }

        if ( ((arr[0][0] == 'X' && arr[0][1] == 'X' && arr[0][2] == 'X') || (arr[1][0] == 'X' && arr[1][1] == 'X' && arr[1][2] == 'X') || (arr[2][0] == 'X' && arr[2][1] == 'X' && arr[2][2] == 'X') || (arr[0][0] == 'X' && arr[1][0] == 'X' && arr[2][0] == 'X') ||  (arr[0][1] == 'X' && arr[1][1] == 'X' && arr[2][1] == 'X') || (arr[0][2] == 'X' && arr[1][2] == 'X' && arr[2][2] == 'X') || (arr[0][0] == 'X' && arr[1][1] == 'X' && arr[2][2] == 'X') || arr[0][2] == 'X' && arr[1][1] == 'X' && arr[2][0] == 'X') || ((arr[0][0] == 'O' && arr[0][1] == 'O' && arr[0][2] == 'O') || (arr[1][0] == 'O' && arr[1][1] == 'O' && arr[1][2] == 'O') || (arr[2][0] == 'O' && arr[2][1] == 'O' && arr[2][2] == 'O') || (arr[0][0] == 'O' && arr[1][0] == 'O' && arr[2][0] == 'O') ||  (arr[0][1] == 'O' && arr[1][1] == 'O' && arr[2][1] == 'O') || (arr[0][2] == 'O' && arr[1][2] == 'O' && arr[2][2] == 'O') || (arr[0][0] == 'O' && arr[1][1] == 'O' && arr[2][2] == 'O') || (arr[0][2] == 'O' && arr[1][1] == 'O' && arr[2][0] == 'O')) ) {

            cout << "GAME HAS ENDED" << endl;
            
            if ( ((arr[0][0] == 'X' && arr[0][1] == 'X' && arr[0][2] == 'X') || (arr[1][0] == 'X' && arr[1][1] == 'X' && arr[1][2] == 'X') || (arr[2][0] == 'X' && arr[2][1] == 'X' && arr[2][2] == 'X') || (arr[0][0] == 'X' && arr[1][0] == 'X' && arr[2][0] == 'X') ||  (arr[0][1] == 'X' && arr[1][1] == 'X' && arr[2][1] == 'X') || (arr[0][2] == 'X' && arr[1][2] == 'X' && arr[2][2] == 'X') || (arr[0][0] == 'X' && arr[1][1] == 'X' && arr[2][2] == 'X') || (arr[0][2] == 'X' && arr[1][1] == 'X' && arr[2][0] == 'X')) ) {
                cout << "PLAYER 1 HAS WON" << endl;
                exit = false;
                break;
            }

            else if ( ((arr[0][0] == 'O' && arr[0][1] == 'O' && arr[0][2] == 'O') || (arr[1][0] == 'O' && arr[1][1] == 'O' && arr[1][2] == 'O') || (arr[2][0] == 'O' && arr[2][1] == 'O' && arr[2][2] == 'O') || (arr[0][0] == 'O' && arr[1][0] == 'O' && arr[2][0] == 'O') ||  (arr[0][1] == 'O' && arr[1][1] == 'O' && arr[2][1] == 'O') || (arr[0][2] == 'O' && arr[1][2] == 'O' && arr[2][2] == 'O') || (arr[0][0] == 'O' && arr[1][1] == 'O' && arr[2][2] == 'O') || (arr[0][2] == 'O' && arr[1][1] == 'O' && arr[2][0] == 'O')) ) {
                cout << "PLAYER 2 HAS WON" << endl;
                exit = false;
                break;
            }
        }

        else if ( arr[0][0] != '-' && arr[0][1] != '-' && arr[0][2] != '-' && arr[1][0] != '-' && arr[1][1] != '-' && arr[1][2] != '-' && arr[2][0] != '-' && arr[2][1] != '-' && arr[2][2] != '-' ) {
            cout << "GAME HAS DRAWN" << endl;
            exit = false;
            break;
        }

        cout << endl;
        cout << "Enter the row and column number for player 2" << endl;
        cin >> n >> m;
        cout << "Player2 move (O)" << endl;
        cin >> c;
        forInput = true;

        if ( n >= 3 || m >= 3 || c != 'O' || arr[n][m] !='-' ) {

            while ( forInput == true ) {
                cout << "Wrong input, again take your turn" << endl;
                cout << "Enter the row and column number for player 2" << endl;
                cout << "Enter input again" << endl;
                cin >> n >> m;
                cout << "Player2 move (O)" << endl;
                cin >> c;

                if ( (n == 0 || n == 1 || n == 2) && (m == 0 || m == 1 || m == 2) && (c == 'O') ) {
                    cout << "Now let's move forward" << endl;
                    forInput = false;
                    break;
                }
            }
        }

        if ( arr[n][m] == '-' && c == 'O' ) {
            for ( int row = 0; row < 3; row++ ) {
                for ( int col = 0; col < 3; col++ ) {
                    arr[n][m] = c;
                }
            }

            cout << endl;
            for ( int row = 0; row < 3; row++ ) {
                for ( int col = 0; col < 3; col++ ) {
                    cout << arr[row][col] << " ";
                }
                cout << endl;
            }
        }

        if ( ((arr[0][0] == 'X' && arr[0][1] == 'X' && arr[0][2] == 'X') || (arr[1][0] == 'X' && arr[1][1] == 'X' && arr[1][2] == 'X') || (arr[2][0] == 'X' && arr[2][1] == 'X' && arr[2][2] == 'X') || (arr[0][0] == 'X' && arr[1][0] == 'X' && arr[2][0] == 'X') ||  (arr[0][1] == 'X' && arr[1][1] == 'X' && arr[2][1] == 'X') || (arr[0][2] == 'X' && arr[1][2] == 'X' && arr[2][2] == 'X') || (arr[0][0] == 'X' && arr[1][1] == 'X' && arr[2][2] == 'X') || arr[0][2] == 'X' && arr[1][1] == 'X' && arr[2][0] == 'X') || ((arr[0][0] == 'O' && arr[0][1] == 'O' && arr[0][2] == 'O') || (arr[1][0] == 'O' && arr[1][1] == 'O' && arr[1][2] == 'O') || (arr[2][0] == 'O' && arr[2][1] == 'O' && arr[2][2] == 'O') || (arr[0][0] == 'O' && arr[1][0] == 'O' && arr[2][0] == 'O') ||  (arr[0][1] == 'O' && arr[1][1] == 'O' && arr[2][1] == 'O') || (arr[0][2] == 'O' && arr[1][2] == 'O' && arr[2][2] == 'O') || (arr[0][0] == 'O' && arr[1][1] == 'O' && arr[2][2] == 'O') || (arr[0][2] == 'O' && arr[1][1] == 'O' && arr[2][0] == 'O')) ) {

            cout << "GAME HAS ENDED" << endl;
            
            if ( ((arr[0][0] == 'X' && arr[0][1] == 'X' && arr[0][2] == 'X') || (arr[1][0] == 'X' && arr[1][1] == 'X' && arr[1][2] == 'X') || (arr[2][0] == 'X' && arr[2][1] == 'X' && arr[2][2] == 'X') || (arr[0][0] == 'X' && arr[1][0] == 'X' && arr[2][0] == 'X') ||  (arr[0][1] == 'X' && arr[1][1] == 'X' && arr[2][1] == 'X') || (arr[0][2] == 'X' && arr[1][2] == 'X' && arr[2][2] == 'X') || (arr[0][0] == 'X' && arr[1][1] == 'X' && arr[2][2] == 'X') || (arr[0][2] == 'X' && arr[1][1] == 'X' && arr[2][0] == 'X')) ) {
                cout << "PLAYER 1 HAS WON, CONGRATULATIONS!" << endl;
                exit = false;
                break;
            }

            else if ( ((arr[0][0] == 'O' && arr[0][1] == 'O' && arr[0][2] == 'O') || (arr[1][0] == 'O' && arr[1][1] == 'O' && arr[1][2] == 'O') || (arr[2][0] == 'O' && arr[2][1] == 'O' && arr[2][2] == 'O') || (arr[0][0] == 'O' && arr[1][0] == 'O' && arr[2][0] == 'O') ||  (arr[0][1] == 'O' && arr[1][1] == 'O' && arr[2][1] == 'O') || (arr[0][2] == 'O' && arr[1][2] == 'O' && arr[2][2] == 'O') || (arr[0][0] == 'O' && arr[1][1] == 'O' && arr[2][2] == 'O') || (arr[0][2] == 'O' && arr[1][1] == 'O' && arr[2][0] == 'O')) ) {
                cout << "PLAYER 2 HAS WON, CONGRATULATIONS!" << endl;
                exit = false;
                break;
            }
        }

        else if ( arr[0][0] != '-' && arr[0][1] != '-' && arr[0][2] != '-' && arr[1][0] != '-' && arr[1][1] != '-' && arr[1][2] != '-' && arr[2][0] != '-' && arr[2][1] != '-' && arr[2][2] != '-' ) {
            cout << "GAME HAS DRAWN" << endl;
            exit = false;
            break;
        }
    }

    return 0; 
}
