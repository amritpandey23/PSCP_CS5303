/* TITLE: for loop: fibonacci series
DATE: 10 Jan 2021
AUTHOR: Amrit Pandey @ok_ape */

#include <iostream>
using namespace std;

int main()
{
    int f1, f2, n, temp;
    f1 = 0; f2 = 1;
    cout << "Enter the limit of fibonacci series: ";
    cin >> n;
    for(int i = 0; i<n; i++) {
        if (i == 0)
            cout << f1 << " ";
        cout << f2 << " ";
        temp = f2;
        f2 += f1;
        f1 = temp;
    }
    cout << endl;


    return 0;
}