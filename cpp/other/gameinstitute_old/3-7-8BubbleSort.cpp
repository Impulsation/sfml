/*
3.7.8 Bubble Sort
http://www.gameinstitute.com
Jason Lemons 01/14/2013
*/

#include <iostream>
using namespace std;

void makeArray(int data[], int length);
void printArray(int data[], int length);
void printUnsortedArray(int data[], int length);
void printSortedArray(int data[], int length);
void swapPosition(int data[], int position1, int position2);
void bubbleSort(int data[], int length);


const int array_length = 10;
int my_array[array_length];

int main()
{

    makeArray(my_array, array_length);
    printUnsortedArray(my_array, array_length);
    bubbleSort(my_array, array_length);
    printSortedArray(my_array, array_length);

    return 0;
};

void makeArray(int data[], int length)
{
    cout << "Enter " << length << " unsorted integers... " << endl;
    for(int i = 0; i < length; i++)
    {
        cout << "[" << i << "] = ";
        cin >> data[i];
    }
};

void printArray(int data[], int length)
{
    for(int i = 0; i < length; i++)
    {
        cout << data[i] << ", ";
    }
    cout << endl;
};

void printUnsortedArray(int data[], int length)
{
    cout << "Unsorted List = ";
    printArray(data, length);
};

void printSortedArray(int data[], int length)
{
    cout << "Sorted List = ";
    printArray(data, length);
};

void swapPosition(int data[], int position1, int position2)
{
    int temp_value = data[position1];
    data[position1] = data[position2];
    data[position2] = temp_value;
};

void bubbleSort(int data[], int length)
{
    cout << "Sorting... " << endl;
    for(int j = length - 1; j > 0; j--)
    {
        for(int i = 0; i < j; i++)
        {
            if(data[i] > data[i + 1])
            {
                swapPosition(data, i, i + 1);
            }
        }
    }
};
