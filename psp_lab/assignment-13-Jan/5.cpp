/* Q.6: Find out the average of n numbers.

TITLE: Question 6, Practice Set 2, PSP Lab MCA I
AUTHOR: Amrit Pandey MC20103
EMAIL: apmc20103@student.nitw.ac.in
DATE: 06 Jan 2021 */

#include <iostream>
using namespace std;

int main()
{
    unsigned int n, l, temp;            /* temp: to store user input */
    float sum = 0.0;                    /* total sum */
    cout << "Enter total cases(n): ";
    cin >> n;
    l = n;
    while(n != 0) {
        cout << "enter (" << n << ") number: ";
        cin >> temp;
        sum += temp;
        --n;
    }
    cout << "The average of these numbers = " << sum/l << endl;
}