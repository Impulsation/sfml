/*
3.7.1 Factorial
http://www.gameinstitute.com
Jason Lemons, 01/11/2013
*/

#include <iostream>

using namespace std;

int Factorial(int n);

int main()
{
    cout << "5! = " << Factorial(5) << endl;
    cout << "0! = " << Factorial(0) << endl;
    cout << "9! = " << Factorial(9) << endl;
    cout << "3! = " << Factorial(3) << endl;
    return 0;
}

int Factorial(int n)
{
    int answer = 1;
    for (int i = 0; i < n; i++)
    {
        answer = answer * (n - i);
    }
    return answer;
};
