/* TITLE: 
DATE:
AUTHOR: */

#include <iostream>
#include <math.h>
using namespace std;

int fact(int);

int main()
{
    /* Sum of following series:
        1 + X + (X*X)/2! + (X*X*X)/3! + (X*X*X*X)/4! +............. */
    int n, x;
    float sum;
    sum = 0.0;
    cout << "Enter n and x: ";
    cin >> n >> x;
    for(int i = 0; i < n; i++)
    {
        sum += pow(x, i)/fact(i);
    }
    cout << "Sum of the series = " << sum << endl;
    return 0;
}

int fact(int n)
{
    int f  = 1;
    while(n > 0)
    {
        f *= n;
        n--;
    }
    return f;
}