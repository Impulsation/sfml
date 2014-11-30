/*
1.6.3 Cube
http://www.gameinstitute.com
Jason Lemons, 01/11/2013

Write a program that asks the user to input a real number n. Compute n^3
and output the result.  Your program should be formatted as follows:

Enter a real number: 7.12
7.12^3 = 360.944
Press any key to continue
*/

#include <iostream>

using namespace std;

int main()
{
    float n;

    cout << "Enter a real number: ";
    cin >> n;
    cout << n << "^3 = " << n * n * n;

    return 0;
}
