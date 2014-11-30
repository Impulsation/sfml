#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void Dice(int& die1, int& die2);
void Dice(int* die1, int* die2);

int main()
{
    // Initialize two variables to hold die1 and die2
    int result_die1 = 0;
    int result_die2 = 0;


    cout << "Reference: " << endl;
    for(int i = 0; i < 10; i++)
    {
        Dice(result_die1, result_die2);
        cout << result_die1 << " " << result_die2 << endl;
    }

    cout << "Pointer: " << endl;
    for(int i = 0; i < 10; i++)
    {
        Dice(&result_die1, &result_die2);
        cout << result_die1 << " " << result_die2 << endl;
    }
}

void Dice(int& die1, int& die2)
{
    die1 = 1 + rand() % 6;
    die2 = 1 + rand() % 6;
};

void Dice(int* die1, int* die2)
{
    *die1 = 1 + rand() % 6;
    *die2 = 1 + rand() % 6;
};
