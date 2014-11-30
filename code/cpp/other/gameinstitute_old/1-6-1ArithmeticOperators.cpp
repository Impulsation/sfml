/*
1.6.1 Arithmetic Operators
http://www.gameinstitute.com
Jason Lemons, 01/11/2013

Write a program that asks the user to input two real numbers, n1 and n2.
Compute the sum n1 + n2, the difference n1 - n2, the product n1 * n2, and the quotient n1 / n2.
Assume n2 != 0 and output the results.  Your program should be formatted as follows:

Enter a real number n1: 64.67
Enter a real number n2: -14.2
64.67 + -14.2 = 50.47
64.67 - -14.2 = 78.87
64.67 * -14.2 = -918.314
64.67 / -14.2 = -4.55423
Press any key to continue
*/

#include <iostream>

using namespace std;

int main()
{
    float n1, n2;

    cout << "Enter a real number n1: ";
    cin >> n1;
    cout << "Enter a real number n2: ";
    cin >> n2;

    cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
    cout << n1 << " - " << n2 << " = " << n1 - n2 << endl;
    cout << n1 << " * " << n2 << " = " << n1 * n2 << endl;
    cout << n1 << " / " << n2 << " = " << n1 / n2 << endl;

    return 0;
}
