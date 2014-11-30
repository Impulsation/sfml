/*
3.7.5 Calculator Program
http://www.gameinstitute.com
Jason Lemons 01/13/2013
*/

#include <iostream>
#include <cmath>
using namespace std;

void printMenu();
int getInput();
float calculate(int input);

int main()
{
    int input;

    do{
        printMenu();
        input = getInput();
        calculate(input);
    }while (input != 12);

    return 0;
}

void printMenu()
{
    cout << "1) cos(x)" << endl;
    cout << "2) sin(x)" << endl;
    cout << "3) tan(x)" << endl;
    cout << "4) atan2(y,x)" << endl;
    cout << "5) sqrt(x)" << endl;
    cout << "6) x^y" << endl;
    cout << "7) ln(x)" << endl;
    cout << "8) e^x" << endl;
    cout << "9) |x|" << endl;
    cout << "10) floor(x)" << endl;
    cout << "11) ciel(x)" << endl;
    cout << "12) exit" << endl;
    cout << ">> ";
};

int getInput()
{
    int input;
    cin >> input;
    return input;
};

float calculate(int input)
{
    float x, y, answer;

    switch(input)
    {
        case 1:
            cout << "Enter x: ";
            cin >> x;
            answer = cos(x);
            cout << "cos(x) = " << answer << endl << endl;
            return answer;

        case 2:
            cout << "Enter x: ";
            cin >> x;
            answer = sin(x);
            cout << "sin(x) = " << answer << endl << endl;
            return answer;

        case 3:
            cout << "Enter x: ";
            cin >> x;
            answer = tan(x);
            cout << "tan(x) = " << answer << endl << endl;
            return answer;

        case 4:
            cout << "Enter x: ";
            cin >> x;
            cout << "Enter y: ";
            cin >> y;
            answer = atan2f(y,x);
            cout << "atan2(y, x) = " << answer << endl << endl;
            return answer;

        case 5:
            cout << "Enter x: ";
            cin >> x;
            answer = sqrtf(x);
            cout << "sqrt(x) = " << answer << endl << endl;
            return answer;

        case 6:
            cout << "Enter x: ";
            cin >> x;
            cout << "Enter y: ";
            cin >> y;
            answer = powf(x,y);
            cout << "x^y = " << answer << endl << endl;
            return answer;

        case 7:
            cout << "Enter x: ";
            cin >> x;
            answer = logf(x);
            cout << "ln(x) = " << answer << endl << endl;
            return answer;

        case 8:
            cout << "Enter x: ";
            cin >> x;
            answer = expf(x);
            cout << "e^x = " << answer << endl << endl;
            return answer;

        case 9:
            cout << "Enter x: ";
            cin >> x;
            answer = fabsf(x);
            cout << "|x| = " << answer << endl << endl;
            return answer;

        case 10:
            cout << "Enter x: ";
            cin >> x;
            answer = floorf(x);
            cout << "floor(x) = " << answer << endl << endl;
            return answer;

        case 11:
            cout << "Enter x: ";
            cin >> x;
            answer = ceilf(x);
            cout << "ceil(x) = " << answer << endl << endl;
            return answer;

        case 12:
            cout << "Exiting...";
            break;

        default:
            cout << "Invalid input" << endl << endl;

    }
}
