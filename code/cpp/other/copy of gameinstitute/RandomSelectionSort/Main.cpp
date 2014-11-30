#include "Sort.h"
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

const int array_size = 1000;
const int random_floor = 1;
const int random_ceil = 10;

int random_array[array_size];

int main()
{
    srand(time(0));     // Seed random number generator

    generateRandomArray(random_array, array_size, random_floor, random_ceil);
    cout << random_array[0] << endl;
    return 0;
}
