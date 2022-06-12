#include <iostream>
#include <cmath>
using namespace std;

double center_x1, center_y1, center_x2, center_y2, px, py, radius1, radius2;

bool isPointInCircle (double center_x, double center_y, double radius, double x,  double y)
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

int findDistance(double center_x, double center_y, double x,  double y)
{
    {
        return sqrt(pow(x - center_x, 2) + pow(y - center_y, 2) * 1.0);
    }
}

void chooseArm(double center_x1, double center_y1, double radius1, double center_x2, double center_2, double radius2, double x,  double y)
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
    if (d1 >= d2)
    {
        cout << "Arm 1 is moving\n";
    }
    else if  (d2 > d1)
    {
        cout << "Arm 2 is moving\n";
    }
    else
    {
        cout << "OUT OF RANGE\n";
    }

}

int main() {
    center_x1 = 1; center_y1 = 1; radius1 = 5;
    center_x2 = -1; center_y2 = 3; radius2 = 2;
    px = 3; py = 3;

    chooseArm(center_x1, center_y1, radius1, center_x2, center_y2, radius2, px, py);
    return 0;
}
