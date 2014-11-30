/*
1.6.5 Average
http://www.gameinstitute.com
Jason Lemons, 01/11/2013

Write a program that asks the user to input five real numbers.  Compute the average of these
numbers and output the results to the user.  Your program output should be formatted as follows:

Enter a0: 5
Enter a1: 10
Enter a2: -2
Enter a3: 2.7
Enter a4: 0
The average of the five inputs a0...a4 = 3.14
Press any key to continue
*/

#include <iostream>

using namespace std;

int main()
{
    float a0, a1, a2, a3, a4;

    cout << "Enter a0: ";
    cin >> a0;
    cout << "Enter a1: ";
    cin >> a1;
    cout << "Enter a2: ";
    cin >> a2;
    cout << "Enter a3: ";
    cin >> a3;
    cout << "Enter a4: ";
    cin >> a4;
    cout << "The average of the five inputs a0...a4 = " << (a0 + a1 + a2 + a3 + a4)/5 << endl;

    return 0;
}
