// Main.cpp (The file with main.)

#include <iostream>
#include <string>
#include "Wiz.h"
using namespace std;

int main()
{
    Wizard wiz0("Gandalf", 20, 100, 5);

    wiz0.fight();
    wiz0.talk();

    wiz0.setArmor(10);

    cout << "Player's name = " << wiz0.getName() << endl;

    // Test to see if player has enough magic points to cast spell
    wiz0.castSpell();
}
