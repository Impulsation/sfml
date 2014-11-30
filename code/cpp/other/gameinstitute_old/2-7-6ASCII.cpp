/*
2.7.6 ASCII
http://www.gameinstitute.com
Jason Lemons, 01/11/2013
*/

#include <iostream>

using namespace std;

int main(){
    for(int i = 33; i < 256; i++)
    {
        cout << i << ": " << char(i) << " ";

        // End line after ever 10 outputs
        if ((i-2)% 10 == 0)
        {
            cout << endl;
        }
    }
    return 0;
}
