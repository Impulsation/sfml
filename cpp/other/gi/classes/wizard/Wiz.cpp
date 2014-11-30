// Wiz.cpp

#include "Wiz.h"
using namespace std;

Wizard::Wizard()
{
    // Client called a constructor with zero parameters,
    // so construct a "wizard" with default values.
    // We call this a "default" constructor.
    mName           = "DefaultName";
    mHitPoints      = 0;
    mMagicPoints    = 0;
    mArmor          = 0;
}

Wizard::Wizard(std::string name, int hp, int mp, int armor)
{
    // Client called constructor with parameters, so
    // construct a "wizard" with the specified values.
    mName           = name;
    mHitPoints      = hp;
    mMagicPoints    = mp;
    mArmor          = armor;
}

Wizard::~Wizard()
{
    // No dynamic memory to delete--nothing to cleanup.
}

void Wizard::fight()
{
    cout << "Fighting." << endl;
}

void Wizard::talk()
{
    cout << "Talking." << endl;
}

void Wizard::castSpell()
{
    if (mMagicPoints > 4)
        cout << "Casting Spell." << endl;
    else
        cout << "Not enough magic points!" << endl;
}

void Wizard::setArmor(int armor)
{
    if(armor >= 0)
        mArmor = armor;
}

std::string Wizard::getName()
{
    return mName;
}
