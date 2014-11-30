/*
RandomSelectionSort v2
Jason Lemons 01/13/2013
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int generateRandomNumber(int low, int high);
void generateRandomArray(int array_length);
int smallestPos(int current_index);
void swapPos(int pos1, int pos2);
void selectionSort(int array_to_sort[]);
void printList();

const int array_size = 1000;
const int random_floor = 1;
const int random_ceil = 10;

int random_array[array_size];

int main(){
    srand(time(0));

    generateRandomArray(array_size);

    cout << "Unsorted List = " << endl;
    printList();

    selectionSort(random_array);

    cout << "Sorted List = " << endl;
    printList();
    return 0;
}

int generateRandomNumber(int low, int high){
    return low + rand() % ((high + 1) - low);
};

void generateRandomArray(int array_length){
    for (int i = 0; i < array_length; i++){
        random_array[i] = generateRandomNumber(random_floor, random_ceil);
    }
};

int smallestPos(int current_index){
    int current_pos = current_index;
    for(int i = current_index; i < array_size; i++){
            if(random_array[i] < random_array[current_pos]){
                current_pos = i;
            }
        }
    return current_pos;
};

void swapPos(int pos1, int pos2){
    int value_holder;
    value_holder = random_array[pos1];
    random_array[pos1] = random_array[pos2];
    random_array[pos2] = value_holder;
};

void selectionSort(int array_to_sort[]){
    for (int index_pos = 0; index_pos < array_size - 1; index_pos++){
        swapPos(index_pos, smallestPos(index_pos));
    }
};

void printList(){
    for(int i = 0; i < array_size; i++){
        cout << random_array[i] << endl;

    }
};
