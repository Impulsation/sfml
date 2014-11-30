#include <iostream>
#include <string>

using namespace std;

int main()
{
    string string1 = "1d10+4";
    string string2 = "1d10";

    if (string1.find('+') != string::npos){
        cout << "if is true s1" << endl;
    }
    else
        cout << "If is false s1" << endl;

    if (string2.find('+') != string::npos){
        cout << "if is true s2" << endl;
    }
    else
        cout << "If is false s2" << endl;
    return 0;
}
