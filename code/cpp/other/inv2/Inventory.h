// Inventory.h

#ifndef INVENTORY_H
#define INVENTORY_H

#include <vector>
#include "Item.h"

class Inventory
{
public:
    // Constructors
    Inventory();
    Inventory(int size);
    ~Inventory();

    // Methods
    void addItem(Item item_to_add);
    void printItem(int index);

private:
    // Data Members
    int mSize;
    std::vector<Item> mInventory;
};

#endif // INVENTORY_H
