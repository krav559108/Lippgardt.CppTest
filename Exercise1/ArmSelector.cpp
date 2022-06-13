#include <iostream>
#include <cmath>
using namespace std;

bool isPointInCircle (double center_x, double center_y, double radius, double x, double y)
{
    if (pow((x - center_x), 2) + pow((y - center_y), 2) <= pow(radius, 2))
    {
        return true;
    }
    else
    {
        return false;
    }
}

double findDistance(double center_x, double center_y, double x, double y)
{
    {
        return sqrt(pow(x - center_x, 2) + pow(y - center_y, 2));
    }
}

bool chooseArm(double center_x1, double center_y1, double radius1, double center_x2, double center_y2, double radius2, double x,  double y)
{
    double d1 = 0;
    double d2 = 0;
    int arm1 = isPointInCircle(center_x1, center_y1, radius1, x, y);
    int arm2 = isPointInCircle(center_x2, center_y2, radius2, x, y);
    if (arm1 == 1)
    {
        cout << "Arm 1 is in range \n";
        d1 = findDistance(center_x1, center_y1, x, y);
    }
    else
    {
        cout << "Arm 1 is out of range \n";
    }
    if (arm2 == 1)
    {
        cout << "Arm 2 is in range \n";
        d2 = findDistance(center_x2, center_y2, x, y);
    }
    else
    {
        cout << "Arm 2 is out of range \n";
    }
    if (arm1 == 0 && arm2 == 0)
    {
        cout << "OUT OF RANGE\n";
        exit(0);
    }
    if (d1 > d2)
    {
        cout << "Arm 2 is moving\n";
        center_x2 = x; center_y2 = y;
        return 1;
    }
    else
    {
        cout << "Arm 1 is moving\n";
        center_x1 = x; center_y1 = y;
        return 0;
    }
}

