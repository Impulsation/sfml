#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int random(int floor, int ceil)
{
    return floor + (rand() % ceil);
};

int roll(string user_input)
{
    int amnt, face, mod, total = 0;
    
    string buff;
    stringstream ss(user_input);

    // Check to see if input contains the '+' character
    if (user_input.find('+') != string::npos)
    {
        // Split the input into 3 integers
        getline(ss, buff, 'd');
        amnt = atoi(buff.c_str());
        getline(ss, buff, '+');
        face = atoi(buff.c_str());
        getline(ss, buff);
        mod = atoi(buff.c_str());
    }
    else
    {
        // Split into 2 integers(no mod)
        getline(ss, buff, 'd');
        amnt = atoi(buff.c_str());
        getline(ss, buff);
        face = atoi(buff.c_str());
        mod = 0;
    }

    // Roll The Dice
    for(int i = 0; i < amnt; i++)
    {
        int current = random(1, face);
        cout << current << " ";
        total = total + current;
    }

    // Show the modifier if it exists
    if(mod != 0)
    {
        cout << "+ " << mod << " ";
        total = total + mod;
    }
    
    // Print the total
    cout << "= " << total << endl;

    return total;
};

vector<string> &split(const string &s, char delim, vector<string> &elems)
{
    stringstream ss(s);
    string item;
    while (getline(ss,item, delim))
    {

        if (item.find('x') != string::npos){
            int multiplier = 0;
            string command, buff;
            stringstream ss1(item);

            getline(ss1, command, 'x');
            getline(ss1, buff);
            multiplier = atoi(buff.c_str());

            for(int i = 0; i < multiplier; i++){
                elems.push_back(command);
            }
        }
        else
        {
            elems.push_back(item);
        }
    }
    return elems;
}

int rollVec(vector<string> &elems)
{
    int total = 0;
    for(int i = 0; i < elems.size(); i++)
    {
        int current = roll(elems[i]);
        total = total + current;
    }
    cout << "Total Roll: " << total << endl << endl;
    elems.clear();
    return total;
}

int main()
{
    // Seed the number generator
    srand(time(NULL));

    string input;
    vector<string> input_vec;
    
    // Program will loop until 'q' or 'Q' is entered
    while(true)
    {
        cout << "Dice: ";
        getline(cin, input);
        if(input == "q" || input == "Q")
        {
            cout << "Goodbye." << endl;
            return 0;
        }
        else if(input.find('d') != string::npos)
        {
            // Splits the input by space delim, rolls each input
            split(input, ' ', input_vec);
            rollVec(input_vec);
        }
        else
        {   
            // Catches any input without 'd' and says try again
            cout << "Try again" << endl;
        }
    }
    return 0;
}
