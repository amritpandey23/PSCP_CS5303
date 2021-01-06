/* Q.3: If a five-digit number is input through 
the keyboard, write a program to reverse the number.

TITLE: Question 3, Practice Set 2, PSP Lab MCA I
AUTHOR: Amrit Pandey MC20103
EMAIL: apmc20103@student.nitw.ac.in
DATE: 06 Jan 2021 */

#include <iostream>
using namespace std;

int prompt();                   /* asks for user's input */

int main()
{
    unsigned int num;
    unsigned char d1, d2, d3, d4, d5;
    num = prompt();
    cout << "The reverse of " << num;
    d5 = num%10;
    num /= 10;
    d4 = num%10;
    num /= 10;
    d3 = num%10;
    num /= 10;
    d2 = num%10;
    num /= 10;
    d1 = num;
    num = d5*10000 + d4*1000 + d3*100 + d2*10 + d1;
    cout << " is " << num << endl;
}

int prompt()
{
    int r;
    cout << "Enter any +ve 5-digit number: ";
    cin >> r;
    return r;
}