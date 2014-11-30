#include <iostream>
using namespace std;

int main()
{

    //Create a variable
    int value = 10;

    //Create a pointer to the address of 'value'.
    int* valuePtr = &value;

    //Print:
    cout << "value = " << value << endl;
    cout << "valuePtr = " << valuePtr << endl;
    cout << "*valuePtr = " << *valuePtr << endl;

    //Modify 'value' via the pointer by dereferencing it.
    *valuePtr = 500;

    //Print again to show changes:
    cout << "value = " << value << endl;
    cout << "valuePtr = " << valuePtr << endl;
    cout << "*valuePtr = " << *valuePtr << endl;

    return 0;
}
