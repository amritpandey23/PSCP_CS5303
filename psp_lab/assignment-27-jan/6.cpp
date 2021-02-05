/* TITLE: A five-digit number is entered through the keyboard. 
Write a program to obtain the reversed number and to determine 
whether the original and reversed numbers are equal or not.
DATE: 27 Jan 2021
AUTHOR: Amrit Pandey MC20103 */

#include <iostream>
using namespace std;

int main()
{
    int n, rn, rmdr;
    rn = 0;

    cout << "Enter a number: ";
    cin >> n;

    while(n != 0)
    {
        rmdr = n%10;
        rn = rn*10 + rmdr;
        n /= 10;
    }

    cout << "Reversed Number: " << rn << endl;
    if (n == rn)
    {
        cout << "The reversed number is same as original number." << endl;
    }

    return 0;
}