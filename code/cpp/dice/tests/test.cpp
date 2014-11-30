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

    //Split the input into 3 integers
    getline(ss, buff, 'd');
    amnt = atoi(buff.c_str());
    getline(ss, buff, '+');
    face = atoi(buff.c_str());
    getline(ss, buff);
    mod = atoi(buff.c_str());

    // Roll the Dice
    for(int i = 0; i < amnt; i++)
    {
        int current = random(1, face);
        cout << current << " ";
        total = total + current;
    }
    cout << "+ " << mod;
    total = total + mod;
    cout << " = " << total << endl;
    return total;
};

vector<string> &split(const string &s, char delim, vector<string> &elems)
{
    stringstream ss(s);
    string item;
    while (getline(ss, item, delim))
    {
        elems.push_back(item);
    }
    return elems;
}

vector<string> split(const string &s, char delim)
{
    vector<string> elems;
    split(s, delim, elems);
    return elems;
}

void getSplit(string& s, vector<string>& v)
{
    cout << "Dice: ";
    getline(cin, s);
    v = split(s, ' ');
}

void printVec(const vector<string>& v)
{
    int total = 0;
    for(int i = 0; i < v.size(); i++)
    {
        int current = roll(v[i]);
        total = total + current;
    }
    cout << "Total roll: " << total << endl;
}

void clearVec(vector<string>& v)
{
    v.clear();
}

int main()
{
    // Seed random number generator
    srand(time(NULL));
    string input;
    vector<string> x;

    getSplit(input, x);
    printVec(x);
    clearVec(x);
    getSplit(input, x);
    printVec(x);
    clearVec(x);
    return 0;
}
