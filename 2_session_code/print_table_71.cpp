/* TITLE: Print following table with for loop
NUMBER SQUARE CUBE
DATE: 07 Jan 2021
AUTHOR: Amrit Pandey @ok_ape MC20103 */

#include <iostream>
#define LIMIT 20                    /* total rows in table */
using namespace std;

int main()
{
    cout << "NUMBER\tSQUARE\tCUBE\n";
    for(int i = 1; i< LIMIT; i++)
        cout << i << "\t" << i*i << "\t" << i*i*i << "\n";
    return 0;
}