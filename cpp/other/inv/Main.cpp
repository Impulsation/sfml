#include <iostream>
#include <vector>
#include "Item.h"
#include "Inventory.h"
#include "Weapons.h"
using namespace std;

int main()
{
    Weapon sword("Excalibur", 100);
    //Armor chainmail("Chainmail", 10);
    cout << sword->getName() << endl;
    //cout << sword->getDamage() << endl;

    Inventory playerInventory;

    playerInventory.addItem(sword);
    //playerInventory.addItem(chainmail);
    cout << playerInventory.getItem(0)->getName() << endl;
    //cout << playerInventory.getItem(1)->getName() << endl;
}
