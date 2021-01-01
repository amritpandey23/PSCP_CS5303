/* TITLE: assignment operators
DATE: 31 Dec 2020
AUTHOR: Amrit Pandey @ok_ape*/
#include <iostream>
using namespace std;

int main()
{
    /* There is one assignment operator in C++ i.e. =
    however = is used together with +,-,*,/,% to form 
    five more types of assignment operators viz.
        • +=
        • -=
        • *=
        • /=
        • %=
    eg:
        a += b;
        is same as
        a = a+b;
    */
    int x, y;
    x = 240;
    y = 40;
    y = x;

    x %= y;
    cout << "Output: " << x << "\n"; 
    x += y;
    cout << "Output: " << x << "\n"; 
    x /= y;
    cout << "Output: " << x << "\n"; 
    x *= y;
    cout << "Output: " << x << "\n"; 
    x += y;
    cout << "Output: " << x << "\n"; 
    return 0;
}