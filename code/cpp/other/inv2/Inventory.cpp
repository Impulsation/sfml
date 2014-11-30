// Inventory.cpp

#include "Inventory.h"
#include "Item.h"

Inventory::Inventory()
{

}

Inventory::Inventory(int size)
{
    mSize = size;
}

Inventory::~Inventory()
{
    
}

void Inventory::addItem(Item item_to_add)
{
    if(mInventory.size() <= mSize)
        mInventory.push_back(item_to_add);
}

void Inventory::printItem(int index)
{
    mInventory[index].printStats();
}
