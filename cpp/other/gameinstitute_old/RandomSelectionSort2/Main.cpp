#include "Array.h"
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    RandomArray my_array = RandomArray(100, 1, 10);
    //my_array.printArray();
}
