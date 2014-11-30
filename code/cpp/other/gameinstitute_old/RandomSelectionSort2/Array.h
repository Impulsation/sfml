// Array.h

#ifndef ARRAY_H
#define ARRAY_H

class RandomArray
{
public:
    RandomArray();
    RandomArray(int length, int floor, int ceil);
    ~RandomArray();

    // Methods
    void printArray();

//private:
    int mArray[];
    int mLength;
    int mFloor;
    int mCeil;

};

#endif // ARRAY_H
