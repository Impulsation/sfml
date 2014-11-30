#include <iostream>
#include <string>
#include "Item.h"
#include "Inventory.h"
#include "Weapons.h"
#include "Armor.h"
using namespace std;

int main()
{
    //Defines a players inventory and the amount of items they can carry
    Inventory player_inventory(20);

    player_inventory.addItem(bronze_sword);
    player_inventory.printItem(0);
}
