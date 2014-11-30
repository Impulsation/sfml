#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <ctime>
using namespace std;

void getRoll(string user_input, int& amnt, int& type, int& mod);
int random(int floor, int ceil);
int rollTheDice(int amnt, int type, int mod);

int main()
{
    srand(time(NULL)); // seed the random number generator
    
    string input;
    int dice_amount, dice_type, dice_modifier = 0;

    while(input != "q")
    {
        cin >> input;
        getRoll(input, dice_amount, dice_type, dice_modifier);
        rollTheDice(dice_amount, dice_type, dice_modifier);
    }
    return 0;
}

void getRoll(string user_input, int& amnt, int& type, int& mod)
{
    string buff;
    stringstream ss(user_input);

    getline(ss, buff, 'd');
    amnt = atoi(buff.c_str());

    getline(ss, buff, '+');
    type = atoi(buff.c_str());

    getline(ss, buff);
    mod = atoi(buff.c_str());
};

int random(int floor, int ceil)
{
    return floor + (rand() % ceil);
};

int rollTheDice(int amnt, int type, int mod)
{
    int total = 0;
    for(int i = 0; i < amnt; i++)
    {
        int current = random(1, type);
        cout << current << " ";
        total = total + current;
    }
    cout << "+ " << mod << endl;
    total = total + mod;
    cout << "Total: " << total << endl;
    return total;
};

