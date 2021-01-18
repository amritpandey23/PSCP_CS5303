/* TITLE: 
DATE:
AUTHOR: Amrit Pandey MC20103*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    /* Wind chill factor is given by:
        WCI = [10*(v^0.5) - v + 10.5]*(33 - T)
    v = velocity of wind m/s
    T = air temperature º C
    Wci = wind chill factor */
    float tmp, wci, v;
    cout << "Enter air temperature(ºC) and wind velocity(m/s): ";
    cin >> tmp >> v;
    wci = (10*sqrt(v) - v + 10.5)*(33 - tmp);
    cout << "Wind Chill Factor is " << wci << "kg*cal/m2/h" << endl;
    return 0;
}