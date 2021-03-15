/* TITLE: Problem 1
DATE:
AUTHOR: Amrit Pandey MC20103 */
#include <iostream>
using namespace std;

void reverse_num(int);
int reverse_num_2(int);

int main()
{
    // Write here
    int n;
    cout << "Enter a number to reverse: ";
    cin >> n; // 54321
    reverse_num(n); // output: Reversed Number = 12345
    cout << "Reversed Number is " << reverse_num_2(n) /* output: 12345 */ << endl;
    return 0;
}

void reverse_num(int n) // no return
{
    int reversedNumber = 0, remainder;

    while(n != 0) {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }

    cout << "Reversed Number = " << reversedNumber;
}

int reverse_num_2(int n) // int return
{
    int reversedNumber = 0, remainder;

    while(n != 0) {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }

    return n;
}
