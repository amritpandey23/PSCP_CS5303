/* TITLE: 
DATE:
AUTHOR: Amrit Pandey MC20103 */
#include <iostream>
using namespace std;

int largest_among(int &, int &, int &);

int main()
{
    // Write here
    int a, b, c, max;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    int &x = a;
    int &y = b;
    int &z = c;
    max = largest_among(x, y, z);
    cout << "Maximum = " << max << endl;
    return 0;
}

int largest_among(int &a, int &b, int &c)
{
    if (a > b && a > c)
    {
        return a;
    }

    if (b > a && b > c)
    {
        return b;
    }

    if (c > b && c > a)
    {
        return c;
    }
}