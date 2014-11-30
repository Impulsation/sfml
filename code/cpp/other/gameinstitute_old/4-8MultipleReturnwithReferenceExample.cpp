#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void GetMousePos(int& outX, int& outY)
{
    // Pretend to return the mouse's current position.
    outX = rand() % 801;
    outY = rand() % 601;
}

int main()
{
    // Seed the random number generator.
    srand( time(0) );

    //Initialize two variables that will receive the mouse position
    int x = 0;
    int y = 0;

    // Output x and y before receiving the mouse position.
    cout << "Before GetMousePos(...)" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    GetMousePos(x, y);

    cout << "After GetMousePos(...)" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
}
