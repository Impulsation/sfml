/*
3.7.2 ToUpper ToLower
http://www.gameinstitute.com
Jason Lemons 01/12/2013
*/

#include <iostream>
using namespace std;

char toUpperCase(char input);
char toLowerCase(char input);

int main()
{
    for (int i = 97; i < 123; i++)
    {
        cout << toUpperCase(char(i));
    }

    cout << endl;

    for (int i = 65; i < 91; i++)
    {
        cout << toLowerCase(char(i));
    }
    return 0;
}

char toUpperCase(char input)
{
    char result;

    if(int(input) < 65 || int(input) > 122)
    {
        return '/0';
    }

    else
    {
        result = char(int(input)-32);
    }

    return result;
};

char toLowerCase(char input)
{
    char result;

    if(int(input) < 65 || int(input) > 122)
    {
        return '/0';
    }
    
    else
    {
        result = char(int(input)+32);
    }

    return result;
};
