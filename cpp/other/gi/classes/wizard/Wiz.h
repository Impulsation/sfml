// Wiz.h (Wizard header file.)

#ifndef WIZARD_H
#define WIZARD_H

#include <iostream>
#include <string>

class Wizard
{
public:
    // Constructor.
    Wizard();

    // Overloaded constructor.
    Wizard(std::string name, int hp, int mp, int armor);

    // Destructor
    ~Wizard();

    // Methods
    void fight();
    void talk();
    void castSpell();
    void setArmor(int armor);
    std::string getName();

private:
    // Data Memebers
    std::string mName;
    int mHitPoints;
    int mMagicPoints;
    int mArmor;
};

#endif // WIZARD_H
