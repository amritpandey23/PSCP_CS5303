/* TITLE:
DATE:
AUTHOR: */
#include <iostream>
using namespace std;

int main() {
    long int n;
    int sum;
    sum = 0;
    cout << "Enter any positive number: ";
    cin >> n;
    cout << "Sum of all the digits of " << n << " = ";
    while (n != 0)
    {
        sum += n%10;
        n /= 10;
    }
    cout << sum << endl;
    return 0;
}