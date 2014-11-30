// Array.cpp

#include "Array.h"
#include <iostream>
#include <cstdlib>
using namespace std;

// Default Constructor
RandomArray::RandomArray()
{

}

// Constructor with parameters
RandomArray::RandomArray(int length, int floor, int ceil)
{
    mLength = length;
    mFloor = floor;
    mCeil = ceil;
    /*
    for (int i = 0; i < length; i++)
    {
        //mArray[i] = floor + rand() % ((ceil + 1) - floor);
        mArray[i] = i;
    }
    */
}

// Deconstructor
RandomArray::~RandomArray()
{

}

void RandomArray::printArray()
{
    for (int i = 0; i < mLength; i++)
    {
        cout << mArray[i] << endl;
    }
}
