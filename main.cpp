#include <iostream>
#include <vector>

using namespace std;

#define edl '\n'

vector<vector<char>> board = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

char player('x');

int nom;

void draw_board()
{
    system("cls");
    cout << edl << edl << "\t\t\t\t\tWelcome TO \" Tic Tac Toe Game \" |^_^|" << edl << edl << edl << edl;
    cout << "\t\t     |     |     " << edl;
    cout << "\t\t  " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << " " << edl;
    cout << "\t\t_____|_____|_____" << edl;
    cout << "\t\t     |     |     " << edl;
    cout << "\t\t  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << " " << edl;
    cout << "\t\t_____|_____|_____" << edl;
    cout << "\t\t     |     |     " << edl;
    cout << "\t\t  " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << " " << edl;
    cout << "\t\t     |     |     " << edl << edl;
}

void input_number()
{
    int num;
    bool valid_input(false);
    while (!valid_input)
    {
        cout << "It's \"" << player << "\" turn. Press a valid number: ";
        cin >> num;
        if (num > 0 && num < 10)
        {
            int row((num - 1) / 3), col((num - 1) % 3);
            if (board[row][col] == num + '0')
            {
                board[row][col] = player;
                valid_input = true;
            }
            else
                cout << "This field is already occupied. Choose another!" << edl;
        }
        else
            cout << "Please enter a valid number from 1 to 9..:)" << edl;
    }
}

void change_player()
{
    player = (player == 'x' ? 'o' : 'x');
}

char who_win()
{
    vector<char> players = {'x', 'o'};
    for (auto player : players)
    {
        // Check rows
        for (int row(0); row < 3; ++row)
        {
            bool win(true);
            for (int col(0); col < 3; ++col)
            {
                if (board[row][col] != player)
                {
                    win = false;
                    break;
                }
            }
            if (win)
                return player;
        }
        // Check columns
        for (int col(0); col < 3; ++col)
        {
            bool win(true);
            for (int row(0); row < 3; ++row)
            {
                if (board[row][col] != player)
                {
                    win = false;
                    break;
                }
            }
            if (win)
                return player;
        }
        // Check diagonals
        if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
            return player;
        if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
            return player;
    }
    return '#';
}

void play_again(int winner);

int main()
{
    nom = 0;
    draw_board();
    while (true)
    {
        ++nom;
        input_number();
        draw_board();
        if (who_win() == 'x')
            play_again(1);
        else if (who_win() == 'o')
            play_again(2);
        else if (who_win() == '#' && nom == 9)
            play_again(0);
        change_player();
    }
    return (0);
}

void play_again(int winner)
{
    if (winner)
        cout << "Player " << winner << " won. Congratulations, friend" << edl << edl;
    else
        cout << "It is Draw, friends" << edl << edl;
    system("pause");
    board = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    main();
}
