/*
CoinCounter
Jason Lemons
01/30/2013
*/

#include <iostream>
#include <string>
using namespace std;

void getCoinAmount(string coin_name, int& coin_holder);
void outCoinAmount(string coin_name, int& coin_holder);
void getTotalValue(int& penny, int& nickel, int& dime, int& quarter);

//Variables to hold the amount of each coin
int pennies;
int nickels;
int dimes;
int quarters;

int main()
{
    // Get the amount of each coin
    getCoinAmount("pennies", pennies);
    getCoinAmount("nickels", nickels);
    getCoinAmount("dimes", dimes);
    getCoinAmount("quarters", quarters);
    cout << endl;

    // Output the amount of each coin
    outCoinAmount("pennies", pennies);
    outCoinAmount("nickels", nickels);
    outCoinAmount("dimes", dimes);
    outCoinAmount("quarters", quarters);
    cout << endl;

    // Sum and print the total of all coins
    getTotalValue(pennies, nickels, dimes, quarters);
}

void getCoinAmount(string coin_name, int& coin_holder){
    cout << "How many " << coin_name << " do you have? ";
    cin >> coin_holder;
};

void outCoinAmount(string coin_name, int& coin_holder){
    cout << "You have " << coin_holder << " " << coin_name << endl;
};

void getTotalValue(int& penny, int& nickel, int& dime, int& quarter){

    // Total the coins
    float total = 0;
    total += penny * .01;
    total += nickel * .05;
    total += dime * .10;
    total += quarter * .25;
    cout << "Your total value is $" << total << endl;
};
