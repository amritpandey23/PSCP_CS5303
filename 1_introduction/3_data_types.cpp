/* TITLE: Data types in C++
DATE: 31 Dec 2020
AUTHOR: Amrit Pandey @ok_ape */

#include <iostream>
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

    return 0;
}