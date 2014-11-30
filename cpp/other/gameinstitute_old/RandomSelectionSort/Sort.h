// Sort.h

#ifndef SORT_H
#define SORT_H

int generateRandomNumber(int low, int high);
void generateRandomArray(int array[], int array_length, int floor, int ceil);

int findSmallestPos(int current_index);
void swapPos(int pos1, int pos2);
void selectionSort(int array_to_sort[]);
void printList(int array[]);

#endif //SORT_H
