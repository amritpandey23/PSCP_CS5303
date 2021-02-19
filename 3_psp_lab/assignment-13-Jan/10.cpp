/* TITLE: 
DATE:
AUTHOR: Amrit Pandey MC20103*/
#include <iostream>
#include <math.h>
#define PI 3.141592654
using namespace std;

int main()
{
    float x, y;
    cout << "Enter x, y coordinates: ";
    cin >> x >> y;
    cout << "Polar coordinates: (" << sqrt(x*x + y*y) << ", " << (atan(y/x)*180)/PI << "º)" << endl;
    return 0;
}