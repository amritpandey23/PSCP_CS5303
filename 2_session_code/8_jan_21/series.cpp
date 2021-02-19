/* TITLE: sum of following series
DATE: 10 Jan 2021
AUTHOR: Amrit Pandey @ok_ape */
#include <iostream>
using namespace std;

int series1(int);
int series2(int);
int fact(int);

int main()
{
    int n;
    /* sum of following series:
        1. 1+2+3+ ... +n
        2. 1 + 1.2 + 1.2.3 + 1.2.3.4 + ... + 1.2.3.4...n */
    cout << "Enter N to generate series: ";
    cin >> n;
    cout << "1+2+3+...+" << n << " = " << series1(n) << endl;
    cout << "1 + 1.2 + 1.2.3 + ... + 1.2.3.4..." << n << " = " << series2(n) << endl;
    
    return 0;
}

int fact(int x)
{
    int fact = 1;
    while(x > 0) {
        fact *= x;
        x--;
    }
    return fact;
}

int series1(int n)
{
    int sum = 0;
    while(n>0) {
        sum += n;
        n--;
    }
    return sum;
}

int series2(int n)
{
    int sum = 0;
    while(n>0) {
        sum += fact(n);
        n--;
    }
    return sum;
}