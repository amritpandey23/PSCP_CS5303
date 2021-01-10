/* TITLE: input numbers in ascending order
DATE: 10 Jan 2021
AUTHOR: Amrit Pandey @ok_ape */

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    if (a>b)
    {
        if (b>c)
            cout << "order: " << a << " " << b << " " << c << endl;
        else
             cout << "order: " << a << " " << c << " " << b << endl;
    } else 
    return 0;
}