/* TITLE: check whether a given program is even or odd
DATE: 10 Jan 2021
AUTHOR: Amrit Pandey MC20103 @ok_ape */
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num%2 == 0)
        cout << num << " is an even number." << endl;
    else
        cout << num << " is an odd number." << endl;
    return 0;
}