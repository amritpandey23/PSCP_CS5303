/* TITLE: logical operators
DATE: 01 Jan 2021
AUTHOR: Amrit Pandey @ok_ape */

#include <iostream>
using namespace std;

int main()
{
    /* logical operators are used to determine
    truth/correctness of any expression. Three
    logical operators are &&, || and !. */
    bool x, y;
    x = true;
    y = false;
    cout << "x AND y = " << (x&&y) << "\n";
    /* logical operators usually works on boolean
    values of true(representing 1) and false(repr-
    esenting 0). However they can also work on any
    type representing 0 and 1.
        &&(AND): both operand must be true
        ||(OR): both operand must be false
        !(NOT): invert true/false value */
    x = true;
    y = false;
    x = !x; /* inverts x=true to x=false */
    cout << "x && y = " << (x&&y) << "\n";
    cout << "x || y = " << (x||y) << "\n";
    
    return 0;
}