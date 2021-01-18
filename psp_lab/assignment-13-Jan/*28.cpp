/* TITLE:
DATE:
AUTHOR: */
#include <iostream>
using namespace std;

int main() {
    int n, p, i, sign;
    sign = 1;
    cout << "Enter number and power: ";
    cin >> n >> p;
    i = n;
    if(p < 0)
    {
        sign = 0;
        p = -p;
    }
    while(p > 0)
    {
        n *= i;
        p--;
    }
    if(!sign)
    {
        cout << "Result: " << 1.00/n << endl;
    }
    else
    {
        cout << "Result: " << n << endl;
    }

  return 0;
}