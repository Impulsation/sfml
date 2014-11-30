/*
2.7.4 Factorial
http://www.gameinstitute.com
Jason Lemons, 01/11/2013

The factorial of a positive integer n, denote n! is defined as follows:

n! = n(n-1)(n-2)...(3)(2)(1)

Write a program that asks the user to enter in a positive integer n.  Compute the
factorial of n and output the result to the user.  Your program's output should look
like the following:

Enter a positive integer to compute the factorial of: 5
5! = 120
Press any key to continue
*/

#include <iostream>

using namespace std;

int main()
{
    int answer = 1;
    int num_to_factor;

    cout << "Enter a positive integer to compute the factorial of: ";
    cin >> num_to_factor;

    for (int i = 0; i < num_to_factor; i++)
    {
        answer = answer * (num_to_factor - i);
    }

    cout << num_to_factor << "! = " << factorial << endl;

    return 0;
}
