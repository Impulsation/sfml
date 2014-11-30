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
    ~Inventory();

    // Methods
    void addItem(Item* added_item);
    Item* getItem(int pos);
private:
    std::vector<Item*> mInventory;
};

#endif // INVENTORY_H
