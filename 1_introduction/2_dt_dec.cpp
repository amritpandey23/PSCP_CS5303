/* TOPIC: data type and variable declaration syntax in C++
DATE: 31 Dec 2020
AUTHOR: Amrit Pandey @ok_ape */

#include <iostream> 
using namespace std;

int main() 
{
    /* In C++, variables are declared in following syntax:
        <data_type> <var_name> [= assignment_val];
        eg:
            int amount = 1000; */
    int amount = 1000;
    /* In addition to data types, we also use
    modifiers and qualifiers */
    unsigned int pr; /* unsigned modifer */
    const float pi = 3.1458; /* const qualifier */
    
    return 0;
}