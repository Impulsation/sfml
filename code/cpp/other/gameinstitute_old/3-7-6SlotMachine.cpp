/*
3.7.6 Slot Machine
http://www.gameinstitute.com
Jason Lemons 01/13/2013
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int random(int low, int high);
void displayChipAmount();
void slotMenu();
void getBet();
bool betIsValid();
int generateSlots();
void printSlots();
void checkWinnings();

const int random_floor = 2;
const int random_ceil = 7;
const int starting_chips = 1000;

int current_chips = starting_chips;
int bet;
int slot1, slot2, slot3;
int input;

int main()
{
    srand(time(0));

    while(input != 2)
    {
        slotMenu();
    }

    return 0;
}

int random(int low, int high)
{
    return low + rand() % ((high + 1) - low);
};

void displayChipAmount()
{
    cout << "Player's chips: $" << current_chips << endl;
};

void slotMenu()
{
    displayChipAmount();
    cout << "1) Play slot. 2) Exit: ";
    cin >> input;
    if(input != 1 && input != 2)
    {
        cout << "Invalid input." << endl;
    }
    if(input == 1)
    {
        do{
            getBet();
        }while(betIsValid() == false);

        generateSlots();
        printSlots();
        checkWinnings();
    }
};

void getBet()
{
    cout << "Place your bet: ";
    cin >> bet;
    if (betIsValid() == false)
    {
        cout << "Bet is invalid." << endl;
    }
    cin.clear();
    cin.ignore();
};

bool betIsValid()
{
    if (bet <= current_chips && bet >= 1)
    {
        return true;
    }
    else
    {
        return false;
    }
};

int generateSlots()
{
    slot1 = random(random_floor, random_ceil);
    slot2 = random(random_floor, random_ceil);
    slot3 = random(random_floor, random_ceil);
};

void printSlots()
{
    cout << slot1 << " " << slot2 << " " << slot3 << endl;
};

void checkWinnings()
{
    if (slot1 == 7 && slot2 == 7 && slot3 == 7)
    {
        cout << "You win!" << endl << endl;
        current_chips = current_chips * 10;
    }
    else if(slot1 == slot2 && slot2 == slot3)
    {
        cout << "You win!" << endl << endl;
        current_chips = current_chips + bet * 5;
    }
    else if(slot1 == slot2 || slot2 == slot3 || slot1 == slot3)
    {
        cout << "You win!" << endl << endl;
        current_chips = current_chips + bet * 3;
    }
    else
    {
        cout << "You lose" << endl << endl;
        current_chips = current_chips - bet;
    }
};

