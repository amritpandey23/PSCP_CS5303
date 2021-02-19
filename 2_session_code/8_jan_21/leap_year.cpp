/* TITLE: check if given year is leap or not
DATE: 10 Jan 2021
AUTHOR: Amrit Pandey @ok_ape */
#include <iostream>
using namespace std;

int main()
{
    int yr;
    cout << "Enter the year(YYYY): ";
    cin >> yr;
    if (yr%100 == 0)
    {
        if(yr%400 == 0)
            cout << yr << " is a leap year." << endl;
        else
            cout << yr << " is not a leap year." << endl;
    } else if (yr%4 == 0)
        cout << yr << " is a leap year." << endl;
    else
        cout << yr << " is not a leap year." << endl;
    return 0;
}