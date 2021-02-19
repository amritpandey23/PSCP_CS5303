/* Q.5: Find out the sum of squares of first n numbers

TITLE: Question 5, Practice Set 2, PSP Lab MCA I
AUTHOR: Amrit Pandey MC20103
EMAIL: apmc20103@student.nitw.ac.in
DATE: 06 Jan 2021 */

#include <iostream>
using namespace std;

int main()
{
    unsigned int n = 1, sum = 0;
    cout << "Sum of square of first N natural numbers\n";
    cout << "Enter the value of N: ";
    cin >> n;
    cout << "The sum of first " << n << " natural numbers is ";
    while(n != 0) {
        sum += n*n;
        --n;
    }
    cout << sum << endl;
}