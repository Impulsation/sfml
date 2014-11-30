#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void printArray(int array[20])
{
    // Output the size, in bytes, of the parameter.
    cout << "sizeof(array) = " << sizeof(array) << endl;

    // Print the array.
    for(int i = 0; i < 20; i++)
        cout << array[i] << " ";

    cout << endl;
}

int main()
{
    // Seed the random number generator.
    srand( time(0) );

    //Array of 20 integers.
    int randomArray[20];

    // Fill each element with a random number in the range [0, 100]
    for(int i = 0; i < 20; i++)
        randomArray[i] = rand() % 101;

    //Output the size, in bytes, of the array.
    cout << "sizeof(randomArray) = " << sizeof(randomArray) << endl;

    printArray(randomArray);
}
