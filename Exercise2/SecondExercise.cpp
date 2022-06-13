#include <iostream>
#include <cmath>
#include "../Exercise1/ArmSelector.h"
using namespace std;

double m1[2][2] = {{0, 0},{4}}; // {{center_x, center_y}, radius}
double m2[2][2] = {{2, 1},{3}}; // {{center_x, center_y}, radius}
const int numberOfPoints = 5;
double observationPoints[numberOfPoints][2] =
        {
                {1,3}, {2, 1.41}, {0.2, -7}, {-5, -1}, {0, 9}
        }; // {center_x, center_y}



int main() {
    int i;
    double updX1, updY1, updX2, updY2;
    updX1 = m1[0][0]; updY1 = m1[0][1];
    updX2 = m2[0][0]; updY2 = m2[0][1];
    for (i = 0; i < numberOfPoints; i++)
    {
        cout << "Point #" << i+1 << "\n";
        bool result = chooseArm(updX1, updY1, m1[1][0], updX2, updY2, m2[1][0], observationPoints[i][0], observationPoints[i][1]);
        double d1 = findDistance(updX1,updY1, observationPoints[i][0], observationPoints[i][1]);
        double d2 = findDistance(updX2, updY2, observationPoints[i][0], observationPoints[i][1]);
        cout << d1 << "\n";
        cout << d2 << "\n";
        if (result == 0)
        {
            updX1 = observationPoints[i][0]; updY1 = observationPoints[i][1];
        }
        else
        {
            updX2 = observationPoints[i][0]; updY2 = observationPoints[i][1];
        }



    }
//
//    chooseArm(m1[0][0], m1[0][1], m1[1][0], m2[0][0], m2[0][1], m2[1][0], observationPoints[0][0], observationPoints[0][1]);
//    cout << "\n";
//    cout << findDistance(m1[0][0],m1[0][1], observationPoints[0][0], observationPoints[0][1]);
//    cout << "\n";
//    cout << findDistance(m2[0][0], m2[0][1], observationPoints[0][0], observationPoints[0][1]);
//    cout << "\n";
    return 0;
}