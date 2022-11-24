#include <bits/stdc++.h>

using namespace std;

#define edl '\n'

char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

char player('x');

int nom;

void drawboard()
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

void inputnumber()
{
    int num;
    cout << "It's \" " << player << " \" turn. "
         << "Press a valid number :  ";
    cin >> num;
    if (num < 10 && num > 0)
    {
        if (num == 1)
        {
            if (board[0][0] == '1')
            {
                board[0][0] = player;
            }
            else
            {
                cout << edl << "This Field is already Occupied, Choose another !!" << edl << edl;
                inputnumber();
            }
        }
        else if (num == 2)
        {
            if (board[0][1] == '2')
            {
                board[0][1] = player;
            }
            else
            {
                cout << edl << "This Field is already Occupied, Choose another !!" << edl << edl;
                inputnumber();
            }
        }
        else if (num == 3)
        {
            if (board[0][2] == '3')
            {
                board[0][2] = player;
            }
            else
            {
                cout << edl << "This Field is already Occupied, Choose another !!" << edl << edl;
                inputnumber();
            }
        }
        else if (num == 4)
        {
            if (board[1][0] == '4')
            {
                board[1][0] = player;
            }
            else
            {
                cout << edl << "This Field is already Occupied, Choose another !!" << edl << edl;
                inputnumber();
            }
        }
        else if (num == 5)
        {
            if (board[1][1] == '5')
            {
                board[1][1] = player;
            }
            else
            {
                cout << edl << "This Field is already Occupied, Choose another !!" << edl << edl;
                inputnumber();
            }
        }
        else if (num == 6)
        {
            if (board[1][2] == '6')
            {
                board[1][2] = player;
            }
            else
            {
                cout << edl << "This Field is already Occupied, Choose another !!" << edl << edl;
                inputnumber();
            }
        }
        else if (num == 7)
        {
            if (board[2][0] == '7')
            {
                board[2][0] = player;
            }
            else
            {
                cout << edl << "This Field is already Occupied, Choose another !!" << edl << edl;
                inputnumber();
            }
        }
        else if (num == 8)
        {
            if (board[2][1] == '8')
            {
                board[2][1] = player;
            }
            else
            {
                cout << edl << "This Field is already Occupied, Choose another !!" << edl << edl;
                inputnumber();
            }
        }
        else if (num == 9)
        {
            if (board[2][2] == '9')
            {
                board[2][2] = player;
            }
            else
            {
                cout << edl << "This Field is already Occupied, Choose another !!" << edl << edl;
                inputnumber();
            }
        }
    }
    else
    {
        cout << edl << "Please Enter a valid number from 1 to 9" << edl << edl;
        inputnumber();
    }
}

void changeplayer()
{
    player = (player == 'x' ? 'o' : 'x');
}

char whowin()
{

    // here to Check X win

    if (board[0][0] == 'x' && board[0][1] == 'x' && board[0][2] == 'x')
        return 'x';

    if (board[1][0] == 'x' && board[1][1] == 'x' && board[1][2] == 'x')
        return 'x';

    if (board[2][0] == 'x' && board[2][1] == 'x' && board[2][2] == 'x')
        return 'x';

    if (board[0][0] == 'x' && board[1][0] == 'x' && board[2][0] == 'x')
        return 'x';

    if (board[0][1] == 'x' && board[1][1] == 'x' && board[2][1] == 'x')
        return 'x';

    if (board[0][2] == 'x' && board[1][2] == 'x' && board[2][2] == 'x')
        return 'x';

    if (board[0][0] == 'x' && board[1][1] == 'x' && board[2][2] == 'x')
        return 'x';

    if (board[0][2] == 'x' && board[1][1] == 'x' && board[2][0] == 'x')
        return 'x';

    // here to Check O win

    if (board[0][0] == 'o' && board[0][1] == 'o' && board[0][2] == 'o')
        return 'o';

    if (board[1][0] == 'o' && board[1][1] == 'o' && board[1][2] == 'o')
        return 'o';

    if (board[2][0] == 'o' && board[2][1] == 'o' && board[2][2] == 'o')
        return 'o';

    if (board[0][0] == 'o' && board[1][0] == 'o' && board[2][0] == 'o')
        return 'o';

    if (board[0][1] == 'o' && board[1][1] == 'o' && board[2][1] == 'o')
        return 'o';

    if (board[0][2] == 'o' && board[1][2] == 'o' && board[2][2] == 'o')
        return 'o';

    if (board[0][0] == 'o' && board[1][1] == 'o' && board[2][2] == 'o')
        return 'o';

    if (board[0][2] == 'o' && board[1][1] == 'o' && board[2][0] == 'o')
        return 'o';

    return '#';
}

int main()
{
    nom = 0;
    drawboard();
    while (true)
    {
        ++nom;
        inputnumber();
        drawboard();
        if (whowin() == 'x')
        {
            cout << "Player 1 won. Congratulations,friend" << edl << edl;
            break;
        }
        else if (whowin() == 'o')
        {
            cout << "Player 2 won. Congratulations,friend" << edl << edl;
            break;
        }
        else if (whowin() == '#' && nom == 9)
        {
            cout << "It is Draw,friends" << edl << edl;
            break;
        }
        changeplayer();
    }
    return 0;
}
