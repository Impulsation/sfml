#include <iostream>
using namespace std;

int main()
{
    short arrayName[8] = {1, 2, 3, 4, 5, 6, 7, 8};

    // Use array name to get pointer to the first element.
    short* firstPtr = arrayName;


    cout << "Style 1: Addition operator." << endl;
    for(int i = 0; i < 8; i++)
    {
        cout << *(firstPtr + i) << " ";
    }
    cout << endl;
    cout << "Style 2: Increment operator." << endl;
    for(int i = 0; i < 8; i++)
    {
        cout << *firstPtr << " ";
        ++firstPtr;
    }

    cout << endl;

    cout << "Style 3: Array-ish" << endl;
    firstPtr = arrayName;
    for(int i = 0; i < 8; i++)
    {
        cout << firstPtr[i] << " ";
    }

    cout << endl;
}
