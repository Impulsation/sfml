#include <iostream>
using namespace std;

int main()
{
    cout << "This program will add 1 .... n numbers" << endl;
    cout << "For example 1-9 will be 45" << endl << endl;
    cout << "Enter a value for n: ";
    
    int n = 0;
    cin >> n;

    cout << (n * n + n)/2 << endl;
}
