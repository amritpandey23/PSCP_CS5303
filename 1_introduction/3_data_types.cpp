/* TITLE: Data types in C++
DATE: 31 Dec 2020
AUTHOR: Amrit Pandey @ok_ape */

#include <iostream>
#include <climits> /* file containing value limits of each data type */
using namespace std;

int main()
{
    /*
    Data types in C/C++ are classified in three main category:
    1. User-Defined datatypes
        - Enum
        - Structure
        - Union
        - Class
    2. Primitive
        - Int: 4 bytes
            • long int: 4 bytes
            • short int: 2 bytes
        - Float: 4 bytes
        - Double: 8 bytes
        - Boolean: 1 byte
        - Char: 1 byte
        - Void
    3. Derived
        - String
        - Array
        - Pointer
    */

    /* Premitive data types are declared below */
    int amt = 10;
    long int dens = 2147483646; 
    short int pop = 34;

    float pr = 12.34;
    double e =  2.718281828459045;

    char ini = 'A';

    bool ans = true;

    /* char string: to store group of characters
    we can create an array of char. This array
    will be equivialent to a fixed length string
    data type. */
    char stud_name[20] = "Siddhanta Ghosh";

    /* modifiers: the max/min limit of values used
    by any data type variable can be changed via
    modifiers. 
    Two modifiers in C++ are:
        1. signed: both positive and negative values
        2. unsigned: only positive and 0 values
    Eg:
        signed int angl = -45;
        unsigned int moon_dis = 35000; */
    signed int angl = -30000; // -32768 to -32767 in turbo C++ 16 bit comp
    unsigned int moon_dis = 35000; // 0 to 65535
    /* limits of all data types can be found in
    climits or limits.h header file */
    cout << "The maximum value of INT = " << INT_MAX << "\n";
    cout << "The minimum value of INT = " << INT_MIN << "\n";
    cout << "The maximum value of unsigned LONG LONG = " << ULONG_LONG_MAX << "\n";

    /* access qualifiers: these determine the nature
    of variables to be changed/mutated during runtime.
    The three qualifiers are:
        - const
        - mutable
        - volatile
    */
    const long ph_num = 9988776645; // cannot be changed during runtime


    return 0;
}