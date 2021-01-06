/* Q.2: Enter 4 digit numbers through keyboard.
Write a program to obtain the sum of 1st 
and last digits of this number. 

TITLE: Question 2, Practice Set 2, PSP Lab MCA I
AUTHOR: Amrit Pandey MC20103
EMAIL: apmc20103@student.nitw.ac.in
DATE: 06 Jan 2021 */

#include <iostream>
using namespace std;

int prompt();               /* takes user input */

int main()
{
    unsigned int num, fd, ld;
    num = prompt();
    cout << "The sum of first and last digits of " << num <<" = ";
    ld = num%10;            /* last digit */
    num /= 1000;            /* trim num up to first digit */
    fd = num;               /* first digit */
    cout << (fd+ld) << endl;
}

int prompt()
{
    int r;
    cout << "Enter any +ve 4-digit number: ";
    cin >> r;
    return r;
}