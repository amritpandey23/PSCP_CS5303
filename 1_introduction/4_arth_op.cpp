/* TITLE: arithemetic operators in c++
DATE: 31 Dec 2020
AUTHOR: Amrit Pandey @ok_ape*/
#include <iostream>
using namespace std;

int main()
{
    /* There are six arithemetic ops in c++
    These are:
        / * %       I
         + -        II
          =         III
    */
    int num1, num2;
    num1 = 120;
    num2 = 30;

    cout << "num1 / num2 = " << num1/num2 << "\n"; /* division */
    cout << "num1 % num2 = " << num1%num2 << "\n"; /* mod */
    cout << "num1 * num2 = " << num1*num2 << "\n"; /* multiplication */
    cout << "num1 - num2 = " << num1-num2 << "\n"; /* substraction */
    cout << "num1 + num2 = " << num1+num2 << "\n"; /* addition */

    return 0;
}