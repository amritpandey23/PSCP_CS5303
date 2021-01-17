/* TITLE: 
DATE:
AUTHOR: */

#include <iostream>
#include <math.h>
#define PI 3.14159
using namespace std;

int main()
{
    float angl;
    cout << "Enter angle value in degrees: ";
    cin >> angl;
    angl *= PI/180;
    cout << "Sin\t" << sin(angl) << endl;
    cout << "Cos\t" << cos(angl) << endl;
    cout << "Tan\t" << tan(angl) << endl;
    cout << "Cot\t" << 1/tan(angl) << endl;
    cout << "Sec\t" << 1/cos(angl) << endl;
    cout << "Cosec\t" << 1/sin(angl) << endl;
    return 0;
}