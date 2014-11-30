#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int randomNumber(int floor, int ceil);
int rollDice(int dice_amount, int dice_type, int dice_mod);

int main()
{
    srand(time(NULL));
    rollDice(10,6,1);
    int a,b,c;
    cin >> a;
    cin >> b;
    cin >> c;
    rollDice(a,b,c);
    return 0;
}

int randomNumber(int floor, int ceil)
{
    return floor + (rand() % ceil);
};

int rollDice(int dice_amount, int dice_type, int dice_mod)
{
    int total = 0;
    int current_roll = 0;
    
    for(int i = 0; i < dice_amount; i++)
    {
        current_roll = randomNumber(1, dice_type);
        cout << "Current roll: " << current_roll << endl;
        total = total + current_roll;
        cout << "Total: " << total << endl;
    }
    cout << "Adding modifier: " << dice_mod << endl;
    return total + dice_mod;
};
