/* TITLE:
DATE:
AUTHOR: Amrit Pandey MC20103*/
#include <iostream>
using namespace std;

int calc(int);

int main() {
    unsigned long int n;
    cout << "Enter any +ve number: ";
    cin >> n;
    while (n > 9)
    {
        n = calc(n);
    }
    cout << "Result = " << n << endl;
    return 0;
}

int calc(int x)
{
    int sum;
    sum = 0;
    while (x != 0)
    {
        sum += x%10;
        x /= 10;
    }
    return sum;
}