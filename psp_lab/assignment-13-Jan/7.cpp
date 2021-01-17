/* TITLE: Assignment 13 Jan 2021, Question 7
DATE: 13 Jan 2021
AUTHOR: Amrit Pandey @ok_ape */
#include <iostream>
using namespace std;

bool isArmstrong(int);

int main()
{
    for(int i = 1; i <= 500; i++)
    {
        if (isArmstrong(i))
        {
            cout << i << endl;
        }
    }
    return 0;
}

bool isArmstrong(int num)
{
    int f, s, t, n;
    f = 0; s = 0; t = 0; n = num;
    if (n <= 9)
    {
        f = n%10;
    }
    if (n > 9 && n <= 99)
    {
        f = n%10;
        n /= 10;
        s = n%10;
    }
    if (n >= 100)
    {
        f = n%10;
        n /= 10;
        s = n%10;
        n /= 10;
        t = n;
    }
    return f*f*f + s*s*s + t*t*t == num ? true : false;
}