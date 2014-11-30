/*
2.7.2 Navigator
http://www.gameinstitute.com
Jason Lemons, 01/11/2013

Write a program that displays a menu which allows the user to move one unit north, east, south or west.
Each time the player enters a selection, update the coordinates of the user and output the current
position.  Start the player at the origin of the coordinate system.  Your program’s output should look
like the following:

Current Position = (0, 0)
Move (N)orth, (E)ast, (S)outh, (W)est (Q)uit? n
Current Position = (0, 1)
Move (N)orth, (E)ast, (S)outh, (W)est (Q)uit? e
Current Position = (1, 1)
Move (N)orth, (E)ast, (S)outh, (W)est (Q)uit? s
Current Position = (1, 0)
Move (N)orth, (E)ast, (S)outh, (W)est (Q)uit? w
Current Position = (0, 0)
Move (N)orth, (E)ast, (S)outh, (W)est (Q)uit? q
Exiting...
Press any key to continue
*/

#include <iostream>

using namespace std;

int main(){
    int position_x = 0;
    int position_y = 0;
    char input;

    do
    {
        cout << "Current position = (" << position_x << ", " << position_y << ")" << endl;
        cout << "Move (N)orth, (E)ast, (S)outh, (W)est, or (Q)uit? ";
        cin >> input;

        if (input == 'q' || input == 'Q')
        {
                cout << "Exiting..." << endl;
                break;
        }

        else if (input == 'n' || input == 'N')
        {
            position_y++;
        }

        else if (input == 's' || input == 'S')
        {
            position_y--;
        }

        else if (input == 'e' || input == 'E')
        {
            position_x++;
        }

        else if (input == 'w' || input == 'W')
        {
            position_x--;
        }

        else
        {
            cout << "Invalid input.  Try again" << endl;
        }
    }while(input != 'q');

    return 0;
}
