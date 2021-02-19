/*
TITLE: Question 4, Assignment 3, PSP Lab
AUTHOR: Amrit Pandey MC20103
DATE: 06 Jan 2021
*/

#include <iostream>
using namespace std;

int eval(bool, bool, bool);

int main()
{
    bool c1, c2, c3;
    int hrd, ts;
    float cbn;
    cout << "Enter hardness (0 - 100),\ncarbon content(0.0 - 1.0)\nand tensile strength: ";
    cin >> hrd >> cbn >> ts;
    c1 = hrd > 50;
    c2 = cbn < 0.7;
    c3 = ts > 5600;
    cout << "The steel is of grade " << eval(c1, c2, c3) << endl;
}

int eval(bool c1, bool c2, bool c3)
{
    if(!c1 && !c2 && !c3)
        return 5;
    if(c1 && c2 && c3)
        return 10;
    if(c1 && c2 && !c3)
        return 9;
    else if(c1 && !c2 && c3)
        return 7;
    else if(!c1 && c2 && c3)
        return 8;
    else 
        return 6;
}