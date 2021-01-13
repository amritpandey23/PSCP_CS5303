/*
TITLE:
AUTHOR:
DATE: 
*/

#include <iostream>
using namespace std;

bool isTriangle(int, int, int);
void typeCheck(int, int, int);

int main()
{

}

bool validate(int a, int b, int c)
{
    if(
        (a+b) <= c ||
        (b+c) <= a ||
        (c+a) <= b
    ) return false;

    return true;
}

void typeCheck(int a, int b, int c)
{
    
}