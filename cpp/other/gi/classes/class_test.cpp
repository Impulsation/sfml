#include <iostream>
using namespace std;

class Wizard
{
public:
    // Methods
    void fight();
    void talk();
    void castSpell();

    // Data Memebers
    string mName;
    int mHitpoints;
    int mMagicPoints;
    int mArmor;
};

int main()
{
    Wizard wiz0;
    return 0;
}
