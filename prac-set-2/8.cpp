/* Q.8: Write a program to print the 
sum of digits of any positive number.

TITLE: Question 8, Practice Set 2, PSP Lab MCA I
AUTHOR: Amrit Pandey MC20103
EMAIL: apmc20103@student.nitw.ac.in
DATE: 06 Jan 2021 */

#include <iostream>
using namespace std;

int prompt();

int main()
{
    unsigned int num, sum = 0;
    num = prompt();
    cout << "The sum of digits of ";
    cout << num << " is = ";
    while(num%10 != 0) {
        sum += num%10;
        num /= 10;
    }
    cout << sum << endl;
}

int prompt() /* takes user's input */
{
    int r;
    cout << "Enter any +ve number(under int max limit): ";
    cin >> r;
    return r;
}