/* TITLE: 1. Write a program to get following output
    A B C D E F E D C B A 
    A B C D E   E D C B A 
    A B C D       D C B A
    A B C           C B A
    A B               B A 
    A                   A
DATE:
AUTHOR: Amrit Pandey MC20103 */

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "How many characters do you want to print: \n";
    cin >> n;

    for(int row = 0; row < n; row++)
    {
        int start;
        start = 65;
        for (int i = 1; i <= n-row; i++)
        {
            cout << (char)start++ << " ";
        }
        for (int j = 0; j < (2 * row - 1); j++)
        {
            cout << "  ";
        }
        if (row == 0)
        {
            start -= 2;
        }
        else 
        {
            start--;
        }
        while (start >= 65)
        {
            cout << (char)start-- << " ";
        }
        cout << endl;
    }

    return 0;
}