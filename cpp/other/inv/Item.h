// Item.h

#ifndef ITEM_H
#define ITEM_H

#include <string>
class Item
{
public:
    // Constructors
    Item();
    ~Item();

    // Methods
    std::string getName();

protected:
    std::string mName;
};

class Weapon : public Item
{
public:
    // Constructors
    Weapon();
    Weapon(std::string name, int damage);
    ~Weapon();

    // Methods
    int getDamage();

private:
    int mDamage;
};

class Armor : public Item
{
public:
    Armor();
    Armor(std::string name, int defence);
    ~Armor();

    int getDefence();

private:
    int mDefence;
};

#endif // ITEM_H
