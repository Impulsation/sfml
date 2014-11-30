/*
3.7.7 Binary Search
http://www.gameinstitute.com
Jason Lemons 01/13/2013
*/

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

const int list_length = 23;
int the_list[list_length] = {1, 4, 5, 6, 9, 14, 21, 23, 28, 31, 35, 42, 46, 50, 53, 57, 62, 63, 65, 74, 79, 89, 95};

int binSearch(int data[], int numElements, int searchKey);
void printList(int data[], int numElements);
void printSearchResults(int data[], int numElements, int searchKey);
void loopPrompt(int data[]);

int main()
{
    printList(the_list, list_length);
    loopPrompt(the_list);
    return 0;
}

int binSearch(int data[], int numElements, int searchKey)
{
    int left = 0;
    int right = numElements;
    while(left <=right)
    {
        int middle = (left + right) / 2;
        if(data[middle] == searchKey)
        {
            return middle;
        }
        else if(data[middle] > searchKey)
        {
            right = middle - 1;
        }
        else
        {
            left = middle + 1;
        }
    }
    return -1;
};

void printList(int data[], int numElements)
{
    cout << "{";
    for(int i = 0; i < numElements - 1; i++)
    {
        cout << data[i] << ", ";
    }
    cout << data[numElements - 1] << "}" << endl;
};

void printSearchResults(int data[], int numElements, int searchKey)
{
    int search_result = binSearch(data, numElements, searchKey);
    if(search_result == -1)
    {
        cout << searchKey << " not found." << endl;
    }
    else
    {
        cout << searchKey << " is in position " << search_result << endl;
    }
};

void loopPrompt(int data[])
{
    string input;
    while(input != "x" && input != "X")
    {
        cout << "Enter search key (or 'x' to exit): ";
        cin >> input;
        if(input == "x" || input == "X")
        {
            cout << "Exiting...";
            break;
        }
        int target = atoi(input.c_str());
        printSearchResults(data, list_length, target);
    }
};
