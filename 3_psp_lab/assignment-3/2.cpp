/*
TITLE: Question 2, Assignment 3, PSP Lab
AUTHOR: Amrit Pandey MC20103
DATE: 06 Jan 2021
*/

#include <iostream>
using namespace std;

int main()
{
    unsigned char in;
    cout << "Enter any character: ";
    cin >> in;
    if (in >= 65 && in <= 90)
        cout << "character entered is uppercase letter\n";
    else if (in >= 97 && in <= 122)
        cout << "character entered is lowercase letter\n";
    else if (in >= 48 && in <= 57)
        cout << "character entered is a single digit\n";
    else if (
        in >= 0 && in <= 47 ||
        in >= 58 && in <= 64 ||
        in >= 91 && in <= 96 ||
        in >= 123 && in <= 127 
    )
        cout << "entered character is a special symbol\n";
}