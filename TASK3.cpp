// Tic-Tac-Toe

#include <iostream>
#include <stdlib.h>
using namespace std;

char game[3][3];

int count = 1;
void display();
void player();
void result();
bool checkWinner(char player, char game[3][3]);

void start()
{
    int r, c;

    cout << "  <-------Game starts  ------->" << endl;
    player();

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "turn of first player" << endl;
                cout << "enter row  and column number" << endl;
                cin >> r >> c;
                if ((count + 1) % 2 == 0)
                {
                    game[r - 1][c - 1] = 'X';
                }
                else
                {
                    game[r - 1][c - 1] = 'O';
                }
            }
            else
            {
                cout << "Turn of second player" << endl;
                cout << "enter row  and column number" << endl;
                cin >> r >> c;
                if ((count + 1) % 2 == 0)
                {
                    game[r - 1][c - 1] = 'O';
                }
                else
                {
                    game[r - 1][c - 1] = 'X';
                }
            }

            display();
            if (checkWinner('X', game))
            {
                cout << "Player X wins!" << endl;
                break;
            }
            else if (checkWinner('O', game))
            {
                cout << "Player O wins!" << endl;
                break;
            }
        }
        if (checkWinner('X', game) || checkWinner('O', game))
        {

            break;
        }
    }
    if (checkWinner('X', game) && checkWinner('O', game))
    {
        result();
    }
}

void reset()
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            game[i][j] = '-';
        }
        cout << "\n";
    }
}
void player()
{
    if ((count + 1) % 2 == 0)
    {
        cout << " player 1  --> X" << endl
             << " player 2  --> O" << endl;
    }
    else
    {
        cout << " player 1  --> 0" << endl
             << " player 2  --> X" << endl;
    }
}
bool checkWinner(char player, char game[3][3])
{
    for (int i = 0; i < 3; ++i)
    {
        if ((game[i][0] == player && game[i][1] == player && game[i][2] == player) ||
            (game[0][i] == player && game[1][i] == player && game[2][i] == player))
        {
            return true;
        }
    }

    if ((game[0][0] == player && game[1][1] == player && game[2][2] == player) ||
        (game[0][2] == player && game[1][1] == player && game[2][0] == player))
    {
        return true;
    }

    return false;
}

bool full(char game[3][3])
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if (game[i][j] == '-')
            {
                return false;
            }
        }
    }
}

void result()
{
    if (checkWinner('X', game))
    {
        cout << "Player X wins!" << endl;
    }
    else if (checkWinner('O', game))
    {
        cout << "Player O wins!" << endl;
    }
    else if (full(game))
    {
        cout << "The game is a draw!" << endl;
    }
    else
    {
        cout << "The game is ongoing" << endl;
    }
}
void display()

{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (game[i][j] == 'X')
            {
                cout << " X ";
            }
            else if (game[i][j] == 'O')
            {
                cout << " O ";
            }
            else
            {
                cout << " - ";
            }
        }
        cout << "\n";
    }
}
int main()
{
    char player1, player2, a;
    int choice;

    cout << "  *******   Welcome to the game   ********" << endl;
    display();

    cout << "1 --> START THE GAME" << endl
         << "2 --> Exit" << endl;
    cin >> choice;

    if (choice == 1)
    {
        count++;
        start();
    }
    else
    {
        exit(0);
    }
    int num;

    while (num = 1)
    {

        cout << "Want to play again" << endl
             << "Y for yes and N for no" << endl;
        cin >> a;
        if (a == 'Y')
        {
            count++;
            reset();
            start();
        }
        else
        {
            cout << "Thank   you" << endl
                 << "**********************************" << endl
                 << "Exiting game" << endl;
            exit(0);
        }
    }

    return 0;
}