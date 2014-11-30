#include <iostream>
#include <cmath>
using namespace std;

// Function to find the distance between two points in 3D space
// point u: x, y, z
// point v: x, y, z
float dist3(float ux, float uy, float uz,
            float vx, float vy, float vz);

// Same function as above, but takes 2 arrays instead of 6 coordinates
float dist3(float point1[3], float point2[3]);

// Function to print a 3D point
void printPoint(float point[3]);

// Wraps all the other functions together printing and solving
void printDistanceBetween(float point1[3], float point2[3]);


int main(){
    float point1[3] = {1,2,3};
    float point2[3] = {0,0,0};
    float point3[3] = {1,2,3};
    float point4[3] = {1,2,3};
    float point5[3] = {1,2,3};
    float point6[3] = {7,-4,5};

    printDistanceBetween(point1, point2);
    printDistanceBetween(point3, point4);
    printDistanceBetween(point5, point6);
}

float dist3(float ux, float uy, float uz, float vx, float vy, float vz){
    float distance = sqrtf(powf((vx - ux), 2)
                          +powf((vy - uy), 2)
                          +powf((vz - uz), 2));
    return distance;
};

float dist3(float point1[3], float point2[3]){
    float x[3] = {1,2,3};
    float distance = dist3(point1[0], point1[1], point1[2],
                           point2[0], point2[1], point2[2]);
    return distance;
};

void printPoint(float point[3]){
    cout << "(" << point[0] << ", " << point[1] << ", " << point[2] << ")";
};

void printDistanceBetween(float input_point1[3], float input_point2[3]){
    cout << "Distance between ";
    printPoint(input_point1);
    cout << " and ";
    printPoint(input_point2);
    cout << " = " << dist3(input_point1, input_point2) << endl;
};