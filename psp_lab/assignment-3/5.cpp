/*
TITLE: Question 5, Assignment 3, PSP Lab
AUTHOR: Amrit Pandey MC20103
DATE: 06 Jan 2021
*/

#include <iostream>
using namespace std;

int main()
{
    unsigned int days;
    cout << "Enter number of late days: ";
    cin >> days;
    if(days <= 5)
        cout << "Fine is Rs. 0.5\n";
    else if(days >= 6 && days <= 10)
        cout << "Fine is Rs. 1\n";
    else if(days >= 11 && days <= 29)
        cout << "Fine is Rs. 5\n";
    else
        cout << "Your membership is cancelled.\n";

}