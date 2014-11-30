#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Item
{
    protected:
        string name;
    public:
        //Item();
        //~Item();

        string getName();
};

class Weapon : public Item
{
    protected:
        int damage;
    public:
        //Weapon();
        //~Weapon();

        int getDamage();
};

class Armor : public Item
{
    protected:
        int armorClass;
    public:
        //Armor();
        //~Armor();

        int getArmorClass();
};

class Consumable : public Item
{
    protected:
        //ConsumeEffect* effect;
    public:
        //Consumable();
        //~Consumable();

        //ConsumeEffect* getEffect();
};

int main()
{
    vector<Item*> playerInventory;

    Weapon* sword;
    Armor* shield;
    Consumable* potion;

    playerInventory.push_back(sword);
    playerInventory.push_back(shield);
    playerInventory.push_back(potion);

    // Print the Vector
    for (int i = 0; i < playerInventory.size(); i++)
    {
        cout << playerInventory[i] << endl;
    }
    return 0;
}
