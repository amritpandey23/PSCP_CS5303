/* TITLE: A five-digit number is entered through the keyboard. 
Write a program to obtain the reversed number and to determine 
whether the original and reversed numbers are equal or not.
DATE: 27 Jan 2021
AUTHOR: Amrit Pandey MC20103 */

#include <iostream>
using namespace std;

int main()
{
    int n, nn, rmdr;
    nn = 0;

    cout << "Enter a number: ";
    cin >> n;

    while (n != 0)
    {
        rmdr = n%10;
        if (rmdr != 9)
        {
            nn = nn*10 + (rmdr+1);
        }
        else
        {
            nn = nn*10;
        }
        n /= 10;
    }

    n = nn;
    nn = 0;
    while (n != 0)
    {
        rmdr = n%10;
        nn = nn*10 + rmdr;
        n /= 10;
    }

    cout << "New Number: " << nn << endl;

    return 0;
}
