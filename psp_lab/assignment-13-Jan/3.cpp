/* TITLE:
DATE:
AUTHOR: */
#include <iostream>
using namespace std;

int main() {
    int a, b, c, max;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    max = a;
    if (b > a && b > c)
    {
        max = b;
    }
    else if (c > a && c > b)
    {
        max = c;
    }
    cout << max << " is the maximum among the three." << endl;
    if (max % 2 == 0)
    {
        cout << max << " is an even number." << endl;
    }
    else
    {
        cout << max << " is an odd number." << endl;
    }
    return 0;
}