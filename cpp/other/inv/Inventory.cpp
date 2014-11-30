// Inventory.cpp

#include "Inventory.h"

Inventory::Inventory()
{

}

Inventory::~Inventory()
{

}

void Inventory::addItem(Item* added_item)
{
    mInventory.push_back(added_item);
}

Item* Inventory::getItem(int pos)
{
    return mInventory[pos];
}
