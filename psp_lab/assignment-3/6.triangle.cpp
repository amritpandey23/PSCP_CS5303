/*
TITLE: Question 6.triangle, Assignment 3, PSP Lab
AUTHOR: Amrit Pandey MC20103
DATE: 13 Jan 2021
*/

#include <iostream>
using namespace std;

bool isTriangle(int, int, int);
void typeCheck(int, int, int);

int main()
{
    int a, b, c;
    cout << "Enter sides of triangle: ";
    cin >> a >> b >> c;
    if (isTriangle(a, b, c)) {
        cout << "The sides entered forms a real triangle.\n";
        typeCheck(a, b, c);
    } else {
        cout << "The sides entered does not form a real triangle.\n";
    }
    return 0;
}

bool isTriangle(int a, int b, int c)
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
    if(a == b == c)
        cout << "Triangle is an equilateral triangle.\n";
    else if (a == b || b == c || a == c)
        cout << "Triangle is an isosceles triangle.\n";
    else {
        cout << "Triangle is an scalene triangle\n";
        if (
            a * a == b * b + c * c || 
            b * b == a * a + c * c ||
            c * c == a * a + b * b
        ){
            cout << "Triangle is also a right angle triangle.\n";
        }
    }
        
}