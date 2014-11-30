/*
4.9.2 Dice Function v2
http://www.gameinstitute.com
Jason Lemons 01/14/2013
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void Dice(int& die1, int& die2);
void Dice(int* die1, int* die2);
void PrintDiceResults(int& die1, int& die2);
void GetTarget(int& player_target);
void GetBet(int& player_bet, int& player_chips);
void CheckDice(int& die1, int& die2, int& player_target, int& player_bet, int& player_chips);
int prizeMoney(int& bet, int& player_target, int& die1, int& die2);
void mainLoop(int& input, int& result_die1, int& result_die2, int& player_chips, int& bet, int& target);
void printInfo();

//
const int scores[13] = {0, 0, 36, 18, 12, 9, 7, 6, 7, 9, 12, 18, 36};
const int starting_chips = 1000;

int main()
{
    // Seed the random number generator.
    srand( time(0) );

    // Initialize two variables to hold die1 and die2
    int result_die1 = 0;
    int result_die2 = 0;

    int menu_input;

    int chips = starting_chips;
    int bet;
    int target;

    printInfo();
    mainLoop(menu_input, result_die1, result_die2, chips, bet, target);

}

void mainLoop(int& input, int& result_die1, int& result_die2, int& player_chips, int& bet, int& target)
{
    while(input != 2 && player_chips > 0)
        {
            cout << "Press 1 to play, 2 to quit: ";
            cin >> input;
            if(input == 2)
            {
                cout << "Goodbye." << endl;
                break;
            }
            GetBet(bet, player_chips);
            GetTarget(target);
            Dice(result_die1, result_die2);
            PrintDiceResults(result_die1, result_die2);
            CheckDice(result_die1, result_die2, target, bet, player_chips);
    }

    cout << "You're broke!" << endl;
};

void Dice(int& die1, int& die2)
{
    die1 = 1 + rand() % 6;
    die2 = 1 + rand() % 6;

    // To call this function use the format:
    // Dice(result_die1, result_die2)
};

void Dice(int* die1, int* die2)
{
    *die1 = 1 + rand() % 6;
    *die2 = 1 + rand() % 6;

    // To call this function use the format:
    // Dice(&result_die1, &result_die2)
};

void PrintDiceResults(int& die1, int& die2)
{   cout << "*** ***" << endl;
    cout << "*" << die1 << "* *" << die2 << "*" << endl;
    cout << "*** ***" << endl;
};

void GetTarget(int& player_target)
{
    do
    {
        cout << "Enter a target number between 2 and 12: ";
        cin >> player_target;
        if(player_target < 2 || player_target > 12)
            cout << "Invalid target. " << endl;
    }while(player_target < 2 || player_target > 12);
};

void GetBet(int& player_bet, int& player_chips)
{
    do
    {
        cout << "You have $" << player_chips << endl;
        cout << "Enter a bet: ";
        cin >> player_bet;
        if (player_bet > player_chips || player_bet < 1)
            cout << "Invalid bet." << endl;
    }while(player_bet > player_chips || player_bet < 1);
};

void CheckDice(int& die1, int& die2, int& player_target, int& player_bet, int& player_chips)
{
    if((die1 + die2) == player_target)
    {
            cout << "You win!";
            player_chips = player_chips + (player_bet * scores[player_target]);
    }
    else if(die1 == player_target || die2 == player_target)
    {
            cout << "You win half!";
            player_chips = player_chips + (player_bet * (scores[player_target])/2);
    }
    else
    {
        player_chips = player_chips - player_bet;
    }
}

void printInfo()
{
    cout << "****************************************************" << endl;
    cout << "*                      Crappy                      *" << endl;
    cout << "****************************************************" << endl << endl;
    cout << "Welcome to my version of craps.  Made for one person, by one person!" << endl;
    cout << "You will place a bet, roll two dice, and attempt to hit your target." << endl;
    cout << endl;
    cout << "The scores are as follows:" << endl;
    cout << "Target 2, bet is multiplied by 36" << endl;
    cout << "Target 3, bet is multiplied by 18" << endl;
    cout << "Target 4, bet is multiplied by 12" << endl;
    cout << "Target 5, bet is multiplied by 9" << endl;
    cout << "Target 6, bet is multiplied by 7" << endl;
    cout << "Target 7, bet is multiplied by 6" << endl;
    cout << "Target 8, bet is multiplied by 7" << endl;
    cout << "Target 9, bet is multiplied by 9" << endl;
    cout << "Target 10, bet is multiplied by 12" << endl;
    cout << "Target 11, bet is multiplied by 18" << endl;
    cout << "Target 12, bet is multiplied by 36" << endl;
    cout << endl;
    cout << "You are awarded half the multiplier if either dice is equal to your target." << endl << endl;
}
