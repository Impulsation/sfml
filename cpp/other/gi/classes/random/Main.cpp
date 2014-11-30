// Main.cpp for testing Random

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Random.h"
using namespace std;

int main()
{
    srand(time(NULL));
    for(int i = 0; i < 10; i++)
    {
        int rando = random(1,10);
        cout << rando << endl;
    }
    cout << "Test compile" << endl;
    return 0;
}
