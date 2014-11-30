/*
2.7.6 ASCII
http://www.gameinstitute.com
Jason Lemons, 01/11/2013
*/

#include <iostream>

using namespace std;

int main()
{
    int list[17] = {7, 3, 32, 2, 55, 34, 6, 13, 29, 22, 11, 9, 1, 5, 42, 39, 8};
    int num_to_find;
    int position;

    cout << "List = ";
    
    // Loop over all elements in the array
    for (int i = 0; i < 17; i++)
    {
        // Print value at the current position
        cout << list[i];

        // add commas every time, except the last
        if (i != 16)
        {
            cout << ", ";
        }

    }

    cout << endl;

    cout << "Enter an integer in the list to search for: ";
    cin >> num_to_find;

    // Loop through the entire array
    for (int i = 0; i < 17; i++)
    {

        position = i;
        if (list[i] == num_to_find)
        {
            break;
        }
    }

    cout << "Item found at index [" << position << "]";
    return 0;
}
