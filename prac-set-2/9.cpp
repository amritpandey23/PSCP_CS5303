/* Q.9: Write a program to accept a number 
and find sum of its individual digits 
repeatedly till the result is a single digit. 
For example, if the given number is 4687 
the output should be 7.

TITLE: Question 2, Practice Set 2, PSP Lab MCA I
AUTHOR: Amrit Pandey MC20103
EMAIL: apmc20103@student.nitw.ac.in
DATE: 06 Jan 2021 */

#include <iostream>
#define LIMIT 9                                 /* threshold for sum */
using namespace std;

int prompt(); 
int sumofdigits(long long);

int main()
{
    unsigned long long num;                     /* number from user */
    num = prompt();
    while(sumofdigits(num) > LIMIT) {
        cout << num << endl; 
        num = sumofdigits(num);
    }
    cout << "Final sum: " << sumofdigits(num) << endl;
}

int sumofdigits(long long n) /* returns sum of digits of number */
{
    int s = 0;
    while(n%10 != 0) {
        s += n%10;
        n /= 10;
    }
    return s;
}

int prompt() /* asks for user's input */
{
    int r;
    cout << "Enter any +ve number: ";
    cin >> r;
    return r;
}