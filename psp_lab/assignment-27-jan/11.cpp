/* TITLE: Develop functional decomposition and write a C++ 
program to print the calendar of an year, given the day of 
the week of January first of the year.
    Assumptions:
    • Input is year, an integer > 1700
    • Input the day of Jan first, an integer 0 to 6 for Sunday through Saturday.
DATE: 27 Jan 2021
AUTHOR: Amrit Pandey MC20103 */

#include <iostream>
using namespace std;

bool is_leap(int);
void month_out(int *, int, bool);
void week_day(int);

int main()
{
    int counter, year;
    cout << "Enter first day of January(0-6): ";
    cin >> counter;
    cout << "Enter year(YYYY>1700): ";
    cin >> year;
    for (int y = 0; y < 12; y++)
    {
        cout << "Month " << y+1 << endl;
        switch (y+1)
        {
            case 1:
                month_out(&counter, 1, is_leap(year));
                break;
            case 2:
                month_out(&counter, 2, is_leap(year));
                break;
            case 3:
                month_out(&counter, 1, is_leap(year));
                break;
            case 4:
                month_out(&counter, 0, is_leap(year));
                break;
            case 5:
                month_out(&counter, 1, is_leap(year));
                break;
            case 6:
                month_out(&counter, 0, is_leap(year));
                break;
            case 7:
                month_out(&counter, 1, is_leap(year));
                break;
            case 8:
                month_out(&counter, 1, is_leap(year));
                break;
            case 9:
                month_out(&counter, 0, is_leap(year));
                break;
            case 10:
                month_out(&counter, 1, is_leap(year));
                break;
            case 11:
                month_out(&counter, 0, is_leap(year));
                break;
            case 12:
                month_out(&counter, 1, is_leap(year));
                break;
        }
    }
    return 0;
}


// check if year is leap or not
bool is_leap(int year)
{
    return (year%4 == 0 && year%100 == 0) || year%4 == 0;
}


void month_out(int *counter, int month_type, bool is_leap)
{
    /* month types:
        0: 30 days month
        1: 31 days month
        2: February
    */
    int week_start;
    week_start = *counter;
    switch (month_type)
    {
        case 0:
            for (int i = 0; i < 30; i++)
            {
                cout << i+1 << " : ";
                week_day(week_start%7);
                cout << endl;
                week_start++;
            }
            break;
        case 1:
            for (int i = 0; i < 30; i++)
            {
                cout << i+1 << " : ";
                week_day(week_start%7);
                cout << endl;
                week_start++;
            }
            break;
        case 2:
            if (is_leap)
            {
                for (int i = 0; i < 29; i++)
                {
                    cout << i+1 << " : ";
                    week_day(week_start%7);
                    cout << endl;
                    week_start++;
                }
            }
            else
            {
                for (int i = 0; i < 28; i++)
                {
                    cout << i+1 << " : ";
                    week_day(week_start%7);
                    cout << endl;
                    week_start++;
                }
            }
            break;
    }

    *counter = week_start;
}


void week_day(int val)
{
    switch (val)
    {
        case 0:
            cout << "Mon";
            break;
        case 1:
            cout << "Tue";
            break;
        case 2:
            cout << "Wed";
            break;
        case 3:
            cout << "Thur";
            break;
        case 4:
            cout << "Fri";
            break;
        case 5:
            cout << "Sat";
            break;
        case 6:
            cout << "Sun";
            break;
    }
}