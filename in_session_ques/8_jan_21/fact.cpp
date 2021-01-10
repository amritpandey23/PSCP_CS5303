/* TITLE: do-while: factorial of a given number
DATE: 10 Jan 2021
AUTHOR: Amrit Pandey @ok_ape */
#include <iostream>
using namespace std;

int main()
{
    int f = 1, n;
    cout << "Enter a number to generate its factorial: ";
    cin >> n;
    do {
        f*=n;
        n--;
    } while(n>=1);
    cout << "factorial=" << f << endl;
    return 0;
}