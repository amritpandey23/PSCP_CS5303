/* TITLE: comparision op
DATE: 01 Jan 2021
AUTHOR: Amrit Pandey*/

#include <iostream>
using namespace std;

int main()
{
    /* comparision operators evaluate relationship
    between two operands. return type: bool(0 or 1)
    They are of 5 types:
        • > -- greater than
        • < -- less than
        • >= -- greater than or equal to
        • <= -- less than or equal to
        • != -- not equal to
    */
    int a, b;
    a = 100; b = 3001;

    cout << "a = " << a << ", b = " << b << "\n";
    cout << "a > b = " << (a>b) << "\n";
    cout << "a < b = " << (a<b) << "\n";
    cout << "a >= b = " << (a>=b) << "\n";
    cout << "a <= b = " << (a<=b) << "\n";
    cout << "a != b = " << (a!=b) << "\n";
    return 0;
}