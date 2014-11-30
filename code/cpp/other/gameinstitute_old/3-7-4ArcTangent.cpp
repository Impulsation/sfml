#include <iostream>
#include <cmath>

#define PI 3.14

using namespace std;

float MyArcTangent(float y, float x);

int main()
{
    cout << MyArcTangent(4,2) << endl;
    cout << MyArcTangent(5,-1) << endl;
    cout << MyArcTangent(-4,-6) << endl;
    cout << MyArcTangent(-6,4) << endl;
    return 0;
}

float MyArcTangent(float y, float x)
{
    float tangent = atanf(y/x) * 180/PI;
    if (x < 0)
    {
        tangent = tangent + 180;
    }
    return tangent;
};
