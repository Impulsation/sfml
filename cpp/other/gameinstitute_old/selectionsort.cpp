/*
2.7.8 Selection Sort
http://www.gameinstitute.com
Jason Lemons 01/12/2013
*/

#include <iostream>

using namespace std;
int x[10];
int pos = 0;
int temp;

int main(){

int x[10];
int pos = 0;
int temp;

    cout << "Enter 10 unsorted integers... " << endl;
    for (int i = 0; i < 10; i++){
        cout << "[" << i << "] = ";
        cin >> x[i];
    }

    // Print the list
    cout << "Unsorted List = ";
    for(int i = 0; i < 10; i++){
        cout << x[i] << ", ";

    }
    cout << endl;
    cout << "Sorting..." << endl;

    for (int j = 0; j < 9; j++){

        pos = j;    // This sets the number to be compared to j, so that it doesn't get stuck on the lowest

        // Find the smallest number between j and the array length
        for(int i = j; i<10; i++){
            if(x[i] < x[pos]){
                pos = i;
            }
        }

        //Swap the smallest number with j
        temp = x[j];
        x[j] = x[pos];
        x[pos] = temp;
    }

    // Print the sorted list
    cout << "Sorted List = ";
    for(int i = 0; i < 10; i++){
        cout << x[i] << ", ";
    }
    return 0;
}
