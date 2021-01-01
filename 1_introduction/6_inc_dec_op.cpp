/* TITLE: increment and decrement ops
DATE: 01 Jan 2021
AUTHOR: Amrit Pandey @ok_ape*/

#include <iostream>
using namespace std;

int main()
{
    /* C/C++ provides two special arithemetic 
    operators. These are increment ++ and
    decrement operators --.
        ++: increases operand value by 1
        --: decreases operand value by 1 */
    int x, y;
    x = 10;
    y = 0;

    ++y; /* increase value of y by 1 */
    cout << "1) y = " << y << "\n";

    y += ++x; /* increase value of x to 11 and set y to 12*/
    cout << "2) x = " << x << ", y = " << y << "\n";

    y++; x++; /* same as ++y and ++x */
    /* There are two ways to use them:
        - prefix: using before operand -- ++x
        - postfix: using after operand -- x++
    prefix op inc/dec the value before running
    the expressing however, postfix inc/dec 
    value after the expression have run. */

    x = 10; y = 0;
    y += x++; /* sets value of y = 10, then increment x to 11 */
    cout << "3) y = " << y << ", x = " << x << "\n";

    return 0;
}