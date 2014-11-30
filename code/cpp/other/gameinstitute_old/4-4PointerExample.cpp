#include <iostream>
using namespace std;

int main()
{
    short arrayName[8] = {1, 2, 3, 4, 5, 6, 7, 8};

    // Use array name to get pointer to the first element
    short * firstPtr = arrayName;

    cout << "arrayName [0] = " << arrayName[0] << endl;
    cout << "*firstPtr = " << *firstPtr << endl;
}
