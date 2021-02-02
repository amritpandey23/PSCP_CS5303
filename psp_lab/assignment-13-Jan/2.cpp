/*
TITLE: Question 1, Assignment 3, PSP Lab
AUTHOR: Amrit Pandey MC20103
DATE: 06 Jan 2021
*/

#include <iostream>
using namespace std;

int main()
{
    unsigned int year;
    cout << "Enter year(YYYY): ";
    cin >> year;
    (year%4 == 0 && year%100 == 0) || year%4 == 0 ?
    cout << year << " is a leap year." :
    cout << year << " is not a leap year.\n";
}