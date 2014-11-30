// Item.h

#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item
{
public:
    // Constructors
    Item();
    Item(std::string name, int slot, int attack, int defence);
    ~Item();

    // Item Slot
    enum Slot{WEAPON, ARMOR};

    // Methods
    std::string getName();
    int getSlot();
    int getAttack();
    int getDefence();
    void printStats();
    

private:
    std::string mName;
    int mSlot;
    int mAttack;
    int mDefence;
};

#endif
