/* TITLE: 
DATE:
AUTHOR: Amrit Pandey MC20103 */
#include <iostream>
using namespace std;

int main()
{
    // Write here
    int a, b;
    cout << "enter two numbers to swap: ";
    cin >> a >> b;
    swap(a, b);
    return 0;
}

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = a;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}