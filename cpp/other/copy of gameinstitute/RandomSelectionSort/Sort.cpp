#include "Sort.h"
#include <iostream>
#include <cstdlib>
using namespace std;

int generateRandomNumber(int low, int high)
{
    return low + rand() % ((high + 1) - low);
}

void generateRandomArray(int array[], int array_length, int floor, int ceil)
{
    for (int i = 0; i < array_length; i++)
    {
       array[i] = generateRandomNumber(floor, ceil);
    }
}

void printArray(int array[])
{
    for (int i = 0; i < array.size(); i++)
    {
        cout << array[i] << endl;
    }
}
