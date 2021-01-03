/* TITLE: bitwise operators
DATE: 02 Jan 2021
AUTHOR: Amrit Pandey @ok_ape*/

#include <stdio.h>

int main()
{
    /* Bitwise operators in C/C++ are used to operate
    on bit or binary form of numbers. In C however we
    cannot represent a binary number. Only decimal and
    hexadecimal numbers can be represented. */
    /* The five bitwise operators are:
        • ~ 1's complement op
        • >> Right shift
        • << Left Shift
        • | OR
        • & AND 
    These are only operational on int and char datatypes. */

    char x, i;
    x = 65; /* 01000001 */

    printf("x<<2 = %d\n", x<<2);
    printf("x>>2 = %d\n", x>>2);
    printf("~x = %d\n", ~x);

    i = 1<<3; /* 00000100 */
    /* each individual bits of 
    65(01000001) is AND with 
    00000100, to give result of
    00000000. */
    printf("x&i = %d\n", x&i);
    printf("x|i = %d\n", x|i);

    return 0;
}