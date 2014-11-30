#include <iostream>
using namespace std;

int main()
{
    cout << "Enter 2 numbers: " << endl;;
    int low, high;
    cin >> low;
    cin >> high;

    cout << "1: " << (high - low) * (low + high) << endl;
    cout << ((high - low) * (low + high)) / 2 << endl;
}
