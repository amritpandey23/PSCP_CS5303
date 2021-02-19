/* TITLE: If the total selling price of 15 items and the
 total profit earned on them is input through the keyboard, 
 write a program to find the cost price of one item.
DATE: 27 Jan 2021
AUTHOR: Amrit Pandey MC20103 */

#include <iostream>
using namespace std;
int main()
{
    float sp, p, cp;  
    cout << "Enter the selling price of 15 items: ";
    cin >> sp;
    cout << "Enter the profit on 15 items: ";
    cin >> p;
    cp = (sp-p)/15;
    cout << "\nThe cost price of an item is " << cp << endl;
    return 0;
}