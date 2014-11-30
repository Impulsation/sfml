// Item.cpp

#include <iostream>
#include "Item.h"
using namespace std;

// Default Constructor
Item::Item()
{

}

// Constructor with parameters
Item::Item(std::string name, int slot, int attack, int defence)
{
    mName =     name;
    mSlot =     slot;
    mAttack =   attack;
    mDefence =  defence;
}

// Deconstructor
Item::~Item()
{

}

// Return Item Name
std::string Item::getName()
{
    return mName;
}

int Item::getSlot()
{
    return mSlot;
}

int Item::getAttack()
{
    return mAttack;
}

int Item::getDefence()
{
    return mDefence;
}

void Item::printStats()
{
    cout << "Name: " << mName << endl;
    cout << "Slot: " << mSlot << endl;
    cout << "Attack: " << mAttack << endl;
    cout << "Defence: " << mDefence << endl << endl;
}
