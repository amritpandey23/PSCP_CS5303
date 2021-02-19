/* TITLE: Write a function to take a floating point number as input and returns the same number rounded
to k decimal places. Do not use any system defined functions. If input is 17.24578, and k = 2, the
output is 17.25 and 345.2034 is rounded as 345.20.
DATE: 27 Jan 2021
AUTHOR: Amrit Pandey MC20103 */

#include <iostream>
#include <cmath>
using namespace std;

float round_out(float , int);

int main()
{
    float num;
    int plc;
    cout << "Enter number and places to round: ";
    cin >> num >> plc;
    num = round_out(num, plc);
    cout << "Result = " << num << endl;
    return 0;
}

float round_out(float num, int plc)
{
    float dc;
    num = num * pow(10, plc);
    dc = num - (int)num;
    if (dc > 0.5)
    {
        num += 1;
    }
    num = (int)num;
    num /= pow(10, plc);
    return num;
}