/*
2.7.5 Matrix Addition
http://www.gameinstitute.com
Jason Lemons, 01/11/2013
*/

#include <iostream>

using namespace std;

int main(){
    int a[2][3] =
    {
        {-5, 2, 8},	// Row 1
        {1, 0, 0}	// Row 2
    };

    int b[2][3] =
    {
        {1, 0, 2},	// Row 1
        {0, 3, -6}	// Row 2
    };

    int sum[3][2];

    // Print A
    cout << "A =" << endl << endl;
    for(int row = 0; row < 2; row++)
    {
        for (int column = 0; column < 3; column++)
        {
            if (a[row][column] >= 0)
            {
                cout << " ";
            }
            cout << a[row][column] << " ";
        }
        cout << endl;
    }

    // Print B
    cout << endl << "B =" << endl << endl;
    for(int row = 0; row < 2; row++)
    {
        for (int column = 0; column < 3; column++)
        {
            if (b[row][column] >= 0)
            {
                cout << " ";
            }
            cout << b[row][column] << " ";
        }
        cout << endl;
    }

    // Print the sum A + B, store in sum[][]
    cout << endl << "A + B =" << endl << endl;
    for(int row = 0; row < 2; row++)
    {
        for (int column = 0; column < 3; column++)
        {
            if (a[row][column] + b[row][column] >= 0)
            {
                cout << " ";
            }
            sum[row][column] = a[row][column] + b[row][column];
            cout << a[row][column] + b[row][column] << " ";
        }
        cout << endl;
    }
	return 0;
}
