/* Q.4: Write a program to swap two numbers. 
Initially if a is 5 and b is 6 after swapping 
a should become 6 and b as 5. 

TITLE: Question 4, Practice Set 2, PSP Lab MCA I
AUTHOR: Amrit Pandey MC20103
EMAIL: apmc20103@student.nitw.ac.in
DATE: 06 Jan 2021 */

#include <iostream>
using namespace std;

int main()
{
    unsigned int temp, a, b;
    cout << "Enter two numbers to swap: ";
    cin >> a >> b;
    cout << "ORIGINAL VALUES - ";
    cout << "a: " << a << ", b: " << b << endl;
    temp = a; a = b; b = temp;                  /* swapping logic */
    cout << "SWAPPED VALUES - ";
    cout << "a: " << a << ", b: " << b << endl;
}