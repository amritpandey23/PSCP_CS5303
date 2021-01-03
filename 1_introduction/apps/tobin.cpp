/* TITLE: to convert decimal to binary number using
bitwise operators.
DATE: 03 Jan 2021
AUTHOR: Amrit Pandey @ok_ape */

#include <iostream>
using namespace std;

int main()
{
    unsigned char n, i = 8;
    cout << "Enter any non-negative number(0-128): ";
    cin >> n;
    cout << "The binary form of " << n << " is ";
    while(i != 0) {
        ((1<<i)&n) == 0 ? /* (1<<i) creates a mask for each bit of n */
        cout << "0" : 
        cout << "1";
        i--;
    }
    cout << endl;
    return 0;
}