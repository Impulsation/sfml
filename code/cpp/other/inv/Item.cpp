// Item.cpp

#include "Item.h"
using namespace std;

// Item Constructors/Methods
Item::Item()
{
    mName = "defaultName";
}

Item::~Item()
{
    // No dynamic memory, nothing to deconstruct
}

std::string Item::getName()
{
    return mName;
}
// End Item Constructors/Methods

// Weapon Constructors/Methods
Weapon::Weapon()
{
    mName =     "defaultWeapon";
    mDamage =    1;
}

Weapon::Weapon(std::string name, int damage)
{
    mName =     name;
    mDamage =   damage;
}

Weapon::~Weapon()
{

}

int Weapon::getDamage()
{
    return mDamage;
}
// End Weapon Constructors/Methods

// Armor Constructors/Methods
Armor::Armor()
{

}

Armor::Armor(std::string name, int defence)
{
    mName       = name;
    mDefence    = defence;
}

Armor::~Armor()
{

}

int Armor::getDefence()
{
    return mDefence;
}
